#ifndef DEC_TBF_H
#define DEC_TBF_H


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

using namespace std;
#include "verilated.h"

#define TICK_MODE 0
#define UNSIGNED_CEIL 4294967295
#define SIGNED_CEIL 2147483647
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"

#include "Vdr32e_dec.h"
//#include "Vdr32e_dec___024unit.h"
#include "Vdr32e_dec_dr32e_pkg.h"
#include "testb.h"
#include "instr_defs.h"
class DECInTxn {
 public:
  uint32_t instr;
  int a, b;
  bool first_cycle;
};

class DECOutTxn {
 public:
  int wfi_instr, jump_set,
      illegal_instr, branch_instr,
      ecall_instr, ebreak_instr,
      mret_instr, debug_instr,
      csr_access, store_instr;
  uint32_t imm_i, imm_u,
           imm_j, imm_s,
           imm_b, rf_waddr;
  unsigned char imm_a_sel_o, imm_b_sel_o,
                op_a_sel_o, op_b_sel_o,
                bt_a_sel, bt_b_sel, 
                op_o, csr_op;
  int data_req, data_type, data_we, data_sign_ext;
  int rf_ra, rf_rb, rf_we;
};

class DECScoreboard {
 private:
  std::deque<DECInTxn *> in_q;

 public:
  void writeIn(DECInTxn *tx);
  void writeOut(DECOutTxn *tx);
};

class DECDriver {
 private:
  TESTB<Vdr32e_dec> *dut;

 public:
  DECDriver(TESTB<Vdr32e_dec> *dut);
  void drive(DECInTxn *tx);
};

class DECInMonitor {
 private:
  TESTB<Vdr32e_dec> *dut;
  DECScoreboard *scb;

 public:
  DECInMonitor(TESTB<Vdr32e_dec> *dut, DECScoreboard *scb);
  void monitor(void);
};

class DECOutMonitor {
 private:
  TESTB<Vdr32e_dec> *dut;
  DECScoreboard *scb;

 public:
  DECOutMonitor(TESTB<Vdr32e_dec> *dut, DECScoreboard *scb);
  void monitor(void);
};

class DECSequencer {
 public:
  DECSequencer(void);
  DECInTxn *generateTxn(void);
};

#include "dr32e_dec_driver.h"
#include "dr32e_dec_monitor.h"
#include "dr32e_dec_scoreboard.h"
#include "dr32e_dec_sequencer.h"


#define CUSTOM_ARSIMDATA

class ARSimulationData
{
public:
	ARSimulationData(DUT_CLASS_NAME * real_dut) 
	{
  		dut = new TESTB<Vdr32e_dec>(real_dut);
  		drv = new DECDriver(dut);
  		scb = new DECScoreboard();
  		inMon = new DECInMonitor(dut, scb);
  		outMon = new DECOutMonitor(dut, scb);
  		seq = new DECSequencer();
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
 
  	TESTB<Vdr32e_dec> *dut;
  	DECInTxn *tx;
  	DECDriver *drv;
  	DECScoreboard *scb;
  	DECInMonitor *inMon;
  	DECOutMonitor *outMon;
  	DECSequencer *seq;
};
#endif
