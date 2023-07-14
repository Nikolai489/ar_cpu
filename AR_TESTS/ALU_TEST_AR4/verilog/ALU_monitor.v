// Copyright lowRISC contributors.
// Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

/**
 * Arithmetic logic unit
 */


 `include "cve2_pkg.sv"
import cve2_pkg::*;

//run_sv2v
module cve2_alu_monitor #(
  parameter cve2_pkg::rv32b_e RV32B = cve2_pkg::RV32BNone
) (
  input  cve2_pkg::alu_op_e operator_i,
  input                     clk_i,
  input  logic [31:0]       operand_a_i,
  input  logic [31:0]       operand_b_i,

  input  logic              instr_first_cycle_i,

  input  logic [32:0]       multdiv_operand_a_i,
  input  logic [32:0]       multdiv_operand_b_i,

  input  logic              multdiv_sel_i,

  input  logic [31:0]       imd_val_q_i[2],

  input logic [31:0]       imd_val_d_o[2],
  input logic [1:0]        imd_val_we_o,

  input logic [31:0]       adder_result_o,
  input logic [33:0]       adder_result_ext_o,

  input logic [31:0]       result_o,
  input logic              comparison_result_o,
  input logic              is_equal_result_o
);

 
endmodule
