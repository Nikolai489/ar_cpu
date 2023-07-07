//      // verilator_coverage annotation
        // Copyright lowRISC contributors.
        // Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
        // Licensed under the Apache License, Version 2.0, see LICENSE for details.
        // SPDX-License-Identifier: Apache-2.0
        
        
        /**
         * Instruction decoder
         *
         * This module is fully combinatorial, clock and reset are used for
         * assertions only.
         */
        
         `include "dr32e_pkg.sv"
         //`include "prim_assert.sv"
        
        module dr32e_dec #(
          parameter bit RV32E               = 0,
          parameter dr32e_pkg::rv32m_e RV32M = dr32e_pkg::RV32MFast,
          parameter dr32e_pkg::rv32b_e RV32B = dr32e_pkg::RV32BNone,
          parameter bit BranchTargetALU     = 0
        ) (
 100001   input  logic                 clk_i,
%000000   input  logic                 rst_ni,
        
          // to/from controller
 000162   output logic                 illegal_insn_o,        // illegal instr encountered
 000172   output logic                 ebrk_insn_o,           // trap instr encountered
 000178   output logic                 mret_insn_o,           // return from exception instr
                                                              // encountered
 000144   output logic                 dret_insn_o,           // return from debug instr encountered
 000190   output logic                 ecall_insn_o,          // syscall instr encountered
 000155   output logic                 wfi_insn_o,            // wait for interrupt instr encountered
%000000   output logic                 jump_set_o,            // jump taken set signal
%000000   input  logic                 branch_taken_i,        // registered branch decision
%000000   output logic                 icache_inval_o,
        
          // from IF-ID pipeline register
%000000   input  logic                 instr_first_cycle_i,   // instruction read is in its first cycle
 000162   input  logic [31:0]          instr_rdata_i,         // instruction read from memory/cache
 000162   input  logic [31:0]          instr_rdata_alu_i,     // instruction read from memory/cache
                                                              // replicated to ease fan-out)
        
%000000   input  logic                 illegal_c_insn_i,      // compressed instruction decode failed
        
          // immediates
%000001   output dr32e_pkg::imm_a_sel_e  imm_a_mux_sel_o,       // immediate selection for operand a
 001222   output dr32e_pkg::imm_b_sel_e  imm_b_mux_sel_o,       // immediate selection for operand b
%000001   output dr32e_pkg::op_a_sel_e   bt_a_mux_sel_o,        // branch target selection operand a
%000000   output dr32e_pkg::imm_b_sel_e  bt_b_mux_sel_o,        // branch target selection operand b
 002450   output logic [31:0]           imm_i_type_o,
 000162   output logic [31:0]           imm_s_type_o,
 000162   output logic [31:0]           imm_b_type_o,
%000000   output logic [31:0]           imm_u_type_o,
 002450   output logic [31:0]           imm_j_type_o,
%000000   output logic [31:0]           zimm_rs1_type_o,
        
          // register file
%000000   output dr32e_pkg::rf_wd_sel_e rf_wdata_sel_o,   // RF write data selection
 002476   output logic                 rf_we_o,          // write enable for regfile
 002460   output logic [4:0]           rf_raddr_a_o,
 002450   output logic [4:0]           rf_raddr_b_o,
 000162   output logic [4:0]           rf_waddr_o,
 002406   output logic                 rf_ren_a_o,          // Instruction reads from RF addr A
 002450   output logic                 rf_ren_b_o,          // Instruction reads from RF addr B
        
          // ALU
%000000   output dr32e_pkg::alu_op_e    alu_operator_o,        // ALU operation selection
 001336   output dr32e_pkg::op_a_sel_e  alu_op_a_mux_sel_o,    // operand a selection: reg value, PC,
                                                              // immediate or zero
%000001   output dr32e_pkg::op_b_sel_e  alu_op_b_mux_sel_o,    // operand b selection: reg value or
                                                              // immediate
%000000   output logic                 alu_multicycle_o,      // ternary bitmanip instruction
        
          // MULT & DIV
%000000   output logic                 mult_en_o,             // perform integer multiplication
%000000   output logic                 div_en_o,              // perform integer division or remainder
%000000   output logic                 mult_sel_o,            // as above but static, for data muxes
%000000   output logic                 div_sel_o,             // as above but static, for data muxes
        
%000000   output dr32e_pkg::md_op_e     multdiv_operator_o,
%000000   output logic [1:0]           multdiv_signed_mode_o,
        
          // CSRs
%000000   output logic                 csr_access_o,          // access to CSR
%000000   output dr32e_pkg::csr_op_e    csr_op_o,              // operation to perform on CSR
        
          // LSU
 001306   output logic                 data_req_o,            // start transaction to data memory
 001306   output logic                 data_we_o,             // write enable
 000172   output logic [1:0]           data_type_o,           // size of transaction: byte, half
                                                              // word or word
%000000   output logic                 data_sign_extension_o, // sign extension for data read from
                                                              // memory
        
          // jump/branches
 001236   output logic                 jump_in_dec_o,         // jump is being calculated in ALU
 002080   output logic                 branch_in_dec_o
        );
        
          import dr32e_pkg::*;
        
 000162   logic        illegal_insn;
%000000   logic        illegal_reg_rv32e;
%000000   logic        csr_illegal;
 002476   logic        rf_we;
        
 000162   logic [31:0] instr;
 000162   logic [31:0] instr_alu;
 000162   logic [9:0]  unused_instr_alu;
          // Source/Destination register instruction index
 002460   logic [4:0] instr_rs1;
 002450   logic [4:0] instr_rs2;
%000000   logic [4:0] instr_rs3;
 000162   logic [4:0] instr_rd;
        
%000000   logic        use_rs3_d;
%000000   logic        use_rs3_q;
        
%000000   csr_op_e     csr_op;
        
