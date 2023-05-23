`include "variables.v"

`timescale 1ps/10fs
`celldefine
module arflop (data, set, reset, enable, clock, sync_toggle, sync_hold, invalid, high_impedance, out);
input data, set, reset, enable, clock, sync_toggle, sync_hold, invalid, high_impedance;
output out;
parameter set_reset_action = 1 ;
reg out_reg = 0;
wire data_in = (set & reset & set_reset_action == 6 ? out_reg : (sync_toggle ? !out_reg : (sync_hold ? out_reg : data)));
wire #(1) reset_in = (set & reset ? (set_reset_action == 1 ? 1'b0 : (set_reset_action == 2 ? 1'b1 : (set_reset_action == 4 ? 1'bx : (set_reset_action == 5 ? 1'bz : 1'b0)))): reset);
wire #(1) set_in = (set & reset ? (set_reset_action == 1 ? 1'b1 : (set_reset_action == 2 ? 1'b0 : (set_reset_action == 4 ? 1'bx : (set_reset_action == 5 ? 1'bz : 1'b0)))): set);
wire invalid_in = invalid | (set & reset & set_reset_action == 4);

assign out = (invalid_in ? 1'bx : (high_impedance ? 1'bz : out_reg) );
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;
parameter x_state = 1'bx;
parameter z_state = 1'bz;
always @(posedge clock, posedge set_in, posedge reset_in) 
begin

    if(reset_in === hi_state)
    begin
        out_reg <= lo_state;
    end
    else if(set_in === hi_state)
    begin
        out_reg <= hi_state;
    end
    else if(enable === hi_state)
    begin
        out_reg <= data_in;
    end
end
endmodule
`endcelldefine

`celldefine
module arlatch (data, set, reset, enable, sync_toggle, sync_hold, invalid, high_impedance, out);
input data, set, reset, enable, sync_toggle, sync_hold, invalid, high_impedance;
output out;
parameter set_reset_action = 1 ;
reg out_reg = 0;
wire #(10) toggle_out = !out_reg;
wire #(1) data_in = (set & reset ? out_reg : (sync_toggle ? toggle_out : (sync_hold ? out_reg : data)));
wire #(1) reset_in = (set & reset ? (set_reset_action == 1 ? 1'b0 : (set_reset_action == 2 ? 1'b1 : (set_reset_action == 4 ? 1'bx : (set_reset_action == 5 ? 1'bz : 1'b0)))): reset);
wire #(1) set_in = (set & reset ? (set_reset_action == 1 ? 1'b1 : (set_reset_action == 2 ? 1'b0 : (set_reset_action == 4 ? 1'bx : (set_reset_action == 5 ? 1'bz : 1'b0)))): set);
wire invalid_in = invalid | (set & reset & set_reset_action == 4);

assign out = (invalid_in ? 1'bx : (high_impedance ? 1'bz : out_reg) );
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;
parameter x_state = 1'bx;
parameter z_state = 1'bz;
always @(enable, set_in, reset_in, data_in) 
begin

    if(reset_in === hi_state)
    begin
        out_reg <= lo_state;
    end
    else if(set_in === hi_state)
    begin
        out_reg <= hi_state;
    end
    else if(enable === hi_state)
    begin
        out_reg <= data_in;
    end
end
endmodule
`endcelldefine
//START AND2_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module AND2_X2X2_90x128y6p (a, b, y, dvdd, dvss, sub);
`else
module AND2_X2X2_90x128y6p (a, b, y);
`endif
`else
`ifdef POWER_AWARE
module AND2_X2X2_90x128y6p (a, b, y, dvdd, dvss, sub);
`else
module AND2_X2X2_90x128y6p (a, b, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`AND2_X2X2_Y_A * delay_mult) a_y = a;
wire #(`AND2_X2X2_Y_B * delay_mult) b_y = b;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = a_y&b_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END AND2_X2X2


//START AND2_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module AND2_X4X4_90x128y6p (a, b, y, dvdd, dvss, sub);
`else
module AND2_X4X4_90x128y6p (a, b, y);
`endif
`else
`ifdef POWER_AWARE
module AND2_X4X4_90x128y6p (a, b, y, dvdd, dvss, sub);
`else
module AND2_X4X4_90x128y6p (a, b, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`AND2_X4X4_Y_A * delay_mult) a_y = a;
wire #(`AND2_X4X4_Y_B * delay_mult) b_y = b;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = a_y&b_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END AND2_X4X4


//START AND3_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module AND3_X2X2_90x128y6p (a, b, c, y, dvdd, dvss, sub, tiehi, tielo);
`else
module AND3_X2X2_90x128y6p (a, b, c, y);
`endif
`else
`ifdef POWER_AWARE
module AND3_X2X2_90x128y6p (a, b, c, y, dvdd, dvss, sub, tiehi, tielo);
`else
module AND3_X2X2_90x128y6p (a, b, c, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b, c ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`AND3_X2X2_Y_A * delay_mult) a_y = a;
wire #(`AND3_X2X2_Y_B * delay_mult) b_y = b;
wire #(`AND3_X2X2_Y_C * delay_mult) c_y = c;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = a_y&b_y&c_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END AND3_X2X2


//START AND3_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module AND3_X4X4_90x128y6p (a, b, c, y, dvdd, dvss, sub, tiehi, tielo);
`else
module AND3_X4X4_90x128y6p (a, b, c, y);
`endif
`else
`ifdef POWER_AWARE
module AND3_X4X4_90x128y6p (a, b, c, y, dvdd, dvss, sub, tiehi, tielo);
`else
module AND3_X4X4_90x128y6p (a, b, c, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b, c ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`AND3_X4X4_Y_A * delay_mult) a_y = a;
wire #(`AND3_X4X4_Y_B * delay_mult) b_y = b;
wire #(`AND3_X4X4_Y_C * delay_mult) c_y = c;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = a_y&b_y&c_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END AND3_X4X4


//START AND4_X1X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module AND4_X1X1_90x128y6p (a, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module AND4_X1X1_90x128y6p (a, b, c, d, y);
`endif
`else
`ifdef POWER_AWARE
module AND4_X1X1_90x128y6p (a, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module AND4_X1X1_90x128y6p (a, b, c, d, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b, c, d ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`AND4_X1X1_Y_A * delay_mult) a_y = a;
wire #(`AND4_X1X1_Y_B * delay_mult) b_y = b;
wire #(`AND4_X1X1_Y_C * delay_mult) c_y = c;
wire #(`AND4_X1X1_Y_D * delay_mult) d_y = d;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = a_y&b_y&c_y&d_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END AND4_X1X1


//START AND4_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module AND4_X2X2_90x128y6p (a, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module AND4_X2X2_90x128y6p (a, b, c, d, y);
`endif
`else
`ifdef POWER_AWARE
module AND4_X2X2_90x128y6p (a, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module AND4_X2X2_90x128y6p (a, b, c, d, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b, c, d ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`AND4_X2X2_Y_A * delay_mult) a_y = a;
wire #(`AND4_X2X2_Y_B * delay_mult) b_y = b;
wire #(`AND4_X2X2_Y_C * delay_mult) c_y = c;
wire #(`AND4_X2X2_Y_D * delay_mult) d_y = d;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = a_y&b_y&c_y&d_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END AND4_X2X2


//START AND4_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module AND4_X4X4_90x128y6p (a, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module AND4_X4X4_90x128y6p (a, b, c, d, y);
`endif
`else
`ifdef POWER_AWARE
module AND4_X4X4_90x128y6p (a, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module AND4_X4X4_90x128y6p (a, b, c, d, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b, c, d ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`AND4_X4X4_Y_A * delay_mult) a_y = a;
wire #(`AND4_X4X4_Y_B * delay_mult) b_y = b;
wire #(`AND4_X4X4_Y_C * delay_mult) c_y = c;
wire #(`AND4_X4X4_Y_D * delay_mult) d_y = d;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = a_y&b_y&c_y&d_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END AND4_X4X4


//START AOI211_X0X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module AOI211_X0X2_90x128y6p (a0, a1, b0, c0, y, dvdd, dvss, sub);
`else
module AOI211_X0X2_90x128y6p (a0, a1, b0, c0, y);
`endif
`else
`ifdef POWER_AWARE
module AOI211_X0X2_90x128y6p (a0, a1, b0, c0, y, dvdd, dvss, sub);
`else
module AOI211_X0X2_90x128y6p (a0, a1, b0, c0, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, b0, c0 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`AOI211_X0X2_Y_A0 * delay_mult) a0_y = a0;
wire #(`AOI211_X0X2_Y_A1 * delay_mult) a1_y = a1;
wire #(`AOI211_X0X2_Y_B0 * delay_mult) b0_y = b0;
wire #(`AOI211_X0X2_Y_C0 * delay_mult) c0_y = c0;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a0_y|!a1_y) & (!b0_y) & (!c0_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END AOI211_X0X2


//START AOI21_X0X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module AOI21_X0X0_90x128y6p (a0, a1, b0, y, dvdd, dvss, sub);
`else
module AOI21_X0X0_90x128y6p (a0, a1, b0, y);
`endif
`else
`ifdef POWER_AWARE
module AOI21_X0X0_90x128y6p (a0, a1, b0, y, dvdd, dvss, sub);
`else
module AOI21_X0X0_90x128y6p (a0, a1, b0, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, b0 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`AOI21_X0X0_Y_A0 * delay_mult) a0_y = a0;
wire #(`AOI21_X0X0_Y_A1 * delay_mult) a1_y = a1;
wire #(`AOI21_X0X0_Y_B0 * delay_mult) b0_y = b0;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a0_y|!a1_y) & (!b0_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END AOI21_X0X0


//START AOI221_X0X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module AOI221_X0X2_90x128y6p (a0, a1, b0, b1, c0, y, dvdd, dvss, sub, tielo);
`else
module AOI221_X0X2_90x128y6p (a0, a1, b0, b1, c0, y);
`endif
`else
`ifdef POWER_AWARE
module AOI221_X0X2_90x128y6p (a0, a1, b0, b1, c0, y, dvdd, dvss, sub, tielo);
`else
module AOI221_X0X2_90x128y6p (a0, a1, b0, b1, c0, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, b0, b1, c0 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd;
`else
supply0 dvss, sub, tielo;
supply1 dvdd;
`endif

wire #(`AOI221_X0X2_Y_A0 * delay_mult) a0_y = a0;
wire #(`AOI221_X0X2_Y_A1 * delay_mult) a1_y = a1;
wire #(`AOI221_X0X2_Y_B0 * delay_mult) b0_y = b0;
wire #(`AOI221_X0X2_Y_B1 * delay_mult) b1_y = b1;
wire #(`AOI221_X0X2_Y_C0 * delay_mult) c0_y = c0;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a0_y|!a1_y) & (!b0_y|!b1_y) & (!c0_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END AOI221_X0X2


//START AOI222_X0X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module AOI222_X0X1_90x128y6p (a0, a1, b0, b1, c0, c1, y, dvdd, dvss, sub, tiehi, tielo);
`else
module AOI222_X0X1_90x128y6p (a0, a1, b0, b1, c0, c1, y);
`endif
`else
`ifdef POWER_AWARE
module AOI222_X0X1_90x128y6p (a0, a1, b0, b1, c0, c1, y, dvdd, dvss, sub, tiehi, tielo);
`else
module AOI222_X0X1_90x128y6p (a0, a1, b0, b1, c0, c1, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, b0, b1, c0, c1 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`AOI222_X0X1_Y_A0 * delay_mult) a0_y = a0;
wire #(`AOI222_X0X1_Y_A1 * delay_mult) a1_y = a1;
wire #(`AOI222_X0X1_Y_B0 * delay_mult) b0_y = b0;
wire #(`AOI222_X0X1_Y_B1 * delay_mult) b1_y = b1;
wire #(`AOI222_X0X1_Y_C0 * delay_mult) c0_y = c0;
wire #(`AOI222_X0X1_Y_C1 * delay_mult) c1_y = c1;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a0_y|!a1_y) & (!b0_y|!b1_y) & (!c0_y|!c1_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END AOI222_X0X1


//START AOI22_X0X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module AOI22_X0X0_90x128y6p (a0, a1, b0, b1, y, dvdd, dvss, sub);
`else
module AOI22_X0X0_90x128y6p (a0, a1, b0, b1, y);
`endif
`else
`ifdef POWER_AWARE
module AOI22_X0X0_90x128y6p (a0, a1, b0, b1, y, dvdd, dvss, sub);
`else
module AOI22_X0X0_90x128y6p (a0, a1, b0, b1, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, b0, b1 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`AOI22_X0X0_Y_A0 * delay_mult) a0_y = a0;
wire #(`AOI22_X0X0_Y_A1 * delay_mult) a1_y = a1;
wire #(`AOI22_X0X0_Y_B0 * delay_mult) b0_y = b0;
wire #(`AOI22_X0X0_Y_B1 * delay_mult) b1_y = b1;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a0_y|!a1_y) & (!b0_y|!b1_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END AOI22_X0X0


//START AOI2NN1_X1X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module AOI2NN1_X1X1_90x128y6p (a0n, a1n, b0, y, dvdd, dvss, sub);
`else
module AOI2NN1_X1X1_90x128y6p (a0n, a1n, b0, y);
`endif
`else
`ifdef POWER_AWARE
module AOI2NN1_X1X1_90x128y6p (a0n, a1n, b0, y, dvdd, dvss, sub);
`else
module AOI2NN1_X1X1_90x128y6p (a0n, a1n, b0, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0n, a1n, b0 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`AOI2NN1_X1X1_Y_A0N * delay_mult) a0n_y = a0n;
wire #(`AOI2NN1_X1X1_Y_A1N * delay_mult) a1n_y = a1n;
wire #(`AOI2NN1_X1X1_Y_B0 * delay_mult) b0_y = b0;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (a0n_y|a1n_y) & (!b0_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END AOI2NN1_X1X1


//START AOI2NN2_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module AOI2NN2_X2X2_90x128y6p (a0n, a1n, b0, b1, y, dvdd, dvss, sub);
`else
module AOI2NN2_X2X2_90x128y6p (a0n, a1n, b0, b1, y);
`endif
`else
`ifdef POWER_AWARE
module AOI2NN2_X2X2_90x128y6p (a0n, a1n, b0, b1, y, dvdd, dvss, sub);
`else
module AOI2NN2_X2X2_90x128y6p (a0n, a1n, b0, b1, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0n, a1n, b0, b1 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`AOI2NN2_X2X2_Y_A0N * delay_mult) a0n_y = a0n;
wire #(`AOI2NN2_X2X2_Y_A1N * delay_mult) a1n_y = a1n;
wire #(`AOI2NN2_X2X2_Y_B0 * delay_mult) b0_y = b0;
wire #(`AOI2NN2_X2X2_Y_B1 * delay_mult) b1_y = b1;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (a0n_y|a1n_y) & (!b0_y|!b1_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END AOI2NN2_X2X2


//START AOI31_X1X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module AOI31_X1X0_90x128y6p (a0, a1, a2, b0, y, dvdd, dvss, sub);
`else
module AOI31_X1X0_90x128y6p (a0, a1, a2, b0, y);
`endif
`else
`ifdef POWER_AWARE
module AOI31_X1X0_90x128y6p (a0, a1, a2, b0, y, dvdd, dvss, sub);
`else
module AOI31_X1X0_90x128y6p (a0, a1, a2, b0, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, a2, b0 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`AOI31_X1X0_Y_A0 * delay_mult) a0_y = a0;
wire #(`AOI31_X1X0_Y_A1 * delay_mult) a1_y = a1;
wire #(`AOI31_X1X0_Y_A2 * delay_mult) a2_y = a2;
wire #(`AOI31_X1X0_Y_B0 * delay_mult) b0_y = b0;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a0_y|!a1_y|!a2_y) & (!b0_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END AOI31_X1X0


//START AOI32_X1X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module AOI32_X1X0_90x128y6p (a0, a1, a2, b0, b1, y, dvdd, dvss, sub, tiehi, tielo);
`else
module AOI32_X1X0_90x128y6p (a0, a1, a2, b0, b1, y);
`endif
`else
`ifdef POWER_AWARE
module AOI32_X1X0_90x128y6p (a0, a1, a2, b0, b1, y, dvdd, dvss, sub, tiehi, tielo);
`else
module AOI32_X1X0_90x128y6p (a0, a1, a2, b0, b1, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, a2, b0, b1 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`AOI32_X1X0_Y_A0 * delay_mult) a0_y = a0;
wire #(`AOI32_X1X0_Y_A1 * delay_mult) a1_y = a1;
wire #(`AOI32_X1X0_Y_A2 * delay_mult) a2_y = a2;
wire #(`AOI32_X1X0_Y_B0 * delay_mult) b0_y = b0;
wire #(`AOI32_X1X0_Y_B1 * delay_mult) b1_y = b1;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a0_y|!a1_y|!a2_y) & (!b0_y|!b1_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END AOI32_X1X0


//START AOI33_X1X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module AOI33_X1X0_90x128y6p (a0, a1, a2, b0, b1, b2, y, dvdd, dvss, sub, tiehi, tielo);
`else
module AOI33_X1X0_90x128y6p (a0, a1, a2, b0, b1, b2, y);
`endif
`else
`ifdef POWER_AWARE
module AOI33_X1X0_90x128y6p (a0, a1, a2, b0, b1, b2, y, dvdd, dvss, sub, tiehi, tielo);
`else
module AOI33_X1X0_90x128y6p (a0, a1, a2, b0, b1, b2, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, a2, b0, b1, b2 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`AOI33_X1X0_Y_A0 * delay_mult) a0_y = a0;
wire #(`AOI33_X1X0_Y_A1 * delay_mult) a1_y = a1;
wire #(`AOI33_X1X0_Y_A2 * delay_mult) a2_y = a2;
wire #(`AOI33_X1X0_Y_B0 * delay_mult) b0_y = b0;
wire #(`AOI33_X1X0_Y_B1 * delay_mult) b1_y = b1;
wire #(`AOI33_X1X0_Y_B2 * delay_mult) b2_y = b2;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a0_y|!a1_y|!a2_y) & (!b0_y|!b1_y|!b2_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END AOI33_X1X0


//START BUFD_CK_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module BUFD_CK_X2X2_90x128y6p (an, ap, e, eb, yn, yp, dvdd, dvss, sub, tiehi, tielo);
`else
module BUFD_CK_X2X2_90x128y6p (an, ap, e, eb, yn, yp);
`endif
`else
`ifdef POWER_AWARE
module BUFD_CK_X2X2_90x128y6p (an, ap, e, eb, yn, yp, dvdd, dvss, sub, tiehi, tielo);
`else
module BUFD_CK_X2X2_90x128y6p (an, ap, e, eb, yn, yp);
`endif
`endif
parameter delay_mult = 1 ;
input an, ap, e, eb ;
output yn, yp ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`BUFD_CK_X2X2_YP_AN * delay_mult) an_yp = an;
wire #(`BUFD_CK_X2X2_YP_AP * delay_mult) ap_yp = ap;
wire #(`BUFD_CK_X2X2_YP_E * delay_mult) e_yp = e;
wire #(`BUFD_CK_X2X2_YP_EB * delay_mult) eb_yp = eb;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter x_state = 1'bx;

wire invalid_yp = !power_on | (ap_yp==an_yp|e_yp==eb_yp);
wire data_yp = !an_yp&ap_yp&e_yp&!eb_yp;
assign yp = (invalid_yp ? 1'bx : data_yp);
assign #(`BUFD_CK_X2X2_YN_YP * delay_mult) yn = (invalid_yp ? 1'bx : !yp);

endmodule
`endcelldefine
//END BUFD_CK_X2X2


//START BUFD_EN_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module BUFD_EN_X2X2_90x128y6p (an, ap, e, eb, yn, yp, dvdd, dvss, sub);
`else
module BUFD_EN_X2X2_90x128y6p (an, ap, e, eb, yn, yp);
`endif
`else
`ifdef POWER_AWARE
module BUFD_EN_X2X2_90x128y6p (an, ap, e, eb, yn, yp, dvdd, dvss, sub);
`else
module BUFD_EN_X2X2_90x128y6p (an, ap, e, eb, yn, yp);
`endif
`endif
parameter delay_mult = 1 ;
input an, ap, e, eb ;
output yn, yp ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`BUFD_EN_X2X2_YP_AN * delay_mult) an_yp = an;
wire #(`BUFD_EN_X2X2_YP_AP * delay_mult) ap_yp = ap;
wire #(`BUFD_EN_X2X2_YP_E * delay_mult) e_yp = e;
wire #(`BUFD_EN_X2X2_YP_EB * delay_mult) eb_yp = eb;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter x_state = 1'bx;
parameter z_state = 1'bz;

