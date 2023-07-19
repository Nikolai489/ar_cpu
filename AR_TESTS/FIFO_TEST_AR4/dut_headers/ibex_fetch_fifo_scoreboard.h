#include "ibex_fetch_fifo_tbf.h"

FFScoreboard::FFScoreboard(){
  error_count_ = 0;
}

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
  

  //std::cout << "Time " << main_time__ << std::endl;

  printf(ANSI_COLOR_TIME "Time: %ld %s\n" ANSI_COLOR_RESET,main_time__,TIME_UNIT);
  if (in->in_rdata != tx->out_rdata) {
        printf(ANSI_COLOR_RED "FIFO SCOREBOARD:  MISMATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->in_rdata, tx->out_rdata);
      } else {
        error_count_++;
        printf(ANSI_COLOR_GREEN "FIFO SCOREBOARD: MATCH\n\tEXPECTED: %d\tACTUAL: %d\n\n" ANSI_COLOR_RESET, in->in_rdata, tx->out_rdata);
      }

  if(main_stop_time__ - 9 == main_time__){
    if(error_count_ > 0)
    {
      printf(ANSI_COLOR_RED "FIFO SCOREBOARD: '%d' Errors Found\n\n" ANSI_COLOR_RESET, error_count_);
    }
    else
    {
      printf(ANSI_COLOR_GREEN "FIFO SCOREBOARD: '%d' Errors Found\n\n" ANSI_COLOR_RESET, error_count_);
    }
  }
  delete in;
  delete tx;
}
