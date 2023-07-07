//      // verilator_coverage annotation
        // Copyright lowRISC contributors.
        // Licensed under the Apache License, Version 2.0, see LICENSE for details.
        // SPDX-License-Identifier: Apache-2.0
        
        /**
         * Branch Predictor
         *
         * This implements static branch prediction. It takes an instruction and its PC and determines if
         * it's a branch or a jump and calculates its target. For jumps it will always predict taken. For
         * branches it will predict taken if the PC offset is negative.
         *
         * This handles both compressed and uncompressed instructions. Compressed instructions must be in
         * the lower 16-bits of instr.
         *
         * The predictor is entirely combinational but takes clk/rst_n signals for use by assertions.
         */
        
        //`include "prim_assert.sv"
        `include "dr32e_pkg.sv"
        module dr32e_branch_predict (
 100001   input  logic clk_i,
%000000   input  logic rst_ni,
        
          // Instruction from fetch stage
 002361   input  logic [31:0] fetch_rdata_i,
 000039   input  logic [31:0] fetch_pc_i,
%000001   input  logic        fetch_valid_i,
        
          // Prediction for supplied instruction
 001505   output logic        predict_branch_taken_o,
 002130   output logic [31:0] predict_branch_pc_o
        );
          import dr32e_pkg::*;
        
 000436   logic [31:0] imm_j_type;
 001568   logic [31:0] imm_b_type;
 000436   logic [31:0] imm_cj_type;
 000436   logic [31:0] imm_cb_type;
        
 002093   logic [31:0] branch_imm;
        
 002361   logic [31:0] instr;
        
 000797   logic instr_j;
 002498   logic instr_b;
 000882   logic instr_cj;
 002010   logic instr_cb;
        
%000000   logic instr_b_taken;
        
          // Provide short internal name for fetch_rdata_i due to reduce line wrapping
          assign instr = fetch_rdata_i;
        
          // Extract and sign-extend to 32-bit the various immediates that may be used to calculate the
          // target
        
          // Uncompressed immediates
          assign imm_j_type = { {12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0 };
          assign imm_b_type = { {19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0 };
        
          // Compressed immediates
          assign imm_cj_type = { {20{instr[12]}}, instr[12], instr[8], instr[10:9], instr[6], instr[7],
            instr[2], instr[11], instr[5:3], 1'b0 };
        
          assign imm_cb_type = { {23{instr[12]}}, instr[12], instr[6:5], instr[2], instr[11:10],
            instr[4:3], 1'b0};
        
          // Determine if the instruction is a branch or a jump
        
          // Uncompressed branch/jump
          assign instr_b = opcode_e'(instr[6:0]) == OPCODE_BRANCH;
          assign instr_j = opcode_e'(instr[6:0]) == OPCODE_JAL;
        
          // Compressed branch/jump
          assign instr_cb = (instr[1:0] == 2'b01) & ((instr[15:13] == 3'b110) | (instr[15:13] == 3'b111));
          assign instr_cj = (instr[1:0] == 2'b01) & ((instr[15:13] == 3'b101) | (instr[15:13] == 3'b001));
        
          // Select out the branch offset for target calculation based upon the instruction type
%000001   always_comb begin
%000001     branch_imm = imm_b_type;
        
%000001     unique case (1'b1)
 008681       instr_j  : branch_imm = imm_j_type;
 053840       instr_b  : branch_imm = imm_b_type;
 009580       instr_cj : branch_imm = imm_cj_type;
 027860       instr_cb : branch_imm = imm_cb_type;
 000041       default : ;
            endcase
          end
        
          //`ASSERT_IF(BranchInsTypeOneHot, $onehot0({instr_j, instr_b, instr_cj, instr_cb}), fetch_valid_i)
        
          // Determine branch prediction, taken if offset is negative
          assign instr_b_taken = (instr_b & imm_b_type[31]) | (instr_cb & imm_cb_type[31]);
        
          // Always predict jumps taken otherwise take prediction from `instr_b_taken`
          assign predict_branch_taken_o = fetch_valid_i & (instr_j | instr_cj | instr_b_taken);
          // Calculate target
          assign predict_branch_pc_o    = fetch_pc_i + branch_imm;
        endmodule
        
