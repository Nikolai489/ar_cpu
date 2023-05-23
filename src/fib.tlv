\m4_TLV_version 1d: tl-x.org
\SV
   // A Fibonacci Sequence example.
   // Each cycle we generate a new number in the sequence,
   // where each new value is the sum of the previous two.
   // (1, 1, 2, 3, 5, 8, ...)

   module top(input wire clk, input wire reset, input wire [31:0] cyc_cnt, output wire passed, output wire failed);
\TLV
   $reset = *reset;

   // =========================================
   // Fibonacci.
   $Val[15:0] <= $reset ? 1 : $Val + >>1$Val;
   // =========================================

   *passed = <<1$Val == 16'd21;
   *failed = *cyc_cnt == 32'd30;
\SV
   endmodule
