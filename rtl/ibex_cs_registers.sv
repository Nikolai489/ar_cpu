// Copyright lowRISC contributors.
// Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

/**
 * Control and Status Registers
 */

`include "prim_assert.sv"
`include "ibex_cs_registers_body.sv"

module ibex_cs_registers #(
  parameter bit               DbgTriggerEn      = 0,
  parameter int unsigned      DbgHwBreakNum     = 1,
  parameter bit               DataIndTiming     = 1'b0,
  parameter bit               DummyInstructions = 1'b0,
  parameter bit               ShadowCSR         = 1'b0,
  parameter bit               ICache            = 1'b0,
  parameter int unsigned      MHPMCounterNum    = 10,
  parameter int unsigned      MHPMCounterWidth  = 40,
  parameter bit               PMPEnable         = 0,
  parameter int unsigned      PMPGranularity    = 0,
  parameter int unsigned      PMPNumRegions     = 4,
  parameter bit               RV32E             = 0,
  parameter ibex_pkg::rv32m_e RV32M             = ibex_pkg::RV32MFast,
  parameter ibex_pkg::rv32b_e RV32B             = ibex_pkg::RV32BNone
) (
  // Clock and Reset
  input  logic                 clk_i,
  input  logic                 rst_ni,

  // Hart ID
  input  logic [31:0]          hart_id_i,

  // Privilege mode
  output ibex_pkg::priv_lvl_e  priv_mode_id_o,
  output ibex_pkg::priv_lvl_e  priv_mode_lsu_o,
  output logic                 csr_mstatus_tw_o,

  // mtvec
  output logic [31:0]          csr_mtvec_o,
  input  logic                 csr_mtvec_init_i,
  input  logic [31:0]          boot_addr_i,

  // Interface to registers (SRAM like)
  input  logic                 csr_access_i,
  input  ibex_pkg::csr_num_e   csr_addr_i,
  input  logic [31:0]          csr_wdata_i,
  input  ibex_pkg::csr_op_e    csr_op_i,
  input                        csr_op_en_i,
  output logic [31:0]          csr_rdata_o,

  // interrupts
  input  logic                 irq_software_i,
  input  logic                 irq_timer_i,
  input  logic                 irq_external_i,
  input  logic [14:0]          irq_fast_i,
  input  logic                 nmi_mode_i,
  output logic                 irq_pending_o,          // interrupt request pending
  output ibex_pkg::irqs_t      irqs_o,                 // interrupt requests qualified with mie
  output logic                 csr_mstatus_mie_o,
  output logic [31:0]          csr_mepc_o,
  output logic [31:0]          csr_mtval_o,

  // PMP
  output ibex_pkg::pmp_cfg_t     csr_pmp_cfg_o  [PMPNumRegions],
  output logic [33:0]            csr_pmp_addr_o [PMPNumRegions],
  output ibex_pkg::pmp_mseccfg_t csr_pmp_mseccfg_o,

  // debug
  input  logic                 debug_mode_i,
  input  logic                 debug_mode_entering_i,
  input  ibex_pkg::dbg_cause_e debug_cause_i,
  input  logic                 debug_csr_save_i,
  output logic [31:0]          csr_depc_o,
  output logic                 debug_single_step_o,
  output logic                 debug_ebreakm_o,
  output logic                 debug_ebreaku_o,
  output logic                 trigger_match_o,

  input  logic [31:0]          pc_if_i,
  input  logic [31:0]          pc_id_i,
  input  logic [31:0]          pc_wb_i,

  // CPU control and status bits
  output logic                 data_ind_timing_o,
  output logic                 dummy_instr_en_o,
  output logic [2:0]           dummy_instr_mask_o,
  output logic                 dummy_instr_seed_en_o,
  output logic [31:0]          dummy_instr_seed_o,
  output logic                 icache_enable_o,
  output logic                 csr_shadow_err_o,
  input  logic                 ic_scr_key_valid_i,

  // Exception save/restore
  input  logic                 csr_save_if_i,
  input  logic                 csr_save_id_i,
  input  logic                 csr_save_wb_i,
  input  logic                 csr_restore_mret_i,
  input  logic                 csr_restore_dret_i,
  input  logic                 csr_save_cause_i,
  input  ibex_pkg::exc_cause_t csr_mcause_i,
  input  logic [31:0]          csr_mtval_i,
  output logic                 illegal_csr_insn_o,     // access to non-existent CSR,
                                                        // with wrong priviledge level, or
                                                        // missing write permissions
  output logic                 double_fault_seen_o,
  // Performance Counters
  input  logic                 instr_ret_i,                 // instr retired in ID/EX stage
  input  logic                 instr_ret_compressed_i,      // compressed instr retired
  input  logic                 instr_ret_spec_i,            // speculative instr_ret_i
  input  logic                 instr_ret_compressed_spec_i, // speculative instr_ret_compressed_i
  input  logic                 iside_wait_i,                // core waiting for the iside
  input  logic                 jump_i,                      // jump instr seen (j, jr, jal, jalr)
  input  logic                 branch_i,                    // branch instr seen (bf, bnf)
  input  logic                 branch_taken_i,              // branch was taken
  input  logic                 mem_load_i,                  // load from memory in this cycle
  input  logic                 mem_store_i,                 // store to memory in this cycle
  input  logic                 dside_wait_i,                // core waiting for the dside
  input  logic                 mul_wait_i,                  // core waiting for multiply
  input  logic                 div_wait_i                   // core waiting for divide
);

  import ibex_pkg::*;

