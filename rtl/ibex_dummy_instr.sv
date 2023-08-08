// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

/**
 * Dummy instruction module
 *
 * Provides pseudo-randomly inserted fake instructions for secure code obfuscation
 */
`include "ibex_dummy_instr_body.sv"
// SEC_CM: CTRL_FLOW.UNPREDICTABLE
module ibex_dummy_instr import ibex_pkg::*; #(
    parameter lfsr_seed_t RndCnstLfsrSeed = RndCnstLfsrSeedDefault,
    parameter lfsr_perm_t RndCnstLfsrPerm = RndCnstLfsrPermDefault
) (
  // Clock and reset
  input  logic        clk_i,
  input  logic        rst_ni,

  // Interface to CSRs
  input  logic        dummy_instr_en_i,
  input  logic [2:0]  dummy_instr_mask_i,
  input  logic        dummy_instr_seed_en_i,
  input  logic [31:0] dummy_instr_seed_i,

  // Interface to IF stage
  input  logic        fetch_valid_i,
  input  logic        id_in_ready_i,
  output logic        insert_dummy_instr_o,
  output logic [31:0] dummy_instr_data_o
);

ibex_dummy_instr_body #(
  .RndCnstLfsrSeed(RndCnstLfsrSeed),
  .RndCnstLfsrPerm(RndCnstLfsrPerm)
)
dummy_instr_body(
  .clk_i(clk_i),
  .rst_ni(rst_ni),

  // Interface to CSRs
  .dummy_instr_en_i(dummy_instr_en_i),
  .dummy_instr_mask_i(dummy_instr_mask_i),
  .dummy_instr_seed_en_i(dummy_instr_seed_en_i),
  .dummy_instr_seed_i(dummy_instr_seed_i),

  // Interface to IF stage
  .fetch_valid_i(fetch_valid_i),
  .id_in_ready_i(id_in_ready_i),
  .insert_dummy_instr_o(insert_dummy_instr_o),
  .dummy_instr_data_o(dummy_instr_data_o)
);
endmodule
