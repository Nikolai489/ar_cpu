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

#include "Vcve2_dec.h"
#include "Vcve2_dec___024unit.h"
#include "Vcve2_dec_cve2_pkg.h"
#include "cve2_dec_tbf.h"
#include "testb.h"
#include "verilated.h"

int main(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);

  TESTB<Vcve2_dec> *dut = new TESTB<Vcve2_dec>;

  DECInTxn *tx;
  DECDriver *drv = new DECDriver(dut);
  DECScoreboard *scb = new DECScoreboard();
  DECInMonitor *inMon = new DECInMonitor(dut, scb);
  DECOutMonitor *outMon = new DECOutMonitor(dut, scb);
  DECSequencer *seq = new DECSequencer();

  int step_or_clock = (TICK_MODE ? SIM_TIME_STEP : CLOCK_PERIOD);
  int time_or_clocks = (TICK_MODE ? (SIM_TIME / SIM_TIME_STEP) : SIM_TIME);

  dut->openTrace("cve2_dec.vcd");

  for (unsigned clocks = 0; clocks <= time_or_clocks; clocks++) {
    if (clocks % 10 == 0)
      tx = seq->generateTxn(clocks);

    drv->drive(tx);

    if (clocks % 10 == 9)
      delete tx;

    if (clocks % 10 == 5) {
      inMon->monitor();
      outMon->monitor();
    }

    try {
      dut->tick(TICK_MODE, step_or_clock, TIME_UNIT);
    } catch (std::invalid_argument &e) {
      std::cerr << e.what() << std::endl;
      dut->tick(TICK_MODE, step_or_clock, "ps");
    }
  }

  printf("\n\nSimulation Complete\n");
  delete dut;
  delete outMon;
  delete inMon;
  delete scb;
  delete drv;
  delete seq;
  exit(EXIT_SUCCESS);
}
