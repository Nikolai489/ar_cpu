 /* verilator lint_off MODDUP */
 /* verilator lint_off UNUSEDSIGNAL */
 module ibex_top_scramble import ibex_pkg::*; #(
    parameter bit          ICacheScramble   = 1'b0,
    parameter logic [SCRAMBLE_KEY_W-1:0]   RndCnstIbexKey   = RndCnstIbexKeyDefault,
    parameter logic [SCRAMBLE_NONCE_W-1:0] RndCnstIbexNonce = RndCnstIbexNonceDefault
 )(
   input  logic clk_i,
   input  logic rst_ni,
   input  logic[SCRAMBLE_KEY_W-1:0] scramble_key_i,
   input  logic[SCRAMBLE_NONCE_W-1:0] scramble_nonce_i,
   input  logic ic_scr_key_req,
   input  logic scramble_key_valid_i,
   output logic scramble_key_valid_d,
   output logic [SCRAMBLE_KEY_W-1:0]scramble_key_q,
   output logic [SCRAMBLE_NONCE_W-1:0]scramble_nonce_q,
   output logic scramble_req_q,
   output logic scramble_key_valid_q,
   output logic scramble_req_o,
   output logic scramble_req_d
 );
 /* verilator lint_on UNUSEDSIGNAL */
 /* verilator lint_off MODDUP */
 ///////////////////////////////
  // Scrambling Infrastructure //
  ///////////////////////////////

  if (ICacheScramble) begin : gen_scramble

    // SEC_CM: ICACHE.MEM.SCRAMBLE
    // Scramble key valid starts with OTP returning new valid key and stays high
    // until we request a new valid key.
    assign scramble_key_valid_d = scramble_req_q ? scramble_key_valid_i :
                                  ic_scr_key_req ? 1'b0                 :
                                                   scramble_key_valid_q;

    always_ff @(posedge clk_i or negedge rst_ni) begin
      if (!rst_ni) begin
        scramble_key_q       <= RndCnstIbexKey;
        scramble_nonce_q     <= RndCnstIbexNonce;
      end else if (scramble_key_valid_i) begin
        scramble_key_q       <= scramble_key_i;
        scramble_nonce_q     <= scramble_nonce_i;
      end
    end

    always_ff @(posedge clk_i or negedge rst_ni) begin
      if (!rst_ni) begin
        scramble_key_valid_q <= 1'b1;
        scramble_req_q       <= '0;
      end else begin
        scramble_key_valid_q <= scramble_key_valid_d;
        scramble_req_q       <= scramble_req_d;
      end
    end

  // Scramble key request starts with invalidate signal from ICache and stays high
  // until we got a valid key.
    assign scramble_req_d = scramble_req_q ? ~scramble_key_valid_i : ic_scr_key_req;
    assign scramble_req_o = scramble_req_q;

  end else begin : gen_noscramble

    logic unused_scramble_inputs = scramble_key_valid_i & (|scramble_key_i) & (|RndCnstIbexKey) &
                                   (|scramble_nonce_i) & (|RndCnstIbexNonce) & scramble_req_q &
                                   ic_scr_key_req & scramble_key_valid_d & scramble_req_d;

    assign scramble_req_d       = 1'b0;
    assign scramble_req_q       = 1'b0;
    assign scramble_req_o       = 1'b0;
    assign scramble_key_q       = '0;
    assign scramble_nonce_q     = '0;
    assign scramble_key_valid_q = 1'b1;
    assign scramble_key_valid_d = 1'b1;
  end

 endmodule
