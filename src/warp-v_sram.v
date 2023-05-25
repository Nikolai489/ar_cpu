// WARP-V + IMem SRAM + DMem SRAM
`include "src/blockram.v"
// To be consistent with AR library:
`timescale 1ps/10fs

module top(input wire clk, input wire reset, input wire [31:0] cyc_cnt, output wire passed, output wire failed);
    // IMem
    wire [29:0] imem_addr;
    wire [31:0] imem_data;
    // DMem
    wire [31:0] dmem_addrb;
    wire dmem_enb;
    wire [31:0] dmem_addra;
    wire [31:0] dmem_dina;
    wire [31:0] dmem_dinb;
    wire [3:0] dmem_wea;
    wire [3:0]dmem_web;
    wire dmem_wea0;
    wire dmem_ena;
    wire [31:0] dmem_doutb;
    
    cpu cpu(.clk(clk), .reset(reset), .cyc_cnt(cyc_cnt), .passed(passed), .failed(failed),
            .imem_addr(imem_addr),
            .imem_data(imem_data),
            .dmem_addrb(dmem_addrb),
            .dmem_enb(dmem_enb),
            .dmem_addra(dmem_addra),
            .dmem_dina(dmem_dina),
            .dmem_dinb(dmem_dinb),
            .dmem_wea(dmem_wea),
            .dmem_web(dmem_web),
            .dmem_wea0(dmem_wea0),
            .dmem_ena(dmem_ena),
            .dmem_doutb(dmem_doutb));
    
    // IMem
    sram #(
      .NB_COL(4),                           // Specify number of columns (number of bytes)
      .COL_WIDTH(8),                        // Specify column width (byte width, typically 8 or 9)
      .RAM_DEPTH(1024),                     // Specify RAM depth (number of entries)
      .RAM_PERFORMANCE("LOW_LATENCY"), // Select "HIGH_PERFORMANCE" or "LOW_LATENCY" 
      .INIT_FILE("src/imem.hex")                        // Specify name/location of RAM initialization file if using one (leave blank if not)
    ) imem (
      .addra(imem_addr[9:0]),   // Port A address bus, width determined from RAM_DEPTH
      .addrb(10'b0),   // Port B address bus, width determined from RAM_DEPTH
      .dina(32'b0),     // Port A RAM input data, width determined from NB_COL*COL_WIDTH
      .dinb(32'b0),     // Port B RAM input data, width determined from NB_COL*COL_WIDTH
      .clka(clk),     // Clock
      .wea(4'b0),       // Port A write enable, width determined from NB_COL
      .web(4'b0),       // Port B write enable, width determined from NB_COL
      .ena(1'b1),       // Port A RAM Enable, for additional power savings, disable port when not in use
      .enb(1'b0),       // Port B RAM Enable, for additional power savings, disable port when not in use
      .rsta(reset),     // Port A output reset (does not affect memory contents)
      .rstb(reset),     // Port B output reset (does not affect memory contents)
      .regcea(1'b1), // Port A output register enable
      .regceb(1'b0), // Port B output register enable
      .douta(imem_data),   // Port A RAM output data, width determined from NB_COL*COL_WIDTH
      .doutb()    // Port B RAM output data, width determined from NB_COL*COL_WIDTH
    );
    
    // DMem
    sram #(
      .NB_COL(4),                           // Specify number of columns (number of bytes)
      .COL_WIDTH(8),                        // Specify column width (byte width, typically 8 or 9)
      .RAM_DEPTH(1024),                     // Specify RAM depth (number of entries)
      .RAM_PERFORMANCE("LOW_LATENCY"), // Select "HIGH_PERFORMANCE" or "LOW_LATENCY" 
      .INIT_FILE("")                        // Specify name/location of RAM initialization file if using one (leave blank if not)
    ) dmem (
      .addra(dmem_addra[11:2]),   // Port A address bus, width determined from RAM_DEPTH
      .addrb(dmem_addrb[11:2]),   // Port B address bus, width determined from RAM_DEPTH
      .dina(dmem_dina),     // Port A RAM input data, width determined from NB_COL*COL_WIDTH
      .dinb(dmem_dinb),     // Port B RAM input data, width determined from NB_COL*COL_WIDTH
      .clka(clk),     // Clock
      .wea(dmem_wea),       // Port A write enable, width determined from NB_COL
      .web(dmem_web),       // Port B write enable, width determined from NB_COL
      .ena(!dmem_ena),       // Port A RAM Enable, for additional power savings, disable port when not in use
      .enb(!dmem_enb),       // Port B RAM Enable, for additional power savings, disable port when not in use
      .rsta(reset),     // Port A output reset (does not affect memory contents)
      .rstb(reset),     // Port B output reset (does not affect memory contents)
      .regcea(1'b1), // Port A output register enable
      .regceb(1'b1), // Port B output register enable
      .douta(),   // Port A RAM output data, width determined from NB_COL*COL_WIDTH
      .doutb(dmem_doutb)    // Port B RAM output data, width determined from NB_COL*COL_WIDTH
    );

 
endmodule
