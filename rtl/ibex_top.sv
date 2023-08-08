// Copyright lowRISC contributors.
// Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

`ifdef RISCV_FORMAL
  `define RVFI
`endif

`include "prim_assert.sv"

/**
 * Top level module of the ibex RISC-V core
 */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */
module ibex_top import ibex_pkg::*; #(
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
  parameter int unsigned DmExceptionAddr  = 32'h1A110808,
  // Default seed and nonce for scrambling
  parameter logic [SCRAMBLE_KEY_W-1:0]   RndCnstIbexKey   = RndCnstIbexKeyDefault,
  parameter logic [SCRAMBLE_NONCE_W-1:0] RndCnstIbexNonce = RndCnstIbexNonceDefault
) (
  // Clock and Reset
  input  logic                         clk_i,
  input  logic                         rst_ni,

  input  logic                         test_en_i,     // enable all clock gates for testing
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
  input  ibex_mubi_t                   fetch_enable_i,
  output logic                         alert_minor_o,
  output logic                         alert_major_internal_o,
  output logic                         alert_major_bus_o,
  output logic                         core_sleep_o,

  // DFT bypass controls
  input logic                          scan_rst_ni
);

  localparam bit          Lockstep          = SecureIbex;
  localparam bit          ResetAll          = Lockstep;
  localparam bit          DummyInstructions = SecureIbex;
  localparam bit          RegFileECC        = SecureIbex;
  localparam bit          RegFileWrenCheck  = SecureIbex;
  localparam int unsigned RegFileDataWidth  = RegFileECC ? 32 + 7 : 32;
  localparam bit          MemECC            = SecureIbex;
  localparam int unsigned MemDataWidth      = MemECC ? 32 + 7 : 32;
  // Icache parameters
  localparam int unsigned BusSizeECC        = ICacheECC ? (BUS_SIZE + 7) : BUS_SIZE;
  localparam int unsigned LineSizeECC       = BusSizeECC * IC_LINE_BEATS;
  localparam int unsigned TagSizeECC        = ICacheECC ? (IC_TAG_SIZE + 6) : IC_TAG_SIZE;
  // Scrambling Parameter
  localparam int unsigned NumAddrScrRounds  = ICacheScramble ? 2 : 0;
  localparam int unsigned NumDiffRounds     = NumAddrScrRounds;

  // Clock signals
  logic                        clk;
  ibex_mubi_t                  core_busy_d;
  logic                        irq_pending;
  // Core <-> Register file signals
  logic                        dummy_instr_id;
  logic                        dummy_instr_wb;
  logic [4:0]                  rf_raddr_a;
  logic [4:0]                  rf_raddr_b;
  logic [4:0]                  rf_waddr_wb;
  logic                        rf_we_wb;
  logic [RegFileDataWidth-1:0] rf_wdata_wb_ecc;
  logic [RegFileDataWidth-1:0] rf_rdata_a_ecc, rf_rdata_a_ecc_buf;
  logic [RegFileDataWidth-1:0] rf_rdata_b_ecc, rf_rdata_b_ecc_buf;

  // Combined data and integrity for data and instruction busses
  logic [MemDataWidth-1:0]     data_wdata_core;
  logic [MemDataWidth-1:0]     data_rdata_core;
  logic [MemDataWidth-1:0]     instr_rdata_core;

  // Core <-> RAMs signals
  logic [IC_NUM_WAYS-1:0]      ic_tag_req;
  logic                        ic_tag_write;
  logic [IC_INDEX_W-1:0]       ic_tag_addr;
  logic [TagSizeECC-1:0]       ic_tag_wdata;
  logic [TagSizeECC-1:0]       ic_tag_rdata [IC_NUM_WAYS];
  logic [IC_NUM_WAYS-1:0]      ic_data_req;
  logic                        ic_data_write;
  logic [IC_INDEX_W-1:0]       ic_data_addr;
  logic [LineSizeECC-1:0]      ic_data_wdata;
  logic [LineSizeECC-1:0]      ic_data_rdata [IC_NUM_WAYS];
  logic                        ic_scr_key_req;
  // Alert signals
  logic                        core_alert_major_internal, core_alert_major_bus, core_alert_minor;
  logic                        lockstep_alert_major_internal, lockstep_alert_major_bus;
  logic                        lockstep_alert_minor;
  // Scramble signals
  logic [SCRAMBLE_KEY_W-1:0]   scramble_key_q;
  logic [SCRAMBLE_NONCE_W-1:0] scramble_nonce_q;
  logic                        scramble_key_valid_d, scramble_key_valid_q;
  logic                        scramble_req_d, scramble_req_q;
  logic                        rf_alert_major_internal;
  ibex_mubi_t                  fetch_enable_buf;
