// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

/**
 * Branch Predictor
 *
 * This implements static branch prediction. It takes an instruction and its PC and determines if
 * it's a branch or a jump and calculates its target. For jumps it will always predict taken. For
 * branches it will predict taken if the PC offset is negative.
 *
 * This handles both compressed and uncompressed instructions. Compressed instructions must be in
 * the lower 16-bits of instr.
 *
 * The predictor is entirely combinational but takes clk/rst_n signals for use by assertions.
 */

`include "prim_assert.sv"
`include "ibex_branch_predict_body.sv"
module ibex_branch_predict (
  input  logic clk_i,
  input  logic rst_ni,

  // Instruction from fetch stage
  input  logic [31:0] fetch_rdata_i,
  input  logic [31:0] fetch_pc_i,
  input  logic        fetch_valid_i,

  // Prediction for supplied instruction
  output logic        predict_branch_taken_o,
  output logic [31:0] predict_branch_pc_o
);
  import ibex_pkg::*;

ibex_branch_predict_body bp_body(
  .clk_i(clk_i),
  .rst_ni(rst_ni),
  .fetch_rdata_i(fetch_rdata_i),
  .fetch_pc_i(fetch_pc_i),
  .fetch_valid_i(fetch_valid_i),
  .predict_branch_taken_o(predict_branch_taken_o),
  .predict_branch_pc_o(predict_branch_pc_o)
);
endmodule
