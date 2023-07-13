// #include "cve2_alu_tbf.h"

// #include "Vcve2_alu.h"
// #include "Vcve2_alu___024unit.h"
// #include "Vcve2_alu_cve2_pkg.h"
// #include "testb.h"

#include "ibex_prefetch_buffer_tbf.h"

// #include "Vcve2_alu.h"
// #include "Vcve2_alu___024unit.h"
// #include "Vcve2_alu_cve2_pkg.h"
#include "Vibex_prefetch_buffer.h"
#include "testb.h"

void PBScoreboard::writeIn(PBInTxn *tx)
{
  in_q.push_back(tx);
}

void PBScoreboard::writeOut(PBOutTxn *tx)
{
  if (in_q.empty())
  {
    printf("Fatal error in PB Scoreboard: empty transaction queue");
    exit(1);
  }

  PBInTxn *in;
  in = in_q.front();
  in_q.pop_front();

  std::cout << "Time " << main_time__ << std::endl;

  if (in->instr_rdata != tx->rdata_out)
  {
    printf(ANSI_COLOR_RED "FIFO SCOREBOARD:  MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->instr_rdata, tx->rdata_out);
  }
  else
  {
    printf(ANSI_COLOR_GREEN "FIFO SCOREBOARD: MATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->instr_rdata, tx->rdata_out);
  }

  delete in;
  delete tx;
}
