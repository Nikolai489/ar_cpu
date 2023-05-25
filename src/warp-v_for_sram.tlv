\m4_TLV_version 1d: tl-x.org
\SV
   m4_def(
      IMEM_STYLE, EXTERN,
      DMEM_STYLE, EXTERN,
      VIZ, 1)
// To be consistent with AR library:
`timescale 1ps/10fs

   m4_include_url(['https://raw.githubusercontent.com/stevehoover/warp-v/4e47374fe0a1eadef2de4841d11dffec4e11b7f5/warp-v.tlv'])


   module cpu(input wire clk, input wire reset, input wire [31:0] cyc_cnt, output wire passed, output wire failed,
              output wire [31:2] imem_addr,
              input wire [31:0] imem_data,
              output wire [31:0] dmem_addrb,
              output wire dmem_enb,  // Active low enable
              output wire [31:0] dmem_addra,
              output wire [31:0] dmem_dina,
              output wire [31:0] dmem_dinb,
              output wire [3:0] dmem_wea,
              output wire [3:0] dmem_web,
              output wire dmem_wea0, // Active low write
              output wire dmem_ena,  // Active low enable
              input wire [31:0] dmem_doutb);
\TLV
      
   m4+warpv_top()
   
   // See if test passes.
   // (Same as m4+cnt10_makerchip_tb().)
   |fetch
      /instr
         //@M4_FETCH_STAGE
         //   *passed = $Pc[2];
         @M4_REG_WR_STAGE
            // Assert these to end simulation (before Makerchip cycle limit).
            $ReachedEnd <= $reset ? 1'b0 : $ReachedEnd || ($jump && $commit);  // End once a jump is committed.
            $Reg11Became13 <= $reset ? 1'b0 : $Reg11Became13 || ($ReachedEnd && /regs[11]$value == M4_WORD_CNT'd13);
            /*
            $regs11_value[31:0] = /regs[11]$value;
            $regs12_value[31:0] = /regs[12]$value;
            $regs13_value[31:0] = /regs[13]$value;
            $regs14_value[31:0] = /regs[14]$value;
            */
            
            $passed = ! $reset && $ReachedEnd && $Reg11Became13;
            $failed = ! $reset && (*cyc_cnt > 200 || (*cyc_cnt > 5 && $commit && $illegal));
         @M4_MEM_WR_STAGE
            *passed = $passed;
            *failed = $failed;
\SV
   endmodule
