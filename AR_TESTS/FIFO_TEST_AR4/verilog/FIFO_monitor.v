//run_sv2v
`include "rtl/prim_assert.sv"

 module ibex_fetch_fifo_monitor #(
   parameter int unsigned NUM_REQS = 2,
   parameter bit          ResetAll = 1'b0
 ) (
   input  logic                clk_i,
   input  logic                rst_ni,
 
   // control signals
   input  logic                clear_i,   // clears the contents of the FIFO
   input logic [NUM_REQS-1:0] busy_o,
 
   // input port
   input  logic                in_valid_i,
   input  logic [31:0]         in_addr_i,
   input  logic [31:0]         in_rdata_i,
   input  logic                in_err_i,
 
   // input port
   input logic                out_valid_o,
   input  logic                out_ready_i,
   input logic [31:0]         out_addr_o,
   input logic [31:0]         out_rdata_o,
   input logic                out_err_o,
   input logic                out_err_plus2_o
 );
  
endmodule
