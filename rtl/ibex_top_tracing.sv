// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

/**
 * Top level module of the ibex RISC-V core with tracing enabled
 */
`include "ibex_top_tracing_body.sv"
module ibex_top_tracing import ibex_pkg::*; #(
  parameter bit          PMPEnable        = 1'b0,
  parameter int unsigned PMPGranularity   = 0,
  parameter int unsigned PMPNumRegions    = 4,
  parameter int unsigned MHPMCounterNum   = 0,
  parameter int unsigned MHPMCounterWidth = 40,
  parameter bit          RV32E            = 1'b0,
  parameter rv32m_e      RV32M            = RV32MFast,
  parameter rv32b_e      RV32B            = RV32BNone,
  parameter regfile_e    RegFile          = RegFileFF,
  parameter bit          BranchTargetALU  = 1'b0,
  parameter bit          WritebackStage   = 1'b0,
  parameter bit          ICache           = 1'b0,
  parameter bit          ICacheECC        = 1'b0,
  parameter bit          BranchPredictor  = 1'b0,
  parameter bit          DbgTriggerEn     = 1'b0,
  parameter int unsigned DbgHwBreakNum    = 1,
  parameter bit          SecureIbex       = 1'b0,
  parameter bit          ICacheScramble   = 1'b0,
  parameter lfsr_seed_t  RndCnstLfsrSeed  = RndCnstLfsrSeedDefault,
  parameter lfsr_perm_t  RndCnstLfsrPerm  = RndCnstLfsrPermDefault,
  parameter int unsigned DmHaltAddr       = 32'h1A110800,
  parameter int unsigned DmExceptionAddr  = 32'h1A110808
) (
  // Clock and Reset
  input  logic                         clk_i,
  input  logic                         rst_ni,

  input  logic                         test_en_i,     // enable all clock gates for testing
  input  logic                         scan_rst_ni,
  input  prim_ram_1p_pkg::ram_1p_cfg_t ram_cfg_i,


  input  logic [31:0]                  hart_id_i,
  input  logic [31:0]                  boot_addr_i,

  // Instruction memory interface
  output logic                         instr_req_o,
  input  logic                         instr_gnt_i,
  input  logic                         instr_rvalid_i,
  output logic [31:0]                  instr_addr_o,
  input  logic [31:0]                  instr_rdata_i,
  input  logic [6:0]                   instr_rdata_intg_i,
  input  logic                         instr_err_i,

  // Data memory interface
  output logic                         data_req_o,
  input  logic                         data_gnt_i,
  input  logic                         data_rvalid_i,
  output logic                         data_we_o,
  output logic [3:0]                   data_be_o,
  output logic [31:0]                  data_addr_o,
  output logic [31:0]                  data_wdata_o,
  output logic [6:0]                   data_wdata_intg_o,
  input  logic [31:0]                  data_rdata_i,
  input  logic [6:0]                   data_rdata_intg_i,
  input  logic                         data_err_i,

  // Interrupt inputs
  input  logic                         irq_software_i,
  input  logic                         irq_timer_i,
  input  logic                         irq_external_i,
  input  logic [14:0]                  irq_fast_i,
  input  logic                         irq_nm_i,       // non-maskeable interrupt

  // Scrambling Interface
  input  logic                         scramble_key_valid_i,
  input  logic [SCRAMBLE_KEY_W-1:0]    scramble_key_i,
  input  logic [SCRAMBLE_NONCE_W-1:0]  scramble_nonce_i,
  output logic                         scramble_req_o,

  // Debug Interface
  input  logic                         debug_req_i,
  output crash_dump_t                  crash_dump_o,
  output logic                         double_fault_seen_o,

  // CPU Control Signals
  input  ibex_mubi_t                   fetch_enable_i,
  output logic                         alert_minor_o,
  output logic                         alert_major_internal_o,
  output logic                         alert_major_bus_o,
  output logic                         core_sleep_o

);

ibex_top_tracing_body #(
.PMPEnable(PMPEnable),
.PMPGranularity(PMPGranularity),
.PMPNumRegions(PMPNumRegions),
.MHPMCounterNum(MHPMCounterNum),
.MHPMCounterWidth(MHPMCounterWidth),
.RV32E(RV32E),
.RV32M(RV32M),
.RV32B(RV32B),
.RegFile(RegFile),
.BranchTargetALU(BranchTargetALU),
.WritebackStage(WritebackStage),
.ICache(ICache),
.ICacheECC(ICacheECC),
.BranchPredictor(BranchPredictor),
.DbgTriggerEn(DbgTriggerEn),
.DbgHwBreakNum(DbgHwBreakNum),
.SecureIbex(SecureIbex),
.ICacheScramble(ICacheScramble),
.RndCnstLfsrSeed(RndCnstLfsrSeed),
.RndCnstLfsrPerm(RndCnstLfsrPerm),
.DmHaltAddr(DmHaltAddr),
.DmExceptionAddr(DmExceptionAddr)
)
top_tracing_body (
.clk_i(clk_i),
.rst_ni(rst_ni),

.test_en_i(test_en_i),   
.scan_rst_ni(scan_rst_ni),
.ram_cfg_i(ram_cfg_i),


.hart_id_i(hart_id_i),
.boot_addr_i(boot_addr_i),

  // Instruction memory interface
.instr_req_o(instr_req_o),
.instr_gnt_i(instr_gnt_i),
.instr_rvalid_i(instr_rvalid_i),
.instr_addr_o(instr_addr_o),
.instr_rdata_i(instr_rdata_i),
.instr_rdata_intg_i(instr_rdata_intg_i),
.instr_err_i(instr_err_i),

  // Data memory interface
.data_req_o(data_req_o),
.data_gnt_i(data_gnt_i),
.data_rvalid_i(data_rvalid_i),
.data_we_o(data_we_o),
.data_be_o(data_be_o),
.data_addr_o(data_addr_o),
.data_wdata_o(data_wdata_o),
.data_wdata_intg_o(data_wdata_intg_o),
.data_rdata_i(data_rdata_i),
.data_rdata_intg_i(data_rdata_intg_i),
.data_err_i(data_err_i),

  // Interrupt inputs
.irq_software_i(irq_software_i),
.irq_timer_i(irq_timer_i),
.irq_external_i(irq_external_i),
.irq_fast_i(irq_fast_i),
.irq_nm_i(irq_nm_i),      

  // Scrambling Interface
.scramble_key_valid_i(scramble_key_valid_i),
.scramble_key_i(scramble_key_i),
.scramble_nonce_i(scramble_nonce_i),
.scramble_req_o(scramble_req_o),

  // Debug Interface
.debug_req_i(debug_req_i),
.crash_dump_o(crash_dump_o),
.double_fault_seen_o(double_fault_seen_o),

  // CPU Control Signals
.fetch_enable_i(fetch_enable_i),
.alert_minor_o(alert_minor_o),
.alert_major_internal_o(alert_major_internal_o),
.alert_major_bus_o(alert_major_bus_o),
.core_sleep_o(core_sleep_o)
);
endmodule