wire hiz_yp = !e_yp&eb_yp;
wire invalid_yp = !power_on | (ap_yp==an_yp|e_yp==eb_yp);
wire data_yp = !an_yp&ap_yp;
assign yp = (invalid_yp ? 1'bx : (hiz_yp ? 1'bz : data_yp));
assign #(`BUFD_EN_X2X2_YN_YP * delay_mult) yn = (invalid_yp ? 1'bx : (hiz_yp ? 1'bz : !yp));

endmodule
`endcelldefine
//END BUFD_EN_X2X2


//START BUFD_PD_X1X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module BUFD_PD_X1X1_90x128y6p (an, ap, pd, yn, yp, dvdd, dvss, sub, tiehi, tielo);
`else
module BUFD_PD_X1X1_90x128y6p (an, ap, pd, yn, yp);
`endif
`else
`ifdef POWER_AWARE
module BUFD_PD_X1X1_90x128y6p (an, ap, pd, yn, yp, dvdd, dvss, sub, tiehi, tielo);
`else
module BUFD_PD_X1X1_90x128y6p (an, ap, pd, yn, yp);
`endif
`endif
parameter delay_mult = 1 ;
input an, ap, pd ;
output yn, yp ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`BUFD_PD_X1X1_YP_AN * delay_mult) an_yp = an;
wire #(`BUFD_PD_X1X1_YP_AP * delay_mult) ap_yp = ap;
wire #(`BUFD_PD_X1X1_YP_PD * delay_mult) pd_yp = pd;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter x_state = 1'bx;

wire invalid_yp = !power_on | (ap_yp==an_yp);
wire data_yp = !an_yp&ap_yp&!pd_yp;
assign yp = (invalid_yp ? 1'bx : data_yp);
assign #(`BUFD_PD_X1X1_YN_YP * delay_mult) yn = (invalid_yp ? 1'bx : !yp);

endmodule
`endcelldefine
//END BUFD_PD_X1X1


//START BUFD_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module BUFD_X2X2_90x128y6p (an, ap, yn, yp, dvdd, dvss, sub, tiehi, tielo);
`else
module BUFD_X2X2_90x128y6p (an, ap, yn, yp);
`endif
`else
`ifdef POWER_AWARE
module BUFD_X2X2_90x128y6p (an, ap, yn, yp, dvdd, dvss, sub, tiehi, tielo);
`else
module BUFD_X2X2_90x128y6p (an, ap, yn, yp);
`endif
`endif
parameter delay_mult = 1 ;
input an, ap ;
output yn, yp ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`BUFD_X2X2_YP_AN * delay_mult) an_yp = an;
wire #(`BUFD_X2X2_YP_AP * delay_mult) ap_yp = ap;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter x_state = 1'bx;

wire invalid_yp = !power_on | (ap_yp==an_yp);
wire data_yp = !an_yp&ap_yp;
assign yp = (invalid_yp ? 1'bx : data_yp);
assign #(`BUFD_X2X2_YN_YP * delay_mult) yn = (invalid_yp ? 1'bx : !yp);

endmodule
`endcelldefine
//END BUFD_X2X2


//START BUFD_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module BUFD_X4X4_90x128y6p (an, ap, yn, yp, dvdd, dvss, sub);
`else
module BUFD_X4X4_90x128y6p (an, ap, yn, yp);
`endif
`else
`ifdef POWER_AWARE
module BUFD_X4X4_90x128y6p (an, ap, yn, yp, dvdd, dvss, sub);
`else
module BUFD_X4X4_90x128y6p (an, ap, yn, yp);
`endif
`endif
parameter delay_mult = 1 ;
input an, ap ;
output yn, yp ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`BUFD_X4X4_YP_AN * delay_mult) an_yp = an;
wire #(`BUFD_X4X4_YP_AP * delay_mult) ap_yp = ap;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter x_state = 1'bx;

wire invalid_yp = !power_on | (ap_yp==an_yp);
wire data_yp = !an_yp&ap_yp;
assign yp = (invalid_yp ? 1'bx : data_yp);
assign #(`BUFD_X4X4_YN_YP * delay_mult) yn = (invalid_yp ? 1'bx : !yp);

endmodule
`endcelldefine
//END BUFD_X4X4


//START BUFD_X8X8
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module BUFD_X8X8_90x128y6p (an, ap, yn, yp, dvdd, dvss, sub);
`else
module BUFD_X8X8_90x128y6p (an, ap, yn, yp);
`endif
`else
`ifdef POWER_AWARE
module BUFD_X8X8_90x128y6p (an, ap, yn, yp, dvdd, dvss, sub);
`else
module BUFD_X8X8_90x128y6p (an, ap, yn, yp);
`endif
`endif
parameter delay_mult = 1 ;
input an, ap ;
output yn, yp ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`BUFD_X8X8_YP_AN * delay_mult) an_yp = an;
wire #(`BUFD_X8X8_YP_AP * delay_mult) ap_yp = ap;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter x_state = 1'bx;

wire invalid_yp = !power_on | (ap_yp==an_yp);
wire data_yp = !an_yp&ap_yp;
assign yp = (invalid_yp ? 1'bx : data_yp);
assign #(`BUFD_X8X8_YN_YP * delay_mult) yn = (invalid_yp ? 1'bx : !yp);

endmodule
`endcelldefine
//END BUFD_X8X8


//START BUFHYST_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module BUFHYST_X4X4_90x128y6p (a, y, dvdd, dvss, sub, tiehi, tielo);
`else
module BUFHYST_X4X4_90x128y6p (a, y);
`endif
`else
`ifdef POWER_AWARE
module BUFHYST_X4X4_90x128y6p (a, y, dvdd, dvss, sub, tiehi, tielo);
`else
module BUFHYST_X4X4_90x128y6p (a, y);
`endif
`endif
parameter delay_mult = 1 ;
input a ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`BUFHYST_X4X4_Y_A * delay_mult) a_y = a;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = a_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END BUFHYST_X4X4


//START BUFTS_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module BUFTS_X2X2_90x128y6p (a, e, y, dvdd, dvss, sub, tiehi, tielo);
`else
module BUFTS_X2X2_90x128y6p (a, e, y);
`endif
`else
`ifdef POWER_AWARE
module BUFTS_X2X2_90x128y6p (a, e, y, dvdd, dvss, sub, tiehi, tielo);
`else
module BUFTS_X2X2_90x128y6p (a, e, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, e ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`BUFTS_X2X2_Y_A * delay_mult) a_y = a;
wire #(`BUFTS_X2X2_Y_E * delay_mult) e_y = e;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter z_state = 1'bz;

wire hiz_y = !e_y;
wire invalid_y = !power_on ;
wire data_y = a_y;
assign y = (invalid_y ? 1'bx : (hiz_y ? 1'bz : data_y));
endmodule
`endcelldefine
//END BUFTS_X2X2


//START BUF_GPD_X1X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module BUF_GPD_X1X1_90x128y6p (a, y, dvdd, dvss, sub, tiehi, tielo);
`else
module BUF_GPD_X1X1_90x128y6p (a, y);
`endif
`else
`ifdef POWER_AWARE
module BUF_GPD_X1X1_90x128y6p (a, y, dvdd, dvss, sub, tiehi, tielo);
`else
module BUF_GPD_X1X1_90x128y6p (a, y);
`endif
`endif
parameter delay_mult = 1 ;
input a ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`BUF_GPD_X1X1_Y_A * delay_mult) a_y = a;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = a_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END BUF_GPD_X1X1


//START BUF_GPD_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module BUF_GPD_X2X2_90x128y6p (a, y, dvdd, dvss, sub, tiehi, tielo);
`else
module BUF_GPD_X2X2_90x128y6p (a, y);
`endif
`else
`ifdef POWER_AWARE
module BUF_GPD_X2X2_90x128y6p (a, y, dvdd, dvss, sub, tiehi, tielo);
`else
module BUF_GPD_X2X2_90x128y6p (a, y);
`endif
`endif
parameter delay_mult = 1 ;
input a ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`BUF_GPD_X2X2_Y_A * delay_mult) a_y = a;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = a_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END BUF_GPD_X2X2


//START BUF_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module BUF_X2X2_90x128y6p (a, y, dvdd, dvss, sub, tiehi, tielo);
`else
module BUF_X2X2_90x128y6p (a, y);
`endif
`else
`ifdef POWER_AWARE
module BUF_X2X2_90x128y6p (a, y, dvdd, dvss, sub, tiehi, tielo);
`else
module BUF_X2X2_90x128y6p (a, y);
`endif
`endif
parameter delay_mult = 1 ;
input a ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`BUF_X2X2_Y_A * delay_mult) a_y = a;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = a_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END BUF_X2X2


//START BUF_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module BUF_X4X4_90x128y6p (a, y, dvdd, dvss, sub);
`else
module BUF_X4X4_90x128y6p (a, y);
`endif
`else
`ifdef POWER_AWARE
module BUF_X4X4_90x128y6p (a, y, dvdd, dvss, sub);
`else
module BUF_X4X4_90x128y6p (a, y);
`endif
`endif
parameter delay_mult = 1 ;
input a ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`BUF_X4X4_Y_A * delay_mult) a_y = a;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = a_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END BUF_X4X4


//START BUF_X8X8
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module BUF_X8X8_90x128y6p (a, y, dvdd, dvss, sub);
`else
module BUF_X8X8_90x128y6p (a, y);
`endif
`else
`ifdef POWER_AWARE
module BUF_X8X8_90x128y6p (a, y, dvdd, dvss, sub);
`else
module BUF_X8X8_90x128y6p (a, y);
`endif
`endif
parameter delay_mult = 1 ;
input a ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`BUF_X8X8_Y_A * delay_mult) a_y = a;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = a_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END BUF_X8X8


module CLK_GT_X2X2_90x128y6p (cki,e,cko);
	input cki,e;
	output cko;
	reg e_out;
	parameter delay_mult = 1 ;

always @ (negedge cki) begin        
	e_out <= e; // build latch    
end    

assign cko = e_out & cki; 
endmodule


//START COMP_X12X12
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module COMP_X12X12_90x128y6p (dn, dp, q, qn, dvdd, dvss, sub);
`else
module COMP_X12X12_90x128y6p (dn, dp, q, qn);
`endif
`else
`ifdef POWER_AWARE
module COMP_X12X12_90x128y6p (dn, dp, q, qn, dvdd, dvss, sub);
`else
module COMP_X12X12_90x128y6p (dn, dp, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input dn, dp ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`COMP_X12X12_Q_DN * delay_mult) dn_q = dn;
wire #(`COMP_X12X12_Q_DP * delay_mult) dp_q = dp;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter x_state = 1'bx;

