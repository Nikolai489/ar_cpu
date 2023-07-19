#include "ibex_compressed_decoder_tbf.h"

CompressedDecScoreboard::CompressedDecScoreboard(){
  error_count_ = 0;
}
void CompressedDecScoreboard::writeIn(CompressedDecInTxn *tx) {
  in_q.push_back(tx);
}

void CompressedDecScoreboard::writeOut(CompressedDecOutTxn *tx) {
  if (in_q.empty()) {
    printf("Fatal error in COMP_DEC Scoreboard: empty transaction queue");
    exit(1);
  }

  CompressedDecInTxn *in;
  in = in_q.front();
  in_q.pop_front();
  printf(ANSI_COLOR_TIME "Time: %ld %s\n" ANSI_COLOR_RESET,main_time__,TIME_UNIT);
  if (in->instr == 55 && (in->decoded == tx->instr_out) && !tx->illegal && !tx->is_compressed) {
    printf(ANSI_COLOR_GREEN "COMP_DEC SCOREBOARD: UNCOMPRESSED INSTRUCTION PASSED\n\tEXPECTED: %d\tACTUAL: %d\tIS_COMPRESSED: %d\tILLEGAL: %d\n\n" ANSI_COLOR_RESET, in->decoded, tx->instr_out, tx->is_compressed, tx->illegal);
  } else if ((0 <= in->instr <= 26) && !tx->illegal && tx->is_compressed) {
    printf(ANSI_COLOR_GREEN "COMP_DEC SCOREBOARD: COMPRESSED INSTRUCTION PASSED\n\tEXPECTED: %d\tACTUAL: %d\tIS_COMPRESSED: %d\tILLEGAL: %d\n\n" ANSI_COLOR_RESET, in->decoded, tx->instr_out, tx->is_compressed, tx->illegal);
  } else if ((27 <= in->instr <= 54) && tx->illegal) {
    printf(ANSI_COLOR_GREEN "COMP_DEC SCOREBOARD: ILLEGAL INSTRUCTION DETECTED\n\tEXPECTED: %d\tACTUAL: %d\tIS_COMPRESSED: %d\tILLEGAL: %d\n\n" ANSI_COLOR_RESET, in->decoded, tx->instr_out, tx->is_compressed, tx->illegal);
  } else {
    printf(ANSI_COLOR_RED "COMP_DEC SCOREBOARD: COMPRESSED DECODER TEST FAILURE\n\tEXPECTED: %d\tACTUAL: %d\tIS_COMPRESSED: %d\tILLEGAL: %d\n\n" ANSI_COLOR_RESET, in->decoded, tx->instr_out, tx->is_compressed, tx->illegal);
    error_count_++;
  }

  if(main_stop_time__ - 9 == main_time__){
    if(error_count_ > 0)
    {
      printf(ANSI_COLOR_RED "COMP_DEC SCOREBOARD: '%d' Errors Found\n\n" ANSI_COLOR_RESET, error_count_);
    }
    else
    {
      printf(ANSI_COLOR_GREEN "COMP_DEC SCOREBOARD: '%d' Errors Found\n\n" ANSI_COLOR_RESET, error_count_);
    }
  }
  delete in;
  delete tx;
}
