/* verilator lint_off MODDUP */
module ibex_core_clk_mgmt import ibex_pkg::*;#(
  parameter bit SecureIbex = 1'b0
)(
  input logic if_busy,
  input logic lsu_busy,
  input logic ctrl_busy,
  output ibex_mubi_t core_busy_o
);
/* verilator lint_on MODDUP */
if (SecureIbex) begin : g_core_busy_secure
  // For secure Ibex, the individual bits of core_busy_o are generated from different copies of
  // the various busy signal.
  localparam int unsigned NumBusySignals = 3;
  localparam int unsigned NumBusyBits = $bits(ibex_mubi_t) * NumBusySignals;
  logic [NumBusyBits-1:0] busy_bits_buf;
  prim_buf #(
    .Width(NumBusyBits)
  ) u_fetch_enable_buf (
    .in_i ({$bits(ibex_mubi_t){ctrl_busy, if_busy, lsu_busy}}),
    .out_o(busy_bits_buf)
  );

  // Set core_busy_o to IbexMuBiOn if even a single input is high.
  for (genvar i = 0; i < $bits(ibex_mubi_t); i++) begin : g_core_busy_bits
    if (IbexMuBiOn[i] == 1'b1) begin : g_pos
      assign core_busy_o[i] =  |busy_bits_buf[i*NumBusySignals +: NumBusySignals];
    end else begin : g_neg
      assign core_busy_o[i] = ~|busy_bits_buf[i*NumBusySignals +: NumBusySignals];
    end
  end
end else begin : g_core_busy_non_secure
  // For non secure Ibex, synthesis is allowed to optimize core_busy_o.
  assign core_busy_o = (ctrl_busy || if_busy || lsu_busy) ? IbexMuBiOn : IbexMuBiOff;
end

endmodule
