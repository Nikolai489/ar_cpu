// Copyright lowRISC contributors.
// Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0


/**
 * Load Store Unit
 *
 * Load Store Unit, used to eliminate multiple access during processor stalls,
 * and to align bytes and halfwords.
 */

`include "prim_assert.sv"
`include "dv_fcov_macros.svh"
`include "ibex_load_store_unit_body.sv"
module ibex_load_store_unit #(
  parameter bit          MemECC       = 1'b0,
  parameter int unsigned MemDataWidth = MemECC ? 32 + 7 : 32
) (
  input  logic         clk_i,
  input  logic         rst_ni,

  // data interface
  output logic         data_req_o,
  input  logic         data_gnt_i,
  input  logic         data_rvalid_i,
  input  logic         data_bus_err_i,
  input  logic         data_pmp_err_i,

  output logic [31:0]             data_addr_o,
  output logic                    data_we_o,
  output logic [3:0]              data_be_o,
  output logic [MemDataWidth-1:0] data_wdata_o,
  input  logic [MemDataWidth-1:0] data_rdata_i,

  // signals to/from ID/EX stage
  input  logic         lsu_we_i,             // write enable                     -> from ID/EX
  input  logic [1:0]   lsu_type_i,           // data type: word, half word, byte -> from ID/EX
  input  logic [31:0]  lsu_wdata_i,          // data to write to memory          -> from ID/EX
  input  logic         lsu_sign_ext_i,       // sign extension                   -> from ID/EX

  output logic [31:0]  lsu_rdata_o,          // requested data                   -> to ID/EX
  output logic         lsu_rdata_valid_o,
  input  logic         lsu_req_i,            // data request                     -> from ID/EX

  input  logic [31:0]  adder_result_ex_i,    // address computed in ALU          -> from ID/EX

  output logic         addr_incr_req_o,      // request address increment for
                                              // misaligned accesses              -> to ID/EX
  output logic [31:0]  addr_last_o,          // address of last transaction      -> to controller
                                              // -> mtval
                                              // -> AGU for misaligned accesses

  output logic         lsu_req_done_o,       // Signals that data request is complete
                                              // (only need to await final data
                                              // response)                        -> to ID/EX

  output logic         lsu_resp_valid_o,     // LSU has response from transaction -> to ID/EX

  // exception signals
  output logic         load_err_o,
  output logic         load_resp_intg_err_o,
  output logic         store_err_o,
  output logic         store_resp_intg_err_o,

  output logic         busy_o,

  output logic         perf_load_o,
  output logic         perf_store_o
);

ibex_load_store_unit_body #(
  .MemECC(MemECC),
  .MemDataWidth(MemDataWidth)
)
load_store_unit_body(
.clk_i(clk_i),
.rst_ni(rst_ni),

  // data interface
.data_req_o(data_req_o),
.data_gnt_i(data_gnt_i),
.data_rvalid_i(data_rvalid_i),
.data_bus_err_i(data_bus_err_i),
.data_pmp_err_i(data_pmp_err_i),

.data_addr_o(data_addr_o),
.data_we_o(data_we_o),
.data_be_o(data_be_o),
.data_wdata_o(data_wdata_o),
.data_rdata_i(data_rdata_i),

  // signals to/from ID/EX stage
.lsu_we_i(lsu_we_i),             
.lsu_type_i(lsu_type_i),           
.lsu_wdata_i(lsu_wdata_i),         
.lsu_sign_ext_i(lsu_sign_ext_i),      

.lsu_rdata_o(lsu_rdata_o),          
.lsu_rdata_valid_o(lsu_rdata_valid_o),
.lsu_req_i(lsu_req_i),            
.adder_result_ex_i(adder_result_ex_i),    
.addr_incr_req_o(addr_incr_req_o),     
.addr_last_o(addr_last_o),        

.lsu_req_done_o(lsu_req_done_o),     

.lsu_resp_valid_o(lsu_resp_valid_o),     
.load_err_o(load_err_o),
.load_resp_intg_err_o(load_resp_intg_err_o),
.store_err_o(store_err_o),
.store_resp_intg_err_o(store_resp_intg_err_o),

.busy_o(busy_o),

.perf_load_o(perf_load_o),
.perf_store_o(perf_store_o)
);
endmodule
