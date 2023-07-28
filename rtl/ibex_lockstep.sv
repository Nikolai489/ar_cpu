// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// Ibex lockstep module
// This module instantiates a second copy of the core logic, and compares it's outputs against
// those from the main core. The second core runs synchronously with the main core, delayed by
// LockstepOffset cycles.

// SEC_CM: LOGIC.SHADOW
`include "ibex_lockstep_body.sv"
module ibex_lockstep import ibex_pkg::*; #(
  parameter int unsigned LockstepOffset    = 2,
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
  input  logic                         clk_i,
  input  logic                         rst_ni,

  input  logic [31:0]                  hart_id_i,
  input  logic [31:0]                  boot_addr_i,

  input  logic                         instr_req_i,
  input  logic                         instr_gnt_i,
  input  logic                         instr_rvalid_i,
  input  logic [31:0]                  instr_addr_i,
  input  logic [MemDataWidth-1:0]      instr_rdata_i,
  input  logic                         instr_err_i,

  input  logic                         data_req_i,
  input  logic                         data_gnt_i,
  input  logic                         data_rvalid_i,
  input  logic                         data_we_i,
  input  logic [3:0]                   data_be_i,
  input  logic [31:0]                  data_addr_i,
  input  logic [MemDataWidth-1:0]      data_wdata_i,
  input  logic [MemDataWidth-1:0]      data_rdata_i,
  input  logic                         data_err_i,

  input  logic                         dummy_instr_id_i,
  input  logic                         dummy_instr_wb_i,
  input  logic [4:0]                   rf_raddr_a_i,
  input  logic [4:0]                   rf_raddr_b_i,
  input  logic [4:0]                   rf_waddr_wb_i,
  input  logic                         rf_we_wb_i,
  input  logic [RegFileDataWidth-1:0]  rf_wdata_wb_ecc_i,
  input  logic [RegFileDataWidth-1:0]  rf_rdata_a_ecc_i,
  input  logic [RegFileDataWidth-1:0]  rf_rdata_b_ecc_i,

  input  logic [IC_NUM_WAYS-1:0]       ic_tag_req_i,
  input  logic                         ic_tag_write_i,
  input  logic [IC_INDEX_W-1:0]        ic_tag_addr_i,
  input  logic [TagSizeECC-1:0]        ic_tag_wdata_i,
  input  logic [TagSizeECC-1:0]        ic_tag_rdata_i [IC_NUM_WAYS],
  input  logic [IC_NUM_WAYS-1:0]       ic_data_req_i,
  input  logic                         ic_data_write_i,
  input  logic [IC_INDEX_W-1:0]        ic_data_addr_i,
  input  logic [LineSizeECC-1:0]       ic_data_wdata_i,
  input  logic [LineSizeECC-1:0]       ic_data_rdata_i [IC_NUM_WAYS],
  input  logic                         ic_scr_key_valid_i,
  input  logic                         ic_scr_key_req_i,

  input  logic                         irq_software_i,
  input  logic                         irq_timer_i,
  input  logic                         irq_external_i,
  input  logic [14:0]                  irq_fast_i,
  input  logic                         irq_nm_i,
  input  logic                         irq_pending_i,

  input  logic                         debug_req_i,
  input  crash_dump_t                  crash_dump_i,
  input  logic                         double_fault_seen_i,

  input  ibex_mubi_t                   fetch_enable_i,
  output logic                         alert_minor_o,
  output logic                         alert_major_internal_o,
  output logic                         alert_major_bus_o,
  input  ibex_mubi_t                   core_busy_i,
  input  logic                         test_en_i,
  input  logic                         scan_rst_ni
);

ibex_lockstep_body #(
.LockstepOffset(LockstepOffset)    
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
lockstep_body (
.clk_i(clk_i),
.rst_ni(rst_ni),

.hart_id_i(hart_id_i),
.boot_addr_i(boot_addr_i),

.instr_req_i(instr_req_i),
.instr_gnt_i(instr_gnt_i),
.instr_rvalid_i(instr_rvalid_i),
.instr_addr_i(instr_addr_i),
.instr_rdata_i(instr_rdata_i),
.instr_err_i(instr_err_i),

.data_req_i(data_req_i),
.data_gnt_i(data_gnt_i),
.data_rvalid_i(data_rvalid_i),
.data_we_i(data_we_i),
.data_be_i(data_be_i),
.data_addr_i(data_addr_i),
.data_wdata_i(data_wdata_i),
.data_rdata_i(data_rdata_i),
.data_err_i(data_err_i),

.dummy_instr_id_i(dummy_instr_id_i),
.dummy_instr_wb_i(dummy_instr_wb_i),
.rf_raddr_a_i(rf_raddr_a_i),
.rf_raddr_b_i(rf_raddr_b_i),
.rf_waddr_wb_i(rf_waddr_wb_i),
.rf_we_wb_i(rf_we_wb_i),
.rf_wdata_wb_ecc_i(rf_wdata_wb_ecc_i),
.rf_rdata_a_ecc_i(rf_rdata_a_ecc_i),
.rf_rdata_b_ecc_i(rf_rdata_b_ecc_i),

.ic_tag_req_i(ic_tag_req_i),
.ic_tag_write_i(ic_tag_write_i),
.ic_tag_addr_i(ic_tag_addr_i),
.ic_tag_wdata_i(ic_tag_wdata_i),
.ic_tag_rdata_i(ic_tag_rdata_i),
.ic_data_req_i(ic_data_req_i),
.ic_data_write_i(ic_data_write_i),
.ic_data_addr_i(ic_data_addr_i),
.ic_data_wdata_i(ic_data_wdata_i),
.ic_data_rdata_i(ic_data_rdata_i),
.ic_scr_key_valid_i(ic_scr_key_valid_i),
.ic_scr_key_req_i(ic_scr_key_req_i),

.irq_software_i(irq_software_i),
.irq_timer_i(irq_timer_i),
.irq_external_i(irq_external_i),
.irq_fast_i(irq_fast_i),
.irq_nm_i(irq_nm_i),
.irq_pending_i(irq_pending_i),

.debug_req_i(debug_req_i),
.crash_dump_i(crash_dump_i),
.double_fault_seen_i(double_fault_seen_i),

.fetch_enable_i(fetch_enable_i),
.alert_minor_o(alert_minor_o),
.alert_major_internal_o(alert_major_internal_o),
.alert_major_bus_o(alert_major_bus_o),
.core_busy_i(core_busy_i),
.test_en_i(test_en_i),
.scan_rst_ni(scan_rst_ni)
);
endmodule
