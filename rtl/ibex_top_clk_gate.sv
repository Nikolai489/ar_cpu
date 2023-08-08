`include "prim_assert.sv"
/* verilator lint_off MODDUP */
module ibex_top_clk_gate import ibex_pkg::*; #(
    parameter bit          SecureIbex       = 1'b0
)(
    input logic clk_i,
    output logic clk,
    input logic rst_ni,
    input ibex_mubi_t core_busy_d,
    input logic debug_req_i,
    input logic irq_pending,
    input logic test_en_i,
    input logic irq_nm_i,
    output logic core_sleep_o
);
logic                        clock_en;
ibex_mubi_t                  core_busy_q;
/* verilator lint_on MODDUP */
  /////////////////////
  // Main clock gate //
  /////////////////////

if (SecureIbex) begin : g_clock_en_secure
    // For secure Ibex core_busy_q must be a specific multi-bit pattern to enable the clock.
    prim_flop #(
      .Width($bits(ibex_mubi_t)),
      .ResetValue(IbexMuBiOff)
    ) u_prim_core_busy_flop (
      .clk_i (clk_i),
      .rst_ni(rst_ni),
      .d_i   (core_busy_d),
      .q_o   (core_busy_q)
    );
    assign clock_en = (core_busy_q != IbexMuBiOff) | debug_req_i | irq_pending | irq_nm_i;
  end else begin : g_clock_en_non_secure
    // For non secure Ibex only the bottom bit of core_busy_q is considered. Other FFs can be
    // optimized away during synthesis.
    always_ff @(posedge clk_i or negedge rst_ni) begin
      if (!rst_ni) begin
        core_busy_q <= IbexMuBiOff;
      end else begin
        core_busy_q <= core_busy_d;
      end
    end
    assign clock_en = core_busy_q[0] | debug_req_i | irq_pending | irq_nm_i;

    logic unused_core_busy;
    assign unused_core_busy = ^core_busy_q[$bits(ibex_mubi_t)-1:1];
  end

  assign core_sleep_o = ~clock_en;

  prim_clock_gating core_clock_gate_i (
    .clk_i    (clk_i),
    .en_i     (clock_en),
    .test_en_i(test_en_i),
    .clk_o    (clk)
  );

endmodule
