#ifndef FF_TBF_H
#define FF_TBF_H


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

class FFInTxn {
 public:
  // int a, b;
  // bool first_cycle;
  //clk;
  int rst;
  int clear ;
  bool in_valid;
  int in_addr;
  int in_rdata;
  bool in_err;
  bool out_ready;
  //int clear_on = 1;
  
};
// for (unsigned clocks = 0; clocks < 100; clocks++) {
        
//     if (clocks % 10 == 5) {
//       tx -> clear = 1;
//     }
//   }

class FFOutTxn {
 public:
  int out_rdata;
  // int adder_result, result;
  // long adder_result_ext;
  // bool comparison_result, is_equal_result;
};

class FFScoreboard {
 private:
  std::deque<FFInTxn *> in_q;

 public:
  int error_count_;
  FFScoreboard();
  void writeIn(FFInTxn *tx);
  void writeOut(FFOutTxn *tx);
};

class FFDriver {
 private:
  TESTB<DUT_CLASS_NAME> *dut;

 public:
  FFDriver(TESTB<DUT_CLASS_NAME> *dut);
  void drive(FFInTxn *tx);
};

class FFInMonitor {
 private:
  TESTB<DUT_CLASS_NAME> *dut;
  FFScoreboard *scb;

 public:
  FFInMonitor(TESTB<DUT_CLASS_NAME> *dut, FFScoreboard *scb);
  void monitor(void);
};

class FFOutMonitor {
 private:
  TESTB<DUT_CLASS_NAME> *dut;
  FFScoreboard *scb;

 public:
  FFOutMonitor(TESTB<DUT_CLASS_NAME> *dut, FFScoreboard *scb);
  void monitor(void);
};

class FFSequencer {
 public:
  FFSequencer(void);
  FFInTxn *generateTxn(void);
};


#include "ibex_fetch_fifo_driver.h"
#include "ibex_fetch_fifo_monitor.h"
#include "ibex_fetch_fifo_scoreboard.h"
#include "ibex_fetch_fifo_sequencer.h"


#define CUSTOM_ARSIMDATA

class ARSimulationData
{
public:
	ARSimulationData(DUT_CLASS_NAME * real_dut) 
	{
  		dut = new TESTB<DUT_CLASS_NAME>(real_dut);
  		drv = new FFDriver(dut);
  		scb = new FFScoreboard();
  		inMon = new FFInMonitor(dut, scb);
  		outMon = new FFOutMonitor(dut, scb);
  		seq = new FFSequencer();
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
  	FFInTxn *tx;
  	FFDriver *drv;
  	FFScoreboard *scb;
  	FFInMonitor *inMon;
  	FFOutMonitor *outMon;
  	FFSequencer *seq;
};


#endif
