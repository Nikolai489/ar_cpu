#ifndef BP_TBF_H
#define BP_TBF_H

#include <stdlib.h>

#include <cstdlib>
#include <deque>
#include <iostream>
#include <memory>

#include "Vdr32e_branch_predict.h"
// #include "Vdr32e_branch_predict___024unit.h"
#include "testb.h"
#include "instr_defs.h"
#include "Vdr32e_branch_predict_dr32e_pkg.h"

#define UNSIGNED_CEIL 4294967295
#define SIGNED_CEIL 2147483647

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"

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
  		dut = new TESTB<Vdr32e_branch_predict>(real_dut);
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
 
  	TESTB<Vdr32e_branch_predict> *dut;
  	BPInTxn *tx;
  	BPDriver *drv;
  	BPScoreboard *scb;
  	BPInMonitor *inMon;
  	BPOutMonitor *outMon;
  	BPSequencer *seq;
};
#endif
