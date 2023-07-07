#ifndef BP_TBF_H
#define BP_TBF_H

#include <stdlib.h>

#include <cstdlib>
#include <deque>
#include <iostream>
#include <memory>

#include "Vdr32e_branch_predict.h"
// #include "Vdr32e_branch_predict___024unit.h"
#include "../testb.h"
#include "Vdr32e_branch_predict_dr32e_pkg.h"

#define UNSIGNED_CEIL 4294967295
#define SIGNED_CEIL 2147483647

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"

class BPInTxn {
 public:
  uint32_t instr, pc;
  int valid;
  bool first_cycle;
};

class BPOutTxn {
 public:
  int branch_taken;
  uint32_t branch_pc;
};

class BPScoreboard {
 private:
  std::deque<BPInTxn *> in_q;

 public:
  void writeIn(BPInTxn *tx);
  void writeOut(BPOutTxn *tx);
};

class BPDriver {
 private:
  TESTB<Vdr32e_branch_predict> *dut;

 public:
  BPDriver(TESTB<Vdr32e_branch_predict> *dut);
  void drive(BPInTxn *tx);
};

class BPInMonitor {
 private:
  TESTB<Vdr32e_branch_predict> *dut;
  BPScoreboard *scb;

 public:
  BPInMonitor(TESTB<Vdr32e_branch_predict> *dut, BPScoreboard *scb);
  void monitor(void);
};

class BPOutMonitor {
 private:
  TESTB<Vdr32e_branch_predict> *dut;
  BPScoreboard *scb;

 public:
  BPOutMonitor(TESTB<Vdr32e_branch_predict> *dut, BPScoreboard *scb);
  void monitor(void);
};

class BPSequencer {
 public:
  BPSequencer(void);
  BPInTxn *generateTxn(int);
};

#endif
