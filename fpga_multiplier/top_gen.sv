// Generated by SandPiper(TM) 1.14-2022/10/10-beta-Pro from Redwood EDA, LLC.
// (Installed here: /usr/local/mono/sandpiper/distro.)
// Redwood EDA, LLC does not claim intellectual property rights to this file and provides no warranty regarding its correctness or quality.


// For silencing unused signal messages.
//`define BOGUS_USE(ignore)


//
// Signals declared top-level.
//
// For |mul$aa.
//logic [34:0] MUL_aa_a0,
logic [34:0] MUL_aa_a1,
             MUL_aa_a2,
             MUL_aa_a3,
             MUL_aa_a4,
             MUL_aa_a5,
             MUL_aa_a6,
             MUL_aa_a7;

// For |mul$bb.
//logic [34:0] MUL_bb_a0,
logic [34:0] MUL_bb_a1,
             MUL_bb_a2,
             MUL_bb_a3,
             MUL_bb_a4,
             MUL_bb_a5,
             MUL_bb_a6,
             MUL_bb_a7;

// For |mul$mm.
//logic [69:0] MUL_mm_a6;

// For |mul$mm1.
logic [16:0] MUL_mm1_a2,
             MUL_mm1_a3,
             MUL_mm1_a4,
             MUL_mm1_a5,
             MUL_mm1_a6;

// For |mul$mm2.
logic [52:17] MUL_mm2_a3,
              MUL_mm2_a4;

// For |mul$mm3.
logic [52:17] MUL_mm3_a4,
              MUL_mm3_a5;
logic [33:17] MUL_mm3_a6;

// For |mul$mm4.
logic [69:34] MUL_mm4_a5,
              MUL_mm4_a6;

// For |mul$mm_full.
logic [69:0] MUL_mm_full_a7;

// For |mul$pp1.
logic [33:0] MUL_pp1_a1,
             MUL_pp1_a2;
logic [33:17] MUL_pp1_a3;

// For |mul$pp2.
logic [51:17] MUL_pp2_a2,
              MUL_pp2_a3;

// For |mul$pp3.
logic [51:17] MUL_pp3_a3,
              MUL_pp3_a4;

// For |mul$pp4.
logic [69:34] MUL_pp4_a4,
              MUL_pp4_a5;

always_ff @(posedge clk) MUL_aa_a1[34:0] <= MUL_aa_a0[34:0];
always_ff @(posedge clk) MUL_aa_a2[34:0] <= MUL_aa_a1[34:0];
always_ff @(posedge clk) MUL_aa_a3[34:0] <= MUL_aa_a2[34:0];
always_ff @(posedge clk) MUL_aa_a4[34:0] <= MUL_aa_a3[34:0];
always_ff @(posedge clk) MUL_aa_a5[34:0] <= MUL_aa_a4[34:0];
always_ff @(posedge clk) MUL_aa_a6[34:0] <= MUL_aa_a5[34:0];
always_ff @(posedge clk) MUL_aa_a7[34:0] <= MUL_aa_a6[34:0];

// Staging of $bb.
always_ff @(posedge clk) MUL_bb_a1[34:0] <= MUL_bb_a0[34:0];
always_ff @(posedge clk) MUL_bb_a2[34:0] <= MUL_bb_a1[34:0];
always_ff @(posedge clk) MUL_bb_a3[34:0] <= MUL_bb_a2[34:0];
always_ff @(posedge clk) MUL_bb_a4[34:0] <= MUL_bb_a3[34:0];
always_ff @(posedge clk) MUL_bb_a5[34:0] <= MUL_bb_a4[34:0];
always_ff @(posedge clk) MUL_bb_a6[34:0] <= MUL_bb_a5[34:0];
always_ff @(posedge clk) MUL_bb_a7[34:0] <= MUL_bb_a6[34:0];

// Staging of $mm1.
always_ff @(posedge clk) MUL_mm1_a3[16:0] <= MUL_mm1_a2[16:0];
always_ff @(posedge clk) MUL_mm1_a4[16:0] <= MUL_mm1_a3[16:0];
always_ff @(posedge clk) MUL_mm1_a5[16:0] <= MUL_mm1_a4[16:0];
always_ff @(posedge clk) MUL_mm1_a6[16:0] <= MUL_mm1_a5[16:0];

// Staging of $mm2.
always_ff @(posedge clk) MUL_mm2_a4[52:17] <= MUL_mm2_a3[52:17];

// Staging of $mm3.
always_ff @(posedge clk) MUL_mm3_a5[52:17] <= MUL_mm3_a4[52:17];
always_ff @(posedge clk) MUL_mm3_a6[33:17] <= MUL_mm3_a5[33:17];

// Staging of $mm4.
always_ff @(posedge clk) MUL_mm4_a6[69:34] <= MUL_mm4_a5[69:34];

// Staging of $pp1.
always_ff @(posedge clk) MUL_pp1_a2[33:0] <= MUL_pp1_a1[33:0];
always_ff @(posedge clk) MUL_pp1_a3[33:17] <= MUL_pp1_a2[33:17];

// Staging of $pp2.
always_ff @(posedge clk) MUL_pp2_a3[51:17] <= MUL_pp2_a2[51:17];

// Staging of $pp3.
always_ff @(posedge clk) MUL_pp3_a4[51:17] <= MUL_pp3_a3[51:17];

// Staging of $pp4.
always_ff @(posedge clk)begin MUL_pp4_a5[69:34] <= MUL_pp4_a4[69:34]; if(!reset) done<=1'b1; end

//
// Debug Signals
//

/*   if (1) begin : DEBUG_SIGS


      //
      // Scope: |mul
      //
      if (1) begin : \|mul 
         logic [34:0] \/@0$aa ;
         assign \/@0$aa = MUL_aa_a0;
         logic [34:0] \/@0$bb ;
         assign \/@0$bb = MUL_bb_a0;
         logic [69:0] \/@6$mm ;
         assign \/@6$mm = MUL_mm_a6;
         logic [16:0] \/@2$mm1 ;
         assign \/@2$mm1 = MUL_mm1_a2;
         logic [52:17] \/@3$mm2 ;
         assign \/@3$mm2 = MUL_mm2_a3;
         logic [52:17] \/@4$mm3 ;
         assign \/@4$mm3 = MUL_mm3_a4;
         logic [69:34] \/@5$mm4 ;
         assign \/@5$mm4 = MUL_mm4_a5;
         logic [69:0] \/@7$mm_full ;
         assign \/@7$mm_full = MUL_mm_full_a7;
         logic [33:0] \/@1$pp1 ;
         assign \/@1$pp1 = MUL_pp1_a1;
         logic [51:17] \/@2$pp2 ;
         assign \/@2$pp2 = MUL_pp2_a2;
         logic [51:17] \/@3$pp3 ;
         assign \/@3$pp3 = MUL_pp3_a3;
         logic [69:34] \/@4$pp4 ;
         assign \/@4$pp4 = MUL_pp4_a4;
      end


   end*/