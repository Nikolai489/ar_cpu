#ifndef RF_TBF_H
#define RF_TBF_H

#include <stdlib.h>

#include <cstdlib>
#include <deque>
#include <iostream>
#include <memory>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_BLUE "\e[0;34m"
#define ANSI_COLOR_YELLOW "\e[0;33m"
#define ANSI_COLOR_RESET "\x1b[0m"

#define SET_CURSOR_POS(col) printf("\r\033[%dC", col)

#define ERROR ANSI_COLOR_RED
#define WARNING ANSI_COLOR_YELLOW
#define INFO ANSI_COLOR_GREEN
#define DEBUG ANSI_COLOR_BLUE
#define RESET ANSI_COLOR_RESET
#include "testb.h"
#include "Vibex_register_file_ff___024root.h"
class RFInTxn
{
public:
  bool clk, reset, write_en;
  int read_addr_1, read_addr_2, write_addr, write_data;
};

class RFOutTxn
{
public:
  int read_data_1, read_data_2;
  VlUnpacked<IData, 32UL> rf;
};

class RFScoreboard
{
private:
  std::deque<RFInTxn *> in_q;
  int error_count_;
public:
  RFScoreboard();
  void writeIn(RFInTxn *tx);
  void writeOut(RFOutTxn *tx);
};

class RFDriver
{
private:
  TESTB<Vibex_register_file_ff> *dut;

public:
  RFDriver(TESTB<Vibex_register_file_ff> *dut);
  void drive(RFInTxn *tx);
};

class RFInMonitor
{
private:
  TESTB<Vibex_register_file_ff> *dut;
  RFScoreboard *scb;

public:
  RFInMonitor(TESTB<Vibex_register_file_ff> *dut, RFScoreboard *scb);
  void monitor();
};

class RFOutMonitor
{
private:
  TESTB<Vibex_register_file_ff> *dut;
  RFScoreboard *scb;

public:
  RFOutMonitor(TESTB<Vibex_register_file_ff> *dut, RFScoreboard *scb);
  void monitor();
};

class RFSequencer
{
public:
  RFSequencer();
  RFInTxn *generateTxn();
};

#include "ibex_register_file_ff_driver.h"
#include "ibex_register_file_ff_monitor.h"
#include "ibex_register_file_ff_scoreboard.h"
#include "ibex_register_file_ff_sequencer.h"

#define CUSTOM_ARSIMDATA

class ARSimulationData
{
public:
  ARSimulationData(DUT_CLASS_NAME *real_dut)
  {
    dut = new TESTB<Vibex_register_file_ff>(real_dut);
    drv = new RFDriver(dut);
    scb = new RFScoreboard();
    inMon = new RFInMonitor(dut, scb);
    outMon = new RFOutMonitor(dut, scb);
    seq = new RFSequencer();
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

  TESTB<Vibex_register_file_ff> *dut;
  RFInTxn *tx;
  RFDriver *drv;
  RFScoreboard *scb;
  RFInMonitor *inMon;
  RFOutMonitor *outMon;
  RFSequencer *seq;
};

#endif
