//run_sv2v

module ibex_register_file_ff #(
  parameter bit                   RV32E             = 0,
  parameter int unsigned          DataWidth         = 32,
  parameter bit                   DummyInstructions = 0,
  parameter bit                   WrenCheck         = 0,
  parameter logic [DataWidth-1:0] WordZeroVal       = '0
) (
  // Clock and Reset
  output  logic                 clk_i,
  output  logic                 rst_ni,

  output  logic                 test_en_i,
  output  logic                 dummy_instr_id_i,
  output  logic                 dummy_instr_wb_i,

  //Read port R1
  output  logic [4:0]           raddr_a_i,

  //Read port R2
  output  logic [4:0]           raddr_b_i,

  // Write port W1
  output  logic [4:0]           waddr_a_i,
  output  logic [DataWidth-1:0] wdata_a_i,
  output  logic                 we_a_i,

);
 
endmodule
