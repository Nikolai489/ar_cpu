/* verilator lint_off MODDUP */
module ibex_top_core_inst import ibex_pkg::*;#(
  parameter bit          SecureIbex        = 1'b0,
  parameter bit          MemECC            = SecureIbex,
  parameter int unsigned MemDataWidth      = MemECC ? 32 + 7 : 32
)(
    input  logic [31:0] data_rdata_i,
    input  logic [31:0] instr_rdata_i,
    input  logic  [6:0] data_rdata_intg_i,
    input  logic  [6:0] instr_rdata_intg_i,
    output logic [MemDataWidth-1:0] data_rdata_core,
    output logic [MemDataWidth-1:0] instr_rdata_core    
);
/* verilator lint_on MODDUP */
  // ibex_core takes integrity and data bits together. Combine the separate integrity and data
  // inputs here.
    assign data_rdata_core[31:0] = data_rdata_i;
    assign instr_rdata_core[31:0] = instr_rdata_i;

    if (SecureIbex) begin : gen_mem_rdata_ecc
    assign data_rdata_core[38:32] = data_rdata_intg_i;
    assign instr_rdata_core[38:32] = instr_rdata_intg_i;
    end else begin : gen_non_mem_rdata_ecc
    logic unused_intg;

    assign unused_intg = ^{instr_rdata_intg_i, data_rdata_intg_i};
    end

endmodule