%000001   opcode_e     opcode;
%000001   opcode_e     opcode_alu;
        
          // To help timing the flops containing the current instruction are replicated to reduce fan-out.
          // instr_alu is used to determine the ALU control logic and associated operand/imm select signals
          // as the ALU is often on the more critical timing paths. instr is used for everything else.
          assign instr     = instr_rdata_i;
          assign instr_alu = instr_rdata_alu_i;
        
          //////////////////////////////////////
          // Register and immediate selection //
          //////////////////////////////////////
        
          // immediate extraction and sign extension
          assign imm_i_type_o = { {20{instr[31]}}, instr[31:20] };
          assign imm_s_type_o = { {20{instr[31]}}, instr[31:25], instr[11:7] };
          assign imm_b_type_o = { {19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0 };
          assign imm_u_type_o = { instr[31:12], 12'b0 };
          assign imm_j_type_o = { {12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0 };
        
          // immediate for CSR manipulation (zero extended)
          assign zimm_rs1_type_o = { 27'b0, instr_rs1 }; // rs1
        
          if (RV32B != RV32BNone) begin : gen_rs3_flop
            // the use of rs3 is known one cycle ahead.
            always_ff  @(posedge clk_i or negedge rst_ni) begin
              if (!rst_ni) begin
                use_rs3_q <= 1'b0;
              end else begin
                use_rs3_q <= use_rs3_d;
              end
            end
          end else begin : gen_no_rs3_flop
            logic unused_clk;
            logic unused_rst_n;
        
            // Clock and reset unused when there's no rs3 flop
            assign unused_clk = clk_i;
            assign unused_rst_n = rst_ni;
        
            // always zero
            assign use_rs3_q = use_rs3_d;
          end
        
          // source registers
          assign instr_rs1 = instr[19:15];
          assign instr_rs2 = instr[24:20];
          assign instr_rs3 = instr[31:27];
          assign rf_raddr_a_o = (use_rs3_q & ~instr_first_cycle_i) ? instr_rs3 : instr_rs1; // rs3 / rs1
          assign rf_raddr_b_o = instr_rs2; // rs2
        
          // destination register
          assign instr_rd = instr[11:7];
          assign rf_waddr_o   = instr_rd; // rd
        
          ////////////////////
          // Register check //
          ////////////////////
          if (RV32E) begin : gen_rv32e_reg_check_active
            assign illegal_reg_rv32e = ((rf_raddr_a_o[4] & (alu_op_a_mux_sel_o == OP_A_REG_A)) |
                                        (rf_raddr_b_o[4] & (alu_op_b_mux_sel_o == OP_B_REG_B)) |
                                        (rf_waddr_o[4]   & rf_we));
          end else begin : gen_rv32e_reg_check_inactive
            assign illegal_reg_rv32e = 1'b0;
          end
        
          ///////////////////////
          // CSR operand check //
          ///////////////////////
%000001   always_comb begin : csr_operand_check
%000001     csr_op_o = csr_op;
        
            // CSRRSI/CSRRCI must not write 0 to CSRs (uimm[4:0]=='0)
            // CSRRS/CSRRC must not write from x0 to CSRs (rs1=='0)
 100002     if ((csr_op == CSR_OP_SET || csr_op == CSR_OP_CLEAR) &&
%000000         instr_rs1 == '0) begin
%000000       csr_op_o = CSR_OP_READ;
            end
          end
        
          /////////////
          // Decoder //
          /////////////
        
%000001   always_comb begin
%000001     jump_in_dec_o         = 1'b0;
%000001     jump_set_o            = 1'b0;
%000001     branch_in_dec_o       = 1'b0;
%000001     icache_inval_o        = 1'b0;
        
%000001     multdiv_operator_o    = MD_OP_MULL;
%000001     multdiv_signed_mode_o = 2'b00;
        
%000001     rf_wdata_sel_o        = RF_WD_EX;
%000001     rf_we                 = 1'b0;
%000001     rf_ren_a_o            = 1'b0;
%000001     rf_ren_b_o            = 1'b0;
        
%000001     csr_access_o          = 1'b0;
%000001     csr_illegal           = 1'b0;
%000001     csr_op                = CSR_OP_READ;
        
%000001     data_we_o             = 1'b0;
%000001     data_type_o           = 2'b00;
%000001     data_sign_extension_o = 1'b0;
%000001     data_req_o            = 1'b0;
        
%000001     illegal_insn          = 1'b0;
%000001     ebrk_insn_o           = 1'b0;
%000001     mret_insn_o           = 1'b0;
%000001     dret_insn_o           = 1'b0;
%000001     ecall_insn_o          = 1'b0;
%000001     wfi_insn_o            = 1'b0;
        
%000001     opcode                = opcode_e'(instr[6:0]);
        
%000001     unique case (opcode)
        
              ///////////
              // Jumps //
              ///////////
        
 014620       OPCODE_JAL: begin   // Jump and Link
 014620         jump_in_dec_o      = 1'b1;
        
%000000         if (instr_first_cycle_i) begin
                  // Calculate jump target (and store PC + 4 if BranchTargetALU is configured)
%000000           rf_we            = BranchTargetALU;
%000000           jump_set_o       = 1'b1;
 014620         end else begin
                  // Calculate and store PC+4
 014620           rf_we            = 1'b1;
                end
              end
        
%000000       OPCODE_JALR: begin  // Jump and Link Register
%000000         jump_in_dec_o      = 1'b1;
        
%000000         if (instr_first_cycle_i) begin
                  // Calculate jump target (and store PC + 4 if BranchTargetALU is configured)
%000000           rf_we            = BranchTargetALU;
%000000           jump_set_o       = 1'b1;
%000000         end else begin
                  // Calculate and store PC+4
%000000           rf_we            = 1'b1;
                end
%000000         if (instr[14:12] != 3'b0) begin
%000000           illegal_insn = 1'b1;
                end
        
%000000         rf_ren_a_o = 1'b1;
              end
        
 029960       OPCODE_BRANCH: begin // Branch
 029960         branch_in_dec_o       = 1'b1;
                // Check branch condition selection
 029960         unique case (instr[14:12])
                  3'b000,
                  3'b001,
                  3'b100,
                  3'b101,
                  3'b110,
 029960           3'b111:  illegal_insn = 1'b0;
%000000           default: illegal_insn = 1'b1;
                endcase
        
 029960         rf_ren_a_o = 1'b1;
 029960         rf_ren_b_o = 1'b1;
              end
        
              ////////////////
              // Load/store //
              ////////////////
        
 015480       OPCODE_STORE: begin
 015480         rf_ren_a_o         = 1'b1;
 015480         rf_ren_b_o         = 1'b1;
 015480         data_req_o         = 1'b1;
 015480         data_we_o          = 1'b1;
        
%000000         if (instr[14]) begin
%000000           illegal_insn = 1'b1;
                end
        
                // store size
 015480         unique case (instr[13:12])
 002080           2'b00:   data_type_o  = 2'b10; // sb
 001780           2'b01:   data_type_o  = 2'b01; // sh
 011620           2'b10:   data_type_o  = 2'b00; // sw
%000000           default: illegal_insn = 1'b1;
                endcase
              end
        
%000000       OPCODE_LOAD: begin
%000000         rf_ren_a_o          = 1'b1;
%000000         data_req_o          = 1'b1;
%000000         data_type_o         = 2'b00;
        
                // sign/zero extension
%000000         data_sign_extension_o = ~instr[14];
        
                // load size
%000000         unique case (instr[13:12])
%000000           2'b00: data_type_o = 2'b10; // lb(u)
%000000           2'b01: data_type_o = 2'b01; // lh(u)
%000000           2'b10: begin
%000000             data_type_o = 2'b00;      // lw
%000000             if (instr[14]) begin
%000000               illegal_insn = 1'b1;    // lwu does not exist
                    end
                  end
%000000           default: begin
%000000             illegal_insn = 1'b1;
                  end
                endcase
              end
        
              /////////
              // ALU //
              /////////
        
 014820       OPCODE_LUI: begin  // Load Upper Immediate
 014820         rf_we            = 1'b1;
              end
        
%000000       OPCODE_AUIPC: begin  // Add Upper Immediate to PC
%000000         rf_we            = 1'b1;
              end
        
 015120       OPCODE_OP_IMM: begin // Register-Immediate ALU Operations
 015120         rf_ren_a_o       = 1'b1;
 015120         rf_we            = 1'b1;
        
 015120         unique case (instr[14:12])
                  3'b000,
                  3'b010,
                  3'b011,
                  3'b100,
                  3'b110,
 015120           3'b111: illegal_insn = 1'b0;
        
%000000           3'b001: begin
%000000             unique case (instr[31:27])
%000000               5'b0_0000: illegal_insn = (instr[26:25] == 2'b00) ? 1'b0 : 1'b1;        // slli
%000000               5'b0_0100: begin                                                        // sloi
%000000                 illegal_insn = (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) ? 1'b0 : 1'b1;
                      end
                      5'b0_1001,                                                              // bclri
                      5'b0_0101,                                                              // bseti
%000000               5'b0_1101: illegal_insn = (RV32B != RV32BNone) ? 1'b0 : 1'b1;           // binvi
%000000               5'b0_0001: begin
%000000                 if (instr[26] == 1'b0) begin                                          // shfl
%000000                   illegal_insn = (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) ? 1'b0 : 1'b1;
%000000                 end else begin
%000000                   illegal_insn = 1'b1;
                        end
                      end
%000000               5'b0_1100: begin
%000000                 unique case(instr[26:20])
                          7'b000_0000,                                                         // clz
                          7'b000_0001,                                                         // ctz
                          7'b000_0010,                                                         // cpop
                          7'b000_0100,                                                         // sext.b
%000000                   7'b000_0101: illegal_insn = (RV32B != RV32BNone) ? 1'b0 : 1'b1;      // sext.h
                          7'b001_0000,                                                         // crc32.b
                          7'b001_0001,                                                         // crc32.h
                          7'b001_0010,                                                         // crc32.w
                          7'b001_1000,                                                         // crc32c.b
                          7'b001_1001,                                                         // crc32c.h
%000000                   7'b001_1010: begin                                                   // crc32c.w
%000000                     illegal_insn = (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) ? 1'b0 : 1'b1;
                          end
%000000                   default: illegal_insn = 1'b1;
                        endcase
                      end
%000000               default : illegal_insn = 1'b1;
                    endcase
                  end
        
%000000           3'b101: begin
%000000             if (instr[26]) begin
%000000               illegal_insn = (RV32B != RV32BNone) ? 1'b0 : 1'b1;                       // fsri
%000000             end else begin
%000000               unique case (instr[31:27])
                        5'b0_0000,                                                             // srli
%000000                 5'b0_1000: illegal_insn = (instr[26:25] == 2'b00) ? 1'b0 : 1'b1;       // srai
        
%000000                 5'b0_0100: begin                                                       // sroi
%000000                   illegal_insn = (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) ? 1'b0 : 1'b1;
                        end
                        5'b0_1100,                                                             // rori
%000000                 5'b0_1001: illegal_insn = (RV32B != RV32BNone) ? 1'b0 : 1'b1;          // bexti
        
%000000                 5'b0_1101: begin
%000000                   if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) begin
%000000                     illegal_insn = 1'b0;                                               // grevi
%000000                   end else if (RV32B == RV32BBalanced) begin
%000000                     illegal_insn = (instr[24:20] == 5'b11000) ? 1'b0 : 1'b1;           // rev8
%000000                   end else begin
%000000                     illegal_insn = 1'b1;
                          end
                        end
%000000                 5'b0_0101: begin
%000000                   if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) begin
%000000                     illegal_insn = 1'b0;                                              // gorci
%000000                   end else if (instr[24:20] == 5'b00111) begin
%000000                     illegal_insn = (RV32B == RV32BBalanced) ? 1'b0 : 1'b1;            // orc.b
%000000                   end else begin
%000000                     illegal_insn = 1'b1;
                          end
                        end
%000000                 5'b0_0001: begin
%000000                   if (instr[26] == 1'b0) begin                                        // unshfl
%000000                     illegal_insn = (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) ? 1'b0 : 1'b1;
%000000                   end else begin
%000000                     illegal_insn = 1'b1;
                          end
                        end
        
%000000                 default: illegal_insn = 1'b1;
                      endcase
                    end
                  end
        
%000000           default: illegal_insn = 1'b1;
                endcase
              end
        
%000000       OPCODE_OP: begin  // Register-Register ALU operation
%000000         rf_ren_a_o      = 1'b1;
%000000         rf_ren_b_o      = 1'b1;
%000000         rf_we           = 1'b1;
%000000         if ({instr[26], instr[13:12]} == {1'b1, 2'b01}) begin
%000000           illegal_insn = (RV32B != RV32BNone) ? 1'b0 : 1'b1; // cmix / cmov / fsl / fsr
%000000         end else begin
%000000           unique case ({instr[31:25], instr[14:12]})
                    // RV32I ALU operations
                    {7'b000_0000, 3'b000},
                    {7'b010_0000, 3'b000},
                    {7'b000_0000, 3'b010},
                    {7'b000_0000, 3'b011},
                    {7'b000_0000, 3'b100},
                    {7'b000_0000, 3'b110},
                    {7'b000_0000, 3'b111},
                    {7'b000_0000, 3'b001},
                    {7'b000_0000, 3'b101},
%000000             {7'b010_0000, 3'b101}: illegal_insn = 1'b0;
        
                    // RV32B zba
                    {7'b001_0000, 3'b010}, // sh1add
                    {7'b001_0000, 3'b100}, // sh2add
                    {7'b001_0000, 3'b110}, // sh3add
                    // RV32B zbb
                    {7'b010_0000, 3'b111}, // andn
                    {7'b010_0000, 3'b110}, // orn
                    {7'b010_0000, 3'b100}, // xnor
                    {7'b011_0000, 3'b001}, // rol
                    {7'b011_0000, 3'b101}, // ror
                    {7'b000_0101, 3'b100}, // min
                    {7'b000_0101, 3'b110}, // max
                    {7'b000_0101, 3'b101}, // minu
                    {7'b000_0101, 3'b111}, // maxu
                    {7'b000_0100, 3'b100}, // pack
                    {7'b010_0100, 3'b100}, // packu
                    {7'b000_0100, 3'b111}, // packh
                    // RV32B zbs
                    {7'b010_0100, 3'b001}, // bclr
                    {7'b001_0100, 3'b001}, // bset
                    {7'b011_0100, 3'b001}, // binv
                    {7'b010_0100, 3'b101}, // bext
                    // RV32B zbf
%000000             {7'b010_0100, 3'b111}: illegal_insn = (RV32B != RV32BNone) ? 1'b0 : 1'b1; // bfp
                    // RV32B zbp
                    {7'b011_0100, 3'b101}, // grev
                    {7'b001_0100, 3'b101}, // gorc
                    {7'b000_0100, 3'b001}, // shfl
                    {7'b000_0100, 3'b101}, // unshfl
                    {7'b001_0100, 3'b010}, // xperm.n
                    {7'b001_0100, 3'b100}, // xperm.b
                    {7'b001_0100, 3'b110}, // xperm.h
                    {7'b001_0000, 3'b001}, // slo
                    {7'b001_0000, 3'b101}, // sro
                    // RV32B zbc
                    {7'b000_0101, 3'b001}, // clmul
                    {7'b000_0101, 3'b010}, // clmulr
%000000             {7'b000_0101, 3'b011}: begin // clmulh
%000000               illegal_insn = (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) ? 1'b0 : 1'b1;
                    end
                    // RV32B zbe
                    {7'b010_0100, 3'b110}, // bdecompress
%000000             {7'b000_0100, 3'b110}: illegal_insn = (RV32B == RV32BFull) ? 1'b0 : 1'b1; // bcompress
        
                    // RV32M instructions
%000000             {7'b000_0001, 3'b000}: begin // mul
%000000               multdiv_operator_o    = MD_OP_MULL;
%000000               multdiv_signed_mode_o = 2'b00;
%000000               illegal_insn          = (RV32M == RV32MNone) ? 1'b1 : 1'b0;
                    end
%000000             {7'b000_0001, 3'b001}: begin // mulh
%000000               multdiv_operator_o    = MD_OP_MULH;
%000000               multdiv_signed_mode_o = 2'b11;
%000000               illegal_insn          = (RV32M == RV32MNone) ? 1'b1 : 1'b0;
                    end
%000000             {7'b000_0001, 3'b010}: begin // mulhsu
%000000               multdiv_operator_o    = MD_OP_MULH;
%000000               multdiv_signed_mode_o = 2'b01;
%000000               illegal_insn          = (RV32M == RV32MNone) ? 1'b1 : 1'b0;
                    end
%000000             {7'b000_0001, 3'b011}: begin // mulhu
%000000               multdiv_operator_o    = MD_OP_MULH;
%000000               multdiv_signed_mode_o = 2'b00;
%000000               illegal_insn          = (RV32M == RV32MNone) ? 1'b1 : 1'b0;
                    end
%000000             {7'b000_0001, 3'b100}: begin // div
%000000               multdiv_operator_o    = MD_OP_DIV;
%000000               multdiv_signed_mode_o = 2'b11;
%000000               illegal_insn          = (RV32M == RV32MNone) ? 1'b1 : 1'b0;
                    end
%000000             {7'b000_0001, 3'b101}: begin // divu
%000000               multdiv_operator_o    = MD_OP_DIV;
%000000               multdiv_signed_mode_o = 2'b00;
%000000               illegal_insn          = (RV32M == RV32MNone) ? 1'b1 : 1'b0;
                    end
%000000             {7'b000_0001, 3'b110}: begin // rem
%000000               multdiv_operator_o    = MD_OP_REM;
%000000               multdiv_signed_mode_o = 2'b11;
%000000               illegal_insn          = (RV32M == RV32MNone) ? 1'b1 : 1'b0;
                    end
%000000             {7'b000_0001, 3'b111}: begin // remu
%000000               multdiv_operator_o    = MD_OP_REM;
%000000               multdiv_signed_mode_o = 2'b00;
%000000               illegal_insn          = (RV32M == RV32MNone) ? 1'b1 : 1'b0;
                    end
%000000             default: begin
%000000               illegal_insn = 1'b1;
                    end
                  endcase
                end
              end
        
              /////////////
              // Special //
              /////////////
        
%000000       OPCODE_MISC_MEM: begin
%000000         unique case (instr[14:12])
%000000           3'b000: begin
                    // FENCE is treated as a NOP since all memory operations are already strictly ordered.
%000000             rf_we           = 1'b0;
                  end
%000000           3'b001: begin
                    // FENCE.I is implemented as a jump to the next PC, this gives the required flushing
                    // behaviour (iside prefetch buffer flushed and response to any outstanding iside
                    // requests will be ignored).
                    // If present, the ICache will also be flushed.
%000000             jump_in_dec_o   = 1'b1;
        
%000000             rf_we           = 1'b0;
        
%000000             if (instr_first_cycle_i) begin
%000000               jump_set_o       = 1'b1;
%000000               icache_inval_o   = 1'b1;
                    end
                  end
%000000           default: begin
%000000             illegal_insn       = 1'b1;
                  end
                endcase
              end
        
 008382       OPCODE_SYSTEM: begin
 008382         if (instr[14:12] == 3'b000) begin
                  // non CSR related SYSTEM instructions
 008382           unique case (instr[31:20])
 001900             12'h000:  // ECALL
                      // environment (system) call
 001900               ecall_insn_o = 1'b1;
        
 001720             12'h001:  // ebreak
                      // debugger trap
 001720               ebrk_insn_o = 1'b1;
        
 001780             12'h302:  // mret
 001780               mret_insn_o = 1'b1;
        
 001440             12'h7b2:  // dret
 001440               dret_insn_o = 1'b1;
        
 001542             12'h105:  // wfi
 001542               wfi_insn_o = 1'b1;
        
%000000             default:
%000000               illegal_insn = 1'b1;
                  endcase
        
                  // rs1 and rd must be 0
 008382           if (instr_rs1 != 5'b0 || instr_rd != 5'b0) begin
%000000             illegal_insn = 1'b1;
                  end
%000000         end else begin
                  // instruction to read/modify CSR
%000000           csr_access_o     = 1'b1;
%000000           rf_wdata_sel_o   = RF_WD_CSR;
%000000           rf_we            = 1'b1;
        
%000000           if (~instr[14]) begin
%000000             rf_ren_a_o         = 1'b1;
                  end
        
%000000           unique case (instr[13:12])
%000000             2'b01:   csr_op = CSR_OP_WRITE;
%000000             2'b10:   csr_op = CSR_OP_SET;
%000000             2'b11:   csr_op = CSR_OP_CLEAR;
%000000             default: csr_illegal = 1'b1;
                  endcase
        
%000000           illegal_insn = csr_illegal;
                end
        
              end
 001620       default: begin
 001620         illegal_insn = 1'b1;
              end
            endcase
        
            // make sure illegal compressed instructions cause illegal instruction exceptions
 100002     if (illegal_c_insn_i) begin
%000000       illegal_insn = 1'b1;
            end
        
            // make sure illegal instructions detected in the decoder do not propagate from decoder
            // into register file, LSU, EX, WB, CSRs, PC
            // NOTE: instructions can also be detected to be illegal inside the CSRs (upon accesses with
            // insufficient privileges), or when accessing non-available registers in RV32E,
            // these cases are not handled here
 001620     if (illegal_insn) begin
 001620       rf_we           = 1'b0;
 001620       data_req_o      = 1'b0;
 001620       data_we_o       = 1'b0;
 001620       jump_in_dec_o   = 1'b0;
 001620       jump_set_o      = 1'b0;
 001620       branch_in_dec_o = 1'b0;
 001620       csr_access_o    = 1'b0;
            end
          end
        
          /////////////////////////////
          // Decoder for ALU control //
          /////////////////////////////
        
%000001   always_comb begin
%000001     alu_operator_o     = ALU_SLTU;
%000001     alu_op_a_mux_sel_o = OP_A_IMM;
%000001     alu_op_b_mux_sel_o = OP_B_IMM;
        
%000001     imm_a_mux_sel_o    = IMM_A_ZERO;
%000001     imm_b_mux_sel_o    = IMM_B_I;
        
%000001     bt_a_mux_sel_o     = OP_A_CURRPC;
%000001     bt_b_mux_sel_o     = IMM_B_I;
        
        
%000001     opcode_alu         = opcode_e'(instr_alu[6:0]);
        
%000001     use_rs3_d          = 1'b0;
%000001     alu_multicycle_o   = 1'b0;
%000001     mult_sel_o         = 1'b0;
%000001     div_sel_o          = 1'b0;
        
%000001     unique case (opcode_alu)
        
              ///////////
              // Jumps //
              ///////////
        
 014620       OPCODE_JAL: begin // Jump and Link
%000000         if (BranchTargetALU) begin
%000000           bt_a_mux_sel_o = OP_A_CURRPC;
%000000           bt_b_mux_sel_o = IMM_B_J;
                end
        
                // Jumps take two cycles without the BTALU
%000000         if (instr_first_cycle_i && !BranchTargetALU) begin
                  // Calculate jump target
%000000           alu_op_a_mux_sel_o  = OP_A_CURRPC;
%000000           alu_op_b_mux_sel_o  = OP_B_IMM;
%000000           imm_b_mux_sel_o     = IMM_B_J;
%000000           alu_operator_o      = ALU_ADD;
 014620         end else begin
                  // Calculate and store PC+4
 014620           alu_op_a_mux_sel_o  = OP_A_CURRPC;
 014620           alu_op_b_mux_sel_o  = OP_B_IMM;
 014620           imm_b_mux_sel_o     = IMM_B_INCR_PC;
 014620           alu_operator_o      = ALU_ADD;
                end
              end
        
%000000       OPCODE_JALR: begin // Jump and Link Register
%000000         if (BranchTargetALU) begin
%000000           bt_a_mux_sel_o = OP_A_REG_A;
%000000           bt_b_mux_sel_o = IMM_B_I;
                end
        
                // Jumps take two cycles without the BTALU
%000000         if (instr_first_cycle_i && !BranchTargetALU) begin
                  // Calculate jump target
%000000           alu_op_a_mux_sel_o  = OP_A_REG_A;
%000000           alu_op_b_mux_sel_o  = OP_B_IMM;
%000000           imm_b_mux_sel_o     = IMM_B_I;
%000000           alu_operator_o      = ALU_ADD;
%000000         end else begin
                  // Calculate and store PC+4
%000000           alu_op_a_mux_sel_o  = OP_A_CURRPC;
%000000           alu_op_b_mux_sel_o  = OP_B_IMM;
%000000           imm_b_mux_sel_o     = IMM_B_INCR_PC;
%000000           alu_operator_o      = ALU_ADD;
                end
              end
        
 029960       OPCODE_BRANCH: begin // Branch
                // Check branch condition selection
 029960         unique case (instr_alu[14:12])
 003800           3'b000:  alu_operator_o = ALU_EQ;
 010800           3'b001:  alu_operator_o = ALU_NE;
 003740           3'b100:  alu_operator_o = ALU_LT;
 003520           3'b101:  alu_operator_o = ALU_GE;
 003780           3'b110:  alu_operator_o = ALU_LTU;
 004320           3'b111:  alu_operator_o = ALU_GEU;
%000000           default: ;
                endcase
        
%000000         if (BranchTargetALU) begin
%000000           bt_a_mux_sel_o = OP_A_CURRPC;
                  // Not-taken branch will jump to next instruction (used in secure mode)
%000000           bt_b_mux_sel_o = branch_taken_i ? IMM_B_B : IMM_B_INCR_PC;
                end
        
                // Without branch target ALU, a branch is a two-stage operation using the Main ALU in both
                // stages
%000000         if (instr_first_cycle_i) begin
                  // First evaluate the branch condition
%000000           alu_op_a_mux_sel_o  = OP_A_REG_A;
%000000           alu_op_b_mux_sel_o  = OP_B_REG_B;
%000000         end else if (!BranchTargetALU) begin
                  // Then calculate jump target
 029960           alu_op_a_mux_sel_o  = OP_A_CURRPC;
 029960           alu_op_b_mux_sel_o  = OP_B_IMM;
                  // Not-taken branch will jump to next instruction (used in secure mode)
 029960           imm_b_mux_sel_o     = branch_taken_i ? IMM_B_B : IMM_B_INCR_PC;
 029960           alu_operator_o      = ALU_ADD;
                end
              end
        
              ////////////////
              // Load/store //
              ////////////////
        
 015480       OPCODE_STORE: begin
 015480         alu_op_a_mux_sel_o = OP_A_REG_A;
 015480         alu_op_b_mux_sel_o = OP_B_REG_B;
 015480         alu_operator_o     = ALU_ADD;
        
 015480         if (!instr_alu[14]) begin
                  // offset from immediate
 015480           imm_b_mux_sel_o     = IMM_B_S;
 015480           alu_op_b_mux_sel_o  = OP_B_IMM;
                end
              end
        
%000000       OPCODE_LOAD: begin
%000000         alu_op_a_mux_sel_o  = OP_A_REG_A;
        
                // offset from immediate
%000000         alu_operator_o      = ALU_ADD;
%000000         alu_op_b_mux_sel_o  = OP_B_IMM;
%000000         imm_b_mux_sel_o     = IMM_B_I;
              end
        
              /////////
              // ALU //
              /////////
        
 014820       OPCODE_LUI: begin  // Load Upper Immediate
 014820         alu_op_a_mux_sel_o  = OP_A_IMM;
 014820         alu_op_b_mux_sel_o  = OP_B_IMM;
 014820         imm_a_mux_sel_o     = IMM_A_ZERO;
 014820         imm_b_mux_sel_o     = IMM_B_U;
 014820         alu_operator_o      = ALU_ADD;
              end
        
%000000       OPCODE_AUIPC: begin  // Add Upper Immediate to PC
%000000         alu_op_a_mux_sel_o  = OP_A_CURRPC;
%000000         alu_op_b_mux_sel_o  = OP_B_IMM;
%000000         imm_b_mux_sel_o     = IMM_B_U;
%000000         alu_operator_o      = ALU_ADD;
              end
        
 015120       OPCODE_OP_IMM: begin // Register-Immediate ALU Operations
 015120         alu_op_a_mux_sel_o  = OP_A_REG_A;
 015120         alu_op_b_mux_sel_o  = OP_B_IMM;
 015120         imm_b_mux_sel_o     = IMM_B_I;
        
 015120         unique case (instr_alu[14:12])
 001860           3'b000: alu_operator_o = ALU_ADD;  // Add Immediate
 002160           3'b010: alu_operator_o = ALU_SLT;  // Set to one if Lower Than Immediate
 006040           3'b011: alu_operator_o = ALU_SLTU; // Set to one if Lower Than Immediate Unsigned
 001800           3'b100: alu_operator_o = ALU_XOR;  // Exclusive Or with Immediate
 001560           3'b110: alu_operator_o = ALU_OR;   // Or with Immediate
 001700           3'b111: alu_operator_o = ALU_AND;  // And with Immediate
        
%000000           3'b001: begin
%000000             if (RV32B != RV32BNone) begin
%000000               unique case (instr_alu[31:27])
%000000                 5'b0_0000: alu_operator_o = ALU_SLL;    // Shift Left Logical by Immediate
                        // Shift Left Ones by Immediate
%000000                 5'b0_0100: begin
%000000                   if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) alu_operator_o = ALU_SLO;
                        end
%000000                 5'b0_1001: alu_operator_o = ALU_BCLR; // Clear bit specified by immediate
%000000                 5'b0_0101: alu_operator_o = ALU_BSET; // Set bit specified by immediate
%000000                 5'b0_1101: alu_operator_o = ALU_BINV; // Invert bit specified by immediate.
                        // Shuffle with Immediate Control Value
%000000                 5'b0_0001: if (instr_alu[26] == 0) alu_operator_o = ALU_SHFL;
%000000                 5'b0_1100: begin
%000000                   unique case (instr_alu[26:20])
%000000                     7'b000_0000: alu_operator_o = ALU_CLZ;   // clz
%000000                     7'b000_0001: alu_operator_o = ALU_CTZ;   // ctz
%000000                     7'b000_0010: alu_operator_o = ALU_CPOP;  // cpop
%000000                     7'b000_0100: alu_operator_o = ALU_SEXTB; // sext.b
%000000                     7'b000_0101: alu_operator_o = ALU_SEXTH; // sext.h
%000000                     7'b001_0000: begin
%000000                       if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) begin
%000000                         alu_operator_o = ALU_CRC32_B;  // crc32.b
%000000                         alu_multicycle_o = 1'b1;
                              end
                            end
%000000                     7'b001_0001: begin
%000000                       if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) begin
%000000                         alu_operator_o = ALU_CRC32_H;  // crc32.h
%000000                         alu_multicycle_o = 1'b1;
                              end
                            end
%000000                     7'b001_0010: begin
%000000                       if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) begin
%000000                         alu_operator_o = ALU_CRC32_W;  // crc32.w
%000000                         alu_multicycle_o = 1'b1;
                              end
                            end
%000000                     7'b001_1000: begin
%000000                       if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) begin
%000000                         alu_operator_o = ALU_CRC32C_B; // crc32c.b
%000000                         alu_multicycle_o = 1'b1;
                              end
                            end
%000000                     7'b001_1001: begin
%000000                       if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) begin
%000000                         alu_operator_o = ALU_CRC32C_H; // crc32c.h
%000000                         alu_multicycle_o = 1'b1;
                              end
                            end
%000000                     7'b001_1010: begin
%000000                       if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) begin
%000000                         alu_operator_o = ALU_CRC32C_W; // crc32c.w
%000000                         alu_multicycle_o = 1'b1;
                              end
                            end
