// Copyright lowRISC contributors.
// Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

`define OP_L 15:0
`define OP_H 31:16

/**
 * Fast Multiplier and Division
 *
 * 16x16 kernel multiplier and Long Division
 */

`include "prim_assert.sv"
`include "ibex_multdiv_fast_body.sv"
module ibex_multdiv_fast #(
  parameter ibex_pkg::rv32m_e RV32M = ibex_pkg::RV32MFast
  ) (
  input  logic             clk_i,
  input  logic             rst_ni,
  input  logic             mult_en_i,  // dynamic enable signal, for FSM control
  input  logic             div_en_i,   // dynamic enable signal, for FSM control
  input  logic             mult_sel_i, // static decoder output, for data muxes
  input  logic             div_sel_i,  // static decoder output, for data muxes
  input  ibex_pkg::md_op_e operator_i,
  input  logic  [1:0]      signed_mode_i,
  input  logic [31:0]      op_a_i,
  input  logic [31:0]      op_b_i,
  input  logic [33:0]      alu_adder_ext_i,
  input  logic [31:0]      alu_adder_i,
  input  logic             equal_to_zero_i,
  input  logic             data_ind_timing_i,

  output logic [32:0]      alu_operand_a_o,
  output logic [32:0]      alu_operand_b_o,

  input  logic [33:0]      imd_val_q_i[2],
  output logic [33:0]      imd_val_d_o[2],
  output logic [1:0]       imd_val_we_o,

  input  logic             multdiv_ready_id_i,

  output logic [31:0]      multdiv_result_o,
  output logic             valid_o
);

  import ibex_pkg::*;

ibex_multdiv_fast_body #(
  .RV32M(RV32M)
)
multdiv_fast_body(
.clk_i(clk_i),
.rst_ni(rst_ni),
.mult_en_i(mult_en_i),  
.div_en_i(div_en_i),   
.mult_sel_i(mult_sel_i), 
.div_sel_i(div_sel_i),
.operator_i(operator_i),
.signed_mode_i(signed_mode_i),
.op_a_i(op_a_i),
.op_b_i(op_b_i),
.alu_adder_ext_i(alu_adder_ext_i),
.alu_adder_i(alu_adder_i),
.equal_to_zero_i(equal_to_zero_i),
.data_ind_timing_i(data_ind_timing_i),

.alu_operand_a_o(alu_operand_a_o),
.alu_operand_b_o(alu_operand_b_o),

.imd_val_q_i(imd_val_q_i),
.imd_val_d_o(imd_val_d_o),
.imd_val_we_o(imd_val_we_o),

.multdiv_ready_id_i(multdiv_ready_id_i),

.multdiv_result_o(multdiv_result_o),
.valid_o(valid_o)
);
endmodule // ibex_mult
