`inxlude "ibex_counter_body.sv"
module ibex_counter #(
  parameter int CounterWidth = 32,
  // When set `counter_val_upd_o` provides an incremented version of the counter value, otherwise
  // the output is hard-wired to 0. This is required to allow Xilinx DSP inference to work
  // correctly. When `ProvideValUpd` is set no DSPs are inferred.
  parameter bit ProvideValUpd = 0
) (
  input  logic        clk_i,
  input  logic        rst_ni,

  input  logic        counter_inc_i,
  input  logic        counterh_we_i,
  input  logic        counter_we_i,
  input  logic [31:0] counter_val_i,
  output logic [63:0] counter_val_o,
  output logic [63:0] counter_val_upd_o
);

ibex_counter_body #(
  .CounterWidth(CounterWidth),
  .ProvideValUpd(ProvideValUpd)
)
counter_body (
  .clk_i(clk_i),
  .rst_ni(rst_ni),

  .counter_inc_i(counter_inc_i),
  .counterh_we_i(counterh_we_i),
  .counter_we_i(counter_we_i),
  .counter_val_i(counter_val_i),
  .counter_val_o(counter_val_o),
  .counter_val_upd_o(counter_val_upd_o)
);

endmodule
