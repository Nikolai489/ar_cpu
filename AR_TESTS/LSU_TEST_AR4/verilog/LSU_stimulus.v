//run_sv2v
module dr32e_lsu #(
  parameter bit          MemECC       = 1'b0,
  parameter int unsigned MemDataWidth = MemECC ? 32 + 7 : 32
) (
  output  logic         clk_i,
  output  logic         rst_ni,

  // data interface
  output  logic         data_gnt_i,
  output  logic         data_rvalid_i,
  output  logic         data_bus_err_i,
  output  logic         data_pmp_err_i,
  output  logic [MemDataWidth-1:0] data_rdata_i,

  // signals to/from ID/EX stage
  output  logic         lsu_we_i,             // write enable                     -> from ID/EX
  output  logic [1:0]   lsu_type_i,           // data type: word, half word, byte -> from ID/EX
  output  logic [31:0]  lsu_wdata_i,          // data to write to memory          -> from ID/EX
  output  logic         lsu_sign_ext_i,       // sign extension                   -> from ID/EX

  output  logic         lsu_req_i,            // data request                     -> from ID/EX

  output  logic [31:0]  adder_result_ex_i,    // address computed in ALU          -> from ID/EX

);
 
endmodule
