`include "dr32e_pkg.sv"
import dr32e_pkg::*;

//run_sv2v

module dr32e_branch_predict_stimulus (
  output  logic clk_i,
  output  logic rst_ni,

  // Instruction from fetch stage
  output  logic [31:0] fetch_rdata_i,
  output  logic [31:0] fetch_pc_i,
  output  logic        fetch_valid_i,

);

 
endmodule