wire invalid_q = !power_on | (dp_q==dn_q);
wire data_q = !dn_q&dp_q;
assign q = (invalid_q ? 1'bx : data_q);
assign #(`COMP_X12X12_QN_Q * delay_mult) qn = (invalid_q ? 1'bx : !q);

endmodule
`endcelldefine
//END COMP_X12X12


//START DEC12EN_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DEC12EN_X2X2_90x128y6p (d, e, y0, y1, dvdd, dvss, sub);
`else
module DEC12EN_X2X2_90x128y6p (d, e, y0, y1);
`endif
`else
`ifdef POWER_AWARE
module DEC12EN_X2X2_90x128y6p (d, e, y0, y1, dvdd, dvss, sub);
`else
module DEC12EN_X2X2_90x128y6p (d, e, y0, y1);
`endif
`endif
parameter delay_mult = 1 ;
input d, e ;
output y0, y1 ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`DEC12EN_X2X2_Y0_D * delay_mult) d_y0 = d;
wire #(`DEC12EN_X2X2_Y0_E * delay_mult) e_y0 = e;
wire #(`DEC12EN_X2X2_Y1_D * delay_mult) d_y1 = d;
wire #(`DEC12EN_X2X2_Y1_E * delay_mult) e_y1 = e;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y0 = !power_on ;
wire data_y0 = !d_y0&e_y0;
assign y0 = (invalid_y0 ? 1'bx : data_y0);
wire invalid_y1 = !power_on ;
wire data_y1 = d_y1&e_y1;
assign y1 = (invalid_y1 ? 1'bx : data_y1);
endmodule
`endcelldefine
//END DEC12EN_X2X2


//START DEC12_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DEC12_X2X2_90x128y6p (d, y0, y1, dvdd, dvss, sub, tiehi, tielo);
`else
module DEC12_X2X2_90x128y6p (d, y0, y1);
`endif
`else
`ifdef POWER_AWARE
module DEC12_X2X2_90x128y6p (d, y0, y1, dvdd, dvss, sub, tiehi, tielo);
`else
module DEC12_X2X2_90x128y6p (d, y0, y1);
`endif
`endif
parameter delay_mult = 1 ;
input d ;
output y0, y1 ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`DEC12_X2X2_Y0_D * delay_mult) d_y0 = d;
wire #(`DEC12_X2X2_Y1_D * delay_mult) d_y1 = d;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y0 = !power_on ;
wire data_y0 = !d_y0;
assign y0 = (invalid_y0 ? 1'bx : data_y0);
wire invalid_y1 = !power_on ;
wire data_y1 = d_y1;
assign y1 = (invalid_y1 ? 1'bx : data_y1);
endmodule
`endcelldefine
//END DEC12_X2X2


//START DEC24EN_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DEC24EN_X2X2_90x128y6p (d0, d1, e, y0, y1, y2, y3, dvdd, dvss, sub, tiehi, tielo);
`else
module DEC24EN_X2X2_90x128y6p (d0, d1, e, y0, y1, y2, y3);
`endif
`else
`ifdef POWER_AWARE
module DEC24EN_X2X2_90x128y6p (d0, d1, e, y0, y1, y2, y3, dvdd, dvss, sub, tiehi, tielo);
`else
module DEC24EN_X2X2_90x128y6p (d0, d1, e, y0, y1, y2, y3);
`endif
`endif
parameter delay_mult = 1 ;
input d0, d1, e ;
output y0, y1, y2, y3 ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`DEC24EN_X2X2_Y0_D0 * delay_mult) d0_y0 = d0;
wire #(`DEC24EN_X2X2_Y0_D1 * delay_mult) d1_y0 = d1;
wire #(`DEC24EN_X2X2_Y0_E * delay_mult) e_y0 = e;
wire #(`DEC24EN_X2X2_Y1_D0 * delay_mult) d0_y1 = d0;
wire #(`DEC24EN_X2X2_Y1_D1 * delay_mult) d1_y1 = d1;
wire #(`DEC24EN_X2X2_Y1_E * delay_mult) e_y1 = e;
wire #(`DEC24EN_X2X2_Y2_D0 * delay_mult) d0_y2 = d0;
wire #(`DEC24EN_X2X2_Y2_D1 * delay_mult) d1_y2 = d1;
wire #(`DEC24EN_X2X2_Y2_E * delay_mult) e_y2 = e;
wire #(`DEC24EN_X2X2_Y3_D0 * delay_mult) d0_y3 = d0;
wire #(`DEC24EN_X2X2_Y3_D1 * delay_mult) d1_y3 = d1;
wire #(`DEC24EN_X2X2_Y3_E * delay_mult) e_y3 = e;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y0 = !power_on ;
wire data_y0 = !d0_y0&!d1_y0&e_y0;
assign y0 = (invalid_y0 ? 1'bx : data_y0);
wire invalid_y1 = !power_on ;
wire data_y1 = d0_y1&!d1_y1&e_y1;
assign y1 = (invalid_y1 ? 1'bx : data_y1);
wire invalid_y2 = !power_on ;
wire data_y2 = !d0_y2&d1_y2&e_y2;
assign y2 = (invalid_y2 ? 1'bx : data_y2);
wire invalid_y3 = !power_on ;
wire data_y3 = d0_y3&d1_y3&e_y3;
assign y3 = (invalid_y3 ? 1'bx : data_y3);
endmodule
`endcelldefine
//END DEC24EN_X2X2


//START DEC24_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DEC24_X2X2_90x128y6p (d0, d1, y0, y1, y2, y3, dvdd, dvss, sub);
`else
module DEC24_X2X2_90x128y6p (d0, d1, y0, y1, y2, y3);
`endif
`else
`ifdef POWER_AWARE
module DEC24_X2X2_90x128y6p (d0, d1, y0, y1, y2, y3, dvdd, dvss, sub);
`else
module DEC24_X2X2_90x128y6p (d0, d1, y0, y1, y2, y3);
`endif
`endif
parameter delay_mult = 1 ;
input d0, d1 ;
output y0, y1, y2, y3 ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`DEC24_X2X2_Y0_D0 * delay_mult) d0_y0 = d0;
wire #(`DEC24_X2X2_Y0_D1 * delay_mult) d1_y0 = d1;
wire #(`DEC24_X2X2_Y1_D0 * delay_mult) d0_y1 = d0;
wire #(`DEC24_X2X2_Y1_D1 * delay_mult) d1_y1 = d1;
wire #(`DEC24_X2X2_Y2_D0 * delay_mult) d0_y2 = d0;
wire #(`DEC24_X2X2_Y2_D1 * delay_mult) d1_y2 = d1;
wire #(`DEC24_X2X2_Y3_D0 * delay_mult) d0_y3 = d0;
wire #(`DEC24_X2X2_Y3_D1 * delay_mult) d1_y3 = d1;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y0 = !power_on ;
wire data_y0 = !d0_y0&!d1_y0;
assign y0 = (invalid_y0 ? 1'bx : data_y0);
wire invalid_y1 = !power_on ;
wire data_y1 = d0_y1&!d1_y1;
assign y1 = (invalid_y1 ? 1'bx : data_y1);
wire invalid_y2 = !power_on ;
wire data_y2 = !d0_y2&d1_y2;
assign y2 = (invalid_y2 ? 1'bx : data_y2);
wire invalid_y3 = !power_on ;
wire data_y3 = d0_y3&d1_y3;
assign y3 = (invalid_y3 ? 1'bx : data_y3);
endmodule
`endcelldefine
//END DEC24_X2X2


//START DEC38_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DEC38_X2X2_90x128y6p (d0, d1, d2, y0, y1, y2, y3, y4, y5, y6, y7, dvdd, dvss, sub, tiehi, tielo);
`else
module DEC38_X2X2_90x128y6p (d0, d1, d2, y0, y1, y2, y3, y4, y5, y6, y7);
`endif
`else
`ifdef POWER_AWARE
module DEC38_X2X2_90x128y6p (d0, d1, d2, y0, y1, y2, y3, y4, y5, y6, y7, dvdd, dvss, sub, tiehi, tielo);
`else
module DEC38_X2X2_90x128y6p (d0, d1, d2, y0, y1, y2, y3, y4, y5, y6, y7);
`endif
`endif
parameter delay_mult = 1 ;
input d0, d1, d2 ;
output y0, y1, y2, y3, y4, y5, y6, y7 ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`DEC38_X2X2_Y0_D0 * delay_mult) d0_y0 = d0;
wire #(`DEC38_X2X2_Y0_D1 * delay_mult) d1_y0 = d1;
wire #(`DEC38_X2X2_Y0_D2 * delay_mult) d2_y0 = d2;
wire #(`DEC38_X2X2_Y1_D0 * delay_mult) d0_y1 = d0;
wire #(`DEC38_X2X2_Y1_D1 * delay_mult) d1_y1 = d1;
wire #(`DEC38_X2X2_Y1_D2 * delay_mult) d2_y1 = d2;
wire #(`DEC38_X2X2_Y2_D0 * delay_mult) d0_y2 = d0;
wire #(`DEC38_X2X2_Y2_D1 * delay_mult) d1_y2 = d1;
wire #(`DEC38_X2X2_Y2_D2 * delay_mult) d2_y2 = d2;
wire #(`DEC38_X2X2_Y3_D0 * delay_mult) d0_y3 = d0;
wire #(`DEC38_X2X2_Y3_D1 * delay_mult) d1_y3 = d1;
wire #(`DEC38_X2X2_Y3_D2 * delay_mult) d2_y3 = d2;
wire #(`DEC38_X2X2_Y4_D0 * delay_mult) d0_y4 = d0;
wire #(`DEC38_X2X2_Y4_D1 * delay_mult) d1_y4 = d1;
wire #(`DEC38_X2X2_Y4_D2 * delay_mult) d2_y4 = d2;
wire #(`DEC38_X2X2_Y5_D0 * delay_mult) d0_y5 = d0;
wire #(`DEC38_X2X2_Y5_D1 * delay_mult) d1_y5 = d1;
wire #(`DEC38_X2X2_Y5_D2 * delay_mult) d2_y5 = d2;
wire #(`DEC38_X2X2_Y6_D0 * delay_mult) d0_y6 = d0;
wire #(`DEC38_X2X2_Y6_D1 * delay_mult) d1_y6 = d1;
wire #(`DEC38_X2X2_Y6_D2 * delay_mult) d2_y6 = d2;
wire #(`DEC38_X2X2_Y7_D0 * delay_mult) d0_y7 = d0;
wire #(`DEC38_X2X2_Y7_D1 * delay_mult) d1_y7 = d1;
wire #(`DEC38_X2X2_Y7_D2 * delay_mult) d2_y7 = d2;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y0 = !power_on ;
wire data_y0 = !d0_y0&!d1_y0&!d2_y0;
assign y0 = (invalid_y0 ? 1'bx : data_y0);
wire invalid_y1 = !power_on ;
wire data_y1 = d0_y1&!d1_y1&!d2_y1;
assign y1 = (invalid_y1 ? 1'bx : data_y1);
wire invalid_y2 = !power_on ;
wire data_y2 = !d0_y2&d1_y2&!d2_y2;
assign y2 = (invalid_y2 ? 1'bx : data_y2);
wire invalid_y3 = !power_on ;
wire data_y3 = d0_y3&d1_y3&!d2_y3;
assign y3 = (invalid_y3 ? 1'bx : data_y3);
wire invalid_y4 = !power_on ;
wire data_y4 = !d0_y4&!d1_y4&d2_y4;
assign y4 = (invalid_y4 ? 1'bx : data_y4);
wire invalid_y5 = !power_on ;
wire data_y5 = d0_y5&!d1_y5&d2_y5;
assign y5 = (invalid_y5 ? 1'bx : data_y5);
wire invalid_y6 = !power_on ;
wire data_y6 = !d0_y6&d1_y6&d2_y6;
assign y6 = (invalid_y6 ? 1'bx : data_y6);
wire invalid_y7 = !power_on ;
wire data_y7 = d0_y7&d1_y7&d2_y7;
assign y7 = (invalid_y7 ? 1'bx : data_y7);
endmodule
`endcelldefine
//END DEC38_X2X2


//START DEGLITCHD_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DEGLITCHD_X2X2_90x128y6p (a0n, a0p, a1n, a1p, y0n, y0p, y1n, y1p, dvdd, dvss, sub);
`else
module DEGLITCHD_X2X2_90x128y6p (a0n, a0p, a1n, a1p, y0n, y0p, y1n, y1p);
`endif
`else
`ifdef POWER_AWARE
module DEGLITCHD_X2X2_90x128y6p (a0n, a0p, a1n, a1p, y0n, y0p, y1n, y1p, dvdd, dvss, sub);
`else
module DEGLITCHD_X2X2_90x128y6p (a0n, a0p, a1n, a1p, y0n, y0p, y1n, y1p);
`endif
`endif
parameter delay_mult = 1 ;
input a0n, a0p, a1n, a1p ;
output y0n, y0p, y1n, y1p ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`DEGLITCHD_X2X2_Y0P_A0N * delay_mult) a0n_y0p = a0n;
wire #(`DEGLITCHD_X2X2_Y0P_A0P * delay_mult) a0p_y0p = a0p;
wire #(`DEGLITCHD_X2X2_Y0P_A1N * delay_mult) a1n_y0p = a1n;
wire #(`DEGLITCHD_X2X2_Y0P_A1P * delay_mult) a1p_y0p = a1p;
wire #(`DEGLITCHD_X2X2_Y1P_A0N * delay_mult) a0n_y1p = a0n;
wire #(`DEGLITCHD_X2X2_Y1P_A0P * delay_mult) a0p_y1p = a0p;
wire #(`DEGLITCHD_X2X2_Y1P_A1N * delay_mult) a1n_y1p = a1n;
wire #(`DEGLITCHD_X2X2_Y1P_A1P * delay_mult) a1p_y1p = a1p;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter x_state = 1'bx;

wire invalid_y0p = !power_on | (a0p_y0p==a0n_y0p|a1p_y0p==a1n_y0p);
wire data_y0p = (!a0n_y0p) | (a0p_y0p&a1n_y0p) | (!a1p_y0p);
assign y0p = (invalid_y0p ? 1'bx : data_y0p);
assign #(`DEGLITCHD_X2X2_Y0N_Y0P * delay_mult) y0n = (invalid_y0p ? 1'bx : !y0p);

wire invalid_y1p = !power_on | (a0p_y1p==a0n_y1p|a1p_y1p==a1n_y1p);
wire data_y1p = (!a0n_y1p) | (a0p_y1p&a1p_y1p) | (!a1n_y1p);
assign y1p = (invalid_y1p ? 1'bx : data_y1p);
assign #(`DEGLITCHD_X2X2_Y1N_Y1P * delay_mult) y1n = (invalid_y1p ? 1'bx : !y1p);

endmodule
`endcelldefine
//END DEGLITCHD_X2X2


//START DEMUX12_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DEMUX12_X2X2_90x128y6p (a, s0, y0, y1, dvdd, dvss, sub, tiehi, tielo);
`else
module DEMUX12_X2X2_90x128y6p (a, s0, y0, y1);
`endif
`else
`ifdef POWER_AWARE
module DEMUX12_X2X2_90x128y6p (a, s0, y0, y1, dvdd, dvss, sub, tiehi, tielo);
`else
module DEMUX12_X2X2_90x128y6p (a, s0, y0, y1);
`endif
`endif
parameter delay_mult = 1 ;
input a, s0 ;
output y0, y1 ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`DEMUX12_X2X2_Y0_A * delay_mult) a_y0 = a;
wire #(`DEMUX12_X2X2_Y0_S0 * delay_mult) s0_y0 = s0;
wire #(`DEMUX12_X2X2_Y1_A * delay_mult) a_y1 = a;
wire #(`DEMUX12_X2X2_Y1_S0 * delay_mult) s0_y1 = s0;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y0 = !power_on ;
wire data_y0 = a_y0&!s0_y0;
assign y0 = (invalid_y0 ? 1'bx : data_y0);
wire invalid_y1 = !power_on ;
wire data_y1 = a_y1&s0_y1;
assign y1 = (invalid_y1 ? 1'bx : data_y1);
endmodule
`endcelldefine
//END DEMUX12_X2X2


//START DEMUX14_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DEMUX14_X2X2_90x128y6p (a, s0, s1, y0, y1, y2, y3, dvdd, dvss, sub, tiehi, tielo);
`else
module DEMUX14_X2X2_90x128y6p (a, s0, s1, y0, y1, y2, y3);
`endif
`else
`ifdef POWER_AWARE
module DEMUX14_X2X2_90x128y6p (a, s0, s1, y0, y1, y2, y3, dvdd, dvss, sub, tiehi, tielo);
`else
module DEMUX14_X2X2_90x128y6p (a, s0, s1, y0, y1, y2, y3);
`endif
`endif
parameter delay_mult = 1 ;
input a, s0, s1 ;
output y0, y1, y2, y3 ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`DEMUX14_X2X2_Y0_A * delay_mult) a_y0 = a;
wire #(`DEMUX14_X2X2_Y0_S0 * delay_mult) s0_y0 = s0;
wire #(`DEMUX14_X2X2_Y0_S1 * delay_mult) s1_y0 = s1;
wire #(`DEMUX14_X2X2_Y1_A * delay_mult) a_y1 = a;
wire #(`DEMUX14_X2X2_Y1_S0 * delay_mult) s0_y1 = s0;
wire #(`DEMUX14_X2X2_Y1_S1 * delay_mult) s1_y1 = s1;
wire #(`DEMUX14_X2X2_Y2_A * delay_mult) a_y2 = a;
wire #(`DEMUX14_X2X2_Y2_S0 * delay_mult) s0_y2 = s0;
wire #(`DEMUX14_X2X2_Y2_S1 * delay_mult) s1_y2 = s1;
wire #(`DEMUX14_X2X2_Y3_A * delay_mult) a_y3 = a;
wire #(`DEMUX14_X2X2_Y3_S0 * delay_mult) s0_y3 = s0;
wire #(`DEMUX14_X2X2_Y3_S1 * delay_mult) s1_y3 = s1;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y0 = !power_on ;
wire data_y0 = a_y0&!s0_y0&!s1_y0;
assign y0 = (invalid_y0 ? 1'bx : data_y0);
wire invalid_y1 = !power_on ;
wire data_y1 = a_y1&s0_y1&!s1_y1;
assign y1 = (invalid_y1 ? 1'bx : data_y1);
wire invalid_y2 = !power_on ;
wire data_y2 = a_y2&!s0_y2&s1_y2;
assign y2 = (invalid_y2 ? 1'bx : data_y2);
wire invalid_y3 = !power_on ;
wire data_y3 = a_y3&s0_y3&s1_y3;
assign y3 = (invalid_y3 ? 1'bx : data_y3);
endmodule
`endcelldefine
//END DEMUX14_X2X2


//START DEMUX18_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DEMUX18_X2X2_90x128y6p (a, s0, s1, s2, y0, y1, y2, y3, y4, y5, y6, y7, dvdd, dvss, sub, tiehi, tielo);
`else
module DEMUX18_X2X2_90x128y6p (a, s0, s1, s2, y0, y1, y2, y3, y4, y5, y6, y7);
`endif
`else
`ifdef POWER_AWARE
module DEMUX18_X2X2_90x128y6p (a, s0, s1, s2, y0, y1, y2, y3, y4, y5, y6, y7, dvdd, dvss, sub, tiehi, tielo);
`else
module DEMUX18_X2X2_90x128y6p (a, s0, s1, s2, y0, y1, y2, y3, y4, y5, y6, y7);
`endif
`endif
parameter delay_mult = 1 ;
input a, s0, s1, s2 ;
output y0, y1, y2, y3, y4, y5, y6, y7 ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`DEMUX18_X2X2_Y0_A * delay_mult) a_y0 = a;
wire #(`DEMUX18_X2X2_Y0_S0 * delay_mult) s0_y0 = s0;
wire #(`DEMUX18_X2X2_Y0_S1 * delay_mult) s1_y0 = s1;
wire #(`DEMUX18_X2X2_Y0_S2 * delay_mult) s2_y0 = s2;
wire #(`DEMUX18_X2X2_Y1_A * delay_mult) a_y1 = a;
wire #(`DEMUX18_X2X2_Y1_S0 * delay_mult) s0_y1 = s0;
wire #(`DEMUX18_X2X2_Y1_S1 * delay_mult) s1_y1 = s1;
wire #(`DEMUX18_X2X2_Y1_S2 * delay_mult) s2_y1 = s2;
wire #(`DEMUX18_X2X2_Y2_A * delay_mult) a_y2 = a;
wire #(`DEMUX18_X2X2_Y2_S0 * delay_mult) s0_y2 = s0;
wire #(`DEMUX18_X2X2_Y2_S1 * delay_mult) s1_y2 = s1;
wire #(`DEMUX18_X2X2_Y2_S2 * delay_mult) s2_y2 = s2;
wire #(`DEMUX18_X2X2_Y3_A * delay_mult) a_y3 = a;
wire #(`DEMUX18_X2X2_Y3_S0 * delay_mult) s0_y3 = s0;
wire #(`DEMUX18_X2X2_Y3_S1 * delay_mult) s1_y3 = s1;
wire #(`DEMUX18_X2X2_Y3_S2 * delay_mult) s2_y3 = s2;
wire #(`DEMUX18_X2X2_Y4_A * delay_mult) a_y4 = a;
wire #(`DEMUX18_X2X2_Y4_S0 * delay_mult) s0_y4 = s0;
wire #(`DEMUX18_X2X2_Y4_S1 * delay_mult) s1_y4 = s1;
wire #(`DEMUX18_X2X2_Y4_S2 * delay_mult) s2_y4 = s2;
wire #(`DEMUX18_X2X2_Y5_A * delay_mult) a_y5 = a;
wire #(`DEMUX18_X2X2_Y5_S0 * delay_mult) s0_y5 = s0;
wire #(`DEMUX18_X2X2_Y5_S1 * delay_mult) s1_y5 = s1;
wire #(`DEMUX18_X2X2_Y5_S2 * delay_mult) s2_y5 = s2;
wire #(`DEMUX18_X2X2_Y6_A * delay_mult) a_y6 = a;
wire #(`DEMUX18_X2X2_Y6_S0 * delay_mult) s0_y6 = s0;
wire #(`DEMUX18_X2X2_Y6_S1 * delay_mult) s1_y6 = s1;
wire #(`DEMUX18_X2X2_Y6_S2 * delay_mult) s2_y6 = s2;
wire #(`DEMUX18_X2X2_Y7_A * delay_mult) a_y7 = a;
wire #(`DEMUX18_X2X2_Y7_S0 * delay_mult) s0_y7 = s0;
wire #(`DEMUX18_X2X2_Y7_S1 * delay_mult) s1_y7 = s1;
wire #(`DEMUX18_X2X2_Y7_S2 * delay_mult) s2_y7 = s2;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y0 = !power_on ;
wire data_y0 = a_y0&!s0_y0&!s1_y0&!s2_y0;
assign y0 = (invalid_y0 ? 1'bx : data_y0);
wire invalid_y1 = !power_on ;
wire data_y1 = a_y1&s0_y1&!s1_y1&!s2_y1;
assign y1 = (invalid_y1 ? 1'bx : data_y1);
wire invalid_y2 = !power_on ;
wire data_y2 = a_y2&!s0_y2&s1_y2&!s2_y2;
assign y2 = (invalid_y2 ? 1'bx : data_y2);
wire invalid_y3 = !power_on ;
wire data_y3 = a_y3&s0_y3&s1_y3&!s2_y3;
assign y3 = (invalid_y3 ? 1'bx : data_y3);
wire invalid_y4 = !power_on ;
wire data_y4 = a_y4&!s0_y4&!s1_y4&s2_y4;
assign y4 = (invalid_y4 ? 1'bx : data_y4);
wire invalid_y5 = !power_on ;
wire data_y5 = a_y5&s0_y5&!s1_y5&s2_y5;
assign y5 = (invalid_y5 ? 1'bx : data_y5);
wire invalid_y6 = !power_on ;
wire data_y6 = a_y6&!s0_y6&s1_y6&s2_y6;
assign y6 = (invalid_y6 ? 1'bx : data_y6);
wire invalid_y7 = !power_on ;
wire data_y7 = a_y7&s0_y7&s1_y7&s2_y7;
assign y7 = (invalid_y7 ? 1'bx : data_y7);
endmodule
`endcelldefine
//END DEMUX18_X2X2


//START DFFARDDD_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DFFARDDD_X4X4_90x128y6p (ckn, ckp, dn, dp, rn, rp, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DFFARDDD_X4X4_90x128y6p (ckn, ckp, dn, dp, rn, rp, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DFFARDDD_X4X4_90x128y6p (ckn, ckp, dn, dp, rn, rp, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DFFARDDD_X4X4_90x128y6p (ckn, ckp, dn, dp, rn, rp, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ckn, ckp, dn, dp, rn, rp ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`DFFARDDD_X4X4_Q_RN * delay_mult) rn_q = rn;
wire #(`DFFARDDD_X4X4_Q_RP * delay_mult) rp_q = rp;
wire #(`DFFARDDD_X4X4_Q_CKN * delay_mult) ckn_q = ckn;
wire #(`DFFARDDD_X4X4_Q_CKP * delay_mult) ckp_q = ckp;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data(!dn&dp),
.set(lo_state),
.reset(!rn_q&rp_q),
.enable(hi_state),
.clock(!ckn_q&ckp_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | ckp_q==ckn_q|dp==dn|rp_q==rn_q),
.high_impedance(lo_state),
.out(q)
);

assign #(`DFFARDDD_X4X4_QN_Q * delay_mult) qn = (!power_on | ckp_q==ckn_q|dp==dn|rp_q==rn_q ? 1'bx : !q);
endmodule
`endcelldefine
//END DFFARDDD_X4X4


//START DFFARD_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DFFARD_X4X4_90x128y6p (ckn, ckp, d, r, q, qn, dvdd, dvss, sub);
`else
module DFFARD_X4X4_90x128y6p (ckn, ckp, d, r, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DFFARD_X4X4_90x128y6p (ckn, ckp, d, r, q, qn, dvdd, dvss, sub);
`else
module DFFARD_X4X4_90x128y6p (ckn, ckp, d, r, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ckn, ckp, d, r ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`DFFARD_X4X4_Q_R * delay_mult) r_q = r;
wire #(`DFFARD_X4X4_Q_CKN * delay_mult) ckn_q = ckn;
wire #(`DFFARD_X4X4_Q_CKP * delay_mult) ckp_q = ckp;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data(d),
.set(lo_state),
.reset(r_q),
.enable(hi_state),
.clock(!ckn_q&ckp_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | ckp_q==ckn_q),
.high_impedance(lo_state),
.out(q)
);

assign #(`DFFARD_X4X4_QN_Q * delay_mult) qn = (!power_on | ckp_q==ckn_q ? 1'bx : !q);
endmodule
`endcelldefine
//END DFFARD_X4X4


//START DFFARNASN_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DFFARNASN_X2X2_90x128y6p (ck, d, rn, sn, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DFFARNASN_X2X2_90x128y6p (ck, d, rn, sn, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DFFARNASN_X2X2_90x128y6p (ck, d, rn, sn, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DFFARNASN_X2X2_90x128y6p (ck, d, rn, sn, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, d, rn, sn ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`DFFARNASN_X2X2_Q_SN * delay_mult) sn_q = sn;
wire #(`DFFARNASN_X2X2_Q_RN * delay_mult) rn_q = rn;
wire #(`DFFARNASN_X2X2_Q_CK * delay_mult) ck_q = ck;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(2)) q_seq (
.data(d),
.set(!sn_q),
.reset(!rn_q),
.enable(hi_state),
.clock(ck_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`DFFARNASN_X2X2_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END DFFARNASN_X2X2


//START DFFARN_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DFFARN_X2X2_90x128y6p (ck, d, rn, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DFFARN_X2X2_90x128y6p (ck, d, rn, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DFFARN_X2X2_90x128y6p (ck, d, rn, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DFFARN_X2X2_90x128y6p (ck, d, rn, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, d, rn ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`DFFARN_X2X2_Q_RN * delay_mult) rn_q = rn;
wire #(`DFFARN_X2X2_Q_CK * delay_mult) ck_q = ck;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data(d),
.set(lo_state),
.reset(!rn_q),
.enable(hi_state),
.clock(ck_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`DFFARN_X2X2_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END DFFARN_X2X2


//START DFFAR_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DFFAR_X4X4_90x128y6p (ck, d, r, q, qn, dvdd, dvss, sub);
`else
module DFFAR_X4X4_90x128y6p (ck, d, r, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DFFAR_X4X4_90x128y6p (ck, d, r, q, qn, dvdd, dvss, sub);
`else
module DFFAR_X4X4_90x128y6p (ck, d, r, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, d, r ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`DFFAR_X4X4_Q_R * delay_mult) r_q = r;
wire #(`DFFAR_X4X4_Q_CK * delay_mult) ck_q = ck;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data(d),
.set(lo_state),
.reset(r_q),
.enable(hi_state),
.clock(ck_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`DFFAR_X4X4_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END DFFAR_X4X4


//START DFFASN_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DFFASN_X2X2_90x128y6p (ck, d, sn, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DFFASN_X2X2_90x128y6p (ck, d, sn, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DFFASN_X2X2_90x128y6p (ck, d, sn, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DFFASN_X2X2_90x128y6p (ck, d, sn, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, d, sn ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`DFFASN_X2X2_Q_SN * delay_mult) sn_q = sn;
wire #(`DFFASN_X2X2_Q_CK * delay_mult) ck_q = ck;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data(d),
.set(!sn_q),
.reset(lo_state),
.enable(hi_state),
.clock(ck_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`DFFASN_X2X2_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END DFFASN_X2X2


//START DFFAS_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DFFAS_X2X2_90x128y6p (ck, d, s, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DFFAS_X2X2_90x128y6p (ck, d, s, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DFFAS_X2X2_90x128y6p (ck, d, s, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DFFAS_X2X2_90x128y6p (ck, d, s, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, d, s ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`DFFAS_X2X2_Q_S * delay_mult) s_q = s;
wire #(`DFFAS_X2X2_Q_CK * delay_mult) ck_q = ck;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data(d),
.set(s_q),
.reset(lo_state),
.enable(hi_state),
.clock(ck_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`DFFAS_X2X2_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END DFFAS_X2X2


//START DFFAS_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DFFAS_X4X4_90x128y6p (ck, d, s, q, qn, dvdd, dvss, sub);
`else
module DFFAS_X4X4_90x128y6p (ck, d, s, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DFFAS_X4X4_90x128y6p (ck, d, s, q, qn, dvdd, dvss, sub);
`else
module DFFAS_X4X4_90x128y6p (ck, d, s, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, d, s ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`DFFAS_X4X4_Q_S * delay_mult) s_q = s;
wire #(`DFFAS_X4X4_Q_CK * delay_mult) ck_q = ck;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data(d),
.set(s_q),
.reset(lo_state),
.enable(hi_state),
.clock(ck_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`DFFAS_X4X4_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END DFFAS_X4X4


//START DFFEARNASN_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DFFEARNASN_X2X2_90x128y6p (ck, d, e, rn, sn, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DFFEARNASN_X2X2_90x128y6p (ck, d, e, rn, sn, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DFFEARNASN_X2X2_90x128y6p (ck, d, e, rn, sn, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DFFEARNASN_X2X2_90x128y6p (ck, d, e, rn, sn, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, d, e, rn, sn ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`DFFEARNASN_X2X2_Q_CK * delay_mult) ck_q = ck;
wire #(`DFFEARNASN_X2X2_Q_D * delay_mult) d_q = d;
wire #(`DFFEARNASN_X2X2_Q_E * delay_mult) e_q = e;
wire #(`DFFEARNASN_X2X2_Q_RN * delay_mult) rn_q = rn;
wire #(`DFFEARNASN_X2X2_Q_SN * delay_mult) sn_q = sn;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(2)) q_seq (
.data(d_q),
.set(!sn_q),
.reset(!rn_q),
.enable(e_q),
.clock(ck_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`DFFEARNASN_X2X2_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END DFFEARNASN_X2X2


//START DFFELARN_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DFFELARN_X4X4_90x128y6p (ck, d, e, l, li, rn, q, qn, dvdd, dvss, sub);
`else
module DFFELARN_X4X4_90x128y6p (ck, d, e, l, li, rn, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DFFELARN_X4X4_90x128y6p (ck, d, e, l, li, rn, q, qn, dvdd, dvss, sub);
`else
module DFFELARN_X4X4_90x128y6p (ck, d, e, l, li, rn, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, d, e, l, li, rn ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`DFFELARN_X4X4_Q_CK * delay_mult) ck_q = ck;
wire #(`DFFELARN_X4X4_Q_D * delay_mult) d_q = d;
wire #(`DFFELARN_X4X4_Q_E * delay_mult) e_q = e;
wire #(`DFFELARN_X4X4_Q_L * delay_mult) l_q = l;
wire #(`DFFELARN_X4X4_Q_LI * delay_mult) li_q = li;
wire #(`DFFELARN_X4X4_Q_RN * delay_mult) rn_q = rn;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data((d_q&e_q&!l_q) | (e_q&l_q&li_q)),
.set(lo_state),
.reset(!rn_q),
.enable(e_q),
.clock(ck_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`DFFELARN_X4X4_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END DFFELARN_X4X4


//START DFFELAR_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DFFELAR_X4X4_90x128y6p (ck, d, e, l, li, r, q, qn, dvdd, dvss, sub);
`else
module DFFELAR_X4X4_90x128y6p (ck, d, e, l, li, r, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DFFELAR_X4X4_90x128y6p (ck, d, e, l, li, r, q, qn, dvdd, dvss, sub);
`else
module DFFELAR_X4X4_90x128y6p (ck, d, e, l, li, r, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, d, e, l, li, r ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`DFFELAR_X4X4_Q_CK * delay_mult) ck_q = ck;
wire #(`DFFELAR_X4X4_Q_D * delay_mult) d_q = d;
wire #(`DFFELAR_X4X4_Q_E * delay_mult) e_q = e;
wire #(`DFFELAR_X4X4_Q_L * delay_mult) l_q = l;
wire #(`DFFELAR_X4X4_Q_LI * delay_mult) li_q = li;
wire #(`DFFELAR_X4X4_Q_R * delay_mult) r_q = r;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data((d_q&e_q&!l_q) | (e_q&l_q&li_q)),
.set(lo_state),
.reset(r_q),
.enable(e_q),
.clock(ck_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`DFFELAR_X4X4_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END DFFELAR_X4X4


//START DFFEX_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DFFEX_X2X2_90x128y6p (ck, d, e, init, sr, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DFFEX_X2X2_90x128y6p (ck, d, e, init, sr, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DFFEX_X2X2_90x128y6p (ck, d, e, init, sr, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DFFEX_X2X2_90x128y6p (ck, d, e, init, sr, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, d, e, init, sr ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`DFFEX_X2X2_Q_CK * delay_mult) ck_q = ck;
wire #(`DFFEX_X2X2_Q_D * delay_mult) d_q = d;
wire #(`DFFEX_X2X2_Q_E * delay_mult) e_q = e;
wire #(`DFFEX_X2X2_Q_INIT * delay_mult) init_q = init;
wire #(`DFFEX_X2X2_Q_SR * delay_mult) sr_q = sr;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data(d_q),
.set(init_q&sr_q),
.reset(init_q&!sr_q),
.enable(e_q),
.clock(ck_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`DFFEX_X2X2_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END DFFEX_X2X2


//START DFFLAR_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DFFLAR_X4X4_90x128y6p (ck, d, l, li, r, q, qn, dvdd, dvss, sub);
`else
module DFFLAR_X4X4_90x128y6p (ck, d, l, li, r, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DFFLAR_X4X4_90x128y6p (ck, d, l, li, r, q, qn, dvdd, dvss, sub);
`else
module DFFLAR_X4X4_90x128y6p (ck, d, l, li, r, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, d, l, li, r ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`DFFLAR_X4X4_Q_R * delay_mult) r_q = r;
wire #(`DFFLAR_X4X4_Q_CK * delay_mult) ck_q = ck;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data((d|l) & (!l|li)),
.set(lo_state),
.reset(r_q),
.enable(hi_state),
.clock(ck_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`DFFLAR_X4X4_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END DFFLAR_X4X4


//START DFF_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DFF_X2X2_90x128y6p (ck, d, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DFF_X2X2_90x128y6p (ck, d, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DFF_X2X2_90x128y6p (ck, d, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DFF_X2X2_90x128y6p (ck, d, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, d ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`DFF_X2X2_Q_CK * delay_mult) ck_q = ck;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data(d),
.set(lo_state),
.reset(lo_state),
.enable(hi_state),
.clock(ck_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`DFF_X2X2_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END DFF_X2X2


//START DLATCHAERAES_X1X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DLATCHAERAES_X1X1_90x128y6p (d, e, eb, init, sr, q, dvdd, dvss, sub, tiehi, tielo);
`else
module DLATCHAERAES_X1X1_90x128y6p (d, e, eb, init, sr, q);
`endif
`else
`ifdef POWER_AWARE
module DLATCHAERAES_X1X1_90x128y6p (d, e, eb, init, sr, q, dvdd, dvss, sub, tiehi, tielo);
`else
module DLATCHAERAES_X1X1_90x128y6p (d, e, eb, init, sr, q);
`endif
`endif
parameter delay_mult = 1 ;
input d, e, eb, init, sr ;
output q ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`DLATCHAERAES_X1X1_Q_D * delay_mult) d_q = d;
wire #(`DLATCHAERAES_X1X1_Q_E * delay_mult) e_q = e;
wire #(`DLATCHAERAES_X1X1_Q_EB * delay_mult) eb_q = eb;
wire #(`DLATCHAERAES_X1X1_Q_INIT * delay_mult) init_q = init;
wire #(`DLATCHAERAES_X1X1_Q_SR * delay_mult) sr_q = sr;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arlatch #(.set_reset_action(2)) q_seq (
.data(d_q),
.set(init_q&!sr_q),
.reset(init_q&sr_q),
.enable(e_q&!eb_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | e_q==eb_q),
.high_impedance(lo_state),
.out(q)
);
endmodule
`endcelldefine
//END DLATCHAERAES_X1X1


//START DLATCHARNAS_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DLATCHARNAS_X2X2_90x128y6p (d, e, rn, s, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DLATCHARNAS_X2X2_90x128y6p (d, e, rn, s, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DLATCHARNAS_X2X2_90x128y6p (d, e, rn, s, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DLATCHARNAS_X2X2_90x128y6p (d, e, rn, s, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input d, e, rn, s ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`DLATCHARNAS_X2X2_Q_D * delay_mult) d_q = d;
wire #(`DLATCHARNAS_X2X2_Q_E * delay_mult) e_q = e;
wire #(`DLATCHARNAS_X2X2_Q_RN * delay_mult) rn_q = rn;
wire #(`DLATCHARNAS_X2X2_Q_S * delay_mult) s_q = s;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arlatch #(.set_reset_action(6)) q_seq (
.data(d_q),
.set(s_q),
.reset(!rn_q),
.enable(e_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`DLATCHARNAS_X2X2_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END DLATCHARNAS_X2X2


//START DLATCHARN_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DLATCHARN_X2X2_90x128y6p (d, e, rn, q, qn, dvdd, dvss, sub);
`else
module DLATCHARN_X2X2_90x128y6p (d, e, rn, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DLATCHARN_X2X2_90x128y6p (d, e, rn, q, qn, dvdd, dvss, sub);
`else
module DLATCHARN_X2X2_90x128y6p (d, e, rn, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input d, e, rn ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`DLATCHARN_X2X2_Q_D * delay_mult) d_q = d;
wire #(`DLATCHARN_X2X2_Q_E * delay_mult) e_q = e;
wire #(`DLATCHARN_X2X2_Q_RN * delay_mult) rn_q = rn;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arlatch #(.set_reset_action(4)) q_seq (
.data(d_q),
.set(lo_state),
.reset(!rn_q),
.enable(e_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`DLATCHARN_X2X2_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END DLATCHARN_X2X2


//START DLATCHEDASN_X3X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DLATCHEDASN_X3X1_90x128y6p (d, e, eb, sn, q, dvdd, dvss, sub);
`else
module DLATCHEDASN_X3X1_90x128y6p (d, e, eb, sn, q);
`endif
`else
`ifdef POWER_AWARE
module DLATCHEDASN_X3X1_90x128y6p (d, e, eb, sn, q, dvdd, dvss, sub);
`else
module DLATCHEDASN_X3X1_90x128y6p (d, e, eb, sn, q);
`endif
`endif
parameter delay_mult = 1 ;
input d, e, eb, sn ;
output q ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`DLATCHEDASN_X3X1_Q_D * delay_mult) d_q = d;
wire #(`DLATCHEDASN_X3X1_Q_E * delay_mult) e_q = e;
wire #(`DLATCHEDASN_X3X1_Q_EB * delay_mult) eb_q = eb;
wire #(`DLATCHEDASN_X3X1_Q_SN * delay_mult) sn_q = sn;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arlatch #(.set_reset_action(4)) q_seq (
.data(d_q),
.set(!sn_q),
.reset(lo_state),
.enable(e_q&!eb_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | e_q==eb_q),
.high_impedance(lo_state),
.out(q)
);
endmodule
`endcelldefine
//END DLATCHEDASN_X3X1


//START DLATCHRD_X0X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DLATCHRD_X0X0_90x128y6p (dn, dp, e, eb, rn, rp, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DLATCHRD_X0X0_90x128y6p (dn, dp, e, eb, rn, rp, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DLATCHRD_X0X0_90x128y6p (dn, dp, e, eb, rn, rp, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DLATCHRD_X0X0_90x128y6p (dn, dp, e, eb, rn, rp, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input dn, dp, e, eb, rn, rp ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`DLATCHRD_X0X0_Q_DN * delay_mult) dn_q = dn;
wire #(`DLATCHRD_X0X0_Q_DP * delay_mult) dp_q = dp;
wire #(`DLATCHRD_X0X0_Q_E * delay_mult) e_q = e;
wire #(`DLATCHRD_X0X0_Q_EB * delay_mult) eb_q = eb;
wire #(`DLATCHRD_X0X0_Q_RN * delay_mult) rn_q = rn;
wire #(`DLATCHRD_X0X0_Q_RP * delay_mult) rp_q = rp;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arlatch #(.set_reset_action(4)) q_seq (
.data(!dn_q&dp_q),
.set(lo_state),
.reset(!rn_q&rp_q),
.enable(e_q&!eb_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | dp_q==dn_q|e_q==eb_q|rp_q==rn_q),
.high_impedance(lo_state),
.out(q)
);

assign #(`DLATCHRD_X0X0_QN_Q * delay_mult) qn = (!power_on | dp_q==dn_q|e_q==eb_q|rp_q==rn_q ? 1'bx : !q);
endmodule
`endcelldefine
//END DLATCHRD_X0X0


//START DLATCHRD_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DLATCHRD_X4X4_90x128y6p (dn, dp, e, eb, rn, rp, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DLATCHRD_X4X4_90x128y6p (dn, dp, e, eb, rn, rp, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DLATCHRD_X4X4_90x128y6p (dn, dp, e, eb, rn, rp, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module DLATCHRD_X4X4_90x128y6p (dn, dp, e, eb, rn, rp, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input dn, dp, e, eb, rn, rp ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`DLATCHRD_X4X4_Q_DN * delay_mult) dn_q = dn;
wire #(`DLATCHRD_X4X4_Q_DP * delay_mult) dp_q = dp;
wire #(`DLATCHRD_X4X4_Q_E * delay_mult) e_q = e;
wire #(`DLATCHRD_X4X4_Q_EB * delay_mult) eb_q = eb;
wire #(`DLATCHRD_X4X4_Q_RN * delay_mult) rn_q = rn;
wire #(`DLATCHRD_X4X4_Q_RP * delay_mult) rp_q = rp;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arlatch #(.set_reset_action(4)) q_seq (
.data(!dn_q&dp_q),
.set(lo_state),
.reset(!rn_q&rp_q),
.enable(e_q&!eb_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | dp_q==dn_q|e_q==eb_q|rp_q==rn_q),
.high_impedance(lo_state),
.out(q)
);

assign #(`DLATCHRD_X4X4_QN_Q * delay_mult) qn = (!power_on | dp_q==dn_q|e_q==eb_q|rp_q==rn_q ? 1'bx : !q);
endmodule
`endcelldefine
//END DLATCHRD_X4X4


//START DLATCH_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module DLATCH_X2X2_90x128y6p (d, e, q, qn, dvdd, dvss, sub);
`else
module DLATCH_X2X2_90x128y6p (d, e, q, qn);
`endif
`else
`ifdef POWER_AWARE
module DLATCH_X2X2_90x128y6p (d, e, q, qn, dvdd, dvss, sub);
`else
module DLATCH_X2X2_90x128y6p (d, e, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input d, e ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`DLATCH_X2X2_Q_D * delay_mult) d_q = d;
wire #(`DLATCH_X2X2_Q_E * delay_mult) e_q = e;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arlatch #(.set_reset_action(4)) q_seq (
.data(d_q),
.set(lo_state),
.reset(lo_state),
.enable(e_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`DLATCH_X2X2_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END DLATCH_X2X2


//START ENDCAP
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module ENDCAP_90x128y6p (dvdd, dvss, sub);
`else
module ENDCAP_90x128y6p ();
`endif
`else
`ifdef POWER_AWARE
module ENDCAP_90x128y6p (dvdd, dvss, sub);
`else
module ENDCAP_90x128y6p ();
`endif
`endif
parameter delay_mult = 1 ;
endmodule
`endcelldefine
//END ENDCAP


//START FADD1B_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module FADD1B_X2X2_90x128y6p (a, b, ci, co, s, dvdd, dvss, sub);
`else
module FADD1B_X2X2_90x128y6p (a, b, ci, co, s);
`endif
`else
`ifdef POWER_AWARE
module FADD1B_X2X2_90x128y6p (a, b, ci, co, s, dvdd, dvss, sub);
`else
module FADD1B_X2X2_90x128y6p (a, b, ci, co, s);
`endif
`endif
parameter delay_mult = 1 ;
input a, b, ci ;
output co, s ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`FADD1B_X2X2_CO_A * delay_mult) a_co = a;
wire #(`FADD1B_X2X2_CO_B * delay_mult) b_co = b;
wire #(`FADD1B_X2X2_CO_CI * delay_mult) ci_co = ci;
wire #(`FADD1B_X2X2_S_A * delay_mult) a_s = a;
wire #(`FADD1B_X2X2_S_B * delay_mult) b_s = b;
wire #(`FADD1B_X2X2_S_CI * delay_mult) ci_s = ci;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_co = !power_on ;
wire data_co = (a_co|b_co) & (a_co|ci_co) & (b_co|ci_co);
assign co = (invalid_co ? 1'bx : data_co);
wire invalid_s = !power_on ;
wire data_s = (a_s|!b_s|!ci_s) & (!a_s|!b_s|ci_s) & (!a_s|b_s|!ci_s) & (a_s|b_s|ci_s);
assign s = (invalid_s ? 1'bx : data_s);
endmodule
`endcelldefine
//END FADD1B_X2X2


//START HADD1B_X0X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module HADD1B_X0X0_90x128y6p (a, b, co, s, dvdd, dvss, sub, tiehi, tielo);
`else
module HADD1B_X0X0_90x128y6p (a, b, co, s);
`endif
`else
`ifdef POWER_AWARE
module HADD1B_X0X0_90x128y6p (a, b, co, s, dvdd, dvss, sub, tiehi, tielo);
`else
module HADD1B_X0X0_90x128y6p (a, b, co, s);
`endif
`endif
parameter delay_mult = 1 ;
input a, b ;
output co, s ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`HADD1B_X0X0_CO_A * delay_mult) a_co = a;
wire #(`HADD1B_X0X0_CO_B * delay_mult) b_co = b;
wire #(`HADD1B_X0X0_S_A * delay_mult) a_s = a;
wire #(`HADD1B_X0X0_S_B * delay_mult) b_s = b;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_co = !power_on ;
wire data_co = a_co&b_co;
assign co = (invalid_co ? 1'bx : data_co);
wire invalid_s = !power_on ;
wire data_s = (!a_s|!b_s) & (a_s|b_s);
assign s = (invalid_s ? 1'bx : data_s);
endmodule
`endcelldefine
//END HADD1B_X0X0


//START HADD1B_X1X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module HADD1B_X1X1_90x128y6p (a, b, co, s, dvdd, dvss, sub, tiehi, tielo);
`else
module HADD1B_X1X1_90x128y6p (a, b, co, s);
`endif
`else
`ifdef POWER_AWARE
module HADD1B_X1X1_90x128y6p (a, b, co, s, dvdd, dvss, sub, tiehi, tielo);
`else
module HADD1B_X1X1_90x128y6p (a, b, co, s);
`endif
`endif
parameter delay_mult = 1 ;
input a, b ;
output co, s ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`HADD1B_X1X1_CO_A * delay_mult) a_co = a;
wire #(`HADD1B_X1X1_CO_B * delay_mult) b_co = b;
wire #(`HADD1B_X1X1_S_A * delay_mult) a_s = a;
wire #(`HADD1B_X1X1_S_B * delay_mult) b_s = b;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_co = !power_on ;
wire data_co = a_co&b_co;
assign co = (invalid_co ? 1'bx : data_co);
wire invalid_s = !power_on ;
wire data_s = (!a_s|!b_s) & (a_s|b_s);
assign s = (invalid_s ? 1'bx : data_s);
endmodule
`endcelldefine
//END HADD1B_X1X1


//START HADDCI1B_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module HADDCI1B_X2X2_90x128y6p (a, b, co, s, dvdd, dvss, sub, tiehi, tielo);
`else
module HADDCI1B_X2X2_90x128y6p (a, b, co, s);
`endif
`else
`ifdef POWER_AWARE
module HADDCI1B_X2X2_90x128y6p (a, b, co, s, dvdd, dvss, sub, tiehi, tielo);
`else
module HADDCI1B_X2X2_90x128y6p (a, b, co, s);
`endif
`endif
parameter delay_mult = 1 ;
input a, b ;
output co, s ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`HADDCI1B_X2X2_CO_A * delay_mult) a_co = a;
wire #(`HADDCI1B_X2X2_CO_B * delay_mult) b_co = b;
wire #(`HADDCI1B_X2X2_S_A * delay_mult) a_s = a;
wire #(`HADDCI1B_X2X2_S_B * delay_mult) b_s = b;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_co = !power_on ;
wire data_co = a_co|b_co;
assign co = (invalid_co ? 1'bx : data_co);
wire invalid_s = !power_on ;
wire data_s = (a_s|!b_s) & (!a_s|b_s);
assign s = (invalid_s ? 1'bx : data_s);
endmodule
`endcelldefine
//END HADDCI1B_X2X2


//START INVTS_X1X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module INVTS_X1X1_90x128y6p (a, e, y, dvdd, dvss, sub, tiehi, tielo);
`else
module INVTS_X1X1_90x128y6p (a, e, y);
`endif
`else
`ifdef POWER_AWARE
module INVTS_X1X1_90x128y6p (a, e, y, dvdd, dvss, sub, tiehi, tielo);
`else
module INVTS_X1X1_90x128y6p (a, e, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, e ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`INVTS_X1X1_Y_A * delay_mult) a_y = a;
wire #(`INVTS_X1X1_Y_E * delay_mult) e_y = e;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter z_state = 1'bz;

wire hiz_y = !e_y;
wire invalid_y = !power_on ;
wire data_y = !a_y;
assign y = (invalid_y ? 1'bx : (hiz_y ? 1'bz : data_y));
endmodule
`endcelldefine
//END INVTS_X1X1


//START INV_GPD_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module INV_GPD_X2X2_90x128y6p (a, y, dvdd, dvss, sub, tiehi, tielo);
`else
module INV_GPD_X2X2_90x128y6p (a, y);
`endif
`else
`ifdef POWER_AWARE
module INV_GPD_X2X2_90x128y6p (a, y, dvdd, dvss, sub, tiehi, tielo);
`else
module INV_GPD_X2X2_90x128y6p (a, y);
`endif
`endif
parameter delay_mult = 1 ;
input a ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`INV_GPD_X2X2_Y_A * delay_mult) a_y = a;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = !a_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END INV_GPD_X2X2


//START INV_X16X16
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module INV_X16X16_90x128y6p (a, y, dvdd, dvss, sub);
`else
module INV_X16X16_90x128y6p (a, y);
`endif
`else
`ifdef POWER_AWARE
module INV_X16X16_90x128y6p (a, y, dvdd, dvss, sub);
`else
module INV_X16X16_90x128y6p (a, y);
`endif
`endif
parameter delay_mult = 1 ;
input a ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`INV_X16X16_Y_A * delay_mult) a_y = a;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = !a_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END INV_X16X16


//START INV_X1_TGATE_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module INV_X1_TGATE_X2X2_90x128y6p (a, io, oi, y, dvdd, dvss, sub, tiehi, tielo);
`else
module INV_X1_TGATE_X2X2_90x128y6p (a, io, oi, y);
`endif
`else
`ifdef POWER_AWARE
module INV_X1_TGATE_X2X2_90x128y6p (a, io, oi, y, dvdd, dvss, sub, tiehi, tielo);
`else
module INV_X1_TGATE_X2X2_90x128y6p (a, io, oi, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, io ;
output oi, y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`INV_X1_TGATE_X2X2_OI_A * delay_mult) a_oi = a;
wire #(`INV_X1_TGATE_X2X2_OI_IO * delay_mult) io_oi = io;
wire #(`INV_X1_TGATE_X2X2_Y_A * delay_mult) a_y = a;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter z_state = 1'bz;

wire hiz_oi = !a_oi;
wire invalid_oi = !power_on ;
wire data_oi = io_oi;
assign oi = (invalid_oi ? 1'bx : (hiz_oi ? 1'bz : data_oi));
wire invalid_y = !power_on ;
wire data_y = !a_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END INV_X1_TGATE_X2X2


//START INV_X1_TGATE_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module INV_X1_TGATE_X4X4_90x128y6p (a, io, oi, y, dvdd, dvss, sub, tiehi, tielo);
`else
module INV_X1_TGATE_X4X4_90x128y6p (a, io, oi, y);
`endif
`else
`ifdef POWER_AWARE
module INV_X1_TGATE_X4X4_90x128y6p (a, io, oi, y, dvdd, dvss, sub, tiehi, tielo);
`else
module INV_X1_TGATE_X4X4_90x128y6p (a, io, oi, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, io ;
output oi, y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`INV_X1_TGATE_X4X4_OI_A * delay_mult) a_oi = a;
wire #(`INV_X1_TGATE_X4X4_OI_IO * delay_mult) io_oi = io;
wire #(`INV_X1_TGATE_X4X4_Y_A * delay_mult) a_y = a;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter z_state = 1'bz;

wire hiz_oi = !a_oi;
wire invalid_oi = !power_on ;
wire data_oi = io_oi;
assign oi = (invalid_oi ? 1'bx : (hiz_oi ? 1'bz : data_oi));
wire invalid_y = !power_on ;
wire data_y = !a_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END INV_X1_TGATE_X4X4


//START INV_X2_TGATE_X8X8
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module INV_X2_TGATE_X8X8_90x128y6p (a, io, oi, y, dvdd, dvss, sub, tiehi, tielo);
`else
module INV_X2_TGATE_X8X8_90x128y6p (a, io, oi, y);
`endif
`else
`ifdef POWER_AWARE
module INV_X2_TGATE_X8X8_90x128y6p (a, io, oi, y, dvdd, dvss, sub, tiehi, tielo);
`else
module INV_X2_TGATE_X8X8_90x128y6p (a, io, oi, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, io ;
output oi, y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`INV_X2_TGATE_X8X8_OI_A * delay_mult) a_oi = a;
wire #(`INV_X2_TGATE_X8X8_OI_IO * delay_mult) io_oi = io;
wire #(`INV_X2_TGATE_X8X8_Y_A * delay_mult) a_y = a;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter z_state = 1'bz;

wire hiz_oi = !a_oi;
wire invalid_oi = !power_on ;
wire data_oi = io_oi;
assign oi = (invalid_oi ? 1'bx : (hiz_oi ? 1'bz : data_oi));
wire invalid_y = !power_on ;
wire data_y = !a_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END INV_X2_TGATE_X8X8


//START INV_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module INV_X4X4_90x128y6p (a, y, dvdd, dvss, sub);
`else
module INV_X4X4_90x128y6p (a, y);
`endif
`else
`ifdef POWER_AWARE
module INV_X4X4_90x128y6p (a, y, dvdd, dvss, sub);
`else
module INV_X4X4_90x128y6p (a, y);
`endif
`endif
parameter delay_mult = 1 ;
input a ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`INV_X4X4_Y_A * delay_mult) a_y = a;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = !a_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END INV_X4X4


//START INV_X6X6
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module INV_X6X6_90x128y6p (a, y, dvdd, dvss, sub);
`else
module INV_X6X6_90x128y6p (a, y);
`endif
`else
`ifdef POWER_AWARE
module INV_X6X6_90x128y6p (a, y, dvdd, dvss, sub);
`else
module INV_X6X6_90x128y6p (a, y);
`endif
`endif
parameter delay_mult = 1 ;
input a ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`INV_X6X6_Y_A * delay_mult) a_y = a;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = !a_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END INV_X6X6


//START INV_X8X8
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module INV_X8X8_90x128y6p (a, y, dvdd, dvss, sub);
`else
module INV_X8X8_90x128y6p (a, y);
`endif
`else
`ifdef POWER_AWARE
module INV_X8X8_90x128y6p (a, y, dvdd, dvss, sub);
`else
module INV_X8X8_90x128y6p (a, y);
`endif
`endif
parameter delay_mult = 1 ;
input a ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`INV_X8X8_Y_A * delay_mult) a_y = a;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = !a_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END INV_X8X8


//START JKFFAR_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module JKFFAR_X4X4_90x128y6p (ck, j, k, r, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module JKFFAR_X4X4_90x128y6p (ck, j, k, r, q, qn);
`endif
`else
`ifdef POWER_AWARE
module JKFFAR_X4X4_90x128y6p (ck, j, k, r, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module JKFFAR_X4X4_90x128y6p (ck, j, k, r, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, j, k, r ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`JKFFAR_X4X4_Q_R * delay_mult) r_q = r;
wire #(`JKFFAR_X4X4_Q_CK * delay_mult) ck_q = ck;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data(j),
.set(lo_state),
.reset(r_q),
.enable(hi_state),
.clock(ck_q),
.sync_toggle(j&k),
.sync_hold(!j&!k),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`JKFFAR_X4X4_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END JKFFAR_X4X4


//START JKFFAS_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module JKFFAS_X4X4_90x128y6p (ck, j, k, s, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module JKFFAS_X4X4_90x128y6p (ck, j, k, s, q, qn);
`endif
`else
`ifdef POWER_AWARE
module JKFFAS_X4X4_90x128y6p (ck, j, k, s, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module JKFFAS_X4X4_90x128y6p (ck, j, k, s, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, j, k, s ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`JKFFAS_X4X4_Q_S * delay_mult) s_q = s;
wire #(`JKFFAS_X4X4_Q_CK * delay_mult) ck_q = ck;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data(j|!k),
.set(s_q),
.reset(lo_state),
.enable(hi_state),
.clock(ck_q),
.sync_toggle(j&k),
.sync_hold(!j&!k),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`JKFFAS_X4X4_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END JKFFAS_X4X4


//START JKFFELAR_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module JKFFELAR_X4X4_90x128y6p (ck, e, j, k, l, li, r, q, qn, dvdd, dvss, sub);
`else
module JKFFELAR_X4X4_90x128y6p (ck, e, j, k, l, li, r, q, qn);
`endif
`else
`ifdef POWER_AWARE
module JKFFELAR_X4X4_90x128y6p (ck, e, j, k, l, li, r, q, qn, dvdd, dvss, sub);
`else
module JKFFELAR_X4X4_90x128y6p (ck, e, j, k, l, li, r, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, e, j, k, l, li, r ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`JKFFELAR_X4X4_Q_CK * delay_mult) ck_q = ck;
wire #(`JKFFELAR_X4X4_Q_E * delay_mult) e_q = e;
wire #(`JKFFELAR_X4X4_Q_J * delay_mult) j_q = j;
wire #(`JKFFELAR_X4X4_Q_K * delay_mult) k_q = k;
wire #(`JKFFELAR_X4X4_Q_L * delay_mult) l_q = l;
wire #(`JKFFELAR_X4X4_Q_LI * delay_mult) li_q = li;
wire #(`JKFFELAR_X4X4_Q_R * delay_mult) r_q = r;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data((j_q|!k_q|l_q) & (!l_q|li_q)),
.set(lo_state),
.reset(r_q),
.enable(e_q),
.clock(ck_q),
.sync_toggle(j_q&k_q&!l_q),
.sync_hold(!j_q&!k_q&!l_q),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`JKFFELAR_X4X4_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END JKFFELAR_X4X4


//START JKFFLAR_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module JKFFLAR_X4X4_90x128y6p (ck, j, k, l, li, r, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module JKFFLAR_X4X4_90x128y6p (ck, j, k, l, li, r, q, qn);
`endif
`else
`ifdef POWER_AWARE
module JKFFLAR_X4X4_90x128y6p (ck, j, k, l, li, r, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module JKFFLAR_X4X4_90x128y6p (ck, j, k, l, li, r, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, j, k, l, li, r ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`JKFFLAR_X4X4_Q_R * delay_mult) r_q = r;
wire #(`JKFFLAR_X4X4_Q_CK * delay_mult) ck_q = ck;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data((j|l) & (!l|li)),
.set(lo_state),
.reset(r_q),
.enable(hi_state),
.clock(ck_q),
.sync_toggle(j&k&!l),
.sync_hold(!j&!k&!l),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`JKFFLAR_X4X4_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END JKFFLAR_X4X4


//START JKFF_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module JKFF_X2X2_90x128y6p (ck, j, k, q, qn, dvdd, dvss, sub);
`else
module JKFF_X2X2_90x128y6p (ck, j, k, q, qn);
`endif
`else
`ifdef POWER_AWARE
module JKFF_X2X2_90x128y6p (ck, j, k, q, qn, dvdd, dvss, sub);
`else
module JKFF_X2X2_90x128y6p (ck, j, k, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, j, k ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`JKFF_X2X2_Q_CK * delay_mult) ck_q = ck;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data(j|!k),
.set(lo_state),
.reset(lo_state),
.enable(hi_state),
.clock(ck_q),
.sync_toggle(j&k),
.sync_hold(!j&!k),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`JKFF_X2X2_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END JKFF_X2X2


//START JKLATCHEN_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module JKLATCHEN_X2X2_90x128y6p (e, j, k, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module JKLATCHEN_X2X2_90x128y6p (e, j, k, q, qn);
`endif
`else
`ifdef POWER_AWARE
module JKLATCHEN_X2X2_90x128y6p (e, j, k, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module JKLATCHEN_X2X2_90x128y6p (e, j, k, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input e, j, k ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`JKLATCHEN_X2X2_Q_E * delay_mult) e_q = e;
wire #(`JKLATCHEN_X2X2_Q_J * delay_mult) j_q = j;
wire #(`JKLATCHEN_X2X2_Q_K * delay_mult) k_q = k;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arlatch #(.set_reset_action(4)) q_seq (
.data(j_q|!k_q),
.set(lo_state),
.reset(lo_state),
.enable(e_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | j_q==k_q),
.high_impedance(lo_state),
.out(q)
);

assign #(`JKLATCHEN_X2X2_QN_Q * delay_mult) qn = (!power_on | j_q==k_q ? 1'bx : !q);
endmodule
`endcelldefine
//END JKLATCHEN_X2X2


//START MUX21D_X0X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module MUX21D_X0X0_90x128y6p (a0n, a0p, a1n, a1p, s0n, s0p, yn, yp, dvdd, dvss, sub, tiehi, tielo);
`else
module MUX21D_X0X0_90x128y6p (a0n, a0p, a1n, a1p, s0n, s0p, yn, yp);
`endif
`else
`ifdef POWER_AWARE
module MUX21D_X0X0_90x128y6p (a0n, a0p, a1n, a1p, s0n, s0p, yn, yp, dvdd, dvss, sub, tiehi, tielo);
`else
module MUX21D_X0X0_90x128y6p (a0n, a0p, a1n, a1p, s0n, s0p, yn, yp);
`endif
`endif
parameter delay_mult = 1 ;
input a0n, a0p, a1n, a1p, s0n, s0p ;
output yn, yp ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`MUX21D_X0X0_YP_A0N * delay_mult) a0n_yp = a0n;
wire #(`MUX21D_X0X0_YP_A0P * delay_mult) a0p_yp = a0p;
wire #(`MUX21D_X0X0_YP_A1N * delay_mult) a1n_yp = a1n;
wire #(`MUX21D_X0X0_YP_A1P * delay_mult) a1p_yp = a1p;
wire #(`MUX21D_X0X0_YP_S0N * delay_mult) s0n_yp = s0n;
wire #(`MUX21D_X0X0_YP_S0P * delay_mult) s0p_yp = s0p;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter x_state = 1'bx;

wire invalid_yp = !power_on | (a0p_yp==a0n_yp|a1p_yp==a1n_yp|s0p_yp==s0n_yp);
wire data_yp = (!a0n_yp&a0p_yp&s0n_yp&!s0p_yp) | (!a1n_yp&a1p_yp&!s0n_yp&s0p_yp);
assign yp = (invalid_yp ? 1'bx : data_yp);
assign #(`MUX21D_X0X0_YN_YP * delay_mult) yn = (invalid_yp ? 1'bx : !yp);

endmodule
`endcelldefine
//END MUX21D_X0X0


//START MUX21D_X1X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module MUX21D_X1X1_90x128y6p (a0n, a0p, a1n, a1p, s0n, s0p, yn, yp, dvdd, dvss, sub);
`else
module MUX21D_X1X1_90x128y6p (a0n, a0p, a1n, a1p, s0n, s0p, yn, yp);
`endif
`else
`ifdef POWER_AWARE
module MUX21D_X1X1_90x128y6p (a0n, a0p, a1n, a1p, s0n, s0p, yn, yp, dvdd, dvss, sub);
`else
module MUX21D_X1X1_90x128y6p (a0n, a0p, a1n, a1p, s0n, s0p, yn, yp);
`endif
`endif
parameter delay_mult = 1 ;
input a0n, a0p, a1n, a1p, s0n, s0p ;
output yn, yp ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`MUX21D_X1X1_YP_A0N * delay_mult) a0n_yp = a0n;
wire #(`MUX21D_X1X1_YP_A0P * delay_mult) a0p_yp = a0p;
wire #(`MUX21D_X1X1_YP_A1N * delay_mult) a1n_yp = a1n;
wire #(`MUX21D_X1X1_YP_A1P * delay_mult) a1p_yp = a1p;
wire #(`MUX21D_X1X1_YP_S0N * delay_mult) s0n_yp = s0n;
wire #(`MUX21D_X1X1_YP_S0P * delay_mult) s0p_yp = s0p;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter x_state = 1'bx;

wire invalid_yp = !power_on | (a0p_yp==a0n_yp|a1p_yp==a1n_yp|s0p_yp==s0n_yp);
wire data_yp = (!a0n_yp&a0p_yp&s0n_yp&!s0p_yp) | (!a1n_yp&a1p_yp&!s0n_yp&s0p_yp);
assign yp = (invalid_yp ? 1'bx : data_yp);
assign #(`MUX21D_X1X1_YN_YP * delay_mult) yn = (invalid_yp ? 1'bx : !yp);

endmodule
`endcelldefine
//END MUX21D_X1X1


//START MUX21D_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module MUX21D_X2X2_90x128y6p (a0n, a0p, a1n, a1p, s0n, s0p, yn, yp, dvdd, dvss, sub);
`else
module MUX21D_X2X2_90x128y6p (a0n, a0p, a1n, a1p, s0n, s0p, yn, yp);
`endif
`else
`ifdef POWER_AWARE
module MUX21D_X2X2_90x128y6p (a0n, a0p, a1n, a1p, s0n, s0p, yn, yp, dvdd, dvss, sub);
`else
module MUX21D_X2X2_90x128y6p (a0n, a0p, a1n, a1p, s0n, s0p, yn, yp);
`endif
`endif
parameter delay_mult = 1 ;
input a0n, a0p, a1n, a1p, s0n, s0p ;
output yn, yp ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`MUX21D_X2X2_YP_A0N * delay_mult) a0n_yp = a0n;
wire #(`MUX21D_X2X2_YP_A0P * delay_mult) a0p_yp = a0p;
wire #(`MUX21D_X2X2_YP_A1N * delay_mult) a1n_yp = a1n;
wire #(`MUX21D_X2X2_YP_A1P * delay_mult) a1p_yp = a1p;
wire #(`MUX21D_X2X2_YP_S0N * delay_mult) s0n_yp = s0n;
wire #(`MUX21D_X2X2_YP_S0P * delay_mult) s0p_yp = s0p;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter x_state = 1'bx;

wire invalid_yp = !power_on | (a0p_yp==a0n_yp|a1p_yp==a1n_yp|s0p_yp==s0n_yp);
wire data_yp = (!a0n_yp&a0p_yp&s0n_yp&!s0p_yp) | (!a1n_yp&a1p_yp&!s0n_yp&s0p_yp);
assign yp = (invalid_yp ? 1'bx : data_yp);
assign #(`MUX21D_X2X2_YN_YP * delay_mult) yn = (invalid_yp ? 1'bx : !yp);

endmodule
`endcelldefine
//END MUX21D_X2X2


//START MUX21SD_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module MUX21SD_X2X2_90x128y6p (a0, a1, s0n, s0p, y, dvdd, dvss, sub, tiehi, tielo);
`else
module MUX21SD_X2X2_90x128y6p (a0, a1, s0n, s0p, y);
`endif
`else
`ifdef POWER_AWARE
module MUX21SD_X2X2_90x128y6p (a0, a1, s0n, s0p, y, dvdd, dvss, sub, tiehi, tielo);
`else
module MUX21SD_X2X2_90x128y6p (a0, a1, s0n, s0p, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, s0n, s0p ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`MUX21SD_X2X2_Y_A0 * delay_mult) a0_y = a0;
wire #(`MUX21SD_X2X2_Y_A1 * delay_mult) a1_y = a1;
wire #(`MUX21SD_X2X2_Y_S0N * delay_mult) s0n_y = s0n;
wire #(`MUX21SD_X2X2_Y_S0P * delay_mult) s0p_y = s0p;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter x_state = 1'bx;

wire invalid_y = !power_on | (s0p_y==s0n_y);
wire data_y = (a0_y&!s0p_y) | (a1_y&!s0n_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END MUX21SD_X2X2


//START MUX21_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module MUX21_X2X2_90x128y6p (a0, a1, s0, y, dvdd, dvss, sub);
`else
module MUX21_X2X2_90x128y6p (a0, a1, s0, y);
`endif
`else
`ifdef POWER_AWARE
module MUX21_X2X2_90x128y6p (a0, a1, s0, y, dvdd, dvss, sub);
`else
module MUX21_X2X2_90x128y6p (a0, a1, s0, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, s0 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`MUX21_X2X2_Y_A0 * delay_mult) a0_y = a0;
wire #(`MUX21_X2X2_Y_A1 * delay_mult) a1_y = a1;
wire #(`MUX21_X2X2_Y_S0 * delay_mult) s0_y = s0;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (a0_y|s0_y) & (a1_y|!s0_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END MUX21_X2X2


//START MUX31D_X1X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module MUX31D_X1X1_90x128y6p (a0n, a0p, a1n, a1p, a2n, a2p, s0n, s0p, s1n, s1p, s2n, s2p, yn, yp, dvdd, dvss, sub);
`else
module MUX31D_X1X1_90x128y6p (a0n, a0p, a1n, a1p, a2n, a2p, s0n, s0p, s1n, s1p, s2n, s2p, yn, yp);
`endif
`else
`ifdef POWER_AWARE
module MUX31D_X1X1_90x128y6p (a0n, a0p, a1n, a1p, a2n, a2p, s0n, s0p, s1n, s1p, s2n, s2p, yn, yp, dvdd, dvss, sub);
`else
module MUX31D_X1X1_90x128y6p (a0n, a0p, a1n, a1p, a2n, a2p, s0n, s0p, s1n, s1p, s2n, s2p, yn, yp);
`endif
`endif
parameter delay_mult = 1 ;
input a0n, a0p, a1n, a1p, a2n, a2p, s0n, s0p, s1n, s1p, s2n, s2p ;
output yn, yp ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`MUX31D_X1X1_YP_A0N * delay_mult) a0n_yp = a0n;
wire #(`MUX31D_X1X1_YP_A0P * delay_mult) a0p_yp = a0p;
wire #(`MUX31D_X1X1_YP_A1N * delay_mult) a1n_yp = a1n;
wire #(`MUX31D_X1X1_YP_A1P * delay_mult) a1p_yp = a1p;
wire #(`MUX31D_X1X1_YP_A2N * delay_mult) a2n_yp = a2n;
wire #(`MUX31D_X1X1_YP_A2P * delay_mult) a2p_yp = a2p;
wire #(`MUX31D_X1X1_YP_S0N * delay_mult) s0n_yp = s0n;
wire #(`MUX31D_X1X1_YP_S0P * delay_mult) s0p_yp = s0p;
wire #(`MUX31D_X1X1_YP_S1N * delay_mult) s1n_yp = s1n;
wire #(`MUX31D_X1X1_YP_S1P * delay_mult) s1p_yp = s1p;
wire #(`MUX31D_X1X1_YP_S2N * delay_mult) s2n_yp = s2n;
wire #(`MUX31D_X1X1_YP_S2P * delay_mult) s2p_yp = s2p;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arlatch #(.set_reset_action(4)) yp_seq (
.data((!a0n_yp&a0p_yp&!s0n_yp&s0p_yp) | (!a1n_yp&a1p_yp&!s1n_yp&s1p_yp) | (!a2n_yp&a2p_yp&!s2n_yp&s2p_yp)),
.set(lo_state),
.reset(lo_state),
.enable((!s0n_yp&s0p_yp) | (!s1n_yp&s1p_yp) | (!s2n_yp&s2p_yp)),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | (a0p_yp == a0n_yp) | (a1p_yp == a1n_yp) |  (a2p_yp == a2n_yp) |  (s0p_yp == s0n_yp) |  (s1p_yp == s1n_yp) |  (s2p_yp == s2n_yp) | (s0p_yp & s1p_yp) | (s0p_yp & s2p_yp) | (s1p_yp & s2p_yp)),
.high_impedance(lo_state),
.out(yp)
);

assign #(`MUX31D_X1X1_YN_YP * delay_mult) yn = (!power_on | (a0p_yp == a0n_yp) | (a1p_yp == a1n_yp) |  (a2p_yp == a2n_yp) |  (s0p_yp == s0n_yp) |  (s1p_yp == s1n_yp) |  (s2p_yp == s2n_yp) | (s0p_yp & s1p_yp) | (s0p_yp & s2p_yp) | (s1p_yp & s2p_yp) ? 1'bx : !yp);
endmodule
`endcelldefine
//END MUX31D_X1X1


//START MUX31_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module MUX31_X2X2_90x128y6p (a0, a1, a2, s0, s1, y, dvdd, dvss, sub);
`else
module MUX31_X2X2_90x128y6p (a0, a1, a2, s0, s1, y);
`endif
`else
`ifdef POWER_AWARE
module MUX31_X2X2_90x128y6p (a0, a1, a2, s0, s1, y, dvdd, dvss, sub);
`else
module MUX31_X2X2_90x128y6p (a0, a1, a2, s0, s1, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, a2, s0, s1 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`MUX31_X2X2_Y_A0 * delay_mult) a0_y = a0;
wire #(`MUX31_X2X2_Y_A1 * delay_mult) a1_y = a1;
wire #(`MUX31_X2X2_Y_A2 * delay_mult) a2_y = a2;
wire #(`MUX31_X2X2_Y_S0 * delay_mult) s0_y = s0;
wire #(`MUX31_X2X2_Y_S1 * delay_mult) s1_y = s1;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (a0_y|s0_y|s1_y) & (a1_y|!s0_y|s1_y) & (a2_y|!s1_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END MUX31_X2X2


//START MUX41_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module MUX41_X2X2_90x128y6p (a0, a1, a2, a3, s0, s1, y, dvdd, dvss, sub, tiehi, tielo);
`else
module MUX41_X2X2_90x128y6p (a0, a1, a2, a3, s0, s1, y);
`endif
`else
`ifdef POWER_AWARE
module MUX41_X2X2_90x128y6p (a0, a1, a2, a3, s0, s1, y, dvdd, dvss, sub, tiehi, tielo);
`else
module MUX41_X2X2_90x128y6p (a0, a1, a2, a3, s0, s1, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, a2, a3, s0, s1 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`MUX41_X2X2_Y_A0 * delay_mult) a0_y = a0;
wire #(`MUX41_X2X2_Y_A1 * delay_mult) a1_y = a1;
wire #(`MUX41_X2X2_Y_A2 * delay_mult) a2_y = a2;
wire #(`MUX41_X2X2_Y_A3 * delay_mult) a3_y = a3;
wire #(`MUX41_X2X2_Y_S0 * delay_mult) s0_y = s0;
wire #(`MUX41_X2X2_Y_S1 * delay_mult) s1_y = s1;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (a3_y&s0_y&s1_y) | (a2_y&!s0_y&s1_y) | (a2_y&a3_y&s1_y) | (a1_y&s0_y&!s1_y) | (a1_y&a3_y&s0_y) | (a0_y&!s0_y&!s1_y) | (a0_y&a2_y&!s0_y) | (a0_y&a1_y&!s1_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END MUX41_X2X2


//START MUX81_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module MUX81_X2X2_90x128y6p (a0, a1, a2, a3, a4, a5, a6, a7, s0, s1, s2, y, dvdd, dvss, sub, tiehi, tielo);
`else
module MUX81_X2X2_90x128y6p (a0, a1, a2, a3, a4, a5, a6, a7, s0, s1, s2, y);
`endif
`else
`ifdef POWER_AWARE
module MUX81_X2X2_90x128y6p (a0, a1, a2, a3, a4, a5, a6, a7, s0, s1, s2, y, dvdd, dvss, sub, tiehi, tielo);
`else
module MUX81_X2X2_90x128y6p (a0, a1, a2, a3, a4, a5, a6, a7, s0, s1, s2, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, a2, a3, a4, a5, a6, a7, s0, s1, s2 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`MUX81_X2X2_Y_A0 * delay_mult) a0_y = a0;
wire #(`MUX81_X2X2_Y_A1 * delay_mult) a1_y = a1;
wire #(`MUX81_X2X2_Y_A2 * delay_mult) a2_y = a2;
wire #(`MUX81_X2X2_Y_A3 * delay_mult) a3_y = a3;
wire #(`MUX81_X2X2_Y_A4 * delay_mult) a4_y = a4;
wire #(`MUX81_X2X2_Y_A5 * delay_mult) a5_y = a5;
wire #(`MUX81_X2X2_Y_A6 * delay_mult) a6_y = a6;
wire #(`MUX81_X2X2_Y_A7 * delay_mult) a7_y = a7;
wire #(`MUX81_X2X2_Y_S0 * delay_mult) s0_y = s0;
wire #(`MUX81_X2X2_Y_S1 * delay_mult) s1_y = s1;
wire #(`MUX81_X2X2_Y_S2 * delay_mult) s2_y = s2;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!s2_y&!s1_y&!s0_y&a0_y) | (!s2_y&!s1_y&s0_y&a1_y) | (!s2_y&s1_y&!s0_y&a2_y) | (!s2_y&s1_y&s0_y&a3_y) | (s2_y&!s1_y&!s0_y&a4_y) | (s2_y&!s1_y&s0_y&a5_y) | (s2_y&s1_y&!s0_y&a6_y) | (s2_y&s1_y&s0_y&a7_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END MUX81_X2X2


//START MUXN21_X0X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module MUXN21_X0X0_90x128y6p (a0, a1, s0, yn, dvdd, dvss, sub, tiehi, tielo);
`else
module MUXN21_X0X0_90x128y6p (a0, a1, s0, yn);
`endif
`else
`ifdef POWER_AWARE
module MUXN21_X0X0_90x128y6p (a0, a1, s0, yn, dvdd, dvss, sub, tiehi, tielo);
`else
module MUXN21_X0X0_90x128y6p (a0, a1, s0, yn);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, s0 ;
output yn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`MUXN21_X0X0_YN_A0 * delay_mult) a0_yn = a0;
wire #(`MUXN21_X0X0_YN_A1 * delay_mult) a1_yn = a1;
wire #(`MUXN21_X0X0_YN_S0 * delay_mult) s0_yn = s0;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_yn = !power_on ;
wire data_yn = (!a0_yn|s0_yn) & (!a1_yn|!s0_yn);
assign yn = (invalid_yn ? 1'bx : data_yn);
endmodule
`endcelldefine
//END MUXN21_X0X0


//START MUXN21_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module MUXN21_X4X4_90x128y6p (a0, a1, s0, yn, dvdd, dvss, sub);
`else
module MUXN21_X4X4_90x128y6p (a0, a1, s0, yn);
`endif
`else
`ifdef POWER_AWARE
module MUXN21_X4X4_90x128y6p (a0, a1, s0, yn, dvdd, dvss, sub);
`else
module MUXN21_X4X4_90x128y6p (a0, a1, s0, yn);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, s0 ;
output yn ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`MUXN21_X4X4_YN_A0 * delay_mult) a0_yn = a0;
wire #(`MUXN21_X4X4_YN_A1 * delay_mult) a1_yn = a1;
wire #(`MUXN21_X4X4_YN_S0 * delay_mult) s0_yn = s0;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_yn = !power_on ;
wire data_yn = (!a0_yn|s0_yn) & (!a1_yn|!s0_yn);
assign yn = (invalid_yn ? 1'bx : data_yn);
endmodule
`endcelldefine
//END MUXN21_X4X4


//START NAND2N_X2X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module NAND2N_X2X1_90x128y6p (an, b, y, dvdd, dvss, sub);
`else
module NAND2N_X2X1_90x128y6p (an, b, y);
`endif
`else
`ifdef POWER_AWARE
module NAND2N_X2X1_90x128y6p (an, b, y, dvdd, dvss, sub);
`else
module NAND2N_X2X1_90x128y6p (an, b, y);
`endif
`endif
parameter delay_mult = 1 ;
input an, b ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`NAND2N_X2X1_Y_AN * delay_mult) an_y = an;
wire #(`NAND2N_X2X1_Y_B * delay_mult) b_y = b;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = an_y|!b_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END NAND2N_X2X1


//START NAND2_X2X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module NAND2_X2X1_90x128y6p (a, b, y, dvdd, dvss, sub);
`else
module NAND2_X2X1_90x128y6p (a, b, y);
`endif
`else
`ifdef POWER_AWARE
module NAND2_X2X1_90x128y6p (a, b, y, dvdd, dvss, sub);
`else
module NAND2_X2X1_90x128y6p (a, b, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`NAND2_X2X1_Y_A * delay_mult) a_y = a;
wire #(`NAND2_X2X1_Y_B * delay_mult) b_y = b;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = !a_y|!b_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END NAND2_X2X1


//START NAND3N_X2X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module NAND3N_X2X0_90x128y6p (an, b, c, y, dvdd, dvss, sub);
`else
module NAND3N_X2X0_90x128y6p (an, b, c, y);
`endif
`else
`ifdef POWER_AWARE
module NAND3N_X2X0_90x128y6p (an, b, c, y, dvdd, dvss, sub);
`else
module NAND3N_X2X0_90x128y6p (an, b, c, y);
`endif
`endif
parameter delay_mult = 1 ;
input an, b, c ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`NAND3N_X2X0_Y_AN * delay_mult) an_y = an;
wire #(`NAND3N_X2X0_Y_B * delay_mult) b_y = b;
wire #(`NAND3N_X2X0_Y_C * delay_mult) c_y = c;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = an_y|!b_y|!c_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END NAND3N_X2X0


//START NAND3_X2X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module NAND3_X2X0_90x128y6p (a, b, c, y, dvdd, dvss, sub);
`else
module NAND3_X2X0_90x128y6p (a, b, c, y);
`endif
`else
`ifdef POWER_AWARE
module NAND3_X2X0_90x128y6p (a, b, c, y, dvdd, dvss, sub);
`else
module NAND3_X2X0_90x128y6p (a, b, c, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b, c ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`NAND3_X2X0_Y_A * delay_mult) a_y = a;
wire #(`NAND3_X2X0_Y_B * delay_mult) b_y = b;
wire #(`NAND3_X2X0_Y_C * delay_mult) c_y = c;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = !a_y|!b_y|!c_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END NAND3_X2X0


//START NAND4NN_X1X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module NAND4NN_X1X0_90x128y6p (an, bn, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module NAND4NN_X1X0_90x128y6p (an, bn, c, d, y);
`endif
`else
`ifdef POWER_AWARE
module NAND4NN_X1X0_90x128y6p (an, bn, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module NAND4NN_X1X0_90x128y6p (an, bn, c, d, y);
`endif
`endif
parameter delay_mult = 1 ;
input an, bn, c, d ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`NAND4NN_X1X0_Y_AN * delay_mult) an_y = an;
wire #(`NAND4NN_X1X0_Y_BN * delay_mult) bn_y = bn;
wire #(`NAND4NN_X1X0_Y_C * delay_mult) c_y = c;
wire #(`NAND4NN_X1X0_Y_D * delay_mult) d_y = d;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = an_y|bn_y|!c_y|!d_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END NAND4NN_X1X0


//START NAND4N_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module NAND4N_X2X2_90x128y6p (an, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module NAND4N_X2X2_90x128y6p (an, b, c, d, y);
`endif
`else
`ifdef POWER_AWARE
module NAND4N_X2X2_90x128y6p (an, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module NAND4N_X2X2_90x128y6p (an, b, c, d, y);
`endif
`endif
parameter delay_mult = 1 ;
input an, b, c, d ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`NAND4N_X2X2_Y_AN * delay_mult) an_y = an;
wire #(`NAND4N_X2X2_Y_B * delay_mult) b_y = b;
wire #(`NAND4N_X2X2_Y_C * delay_mult) c_y = c;
wire #(`NAND4N_X2X2_Y_D * delay_mult) d_y = d;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = an_y|!b_y|!c_y|!d_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END NAND4N_X2X2


//START NAND4_X1X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module NAND4_X1X0_90x128y6p (a, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module NAND4_X1X0_90x128y6p (a, b, c, d, y);
`endif
`else
`ifdef POWER_AWARE
module NAND4_X1X0_90x128y6p (a, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module NAND4_X1X0_90x128y6p (a, b, c, d, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b, c, d ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`NAND4_X1X0_Y_A * delay_mult) a_y = a;
wire #(`NAND4_X1X0_Y_B * delay_mult) b_y = b;
wire #(`NAND4_X1X0_Y_C * delay_mult) c_y = c;
wire #(`NAND4_X1X0_Y_D * delay_mult) d_y = d;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = !a_y|!b_y|!c_y|!d_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END NAND4_X1X0


//START NAND4_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module NAND4_X2X2_90x128y6p (a, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module NAND4_X2X2_90x128y6p (a, b, c, d, y);
`endif
`else
`ifdef POWER_AWARE
module NAND4_X2X2_90x128y6p (a, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module NAND4_X2X2_90x128y6p (a, b, c, d, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b, c, d ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`NAND4_X2X2_Y_A * delay_mult) a_y = a;
wire #(`NAND4_X2X2_Y_B * delay_mult) b_y = b;
wire #(`NAND4_X2X2_Y_C * delay_mult) c_y = c;
wire #(`NAND4_X2X2_Y_D * delay_mult) d_y = d;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = !a_y|!b_y|!c_y|!d_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END NAND4_X2X2


//START NOR2N_X1X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module NOR2N_X1X2_90x128y6p (an, b, y, dvdd, dvss, sub);
`else
module NOR2N_X1X2_90x128y6p (an, b, y);
`endif
`else
`ifdef POWER_AWARE
module NOR2N_X1X2_90x128y6p (an, b, y, dvdd, dvss, sub);
`else
module NOR2N_X1X2_90x128y6p (an, b, y);
`endif
`endif
parameter delay_mult = 1 ;
input an, b ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`NOR2N_X1X2_Y_AN * delay_mult) an_y = an;
wire #(`NOR2N_X1X2_Y_B * delay_mult) b_y = b;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = an_y&!b_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END NOR2N_X1X2


//START NOR2_X1X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module NOR2_X1X2_90x128y6p (a, b, y, dvdd, dvss, sub);
`else
module NOR2_X1X2_90x128y6p (a, b, y);
`endif
`else
`ifdef POWER_AWARE
module NOR2_X1X2_90x128y6p (a, b, y, dvdd, dvss, sub);
`else
module NOR2_X1X2_90x128y6p (a, b, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`NOR2_X1X2_Y_A * delay_mult) a_y = a;
wire #(`NOR2_X1X2_Y_B * delay_mult) b_y = b;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = !a_y&!b_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END NOR2_X1X2


//START NOR3N_X0X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module NOR3N_X0X2_90x128y6p (an, b, c, y, dvdd, dvss, sub);
`else
module NOR3N_X0X2_90x128y6p (an, b, c, y);
`endif
`else
`ifdef POWER_AWARE
module NOR3N_X0X2_90x128y6p (an, b, c, y, dvdd, dvss, sub);
`else
module NOR3N_X0X2_90x128y6p (an, b, c, y);
`endif
`endif
parameter delay_mult = 1 ;
input an, b, c ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`NOR3N_X0X2_Y_AN * delay_mult) an_y = an;
wire #(`NOR3N_X0X2_Y_B * delay_mult) b_y = b;
wire #(`NOR3N_X0X2_Y_C * delay_mult) c_y = c;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = an_y&!b_y&!c_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END NOR3N_X0X2


//START NOR3_X0X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module NOR3_X0X2_90x128y6p (a, b, c, y, dvdd, dvss, sub);
`else
module NOR3_X0X2_90x128y6p (a, b, c, y);
`endif
`else
`ifdef POWER_AWARE
module NOR3_X0X2_90x128y6p (a, b, c, y, dvdd, dvss, sub);
`else
module NOR3_X0X2_90x128y6p (a, b, c, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b, c ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`NOR3_X0X2_Y_A * delay_mult) a_y = a;
wire #(`NOR3_X0X2_Y_B * delay_mult) b_y = b;
wire #(`NOR3_X0X2_Y_C * delay_mult) c_y = c;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = !a_y&!b_y&!c_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END NOR3_X0X2


//START NOR4NN_X0X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module NOR4NN_X0X1_90x128y6p (an, bn, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module NOR4NN_X0X1_90x128y6p (an, bn, c, d, y);
`endif
`else
`ifdef POWER_AWARE
module NOR4NN_X0X1_90x128y6p (an, bn, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module NOR4NN_X0X1_90x128y6p (an, bn, c, d, y);
`endif
`endif
parameter delay_mult = 1 ;
input an, bn, c, d ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`NOR4NN_X0X1_Y_AN * delay_mult) an_y = an;
wire #(`NOR4NN_X0X1_Y_BN * delay_mult) bn_y = bn;
wire #(`NOR4NN_X0X1_Y_C * delay_mult) c_y = c;
wire #(`NOR4NN_X0X1_Y_D * delay_mult) d_y = d;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = an_y&bn_y&!c_y&!d_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END NOR4NN_X0X1


//START NOR4N_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module NOR4N_X2X2_90x128y6p (an, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module NOR4N_X2X2_90x128y6p (an, b, c, d, y);
`endif
`else
`ifdef POWER_AWARE
module NOR4N_X2X2_90x128y6p (an, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module NOR4N_X2X2_90x128y6p (an, b, c, d, y);
`endif
`endif
parameter delay_mult = 1 ;
input an, b, c, d ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`NOR4N_X2X2_Y_AN * delay_mult) an_y = an;
wire #(`NOR4N_X2X2_Y_B * delay_mult) b_y = b;
wire #(`NOR4N_X2X2_Y_C * delay_mult) c_y = c;
wire #(`NOR4N_X2X2_Y_D * delay_mult) d_y = d;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = an_y&!b_y&!c_y&!d_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END NOR4N_X2X2


