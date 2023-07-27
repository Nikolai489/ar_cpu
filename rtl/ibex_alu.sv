// Copyright lowRISC contributors.
// Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
`include "ibex_alu_body.sv"
/**
 * Arithmetic logic unit
 */
module ibex_alu #(
  parameter ibex_pkg::rv32b_e RV32B = ibex_pkg::RV32BNone
) (
  input  ibex_pkg::alu_op_e operator_i,
  input  logic [31:0]       operand_a_i,
  input  logic [31:0]       operand_b_i,

  input  logic              instr_first_cycle_i,

  input  logic [32:0]       multdiv_operand_a_i,
  input  logic [32:0]       multdiv_operand_b_i,

  input  logic              multdiv_sel_i,

  input  logic [31:0]       imd_val_q_i[2],
  output logic [31:0]       imd_val_d_o[2],
  output logic [1:0]        imd_val_we_o,

  output logic [31:0]       adder_result_o,
  output logic [33:0]       adder_result_ext_o,

  output logic [31:0]       result_o,
  output logic              comparison_result_o,
  output logic              is_equal_result_o
);
  import ibex_pkg::*;

ibex_alu_body #(
  .RV32B(RV32B)
)
alu_body(
  .operator_i(operator_i),
  .operand_a_i(operand_a_i),
  .operand_b_i(operand_b_i),
  .instr_first_cycle_i(instr_first_cycle_i),
  .multdiv_operand_a_i(multdiv_operand_a_i),
  .multdiv_operand_b_i(multdiv_operand_b_i),
  .multdiv_sel_i(multdiv_sel_i),
  .imd_val_q_i[2](imd_val_q_i[2]),
  .imd_val_d_o[2](imd_val_d_o[2]),
  .imd_val_we_o(imd_val_we_o),
  .adder_result_o(adder_result_o),
  .adder_result_ext_o(adder_result_ext_o),
  .result_o(result_o),
  .comparison_result_o(comparison_result_o),
  .is_equal_result_o(is_equal_result_o)
);
endmodule
