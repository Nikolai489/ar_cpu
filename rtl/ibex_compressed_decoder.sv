// Copyright lowRISC contributors.
// Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

/**
 * Compressed instruction decoder
 *
 * Decodes RISC-V compressed instructions into their RV32 equivalent.
 * This module is fully combinatorial, clock and reset are used for
 * assertions only.
 */

`include "prim_assert.sv"

module ibex_compressed_decoder (
  input  logic        clk_i,
  input  logic        rst_ni,
  input  logic        valid_i,
  input  logic [31:0] instr_i,
  output logic [31:0] instr_o,
  output logic        is_compressed_o,
  output logic        illegal_instr_o
);
  import ibex_pkg::*;

ibex_compressed_decoder_body cd_body(
  .clk_i(clk_i),
  .rst_ni(rst_ni),
  .valid_i(valid_i),
  .instr_i(instr_i),
  .instr_o(instr_o),
  .is_compressed_o(is_compressed_o),
  .illegal_instr_o(illegal_instr_o)
);

endmodule
