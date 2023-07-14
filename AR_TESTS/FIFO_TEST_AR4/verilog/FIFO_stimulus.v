//run_sv2v
`include "rtl/prim_assert.sv"

 module ibex_fetch_fifo_stimulus #(
   parameter int unsigned NUM_REQS = 2,
   parameter bit          ResetAll = 1'b0
 ) (
   output  logic                clk_i,
   output  logic                rst_ni,
 
   // control signals
   output  logic                clear_i,   // clears the contents of the FIFO
 
   // output port
   output  logic                in_valid_i,
   output  logic [31:0]         in_addr_i,
   output  logic [31:0]         in_rdata_i,
   output  logic                in_err_i,
   output  logic                out_ready_i,

 );
  
endmodule
