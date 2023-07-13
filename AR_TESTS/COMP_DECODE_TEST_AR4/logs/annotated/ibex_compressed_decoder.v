//      // verilator_coverage annotation
        // Copyright lowRISC contributors.
        // Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
        // Licensed under the Apache License, Version 2.0, see LICENSE for details.
        // SPDX-License-Identifier: Apache-2.0
        
        /**
         * Compressed instruction decoder
         *
         * Decodes RISC-V compressed instructions into their RV32 equivalent.
         * This module is fully combinatorial, clock and reset are used for
         * assertions only.
         */
        
        // `include "prim_assert.sv"
         `include "ibex_pkg.sv"
        
        module ibex_compressed_decoder (
 002000   input  logic        clk_i,
%000000   input  logic        rst_ni,
%000000   input  logic        valid_i,
 000337   input  logic [31:0] instr_i,
%000000   input  logic [15:0] enum_dpi,
 000025   output logic [31:0] instr_o,
%000001   output logic        is_compressed_o,
 000043   output logic        illegal_instr_o
        );
        
        import ibex_pkg::*;
        
          // valid_i indicates if instr_i is valid and is used for assertions only.
          // The following signal is used to avoid possible lint errors.
%000000   logic [16:0] unused_signals;
          assign unused_signals = {enum_dpi, valid_i};
        
          ////////////////////////
          // Compressed decoder //
          ////////////////////////
        
%000001   always_comb begin
            // By default, forward incoming instruction, mark it as legal.
%000001     instr_o         = instr_i;
%000001     illegal_instr_o = 1'b0;
        
            // Check if incoming instruction is compressed.
%000001     unique case (instr_i[1:0])
              // C0
 000521       2'b00: begin
 000521         unique case (instr_i[15:13])
 000080           3'b000: begin
                    // c.addi4spn -> addi rd', x2, imm
 000080             instr_o = {2'b0, instr_i[10:7], instr_i[12:11], instr_i[5],
 000080                        instr_i[6], 2'b00, 5'h02, 3'b000, 2'b01, instr_i[4:2], {OPCODE_OP_IMM}};
 000080             if (instr_i[12:5] == 8'b0)  illegal_instr_o = 1'b1;
                  end
        
 000040           3'b010: begin
                    // c.lw -> lw rd', imm(rs1')
 000040             instr_o = {5'b0, instr_i[5], instr_i[12:10], instr_i[6],
 000040                        2'b00, 2'b01, instr_i[9:7], 3'b010, 2'b01, instr_i[4:2], {OPCODE_LOAD}};
                  end
        
 000100           3'b110: begin
                    // c.sw -> sw rs2', imm(rs1')
 000100             instr_o = {5'b0, instr_i[5], instr_i[12], 2'b01, instr_i[4:2],
 000100                        2'b01, instr_i[9:7], 3'b010, instr_i[11:10], instr_i[6],
 000100                        2'b00, {OPCODE_STORE}};
                  end
        
                  3'b001,
                  3'b011,
                  3'b100,
                  3'b101,
 000301           3'b111: begin
 000301             illegal_instr_o = 1'b1;
                  end
        
%000000           default: begin
%000000             illegal_instr_o = 1'b1;
                  end
                endcase
              end
        
              // C1
              //
              // Register address checks for RV32E are performed in the regular instruction decoder.
              // If this check fails, an illegal instruction exception is triggered and the controller
              // writes the actual faulting instruction to mtval.
 000780       2'b01: begin
 000780         unique case (instr_i[15:13])
 000100           3'b000: begin
                    // c.addi -> addi rd, rd, nzimm
                    // c.nop
 000100             instr_o = {{6 {instr_i[12]}}, instr_i[12], instr_i[6:2],
 000100                        instr_i[11:7], 3'b0, instr_i[11:7], {OPCODE_OP_IMM}};
                  end
        
 000200           3'b001, 3'b101: begin
                    // 001: c.jal -> jal x1, imm
                    // 101: c.j   -> jal x0, imm
 000200             instr_o = {instr_i[12], instr_i[8], instr_i[10:9], instr_i[6],
 000200                        instr_i[7], instr_i[2], instr_i[11], instr_i[5:3],
 000200                        {9 {instr_i[12]}}, 4'b0, ~instr_i[15], {OPCODE_JAL}};
                  end
        
 000060           3'b010: begin
                    // c.li -> addi rd, x0, nzimm
                    // (c.li hints are translated into an addi hint)
 000060             instr_o = {{6 {instr_i[12]}}, instr_i[12], instr_i[6:2], 5'b0,
 000060                        3'b0, instr_i[11:7], {OPCODE_OP_IMM}};
                  end
        
%000000           3'b011: begin
                    // c.lui -> lui rd, imm
                    // (c.lui hints are translated into a lui hint)
%000000             instr_o = {{15 {instr_i[12]}}, instr_i[6:2], instr_i[11:7], {OPCODE_LUI}};
        
%000000             if (instr_i[11:7] == 5'h02) begin
                      // c.addi16sp -> addi x2, x2, nzimm
%000000               instr_o = {{3 {instr_i[12]}}, instr_i[4:3], instr_i[5], instr_i[2],
%000000                          instr_i[6], 4'b0, 5'h02, 3'b000, 5'h02, {OPCODE_OP_IMM}};
                    end
        
%000000             if ({instr_i[12], instr_i[6:2]} == 6'b0) illegal_instr_o = 1'b1;
                  end
        
 000340           3'b100: begin
 000340             unique case (instr_i[11:10])
                      2'b00,
 000100               2'b01: begin
                        // 00: c.srli -> srli rd, rd, shamt
                        // 01: c.srai -> srai rd, rd, shamt
                        // (c.srli/c.srai hints are translated into a srli/srai hint)
 000100                 instr_o = {1'b0, instr_i[10], 5'b0, instr_i[6:2], 2'b01, instr_i[9:7],
 000100                            3'b101, 2'b01, instr_i[9:7], {OPCODE_OP_IMM}};
 000100                 if (instr_i[12] == 1'b1)  illegal_instr_o = 1'b1;
                      end
        
 000020               2'b10: begin
                        // c.andi -> andi rd, rd, imm
 000020                 instr_o = {{6 {instr_i[12]}}, instr_i[12], instr_i[6:2], 2'b01, instr_i[9:7],
 000020                            3'b111, 2'b01, instr_i[9:7], {OPCODE_OP_IMM}};
                      end
        
 000220               2'b11: begin
 000220                 unique case ({instr_i[12], instr_i[6:5]})
 000040                   3'b000: begin
                            // c.sub -> sub rd', rd', rs2'
 000040                     instr_o = {2'b01, 5'b0, 2'b01, instr_i[4:2], 2'b01, instr_i[9:7],
 000040                                3'b000, 2'b01, instr_i[9:7], {OPCODE_OP}};
                          end
        
 000060                   3'b001: begin
                            // c.xor -> xor rd', rd', rs2'
 000060                     instr_o = {7'b0, 2'b01, instr_i[4:2], 2'b01, instr_i[9:7], 3'b100,
 000060                                2'b01, instr_i[9:7], {OPCODE_OP}};
                          end
        
 000020                   3'b010: begin
                            // c.or  -> or  rd', rd', rs2'
 000020                     instr_o = {7'b0, 2'b01, instr_i[4:2], 2'b01, instr_i[9:7], 3'b110,
 000020                                2'b01, instr_i[9:7], {OPCODE_OP}};
                          end
        
%000000                   3'b011: begin
                            // c.and -> and rd', rd', rs2'
%000000                     instr_o = {7'b0, 2'b01, instr_i[4:2], 2'b01, instr_i[9:7], 3'b111,
%000000                                2'b01, instr_i[9:7], {OPCODE_OP}};
                          end
        
                          3'b100,
                          3'b101,
                          3'b110,
 000100                   3'b111: begin
                            // 100: c.subw
                            // 101: c.addw
 000100                     illegal_instr_o = 1'b1;
                          end
        
%000000                   default: begin
%000000                     illegal_instr_o = 1'b1;
                          end
                        endcase
                      end
        
%000000               default: begin
%000000                 illegal_instr_o = 1'b1;
                      end
                    endcase
                  end
        
 000080           3'b110, 3'b111: begin
                    // 0: c.beqz -> beq rs1', x0, imm
                    // 1: c.bnez -> bne rs1', x0, imm
 000080             instr_o = {{4 {instr_i[12]}}, instr_i[6:5], instr_i[2], 5'b0, 2'b01,
 000080                        instr_i[9:7], 2'b00, instr_i[13], instr_i[11:10], instr_i[4:3],
 000080                        instr_i[12], {OPCODE_BRANCH}};
                  end
        
%000000           default: begin
%000000             illegal_instr_o = 1'b1;
                  end
                endcase
              end
        
              // C2
              //
              // Register address checks for RV32E are performed in the regular instruction decoder.
              // If this check fails, an illegal instruction exception is triggered and the controller
              // writes the actual faulting instruction to mtval.
 000700       2'b10: begin
 000700         unique case (instr_i[15:13])
%000000           3'b000: begin
                    // c.slli -> slli rd, rd, shamt
                    // (c.ssli hints are translated into a slli hint)
%000000             instr_o = {7'b0, instr_i[6:2], instr_i[11:7], 3'b001, instr_i[11:7], {OPCODE_OP_IMM}};
%000000             if (instr_i[12] == 1'b1)  illegal_instr_o = 1'b1; // reserved for custom extensions
                  end
        
 000060           3'b010: begin
                    // c.lwsp -> lw rd, imm(x2)
 000060             instr_o = {4'b0, instr_i[3:2], instr_i[12], instr_i[6:4], 2'b00, 5'h02,
 000060                        3'b010, instr_i[11:7], OPCODE_LOAD};
 000060             if (instr_i[11:7] == 5'b0)  illegal_instr_o = 1'b1;
                  end
        
 000260           3'b100: begin
 000080             if (instr_i[12] == 1'b0) begin
%000000               if (instr_i[6:2] != 5'b0) begin
                        // c.mv -> add rd/rs1, x0, rs2
                        // (c.mv hints are translated into an add hint)
 000080                 instr_o = {7'b0, instr_i[6:2], 5'b0, 3'b0, instr_i[11:7], {OPCODE_OP}};
%000000               end else begin
                        // c.jr -> jalr x0, rd/rs1, 0
%000000                 instr_o = {12'b0, instr_i[11:7], 3'b0, 5'b0, {OPCODE_JALR}};
%000000                 if (instr_i[11:7] == 5'b0) illegal_instr_o = 1'b1;
                      end
 000180             end else begin
 000020               if (instr_i[6:2] != 5'b0) begin
                        // c.add -> add rd, rd, rs2
                        // (c.add hints are translated into an add hint)
 000020                 instr_o = {7'b0, instr_i[6:2], instr_i[11:7], 3'b0, instr_i[11:7], {OPCODE_OP}};
 000160               end else begin
 000040                 if (instr_i[11:7] == 5'b0) begin
                          // c.ebreak -> ebreak
 000120                   instr_o = {32'h00_10_00_73};
 000040                 end else begin
                          // c.jalr -> jalr x1, rs1, 0
 000040                   instr_o = {12'b0, instr_i[11:7], 3'b000, 5'b00001, {OPCODE_JALR}};
                        end
                      end
                    end
                  end
        
%000000           3'b110: begin
                    // c.swsp -> sw rs2, imm(x2)
%000000             instr_o = {4'b0, instr_i[8:7], instr_i[12], instr_i[6:2], 5'h02, 3'b010,
%000000                        instr_i[11:9], 2'b00, {OPCODE_STORE}};
                  end
        
                  3'b001,
                  3'b011,
                  3'b101,
 000380           3'b111: begin
 000380             illegal_instr_o = 1'b1;
                  end
        
%000000           default: begin
%000000             illegal_instr_o = 1'b1;
                  end
                endcase
              end
        
              // Incoming instruction is not compressed.
%000000       2'b11:;
        
%000000       default: begin
%000000         illegal_instr_o = 1'b1;
              end
            endcase
          end
        
          assign is_compressed_o = (instr_i[1:0] != 2'b11);
        
          ////////////////
          // Assertions //
          ////////////////
        
          // // The valid_i signal used to gate below assertions must be known.
          // `ASSERT_KNOWN(IbexInstrValidKnown, valid_i)
        
          // // Selectors must be known/valid.
          // `ASSERT(IbexInstrLSBsKnown, valid_i |->
          //     !$isunknown(instr_i[1:0]))
          // `ASSERT(IbexC0Known1, (valid_i && (instr_i[1:0] == 2'b00)) |->
          //     !$isunknown(instr_i[15:13]))
          // `ASSERT(IbexC1Known1, (valid_i && (instr_i[1:0] == 2'b01)) |->
          //     !$isunknown(instr_i[15:13]))
          // `ASSERT(IbexC1Known2, (valid_i && (instr_i[1:0] == 2'b01) && (instr_i[15:13] == 3'b100)) |->
          //     !$isunknown(instr_i[11:10]))
          // `ASSERT(IbexC1Known3, (valid_i &&
          //     (instr_i[1:0] == 2'b01) && (instr_i[15:13] == 3'b100) && (instr_i[11:10] == 2'b11)) |->
          //     !$isunknown({instr_i[12], instr_i[6:5]}))
          // `ASSERT(IbexC2Known1, (valid_i && (instr_i[1:0] == 2'b10)) |->
          //     !$isunknown(instr_i[15:13]))
        
        endmodule
        
