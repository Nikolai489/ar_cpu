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

#include "Vdr32e_lsu.h"
// #include "Vdr32e_lsu___024unit.h"
//#include "Vdr32e_lsu_dr32e_pkg.h"
#include "components/dr32e_lsu_tbf.h"
#include "testb.h"
#include "verilated.h"

int main(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);

  TESTB<Vdr32e_lsu> *dut = new TESTB<Vdr32e_lsu>;

  LSUInTxn *tx;
  LSUDriver *drv = new LSUDriver(dut);
  LSUScoreboard *scb = new LSUScoreboard();
  LSUInMonitor *inMon = new LSUInMonitor(dut, scb);
  LSUOutMonitor *outMon = new LSUOutMonitor(dut, scb);
  LSUSequencer *seq = new LSUSequencer(dut);

  int step_or_clock = (TICK_MODE ? SIM_TIME_STEP : CLOCK_PERIOD);
  int time_or_clocks = (TICK_MODE ? (SIM_TIME / SIM_TIME_STEP) : SIM_TIME);

  dut->openTrace("dr32e_lsu.vcd");

  for (unsigned clocks = 0; clocks <= time_or_clocks; clocks++) {
    if (clocks % 10 == 0)
      tx = seq->generateTxn(clocks);

    drv->drive(tx);
    tx = seq->driveCtrlSignals();
    if (clocks % 10 == 9)
      delete tx;

    //if (clocks % 10 == 5) {
    // inMon->monitor();
    //  outMon->monitor();
    //}
    inMon->monitor();
    outMon->monitor();
    
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
