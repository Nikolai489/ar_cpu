#ifndef PB_TBF_H
#define PB_TBF_H

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
#define ANSI_COLOR_TIME "\x1b[33m"
#define ANSI_COLOR_RESET "\x1b[0m"

#include "testb.h"

class PBInTxn
{
public:
  int rst;
  int req;
  bool branch;
  int addr;
  bool ready;
  int instr_grant;
  int instr_rdata;
  int instr_rvalid;
  int instr_err;
};

class PBOutTxn
{
public:
  int addr_out;
  int rdata_out;
};

class PBScoreboard
{
private:
  std::deque<PBInTxn *> in_q;

public:
  int error_count_;
  PBScoreboard();
  void writeIn(PBInTxn *tx);
  void writeOut(PBOutTxn *tx);
};

class PBDriver
{
private:
  TESTB<DUT_CLASS_NAME> *dut;

public:
  PBDriver(TESTB<DUT_CLASS_NAME> *dut);
  void drive(PBInTxn *tx);
};

class PBInMonitor
{
private:
  TESTB<DUT_CLASS_NAME> *dut;
  PBScoreboard *scb;

public:
  PBInMonitor(TESTB<DUT_CLASS_NAME> *dut, PBScoreboard *scb);
  void monitor(void);
};

class PBOutMonitor
{
private:
  TESTB<DUT_CLASS_NAME> *dut;
  PBScoreboard *scb;

public:
  PBOutMonitor(TESTB<DUT_CLASS_NAME> *dut, PBScoreboard *scb);
  void monitor(void);
};

class PBSequencer
{
public:
  PBSequencer(void);
  PBInTxn *generateTxn(void);
};

#include "ibex_prefetch_buffer_driver.h"
#include "ibex_prefetch_buffer_monitor.h"
#include "ibex_prefetch_buffer_scoreboard.h"
#include "ibex_prefetch_buffer_sequencer.h"

#define CUSTOM_ARSIMDATA

class ARSimulationData
{
public:
  ARSimulationData(DUT_CLASS_NAME *real_dut)
  {
    dut = new TESTB<DUT_CLASS_NAME>(real_dut);
    drv = new PBDriver(dut);
    scb = new PBScoreboard();
    inMon = new PBInMonitor(dut, scb);
    outMon = new PBOutMonitor(dut, scb);
    seq = new PBSequencer();
  }

  ~ARSimulationData()
  {
    delete dut;
    delete drv;
    delete scb;
    delete inMon;
    delete outMon;
    delete seq;
  }

  TESTB<DUT_CLASS_NAME> *dut;
  PBInTxn *tx;
  PBDriver *drv;
  PBScoreboard *scb;
  PBInMonitor *inMon;
  PBOutMonitor *outMon;
  PBSequencer *seq;
};

#endif