%000000                     default: ;
                          endcase
                        end
        
%000000                 default: ;
                      endcase
%000000             end else begin
%000000               alu_operator_o = ALU_SLL; // Shift Left Logical by Immediate
                    end
                  end
        
%000000           3'b101: begin
%000000             if (RV32B != RV32BNone) begin
%000000               if (instr_alu[26] == 1'b1) begin
%000000                 alu_operator_o = ALU_FSR;
%000000                 alu_multicycle_o = 1'b1;
%000000                 if (instr_first_cycle_i) begin
%000000                   use_rs3_d = 1'b1;
%000000                 end else begin
%000000                   use_rs3_d = 1'b0;
                        end
%000000               end else begin
%000000                 unique case (instr_alu[31:27])
%000000                   5'b0_0000: alu_operator_o = ALU_SRL;   // Shift Right Logical by Immediate
%000000                   5'b0_1000: alu_operator_o = ALU_SRA;   // Shift Right Arithmetically by Immediate
                          // Shift Right Ones by Immediate
%000000                   5'b0_0100: begin
%000000                     if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) alu_operator_o = ALU_SRO;
                          end
%000000                   5'b0_1001: alu_operator_o = ALU_BEXT;  // Extract bit specified by immediate.
%000000                   5'b0_1100: begin
%000000                     alu_operator_o = ALU_ROR;            // Rotate Right by Immediate
%000000                     alu_multicycle_o = 1'b1;
                          end
