// Copyright lowRISC contributors.
// Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

`ifdef RISCV_FORMAL
  `define RVFI
`endif

/**
 * Instruction Decode Stage
 *
 * Decode stage of the core. It decodes the instructions and hosts the register
 * file.
 */

`include "prim_assert.sv"
`include "dv_fcov_macros.svh"
`include "ibex_id_stage_body.sv"
module ibex_id_stage #(
  parameter bit               RV32E           = 0,
  parameter ibex_pkg::rv32m_e RV32M           = ibex_pkg::RV32MFast,
  parameter ibex_pkg::rv32b_e RV32B           = ibex_pkg::RV32BNone,
  parameter bit               DataIndTiming   = 1'b0,
  parameter bit               BranchTargetALU = 0,
  parameter bit               WritebackStage  = 0,
  parameter bit               BranchPredictor = 0,
  parameter bit               MemECC          = 1'b0
) (
  input  logic                      clk_i,
  input  logic                      rst_ni,

  output logic                      ctrl_busy_o,
  output logic                      illegal_insn_o,

  // Interface to IF stage
  input  logic                      instr_valid_i,
  input  logic [31:0]               instr_rdata_i,         // from IF-ID pipeline registers
  input  logic [31:0]               instr_rdata_alu_i,     // from IF-ID pipeline registers
  input  logic [15:0]               instr_rdata_c_i,       // from IF-ID pipeline registers
  input  logic                      instr_is_compressed_i,
  input  logic                      instr_bp_taken_i,
  output logic                      instr_req_o,
  output logic                      instr_first_cycle_id_o,
  output logic                      instr_valid_clear_o,   // kill instr in IF-ID reg
  output logic                      id_in_ready_o,         // ID stage is ready for next instr
  input  logic                      instr_exec_i,
  output logic                      icache_inval_o,

  // Jumps and branches
  input  logic                      branch_decision_i,

  // IF and ID stage signals
  output logic                      pc_set_o,
  output ibex_pkg::pc_sel_e         pc_mux_o,
  output logic                      nt_branch_mispredict_o,
  output logic [31:0]               nt_branch_addr_o,
  output ibex_pkg::exc_pc_sel_e     exc_pc_mux_o,
  output ibex_pkg::exc_cause_t      exc_cause_o,

  input  logic                      illegal_c_insn_i,
  input  logic                      instr_fetch_err_i,
  input  logic                      instr_fetch_err_plus2_i,

  input  logic [31:0]               pc_id_i,

  // Stalls
  input  logic                      ex_valid_i,       // EX stage has valid output
  input  logic                      lsu_resp_valid_i, // LSU has valid output, or is done
  // ALU
  output ibex_pkg::alu_op_e         alu_operator_ex_o,
  output logic [31:0]               alu_operand_a_ex_o,
  output logic [31:0]               alu_operand_b_ex_o,

  // Multicycle Operation Stage Register
  input  logic [1:0]                imd_val_we_ex_i,
  input  logic [33:0]               imd_val_d_ex_i[2],
  output logic [33:0]               imd_val_q_ex_o[2],

  // Branch target ALU
  output logic [31:0]               bt_a_operand_o,
  output logic [31:0]               bt_b_operand_o,

  // MUL, DIV
  output logic                      mult_en_ex_o,
  output logic                      div_en_ex_o,
  output logic                      mult_sel_ex_o,
  output logic                      div_sel_ex_o,
  output ibex_pkg::md_op_e          multdiv_operator_ex_o,
  output logic  [1:0]               multdiv_signed_mode_ex_o,
  output logic [31:0]               multdiv_operand_a_ex_o,
  output logic [31:0]               multdiv_operand_b_ex_o,
  output logic                      multdiv_ready_id_o,

  // CSR
  output logic                      csr_access_o,
  output ibex_pkg::csr_op_e         csr_op_o,
  output logic                      csr_op_en_o,
  output logic                      csr_save_if_o,
  output logic                      csr_save_id_o,
  output logic                      csr_save_wb_o,
  output logic                      csr_restore_mret_id_o,
  output logic                      csr_restore_dret_id_o,
  output logic                      csr_save_cause_o,
  output logic [31:0]               csr_mtval_o,
  input  ibex_pkg::priv_lvl_e       priv_mode_i,
  input  logic                      csr_mstatus_tw_i,
  input  logic                      illegal_csr_insn_i,
  input  logic                      data_ind_timing_i,

  // Interface to load store unit
  output logic                      lsu_req_o,
  output logic                      lsu_we_o,
  output logic [1:0]                lsu_type_o,
  output logic                      lsu_sign_ext_o,
  output logic [31:0]               lsu_wdata_o,

  input  logic                      lsu_req_done_i, // Data req to LSU is complete and
                                                    // instruction can move to writeback
                                                    // (only relevant where writeback stage is
                                                    // present)

  input  logic                      lsu_addr_incr_req_i,
  input  logic [31:0]               lsu_addr_last_i,

  // Interrupt signals
  input  logic                      csr_mstatus_mie_i,
  input  logic                      irq_pending_i,
  input  ibex_pkg::irqs_t           irqs_i,
  input  logic                      irq_nm_i,
  output logic                      nmi_mode_o,

  input  logic                      lsu_load_err_i,
  input  logic                      lsu_load_resp_intg_err_i,
  input  logic                      lsu_store_err_i,
  input  logic                      lsu_store_resp_intg_err_i,

  // Debug Signal
  output logic                      debug_mode_o,
  output logic                      debug_mode_entering_o,
  output ibex_pkg::dbg_cause_e      debug_cause_o,
  output logic                      debug_csr_save_o,
  input  logic                      debug_req_i,
  input  logic                      debug_single_step_i,
  input  logic                      debug_ebreakm_i,
  input  logic                      debug_ebreaku_i,
  input  logic                      trigger_match_i,

  // Write back signal
  input  logic [31:0]               result_ex_i,
  input  logic [31:0]               csr_rdata_i,

  // Register file read
  output logic [4:0]                rf_raddr_a_o,
  input  logic [31:0]               rf_rdata_a_i,
  output logic [4:0]                rf_raddr_b_o,
  input  logic [31:0]               rf_rdata_b_i,
  output logic                      rf_ren_a_o,
  output logic                      rf_ren_b_o,

  // Register file write (via writeback)
  output logic [4:0]                rf_waddr_id_o,
  output logic [31:0]               rf_wdata_id_o,
  output logic                      rf_we_id_o,
  output logic                      rf_rd_a_wb_match_o,
  output logic                      rf_rd_b_wb_match_o,

  // Register write information from writeback (for resolving data hazards)
  input  logic [4:0]                rf_waddr_wb_i,
  input  logic [31:0]               rf_wdata_fwd_wb_i,
  input  logic                      rf_write_wb_i,

  output  logic                     en_wb_o,
  output  ibex_pkg::wb_instr_type_e instr_type_wb_o,
  output  logic                     instr_perf_count_id_o,
  input logic                       ready_wb_i,
  input logic                       outstanding_load_wb_i,
  input logic                       outstanding_store_wb_i,

  // Performance Counters
  output logic                      perf_jump_o,    // executing a jump instr
  output logic                      perf_branch_o,  // executing a branch instr
  output logic                      perf_tbranch_o, // executing a taken branch instr
  output logic                      perf_dside_wait_o, // instruction in ID/EX is awaiting memory
                                                        // access to finish before proceeding
  output logic                      perf_mul_wait_o,
  output logic                      perf_div_wait_o,
  output logic                      instr_id_done_o
);

  import ibex_pkg::*;