//START NOR4_X0X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module NOR4_X0X1_90x128y6p (a, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module NOR4_X0X1_90x128y6p (a, b, c, d, y);
`endif
`else
`ifdef POWER_AWARE
module NOR4_X0X1_90x128y6p (a, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module NOR4_X0X1_90x128y6p (a, b, c, d, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b, c, d ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`NOR4_X0X1_Y_A * delay_mult) a_y = a;
wire #(`NOR4_X0X1_Y_B * delay_mult) b_y = b;
wire #(`NOR4_X0X1_Y_C * delay_mult) c_y = c;
wire #(`NOR4_X0X1_Y_D * delay_mult) d_y = d;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = !a_y&!b_y&!c_y&!d_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END NOR4_X0X1


//START NOR4_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module NOR4_X2X2_90x128y6p (a, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module NOR4_X2X2_90x128y6p (a, b, c, d, y);
`endif
`else
`ifdef POWER_AWARE
module NOR4_X2X2_90x128y6p (a, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module NOR4_X2X2_90x128y6p (a, b, c, d, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b, c, d ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`NOR4_X2X2_Y_A * delay_mult) a_y = a;
wire #(`NOR4_X2X2_Y_B * delay_mult) b_y = b;
wire #(`NOR4_X2X2_Y_C * delay_mult) c_y = c;
wire #(`NOR4_X2X2_Y_D * delay_mult) d_y = d;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = !a_y&!b_y&!c_y&!d_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END NOR4_X2X2


