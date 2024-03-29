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
#include <random>

#include "verilated.h"
#define TICK_MODE 0
#define UNSIGNED_CEIL 4294967295
#define SIGNED_CEIL 2147483647
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_TIME "\x1b[33m"
#define ANSI_COLOR_RESET "\x1b[0m"
#include "testb.h"
using namespace std;

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
  int error_count_;
  LSUScoreboard();
  void writeIn(LSUInTxn *tx);
  void writeOut(LSUOutTxn *tx);
};

class LSUDriver {
 private:
  TESTB<DUT_CLASS_NAME> *dut;

 public:
  LSUDriver(TESTB<DUT_CLASS_NAME> *dut);
  void drive(LSUInTxn *tx);
};

class LSUInMonitor {
 private:
  TESTB<DUT_CLASS_NAME> *dut;
  LSUScoreboard *scb;

 public:
  LSUInMonitor(TESTB<DUT_CLASS_NAME> *dut, LSUScoreboard *scb);
  void monitor(void);
};

class LSUOutMonitor {
 private:
  TESTB<DUT_CLASS_NAME> *dut;
  LSUScoreboard *scb;

 public:
  LSUOutMonitor(TESTB<DUT_CLASS_NAME> *dut, LSUScoreboard *scb);
  void monitor(void);
};

class LSUSequencer {
  private:
  TESTB<DUT_CLASS_NAME> *dut;
 public:
  LSUSequencer(TESTB<DUT_CLASS_NAME> *dut);
  LSUInTxn *generateTxn(void);
  LSUInTxn *driveCtrlSignals(void);
};

#include "dr32e_lsu_driver.h"
#include "dr32e_lsu_monitor.h"
#include "dr32e_lsu_scoreboard.h"
#include "dr32e_lsu_sequencer.h"


#define CUSTOM_ARSIMDATA

class ARSimulationData
{
public:
	ARSimulationData(DUT_CLASS_NAME * real_dut) 
	{
  		dut = new TESTB<DUT_CLASS_NAME>(real_dut);
  		drv = new LSUDriver(dut);
  		scb = new LSUScoreboard();
  		inMon = new LSUInMonitor(dut, scb);
  		outMon = new LSUOutMonitor(dut, scb);
  		seq = new LSUSequencer(dut);
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
  	LSUInTxn *tx;
  	LSUDriver *drv;
  	LSUScoreboard *scb;
  	LSUInMonitor *inMon;
  	LSUOutMonitor *outMon;
  	LSUSequencer *seq;
};
#endif
