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

#include "testb.h"

class ALUInTxn {
 public:
  int a, b;
  bool first_cycle;

  enum Operation {
    add = 0,
    sub = 1,
    xorr = 2,
    orr = 3,
    andd = 4,
    sra = 8,
    srl = 9,
    sll = 10,
    lt = 25,
    ltu = 26,
    ge = 27,
    geu = 28,
    eq = 29,
    ne = 30,
    slt = 43,
    sltu = 44
  } op;


/*  enum Operation {
    add = ENUM_NAMESPACE::alu_op_e::ALU_ADD,
    sub = ENUM_NAMESPACE::alu_op_e::ALU_SUB,
    xorr = ENUM_NAMESPACE::alu_op_e::ALU_XOR,
    orr = ENUM_NAMESPACE::alu_op_e::ALU_OR,
    andd = ENUM_NAMESPACE::alu_op_e::ALU_AND,
    sra = ENUM_NAMESPACE::alu_op_e::ALU_SRA,
    srl = ENUM_NAMESPACE::alu_op_e::ALU_SRL,
    sll = ENUM_NAMESPACE::alu_op_e::ALU_SLL,
    lt = ENUM_NAMESPACE::alu_op_e::ALU_LT,
    ltu = ENUM_NAMESPACE::alu_op_e::ALU_LTU,
    ge = ENUM_NAMESPACE::alu_op_e::ALU_GE,
    geu = ENUM_NAMESPACE::alu_op_e::ALU_GEU,
    eq = ENUM_NAMESPACE::alu_op_e::ALU_EQ,
    ne = ENUM_NAMESPACE::alu_op_e::ALU_NE,
    slt = ENUM_NAMESPACE::alu_op_e::ALU_SLT,
    sltu = ENUM_NAMESPACE::alu_op_e::ALU_SLTU
  } op;*/

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
  TESTB<DUT_CLASS_NAME> *dut;

 public:
  ALUDriver(TESTB<DUT_CLASS_NAME> *dut);
  void drive(ALUInTxn *tx);
};

class ALUInMonitor {
 private:
  TESTB<DUT_CLASS_NAME> *dut;
  ALUScoreboard *scb;

 public:
  ALUInMonitor(TESTB<DUT_CLASS_NAME> *dut, ALUScoreboard *scb);
  void monitor(void);
};

class ALUOutMonitor {
 private:
  TESTB<DUT_CLASS_NAME> *dut;
  ALUScoreboard *scb;

 public:
  ALUOutMonitor(TESTB<DUT_CLASS_NAME> *dut, ALUScoreboard *scb);
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
  		dut = new TESTB<DUT_CLASS_NAME>(real_dut);
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
 
  	TESTB<DUT_CLASS_NAME> *dut;
  	ALUInTxn *tx;
  	ALUDriver *drv;
  	ALUScoreboard *scb;
  	ALUInMonitor *inMon;
  	ALUOutMonitor *outMon;
  	ALUSequencer *seq;
};


#endif
