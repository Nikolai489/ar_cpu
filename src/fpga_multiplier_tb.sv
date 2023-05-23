`include "top.sv"

module tb();

logic [69:0] mm_full;
logic clk;
logic reset = 1'b1;
logic[34:0] a;
logic[34:0] b;
logic[69:0] mul;

top dut(
  .clk(clk),
  .reset(reset),
  .MUL_aa_a0(a),
  .MUL_bb_a0(b),
  .MUL_mm_a6(mul)
);

initial 
begin
  clk = 1'b0;
  forever #5 clk = ~clk;
end

initial
begin
  #10ns reset = 1'b0;
  a = $random();
  b = $random();
  mm_full = a*b;
  #10ns
  $display("expected value: %h \n",mm_full);
  $display("actual value: %h \n", mul);
  if(mm_full == mul)
    $display("actual and expected values MATCH!");
  else
    $display("actual and expected values MISMATCH!");
  $finish;
end


endmodule