ibex_cs_registers_body #(
  .DbgTriggerEn(DbgTriggerEn)      
  .DbgHwBreakNum(DbgHwBreakNum)    
  .DataIndTiming(DataIndTiming)     
  .DummyInstructions(DummyInstructions) 
  .ShadowCSR(ShadowCSR)         
  .ICache(ICache)          
  .MHPMCounterNum(MHPMCounterNum)    
  .MHPMCounterWidth(MHPMCounterWidth) 
  .PMPEnable(PMPEnable)         
  .PMPGranularity(PMPGranularity)  
  .PMPNumRegions(PMPNumRegions)   
  .RV32E(RV32E)          
  .RV32M(RV32M)           
  .RV32B(RV32B)            
)
cs_registers_body (
  // Clock and Reset
.clk_i(clk_i),
.rst_ni(rst_ni),

// Hart ID
.hart_id_i(hart_id_i),

// Privilege mode
.priv_mode_id_o(priv_mode_id_o),
.priv_mode_lsu_o(priv_mode_lsu_o),
.csr_mstatus_tw_o(csr_mstatus_tw_o),

// mtvec
.csr_mtvec_o(csr_mtvec_o),
.csr_mtvec_init_i(csr_mtvec_init_i),
.boot_addr_i(boot_addr_i),

// Interface to registers (SRAM like)
.csr_access_i(csr_access_i),
.csr_addr_i(csr_addr_i),
.csr_wdata_i(csr_wdata_i),
.csr_op_i(csr_op_i),
.csr_op_en_i(csr_op_en_i),
.csr_rdata_o(csr_rdata_o),

// interrupts
.irq_software_i(irq_software_i),
.irq_timer_i(irq_timer_i),
.irq_external_i(irq_external_i),
.irq_fast_i(irq_fast_i),
.nmi_mode_i(nmi_mode_i),
.irq_pending_o(irq_pending_o),          // interrupt request pending
.irqs_o(irqs_o),                 // interrupt requests qualified with mie
.csr_mstatus_mie_o(csr_mstatus_mie_o),
.csr_mepc_o(csr_mepc_o),
.csr_mtval_o(csr_mtval_o),

// PMP
.csr_pmp_cfg_o(csr_pmp_cfg_o),
.csr_pmp_addr_o(csr_pmp_addr_o),
.csr_pmp_mseccfg_o(csr_pmp_mseccfg_o),

// debug
.debug_mode_i(debug_mode_i),
.debug_mode_entering_i(debug_mode_entering_i),
.debug_cause_i(debug_cause_i),
.debug_csr_save_i(debug_csr_save_i),
.csr_depc_o(csr_depc_o),
.debug_single_step_o(debug_single_step_o),
.debug_ebreakm_o(debug_ebreakm_o),
.debug_ebreaku_o(debug_ebreaku_o),
.trigger_match_o(trigger_match_o),

.pc_if_i(pc_if_i),
.pc_id_i(pc_id_i),
.pc_wb_i(pc_wb_i),

// CPU control and status bits
.data_ind_timing_o(data_ind_timing_o),
.dummy_instr_en_o(dummy_instr_en_o),
.dummy_instr_mask_o(dummy_instr_mask_o),
.dummy_instr_seed_en_o(dummy_instr_seed_en_o),
.dummy_instr_seed_o(dummy_instr_seed_o),
.icache_enable_o(icache_enable_o),
.csr_shadow_err_o(csr_shadow_err_o),
.ic_scr_key_valid_i(ic_scr_key_valid_i),

// Exception save/restore
.csr_save_if_i(csr_save_if_i),
.csr_save_id_i(csr_save_id_i),
.csr_save_wb_i(csr_save_wb_i),
.csr_restore_mret_i(csr_restore_mret_i),
.csr_restore_dret_i(csr_restore_dret_i),
.csr_save_cause_i(csr_save_cause_i),
.csr_mcause_i(csr_mcause_i),
.csr_mtval_i(csr_mtval_i),
.illegal_csr_insn_o(illegal_csr_insn_o),     // access to non-existent CSR,
                                                      // with wrong priviledge level, or
                                                      // missing write permissions
.double_fault_seen_o(double_fault_seen_o),
// Performance Counters
.instr_ret_i(instr_ret_i),                 // instr retired in ID/EX stage
.instr_ret_compressed_i(instr_ret_compressed_i),      // compressed instr retired
.instr_ret_spec_i(instr_ret_spec_i),            // speculative instr_ret_i
.instr_ret_compressed_spec_i(instr_ret_compressed_spec_i), // speculative instr_ret_compressed_i
.iside_wait_i(iside_wait_i),                // core waiting for the iside
.jump_i(jump_i),                      // jump instr seen (j, jr, jal, jalr)
.branch_i(branch_i),                    // branch instr seen (bf, bnf)
.branch_taken_i(branch_taken_i),              // branch was taken
.mem_load_i(mem_load_i),                  // load from memory in this cycle
.mem_store_i(mem_store_i),                 // store to memory in this cycle
.dside_wait_i(dside_wait_i),                // core waiting for the dside
.mul_wait_i(mul_wait_i),                  // core waiting for multiply
.div_wait_i(div_wait_i)                  // core waiting for divide  
)

endmodule
