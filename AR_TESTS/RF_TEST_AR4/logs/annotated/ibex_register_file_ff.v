//      // verilator_coverage annotation
        // Copyright lowRISC contributors.
        // Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
        // Licensed under the Apache License, Version 2.0, see LICENSE for details.
        // SPDX-License-Identifier: Apache-2.0
        
        /**
         * RISC-V register file
         *
         * Register file with 31 or 15x 32 bit wide registers. Register 0 is fixed to 0.
         * This register file is based on flip flops. Use this register file when
         * targeting FPGA synthesis or Verilator simulation.
         */
        
        module ibex_register_file_ff #(
          parameter bit                   RV32E             = 0,
          parameter int unsigned          DataWidth         = 32,
          parameter bit                   DummyInstructions = 0,
          parameter bit                   WrenCheck         = 0,
          parameter logic [DataWidth-1:0] WordZeroVal       = '0
        ) (
          // Clock and Reset
 002000   input  logic                 clk_i,
%000001   input  logic                 rst_ni,
        
%000000   input  logic                 test_en_i,
%000000   input  logic                 dummy_instr_id_i,
%000000   input  logic                 dummy_instr_wb_i,
        
          //Read port R1
 000025   input  logic [4:0]           raddr_a_i,
%000000   output logic [DataWidth-1:0] rdata_a_o,
        
          //Read port R2
 000028   input  logic [4:0]           raddr_b_i,
%000000   output logic [DataWidth-1:0] rdata_b_o,
        
        
          // Write port W1
 000024   input  logic [4:0]           waddr_a_i,
%000000   input  logic [DataWidth-1:0] wdata_a_i,
 000048   input  logic                 we_a_i,
        
          // This indicates whether spurious WE are detected.
%000000   output logic                 err_o
        );
        
          localparam int unsigned ADDR_WIDTH = RV32E ? 4 : 5;
          localparam int unsigned NUM_WORDS  = 2**ADDR_WIDTH;
        
          logic [DataWidth-1:0] rf_reg   [NUM_WORDS] /*verilator public_flat */;
%000000   logic [NUM_WORDS-1:0] we_a_dec;
        
%000001   always_comb begin : we_a_decoder
%000001     for (int unsigned i = 0; i < NUM_WORDS; i++) begin
 000032       we_a_dec[i] = (waddr_a_i == 5'(i)) ? we_a_i : 1'b0;
            end
          end
        
          // SEC_CM: DATA_REG_SW.GLITCH_DETECT
          // This checks for spurious WE strobes on the regfile.
          if (WrenCheck) begin : gen_wren_check
            // Buffer the decoded write enable bits so that the checker
            // is not optimized into the address decoding logic.
            logic [NUM_WORDS-1:0] we_a_dec_buf;
            prim_buf #(
              .Width(NUM_WORDS)
            ) u_prim_buf (
              .in_i(we_a_dec),
              .out_o(we_a_dec_buf)
            );
        
            prim_onehot_check #(
              .AddrWidth(ADDR_WIDTH),
              .AddrCheck(1),
              .EnableCheck(1)
            ) u_prim_onehot_check (
              .clk_i,
              .rst_ni,
              .oh_i(we_a_dec_buf),
              .addr_i(waddr_a_i),
              .en_i(we_a_i),
              .err_o
            );
          end else begin : gen_no_wren_check
            logic unused_strobe;
            assign unused_strobe = we_a_dec[0]; // this is never read from in this case
            assign err_o = 1'b0;
          end
        
          // No flops for R0 as it's hard-wired to 0
          for (genvar i = 1; i < NUM_WORDS; i++) begin : g_rf_flops
            logic [DataWidth-1:0] rf_reg_q;
        
 030969     always_ff @(posedge clk_i or negedge rst_ni) begin
%000000       if (!rst_ni) begin
%000000         rf_reg_q <= WordZeroVal;
 000329       end else if (we_a_dec[i]) begin
 000329         rf_reg_q <= wdata_a_i;
              end
            end
        
            assign rf_reg[i] = rf_reg_q;
          end
        
          // With dummy instructions enabled, R0 behaves as a real register but will always return 0 for
          // real instructions.
          if (DummyInstructions) begin : g_dummy_r0
            // SEC_CM: CTRL_FLOW.UNPREDICTABLE
            logic                 we_r0_dummy;
            logic [DataWidth-1:0] rf_r0_q;
        
            // Write enable for dummy R0 register (waddr_a_i will always be 0 for dummy instructions)
            assign we_r0_dummy = we_a_i & dummy_instr_wb_i;
        
            always_ff @(posedge clk_i or negedge rst_ni) begin
              if (!rst_ni) begin
                rf_r0_q <= WordZeroVal;
              end else if (we_r0_dummy) begin
                rf_r0_q <= wdata_a_i;
              end
            end
        
            // Output the dummy data for dummy instructions, otherwise R0 reads as zero
            assign rf_reg[0] = dummy_instr_id_i ? rf_r0_q : WordZeroVal;
        
          end else begin : g_normal_r0
            logic unused_dummy_instr;
            assign unused_dummy_instr = dummy_instr_id_i ^ dummy_instr_wb_i;
        
            // R0 is nil
            assign rf_reg[0] = WordZeroVal;
          end
        
          assign rdata_a_o = rf_reg[raddr_a_i];
          assign rdata_b_o = rf_reg[raddr_b_i];
        
          // Signal not used in FF register file
%000000   logic unused_test_en;
          assign unused_test_en = test_en_i;
        
        endmodule
        
