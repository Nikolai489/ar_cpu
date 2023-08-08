// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

/**
 * Writeback Stage
 *
 * Writeback is an optional third pipeline stage. It writes data back to the register file that was
 * produced in the ID/EX stage or awaits a response to a load/store (LSU writes direct to register
 * file for load data). If the writeback stage is not present (WritebackStage == 0) this acts as
 * a simple passthrough to write data direct to the register file.
 */

`include "prim_assert.sv"
`include "dv_fcov_macros.svh"
`include "ibex_wb_stage_body.sv"
module ibex_wb_stage #(
  parameter bit ResetAll          = 1'b0,
  parameter bit WritebackStage    = 1'b0,
  parameter bit DummyInstructions = 1'b0
) (
  input  logic                     clk_i,
  input  logic                     rst_ni,

  input  logic                     en_wb_i,
  input  ibex_pkg::wb_instr_type_e instr_type_wb_i,
  input  logic [31:0]              pc_id_i,
  input  logic                     instr_is_compressed_id_i,
  input  logic                     instr_perf_count_id_i,

  output logic                     ready_wb_o,
  output logic                     rf_write_wb_o,
  output logic                     outstanding_load_wb_o,
  output logic                     outstanding_store_wb_o,
  output logic [31:0]              pc_wb_o,
  output logic                     perf_instr_ret_wb_o,
  output logic                     perf_instr_ret_compressed_wb_o,
  output logic                     perf_instr_ret_wb_spec_o,
  output logic                     perf_instr_ret_compressed_wb_spec_o,

  input  logic [4:0]               rf_waddr_id_i,
  input  logic [31:0]              rf_wdata_id_i,
  input  logic                     rf_we_id_i,

  input  logic                     dummy_instr_id_i,

  input  logic [31:0]              rf_wdata_lsu_i,
  input  logic                     rf_we_lsu_i,

  output logic [31:0]              rf_wdata_fwd_wb_o,

  output logic [4:0]               rf_waddr_wb_o,
  output logic [31:0]              rf_wdata_wb_o,
  output logic                     rf_we_wb_o,

  output logic                     dummy_instr_wb_o,

  input logic                      lsu_resp_valid_i,
  input logic                      lsu_resp_err_i,

  output logic                     instr_done_wb_o
);

  import ibex_pkg::*;

ibex_wb_stage_body #(
  .ResetAll(ResetAll),
  .WritebackStage(WritebackStage),
  .DummyInstructions(DummyInstructions)
)
wb_stage_body(
.clk_i(clk_i),
.rst_ni(rst_ni),

.en_wb_i(en_wb_i),
.instr_type_wb_i(instr_type_wb_i),
.pc_id_i(pc_id_i),
.instr_is_compressed_id_i(instr_is_compressed_id_i),
.instr_perf_count_id_i(instr_perf_count_id_i),

.ready_wb_o(ready_wb_o),
.rf_write_wb_o(rf_write_wb_o),
.outstanding_load_wb_o(outstanding_load_wb_o),
.outstanding_store_wb_o(outstanding_store_wb_o),
.pc_wb_o(pc_wb_o),
.perf_instr_ret_wb_o(perf_instr_ret_wb_o),
.perf_instr_ret_compressed_wb_o(perf_instr_ret_compressed_wb_o),
.perf_instr_ret_wb_spec_o(perf_instr_ret_wb_spec_o),
.perf_instr_ret_compressed_wb_spec_o(perf_instr_ret_compressed_wb_spec_o),

.rf_waddr_id_i(rf_waddr_id_i),
.rf_wdata_id_i(rf_wdata_id_i),
.rf_we_id_i(rf_we_id_i),

.dummy_instr_id_i(dummy_instr_id_i),

.rf_wdata_lsu_i(rf_wdata_lsu_i),
.rf_we_lsu_i(rf_we_lsu_i),

.rf_wdata_fwd_wb_o(rf_wdata_fwd_wb_o),

.rf_waddr_wb_o(rf_waddr_wb_o),
.rf_wdata_wb_o(rf_wdata_wb_o),
.rf_we_wb_o(rf_we_wb_o),

.dummy_instr_wb_o(dummy_instr_wb_o),

.lsu_resp_valid_i(lsu_resp_valid_i),
.lsu_resp_err_i(lsu_resp_err_i),

.instr_done_wb_o(instr_done_wb_o)
);
endmodule