//START OAI211_X0X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module OAI211_X0X0_90x128y6p (a0, a1, b0, c0, y, dvdd, dvss, sub);
`else
module OAI211_X0X0_90x128y6p (a0, a1, b0, c0, y);
`endif
`else
`ifdef POWER_AWARE
module OAI211_X0X0_90x128y6p (a0, a1, b0, c0, y, dvdd, dvss, sub);
`else
module OAI211_X0X0_90x128y6p (a0, a1, b0, c0, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, b0, c0 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`OAI211_X0X0_Y_A0 * delay_mult) a0_y = a0;
wire #(`OAI211_X0X0_Y_A1 * delay_mult) a1_y = a1;
wire #(`OAI211_X0X0_Y_B0 * delay_mult) b0_y = b0;
wire #(`OAI211_X0X0_Y_C0 * delay_mult) c0_y = c0;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a0_y&!a1_y) | (!b0_y) | (!c0_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END OAI211_X0X0


//START OAI21_X0X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module OAI21_X0X0_90x128y6p (a0, a1, b0, y, dvdd, dvss, sub);
`else
module OAI21_X0X0_90x128y6p (a0, a1, b0, y);
`endif
`else
`ifdef POWER_AWARE
module OAI21_X0X0_90x128y6p (a0, a1, b0, y, dvdd, dvss, sub);
`else
module OAI21_X0X0_90x128y6p (a0, a1, b0, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, b0 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`OAI21_X0X0_Y_A0 * delay_mult) a0_y = a0;
wire #(`OAI21_X0X0_Y_A1 * delay_mult) a1_y = a1;
wire #(`OAI21_X0X0_Y_B0 * delay_mult) b0_y = b0;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a0_y&!a1_y) | (!b0_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END OAI21_X0X0


