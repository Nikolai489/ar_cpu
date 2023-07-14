`include "dr32e_pkg.sv"
import dr32e_pkg::*;

//run_sv2v

module dr32e_branch_predict (
  input  logic clk_i,
  input  logic rst_ni,

  // Instruction from fetch stage
  input  logic [31:0] fetch_rdata_i,
  input  logic [31:0] fetch_pc_i,
  input  logic        fetch_valid_i,

  // Prediction for supplied instruction
  input logic        predict_branch_taken_o,
  input logic [31:0] predict_branch_pc_o
);
  
 
endmodule