ibex_id_stage_body #(
  .RV32E(RV32E)           
  .RV32M(RV32M)         
  .RV32B(RV32B)         
  .DataIndTiming(DataIndTiming) 
  .BranchTargetALU(BranchTargetALU) 
  .WritebackStage(WritebackStage)  
  .BranchPredictor(BranchPredictor) 
  .MemECC(MemECC)         
)
id_stage_body(
  .clk_i(clk_i),
  .rst_ni(rst_ni),

  .ctrl_busy_o(ctrl_busy_o),
  .illegal_insn_o(illegal_insn_o),

  // Interface to IF stage
.instr_valid_i(instr_valid_i),
.instr_rdata_i(instr_rdata_i),         
.instr_rdata_alu_i(instr_rdata_alu_i),     
.instr_rdata_c_i(instr_rdata_c_i),      
.instr_is_compressed_i(instr_is_compressed_i),
.instr_bp_taken_i(instr_bp_taken_i),
.instr_req_o(instr_req_o),
.instr_first_cycle_id_o(instr_first_cycle_id_o),
.instr_valid_clear_o(instr_valid_clear_o),   
.id_in_ready_o(id_in_ready_o),       
.instr_exec_i(instr_exec_i),
.icache_inval_o(icache_inval_o),

  // Jumps and branches
.branch_decision_i(branch_decision_i),

  // IF and ID stage signals
.pc_set_o(pc_set_o),
.pc_mux_o(pc_mux_o),
.nt_branch_mispredict_o(nt_branch_mispredict_o),
.nt_branch_addr_o(nt_branch_addr_o),
.exc_pc_mux_o(exc_pc_mux_o),
.exc_cause_o(exc_cause_o),

.illegal_c_insn_i(illegal_c_insn_i),
.instr_fetch_err_i(instr_fetch_err_i),
.instr_fetch_err_plus2_i(instr_fetch_err_plus2_i),

.pc_id_i(pc_id_i),

  // Stalls
.ex_valid_i(ex_valid_i),      
.lsu_resp_valid_i(lsu_resp_valid_i), 
  // ALU
.alu_operator_ex_o(alu_operator_ex_o),
.alu_operand_a_ex_o(alu_operand_a_ex_o),
.alu_operand_b_ex_o(alu_operand_b_ex_o),

  // Multicycle Operation Stage Register
.imd_val_we_ex_i(imd_val_we_ex_i),
.imd_val_d_ex_i(imd_val_d_ex_i),
.imd_val_q_ex_o(imd_val_q_ex_o),

  // Branch target ALU
.bt_a_operand_o(bt_a_operand_o),
.bt_b_operand_o(bt_b_operand_o),

  // MUL, DIV
.mult_en_ex_o(mult_en_ex_o),
.div_en_ex_o(div_en_ex_o),
.mult_sel_ex_o(mult_sel_ex_o),
.div_sel_ex_o(div_sel_ex_o),
.multdiv_operator_ex_o(multdiv_operator_ex_o),
.multdiv_signed_mode_ex_o(multdiv_signed_mode_ex_o),
.multdiv_operand_a_ex_o(multdiv_operand_a_ex_o),
.multdiv_operand_b_ex_o(multdiv_operand_b_ex_o),
.multdiv_ready_id_o(multdiv_ready_id_o),

  // CSR
.csr_access_o(csr_access_o),
.csr_op_o(csr_op_o),
.csr_op_en_o(csr_op_en_o),
.csr_save_if_o(csr_save_if_o),
.csr_save_id_o(csr_save_id_o),
.csr_save_wb_o(csr_save_wb_o),
.csr_restore_mret_id_o(csr_restore_mret_id_o),
.csr_restore_dret_id_o(csr_restore_dret_id_o),
.csr_save_cause_o(csr_save_cause_o),
.csr_mtval_o(csr_mtval_o),
.priv_mode_i(priv_mode_i),
.csr_mstatus_tw_i(csr_mstatus_tw_i),
.illegal_csr_insn_i(illegal_csr_insn_i),
.data_ind_timing_i(data_ind_timing_i),

  // Interface to load store unit
.lsu_req_o(lsu_req_o),
.lsu_we_o(lsu_we_o),
.lsu_type_o(lsu_type_o),
.lsu_sign_ext_o(lsu_sign_ext_o),
.lsu_wdata_o(lsu_wdata_o),

.lsu_req_done_i(lsu_req_done_i), 

.lsu_addr_incr_req_i(lsu_addr_incr_req_i),
.lsu_addr_last_i(lsu_addr_last_i),

  // Interrupt signals
.csr_mstatus_mie_i(csr_mstatus_mie_i),
.irq_pending_i(irq_pending_i),
.irqs_i(irqs_i),
.irq_nm_i(irq_nm_i),
.nmi_mode_o(nmi_mode_o),

.lsu_load_err_i(lsu_load_err_i),
.lsu_load_resp_intg_err_i(lsu_load_resp_intg_err_i),
.lsu_store_err_i(lsu_store_err_i),
.lsu_store_resp_intg_err_i(lsu_store_resp_intg_err_i),

  // Debug Signal
.debug_mode_o(debug_mode_o),
.debug_mode_entering_o(debug_mode_entering_o),
.debug_cause_o(debug_cause_o),
.debug_csr_save_o(debug_csr_save_o),
.debug_req_i(debug_req_i),
.debug_single_step_i(debug_single_step_i),
.debug_ebreakm_i(debug_ebreakm_i),
.debug_ebreaku_i(debug_ebreaku_i),
.trigger_match_i(trigger_match_i),

  // Write back signal
.result_ex_i(result_ex_i),
.csr_rdata_i(csr_rdata_i),

  // Register file read
.rf_raddr_a_o(rf_raddr_a_o),
.rf_rdata_a_i(rf_rdata_a_i),
.rf_raddr_b_o(rf_raddr_b_o),
.rf_rdata_b_i(rf_rdata_b_i),
.rf_ren_a_o(rf_ren_a_o),
.rf_ren_b_o(rf_ren_b_o),

  // Register file write (via writeback)
.rf_waddr_id_o(rf_waddr_id_o),
.rf_wdata_id_o(rf_wdata_id_o),
.rf_we_id_o(rf_we_id_o),
.rf_rd_a_wb_match_o(rf_rd_a_wb_match_o),
.rf_rd_b_wb_match_o(rf_rd_b_wb_match_o),

  // Register write information from writeback (for resolving data hazards)
.rf_waddr_wb_i(rf_waddr_wb_i),
.rf_wdata_fwd_wb_i(rf_wdata_fwd_wb_i),
.rf_write_wb_i(rf_write_wb_i),

.en_wb_o(en_wb_o),
.instr_type_wb_o(instr_type_wb_o),
.instr_perf_count_id_o(instr_perf_count_id_o),
.ready_wb_i(ready_wb_i),
.outstanding_load_wb_i(outstanding_load_wb_i),
.outstanding_store_wb_i(outstanding_store_wb_i),

  // Performance Counters
.perf_jump_o(perf_jump_o),   
.perf_branch_o(perf_branch_o), 
.perf_tbranch_o(perf_tbranch_o), 
.perf_dside_wait_o(perf_dside_wait_o), 
.perf_mul_wait_o(perf_mul_wait_o),
.perf_div_wait_o(perf_div_wait_o),
.instr_id_done_o(instr_id_done_o)
)
endmodule
