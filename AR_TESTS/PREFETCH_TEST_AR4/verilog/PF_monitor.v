//run_sv2v

`include "ibex_fetch_fifo.v"


 module ibex_prefetch_buffer #(
    parameter bit ResetAll        = 1'b0
  ) (
    input  logic        clk_i,
    input  logic        rst_ni,
  
    input  logic        req_i,
  
    input  logic        branch_i,
    input  logic [31:0] addr_i,
  
    input  logic        ready_i,
    input logic        valid_o,
    input logic [31:0] rdata_o,
    input logic [31:0] addr_o,
    input logic        err_o,
    input logic        err_plus2_o,
  
    // goes to instruction memory / instruction cache
    input logic        instr_req_o,
    input  logic        instr_gnt_i,
    input logic [31:0] instr_addr_o,
    input  logic [31:0] instr_rdata_i,
    input  logic        instr_err_i,
    input  logic        instr_rvalid_i,
  
    // Prefetch Buffer Status
    input logic        busy_o
  );
  
endmodule
