#ifndef CompressedDec_TBF_H
#define CompressedDec_TBF_H

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

#include "Vibex_compressed_decoder.h"
// #include "Vibex_compressed_decode___024unit.h"
// #include "Vibex_compressed_decode_cve2_pkg.h"
#include "testb.h"

class CompressedDecInTxn
{
public:
  enum Instruction
  {
    // * Valid Compressed Instructions
    C_ADDI4SPN,
    C_LW,
    C_SW,
    C_NOP,
    C_ADDI,
    C_JAL,
    C_J,
    C_LI,
    C_LUI,
    C_ADDI16SP,
    C_SRLI,
    C_SRAI,
    C_ANDI,
    C_SUB,
    C_XOR,
    C_OR,
    C_AND,
    C_BEQZ,
    C_BNEZ,
    C_SLLI,
    C_LWSP,
    C_MV,
    C_JR,
    C_ADD,
    C_EBREAK,
    C_JALR,
    C_SWSP,
    // * Illegal Instructions
    C_FLD,
    C_LQ,
    C_FLW,
    C_LD,
    C_FSD,
    C_SQ,
    C_FSW,
    C_SD,
    C_SUBW,
    C_ADDW,
    C_FLDSP,
    C_LQSP,
    C_FLWSP,
    C_LDSP,
    C_FSDSP,
    C_SQSP,
    C_FSWSP,
    C_SDSP,
    ILLEGAL0,     // ! All 16-bits 0
    ILLEGAL1,     // ! Bits 15:13 = 100
    ILLEGAL2,     // ! Bits [15:13] = 011 & bits [12] + [6:2] = 000000 & bits [1:0] = 01
    ILLEGAL3,     // ! For C.SRLI and C.SRAI, if bit 12 is 1
    ILLEGAL4,     // ! Bits [15:13] = 100 & bits [12:10] = 111 + [6:5] = 10 & bits [1:0] = 01
    ILLEGAL5,     // ! Bits [15:13] = 100 & bits [12:10] = 111 + [6:5] = 11 & bits [1:0] = 01
    ILLEGAL6,     // ! For C.SLLI, if bit 12 is 1
    ILLEGAL7,     // ! For C.LWSP, if bits [11:7] is 0
    ILLEGAL8,     // ! For C.MV and C.JR, if bits [11:7] is 0
    ILLEGAL9,     // ! For C.ADDI4SPN, if bits [12:5] is 0
    UNCOMPRESSED, // ! Bits [1:0] = 11
  } instr;
  int decoded;
};

class CompressedDecOutTxn
{
public:
  int instr_out;
  bool is_compressed, illegal;
};

class CompressedDecScoreboard
{
private:
  std::deque<CompressedDecInTxn *> in_q;

public:
  void writeIn(CompressedDecInTxn *tx);
  void writeOut(CompressedDecOutTxn *tx);
};

class CompressedDecDriver
{
private:
  TESTB<Vibex_compressed_decoder> *dut;

public:
  CompressedDecDriver(TESTB<Vibex_compressed_decoder> *dut);
  void drive(CompressedDecInTxn *tx);
};

class CompressedDecInMonitor
{
private:
  TESTB<Vibex_compressed_decoder> *dut;
  CompressedDecScoreboard *scb;

public:
  CompressedDecInMonitor(TESTB<Vibex_compressed_decoder> *dut, CompressedDecScoreboard *scb);
  void monitor(void);
};

class CompressedDecOutMonitor
{
private:
  TESTB<Vibex_compressed_decoder> *dut;
  CompressedDecScoreboard *scb;

public:
  CompressedDecOutMonitor(TESTB<Vibex_compressed_decoder> *dut, CompressedDecScoreboard *scb);
  void monitor(void);
};

class CompressedDecSequencer
{
public:
  CompressedDecSequencer(void);
  CompressedDecInTxn *generateTxn(void);
};

#include "ibex_compressed_decoder_driver.h"
#include "ibex_compressed_decoder_monitor.h"
#include "ibex_compressed_decoder_scoreboard.h"
#include "ibex_compressed_decoder_sequencer.h"

#define CUSTOM_ARSIMDATA

class ARSimulationData
{
public:
  ARSimulationData(DUT_CLASS_NAME *real_dut)
  {
    dut = new TESTB<Vibex_compressed_decoder>(real_dut);
    drv = new CompressedDecDriver(dut);
    scb = new CompressedDecScoreboard();
    inMon = new CompressedDecInMonitor(dut, scb);
    outMon = new CompressedDecOutMonitor(dut, scb);
    seq = new CompressedDecSequencer();
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

  TESTB<Vibex_compressed_decoder> *dut;
  CompressedDecInTxn *tx;
  CompressedDecDriver *drv;
  CompressedDecScoreboard *scb;
  CompressedDecInMonitor *inMon;
  CompressedDecOutMonitor *outMon;
  CompressedDecSequencer *seq;
};

#endif