//START OAI221_X1X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module OAI221_X1X0_90x128y6p (a0, a1, b0, b1, c0, y, dvdd, dvss, sub, tiehi, tielo);
`else
module OAI221_X1X0_90x128y6p (a0, a1, b0, b1, c0, y);
`endif
`else
`ifdef POWER_AWARE
module OAI221_X1X0_90x128y6p (a0, a1, b0, b1, c0, y, dvdd, dvss, sub, tiehi, tielo);
`else
module OAI221_X1X0_90x128y6p (a0, a1, b0, b1, c0, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, b0, b1, c0 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`OAI221_X1X0_Y_A0 * delay_mult) a0_y = a0;
wire #(`OAI221_X1X0_Y_A1 * delay_mult) a1_y = a1;
wire #(`OAI221_X1X0_Y_B0 * delay_mult) b0_y = b0;
wire #(`OAI221_X1X0_Y_B1 * delay_mult) b1_y = b1;
wire #(`OAI221_X1X0_Y_C0 * delay_mult) c0_y = c0;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a0_y&!a1_y) | (!b0_y&!b1_y) | (!c0_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END OAI221_X1X0


//START OAI222_X1X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module OAI222_X1X0_90x128y6p (a0, a1, b0, b1, c0, c1, y, dvdd, dvss, sub, tiehi, tielo);
`else
module OAI222_X1X0_90x128y6p (a0, a1, b0, b1, c0, c1, y);
`endif
`else
`ifdef POWER_AWARE
module OAI222_X1X0_90x128y6p (a0, a1, b0, b1, c0, c1, y, dvdd, dvss, sub, tiehi, tielo);
`else
module OAI222_X1X0_90x128y6p (a0, a1, b0, b1, c0, c1, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, b0, b1, c0, c1 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`OAI222_X1X0_Y_A0 * delay_mult) a0_y = a0;
wire #(`OAI222_X1X0_Y_A1 * delay_mult) a1_y = a1;
wire #(`OAI222_X1X0_Y_B0 * delay_mult) b0_y = b0;
wire #(`OAI222_X1X0_Y_B1 * delay_mult) b1_y = b1;
wire #(`OAI222_X1X0_Y_C0 * delay_mult) c0_y = c0;
wire #(`OAI222_X1X0_Y_C1 * delay_mult) c1_y = c1;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a0_y&!a1_y) | (!b0_y&!b1_y) | (!c0_y&!c1_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END OAI222_X1X0


