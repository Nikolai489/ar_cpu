// Copyright lowRISC contributors.
// Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

`ifdef RISCV_FORMAL
  `define RVFI
`endif

`include "prim_assert.sv"
`include "dv_fcov_macros.svh"
`include "ibex_core_clk_mgmt.sv"
`include "ibex_core_if_helper.sv"
`include "ibex_core_rf_interface.sv"

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

  localparam int unsigned PMPNumChan      = 3;
  // SEC_CM: CORE.DATA_REG_SW.SCA
  //localparam bit          DataIndTiming     = SecureIbex;
  localparam bit          PCIncrCheck       = SecureIbex;
  //localparam bit          ShadowCSR         = 1'b0;

  // IF/ID signals
  logic unused_fetch_enable;
  logic        dummy_instr_id;
  logic        instr_valid_id;
  logic        instr_new_id;
  logic [31:0] instr_rdata_id;                 // Instruction sampled inside IF stage
  logic [31:0] instr_rdata_alu_id;             // Instruction sampled inside IF stage (replicated to
                                               // ease fan-out)
  logic [15:0] instr_rdata_c_id;               // Compressed instruction sampled inside IF stage
  logic        instr_is_compressed_id;
  logic        instr_perf_count_id;
  logic        instr_bp_taken_id;
  logic        instr_fetch_err;                // Bus error on instr fetch
  logic        instr_fetch_err_plus2;          // Instruction error is misaligned
  logic        illegal_c_insn_id;              // Illegal compressed instruction sent to ID stage
  logic [31:0] pc_if;                          // Program counter in IF stage
  logic [31:0] pc_id;                          // Program counter in ID stage
  logic [31:0] pc_wb;                          // Program counter in WB stage
  logic [33:0] imd_val_d_ex[2];                // Intermediate register for multicycle Ops
  logic [33:0] imd_val_q_ex[2];                // Intermediate register for multicycle Ops
  logic [1:0]  imd_val_we_ex;

  logic        data_ind_timing;
  logic        dummy_instr_en;
  logic [2:0]  dummy_instr_mask;
  logic        dummy_instr_seed_en;
  logic [31:0] dummy_instr_seed;
  logic        icache_enable;
  logic        icache_inval;
  logic        icache_ecc_error;
  logic        pc_mismatch_alert;
  logic        csr_shadow_err;

  logic        instr_first_cycle_id;
  logic        instr_valid_clear;
  logic        pc_set;
  logic        nt_branch_mispredict;
  logic [31:0] nt_branch_addr;
  pc_sel_e     pc_mux_id;                      // Mux selector for next PC
  exc_pc_sel_e exc_pc_mux_id;                  // Mux selector for exception PC
  exc_cause_t  exc_cause;                      // Exception cause

  logic        instr_intg_err;
  logic        lsu_load_err;
  logic        lsu_store_err;
  logic        lsu_load_resp_intg_err;
  logic        lsu_store_resp_intg_err;

  // LSU signals
  logic        lsu_addr_incr_req;
  logic [31:0] lsu_addr_last;
  logic unused_rf_ren_a, unused_rf_ren_b;
  logic unused_rf_rd_a_wb_match, unused_rf_rd_b_wb_match;

  // Jump and branch target and decision (EX->IF)
  logic [31:0] branch_target_ex;
  logic        branch_decision;

  // Core busy signals
  logic        ctrl_busy;
  logic        if_busy;
  logic        lsu_busy;

  // Register File
  logic [4:0]  rf_raddr_a;
  logic [31:0] rf_rdata_a;
  logic [4:0]  rf_raddr_b;
  logic [31:0] rf_rdata_b;
  logic        rf_ren_a;
  logic        rf_ren_b;
  logic [4:0]  rf_waddr_wb;
  logic [31:0] rf_wdata_wb;
  // Writeback register write data that can be used on the forwarding path (doesn't factor in memory
  // read data as this is too late for the forwarding path)
  logic [31:0] rf_wdata_fwd_wb;
  logic [31:0] rf_wdata_lsu;
  logic        rf_we_wb;
  logic        rf_we_lsu;
  logic        rf_ecc_err_comb;

  logic [4:0]  rf_waddr_id;
  logic [31:0] rf_wdata_id;
  logic        rf_we_id;
  logic        rf_rd_a_wb_match;
  logic        rf_rd_b_wb_match;

  // ALU Control
  alu_op_e     alu_operator_ex;
  logic [31:0] alu_operand_a_ex;
  logic [31:0] alu_operand_b_ex;

  logic [31:0] bt_a_operand;
  logic [31:0] bt_b_operand;

  logic [31:0] alu_adder_result_ex;    // Used to forward computed address to LSU
  logic [31:0] result_ex;

  // Multiplier Control
  logic        mult_en_ex;
  logic        div_en_ex;
  logic        mult_sel_ex;
  logic        div_sel_ex;
  md_op_e      multdiv_operator_ex;
  logic [1:0]  multdiv_signed_mode_ex;
  logic [31:0] multdiv_operand_a_ex;
  logic [31:0] multdiv_operand_b_ex;
  logic        multdiv_ready_id;

  // CSR control
  logic        csr_access;
  csr_op_e     csr_op;
  logic        csr_op_en;
  csr_num_e    csr_addr;
  logic [31:0] csr_rdata;
  logic [31:0] csr_wdata;
  logic        illegal_csr_insn_id;    // CSR access to non-existent register,
                                       // with wrong priviledge level,
                                       // or missing write permissions

  // Data Memory Control
  logic        lsu_we;
  logic [1:0]  lsu_type;
  logic        lsu_sign_ext;
  logic        lsu_req;
  logic [31:0] lsu_wdata;
  logic        lsu_req_done;

  // stall control
  logic        id_in_ready;
  logic        ex_valid;

  logic        lsu_resp_valid;
  logic        lsu_resp_err;

  // Signals between instruction core interface and pipe (if and id stages)
  logic        instr_req_int;          // Id stage asserts a req to instruction core interface
  logic        instr_req_gated;
  logic        instr_exec;

  // Writeback stage
  logic           en_wb;
  wb_instr_type_e instr_type_wb;
  logic           ready_wb;
  logic           rf_write_wb;
  logic           outstanding_load_wb;
  logic           outstanding_store_wb;
  logic           dummy_instr_wb;

  // Interrupts
  logic        nmi_mode;
  irqs_t       irqs;
  logic        csr_mstatus_mie;
  logic [31:0] csr_mepc, csr_depc;

  // PMP signals
  logic [33:0]  csr_pmp_addr [PMPNumRegions];
  pmp_cfg_t     csr_pmp_cfg  [PMPNumRegions];
  pmp_mseccfg_t csr_pmp_mseccfg;
  logic         pmp_req_err  [PMPNumChan];
  logic         data_req_out;

  logic        csr_save_if;
  logic        csr_save_id;
  logic        csr_save_wb;
  logic        csr_restore_mret_id;
  logic        csr_restore_dret_id;
  logic        csr_save_cause;
  logic        csr_mtvec_init;
  logic [31:0] csr_mtvec;
  logic [31:0] csr_mtval;
  logic        csr_mstatus_tw;
  priv_lvl_e   priv_mode_id;
  priv_lvl_e   priv_mode_lsu;

  // debug mode and dcsr configuration
  logic        debug_mode;
  logic        debug_mode_entering;
  dbg_cause_e  debug_cause;
  logic        debug_csr_save;
  logic        debug_single_step;
  logic        debug_ebreakm;
  logic        debug_ebreaku;
  logic        trigger_match;

  // signals relating to instruction movements between pipeline stages
  // used by performance counters and RVFI
  logic        instr_id_done;
  logic        instr_done_wb;

  logic        perf_instr_ret_wb;
  logic        perf_instr_ret_compressed_wb;
  logic        perf_instr_ret_wb_spec;
  logic        perf_instr_ret_compressed_wb_spec;
  logic        perf_iside_wait;
  logic        perf_dside_wait;
  logic        perf_mul_wait;
  logic        perf_div_wait;
  logic        perf_jump;
  logic        perf_branch;
  logic        perf_tbranch;
  logic        perf_load;
  logic        perf_store;

  // for RVFI
  logic        illegal_insn_id, unused_illegal_insn_id; // ID stage sees an illegal instruction

  //////////////////////
  // Clock management //
  //////////////////////

  ibex_core_clk_mgmt #(
    .SecureIbex(SecureIbex)
  ) u_ibex_core_clk_mgmt(
    .if_busy(if_busy),
    .lsu_busy(lsu_busy),
    .ctrl_busy(ctrl_busy),
    .core_busy_o(core_busy_o)
  );
  // Before going to sleep, wait for I- and D-side
  // interfaces to finish ongoing operations.

  //////////////
  // IF stage //
  //////////////

  ibex_if_stage #(
    .DmHaltAddr       (DmHaltAddr),
    .DmExceptionAddr  (DmExceptionAddr),
    .DummyInstructions(DummyInstructions),
    .ICache           (ICache),
    .ICacheECC        (ICacheECC),
    .BusSizeECC       (BusSizeECC),
    .TagSizeECC       (TagSizeECC),
    .LineSizeECC      (LineSizeECC),
    .PCIncrCheck      (PCIncrCheck),
    .ResetAll         (ResetAll),
    .RndCnstLfsrSeed  (RndCnstLfsrSeed),
    .RndCnstLfsrPerm  (RndCnstLfsrPerm),
    .BranchPredictor  (BranchPredictor),
    .MemECC           (MemECC),
    .MemDataWidth     (MemDataWidth)
  ) if_stage_i (
    .clk_i (clk_i),
    .rst_ni(rst_ni),

    .boot_addr_i(boot_addr_i),
    .req_i      (instr_req_gated),  // instruction request control

    // instruction cache interface
    .instr_req_o       (instr_req_o),
    .instr_addr_o      (instr_addr_o),
    .instr_gnt_i       (instr_gnt_i),
    .instr_rvalid_i    (instr_rvalid_i),
    .instr_rdata_i     (instr_rdata_i),
    .instr_bus_err_i   (instr_err_i),
    .instr_intg_err_o  (instr_intg_err),

    .ic_tag_req_o      (ic_tag_req_o),
    .ic_tag_write_o    (ic_tag_write_o),
    .ic_tag_addr_o     (ic_tag_addr_o),
    .ic_tag_wdata_o    (ic_tag_wdata_o),
    .ic_tag_rdata_i    (ic_tag_rdata_i),
    .ic_data_req_o     (ic_data_req_o),
    .ic_data_write_o   (ic_data_write_o),
    .ic_data_addr_o    (ic_data_addr_o),
    .ic_data_wdata_o   (ic_data_wdata_o),
    .ic_data_rdata_i   (ic_data_rdata_i),
    .ic_scr_key_valid_i(ic_scr_key_valid_i),
    .ic_scr_key_req_o  (ic_scr_key_req_o),

    // outputs to ID stage
    .instr_valid_id_o        (instr_valid_id),
    .instr_new_id_o          (instr_new_id),
    .instr_rdata_id_o        (instr_rdata_id),
    .instr_rdata_alu_id_o    (instr_rdata_alu_id),
    .instr_rdata_c_id_o      (instr_rdata_c_id),
    .instr_is_compressed_id_o(instr_is_compressed_id),
    .instr_bp_taken_o        (instr_bp_taken_id),
    .instr_fetch_err_o       (instr_fetch_err),
    .instr_fetch_err_plus2_o (instr_fetch_err_plus2),
    .illegal_c_insn_id_o     (illegal_c_insn_id),
    .dummy_instr_id_o        (dummy_instr_id),
    .pc_if_o                 (pc_if),
    .pc_id_o                 (pc_id),
    .pmp_err_if_i            (pmp_req_err[PMP_I]),
    .pmp_err_if_plus2_i      (pmp_req_err[PMP_I2]),

    // control signals
    .instr_valid_clear_i   (instr_valid_clear),
    .pc_set_i              (pc_set),
    .pc_mux_i              (pc_mux_id),
    .nt_branch_mispredict_i(nt_branch_mispredict),
    .exc_pc_mux_i          (exc_pc_mux_id),
    .exc_cause             (exc_cause),
    .dummy_instr_en_i      (dummy_instr_en),
    .dummy_instr_mask_i    (dummy_instr_mask),
    .dummy_instr_seed_en_i (dummy_instr_seed_en),
    .dummy_instr_seed_i    (dummy_instr_seed),
    .icache_enable_i       (icache_enable),
    .icache_inval_i        (icache_inval),
    .icache_ecc_error_o    (icache_ecc_error),

    // branch targets
    .branch_target_ex_i(branch_target_ex),
    .nt_branch_addr_i  (nt_branch_addr),

    // CSRs
    .csr_mepc_i      (csr_mepc),  // exception return address
    .csr_depc_i      (csr_depc),  // debug return address
    .csr_mtvec_i     (csr_mtvec),  // trap-vector base address
    .csr_mtvec_init_o(csr_mtvec_init),

    // pipeline stalls
    .id_in_ready_i(id_in_ready),

    .pc_mismatch_alert_o(pc_mismatch_alert),
    .if_busy_o          (if_busy)
  );

  ibex_core_if_helper #(
    .SecureIbex(SecureIbex)
  ) u_ibex_core_if_helper (
    .id_in_ready(id_in_ready),
    .instr_valid_id(instr_valid_id),
    .fetch_enable_i(fetch_enable_i),
    .instr_req_int(instr_req_int),
    .illegal_insn_id(illegal_insn_id),
    .data_req_out(data_req_out),
    .lsu_load_err(lsu_load_err),
    .lsu_store_err(lsu_store_err),
    .pmp_req_err(pmp_req_err),
    .unused_illegal_insn_id(unused_illegal_insn_id),
    .perf_iside_wait(perf_iside_wait),
    .instr_req_gated(instr_req_gated),
    .unused_fetch_enable(unused_fetch_enable),
    .instr_exec(instr_exec),
    .data_req_o(data_req_o),
    .lsu_resp_err(lsu_resp_err)
  );