%000000                   5'b0_1101: alu_operator_o = ALU_GREV;  // General Reverse with Imm Control Val
%000000                   5'b0_0101: alu_operator_o = ALU_GORC;  // General Or-combine with Imm Control Val
                          // Unshuffle with Immediate Control Value
%000000                   5'b0_0001: begin
%000000                     if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) begin
%000000                       if (instr_alu[26] == 1'b0) alu_operator_o = ALU_UNSHFL;
                            end
                          end
%000000                   default: ;
                        endcase
                      end
        
%000000             end else begin
%000000               if (instr_alu[31:27] == 5'b0_0000) begin
%000000                 alu_operator_o = ALU_SRL;               // Shift Right Logical by Immediate
%000000               end else if (instr_alu[31:27] == 5'b0_1000) begin
%000000                 alu_operator_o = ALU_SRA;               // Shift Right Arithmetically by Immediate
                      end
                    end
                  end
        
%000000           default: ;
                endcase
              end
        
%000000       OPCODE_OP: begin  // Register-Register ALU operation
%000000         alu_op_a_mux_sel_o = OP_A_REG_A;
%000000         alu_op_b_mux_sel_o = OP_B_REG_B;
        
%000000         if (instr_alu[26]) begin
%000000           if (RV32B != RV32BNone) begin
%000000             unique case ({instr_alu[26:25], instr_alu[14:12]})
%000000               {2'b11, 3'b001}: begin
%000000                 alu_operator_o   = ALU_CMIX; // cmix
%000000                 alu_multicycle_o = 1'b1;
%000000                 if (instr_first_cycle_i) begin
%000000                   use_rs3_d = 1'b1;
%000000                 end else begin
%000000                   use_rs3_d = 1'b0;
                        end
                      end
%000000               {2'b11, 3'b101}: begin
%000000                 alu_operator_o   = ALU_CMOV; // cmov
%000000                 alu_multicycle_o = 1'b1;
%000000                 if (instr_first_cycle_i) begin
%000000                   use_rs3_d = 1'b1;
%000000                 end else begin
%000000                   use_rs3_d = 1'b0;
                        end
                      end
%000000               {2'b10, 3'b001}: begin
%000000                 alu_operator_o   = ALU_FSL;  // fsl
%000000                 alu_multicycle_o = 1'b1;
%000000                 if (instr_first_cycle_i) begin
%000000                   use_rs3_d = 1'b1;
%000000                 end else begin
%000000                   use_rs3_d = 1'b0;
                        end
                      end
%000000               {2'b10, 3'b101}: begin
%000000                 alu_operator_o   = ALU_FSR;  // fsr
%000000                 alu_multicycle_o = 1'b1;
%000000                 if (instr_first_cycle_i) begin
%000000                   use_rs3_d = 1'b1;
%000000                 end else begin
%000000                   use_rs3_d = 1'b0;
                        end
                      end
%000000               default: ;
                    endcase
                  end
%000000         end else begin
%000000           unique case ({instr_alu[31:25], instr_alu[14:12]})
                    // RV32I ALU operations
%000000             {7'b000_0000, 3'b000}: alu_operator_o = ALU_ADD;   // Add
%000000             {7'b010_0000, 3'b000}: alu_operator_o = ALU_SUB;   // Sub
%000000             {7'b000_0000, 3'b010}: alu_operator_o = ALU_SLT;   // Set Lower Than
%000000             {7'b000_0000, 3'b011}: alu_operator_o = ALU_SLTU;  // Set Lower Than Unsigned
%000000             {7'b000_0000, 3'b100}: alu_operator_o = ALU_XOR;   // Xor
%000000             {7'b000_0000, 3'b110}: alu_operator_o = ALU_OR;    // Or
%000000             {7'b000_0000, 3'b111}: alu_operator_o = ALU_AND;   // And
%000000             {7'b000_0000, 3'b001}: alu_operator_o = ALU_SLL;   // Shift Left Logical
%000000             {7'b000_0000, 3'b101}: alu_operator_o = ALU_SRL;   // Shift Right Logical
%000000             {7'b010_0000, 3'b101}: alu_operator_o = ALU_SRA;   // Shift Right Arithmetic
        
                    // RV32B ALU Operations
%000000             {7'b011_0000, 3'b001}: begin
%000000               if (RV32B != RV32BNone) begin
%000000                 alu_operator_o = ALU_ROL;
%000000                 alu_multicycle_o = 1'b1;
                      end
                    end
%000000             {7'b011_0000, 3'b101}: begin
%000000               if (RV32B != RV32BNone) begin
%000000                 alu_operator_o = ALU_ROR;
%000000                 alu_multicycle_o = 1'b1;
                      end
                    end
        
%000000             {7'b000_0101, 3'b100}: if (RV32B != RV32BNone) alu_operator_o = ALU_MIN;
%000000             {7'b000_0101, 3'b110}: if (RV32B != RV32BNone) alu_operator_o = ALU_MAX;
%000000             {7'b000_0101, 3'b101}: if (RV32B != RV32BNone) alu_operator_o = ALU_MINU;
%000000             {7'b000_0101, 3'b111}: if (RV32B != RV32BNone) alu_operator_o = ALU_MAXU;
        
%000000             {7'b000_0100, 3'b100}: if (RV32B != RV32BNone) alu_operator_o = ALU_PACK;
%000000             {7'b010_0100, 3'b100}: if (RV32B != RV32BNone) alu_operator_o = ALU_PACKU;
%000000             {7'b000_0100, 3'b111}: if (RV32B != RV32BNone) alu_operator_o = ALU_PACKH;
        
%000000             {7'b010_0000, 3'b100}: if (RV32B != RV32BNone) alu_operator_o = ALU_XNOR;
%000000             {7'b010_0000, 3'b110}: if (RV32B != RV32BNone) alu_operator_o = ALU_ORN;
%000000             {7'b010_0000, 3'b111}: if (RV32B != RV32BNone) alu_operator_o = ALU_ANDN;
        
                    // RV32B zba
%000000             {7'b001_0000, 3'b010}: if (RV32B != RV32BNone) alu_operator_o = ALU_SH1ADD;
%000000             {7'b001_0000, 3'b100}: if (RV32B != RV32BNone) alu_operator_o = ALU_SH2ADD;
%000000             {7'b001_0000, 3'b110}: if (RV32B != RV32BNone) alu_operator_o = ALU_SH3ADD;
        
                    // RV32B zbs
%000000             {7'b010_0100, 3'b001}: if (RV32B != RV32BNone) alu_operator_o = ALU_BCLR;
%000000             {7'b001_0100, 3'b001}: if (RV32B != RV32BNone) alu_operator_o = ALU_BSET;
%000000             {7'b011_0100, 3'b001}: if (RV32B != RV32BNone) alu_operator_o = ALU_BINV;
%000000             {7'b010_0100, 3'b101}: if (RV32B != RV32BNone) alu_operator_o = ALU_BEXT;
        
                    // RV32B zbf
%000000             {7'b010_0100, 3'b111}: if (RV32B != RV32BNone) alu_operator_o = ALU_BFP;
        
                    // RV32B zbp
%000000             {7'b011_0100, 3'b101}: if (RV32B != RV32BNone) alu_operator_o = ALU_GREV;
%000000             {7'b001_0100, 3'b101}: if (RV32B != RV32BNone) alu_operator_o = ALU_GORC;
%000000             {7'b000_0100, 3'b001}: begin
%000000               if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) alu_operator_o = ALU_SHFL;
                    end
%000000             {7'b000_0100, 3'b101}: begin
%000000               if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) alu_operator_o = ALU_UNSHFL;
                    end
%000000             {7'b001_0100, 3'b010}: begin
%000000               if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) alu_operator_o = ALU_XPERM_N;
                    end