//START OAI22_X0X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module OAI22_X0X0_90x128y6p (a0, a1, b0, b1, y, dvdd, dvss, sub);
`else
module OAI22_X0X0_90x128y6p (a0, a1, b0, b1, y);
`endif
`else
`ifdef POWER_AWARE
module OAI22_X0X0_90x128y6p (a0, a1, b0, b1, y, dvdd, dvss, sub);
`else
module OAI22_X0X0_90x128y6p (a0, a1, b0, b1, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, b0, b1 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`OAI22_X0X0_Y_A0 * delay_mult) a0_y = a0;
wire #(`OAI22_X0X0_Y_A1 * delay_mult) a1_y = a1;
wire #(`OAI22_X0X0_Y_B0 * delay_mult) b0_y = b0;
wire #(`OAI22_X0X0_Y_B1 * delay_mult) b1_y = b1;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a0_y&!a1_y) | (!b0_y&!b1_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END OAI22_X0X0


//START OAI2NN1_X0X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module OAI2NN1_X0X0_90x128y6p (a0n, a1n, b0, y, dvdd, dvss, sub);
`else
module OAI2NN1_X0X0_90x128y6p (a0n, a1n, b0, y);
`endif
`else
`ifdef POWER_AWARE
module OAI2NN1_X0X0_90x128y6p (a0n, a1n, b0, y, dvdd, dvss, sub);
`else
module OAI2NN1_X0X0_90x128y6p (a0n, a1n, b0, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0n, a1n, b0 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`OAI2NN1_X0X0_Y_A0N * delay_mult) a0n_y = a0n;
wire #(`OAI2NN1_X0X0_Y_A1N * delay_mult) a1n_y = a1n;
wire #(`OAI2NN1_X0X0_Y_B0 * delay_mult) b0_y = b0;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a0n_y&!a1n_y) | (!b0_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END OAI2NN1_X0X0


//START OAI2NN2_X1X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module OAI2NN2_X1X1_90x128y6p (a0n, a1n, b0, b1, y, dvdd, dvss, sub);
`else
module OAI2NN2_X1X1_90x128y6p (a0n, a1n, b0, b1, y);
`endif
`else
`ifdef POWER_AWARE
module OAI2NN2_X1X1_90x128y6p (a0n, a1n, b0, b1, y, dvdd, dvss, sub);
`else
module OAI2NN2_X1X1_90x128y6p (a0n, a1n, b0, b1, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0n, a1n, b0, b1 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`OAI2NN2_X1X1_Y_A0N * delay_mult) a0n_y = a0n;
wire #(`OAI2NN2_X1X1_Y_A1N * delay_mult) a1n_y = a1n;
wire #(`OAI2NN2_X1X1_Y_B0 * delay_mult) b0_y = b0;
wire #(`OAI2NN2_X1X1_Y_B1 * delay_mult) b1_y = b1;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (a0n_y&a1n_y) | (!b0_y&!b1_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END OAI2NN2_X1X1


//START OAI31_X0X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module OAI31_X0X0_90x128y6p (a0, a1, a2, b0, y, dvdd, dvss, sub, tiehi, tielo);
`else
module OAI31_X0X0_90x128y6p (a0, a1, a2, b0, y);
`endif
`else
`ifdef POWER_AWARE
module OAI31_X0X0_90x128y6p (a0, a1, a2, b0, y, dvdd, dvss, sub, tiehi, tielo);
`else
module OAI31_X0X0_90x128y6p (a0, a1, a2, b0, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, a2, b0 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`OAI31_X0X0_Y_A0 * delay_mult) a0_y = a0;
wire #(`OAI31_X0X0_Y_A1 * delay_mult) a1_y = a1;
wire #(`OAI31_X0X0_Y_A2 * delay_mult) a2_y = a2;
wire #(`OAI31_X0X0_Y_B0 * delay_mult) b0_y = b0;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a0_y&!a1_y&!a2_y) | (!b0_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END OAI31_X0X0


//START OAI32_X0X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module OAI32_X0X1_90x128y6p (a0, a1, a2, b0, b1, y, dvdd, dvss, sub);
`else
module OAI32_X0X1_90x128y6p (a0, a1, a2, b0, b1, y);
`endif
`else
`ifdef POWER_AWARE
module OAI32_X0X1_90x128y6p (a0, a1, a2, b0, b1, y, dvdd, dvss, sub);
`else
module OAI32_X0X1_90x128y6p (a0, a1, a2, b0, b1, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, a2, b0, b1 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`OAI32_X0X1_Y_A0 * delay_mult) a0_y = a0;
wire #(`OAI32_X0X1_Y_A1 * delay_mult) a1_y = a1;
wire #(`OAI32_X0X1_Y_A2 * delay_mult) a2_y = a2;
wire #(`OAI32_X0X1_Y_B0 * delay_mult) b0_y = b0;
wire #(`OAI32_X0X1_Y_B1 * delay_mult) b1_y = b1;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a0_y&!a1_y&!a2_y) | (!b0_y&!b1_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END OAI32_X0X1


//START OAI33_X0X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module OAI33_X0X1_90x128y6p (a0, a1, a2, b0, b1, b2, y, dvdd, dvss, sub, tiehi, tielo);
`else
module OAI33_X0X1_90x128y6p (a0, a1, a2, b0, b1, b2, y);
`endif
`else
`ifdef POWER_AWARE
module OAI33_X0X1_90x128y6p (a0, a1, a2, b0, b1, b2, y, dvdd, dvss, sub, tiehi, tielo);
`else
module OAI33_X0X1_90x128y6p (a0, a1, a2, b0, b1, b2, y);
`endif
`endif
parameter delay_mult = 1 ;
input a0, a1, a2, b0, b1, b2 ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`OAI33_X0X1_Y_A0 * delay_mult) a0_y = a0;
wire #(`OAI33_X0X1_Y_A1 * delay_mult) a1_y = a1;
wire #(`OAI33_X0X1_Y_A2 * delay_mult) a2_y = a2;
wire #(`OAI33_X0X1_Y_B0 * delay_mult) b0_y = b0;
wire #(`OAI33_X0X1_Y_B1 * delay_mult) b1_y = b1;
wire #(`OAI33_X0X1_Y_B2 * delay_mult) b2_y = b2;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a0_y&!a1_y&!a2_y) | (!b0_y&!b1_y&!b2_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END OAI33_X0X1


//START OR2_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module OR2_X2X2_90x128y6p (a, b, y, dvdd, dvss, sub);
`else
module OR2_X2X2_90x128y6p (a, b, y);
`endif
`else
`ifdef POWER_AWARE
module OR2_X2X2_90x128y6p (a, b, y, dvdd, dvss, sub);
`else
module OR2_X2X2_90x128y6p (a, b, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`OR2_X2X2_Y_A * delay_mult) a_y = a;
wire #(`OR2_X2X2_Y_B * delay_mult) b_y = b;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = a_y|b_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END OR2_X2X2


//START OR2_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module OR2_X4X4_90x128y6p (a, b, y, dvdd, dvss, sub);
`else
module OR2_X4X4_90x128y6p (a, b, y);
`endif
`else
`ifdef POWER_AWARE
module OR2_X4X4_90x128y6p (a, b, y, dvdd, dvss, sub);
`else
module OR2_X4X4_90x128y6p (a, b, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`OR2_X4X4_Y_A * delay_mult) a_y = a;
wire #(`OR2_X4X4_Y_B * delay_mult) b_y = b;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = a_y|b_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END OR2_X4X4


//START OR3_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module OR3_X2X2_90x128y6p (a, b, c, y, dvdd, dvss, sub, tiehi, tielo);
`else
module OR3_X2X2_90x128y6p (a, b, c, y);
`endif
`else
`ifdef POWER_AWARE
module OR3_X2X2_90x128y6p (a, b, c, y, dvdd, dvss, sub, tiehi, tielo);
`else
module OR3_X2X2_90x128y6p (a, b, c, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b, c ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`OR3_X2X2_Y_A * delay_mult) a_y = a;
wire #(`OR3_X2X2_Y_B * delay_mult) b_y = b;
wire #(`OR3_X2X2_Y_C * delay_mult) c_y = c;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = a_y|b_y|c_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END OR3_X2X2


//START OR4_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module OR4_X2X2_90x128y6p (a, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module OR4_X2X2_90x128y6p (a, b, c, d, y);
`endif
`else
`ifdef POWER_AWARE
module OR4_X2X2_90x128y6p (a, b, c, d, y, dvdd, dvss, sub, tiehi, tielo);
`else
module OR4_X2X2_90x128y6p (a, b, c, d, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b, c, d ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`OR4_X2X2_Y_A * delay_mult) a_y = a;
wire #(`OR4_X2X2_Y_B * delay_mult) b_y = b;
wire #(`OR4_X2X2_Y_C * delay_mult) c_y = c;
wire #(`OR4_X2X2_Y_D * delay_mult) d_y = d;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = a_y|b_y|c_y|d_y;
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END OR4_X2X2


