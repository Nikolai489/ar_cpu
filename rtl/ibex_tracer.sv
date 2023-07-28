// Copyright lowRISC contributors.
// Copyright 2018 ETH Zurich and University of Bologna, see also CREDITS.md.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

/**
 * Trace executed instructions in simulation
 *
 * This tracer takes execution information from the RISC-V Verification Interface (RVFI) and
 * produces a text file with a human-readable trace.
 *
 * All traced instructions are written to a log file. By default, the log file is named
 * trace_core_<HARTID>.log, with <HARTID> being the 8 digit hart ID of the core being traced.
 *
 * The file name base, defaulting to "trace_core" can be set using the "ibex_tracer_file_base"
 * plusarg passed to the simulation, e.g. "+ibex_tracer_file_base=ibex_my_trace". The exact syntax
 * of passing plusargs to a simulation depends on the simulator.
 *
 * The creation of the instruction trace is enabled by default but can be disabled for a simulation.
 * This behaviour is controlled by the plusarg "ibex_tracer_enable". Use "ibex_tracer_enable=0" to
 * disable the tracer.
 *
 * The trace contains six columns, separated by tabs:
 * - The simulation time
 * - The clock cycle count since reset
 * - The program counter (PC)
 * - The instruction
 * - The decoded instruction in the same format as objdump, together with the accessed registers and
 *   read/written memory values. Jumps and branches show the target address.
 *   This column may be omitted if the instruction does not decode into a long form.
 * - Accessed registers and memory locations.
 *
 * Significant effort is spent to make the decoding produced by this tracer as similar as possible
 * to the one produced by objdump. This simplifies the correlation between the static program
 * information from the objdump-generated disassembly, and the runtime information from this tracer.
 */
`include "ibex_tracer_body.sv"
module ibex_tracer (
  input logic        clk_i,
  input logic        rst_ni,

  input logic [31:0] hart_id_i,

  // RVFI as described at https://github.com/SymbioticEDA/riscv-formal/blob/master/docs/rvfi.md
  // The standard interface does not have _i/_o suffixes. For consistency with the standard the
  // signals in this module don't have the suffixes either.
  input logic        rvfi_valid,
  input logic [63:0] rvfi_order,
  input logic [31:0] rvfi_insn,
  input logic        rvfi_trap,
  input logic        rvfi_halt,
  input logic        rvfi_intr,
  input logic [ 1:0] rvfi_mode,
  input logic [ 1:0] rvfi_ixl,
  input logic [ 4:0] rvfi_rs1_addr,
  input logic [ 4:0] rvfi_rs2_addr,
  input logic [ 4:0] rvfi_rs3_addr,
  input logic [31:0] rvfi_rs1_rdata,
  input logic [31:0] rvfi_rs2_rdata,
  input logic [31:0] rvfi_rs3_rdata,
  input logic [ 4:0] rvfi_rd_addr,
  input logic [31:0] rvfi_rd_wdata,
  input logic [31:0] rvfi_pc_rdata,
  input logic [31:0] rvfi_pc_wdata,
  input logic [31:0] rvfi_mem_addr,
  input logic [ 3:0] rvfi_mem_rmask,
  input logic [ 3:0] rvfi_mem_wmask,
  input logic [31:0] rvfi_mem_rdata,
  input logic [31:0] rvfi_mem_wdata
);

ibex_tracer_body tracer_body(
.clk_i(clk_i),
.rst_ni(rst_ni),

.hart_id_i(hart_id_i),

  // RVFI as described at https://github.com/SymbioticEDA/riscv-formal/blob/master/docs/rvfi.md
  // The standard interface does not have _i/_o suffixes. For consistency with the standard the
  // signals in this module don't have the suffixes either.
.rvfi_valid(rvfi_valid),
.rvfi_order(rvfi_order),
.rvfi_insn(rvfi_insn),
.rvfi_trap(rvfi_trap),
.rvfi_halt(rvfi_halt),
.rvfi_intr(rvfi_intr),
.rvfi_mode(rvfi_mode),
.rvfi_ixl(rvfi_ixl),
.rvfi_rs1_addr(rvfi_rs1_addr),
.rvfi_rs2_addr(rvfi_rs2_addr),
.rvfi_rs3_addr(rvfi_rs3_addr),
.rvfi_rs1_rdata(rvfi_rs1_rdata),
.rvfi_rs2_rdata(rvfi_rs2_rdata),
.rvfi_rs3_rdata(rvfi_rs3_rdata),
.rvfi_rd_addr(rvfi_rd_addr),
.rvfi_rd_wdata(rvfi_rd_wdata),
.rvfi_pc_rdata(rvfi_pc_rdata),
.rvfi_pc_wdata(rvfi_pc_wdata),
.rvfi_mem_addr(rvfi_mem_addr),
.rvfi_mem_rmask(rvfi_mem_rmask),
.rvfi_mem_wmask(rvfi_mem_wmask),
.rvfi_mem_rdata(rvfi_mem_rdata),
.rvfi_mem_wdata(rvfi_mem_wdata)
);

endmodule
