// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

/**
 * Control / status register primitive
 */

`include "prim_assert.sv"
`include "ibex_csr_body.sv"
module ibex_csr #(
  parameter int unsigned    Width      = 32,
  parameter bit             ShadowCopy = 1'b0,
  parameter bit [Width-1:0] ResetValue = '0
 ) (
  input  logic             clk_i,
  input  logic             rst_ni,

  input  logic [Width-1:0] wr_data_i,
  input  logic             wr_en_i,
  output logic [Width-1:0] rd_data_o,

  output logic             rd_error_o
);

ibex_csr_body #(
  .Width(Width),
  .ShadowCopy(ShadowCopy),
  .ResetValue(ResetValue)
)
csr_body (
  .clk_i(clk_i),
  .rst_ni(rst_ni),

  .wr_data_i(wr_data_i),
  .wr_en_i(wr_en_i),
  .rd_data_o(rd_data_o),

  .rd_error_o(rd_error_o)
)
endmodule
