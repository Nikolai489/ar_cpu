module ibex_top_tracing_assigns (
    input  logic [31:0] rvfi_ext_mip,
    input  logic        rvfi_ext_nmi,
    input  logic        rvfi_ext_nmi_int,
    input  logic        rvfi_ext_debug_req,
    input  logic        rvfi_ext_debug_mode,
    input  logic        rvfi_ext_rf_wr_suppress,
    input  logic [63:0] rvfi_ext_mcycle,
    input  logic [31:0] rvfi_ext_mhpmcounters [10],
    input  logic [31:0] rvfi_ext_mhpmcountersh [10],
    input  logic        rvfi_ext_ic_scr_key_valid,
    input  logic        rvfi_ext_irq_valid,
    output logic [31:0] unused_perf_regs [10],
    output logic [31:0] unused_perf_regsh [10],
    output logic [31:0] unused_rvfi_ext_mip,
    output logic        unused_rvfi_ext_nmi,
    output logic        unused_rvfi_ext_nmi_int,
    output logic        unused_rvfi_ext_debug_req,
    output logic        unused_rvfi_ext_debug_mode,
    output logic        unused_rvfi_ext_rf_wr_suppress,
    output logic [63:0] unused_rvfi_ext_mcycle,
    output logic        unused_rvfi_ext_ic_scr_key_valid,
    output logic        unused_rvfi_ext_irq_valid
);
  // Tracer doesn't use these signals, though other modules may probe down into tracer to observe
  // them.
  // ibex_tracer relies on the signals from the RISC-V Formal Interface

`ifndef RVFI
$fatal("Fatal error: RVFI needs to be defined globally.");
`endif

assign unused_rvfi_ext_mip = rvfi_ext_mip;
assign unused_rvfi_ext_nmi = rvfi_ext_nmi;
assign unused_rvfi_ext_nmi_int = rvfi_ext_nmi_int;
assign unused_rvfi_ext_debug_req = rvfi_ext_debug_req;
assign unused_rvfi_ext_debug_mode = rvfi_ext_debug_mode;
assign unused_rvfi_ext_rf_wr_suppress = rvfi_ext_rf_wr_suppress;
assign unused_rvfi_ext_mcycle = rvfi_ext_mcycle;
assign unused_perf_regs = rvfi_ext_mhpmcounters;
assign unused_perf_regsh = rvfi_ext_mhpmcountersh;
assign unused_rvfi_ext_ic_scr_key_valid = rvfi_ext_ic_scr_key_valid;
assign unused_rvfi_ext_irq_valid = rvfi_ext_irq_valid;


endmodule
