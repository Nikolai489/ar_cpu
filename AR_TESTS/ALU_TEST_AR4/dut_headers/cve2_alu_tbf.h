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
#define ANSI_COLOR_TIME "\x1b[33m"
#define ANSI_COLOR_RESET "\x1b[0m"

#include "testb.h"

class ALUInTxn {
 public:
  int a, b;
  bool first_cycle;

  enum Operation {
    // add = 0,
    // sub = 1,
    // xorr = 2,
    // orr = 3,
    // andd = 4,
    // sra = 8,
    // srl = 9,
    // sll = 10,
    // lt = 25,
    // ltu = 26,
    // ge = 27,
    // geu = 28,
    // eq = 29,
    // ne = 30,
    // slt = 43,
    // sltu = 44
    // Arithmetics
    ALU_ADD, // 0
    ALU_SUB, // 1

    // Logics
    ALU_XOR, // 2
    ALU_OR, // 3
    ALU_AND, // 4
    // RV32B
    ALU_XNOR, // 5
    ALU_ORN, // 6
    ALU_ANDN, // 7

    // Shifts
    ALU_SRA, // 8
    ALU_SRL, // 9
    ALU_SLL, // 10
    // RV32B
    ALU_SRO, // 11
    ALU_SLO, // 12
    ALU_ROR, // 13
    ALU_ROL, // 14
    ALU_GREV, // 15
    ALU_GORC, // 16
    ALU_SHFL, // 17
    ALU_UNSHFL, // 18
    ALU_XPERM_N, // 19
    ALU_XPERM_B, // 20
    ALU_XPERM_H, // 21

    // Address Calculations
    // RV32B
    ALU_SH1ADD, // 22
    ALU_SH2ADD, // 23
    ALU_SH3ADD, // 24

    // Comparisons
    ALU_LT, // 25
    ALU_LTU, // 26
    ALU_GE, // 27
    ALU_GEU, // 28
    ALU_EQ, // 29
    ALU_NE, // 30
    // RV32B
    ALU_MIN, // 31
    ALU_MINU, // 32
    ALU_MAX, // 33
    ALU_MAXU, // 34

    // Pack
    // RV32B
    ALU_PACK, // 35
    ALU_PACKU, // 36
    ALU_PACKH, // 37

    // Sign-Extend
    // RV32B
    ALU_SEXTB, // 38
    ALU_SEXTH, // 39

    // Bitcounting
    // RV32B
    ALU_CLZ, // 40
    ALU_CTZ, // 41
    ALU_CPOP, // 42

    // Set lower than
    ALU_SLT, // 43
    ALU_SLTU, // 44

    // Ternary Bitmanip Operations
    // RV32B
    ALU_CMOV, // 45
    ALU_CMIX, // 46
    ALU_FSL, // 47
    ALU_FSR, // 48

    // Single-Bit Operations
    // RV32B
    ALU_BSET, // 49
    ALU_BCLR, // 50
    ALU_BINV, // 51
    ALU_BEXT, // 52

    // Bit Compress / Decompress
    // RV32B
    ALU_BCOMPRESS, // 53
    ALU_BDECOMPRESS, // 54

    // Bit Field Place
    // RV32B
    ALU_BFP, // 55

    // Carry-less Multiply
    // RV32B
    ALU_CLMUL, // 56
    ALU_CLMULR, // 57
    ALU_CLMULH, // 58

    // Cyclic Redundancy Check
    ALU_CRC32_B, // 59
    ALU_CRC32C_B, // 60
    ALU_CRC32_H, // 61
    ALU_CRC32C_H, // 62
    ALU_CRC32_W, // 63
    ALU_CRC32C_W // 64
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
  int error_count_;

 public:
  ALUScoreboard();
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
