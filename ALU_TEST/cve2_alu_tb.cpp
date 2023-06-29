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

#include "Vcve2_alu.h"
#include "Vcve2_alu___024unit.h"
#include "Vcve2_alu_cve2_pkg.h"
#include "cve2_alu_tbf.cpp"
#include "testb.h"
#include "verilated.h"

int main(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);

  TESTB<Vcve2_alu> *dut = new TESTB<Vcve2_alu>;

  ALUInTxn *tx;
  ALUDriver *drv = new ALUDriver(dut);
  ALUScoreboard *scb = new ALUScoreboard();
  ALUInMonitor *inMon = new ALUInMonitor(dut, scb);
  ALUOutMonitor *outMon = new ALUOutMonitor(dut, scb);
  ALUSequencer *seq = new ALUSequencer();

  dut->openTrace("cve2_alu.vcd");

  for (unsigned clocks = 0; clocks < 100; clocks++) {
    if (clocks % 10 == 0)
      tx = seq->generateTxn();

    drv->drive(tx);
    if (clocks % 10 == 5) {
      inMon->monitor();
      outMon->monitor();
    }

    dut->tick();
  }

  printf("\n\nSimulation Complete\n");
  delete dut;
  delete outMon;
  delete inMon;
  delete scb;
  delete drv;
  delete tx;
  delete seq;
  exit(EXIT_SUCCESS);
}