/* verilator lint_on UNUSEDSIGNAL */
/* verilator lint_on UNDRIVEN */
ibex_top_clk_gate #(
  .SecureIbex(SecureIbex)
) u_ibex_top_clk_gate(
  .clk_i(clk_i),
  .clk(clk),
  .rst_ni(rst_ni),
  .core_busy_d(core_busy_d),
  .debug_req_i(debug_req_i),
  .irq_pending(irq_pending),
  .test_en_i(test_en_i),
  .irq_nm_i(irq_nm_i),
  .core_sleep_o(core_sleep_o)
);

  // Buffer security critical signals to prevent synthesis optimisation removing them
prim_buf #(.Width($bits(ibex_mubi_t))) u_fetch_enable_buf (
  .in_i (fetch_enable_i),
  .out_o(fetch_enable_buf)
);

prim_buf #(.Width(RegFileDataWidth)) u_rf_rdata_a_ecc_buf (
  .in_i (rf_rdata_a_ecc),
  .out_o(rf_rdata_a_ecc_buf)
);

prim_buf #(.Width(RegFileDataWidth)) u_rf_rdata_b_ecc_buf (
  .in_i (rf_rdata_b_ecc),
  .out_o(rf_rdata_b_ecc_buf)
);

ibex_top_core_inst #(
  .SecureIbex(SecureIbex),
  .MemECC(MemECC),
  .MemDataWidth(MemDataWidth)
)u_ibex_top_core_inst(
  .data_rdata_i(data_rdata_i),
  .instr_rdata_i(instr_rdata_i),
  .data_rdata_intg_i(data_rdata_intg_i),
  .instr_rdata_intg_i(instr_rdata_intg_i),
  .data_rdata_core(data_rdata_core),
  .instr_rdata_core(instr_rdata_core)   
);

  ibex_core #(
    .PMPEnable        (PMPEnable),
    .PMPGranularity   (PMPGranularity),
    .PMPNumRegions    (PMPNumRegions),
    .MHPMCounterNum   (MHPMCounterNum),
    .MHPMCounterWidth (MHPMCounterWidth),
    .RV32E            (RV32E),
    .RV32M            (RV32M),
    .RV32B            (RV32B),
    .BranchTargetALU  (BranchTargetALU),
    .ICache           (ICache),
    .ICacheECC        (ICacheECC),
    .BusSizeECC       (BusSizeECC),
    .TagSizeECC       (TagSizeECC),
    .LineSizeECC      (LineSizeECC),
    .BranchPredictor  (BranchPredictor),
    .DbgTriggerEn     (DbgTriggerEn),
    .DbgHwBreakNum    (DbgHwBreakNum),
    .WritebackStage   (WritebackStage),
    .ResetAll         (ResetAll),
    .RndCnstLfsrSeed  (RndCnstLfsrSeed),
    .RndCnstLfsrPerm  (RndCnstLfsrPerm),
    .SecureIbex       (SecureIbex),
    .DummyInstructions(DummyInstructions),
    .RegFileECC       (RegFileECC),
    .RegFileDataWidth (RegFileDataWidth),
    .MemECC           (MemECC),
    .MemDataWidth     (MemDataWidth),
    .DmHaltAddr       (DmHaltAddr),
    .DmExceptionAddr  (DmExceptionAddr)
  ) u_ibex_core (
    .clk_i(clk),
    .rst_ni,

    .hart_id_i,
    .boot_addr_i,

    .instr_req_o,
    .instr_gnt_i,
    .instr_rvalid_i,
    .instr_addr_o,
    .instr_rdata_i(instr_rdata_core),
    .instr_err_i,

    .data_req_o,
    .data_gnt_i,
    .data_rvalid_i,
    .data_we_o,
    .data_be_o,
    .data_addr_o,
    .data_wdata_o(data_wdata_core),
    .data_rdata_i(data_rdata_core),
    .data_err_i,

    .dummy_instr_id_o (dummy_instr_id),
    .dummy_instr_wb_o (dummy_instr_wb),
    .rf_raddr_a_o     (rf_raddr_a),
    .rf_raddr_b_o     (rf_raddr_b),
    .rf_waddr_wb_o    (rf_waddr_wb),
    .rf_we_wb_o       (rf_we_wb),
    .rf_wdata_wb_ecc_o(rf_wdata_wb_ecc),
    .rf_rdata_a_ecc_i (rf_rdata_a_ecc_buf),
    .rf_rdata_b_ecc_i (rf_rdata_b_ecc_buf),

    .ic_tag_req_o      (ic_tag_req),
    .ic_tag_write_o    (ic_tag_write),
    .ic_tag_addr_o     (ic_tag_addr),
    .ic_tag_wdata_o    (ic_tag_wdata),
    .ic_tag_rdata_i    (ic_tag_rdata),
    .ic_data_req_o     (ic_data_req),
    .ic_data_write_o   (ic_data_write),
    .ic_data_addr_o    (ic_data_addr),
    .ic_data_wdata_o   (ic_data_wdata),
    .ic_data_rdata_i   (ic_data_rdata),
    .ic_scr_key_valid_i(scramble_key_valid_q),
    .ic_scr_key_req_o  (ic_scr_key_req),

    .irq_software_i,
    .irq_timer_i,
    .irq_external_i,
    .irq_fast_i,
    .irq_nm_i,
    .irq_pending_o(irq_pending),

    .debug_req_i,
    .crash_dump_o,
    .double_fault_seen_o,

`ifdef RVFI
    .rvfi_valid,
    .rvfi_order,
    .rvfi_insn,
    .rvfi_trap,
    .rvfi_halt,
    .rvfi_intr,
    .rvfi_mode,
    .rvfi_ixl,
    .rvfi_rs1_addr,
    .rvfi_rs2_addr,
    .rvfi_rs3_addr,
    .rvfi_rs1_rdata,
    .rvfi_rs2_rdata,
    .rvfi_rs3_rdata,
    .rvfi_rd_addr,
    .rvfi_rd_wdata,
    .rvfi_pc_rdata,
    .rvfi_pc_wdata,
    .rvfi_mem_addr,
    .rvfi_mem_rmask,
    .rvfi_mem_wmask,
    .rvfi_mem_rdata,
    .rvfi_mem_wdata,
    .rvfi_ext_mip,
    .rvfi_ext_nmi,
    .rvfi_ext_nmi_int,
    .rvfi_ext_debug_req,
    .rvfi_ext_debug_mode,
    .rvfi_ext_rf_wr_suppress,
    .rvfi_ext_mcycle,
    .rvfi_ext_mhpmcounters,
    .rvfi_ext_mhpmcountersh,
    .rvfi_ext_ic_scr_key_valid,
    .rvfi_ext_irq_valid,
`endif

    .fetch_enable_i        (fetch_enable_buf),
    .alert_minor_o         (core_alert_minor),
    .alert_major_internal_o(core_alert_major_internal),
    .alert_major_bus_o     (core_alert_major_bus),
    .core_busy_o           (core_busy_d)
  );

  ibex_top_rf_inst #(
        .SecureIbex(SecureIbex),
        .RV32E(RV32E),
        .RegFile(RegFile),
        .RegFileECC(RegFileECC),
        .RegFileDataWidth(RegFileDataWidth),
        .DummyInstructions(DummyInstructions),
        // SEC_CM: DATA_REG_SW.GLITCH_DETECT
        .RegFileWrenCheck(RegFileWrenCheck)
  ) u_ibex_top_rf_inst (
        .clk (clk),
        .rst_ni(rst_ni),

        .test_en_i(test_en_i),
        .dummy_instr_id(dummy_instr_id),
        .dummy_instr_wb(dummy_instr_wb),

        .rf_raddr_a(rf_raddr_a),
        .rf_rdata_a_ecc(rf_rdata_a_ecc),
        .rf_raddr_b(rf_raddr_b),
        .rf_rdata_b_ecc(rf_rdata_b_ecc),
        .rf_waddr_wb(rf_waddr_wb),
        .rf_wdata_wb_ecc(rf_wdata_wb_ecc),
        .rf_we_wb   (rf_we_wb),
        .rf_alert_major_internal    (rf_alert_major_internal)
    );
  
 
