
//run_sv2v

`include "ibex_pkg.sv"
import ibex_pkg::*;

module ibex_compressed_decoder (
  input  logic        clk_i,
  input  logic        rst_ni,
  input  logic        valid_i,
  input  logic [31:0] instr_i,
  input  logic [15:0] enum_dpi,
  input logic [31:0] instr_o,
  input logic        is_compressed_o,
  input logic        illegal_instr_o
);
 
endmodule
