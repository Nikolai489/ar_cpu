// Copyright lowRISC contributors.
// Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

/**
 * Fetch Fifo for 32 bit memory interface
 *
 * input port: send address and data to the FIFO
 * clear_i clears the FIFO for the following cycle, including any new request
 */

`include "prim_assert.sv"
`include "ibex_fetch_fifo_body.sv"
module ibex_fetch_fifo #(
  parameter int unsigned NUM_REQS = 2,
  parameter bit          ResetAll = 1'b0
) (
  input  logic                clk_i,
  input  logic                rst_ni,

  // control signals
  input  logic                clear_i,   // clears the contents of the FIFO
  output logic [NUM_REQS-1:0] busy_o,

  // input port
  input  logic                in_valid_i,
  input  logic [31:0]         in_addr_i,
  input  logic [31:0]         in_rdata_i,
  input  logic                in_err_i,

  // output port
  output logic                out_valid_o,
  input  logic                out_ready_i,
  output logic [31:0]         out_addr_o,
  output logic [31:0]         out_rdata_o,
  output logic                out_err_o,
  output logic                out_err_plus2_o
);

ibex_fetch_fifo_body #(
  .NUM_REQS(NUM_REQS),
  .ResetAll(ResetAll)
)
fetch_fifo_body(
  .clk_i(clk_i),
  .rst_ni(rst_ni),

  // control signals
  .clear_i(clear_i),   // clears the contents of the FIFO
  .busy_o(busy_o),

  // input port
  .in_valid_i(in_valid_i),
  .in_addr_i(in_addr_i),
  .in_rdata_i(in_rdata_i),
  .in_err_i(in_err_i),

  // output port
  .out_valid_o(out_valid_o),
  .out_ready_i(out_ready_i),
  .out_addr_o(out_addr_o),
  .out_rdata_o(out_rdata_o),
  .out_err_o(out_err_o),
  .out_err_plus2_o(out_err_plus2_o)
);
endmodule
