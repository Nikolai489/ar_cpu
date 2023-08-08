// Copyright lowRISC contributors.
// Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

/**
 * RISC-V register file
 *
 * Register file with 31 or 15x 32 bit wide registers. Register 0 is fixed to 0.
 * This register file is based on flip flops. Use this register file when
 * targeting FPGA synthesis or Verilator simulation.
 */
`include "ibex_register_file_ff_body.sv"
module ibex_register_file_ff #(
  parameter bit                   RV32E             = 0,
  parameter int unsigned          DataWidth         = 32,
  parameter bit                   DummyInstructions = 0,
  parameter bit                   WrenCheck         = 0,
  parameter logic [DataWidth-1:0] WordZeroVal       = '0
) (
  // Clock and Reset
  input  logic                 clk_i,
  input  logic                 rst_ni,

  input  logic                 test_en_i,
  input  logic                 dummy_instr_id_i,
  input  logic                 dummy_instr_wb_i,

  //Read port R1
  input  logic [4:0]           raddr_a_i,
  output logic [DataWidth-1:0] rdata_a_o,

  //Read port R2
  input  logic [4:0]           raddr_b_i,
  output logic [DataWidth-1:0] rdata_b_o,


  // Write port W1
  input  logic [4:0]           waddr_a_i,
  input  logic [DataWidth-1:0] wdata_a_i,
  input  logic                 we_a_i,

  // This indicates whether spurious WE are detected.
  output logic                 err_o
);

ibex_register_file_ff_body #(
.RV32E(RV32E),          
.DataWidth(DataWidth),      
.DummyInstructions(DummyInstructions), 
.WrenCheck(WrenCheck),         
.WordZeroVal(WordZeroVal)     
)
register_file_ff_body(
.clk_i(clk_i),
.rst_ni(rst_ni),

.test_en_i(test_en_i),
.dummy_instr_id_i(dummy_instr_id_i),
.dummy_instr_wb_i(dummy_instr_wb_i),

  //Read port R1
.raddr_a_i(raddr_a_i),
.rdata_a_o(rdata_a_o),

  //Read port R2
.raddr_b_i(raddr_b_i),
.rdata_b_o(rdata_b_o),


  // Write port W1
.waddr_a_i(waddr_a_i),
.wdata_a_i(wdata_a_i),
.we_a_i(we_a_i),

  // This indicates whether spurious WE are detected.
.err_o(err_o)
);
endmodule
