//run_sv2v

`include "ibex_fetch_fifo.v"


 module ibex_prefetch_buffer #(
    parameter bit ResetAll        = 1'b0
  ) (
    output  logic        clk_i,
    output  logic        rst_ni,
  
    output  logic        req_i,
  
    output  logic        branch_i,
    output  logic [31:0] addr_i,
  
    output  logic        ready_i,
  
    // goes to instruction memory / instruction cache
    output  logic        instr_gnt_i,
    output  logic [31:0] instr_rdata_i,
    output  logic        instr_err_i,
    output  logic        instr_rvalid_i,
  
  );
  
endmodule