%000000             {7'b001_0100, 3'b100}: begin
%000000               if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) alu_operator_o = ALU_XPERM_B;
                    end
%000000             {7'b001_0100, 3'b110}: begin
%000000               if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) alu_operator_o = ALU_XPERM_H;
                    end
%000000             {7'b001_0000, 3'b001}: begin
%000000               if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) alu_operator_o = ALU_SLO;
                    end
%000000             {7'b001_0000, 3'b101}: begin
%000000               if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) alu_operator_o = ALU_SRO;
                    end
        
                    // RV32B zbc
%000000             {7'b000_0101, 3'b001}: begin
%000000               if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) alu_operator_o = ALU_CLMUL;
                    end
%000000             {7'b000_0101, 3'b010}: begin
%000000               if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) alu_operator_o = ALU_CLMULR;
                    end
%000000             {7'b000_0101, 3'b011}: begin
%000000               if (RV32B == RV32BOTEarlGrey || RV32B == RV32BFull) alu_operator_o = ALU_CLMULH;
                    end
        
                    // RV32B zbe
%000000             {7'b010_0100, 3'b110}: begin
%000000               if (RV32B == RV32BFull) begin
%000000                 alu_operator_o = ALU_BDECOMPRESS;
%000000                 alu_multicycle_o = 1'b1;
                      end
                    end