//START PENC42_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module PENC42_X2X2_90x128y6p (d0, d1, d2, d3, v, y0, y1, dvdd, dvss, sub, tiehi, tielo);
`else
module PENC42_X2X2_90x128y6p (d0, d1, d2, d3, v, y0, y1);
`endif
`else
`ifdef POWER_AWARE
module PENC42_X2X2_90x128y6p (d0, d1, d2, d3, v, y0, y1, dvdd, dvss, sub, tiehi, tielo);
`else
module PENC42_X2X2_90x128y6p (d0, d1, d2, d3, v, y0, y1);
`endif
`endif
parameter delay_mult = 1 ;
input d0, d1, d2, d3 ;
output v, y0, y1 ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`PENC42_X2X2_V_D0 * delay_mult) d0_v = d0;
wire #(`PENC42_X2X2_V_D1 * delay_mult) d1_v = d1;
wire #(`PENC42_X2X2_V_D2 * delay_mult) d2_v = d2;
wire #(`PENC42_X2X2_V_D3 * delay_mult) d3_v = d3;
wire #(`PENC42_X2X2_Y0_D1 * delay_mult) d1_y0 = d1;
wire #(`PENC42_X2X2_Y0_D2 * delay_mult) d2_y0 = d2;
wire #(`PENC42_X2X2_Y0_D3 * delay_mult) d3_y0 = d3;
wire #(`PENC42_X2X2_Y1_D2 * delay_mult) d2_y1 = d2;
wire #(`PENC42_X2X2_Y1_D3 * delay_mult) d3_y1 = d3;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_v = !power_on ;
wire data_v = d0_v|d1_v|d2_v|d3_v;
assign v = (invalid_v ? 1'bx : data_v);
wire invalid_y0 = !power_on ;
wire data_y0 = (d1_y0&!d2_y0) | (d3_y0);
assign y0 = (invalid_y0 ? 1'bx : data_y0);
wire invalid_y1 = !power_on ;
wire data_y1 = d2_y1|d3_y1;
assign y1 = (invalid_y1 ? 1'bx : data_y1);
endmodule
`endcelldefine
//END PENC42_X2X2


//START PENC83_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module PENC83_X2X2_90x128y6p (d0, d1, d2, d3, d4, d5, d6, d7, v, y0, y1, y2, dvdd, dvss, sub, tiehi, tielo);
`else
module PENC83_X2X2_90x128y6p (d0, d1, d2, d3, d4, d5, d6, d7, v, y0, y1, y2);
`endif
`else
`ifdef POWER_AWARE
module PENC83_X2X2_90x128y6p (d0, d1, d2, d3, d4, d5, d6, d7, v, y0, y1, y2, dvdd, dvss, sub, tiehi, tielo);
`else
module PENC83_X2X2_90x128y6p (d0, d1, d2, d3, d4, d5, d6, d7, v, y0, y1, y2);
`endif
`endif
parameter delay_mult = 1 ;
input d0, d1, d2, d3, d4, d5, d6, d7 ;
output v, y0, y1, y2 ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`PENC83_X2X2_V_D0 * delay_mult) d0_v = d0;
wire #(`PENC83_X2X2_V_D1 * delay_mult) d1_v = d1;
wire #(`PENC83_X2X2_V_D2 * delay_mult) d2_v = d2;
wire #(`PENC83_X2X2_V_D3 * delay_mult) d3_v = d3;
wire #(`PENC83_X2X2_V_D4 * delay_mult) d4_v = d4;
wire #(`PENC83_X2X2_V_D5 * delay_mult) d5_v = d5;
wire #(`PENC83_X2X2_V_D6 * delay_mult) d6_v = d6;
wire #(`PENC83_X2X2_V_D7 * delay_mult) d7_v = d7;
wire #(`PENC83_X2X2_Y0_D1 * delay_mult) d1_y0 = d1;
wire #(`PENC83_X2X2_Y0_D3 * delay_mult) d3_y0 = d3;
wire #(`PENC83_X2X2_Y0_D5 * delay_mult) d5_y0 = d5;
wire #(`PENC83_X2X2_Y0_D7 * delay_mult) d7_y0 = d7;
wire #(`PENC83_X2X2_Y1_D2 * delay_mult) d2_y1 = d2;
wire #(`PENC83_X2X2_Y1_D3 * delay_mult) d3_y1 = d3;
wire #(`PENC83_X2X2_Y1_D6 * delay_mult) d6_y1 = d6;
wire #(`PENC83_X2X2_Y1_D7 * delay_mult) d7_y1 = d7;
wire #(`PENC83_X2X2_Y2_D4 * delay_mult) d4_y2 = d4;
wire #(`PENC83_X2X2_Y2_D5 * delay_mult) d5_y2 = d5;
wire #(`PENC83_X2X2_Y2_D6 * delay_mult) d6_y2 = d6;
wire #(`PENC83_X2X2_Y2_D7 * delay_mult) d7_y2 = d7;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_v = !power_on ;
wire data_v = d0_v|d1_v|d2_v|d3_v|d4_v|d5_v|d6_v|d7_v;
assign v = (invalid_v ? 1'bx : data_v);
wire invalid_y0 = !power_on ;
wire data_y0 = d1_y0|d3_y0|d5_y0|d7_y0;
assign y0 = (invalid_y0 ? 1'bx : data_y0);
wire invalid_y1 = !power_on ;
wire data_y1 = d2_y1|d3_y1|d6_y1|d7_y1;
assign y1 = (invalid_y1 ? 1'bx : data_y1);
wire invalid_y2 = !power_on ;
wire data_y2 = d4_y2|d5_y2|d6_y2|d7_y2;
assign y2 = (invalid_y2 ? 1'bx : data_y2);
endmodule
`endcelldefine
//END PENC83_X2X2


//START S2DIFF_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module S2DIFF_X4X4_90x128y6p (a, yn, yp, dvdd, dvss, sub);
`else
module S2DIFF_X4X4_90x128y6p (a, yn, yp);
`endif
`else
`ifdef POWER_AWARE
module S2DIFF_X4X4_90x128y6p (a, yn, yp, dvdd, dvss, sub);
`else
module S2DIFF_X4X4_90x128y6p (a, yn, yp);
`endif
`endif
parameter delay_mult = 1 ;
input a ;
output yn, yp ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`S2DIFF_X4X4_YN_A * delay_mult) a_yn = a;
wire #(`S2DIFF_X4X4_YP_A * delay_mult) a_yp = a;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_yn = !power_on ;
wire data_yn = !a_yn;
assign yn = (invalid_yn ? 1'bx : data_yn);
wire invalid_yp = !power_on ;
wire data_yp = a_yp;
assign yp = (invalid_yp ? 1'bx : data_yp);
endmodule
`endcelldefine
//END S2DIFF_X4X4


//START SDFFARNASN_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module SDFFARNASN_X2X2_90x128y6p (ck, d, rn, se, si, sn, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module SDFFARNASN_X2X2_90x128y6p (ck, d, rn, se, si, sn, q, qn);
`endif
`else
`ifdef POWER_AWARE
module SDFFARNASN_X2X2_90x128y6p (ck, d, rn, se, si, sn, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module SDFFARNASN_X2X2_90x128y6p (ck, d, rn, se, si, sn, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, d, rn, se, si, sn ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`SDFFARNASN_X2X2_Q_SN * delay_mult) sn_q = sn;
wire #(`SDFFARNASN_X2X2_Q_RN * delay_mult) rn_q = rn;
wire #(`SDFFARNASN_X2X2_Q_CK * delay_mult) ck_q = ck;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(2)) q_seq (
.data((d|se) & (!se|si)),
.set(!sn_q),
.reset(!rn_q),
.enable(hi_state),
.clock(ck_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`SDFFARNASN_X2X2_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END SDFFARNASN_X2X2


//START SDFFASN_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module SDFFASN_X2X2_90x128y6p (ck, d, se, si, sn, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module SDFFASN_X2X2_90x128y6p (ck, d, se, si, sn, q, qn);
`endif
`else
`ifdef POWER_AWARE
module SDFFASN_X2X2_90x128y6p (ck, d, se, si, sn, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module SDFFASN_X2X2_90x128y6p (ck, d, se, si, sn, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, d, se, si, sn ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`SDFFASN_X2X2_Q_SN * delay_mult) sn_q = sn;
wire #(`SDFFASN_X2X2_Q_CK * delay_mult) ck_q = ck;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data((d|se) & (!se|si)),
.set(!sn_q),
.reset(lo_state),
.enable(hi_state),
.clock(ck_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`SDFFASN_X2X2_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END SDFFASN_X2X2


//START SDFF_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module SDFF_X2X2_90x128y6p (ck, d, se, si, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module SDFF_X2X2_90x128y6p (ck, d, se, si, q, qn);
`endif
`else
`ifdef POWER_AWARE
module SDFF_X2X2_90x128y6p (ck, d, se, si, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module SDFF_X2X2_90x128y6p (ck, d, se, si, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, d, se, si ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`SDFF_X2X2_Q_CK * delay_mult) ck_q = ck;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data((d|se) & (!se|si)),
.set(lo_state),
.reset(lo_state),
.enable(hi_state),
.clock(ck_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`SDFF_X2X2_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END SDFF_X2X2


//START SDLATCHARNAS_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module SDLATCHARNAS_X2X2_90x128y6p (d, e, rn, s, se, si, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module SDLATCHARNAS_X2X2_90x128y6p (d, e, rn, s, se, si, q, qn);
`endif
`else
`ifdef POWER_AWARE
module SDLATCHARNAS_X2X2_90x128y6p (d, e, rn, s, se, si, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module SDLATCHARNAS_X2X2_90x128y6p (d, e, rn, s, se, si, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input d, e, rn, s, se, si ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`SDLATCHARNAS_X2X2_Q_D * delay_mult) d_q = d;
wire #(`SDLATCHARNAS_X2X2_Q_E * delay_mult) e_q = e;
wire #(`SDLATCHARNAS_X2X2_Q_RN * delay_mult) rn_q = rn;
wire #(`SDLATCHARNAS_X2X2_Q_S * delay_mult) s_q = s;
wire #(`SDLATCHARNAS_X2X2_Q_SE * delay_mult) se_q = se;
wire #(`SDLATCHARNAS_X2X2_Q_SI * delay_mult) si_q = si;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arlatch #(.set_reset_action(6)) q_seq (
.data((d_q|se_q) & (!se_q|si_q)),
.set(s_q),
.reset(!rn_q),
.enable(e_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`SDLATCHARNAS_X2X2_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END SDLATCHARNAS_X2X2


//START SDLATCH_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module SDLATCH_X2X2_90x128y6p (d, e, se, si, q, qn, dvdd, dvss, sub);
`else
module SDLATCH_X2X2_90x128y6p (d, e, se, si, q, qn);
`endif
`else
`ifdef POWER_AWARE
module SDLATCH_X2X2_90x128y6p (d, e, se, si, q, qn, dvdd, dvss, sub);
`else
module SDLATCH_X2X2_90x128y6p (d, e, se, si, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input d, e, se, si ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`SDLATCH_X2X2_Q_D * delay_mult) d_q = d;
wire #(`SDLATCH_X2X2_Q_E * delay_mult) e_q = e;
wire #(`SDLATCH_X2X2_Q_SE * delay_mult) se_q = se;
wire #(`SDLATCH_X2X2_Q_SI * delay_mult) si_q = si;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arlatch #(.set_reset_action(4)) q_seq (
.data((d_q|se_q) & (!se_q|si_q)),
.set(lo_state),
.reset(lo_state),
.enable(e_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`SDLATCH_X2X2_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END SDLATCH_X2X2


//START SPACER1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module SPACER1_90x128y6p (dvdd, dvss, sub);
`else
module SPACER1_90x128y6p ();
`endif
`else
`ifdef POWER_AWARE
module SPACER1_90x128y6p (dvdd, dvss, sub);
`else
module SPACER1_90x128y6p ();
`endif
`endif
parameter delay_mult = 1 ;
endmodule
`endcelldefine
//END SPACER1


//START SPACER2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module SPACER2_90x128y6p (dvdd, dvss, sub);
`else
module SPACER2_90x128y6p ();
`endif
`else
`ifdef POWER_AWARE
module SPACER2_90x128y6p (dvdd, dvss, sub);
`else
module SPACER2_90x128y6p ();
`endif
`endif
parameter delay_mult = 1 ;
endmodule
`endcelldefine
//END SPACER2


//START SRLATCHEN_X2X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module SRLATCHEN_X2X1_90x128y6p (e, r, s, q, qn, dvdd, dvss, sub);
`else
module SRLATCHEN_X2X1_90x128y6p (e, r, s, q, qn);
`endif
`else
`ifdef POWER_AWARE
module SRLATCHEN_X2X1_90x128y6p (e, r, s, q, qn, dvdd, dvss, sub);
`else
module SRLATCHEN_X2X1_90x128y6p (e, r, s, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input e, r, s ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`SRLATCHEN_X2X1_Q_E * delay_mult) e_q = e;
wire #(`SRLATCHEN_X2X1_Q_R * delay_mult) r_q = r;
wire #(`SRLATCHEN_X2X1_Q_S * delay_mult) s_q = s;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arlatch #(.set_reset_action(4)) q_seq (
.data(!r_q),
.set(lo_state),
.reset(lo_state),
.enable((e_q) & (r_q|s_q)),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | r_q&s_q),
.high_impedance(lo_state),
.out(q)
);

assign #(`SRLATCHEN_X2X1_QN_Q * delay_mult) qn = (!power_on | r_q&s_q ? 1'bx : !q);
endmodule
`endcelldefine
//END SRLATCHEN_X2X1


//START SRLATCH_X0X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module SRLATCH_X0X2_90x128y6p (r, s, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module SRLATCH_X0X2_90x128y6p (r, s, q, qn);
`endif
`else
`ifdef POWER_AWARE
module SRLATCH_X0X2_90x128y6p (r, s, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module SRLATCH_X0X2_90x128y6p (r, s, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input r, s ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`SRLATCH_X0X2_Q_R * delay_mult) r_q = r;
wire #(`SRLATCH_X0X2_Q_S * delay_mult) s_q = s;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arlatch #(.set_reset_action(4)) q_seq (
.data(!r_q),
.set(lo_state),
.reset(lo_state),
.enable(r_q|s_q),
.sync_toggle(lo_state),
.sync_hold(lo_state),
.invalid(!power_on | r_q&s_q),
.high_impedance(lo_state),
.out(q)
);

assign #(`SRLATCH_X0X2_QN_Q * delay_mult) qn = (!power_on | r_q&s_q ? 1'bx : !q);
endmodule
`endcelldefine
//END SRLATCH_X0X2


//START TFFLARD_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module TFFLARD_X4X4_90x128y6p (ckn, ckp, l, li, r, t, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module TFFLARD_X4X4_90x128y6p (ckn, ckp, l, li, r, t, q, qn);
`endif
`else
`ifdef POWER_AWARE
module TFFLARD_X4X4_90x128y6p (ckn, ckp, l, li, r, t, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module TFFLARD_X4X4_90x128y6p (ckn, ckp, l, li, r, t, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ckn, ckp, l, li, r, t ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`TFFLARD_X4X4_Q_R * delay_mult) r_q = r;
wire #(`TFFLARD_X4X4_Q_CKN * delay_mult) ckn_q = ckn;
wire #(`TFFLARD_X4X4_Q_CKP * delay_mult) ckp_q = ckp;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data(l&li),
.set(lo_state),
.reset(r_q),
.enable(hi_state),
.clock(!ckn_q&ckp_q),
.sync_toggle(!l&t),
.sync_hold(!l&!t),
.invalid(!power_on | ckp_q==ckn_q),
.high_impedance(lo_state),
.out(q)
);

assign #(`TFFLARD_X4X4_QN_Q * delay_mult) qn = (!power_on | ckp_q==ckn_q ? 1'bx : !q);
endmodule
`endcelldefine
//END TFFLARD_X4X4


//START TFFLAR_X4X4
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module TFFLAR_X4X4_90x128y6p (ck, l, li, r, t, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module TFFLAR_X4X4_90x128y6p (ck, l, li, r, t, q, qn);
`endif
`else
`ifdef POWER_AWARE
module TFFLAR_X4X4_90x128y6p (ck, l, li, r, t, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module TFFLAR_X4X4_90x128y6p (ck, l, li, r, t, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, l, li, r, t ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`TFFLAR_X4X4_Q_R * delay_mult) r_q = r;
wire #(`TFFLAR_X4X4_Q_CK * delay_mult) ck_q = ck;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data(l&li),
.set(lo_state),
.reset(r_q),
.enable(hi_state),
.clock(ck_q),
.sync_toggle(!l&t),
.sync_hold(!l&!t),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`TFFLAR_X4X4_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END TFFLAR_X4X4


//START TFF_X2X2
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module TFF_X2X2_90x128y6p (ck, t, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module TFF_X2X2_90x128y6p (ck, t, q, qn);
`endif
`else
`ifdef POWER_AWARE
module TFF_X2X2_90x128y6p (ck, t, q, qn, dvdd, dvss, sub, tiehi, tielo);
`else
module TFF_X2X2_90x128y6p (ck, t, q, qn);
`endif
`endif
parameter delay_mult = 1 ;
input ck, t ;
output q, qn ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`TFF_X2X2_Q_CK * delay_mult) ck_q = ck;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);
parameter hi_state = 1'b1;
parameter lo_state = 1'b0;

arflop #(.set_reset_action(4)) q_seq (
.data(lo_state),
.set(lo_state),
.reset(lo_state),
.enable(hi_state),
.clock(ck_q),
.sync_toggle(t),
.sync_hold(!t),
.invalid(!power_on | lo_state),
.high_impedance(lo_state),
.out(q)
);

assign #(`TFF_X2X2_QN_Q * delay_mult) qn = (!power_on | lo_state ? 1'bx : !q);
endmodule
`endcelldefine
//END TFF_X2X2


`celldefine
module TIEHL_90x128y6p (tiehi, tielo);
parameter delay_mult = 1 ;
output tiehi, tielo ;

assign tiehi = 1;
assign tielo = 0;
endmodule
`endcelldefine


//START WELLTAP
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module WELLTAP_90x128y6p (dvdd, dvss, sub);
`else
module WELLTAP_90x128y6p ();
`endif
`else
`ifdef POWER_AWARE
module WELLTAP_90x128y6p (dvdd, dvss, sub);
`else
module WELLTAP_90x128y6p ();
`endif
`endif
parameter delay_mult = 1 ;
endmodule
`endcelldefine
//END WELLTAP


//START XNOR2_X0X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module XNOR2_X0X0_90x128y6p (a, b, y, dvdd, dvss, sub);
`else
module XNOR2_X0X0_90x128y6p (a, b, y);
`endif
`else
`ifdef POWER_AWARE
module XNOR2_X0X0_90x128y6p (a, b, y, dvdd, dvss, sub);
`else
module XNOR2_X0X0_90x128y6p (a, b, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, dvdd;
`else
supply0 dvss, sub;
supply1 dvdd;
`endif

wire #(`XNOR2_X0X0_Y_A * delay_mult) a_y = a;
wire #(`XNOR2_X0X0_Y_B * delay_mult) b_y = b;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & dvdd == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (a_y|!b_y) & (!a_y|b_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END XNOR2_X0X0


//START XOR2_X0X0
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module XOR2_X0X0_90x128y6p (a, b, y, dvdd, dvss, sub, tiehi, tielo);
`else
module XOR2_X0X0_90x128y6p (a, b, y);
`endif
`else
`ifdef POWER_AWARE
module XOR2_X0X0_90x128y6p (a, b, y, dvdd, dvss, sub, tiehi, tielo);
`else
module XOR2_X0X0_90x128y6p (a, b, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`XOR2_X0X0_Y_A * delay_mult) a_y = a;
wire #(`XOR2_X0X0_Y_B * delay_mult) b_y = b;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a_y|!b_y) & (a_y|b_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END XOR2_X0X0


//START XOR2_X1X1
`celldefine
`ifdef COSIMULATION
`ifdef POWER_AWARE
module XOR2_X1X1_90x128y6p (a, b, y, dvdd, dvss, sub, tiehi, tielo);
`else
module XOR2_X1X1_90x128y6p (a, b, y);
`endif
`else
`ifdef POWER_AWARE
module XOR2_X1X1_90x128y6p (a, b, y, dvdd, dvss, sub, tiehi, tielo);
`else
module XOR2_X1X1_90x128y6p (a, b, y);
`endif
`endif
parameter delay_mult = 1 ;
input a, b ;
output y ;
`ifdef POWER_AWARE
input dvss, sub, tielo, dvdd, tiehi;
`else
supply0 dvss, sub, tielo;
supply1 dvdd, tiehi;
`endif

wire #(`XOR2_X1X1_Y_A * delay_mult) a_y = a;
wire #(`XOR2_X1X1_Y_B * delay_mult) b_y = b;

wire power_on = (dvss == 1'b0 & sub == 1'b0 & tielo == 1'b0 & dvdd == 1'b1 & tiehi == 1'b1);

wire invalid_y = !power_on ;
wire data_y = (!a_y|!b_y) & (a_y|b_y);
assign y = (invalid_y ? 1'bx : data_y);
endmodule
`endcelldefine
//END XOR2_X1X1


