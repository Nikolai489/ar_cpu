`include "prim_assert.sv"
/* verilator lint_off MODDUP */
module ibex_top_rf_inst import ibex_pkg::*; #(
    parameter bit          SecureIbex       = 1'b0,
    parameter bit          RV32E            = 1'b0,
    parameter bit          DummyInstructions = SecureIbex,
    parameter bit          RegFileECC        = SecureIbex,
    parameter regfile_e    RegFile          = RegFileFF,
    parameter bit          RegFileWrenCheck  = SecureIbex,
    parameter int unsigned RegFileDataWidth  = RegFileECC ? 32 + 7 : 32
)(
    input logic clk,
    input logic rst_ni,

    input logic test_en_i,
    input logic dummy_instr_id,
    input logic dummy_instr_wb,

    input logic [4:0]rf_raddr_a,
    output logic [RegFileDataWidth - 1 : 0]rf_rdata_a_ecc,
    input logic [4:0]rf_raddr_b,
    output logic [RegFileDataWidth - 1 : 0]rf_rdata_b_ecc,
    input logic [4:0]rf_waddr_wb,
    input logic [RegFileDataWidth - 1 : 0]rf_wdata_wb_ecc,
    input logic rf_we_wb,
    output logic rf_alert_major_internal
);

/* verilator lint_on MODDUP */
  /////////////////////////////////
  // Register file Instantiation //
  /////////////////////////////////

    if (RegFile == RegFileFF) begin : gen_regfile_ff
    ibex_register_file_ff #(
        .RV32E            (RV32E),
        .DataWidth        (RegFileDataWidth),
        .DummyInstructions(DummyInstructions),
        // SEC_CM: DATA_REG_SW.GLITCH_DETECT
        .WrenCheck        (RegFileWrenCheck),
        .WordZeroVal      (RegFileDataWidth'(prim_secded_pkg::SecdedInv3932ZeroWord))
    ) register_file_i (
        .clk_i (clk),
        .rst_ni(rst_ni),

        .test_en_i       (test_en_i),
        .dummy_instr_id_i(dummy_instr_id),
        .dummy_instr_wb_i(dummy_instr_wb),

        .raddr_a_i(rf_raddr_a),
        .rdata_a_o(rf_rdata_a_ecc),
        .raddr_b_i(rf_raddr_b),
        .rdata_b_o(rf_rdata_b_ecc),
        .waddr_a_i(rf_waddr_wb),
        .wdata_a_i(rf_wdata_wb_ecc),
        .we_a_i   (rf_we_wb),
        .err_o    (rf_alert_major_internal)
    );
    end else if (RegFile == RegFileFPGA) begin : gen_regfile_fpga
    ibex_register_file_fpga #(
        .RV32E            (RV32E),
        .DataWidth        (RegFileDataWidth),
        .DummyInstructions(DummyInstructions),
        // SEC_CM: DATA_REG_SW.GLITCH_DETECT
        .WrenCheck        (RegFileWrenCheck),
        .WordZeroVal      (RegFileDataWidth'(prim_secded_pkg::SecdedInv3932ZeroWord))
    ) register_file_i (
        .clk_i (clk),
        .rst_ni(rst_ni),

        .test_en_i       (test_en_i),
        .dummy_instr_id_i(dummy_instr_id),
        .dummy_instr_wb_i(dummy_instr_wb),

        .raddr_a_i(rf_raddr_a),
        .rdata_a_o(rf_rdata_a_ecc),
        .raddr_b_i(rf_raddr_b),
        .rdata_b_o(rf_rdata_b_ecc),
        .waddr_a_i(rf_waddr_wb),
        .wdata_a_i(rf_wdata_wb_ecc),
        .we_a_i   (rf_we_wb),
        .err_o    (rf_alert_major_internal)
    );
    end else if (RegFile == RegFileLatch) begin : gen_regfile_latch
    ibex_register_file_latch #(
        .RV32E            (RV32E),
        .DataWidth        (RegFileDataWidth),
        .DummyInstructions(DummyInstructions),
        // SEC_CM: DATA_REG_SW.GLITCH_DETECT
        .WrenCheck        (RegFileWrenCheck),
        .WordZeroVal      (RegFileDataWidth'(prim_secded_pkg::SecdedInv3932ZeroWord))
    ) register_file_i (
        .clk_i (clk),
        .rst_ni(rst_ni),

        .test_en_i       (test_en_i),
        .dummy_instr_id_i(dummy_instr_id),
        .dummy_instr_wb_i(dummy_instr_wb),

        .raddr_a_i(rf_raddr_a),
        .rdata_a_o(rf_rdata_a_ecc),
        .raddr_b_i(rf_raddr_b),
        .rdata_b_o(rf_rdata_b_ecc),
        .waddr_a_i(rf_waddr_wb),
        .wdata_a_i(rf_wdata_wb_ecc),
        .we_a_i   (rf_we_wb),
        .err_o    (rf_alert_major_internal)
    );
    end

endmodule
