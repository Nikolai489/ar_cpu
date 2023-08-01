// Copyright lowRISC contributors.
// Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

`ifdef RISCV_FORMAL
  `define RVFI
`endif

`include "prim_assert.sv"
`include "dv_fcov_macros.svh"
`include "ibex_core_body.sv"
/**
 * Top level module of the ibex RISC-V core
 */
module ibex_core import ibex_pkg::*; #(
  parameter bit          PMPEnable         = 1'b0,
  parameter int unsigned PMPGranularity    = 0,
  parameter int unsigned PMPNumRegions     = 4,
  parameter int unsigned MHPMCounterNum    = 0,
  parameter int unsigned MHPMCounterWidth  = 40,
  parameter bit          RV32E             = 1'b0,
  parameter rv32m_e      RV32M             = RV32MFast,
  parameter rv32b_e      RV32B             = RV32BNone,
  parameter bit          BranchTargetALU   = 1'b0,
  parameter bit          WritebackStage    = 1'b0,
  parameter bit          ICache            = 1'b0,
  parameter bit          ICacheECC         = 1'b0,
  parameter int unsigned BusSizeECC        = BUS_SIZE,
  parameter int unsigned TagSizeECC        = IC_TAG_SIZE,
  parameter int unsigned LineSizeECC       = IC_LINE_SIZE,
  parameter bit          BranchPredictor   = 1'b0,
  parameter bit          DbgTriggerEn      = 1'b0,
  parameter int unsigned DbgHwBreakNum     = 1,
  parameter bit          ResetAll          = 1'b0,
  parameter lfsr_seed_t  RndCnstLfsrSeed   = RndCnstLfsrSeedDefault,
  parameter lfsr_perm_t  RndCnstLfsrPerm   = RndCnstLfsrPermDefault,
  parameter bit          SecureIbex        = 1'b0,
  parameter bit          DummyInstructions = 1'b0,
  parameter bit          RegFileECC        = 1'b0,
  parameter int unsigned RegFileDataWidth  = 32,
  parameter bit          MemECC            = 1'b0,
  parameter int unsigned MemDataWidth      = MemECC ? 32 + 7 : 32,
  parameter int unsigned DmHaltAddr        = 32'h1A110800,
  parameter int unsigned DmExceptionAddr   = 32'h1A110808
) (
  // Clock and Reset
  input  logic                         clk_i,
  input  logic                         rst_ni,

  input  logic [31:0]                  hart_id_i,
  input  logic [31:0]                  boot_addr_i,

  // Instruction memory interface
  output logic                         instr_req_o,
  input  logic                         instr_gnt_i,
  input  logic                         instr_rvalid_i,
  output logic [31:0]                  instr_addr_o,
  input  logic [MemDataWidth-1:0]      instr_rdata_i,
  input  logic                         instr_err_i,

  // Data memory interface
  output logic                         data_req_o,
  input  logic                         data_gnt_i,
  input  logic                         data_rvalid_i,
  output logic                         data_we_o,
  output logic [3:0]                   data_be_o,
  output logic [31:0]                  data_addr_o,
  output logic [MemDataWidth-1:0]      data_wdata_o,
  input  logic [MemDataWidth-1:0]      data_rdata_i,
  input  logic                         data_err_i,

  // Register file interface
  output logic                         dummy_instr_id_o,
  output logic                         dummy_instr_wb_o,
  output logic [4:0]                   rf_raddr_a_o,
  output logic [4:0]                   rf_raddr_b_o,
  output logic [4:0]                   rf_waddr_wb_o,
  output logic                         rf_we_wb_o,
  output logic [RegFileDataWidth-1:0]  rf_wdata_wb_ecc_o,
  input  logic [RegFileDataWidth-1:0]  rf_rdata_a_ecc_i,
  input  logic [RegFileDataWidth-1:0]  rf_rdata_b_ecc_i,

  // RAMs interface
  output logic [IC_NUM_WAYS-1:0]       ic_tag_req_o,
  output logic                         ic_tag_write_o,
  output logic [IC_INDEX_W-1:0]        ic_tag_addr_o,
  output logic [TagSizeECC-1:0]        ic_tag_wdata_o,
  input  logic [TagSizeECC-1:0]        ic_tag_rdata_i [IC_NUM_WAYS],
  output logic [IC_NUM_WAYS-1:0]       ic_data_req_o,
  output logic                         ic_data_write_o,
  output logic [IC_INDEX_W-1:0]        ic_data_addr_o,
  output logic [LineSizeECC-1:0]       ic_data_wdata_o,
  input  logic [LineSizeECC-1:0]       ic_data_rdata_i [IC_NUM_WAYS],
  input  logic                         ic_scr_key_valid_i,
  output logic                         ic_scr_key_req_o,

  // Interrupt inputs
  input  logic                         irq_software_i,
  input  logic                         irq_timer_i,
  input  logic                         irq_external_i,
  input  logic [14:0]                  irq_fast_i,
  input  logic                         irq_nm_i,       // non-maskeable interrupt
  output logic                         irq_pending_o,

  // Debug Interface
  input  logic                         debug_req_i,
  output crash_dump_t                  crash_dump_o,
  // SEC_CM: EXCEPTION.CTRL_FLOW.LOCAL_ESC
  // SEC_CM: EXCEPTION.CTRL_FLOW.GLOBAL_ESC
  output logic                         double_fault_seen_o,

  // RISC-V Formal Interface
  // Does not comply with the coding standards of _i/_o suffixes, but follows
  // the convention of RISC-V Formal Interface Specification.
`ifdef RVFI
  output logic                         rvfi_valid,
  output logic [63:0]                  rvfi_order,
  output logic [31:0]                  rvfi_insn,
  output logic                         rvfi_trap,
  output logic                         rvfi_halt,
  output logic                         rvfi_intr,
  output logic [ 1:0]                  rvfi_mode,
  output logic [ 1:0]                  rvfi_ixl,
  output logic [ 4:0]                  rvfi_rs1_addr,
  output logic [ 4:0]                  rvfi_rs2_addr,
  output logic [ 4:0]                  rvfi_rs3_addr,
  output logic [31:0]                  rvfi_rs1_rdata,
  output logic [31:0]                  rvfi_rs2_rdata,
  output logic [31:0]                  rvfi_rs3_rdata,
  output logic [ 4:0]                  rvfi_rd_addr,
  output logic [31:0]                  rvfi_rd_wdata,
  output logic [31:0]                  rvfi_pc_rdata,
  output logic [31:0]                  rvfi_pc_wdata,
  output logic [31:0]                  rvfi_mem_addr,
  output logic [ 3:0]                  rvfi_mem_rmask,
  output logic [ 3:0]                  rvfi_mem_wmask,
  output logic [31:0]                  rvfi_mem_rdata,
  output logic [31:0]                  rvfi_mem_wdata,
  output logic [31:0]                  rvfi_ext_mip,
  output logic                         rvfi_ext_nmi,
  output logic                         rvfi_ext_nmi_int,
  output logic                         rvfi_ext_debug_req,
  output logic                         rvfi_ext_debug_mode,
  output logic                         rvfi_ext_rf_wr_suppress,
  output logic [63:0]                  rvfi_ext_mcycle,
  output logic [31:0]                  rvfi_ext_mhpmcounters [10],
  output logic [31:0]                  rvfi_ext_mhpmcountersh [10],
  output logic                         rvfi_ext_ic_scr_key_valid,
  output logic                         rvfi_ext_irq_valid,
  `endif

  // CPU Control Signals
  // SEC_CM: FETCH.CTRL.LC_GATED
  input  ibex_mubi_t                   fetch_enable_i,
  output logic                         alert_minor_o,
  output logic                         alert_major_internal_o,
  output logic                         alert_major_bus_o,
  output ibex_mubi_t                   core_busy_o
);


