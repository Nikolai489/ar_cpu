#ifndef ALU_TBF_H
#define ALU_TBF_H

#include <stdlib.h>

#include <cstdlib>
#include <deque>
#include <iostream>
#include <memory>

#include "Vcve2_alu.h"
#include "Vcve2_alu___024unit.h"
#include "Vcve2_alu_cve2_pkg.h"
#include "testb.h"

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"

class ALUInTxn {
 public:
  int a, b;
  bool first_cycle;
  enum Operation {
    add = Vcve2_alu_cve2_pkg::alu_op_e::ALU_ADD,
    sub = Vcve2_alu_cve2_pkg::alu_op_e::ALU_SUB,
    xorr = Vcve2_alu_cve2_pkg::alu_op_e::ALU_XOR,
    orr = Vcve2_alu_cve2_pkg::alu_op_e::ALU_OR,
    andd = Vcve2_alu_cve2_pkg::alu_op_e::ALU_AND,
    sra = Vcve2_alu_cve2_pkg::alu_op_e::ALU_SRA,
    srl = Vcve2_alu_cve2_pkg::alu_op_e::ALU_SRL,
    sll = Vcve2_alu_cve2_pkg::alu_op_e::ALU_SLL,
    lt = Vcve2_alu_cve2_pkg::alu_op_e::ALU_LT,
    ltu = Vcve2_alu_cve2_pkg::alu_op_e::ALU_LTU,
    ge = Vcve2_alu_cve2_pkg::alu_op_e::ALU_GE,
    geu = Vcve2_alu_cve2_pkg::alu_op_e::ALU_GEU,
    eq = Vcve2_alu_cve2_pkg::alu_op_e::ALU_EQ,
    ne = Vcve2_alu_cve2_pkg::alu_op_e::ALU_NE,
    slt = Vcve2_alu_cve2_pkg::alu_op_e::ALU_SLT,
    sltu = Vcve2_alu_cve2_pkg::alu_op_e::ALU_SLTU
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
  TESTB<Vcve2_alu> *dut;

 public:
  ALUDriver(TESTB<Vcve2_alu> *dut);
  void drive(ALUInTxn *tx);
};

class ALUInMonitor {
 private:
  TESTB<Vcve2_alu> *dut;
  ALUScoreboard *scb;

 public:
  ALUInMonitor(TESTB<Vcve2_alu> *dut, ALUScoreboard *scb);
  void monitor(void);
};

class ALUOutMonitor {
 private:
  TESTB<Vcve2_alu> *dut;
  ALUScoreboard *scb;

 public:
  ALUOutMonitor(TESTB<Vcve2_alu> *dut, ALUScoreboard *scb);
  void monitor(void);
};

class ALUSequencer {
 public:
  ALUSequencer(void);
  ALUInTxn *generateTxn(void);
};

#endif
