#ifndef ALU_TBF_H
#define ALU_TBF_H


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

#include "Vcve2_alu.h"
#include "Vcve2_alu___024unit.h"
#include "Vcve2_alu_cve2_pkg.h"
#include "testb.h"

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


#include "cve2_alu_driver.h"
#include "cve2_alu_monitor.h"
#include "cve2_alu_scoreboard.h"
#include "cve2_alu_sequencer.h"


#define CUSTOM_ARSIMDATA

class ARSimulationData
{
public:
	ARSimulationData(DUT_CLASS_NAME * real_dut) 
	{
  		dut = new TESTB<Vcve2_alu>(real_dut);
  		drv = new ALUDriver(dut);
  		scb = new ALUScoreboard();
  		inMon = new ALUInMonitor(dut, scb);
  		outMon = new ALUOutMonitor(dut, scb);
  		seq = new ALUSequencer();
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
 
  	TESTB<Vcve2_alu> *dut;
  	ALUInTxn *tx;
  	ALUDriver *drv;
  	ALUScoreboard *scb;
  	ALUInMonitor *inMon;
  	ALUOutMonitor *outMon;
  	ALUSequencer *seq;
};


#endif
