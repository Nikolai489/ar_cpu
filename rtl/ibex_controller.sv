// Copyright lowRISC contributors.
// Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

/**
 * Main controller of the processor
 */

`include "prim_assert.sv"
`include "dv_fcov_macros.svh"
`include "ibex_controller_body.sv"
module ibex_controller #(
  parameter bit WritebackStage  = 1'b0,
  parameter bit BranchPredictor = 1'b0,
  parameter bit MemECC          = 1'b0
 ) (
  input  logic                  clk_i,
  input  logic                  rst_ni,

  output logic                  ctrl_busy_o,             // core is busy processing instrs

  // decoder related signals
  input  logic                  illegal_insn_i,          // decoder has an invalid instr
  input  logic                  ecall_insn_i,            // decoder has ECALL instr
  input  logic                  mret_insn_i,             // decoder has MRET instr
  input  logic                  dret_insn_i,             // decoder has DRET instr
  input  logic                  wfi_insn_i,              // decoder has WFI instr
  input  logic                  ebrk_insn_i,             // decoder has EBREAK instr
  input  logic                  csr_pipe_flush_i,        // do CSR-related pipeline flush

  // instr from IF-ID pipeline stage
  input  logic                  instr_valid_i,           // instr is valid
  input  logic [31:0]           instr_i,                 // uncompressed instr data for mtval
  input  logic [15:0]           instr_compressed_i,      // instr compressed data for mtval
  input  logic                  instr_is_compressed_i,   // instr is compressed
  input  logic                  instr_bp_taken_i,        // instr was predicted taken branch
  input  logic                  instr_fetch_err_i,       // instr has error
  input  logic                  instr_fetch_err_plus2_i, // instr error is x32
  input  logic [31:0]           pc_id_i,                 // instr address

  // to IF-ID pipeline stage
  output logic                  instr_valid_clear_o,     // kill instr in IF-ID reg
  output logic                  id_in_ready_o,           // ID stage is ready for new instr
  output logic                  controller_run_o,        // Controller is in standard instruction
                                                         // run mode
  input  logic                  instr_exec_i,            // Execution control, when clear ID/EX
                                                         // stage stops accepting instructions from
                                                         // IF
  // to prefetcher
  output logic                  instr_req_o,             // start fetching instructions
  output logic                  pc_set_o,                // jump to address set by pc_mux
  output ibex_pkg::pc_sel_e     pc_mux_o,                // IF stage fetch address selector
                                                         // (boot, normal, exception...)
  output logic                  nt_branch_mispredict_o,  // Not-taken branch in ID/EX was
                                                         // mispredicted (predicted taken)
  output ibex_pkg::exc_pc_sel_e exc_pc_mux_o,            // IF stage selector for exception PC
  output ibex_pkg::exc_cause_t  exc_cause_o,             // for IF stage, CSRs

  // LSU
  input  logic [31:0]           lsu_addr_last_i,         // for mtval
  input  logic                  load_err_i,
  input  logic                  store_err_i,
  input  logic                  mem_resp_intg_err_i,
  output logic                  wb_exception_o,          // Instruction in WB taking an exception
  output logic                  id_exception_o,          // Instruction in ID taking an exception

  // jump/branch signals
  input  logic                  branch_set_i,            // branch set signal (branch definitely
                                                         // taken)
  input  logic                  branch_not_set_i,        // branch is definitely not taken
  input  logic                  jump_set_i,              // jump taken set signal

  // interrupt signals
  input  logic                  csr_mstatus_mie_i,       // M-mode interrupt enable bit
  input  logic                  irq_pending_i,           // interrupt request pending
  input  ibex_pkg::irqs_t       irqs_i,                  // interrupt requests qualified with
                                                         // mie CSR
  input  logic                  irq_nm_ext_i,            // non-maskeable interrupt
  output logic                  nmi_mode_o,              // core executing NMI handler

  // debug signals
  input  logic                  debug_req_i,
  output ibex_pkg::dbg_cause_e  debug_cause_o,
  output logic                  debug_csr_save_o,
  output logic                  debug_mode_o,
  output logic                  debug_mode_entering_o,
  input  logic                  debug_single_step_i,
  input  logic                  debug_ebreakm_i,
  input  logic                  debug_ebreaku_i,
  input  logic                  trigger_match_i,

  output logic                  csr_save_if_o,
  output logic                  csr_save_id_o,
  output logic                  csr_save_wb_o,
  output logic                  csr_restore_mret_id_o,
  output logic                  csr_restore_dret_id_o,
  output logic                  csr_save_cause_o,
  output logic [31:0]           csr_mtval_o,
  input  ibex_pkg::priv_lvl_e   priv_mode_i,

  // stall & flush signals
  input  logic                  stall_id_i,
  input  logic                  stall_wb_i,
  output logic                  flush_id_o,
  input  logic                  ready_wb_i,

  // performance monitors
  output logic                  perf_jump_o,             // we are executing a jump
                                                         // instruction (j, jr, jal, jalr)
  output logic                  perf_tbranch_o           // we are executing a taken branch
                                                         // instruction
);
  import ibex_pkg::*;

ibex_controller_body #(
  .WritebackStage(WritebackStage),
  .BranchPredictor(BranchPredictor),
  .MemECC(MemECC)
) 
controller_body (

  .clk_i(clk_i),
  .rst_ni(clk_i),

  .ctrl_busy_o(ctrl_busy_o),             // core is busy processing instrs

  // decoder related signals
  .illegal_insn_i(illegal_insn_i),          // decoder has an invalid instr
  .ecall_insn_i(ecall_insn_i),            // decoder has ECALL instr
  .mret_insn_i(mret_insn_i),             // decoder has MRET instr
  .dret_insn_i(dret_insn_i),             // decoder has DRET instr
  .wfi_insn_i(wfi_insn_i),              // decoder has WFI instr
  .ebrk_insn_i(ebrk_insn_i),             // decoder has EBREAK instr
  .csr_pipe_flush_i(csr_pipe_flush_i),        // do CSR-related pipeline flush

  // instr from IF-ID pipeline stage
  .instr_valid_i(instr_valid_i),           // instr is valid
  .instr_i(instr_i),                 // uncompressed instr data for mtval
  .instr_compressed_i(instr_compressed_i),      // instr compressed data for mtval
  .instr_is_compressed_i(instr_is_compressed_i),   // instr is compressed
  .instr_bp_taken_i(instr_bp_taken_i),        // instr was predicted taken branch
  .instr_fetch_err_i(instr_fetch_err_i),       // instr has error
  .instr_fetch_err_plus2_i(instr_fetch_err_plus2_i), // instr error is x32
  .pc_id_i(pc_id_i),                 // instr address

  // to IF-ID pipeline stage
  .instr_valid_clear_o(instr_valid_clear_o),     // kill instr in IF-ID reg
  .id_in_ready_o(id_in_ready_o),           // ID stage is ready for new instr
  .controller_run_o(controller_run_o),        // Controller is in standard instruction
                                                         // run mode
  .instr_exec_i(instr_exec_i),            // Execution control, when clear ID/EX
                                                         // stage stops accepting instructions from
                                                         // IF
  // to prefetcher
  .instr_req_o(instr_req_o),             // start fetching instructions
  .pc_set_o(pc_set_o),                // jump to address set by pc_mux
  .pc_mux_o(pc_mux_o),                // IF stage fetch address selector
                                                         // (boot, normal, exception...)
  .nt_branch_mispredict_o(nt_branch_mispredict_o),  // Not-taken branch in ID/EX was
                                                         // mispredicted (predicted taken)
  .exc_pc_mux_o(exc_pc_mux_o),            // IF stage selector for exception PC
  .exc_cause_o(exc_cause_o),             // for IF stage, CSRs

  // LSU
  .lsu_addr_last_i(lsu_addr_last_i),         // for mtval
  .load_err_i(load_err_i),
  .store_err_i(store_err_i),
  .mem_resp_intg_err_i(mem_resp_intg_err_i),
  .wb_exception_o(wb_exception_o),          // Instruction in WB taking an exception
  .id_exception_o(id_exception_o),          // Instruction in ID taking an exception

  // jump/branch signals
  .branch_set_i(branch_set_i),            // branch set signal (branch definitely
                                                         // taken)
  .branch_not_set_i(branch_not_set_i),        // branch is definitely not taken
  .jump_set_i(jump_set_i),              // jump taken set signal

  // interrupt signals
  .csr_mstatus_mie_i(csr_mstatus_mie_i),       // M-mode interrupt enable bit
  .irq_pending_i(irq_pending_i),           // interrupt request pending
  .irqs_i(irqs_i),                  // interrupt requests qualified with
                                                         // mie CSR
  .irq_nm_ext_i(irq_nm_ext_i),            // non-maskeable interrupt
  .nmi_mode_o(nmi_mode_o),              // core executing NMI handler

  // debug signals
  .debug_req_i(debug_req_i),
  .debug_cause_o(debug_cause_o),
  .debug_csr_save_o(debug_csr_save_o),
  .debug_mode_o(debug_mode_o),
  .debug_mode_entering_o(debug_mode_entering_o),
  .debug_single_step_i(debug_single_step_i),
  .debug_ebreakm_i(debug_ebreakm_i),
  .debug_ebreaku_i(debug_ebreaku_i),
  .trigger_match_i(trigger_match_i),

  .csr_save_if_o(csr_save_if_o),
  .csr_save_id_o(csr_save_id_o),
  .csr_save_wb_o(csr_save_wb_o),
  .csr_restore_mret_id_o(csr_restore_mret_id_o),
  .csr_restore_dret_id_o(csr_restore_dret_id_o),
  .csr_save_cause_o(csr_save_cause_o),
  .csr_mtval_o(csr_mtval_o),
  .priv_mode_i(priv_mode_i),

  // stall & flush signals
  .stall_id_i(stall_id_i),
  .stall_wb_i(stall_wb_i),
  .flush_id_o(flush_id_o),
  .ready_wb_i(ready_wb_i),

  // performance monitors
  .perf_jump_o(perf_jump_o),             // we are executing a jump
                                                         // instruction (j, jr, jal, jalr)
  .perf_tbranch_o(perf_tbranch_o)           // we are executing a taken branch
                                                         // instruction
);
endmodule
