//run_sv2v

`include "dr32e_pkg.sv"
import dr32e_pkg::*;

module dr32e_dec_monitor #(
  parameter bit RV32E               = 0,
  parameter dr32e_pkg::rv32m_e RV32M = dr32e_pkg::RV32MFast,
  parameter dr32e_pkg::rv32b_e RV32B = dr32e_pkg::RV32BNone,
  parameter bit BranchTargetALU     = 0
) (
  input  logic                 clk_i,
  input  logic                 rst_ni,

  // to/from controller
  input logic                 illegal_insn_o,        // illegal instr encountered
  input logic                 ebrk_insn_o,           // trap instr encountered
  input logic                 mret_insn_o,           // return from exception instr
                                                      // encountered
  input logic                 dret_insn_o,           // return from debug instr encountered
  input logic                 ecall_insn_o,          // syscall instr encountered
  input logic                 wfi_insn_o,            // wait for interrupt instr encountered
  input logic                 jump_set_o,            // jump taken set signal
  input  logic                 branch_taken_i,        // registered branch decision
  input logic                 icache_inval_o,

  // from IF-ID pipeline register
  input  logic                 instr_first_cycle_i,   // instruction read is in its first cycle
  input  logic [31:0]          instr_rdata_i,         // instruction read from memory/cache
  input  logic [31:0]          instr_rdata_alu_i,     // instruction read from memory/cache
                                                      // replicated to ease fan-out)

  input  logic                 illegal_c_insn_i,      // compressed instruction decode failed

  // immediates
  input dr32e_pkg::imm_a_sel_e  imm_a_mux_sel_o,       // immediate selection for operand a
  input dr32e_pkg::imm_b_sel_e  imm_b_mux_sel_o,       // immediate selection for operand b
  input dr32e_pkg::op_a_sel_e   bt_a_mux_sel_o,        // branch target selection operand a
  input dr32e_pkg::imm_b_sel_e  bt_b_mux_sel_o,        // branch target selection operand b
  input logic [31:0]           imm_i_type_o,
  input logic [31:0]           imm_s_type_o,
  input logic [31:0]           imm_b_type_o,
  input logic [31:0]           imm_u_type_o,
  input logic [31:0]           imm_j_type_o,
  input logic [31:0]           zimm_rs1_type_o,

  // register file
  input dr32e_pkg::rf_wd_sel_e rf_wdata_sel_o,   // RF write data selection
  input logic                 rf_we_o,          // write enable for regfile
  input logic [4:0]           rf_raddr_a_o,
  input logic [4:0]           rf_raddr_b_o,
  input logic [4:0]           rf_waddr_o,
  input logic                 rf_ren_a_o,          // Instruction reads from RF addr A
  input logic                 rf_ren_b_o,          // Instruction reads from RF addr B

  // ALU
  input dr32e_pkg::alu_op_e    alu_operator_o,        // ALU operation selection
  input dr32e_pkg::op_a_sel_e  alu_op_a_mux_sel_o,    // operand a selection: reg value, PC,
                                                      // immediate or zero
  input dr32e_pkg::op_b_sel_e  alu_op_b_mux_sel_o,    // operand b selection: reg value or
                                                      // immediate
  input logic                 alu_multicycle_o,      // ternary bitmanip instruction

  // MULT & DIV
  input logic                 mult_en_o,             // perform integer multiplication
  input logic                 div_en_o,              // perform integer division or remainder
  input logic                 mult_sel_o,            // as above but static, for data muxes
  input logic                 div_sel_o,             // as above but static, for data muxes

  input dr32e_pkg::md_op_e     multdiv_operator_o,
  input logic [1:0]           multdiv_signed_mode_o,

  // CSRs
  input logic                 csr_access_o,          // access to CSR
  input dr32e_pkg::csr_op_e    csr_op_o,              // operation to perform on CSR

  // LSU
  input logic                 data_req_o,            // start transaction to data memory
  input logic                 data_we_o,             // write enable
  input logic [1:0]           data_type_o,           // size of transaction: byte, half
                                                      // word or word
  input logic                 data_sign_extension_o, // sign extension for data read from
                                                      // memory

  // jump/branches
  input logic                 jump_in_dec_o,         // jump is being calculated in ALU
  input logic                 branch_in_dec_o
);


 
endmodule
