//run_sv2v

`include "dr32e_pkg.sv"
import dr32e_pkg::*;

module dr32e_dec #(
  parameter bit RV32E               = 0,
  parameter dr32e_pkg::rv32m_e RV32M = dr32e_pkg::RV32MFast,
  parameter dr32e_pkg::rv32b_e RV32B = dr32e_pkg::RV32BNone,
  parameter bit BranchTargetALU     = 0
) (
  output  logic                 clk_i,
  output  logic                 rst_ni,

  output  logic                 branch_taken_i,        // registered branch decision

  // from IF-ID pipeline register
  output  logic                 instr_first_cycle_i,   // instruction read is in its first cycle
  output  logic [31:0]          instr_rdata_i,         // instruction read from memory/cache
  output  logic [31:0]          instr_rdata_alu_i,     // instruction read from memory/cache
                                                      // replicated to ease fan-out)
  output  logic                 illegal_c_insn_i,      // compressed instruction decode failed

);


 
endmodule