%000000             {7'b000_0100, 3'b110}: begin
%000000               if (RV32B == RV32BFull) begin
%000000                 alu_operator_o = ALU_BCOMPRESS;
%000000                 alu_multicycle_o = 1'b1;
                      end
                    end
        
                    // RV32M instructions, all use the same ALU operation
%000000             {7'b000_0001, 3'b000}: begin // mul
%000000               alu_operator_o = ALU_ADD;
%000000               mult_sel_o     = (RV32M == RV32MNone) ? 1'b0 : 1'b1;
                    end
%000000             {7'b000_0001, 3'b001}: begin // mulh
%000000               alu_operator_o = ALU_ADD;
%000000               mult_sel_o     = (RV32M == RV32MNone) ? 1'b0 : 1'b1;
                    end
%000000             {7'b000_0001, 3'b010}: begin // mulhsu
%000000               alu_operator_o = ALU_ADD;
%000000               mult_sel_o     = (RV32M == RV32MNone) ? 1'b0 : 1'b1;
                    end
%000000             {7'b000_0001, 3'b011}: begin // mulhu
%000000               alu_operator_o = ALU_ADD;
%000000               mult_sel_o     = (RV32M == RV32MNone) ? 1'b0 : 1'b1;
                    end
%000000             {7'b000_0001, 3'b100}: begin // div
%000000               alu_operator_o = ALU_ADD;
%000000               div_sel_o      = (RV32M == RV32MNone) ? 1'b0 : 1'b1;
                    end