ibex_core_rf_interface #(
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
  .ResetAll(ResetAll),        
  .SecureIbex(SecureIbex),      
  .DummyInstructions(DummyInstructions), 
  .RegFileECC(RegFileECC),     
  .RegFileDataWidth(RegFileDataWidth),
  .MemECC(MemECC),          
  .MemDataWidth(MemDataWidth)    
) u_ibex_core_rf_interface(
    // Clock and Reset
  .clk_i(clk_i),
  .rst_ni(rst_ni),

  .hart_id_i(hart_id_i),
  .boot_addr_i(boot_addr_i),

  // Instruction memory interface
  .instr_rdata_i(instr_rdata_i),

  // Data memory interface
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
  
  // Interrupt inputs
  .irq_software_i(irq_software_i),
  .irq_timer_i(irq_timer_i),
  .irq_external_i(irq_external_i),
  .irq_fast_i(irq_fast_i),
  .irq_nm_i(irq_nm_i),    
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
  .core_busy_o(core_busy_o),  

  // IF/ID signals
  .dummy_instr_id(dummy_instr_id),
  .instr_valid_id(instr_valid_id),
  .instr_new_id(instr_new_id),
  .instr_rdata_id(instr_rdata_id),             
  .instr_rdata_alu_id(instr_rdata_alu_id),            
  .instr_rdata_c_id(instr_rdata_c_id),             
  .instr_is_compressed_id(instr_is_compressed_id),
  .instr_perf_count_id(instr_perf_count_id),
  .instr_bp_taken_id(instr_bp_taken_id),
  .instr_fetch_err(instr_fetch_err),                
  .instr_fetch_err_plus2(instr_fetch_err_plus2),        
  .illegal_c_insn_id(illegal_c_insn_id),              
  .pc_if(pc_if),                      
  .pc_id(pc_id),                       
  .pc_wb(pc_wb),                       
  .imd_val_d_ex(imd_val_d_ex),               
  .imd_val_q_ex(imd_val_q_ex),             
  .imd_val_we_ex(imd_val_we_ex),

  .data_ind_timing(data_ind_timing),
  .dummy_instr_en(dummy_instr_en),
  .dummy_instr_mask(dummy_instr_mask),
  .dummy_instr_seed_en(dummy_instr_seed_en),
  .dummy_instr_seed(dummy_instr_seed),
  .icache_enable(icache_enable),
  .icache_inval(icache_inval),
  .icache_ecc_error(icache_ecc_error),
  .pc_mismatch_alert(pc_mismatch_alert),
  .csr_shadow_err(csr_shadow_err),

  .instr_first_cycle_id(instr_first_cycle_id),
  .instr_valid_clear(instr_valid_clear),
  .pc_set(pc_set),
  .nt_branch_mispredict(nt_branch_mispredict),
  .nt_branch_addr(nt_branch_addr),
  .pc_mux_id(pc_mux_id),                     
  .exc_pc_mux_id(exc_pc_mux_id),               
  .exc_cause(exc_cause),                     

  .instr_intg_err(instr_intg_err),
  .lsu_load_err(lsu_load_err),
  .lsu_store_err(lsu_store_err),
  .lsu_load_resp_intg_err(lsu_load_resp_intg_err),
  .lsu_store_resp_intg_err(lsu_store_resp_intg_err),

  // LSU signals
  .lsu_addr_incr_req(lsu_addr_incr_req),
  .lsu_addr_last(lsu_addr_last),
  .unused_rf_ren_a(unused_rf_ren_a),
  .unused_rf_ren_b(unused_rf_ren_b),
  .unused_rf_rd_a_wb_match(unused_rf_rd_a_wb_match),
  .unused_rf_rd_b_wb_match(unused_rf_rd_b_wb_match),

  // Jump and branch target and decision (EX->IF)
  .branch_target_ex(branch_target_ex),
  .branch_decision(branch_decision),

  // Core busy signals
  .ctrl_busy(ctrl_busy),
  .lsu_busy(lsu_busy),

  // Register File
  .rf_raddr_a(rf_raddr_a),
  .rf_rdata_a(rf_rdata_a),
  .rf_raddr_b(rf_raddr_b),
  .rf_rdata_b(rf_rdata_b),
  .rf_ren_a(rf_ren_a),
  .rf_ren_b(rf_ren_b),
  .rf_waddr_wb(rf_waddr_wb),
  .rf_wdata_wb(rf_wdata_wb),
  // Writeback register write data that can be used on the forwarding path (doesn't factor in memory
  // read data as this is too late for the forwarding path)
  .rf_wdata_fwd_wb(rf_wdata_fwd_wb),
  .rf_wdata_lsu(rf_wdata_lsu),
  .rf_we_wb(rf_we_wb),
  .rf_we_lsu(rf_we_lsu),
  .rf_ecc_err_comb(rf_ecc_err_comb),

  .rf_waddr_id(rf_waddr_id),
  .rf_wdata_id(rf_wdata_id),
  .rf_we_id(rf_we_id),
  .rf_rd_a_wb_match(rf_rd_a_wb_match),
  .rf_rd_b_wb_match(rf_rd_b_wb_match),

  // ALU Control
  .alu_operator_ex(alu_operator_ex),
  .alu_operand_a_ex(alu_operand_a_ex),
  .alu_operand_b_ex(alu_operand_b_ex),

  .bt_a_operand(bt_a_operand),
  .bt_b_operand(bt_b_operand),

  .alu_adder_result_ex(alu_adder_result_ex),   
  .result_ex(result_ex),

  // Multiplier Control
  .mult_en_ex(mult_en_ex),
  .div_en_ex(div_en_ex),
  .mult_sel_ex(mult_sel_ex),
  .div_sel_ex(div_sel_ex),
  .multdiv_operator_ex(multdiv_operator_ex),
  .multdiv_signed_mode_ex(multdiv_signed_mode_ex),
  .multdiv_operand_a_ex(multdiv_operand_a_ex),
  .multdiv_operand_b_ex(multdiv_operand_b_ex),
  .multdiv_ready_id(multdiv_ready_id),

  // CSR control
  .csr_access(csr_access),
  .csr_op(csr_op),
  .csr_op_en(csr_op_en),
  .csr_addr(csr_addr),
  .csr_rdata(csr_rdata),
  .csr_wdata(csr_wdata),
  .illegal_csr_insn_id(illegal_csr_insn_id),   

  // Data Memory Control
  .lsu_we(lsu_we),
  .lsu_type(lsu_type),
  .lsu_sign_ext(lsu_sign_ext),
  .lsu_req(lsu_req),
  .lsu_wdata(lsu_wdata),
  .lsu_req_done(lsu_req_done),

  // stall control
  .id_in_ready(id_in_ready),
  .ex_valid(ex_valid),

  .lsu_resp_valid(lsu_resp_valid),
  .lsu_resp_err(lsu_resp_err),

  // Signals between instruction core interface and pipe (if and id stages)
  .instr_req_int(instr_req_int),         
  .instr_exec(instr_exec),

  // Writeback stage
  .en_wb(en_wb),
  .instr_type_wb(instr_type_wb),
  .ready_wb(ready_wb),
  .rf_write_wb(rf_write_wb),
  .outstanding_load_wb(outstanding_load_wb),
  .outstanding_store_wb(outstanding_store_wb),
  .dummy_instr_wb(dummy_instr_wb),

  // Interrupts
  .nmi_mode(nmi_mode),
  .irqs(irqs),
  .csr_mstatus_mie(csr_mstatus_mie),
  .csr_mepc(csr_mepc),
  .csr_depc(csr_depc),

  // PMP signals
  .csr_pmp_addr(csr_pmp_addr),
  .csr_pmp_cfg(csr_pmp_cfg),
  .csr_pmp_mseccfg(csr_pmp_mseccfg),
  .pmp_req_err(pmp_req_err),
  .data_req_out(data_req_out),

  .csr_save_if(csr_save_if),
  .csr_save_id(csr_save_id),
  .csr_save_wb(csr_save_wb),
  .csr_restore_mret_id(csr_restore_mret_id),
  .csr_restore_dret_id(csr_restore_dret_id),
  .csr_save_cause(csr_save_cause),
  .csr_mtvec_init(csr_mtvec_init),
  .csr_mtvec(csr_mtvec),
  .csr_mtval(csr_mtval),
  .csr_mstatus_tw(csr_mstatus_tw),
  .priv_mode_id(priv_mode_id),
  .priv_mode_lsu(priv_mode_lsu),

  // debug mode and dcsr configuration
  .debug_mode(debug_mode),
  .debug_mode_entering(debug_mode_entering),
  .debug_cause(debug_cause),
  .debug_csr_save(debug_csr_save),
  .debug_single_step(debug_single_step),
  .debug_ebreakm(debug_ebreakm),
  .debug_ebreaku(debug_ebreaku),
  .trigger_match(trigger_match),

  // signals relating to instruction movements between pipeline stages
  // used by performance counters and RVFI
  .instr_id_done(instr_id_done),
  .instr_done_wb(instr_done_wb),

  .perf_instr_ret_wb(perf_instr_ret_wb),
  .perf_instr_ret_compressed_wb(perf_instr_ret_compressed_wb),
  .perf_instr_ret_wb_spec(perf_instr_ret_wb_spec),
  .perf_instr_ret_compressed_wb_spec(perf_instr_ret_compressed_wb_spec),
  .perf_iside_wait(perf_iside_wait),
  .perf_dside_wait(perf_dside_wait),
  .perf_mul_wait(perf_mul_wait),
  .perf_div_wait(perf_div_wait),
  .perf_jump(perf_jump),
  .perf_branch(perf_branch),
  .perf_tbranch(perf_tbranch),
  .perf_load(perf_load),
  .perf_store(perf_store),

  // for RVFI
  .illegal_insn_id(illegal_insn_id),
  .unused_illegal_insn_id(unused_illegal_insn_id),
  .ic_scr_key_valid_i(ic_scr_key_valid_i)
);

endmodule

