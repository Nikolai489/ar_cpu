// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

/**
 * Instruction cache
 *
 * Provides an instruction cache along with cache management, instruction buffering and prefetching
 */

`include "prim_assert.sv"
`include "ibex_icache.sv"
module ibex_icache import ibex_pkg::*; #(
  parameter bit          ICacheECC       = 1'b0,
  parameter bit          ResetAll        = 1'b0,
  parameter int unsigned BusSizeECC      = BUS_SIZE,
  parameter int unsigned TagSizeECC      = IC_TAG_SIZE,
  parameter int unsigned LineSizeECC     = IC_LINE_SIZE,
  // Only cache branch targets
  parameter bit          BranchCache     = 1'b0
) (
  // Clock and reset
  input  logic                           clk_i,
  input  logic                           rst_ni,

  // Signal that the core would like instructions
  input  logic                           req_i,

  // Set the cache's address counter
  input  logic                           branch_i,
  input  logic [31:0]                    addr_i,

  // IF stage interface: Pass fetched instructions to the core
  input  logic                           ready_i,
  output logic                           valid_o,
  output logic [31:0]                    rdata_o,
  output logic [31:0]                    addr_o,
  output logic                           err_o,
  output logic                           err_plus2_o,

  // Instruction memory / interconnect interface: Fetch instruction data from memory
  output logic                           instr_req_o,
  input  logic                           instr_gnt_i,
  output logic [31:0]                    instr_addr_o,
  input  logic [BUS_SIZE-1:0]            instr_rdata_i,
  input  logic                           instr_err_i,
  input  logic                           instr_rvalid_i,

  // RAM IO
  output logic [IC_NUM_WAYS-1:0]         ic_tag_req_o,
  output logic                           ic_tag_write_o,
  output logic [IC_INDEX_W-1:0]          ic_tag_addr_o,
  output logic [TagSizeECC-1:0]          ic_tag_wdata_o,
  input  logic [TagSizeECC-1:0]          ic_tag_rdata_i [IC_NUM_WAYS],
  output logic [IC_NUM_WAYS-1:0]         ic_data_req_o,
  output logic                           ic_data_write_o,
  output logic [IC_INDEX_W-1:0]          ic_data_addr_o,
  output logic [LineSizeECC-1:0]         ic_data_wdata_o,
  input  logic [LineSizeECC-1:0]         ic_data_rdata_i [IC_NUM_WAYS],
  input  logic                           ic_scr_key_valid_i,
  output logic                           ic_scr_key_req_o,

  // Cache status
  input  logic                           icache_enable_i,
  input  logic                           icache_inval_i,
  output logic                           busy_o,
  output logic                           ecc_error_o
);

ibex_icache_body #(
  .ICacheECC(ICacheECC)       
  .ResetAll(ResetAll)        
  .BusSizeECC(BusSizeECC)     
  .TagSizeECC(TagSizeECC)     
  .LineSizeECC(LineSizeECC)     
  // Only cache branch targets
  .BranchCache(BranchCache)     
)
icache_body (
  .clk_i(clk_i),
  .rst_ni(rst_ni),

  // Signal that the core would like instructions
  .req_i(req_i),

  // Set the cache's address counter
  .branch_i(branch_i),
  .addr_i(addr_i),

  // IF stage interface: Pass fetched instructions to the core
  .ready_i(ready_i),
  .valid_o(valid_o),
  .rdata_o(rdata_o),
  .addr_o(addr_o),
  .err_o(err_o),
  .err_plus2_o(err_plus2_o),

  // Instruction memory / interconnect interface: Fetch instruction data from memory
  .instr_req_o(instr_req_o),
  .instr_gnt_i(instr_gnt_i),
  .instr_addr_o(instr_addr_o),
  .instr_rdata_i(instr_rdata_i),
  .instr_err_i(instr_err_i),
  .instr_rvalid_i(instr_rvalid_i),

  // RAM IO
  .ic_tag_req_o(ic_tag_req_o),
  .ic_tag_write_o(ic_tag_write_o),
  .ic_tag_addr_o(ic_tag_addr_o),
  .ic_tag_wdata_o(ic_tag_wdata_o),
  .ic_tag_rdata_i(ic_tag_rdata_i),
  .ic_data_req_o(ic_data_req_o),
  .ic_data_write_o(ic_data_write_o),
  .ic_data_addr_o(ic_data_addr_o),
  .ic_data_wdata_o(ic_data_wdata_o),
  .ic_data_rdata_i(ic_data_rdata_i),
  .ic_scr_key_valid_i(ic_scr_key_valid_i),
  .ic_scr_key_req_o(ic_scr_key_req_o),

  // Cache status
  .icache_enable_i(icache_enable_i),
  .icache_inval_i(icache_inval_i),
  .busy_o(busy_o),
  .ecc_error_o(ecc_error_o)
)
endmodule
