#include "ibex_fetch_fifo_tbf.h"
#include "Vibex_fetch_fifo.h"
#include "testb.h"

void FFScoreboard::writeIn(FFInTxn *tx) {
  in_q.push_back(tx);
}

void FFScoreboard::writeOut(FFOutTxn *tx) {
  if (in_q.empty()) {
    printf("Fatal error in FF Scoreboard: empty transaction queue");
    exit(1);
  }

  FFInTxn *in;
  in = in_q.front();
  in_q.pop_front();
  

  std::cout << "Time " << main_time__ << std::endl;


  if (in->in_rdata != tx->out_rdata) {
        printf(ANSI_COLOR_RED "FIFO SCOREBOARD:  MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->in_rdata, tx->out_rdata);
      } else {
        printf(ANSI_COLOR_GREEN "FIFO SCOREBOARD: MATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->in_rdata, tx->out_rdata);
      }

  delete in;
  delete tx;
}
