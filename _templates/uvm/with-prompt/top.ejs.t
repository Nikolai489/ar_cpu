---
to: dv/top/<%= name %>_tb_top.sv
---
`ifndef <%= h.changeCase.upper(name) %>_TB_TOP
`define <%= h.changeCase.upper(name) %>_TB_TOP

// * --------------------------
// * Include Files
// * --------------------------

import uvm_pkg::*;
import <%= name %>_test_list::*;

`include "uvm_macros.svh"
`include "<%= name %>_interface.sv"

module <%= name %>_tb_top;
  
  // * Clock generation
  // * Mutli level clocks can be instantiated and connected to interface
  bit clk;
  always #10 clk <= ~clk; // ! After 10 time step clk is toggled
                          // ! This clock is passed to DUT
  
  bit rst;
  // * ------------------------
  // * Instantiation
  // * ------------------------
  
  // * interface instantiate

  <%= name %>_interface #(params) <%= name %>_vif (
    // TODO: ports
  );
  
  // * dut instantiate
  
  <%= name %> #(params) dut (
    // TODO: ports
  );

  // * At start of the simulation, set the interface handle as uvm_config object
  // * so the handle can be retrieved using get() method. 
  // * run_test accepts the name as argument

  initial begin
    uvm_config_db #(virtual <%= name %>_interface)::set(null, "*", "<%= name %>_interface", <%= name %>_vif);
  end


  initial begin 
    run_test();  // ! if the run_test is blank
                 // ! need to be specified by +UVM_TESTNAME
  end
  
  initial begin 
    $dumpvars;			       // ! dumps variables
    $dumpfile("dump.vcd"); // ! generates waveform
  end
endmodule

`endif