ibex_top_scramble #(
  .ICacheScramble(ICacheScramble),
  .RndCnstIbexKey(RndCnstIbexKey),
  .RndCnstIbexNonce(RndCnstIbexNonce)
)u_ibex_top_scramble(
  .clk_i(clk_i),
  .rst_ni(rst_ni),
  .scramble_key_i(scramble_key_i),
  .scramble_nonce_i(scramble_nonce_i),
  .ic_scr_key_req(ic_scr_key_req),
  .scramble_key_valid_i(scramble_key_valid_i),
  .scramble_key_valid_d(scramble_key_valid_d),
  .scramble_key_q(scramble_key_q),
  .scramble_nonce_q(scramble_nonce_q),
  .scramble_req_q(scramble_req_q),
  .scramble_key_valid_q(scramble_key_valid_q),
  .scramble_req_o(scramble_req_o),
  .scramble_req_d(scramble_req_d)
);

ibex_top_ram_inst #(
  .SecureIbex(SecureIbex),
  .ICache(ICache),
  .ICacheScramble(ICacheScramble),
  .ICacheECC(ICacheECC),
  .MemECC(MemECC),
  .MemDataWidth(MemDataWidth),
  .TagSizeECC(TagSizeECC),
  .NumAddrScrRounds(NumAddrScrRounds),
  .NumDiffRounds(NumDiffRounds),
  .BusSizeECC(BusSizeECC),
  .LineSizeECC(LineSizeECC)
)u_ibex_top_ram_inst (
  .clk_i(clk_i),
  .rst_ni(rst_ni),
  .ic_tag_req(ic_tag_req),
  .ic_tag_write(ic_tag_write),
  .ic_tag_addr(ic_tag_addr),
  .ic_tag_wdata(ic_tag_wdata),
  .ic_tag_rdata(ic_tag_rdata),
  .ic_data_req(ic_data_req),
  .ic_data_write(ic_data_write),
  .ic_data_addr(ic_data_addr),
  .ic_data_wdata(ic_data_wdata),
  .ic_data_rdata(ic_data_rdata),
  .scramble_key_i(scramble_key_i),
  .ram_cfg_i(ram_cfg_i),
  .scramble_key_valid_i(scramble_key_valid_i),
  .data_wdata_core(data_wdata_core),
  .data_wdata_o(data_wdata_o),
  .scramble_key_valid_d(scramble_key_valid_d),
  .scramble_key_q(scramble_key_q),
  .scramble_nonce_q(scramble_nonce_q),
  .scramble_key_valid_q(scramble_key_valid_q),
  .data_wdata_intg_o(data_wdata_intg_o)
);

