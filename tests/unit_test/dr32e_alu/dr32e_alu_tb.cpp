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

#include "Vdr32e_alu.h"
// #include "Vdr32e_alu___024unit.h"
#include "Vdr32e_alu_dr32e_pkg.h"
#include "components/dr32e_alu_tbf.h"
#include "testb.h"
#include "verilated.h"

int main(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);

  TESTB<Vdr32e_alu> *dut = new TESTB<Vdr32e_alu>;

  ALUInTxn *tx;
  ALUDriver *drv = new ALUDriver(dut);
  ALUScoreboard *scb = new ALUScoreboard();
  ALUInMonitor *inMon = new ALUInMonitor(dut, scb);
  ALUOutMonitor *outMon = new ALUOutMonitor(dut, scb);
  ALUSequencer *seq = new ALUSequencer();

  int step_or_clock = (TICK_MODE ? SIM_TIME_STEP : CLOCK_PERIOD);
  int time_or_clocks = (TICK_MODE ? (SIM_TIME / SIM_TIME_STEP) : SIM_TIME);

  dut->openTrace("dr32e_alu.vcd");

  for (unsigned clocks = 0; clocks <= time_or_clocks; clocks++) {
    if (clocks % 10 == 0)
      tx = seq->generateTxn();

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