%000000             {7'b000_0001, 3'b101}: begin // divu
%000000               alu_operator_o = ALU_ADD;
%000000               div_sel_o      = (RV32M == RV32MNone) ? 1'b0 : 1'b1;
                    end
%000000             {7'b000_0001, 3'b110}: begin // rem
%000000               alu_operator_o = ALU_ADD;
%000000               div_sel_o      = (RV32M == RV32MNone) ? 1'b0 : 1'b1;
                    end
%000000             {7'b000_0001, 3'b111}: begin // remu
%000000               alu_operator_o = ALU_ADD;
%000000               div_sel_o      = (RV32M == RV32MNone) ? 1'b0 : 1'b1;
                    end
        
%000000             default: ;
                  endcase
                end
              end
        
              /////////////
              // Special //
              /////////////
        
%000000       OPCODE_MISC_MEM: begin
%000000         unique case (instr_alu[14:12])
%000000           3'b000: begin
                    // FENCE is treated as a NOP since all memory operations are already strictly ordered.
%000000             alu_operator_o     = ALU_ADD; // nop
%000000             alu_op_a_mux_sel_o = OP_A_REG_A;
%000000             alu_op_b_mux_sel_o = OP_B_IMM;
                  end
%000000           3'b001: begin
                    // FENCE.I will flush the IF stage, prefetch buffer and ICache if present.
