#ifndef LSU_TBF_H
#define LSU_TBF_H


#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>
#include <verilatedos.h>

#include <cstdlib>
#include <iostream>
#include <memory>
#include <deque>

#include "verilated.h"

#define TICK_MODE 0
#define UNSIGNED_CEIL 4294967295
#define SIGNED_CEIL 2147483647
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"

#include "Vdr32e_lsu.h"
//#include "Vdr32e_lsu___024unit.h"
//#include "Vdr32e_lsu_dr32e_pkg.h"
#include "../testb.h"
//#include "../instr_defs.h"
class LSUInTxn {
 public:
  int32_t rdata, wdata, adder_result, bus_err;
  int we, sign_ext, req, gnt, valid, type, clk, rst;
  bool first_cycle;
};

class LSUOutTxn {
 public:
  int we_o, req_o, be_o, valid_o, done_o, addr_req, resp_valid, load_err, store_err, busy;
  int32_t  wdata_o, rdata_o, addr_o, addr_last;
};

class LSUScoreboard {
 private:
  std::deque<LSUInTxn *> in_q;

 public:
  void writeIn(LSUInTxn *tx);
  void writeOut(LSUOutTxn *tx);
};

class LSUDriver {
 private:
  TESTB<Vdr32e_lsu> *dut;

 public:
  LSUDriver(TESTB<Vdr32e_lsu> *dut);
  void drive(LSUInTxn *tx);
};

class LSUInMonitor {
 private:
  TESTB<Vdr32e_lsu> *dut;
  LSUScoreboard *scb;

 public:
  LSUInMonitor(TESTB<Vdr32e_lsu> *dut, LSUScoreboard *scb);
  void monitor(void);
};

class LSUOutMonitor {
 private:
  TESTB<Vdr32e_lsu> *dut;
  LSUScoreboard *scb;

 public:
  LSUOutMonitor(TESTB<Vdr32e_lsu> *dut, LSUScoreboard *scb);
  void monitor(void);
};

class LSUSequencer {
  private:
  TESTB<Vdr32e_lsu> *dut;
 public:
  LSUSequencer(TESTB<Vdr32e_lsu> *dut);
  LSUInTxn *generateTxn(int);
  LSUInTxn *driveCtrlSignals(void);
};

#endif
