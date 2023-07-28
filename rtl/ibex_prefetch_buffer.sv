// Copyright lowRISC contributors.
// Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

/**
 * Prefetcher Buffer for 32 bit memory interface
 *
 * Prefetch Buffer that caches instructions. This cuts overly long critical
 * paths to the instruction cache.
 */
`include "ibex_prefetch_buffer_body.sv"
module ibex_prefetch_buffer #(
  parameter bit ResetAll        = 1'b0
) (
  input  logic        clk_i,
  input  logic        rst_ni,

  input  logic        req_i,

  input  logic        branch_i,
  input  logic [31:0] addr_i,

  input  logic        ready_i,
  output logic        valid_o,
  output logic [31:0] rdata_o,
  output logic [31:0] addr_o,
  output logic        err_o,
  output logic        err_plus2_o,

  // goes to instruction memory / instruction cache
  output logic        instr_req_o,
  input  logic        instr_gnt_i,
  output logic [31:0] instr_addr_o,
  input  logic [31:0] instr_rdata_i,
  input  logic        instr_err_i,
  input  logic        instr_rvalid_i,

  // Prefetch Buffer Status
  output logic        busy_o
);

ibex_prefetch_buffer_body #(
  .ResetAll(ResetAll)
)
prefetch_buffer_body(
.clk_i(clk_i),
.rst_ni(rst_ni),

.req_i(req_i),

.branch_i(branch_i),
.addr_i(addr_i),

.ready_i(ready_i),
.valid_o(valid_o),
.rdata_o(rdata_o),
.addr_o(addr_o),
.err_o(err_o),
.err_plus2_o(err_plus2_o),

  // goes to instruction memory / instruction cache
.instr_req_o(instr_req_o),
.instr_gnt_i(instr_gnt_i),
.instr_addr_o(instr_addr_o),
.instr_rdata_i(instr_rdata_i),
.instr_err_i(instr_err_i),
.instr_rvalid_i(instr_rvalid_i),

  // Prefetch Buffer Status
.busy_o(busy_o)
);
endmodule