%000000             if (BranchTargetALU) begin
%000000               bt_a_mux_sel_o     = OP_A_CURRPC;
%000000               bt_b_mux_sel_o     = IMM_B_INCR_PC;
%000000             end else begin
%000000               alu_op_a_mux_sel_o = OP_A_CURRPC;
%000000               alu_op_b_mux_sel_o = OP_B_IMM;
%000000               imm_b_mux_sel_o    = IMM_B_INCR_PC;
%000000               alu_operator_o     = ALU_ADD;
                    end
                  end
%000000           default: ;
                endcase
              end
        
 008382       OPCODE_SYSTEM: begin
 008382         if (instr_alu[14:12] == 3'b000) begin
                  // non CSR related SYSTEM instructions
 008382           alu_op_a_mux_sel_o = OP_A_REG_A;
 008382           alu_op_b_mux_sel_o = OP_B_IMM;
%000000         end else begin
                  // instruction to read/modify CSR
%000000           alu_op_b_mux_sel_o = OP_B_IMM;
%000000           imm_a_mux_sel_o    = IMM_A_Z;
%000000           imm_b_mux_sel_o    = IMM_B_I;  // CSR address is encoded in I imm
        
%000000           if (instr_alu[14]) begin
                    // rs1 field is used as immediate
%000000             alu_op_a_mux_sel_o = OP_A_IMM;
%000000           end else begin
%000000             alu_op_a_mux_sel_o = OP_A_REG_A;
                  end
                end
        
              end
 001620       default: ;
            endcase
          end
        
          // do not enable multdiv in case of illegal instruction exceptions
          assign mult_en_o = illegal_insn ? 1'b0 : mult_sel_o;
          assign div_en_o  = illegal_insn ? 1'b0 : div_sel_o;
        
          // make sure instructions accessing non-available registers in RV32E cause illegal
          // instruction exceptions
          assign illegal_insn_o = illegal_insn | illegal_reg_rv32e;
        
          // do not propgate regfile write enable if non-available registers are accessed in RV32E
          assign rf_we_o = rf_we & ~illegal_reg_rv32e;
        
          // Not all bits are used
          assign unused_instr_alu = {instr_alu[19:15],instr_alu[11:7]};
        
          ////////////////
          // Assertions //
          ////////////////
        
          // Selectors must be known/valid.
          /*`ASSERT(IbexRegImmAluOpKnown, (opcode == OPCODE_OP_IMM) |->
              !$isunknown(instr[14:12]))*/
        endmodule // controller
        
