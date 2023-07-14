//run_sv2v
module dr32e_lsu_monitor #(
  parameter bit          MemECC       = 1'b0,
  parameter int unsigned MemDataWidth = MemECC ? 32 + 7 : 32
) (
  input  logic         clk_i,
  input  logic         rst_ni,

  // data interface
  input logic         data_req_o,
  input  logic         data_gnt_i,
  input  logic         data_rvalid_i,
  input  logic         data_bus_err_i,
  input  logic         data_pmp_err_i,

  input logic [31:0]             data_addr_o,
  input logic                    data_we_o,
  input logic [3:0]              data_be_o,
  input logic [MemDataWidth-1:0] data_wdata_o,
  input  logic [MemDataWidth-1:0] data_rdata_i,

  // signals to/from ID/EX stage
  input  logic         lsu_we_i,             // write enable                     -> from ID/EX
  input  logic [1:0]   lsu_type_i,           // data type: word, half word, byte -> from ID/EX
  input  logic [31:0]  lsu_wdata_i,          // data to write to memory          -> from ID/EX
  input  logic         lsu_sign_ext_i,       // sign extension                   -> from ID/EX

  input logic [31:0]  lsu_rdata_o,          // requested data                   -> to ID/EX
  input logic         lsu_rdata_valid_o,
  input  logic         lsu_req_i,            // data request                     -> from ID/EX

  input  logic [31:0]  adder_result_ex_i,    // address computed in ALU          -> from ID/EX

  input logic         addr_incr_req_o,      // request address increment for
                                              // misaligned accesses              -> to ID/EX
  input logic [31:0]  addr_last_o,          // address of last transaction      -> to controller
                                              // -> mtval
                                              // -> AGU for misaligned accesses

  input logic         lsu_req_done_o,       // Signals that data request is complete
                                              // (only need to await final data
                                              // response)                        -> to ID/EX

  input logic         lsu_resp_valid_o,     // LSU has response from transaction -> to ID/EX

  // exception signals
  input logic         load_err_o,
  input logic         load_resp_intg_err_o,
  input logic         store_err_o,
  input logic         store_resp_intg_err_o,

  input logic         busy_o,

  input logic         perf_load_o,
  input logic         perf_store_o
);
 
endmodule
