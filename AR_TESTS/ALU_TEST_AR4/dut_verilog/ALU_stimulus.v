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

module cve2_alu_stimulus #(
  parameter cve2_pkg::rv32b_e RV32B = cve2_pkg::RV32BNone
) (
  output  cve2_pkg::alu_op_e operator_i,
  output                     clk_i,
  output  logic [31:0]       operand_a_i,
  output  logic [31:0]       operand_b_i,

  output  logic              instr_first_cycle_i,

  output  logic [32:0]       multdiv_operand_a_i,
  output  logic [32:0]       multdiv_operand_b_i,

  output  logic              multdiv_sel_i,

  output  logic [31:0]       imd_val_q_i[2]
  
);

 
endmodule
