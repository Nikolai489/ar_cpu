// Copyright lowRISC contributors.
// Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

/**
 * Execution stage
 *
 * Execution block: Hosts ALU and MUL/DIV unit
 */
`include "ibex_ex_block_body.sv"
module ibex_ex_block #(
  parameter ibex_pkg::rv32m_e RV32M           = ibex_pkg::RV32MFast,
  parameter ibex_pkg::rv32b_e RV32B           = ibex_pkg::RV32BNone,
  parameter bit               BranchTargetALU = 0
) (
  input  logic                  clk_i,
  input  logic                  rst_ni,

  // ALU
  input  ibex_pkg::alu_op_e     alu_operator_i,
  input  logic [31:0]           alu_operand_a_i,
  input  logic [31:0]           alu_operand_b_i,
  input  logic                  alu_instr_first_cycle_i,

  // Branch Target ALU
  // All of these signals are unusued when BranchTargetALU == 0
  input  logic [31:0]           bt_a_operand_i,
  input  logic [31:0]           bt_b_operand_i,

  // Multiplier/Divider
  input  ibex_pkg::md_op_e      multdiv_operator_i,
  input  logic                  mult_en_i,             // dynamic enable signal, for FSM control
  input  logic                  div_en_i,              // dynamic enable signal, for FSM control
  input  logic                  mult_sel_i,            // static decoder output, for data muxes
  input  logic                  div_sel_i,             // static decoder output, for data muxes
  input  logic  [1:0]           multdiv_signed_mode_i,
  input  logic [31:0]           multdiv_operand_a_i,
  input  logic [31:0]           multdiv_operand_b_i,
  input  logic                  multdiv_ready_id_i,
  input  logic                  data_ind_timing_i,

  // intermediate val reg
  output logic [1:0]            imd_val_we_o,
  output logic [33:0]           imd_val_d_o[2],
  input  logic [33:0]           imd_val_q_i[2],

  // Outputs
  output logic [31:0]           alu_adder_result_ex_o, // to LSU
  output logic [31:0]           result_ex_o,
  output logic [31:0]           branch_target_o,       // to IF
  output logic                  branch_decision_o,     // to ID

  output logic                  ex_valid_o             // EX has valid output
);

  import ibex_pkg::*;

ibex_ex_block_body #(
  .RV32M(RV32M),
  .RV32B(RV32B),
  .BranchTargetALU(BranchTargetALU)
)
ex_block_body (
  .clk_i(clk_i),
  .rst_ni(rst_ni),

  // ALU
  .alu_operator_i(alu_operator_i),
  .alu_operand_a_i(alu_operand_a_i),
  .alu_operand_b_i(alu_operand_b_i),
  .alu_instr_first_cycle_i(alu_instr_first_cycle_i),

  // Branch Target ALU
  // All of these signals are unusued when BranchTargetALU == 0
  .bt_a_operand_i(bt_a_operand_i),
  .bt_b_operand_i(bt_b_operand_i),

  // Multiplier/Divider
  .multdiv_operator_i(multdiv_operator_i),
  .mult_en_i(mult_en_i),             // dynamic enable signal, for FSM control
  .div_en_i(div_en_i),              // dynamic enable signal, for FSM control
  .mult_sel_i(mult_sel_i),            // static decoder output, for data muxes
  .div_sel_i(div_sel_i),             // static decoder output, for data muxes
  .multdiv_signed_mode_i(multdiv_signed_mode_i),
  .multdiv_operand_a_i(multdiv_operand_a_i),
  .multdiv_operand_b_i(multdiv_operand_b_i),
  .multdiv_ready_id_i(multdiv_ready_id_i),
  .data_ind_timing_i(data_ind_timing_i),

  // intermediate val reg
  .imd_val_we_o(imd_val_we_o),
  .imd_val_d_o(imd_val_d_o),
  .imd_val_q_i(imd_val_q_i),

  // Outputs
  .alu_adder_result_ex_o(alu_adder_result_ex_o), // to LSU
  .result_ex_o(result_ex_o),
  .branch_target_o(branch_target_o),       // to IF
  .branch_decision_o(branch_decision_o),     // to ID

  .ex_valid_o(ex_valid_o)             // EX has valid output
);
endmodule