ibex_top_lockstep #(
  .SecureIbex(SecureIbex),
  .ICacheECC(ICacheECC),
  .BusSizeECC(BusSizeECC),
  .LineSizeECC(LineSizeECC),
  .Lockstep(Lockstep),
  .ResetAll(ResetAll),
  .MemECC(MemECC),
  .MemDataWidth(MemDataWidth),
  .RegFileECC(RegFileECC),
  .RegFileDataWidth(RegFileDataWidth),
  .TagSizeECC(TagSizeECC),
  .PMPEnable(PMPEnable),
  .PMPGranularity(PMPGranularity),
  .PMPNumRegions(PMPNumRegions),
  .MHPMCounterNum(MHPMCounterNum),
  .MHPMCounterWidth(MHPMCounterWidth),
  .RV32E(RV32E),
  .RV32M(RV32M),
  .RV32B(RV32B),
  .BranchTargetALU(BranchTargetALU),
  .WritebackStage(WritebackStage),
  .ICache(ICache),
  .BranchPredictor(BranchPredictor),
  .DbgTriggerEn(DbgTriggerEn),
  .DbgHwBreakNum(DbgHwBreakNum),
  .RndCnstLfsrSeed(RndCnstLfsrSeed),
  .RndCnstLfsrPerm(RndCnstLfsrPerm),
  .DmHaltAddr(DmHaltAddr),
  .DmExceptionAddr(DmExceptionAddr),
  .DummyInstructions(DummyInstructions)
)u_ibex_top_lockstep(
  .clk_i(clk_i),
  .clk(clk),
  .rst_ni(rst_ni),
  .test_en_i(test_en_i),
  .ram_cfg_i(ram_cfg_i),
  .scan_rst_ni(scan_rst_ni),
  .hart_id_i(hart_id_i),
  .boot_addr_i(boot_addr_i),
  .instr_req_o(instr_req_o),
  .instr_gnt_i(instr_gnt_i),
  .instr_rvalid_i(instr_rvalid_i),
  .instr_err_i(instr_err_i),
  .instr_addr_o(instr_addr_o),
  .instr_rdata_core(instr_rdata_core),
  .instr_rdata_i(instr_rdata_i),
  .instr_rdata_intg_i(instr_rdata_intg_i),
  .data_req_o(data_req_o),
  .data_gnt_i(data_gnt_i),
  .data_rvalid_i(data_rvalid_i),
  .data_we_o(data_we_o),
  .data_be_o(data_be_o),
  .data_addr_o(data_addr_o),
  .data_wdata_o(data_wdata_o),
  .data_wdata_intg_o(data_wdata_intg_o),
  .data_wdata_core(data_wdata_core),
  .data_rdata_core(data_rdata_core),
  .data_err_i(data_err_i),
  .dummy_instr_id(dummy_instr_id),
  .dummy_instr_wb(dummy_instr_wb),
  .rf_raddr_a(rf_raddr_a),
  .rf_raddr_b(rf_raddr_b),
  .rf_waddr_wb(rf_waddr_wb),
  .rf_we_wb(rf_we_wb),
  .rf_wdata_wb_ecc(rf_wdata_wb_ecc),
  .rf_rdata_a_ecc(rf_rdata_a_ecc),
  .rf_rdata_b_ecc(rf_rdata_b_ecc),
  .ic_tag_req(ic_tag_req),
  .ic_tag_write(ic_tag_write),
  .ic_tag_addr(ic_tag_addr),
  .ic_tag_wdata(ic_tag_wdata),
  .ic_tag_rdata(ic_tag_rdata),
  .ic_data_req(ic_data_req),
  .ic_data_write(ic_data_write),
  .ic_data_addr(ic_data_addr),
  .ic_data_wdata(ic_data_wdata),
  .ic_data_rdata(ic_data_rdata),
  .scramble_key_valid_i(scramble_key_valid_i),
  .ic_scr_key_req(ic_scr_key_req),
  .irq_software_i(irq_software_i),
  .irq_timer_i(irq_timer_i),
  .irq_external_i(irq_external_i),
  .irq_fast_i(irq_fast_i),
  .irq_nm_i(irq_nm_i), 
  .irq_pending(irq_pending),
  .debug_req_i(debug_req_i),
  .crash_dump_o(crash_dump_o),
  .double_fault_seen_o(double_fault_seen_o),
  .fetch_enable_i(fetch_enable_i),
  .core_busy_d(core_busy_d),
  .lockstep_alert_major_internal(lockstep_alert_major_internal), 
  .lockstep_alert_major_bus(lockstep_alert_major_bus),
  .lockstep_alert_minor(lockstep_alert_minor),
  .alert_minor_o(alert_minor_o),
  .alert_major_internal_o(alert_major_internal_o),
  .alert_major_bus_o(alert_major_bus_o),
  .core_alert_major_internal(core_alert_major_internal), 
  .core_alert_major_bus(core_alert_major_bus), 
  .core_alert_minor(core_alert_minor),
  .scramble_key_valid_q(scramble_key_valid_q),
  .rf_alert_major_internal(rf_alert_major_internal)
);

endmodule
