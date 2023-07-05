#ifndef ALU_TBF_H
#define ALU_TBF_H

#include <stdlib.h>

#include <cstdlib>
#include <deque>
#include <iostream>
#include <memory>

#include "Vdr32e_alu.h"
// #include "Vdr32e_alu___024unit.h"
#include "../testb.h"
#include "Vdr32e_alu_dr32e_pkg.h"

#define UNSIGNED_CEIL 4294967295
#define SIGNED_CEIL 2147483647

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"

class ALUInTxn {
 public:
  int a, b;
  bool first_cycle;
  enum Operation {
    add = Vdr32e_alu_dr32e_pkg::alu_op_e::ALU_ADD,
    sub = Vdr32e_alu_dr32e_pkg::alu_op_e::ALU_SUB,
    xorr = Vdr32e_alu_dr32e_pkg::alu_op_e::ALU_XOR,
    orr = Vdr32e_alu_dr32e_pkg::alu_op_e::ALU_OR,
    andd = Vdr32e_alu_dr32e_pkg::alu_op_e::ALU_AND,
    sra = Vdr32e_alu_dr32e_pkg::alu_op_e::ALU_SRA,
    srl = Vdr32e_alu_dr32e_pkg::alu_op_e::ALU_SRL,
    sll = Vdr32e_alu_dr32e_pkg::alu_op_e::ALU_SLL,
    lt = Vdr32e_alu_dr32e_pkg::alu_op_e::ALU_LT,
    ltu = Vdr32e_alu_dr32e_pkg::alu_op_e::ALU_LTU,
    ge = Vdr32e_alu_dr32e_pkg::alu_op_e::ALU_GE,
    geu = Vdr32e_alu_dr32e_pkg::alu_op_e::ALU_GEU,
    eq = Vdr32e_alu_dr32e_pkg::alu_op_e::ALU_EQ,
    ne = Vdr32e_alu_dr32e_pkg::alu_op_e::ALU_NE,
    slt = Vdr32e_alu_dr32e_pkg::alu_op_e::ALU_SLT,
    sltu = Vdr32e_alu_dr32e_pkg::alu_op_e::ALU_SLTU
  } op;
};

class ALUOutTxn {
 public:
  int adder_result, result;
  long adder_result_ext;
  bool comparison_result, is_equal_result;
};

class ALUScoreboard {
 private:
  std::deque<ALUInTxn *> in_q;

 public:
  void writeIn(ALUInTxn *tx);
  void writeOut(ALUOutTxn *tx);
};

class ALUDriver {
 private:
  TESTB<Vdr32e_alu> *dut;

 public:
  ALUDriver(TESTB<Vdr32e_alu> *dut);
  void drive(ALUInTxn *tx);
};

class ALUInMonitor {
 private:
  TESTB<Vdr32e_alu> *dut;
  ALUScoreboard *scb;

 public:
  ALUInMonitor(TESTB<Vdr32e_alu> *dut, ALUScoreboard *scb);
  void monitor(void);
};

class ALUOutMonitor {
 private:
  TESTB<Vdr32e_alu> *dut;
  ALUScoreboard *scb;

 public:
  ALUOutMonitor(TESTB<Vdr32e_alu> *dut, ALUScoreboard *scb);
  void monitor(void);
};

class ALUSequencer {
 public:
  ALUSequencer(void);
  ALUInTxn *generateTxn(void);
};

#endif
