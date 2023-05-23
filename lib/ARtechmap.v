module $_MUX8_ (input A, B, C, D, E, F, G, H, S, T, U, output Y);
MUX81_X2X2_90x128y6p _TECHMAP_REPLACE_ (.A(A), .B(B), .C(C), .D(D), .E(E), .F(F), .G(G), .H(H), .S0(S), .S1(T), .S2(U), .Y(Y));
endmodule

module $_MUX4_ (input A, B, C, D, S, T, output Y);
MUX41_X2X2_90x128y6p _TECHMAP_REPLACE_ (.A(A), .B(B), .C(C), .D(D), .S0(S), .S1(T), .Y(Y));
endmodule

module $_DLATCH_P_ (input D, E, output Q);
wire _01_ ;
assign _01_ = ~Q;
DLATCH_X2X2_90x128y6p _TECHMAP_REPLACE_ (.D(D), .EN(E), .Q(Q), .QN(_01_));
endmodule