`endif

ibex_core_body #(
  .PMPEnable(PMPEnable)         
  .PMPGranularity(PMPGranularity)   
  .PMPNumRegions(PMPNumRegions)     
  .MHPMCounterNum(MHPMCounterNum)   
  .MHPMCounterWidth(MHPMCounterWidth)  
  .RV32E(RV32E)
  .RV32M(RV32M)           
  .RV32B(RV32B)            
  .BranchTargetALU(BranchTargetALU)  
  .WritebackStage(WritebackStage)   
  .ICache(ICache)           
  .ICacheECC(ICacheECC)        
  .BusSizeECC(BusSizeECC)        
  .TagSizeECC(TagSizeECC)      
  .LineSizeECC(LineSizeECC)       
  .BranchPredictor(BranchPredictor)   
  .DbgTriggerEn(DbgTriggerEn)      
  .DbgHwBreakNum(DbgHwBreakNum)   
  .ResetAll(ResetAll)         
  .RndCnstLfsrSeed(RndCnstLfsrSeed)  
  .RndCnstLfsrPerm(RndCnstLfsrPerm)   
  .SecureIbex(SecureIbex)      
  .DummyInstructions(DummyInstructions) 
  .RegFileECC(RegFileECC)      
  .RegFileDataWidth(RegFileDataWidth) 
  .MemECC(MemECC)           
  .MemDataWidth(MemDataWidth)    
  .DmHaltAddr(DmHaltAddr)       
  .DmExceptionAddr(DmExceptionAddr)
)
core_body (
  .clk_i(clk_i),
  .rst_ni(rst_ni),

  .hart_id_i(hart_id_i),
  .boot_addr_i(boot_addr_i),

  // Instruction memory interface
  .instr_req_o(instr_req_o),
  .instr_gnt_i(instr_gnt_i),
  .instr_rvalid_i(instr_rvalid_i),
  .instr_addr_o(instr_addr_o),
  .instr_rdata_i(instr_rdata_i),
  .instr_err_i(instr_err_i),

  // Data memory interface
  .data_req_o(data_req_o),
  .data_gnt_i(data_gnt_i),
  .data_rvalid_i(data_rvalid_i),
  .data_we_o(data_we_o),
  .data_be_o(data_be_o),
  .data_addr_o(data_addr_o),
  .data_wdata_o(data_wdata_o),
  .data_rdata_i(data_rdata_i),
  .data_err_i(data_err_i),

  // Register file interface
  .dummy_instr_id_o(dummy_instr_id_o),
  .dummy_instr_wb_o(dummy_instr_wb_o),
  .rf_raddr_a_o(rf_raddr_a_o),
  .rf_raddr_b_o(rf_raddr_b_o),
  .rf_waddr_wb_o(rf_waddr_wb_o),
  .rf_we_wb_o(rf_we_wb_o),
  .rf_wdata_wb_ecc_o(rf_wdata_wb_ecc_o),
  .rf_rdata_a_ecc_i(rf_rdata_a_ecc_i),
  .rf_rdata_b_ecc_i(rf_rdata_b_ecc_i),

  // RAMs interface
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

  // Interrupt inputs
  .irq_software_i(irq_software_i),
  .irq_timer_i(irq_timer_i),
  .irq_external_i(irq_external_i),
  .irq_fast_i(irq_fast_i),
  .irq_nm_i(irq_nm_i),       // non-maskeable interrupt
  .irq_pending_o(irq_pending_o),

  // Debug Interface
  .debug_req_i(debug_req_i),
  .crash_dump_o(crash_dump_o),
  // SEC_CM: EXCEPTION.CTRL_FLOW.LOCAL_ESC
  // SEC_CM: EXCEPTION.CTRL_FLOW.GLOBAL_ESC
  .double_fault_seen_o(double_fault_seen_o),

  // RISC-V Formal Interface
  // Does not comply with the coding standards of _i/_o suffixes, but follows
  // the convention of RISC-V Formal Interface Specification.
`ifdef RVFI
  .rvfi_valid(rvfi_valid),
  .rvfi_order(rvfi_order),
  .rvfi_insn(rvfi_insn),
  .rvfi_trap(rvfi_trap),
  .rvfi_halt(rvfi_halt),
  .rvfi_intr(rvfi_intr),
  .rvfi_mode(rvfi_mode),
  .rvfi_ixl(rvfi_ixl),
  .rvfi_rs1_addr(rvfi_rs1_addr),
  .rvfi_rs2_addr(rvfi_rs2_addr),
  .rvfi_rs3_addr(rvfi_rs3_addr),
  .rvfi_rs1_rdata(rvfi_rs1_rdata),
  .rvfi_rs2_rdata(rvfi_rs2_rdata),
  .rvfi_rs3_rdata(rvfi_rs3_rdata),
  .rvfi_rd_addr(rvfi_rd_addr),
  .rvfi_rd_wdata(rvfi_rd_wdata),
  .rvfi_pc_rdata(rvfi_pc_rdata),
  .rvfi_pc_wdata(rvfi_pc_wdata),
  .rvfi_mem_addr(rvfi_mem_addr),
  .rvfi_mem_rmask(rvfi_mem_rmask),
  .rvfi_mem_wmask(rvfi_mem_wmask),
  .rvfi_mem_rdata(rvfi_mem_rdata),
  .rvfi_mem_wdata(rvfi_mem_wdata),
  .rvfi_ext_mip(rvfi_ext_mip),
  .rvfi_ext_nmi(rvfi_ext_nmi),
  .rvfi_ext_nmi_int(rvfi_ext_nmi_int),
  .rvfi_ext_debug_req(rvfi_ext_debug_req),
  .rvfi_ext_debug_mode(rvfi_ext_debug_mode),
  .rvfi_ext_rf_wr_suppress(rvfi_ext_rf_wr_suppress),
  .rvfi_ext_mcycle(rvfi_ext_mcycle),
  .rvfi_ext_mhpmcounters(rvfi_ext_mhpmcounters),
  .rvfi_ext_mhpmcountersh(rvfi_ext_mhpmcountersh),
  .rvfi_ext_ic_scr_key_valid(rvfi_ext_ic_scr_key_valid),
  .rvfi_ext_irq_valid(rvfi_ext_irq_valid),
  `endif

  // CPU Control Signals
  // SEC_CM: FETCH.CTRL.LC_GATED
  .fetch_enable_i(fetch_enable_i),
  .alert_minor_o(alert_minor_o),
  .alert_major_internal_o(alert_major_internal_o),
  .alert_major_bus_o(alert_major_bus_o),
  .core_busy_o(core_busy_o)
);
endmodule
