#include "ibex_prefetch_buffer_tbf.h"

PBScoreboard::PBScoreboard(){
  error_count_ = 0;
}
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

  //std::cout << "Time " << main_time__ << std::endl;
  printf(ANSI_COLOR_TIME "Time: %ld %s\n" ANSI_COLOR_RESET,main_time__,TIME_UNIT);
  if (in->instr_rdata != tx->rdata_out)
  {
    printf(ANSI_COLOR_RED "PB SCOREBOARD:  MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->instr_rdata, tx->rdata_out);
  }
  else
  {
    printf(ANSI_COLOR_GREEN "PB SCOREBOARD: MATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->instr_rdata, tx->rdata_out);
    error_count_++;
  }
  delete in;
  delete tx;
}
