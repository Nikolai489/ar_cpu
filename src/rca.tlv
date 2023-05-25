\m4_TLV_version 1d: tl-x.org
\SV
   module top(input wire clk, input wire reset, input wire [31:0] cyc_cnt, output wire passed, output wire failed);

\TLV rca(#_width, $_in1, $_in2, $_out, /_top)
   `BOGUS_USE($sum)
   /slice[#_width-1:0]
      $in1 = /_top$_in1[#slice];
      $in2 = /_top$_in2[#slice];
      $carry_in = (#slice == 0) ? 1'b0 : /_top/slice[(#slice - 1) % #_width]$carry_out;
      $out = $in1 ^ $in2 ^ $carry_in;
      $carry_out = ($in1 + $in2 + $carry_in) > 2'b1;
   $_out[#_width-1:0] = /slice[*]$out;
   
\TLV
   m4_define(['m4_width'], 32)
   $addend1[m4_width-1:0] = *cyc_cnt[m4_width-1:0];
   $addend2[m4_width-1:0] = *cyc_cnt[m4_width-1:0] + 8'b1;
   m4+rca(m4_width, $addend1, $addend2, $sum, /top)
   
   // Assert these to end simulation (before Makerchip cycle limit).
   *passed = *cyc_cnt > 40;
   *failed = 1'b0;
\SV
   endmodule
