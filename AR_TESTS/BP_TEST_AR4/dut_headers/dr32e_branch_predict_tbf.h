#ifndef BP_TBF_H
#define BP_TBF_H

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
#include <random>
#include "verilated.h"

#include "testb.h"
#include "instr_defs.h"
#define UNSIGNED_CEIL 4294967295
#define SIGNED_CEIL 2147483647

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_TIME "\x1b[33m"
#define ANSI_COLOR_RESET "\x1b[0m"
using namespace std;

class BPInTxn {
 public:
  uint32_t instr, pc;
  int valid, rst;
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
  BPScoreboard();
  int error_count_;
  void writeIn(BPInTxn *tx);
  void writeOut(BPOutTxn *tx);
};

class BPDriver {
 private:
  TESTB<DUT_CLASS_NAME> *dut;

 public:
  BPDriver(TESTB<DUT_CLASS_NAME> *dut);
  void drive(BPInTxn *tx);
};

class BPInMonitor {
 private:
  TESTB<DUT_CLASS_NAME> *dut;
  BPScoreboard *scb;

 public:
  BPInMonitor(TESTB<DUT_CLASS_NAME> *dut, BPScoreboard *scb);
  void monitor(void);
};

class BPOutMonitor {
 private:
  TESTB<DUT_CLASS_NAME> *dut;
  BPScoreboard *scb;

 public:
  BPOutMonitor(TESTB<DUT_CLASS_NAME> *dut, BPScoreboard *scb);
  void monitor(void);
};

class BPSequencer {
 public:
  BPSequencer(void);
  BPInTxn *generateTxn(void);
};

#include "dr32e_branch_predict_driver.h"
#include "dr32e_branch_predict_monitor.h"
#include "dr32e_branch_predict_scoreboard.h"
#include "dr32e_branch_predict_sequencer.h"


#define CUSTOM_ARSIMDATA

class ARSimulationData
{
public:
	ARSimulationData(DUT_CLASS_NAME * real_dut) 
	{
  		dut = new TESTB<DUT_CLASS_NAME>(real_dut);
  		drv = new BPDriver(dut);
  		scb = new BPScoreboard();
  		inMon = new BPInMonitor(dut, scb);
  		outMon = new BPOutMonitor(dut, scb);
  		seq = new BPSequencer();
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
  	BPInTxn *tx;
  	BPDriver *drv;
  	BPScoreboard *scb;
  	BPInMonitor *inMon;
  	BPOutMonitor *outMon;
  	BPSequencer *seq;
};
#endif
