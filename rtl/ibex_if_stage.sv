// Copyright lowRISC contributors.
// Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

/**
 * Instruction Fetch Stage
 *
 * Instruction fetch unit: Selection of the next PC, and buffering (sampling) of
 * the read instruction.
 */

`include "prim_assert.sv"
`include "dv_fcov_macros.svh"
`include "ibex_if_stage_body.sv"
module ibex_if_stage import ibex_pkg::*; #(
  parameter int unsigned DmHaltAddr        = 32'h1A110800,
  parameter int unsigned DmExceptionAddr   = 32'h1A110808,
  parameter bit          DummyInstructions = 1'b0,
  parameter bit          ICache            = 1'b0,
  parameter bit          ICacheECC         = 1'b0,
  parameter int unsigned BusSizeECC        = BUS_SIZE,
  parameter int unsigned TagSizeECC        = IC_TAG_SIZE,
  parameter int unsigned LineSizeECC       = IC_LINE_SIZE,
  parameter bit          PCIncrCheck       = 1'b0,
  parameter bit          ResetAll          = 1'b0,
  parameter lfsr_seed_t  RndCnstLfsrSeed   = RndCnstLfsrSeedDefault,
  parameter lfsr_perm_t  RndCnstLfsrPerm   = RndCnstLfsrPermDefault,
  parameter bit          BranchPredictor   = 1'b0,
  parameter bit          MemECC            = 1'b0,
  parameter int unsigned MemDataWidth      = MemECC ? 32 + 7 : 32
) (
  input  logic                         clk_i,
  input  logic                         rst_ni,

  input  logic [31:0]                  boot_addr_i,              // also used for mtvec
  input  logic                         req_i,                    // instruction request control

  // instruction cache interface
  output logic                        instr_req_o,
  output logic [31:0]                 instr_addr_o,
  input  logic                        instr_gnt_i,
  input  logic                        instr_rvalid_i,
  input  logic [MemDataWidth-1:0]     instr_rdata_i,
  input  logic                        instr_bus_err_i,
  output logic                        instr_intg_err_o,

  // ICache RAM IO
  output logic [IC_NUM_WAYS-1:0]      ic_tag_req_o,
  output logic                        ic_tag_write_o,
  output logic [IC_INDEX_W-1:0]       ic_tag_addr_o,
  output logic [TagSizeECC-1:0]       ic_tag_wdata_o,
  input  logic [TagSizeECC-1:0]       ic_tag_rdata_i [IC_NUM_WAYS],
  output logic [IC_NUM_WAYS-1:0]      ic_data_req_o,
  output logic                        ic_data_write_o,
  output logic [IC_INDEX_W-1:0]       ic_data_addr_o,
  output logic [LineSizeECC-1:0]      ic_data_wdata_o,
  input  logic [LineSizeECC-1:0]      ic_data_rdata_i [IC_NUM_WAYS],
  input  logic                        ic_scr_key_valid_i,
  output logic                        ic_scr_key_req_o,

  // output of ID stage
  output logic                        instr_valid_id_o,         // instr in IF-ID is valid
  output logic                        instr_new_id_o,           // instr in IF-ID is new
  output logic [31:0]                 instr_rdata_id_o,         // instr for ID stage
  output logic [31:0]                 instr_rdata_alu_id_o,     // replicated instr for ID stage
                                                                // to reduce fan-out
  output logic [15:0]                 instr_rdata_c_id_o,       // compressed instr for ID stage
                                                                // (mtval), meaningful only if
                                                                // instr_is_compressed_id_o = 1'b1
  output logic                        instr_is_compressed_id_o, // compressed decoder thinks this
                                                                // is a compressed instr
  output logic                        instr_bp_taken_o,         // instruction was predicted to be
                                                                // a taken branch
  output logic                        instr_fetch_err_o,        // bus error on fetch
  output logic                        instr_fetch_err_plus2_o,  // bus error misaligned
  output logic                        illegal_c_insn_id_o,      // compressed decoder thinks this
                                                                // is an invalid instr
  output logic                        dummy_instr_id_o,         // Instruction is a dummy
  output logic [31:0]                 pc_if_o,
  output logic [31:0]                 pc_id_o,
  input  logic                        pmp_err_if_i,
  input  logic                        pmp_err_if_plus2_i,

  // control signals
  input  logic                        instr_valid_clear_i,      // clear instr valid bit in IF-ID
  input  logic                        pc_set_i,                 // set the PC to a new value
  input  pc_sel_e                     pc_mux_i,                 // selector for PC multiplexer
  input  logic                        nt_branch_mispredict_i,   // Not-taken branch in ID/EX was
                                                                // mispredicted (predicted taken)
  input  logic [31:0]                 nt_branch_addr_i,         // Not-taken branch address in ID/EX
  input  exc_pc_sel_e                 exc_pc_mux_i,             // selects ISR address
  input  exc_cause_t                  exc_cause,                // selects ISR address for
                                                                // vectorized interrupt lines
  input  logic                        dummy_instr_en_i,
  input  logic [2:0]                  dummy_instr_mask_i,
  input  logic                        dummy_instr_seed_en_i,
  input  logic [31:0]                 dummy_instr_seed_i,
  input  logic                        icache_enable_i,
  input  logic                        icache_inval_i,
  output logic                        icache_ecc_error_o,

  // jump and branch target
  input  logic [31:0]                 branch_target_ex_i,       // branch/jump target address

  // CSRs
  input  logic [31:0]                 csr_mepc_i,               // PC to restore after handling
                                                                // the interrupt/exception
  input  logic [31:0]                 csr_depc_i,               // PC to restore after handling
                                                                // the debug request
  input  logic [31:0]                 csr_mtvec_i,              // base PC to jump to on exception
  output logic                        csr_mtvec_init_o,         // tell CS regfile to init mtvec

  // pipeline stall
  input  logic                        id_in_ready_i,            // ID stage is ready for new instr

  // misc signals
  output logic                        pc_mismatch_alert_o,
  output logic                        if_busy_o                 // IF stage is busy fetching instr
);

ibex_if_stage_body #(
  .DmHaltAddr()        
  .DmExceptionAddr()   
  .DummyInstructions() 
  .ICache()           
  .ICacheECC()         
  .BusSizeECC()        
  .TagSizeECC()        
  .LineSizeECC()       
  .PCIncrCheck()       
  .ResetAll()          
  .RndCnstLfsrSeed()   
  .RndCnstLfsrPerm()   
  .BranchPredictor()   
  .MemECC()            
  .MemDataWidth()      
)
if_stage_body(
.clk_i(clk_i),
.rst_ni(rst_ni),

.boot_addr_i(boot_addr_i),              
.req_i(req_i),                   

  // instruction cache interface
.instr_req_o(instr_req_o),
.instr_addr_o(instr_addr_o),
.instr_gnt_i(instr_gnt_i),
.instr_rvalid_i(instr_rvalid_i),
.instr_rdata_i(instr_rdata_i),
.instr_bus_err_i(instr_bus_err_i),
.instr_intg_err_o(instr_intg_err_o),

  // ICache RAM IO
.ic_tag_req_o(ic_tag_req_o),
.ic_tag_write_o(ic_tag_write_o),
.ic_tag_addr_o(ic_tag_addr_o),
.ic_tag_wdata_o(ic_tag_wdata_o),
.ic_tag_rdata_i(ic_tag_rdata_i),
.ic_data_req_o(ic_data_req_o),
.ic_data_write_o(ic_data_write_o),
.ic_data_addr_o(ic_data_addr_o),
.ic_data_wdata_o(ic_data_wdata_o),
.ic_data_rdata_i(ic_data_rdata_i),
.ic_scr_key_valid_i(ic_scr_key_valid_i),
.ic_scr_key_req_o(ic_scr_key_req_o),

  // output of ID stage
.instr_valid_id_o(instr_valid_id_o),        
.instr_new_id_o(instr_new_id_o),          
.instr_rdata_id_o(instr_rdata_id_o),        
.instr_rdata_alu_id_o(instr_rdata_alu_id_o),     
.instr_rdata_c_id_o(instr_rdata_c_id_o),       
.instr_is_compressed_id_o(instr_is_compressed_id_o), 
.instr_bp_taken_o(instr_bp_taken_o),        
.instr_fetch_err_o(instr_fetch_err_o),        
.instr_fetch_err_plus2_o(instr_fetch_err_plus2_o),  
.illegal_c_insn_id_o(illegal_c_insn_id_o),      
.dummy_instr_id_o(dummy_instr_id_o),         
.pc_if_o(pc_if_o),
.pc_id_o(pc_id_o),
.pmp_err_if_i(pmp_err_if_i),
.pmp_err_if_plus2_i(pmp_err_if_plus2_i),

  // control signals
.instr_valid_clear_i(instr_valid_clear_i),      
.pc_set_i(pc_set_i),                
.pc_mux_i(pc_mux_i),                
.nt_branch_mispredict_i(nt_branch_mispredict_i),  
.nt_branch_addr_i(nt_branch_addr_i),       
.exc_pc_mux_i(exc_pc_mux_i),             
.exc_cause(exc_cause),               
.dummy_instr_en_i(dummy_instr_en_i),
.dummy_instr_mask_i(dummy_instr_mask_i),
.dummy_instr_seed_en_i(dummy_instr_seed_en_i),
.dummy_instr_seed_i(dummy_instr_seed_i),
.icache_enable_i(icache_enable_i),
.icache_inval_i(icache_inval_i),
.icache_ecc_error_o(icache_ecc_error_o),

  // jump and branch target
.branch_target_ex_i(branch_target_ex_i),      

  // CSRs
.csr_mepc_i(csr_mepc_i),              
.csr_depc_i(csr_depc_i),               
.csr_mtvec_i(csr_mtvec_i),            
.csr_mtvec_init_o(csr_mtvec_init_o),         

  // pipeline stall
.id_in_ready_i(id_in_ready_i),          

  // misc signals
.pc_mismatch_alert_o(pc_mismatch_alert_o),
.if_busy_o(if_busy_o)                
);
endmodule
