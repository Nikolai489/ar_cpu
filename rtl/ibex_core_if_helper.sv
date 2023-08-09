/* verilator lint_off MODDUP */
module ibex_core_if_helper import ibex_pkg::*;#(
  parameter SecureIbex = 1'b1
)(
input logic id_in_ready,
input logic instr_valid_id,
input ibex_mubi_t fetch_enable_i,
input logic instr_req_int,
input logic illegal_insn_id,
input logic data_req_out,
input logic lsu_load_err,
input logic lsu_store_err,
input logic pmp_req_err[3],
output logic unused_illegal_insn_id,
output logic perf_iside_wait,
output logic instr_req_gated,
output logic unused_fetch_enable,
output logic instr_exec,
output logic data_req_o,
output logic lsu_resp_err
);
  /* verilator lint_on MODDUP */
  // Core is waiting for the ISide when ID/EX stage is ready for a new instruction but none are
  // available
  assign perf_iside_wait = id_in_ready & ~instr_valid_id;

  // Multi-bit fetch enable used when SecureIbex == 1. When SecureIbex == 0 only use the bottom-bit
  // of fetch_enable_i. Ensure the multi-bit encoding has the bottom bit set for on and unset for
  // off so IbexMuBiOn/IbexMuBiOff can be used without needing to know the value of SecureIbex.
  `ASSERT_INIT(IbexMuBiSecureOnBottomBitSet,    IbexMuBiOn[0] == 1'b1)
  `ASSERT_INIT(IbexMuBiSecureOffBottomBitClear, IbexMuBiOff[0] == 1'b0)

  // fetch_enable_i can be used to stop the core fetching new instructions
  if (SecureIbex) begin : g_instr_req_gated_secure
  // For secure Ibex fetch_enable_i must be a specific multi-bit pattern to enable instruction
  // fetch
  // SEC_CM: FETCH.CTRL.LC_GATED
  assign instr_req_gated = instr_req_int & (fetch_enable_i == IbexMuBiOn);
  assign instr_exec      = fetch_enable_i == IbexMuBiOn;
  end else begin : g_instr_req_gated_non_secure
  // For non secure Ibex only the bottom bit of fetch enable is considered
  assign unused_fetch_enable = ^fetch_enable_i[$bits(ibex_mubi_t)-1:1];

  assign instr_req_gated = instr_req_int & fetch_enable_i[0];
  assign instr_exec      = fetch_enable_i[0];
  // for RVFI only
  assign unused_illegal_insn_id = illegal_insn_id;


    /////////////////////
    // Load/store unit //
    /////////////////////

  assign data_req_o   = data_req_out & ~pmp_req_err[PMP_D];
  assign lsu_resp_err = lsu_load_err | lsu_store_err;

end

endmodule
