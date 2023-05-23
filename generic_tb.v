// A Verilog testbench equivalent to the Verilator C++ Makerchip testbench.
// To be consistent with AR library:
`timescale 1ps/10fs

module tb();
  reg clk, reset;
  reg [31:0] cyc_cnt;
  wire passed, failed;
  
  
  // Clock
  initial begin
    clk = 1;
    forever begin
      // #5000000
      #1000
      clk = !clk;
    end
  end
  
  // Reset
  initial begin
    reset = 1;
    cyc_cnt = 0;
    // #50000001
    #10000
    reset = 0;
  end
  
  // Cycle count
  always @(posedge clk) begin
    cyc_cnt <= reset ? 32'b1 : cyc_cnt + 32'b1;
  end
  

  // Instantiate user's top module.
  top top(.clk(clk), .reset(reset), .cyc_cnt(cyc_cnt), .passed(passed), .failed(failed));
  
  
  // End sim.
  always @(posedge clk) begin
     if (failed) begin
       $display("Simulation FAILED!!!");
       $fatal(1);
     end
     if (passed) begin
       $display("Simulation PASSED!!!");
       $finish;
     end
  end
  
`ifndef DUMPFILE
`define DUMPFILE iverilog.vcd
`endif
  // Dump VCD.
  initial begin
    $dumpfile(`DUMPFILE);
    $dumpvars;
    $dumpon;
  end
endmodule
