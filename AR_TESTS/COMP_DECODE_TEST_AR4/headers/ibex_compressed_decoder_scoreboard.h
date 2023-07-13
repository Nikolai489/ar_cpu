#include "Vibex_compressed_decoder.h"
// #include "Vibex_compressed_decoder___024unit.h"
#include "ibex_compressed_decoder_tbf.h"
#include "testb.h"

void CompressedDecScoreboard::writeIn(CompressedDecInTxn *tx) {
  in_q.push_back(tx);
}

void CompressedDecScoreboard::writeOut(CompressedDecOutTxn *tx) {
  if (in_q.empty()) {
    printf("Fatal error in ALU Scoreboard: empty transaction queue");
    exit(1);
  }

  CompressedDecInTxn *in;
  in = in_q.front();
  in_q.pop_front();

  if (in->instr == 55 && (in->decoded == tx->instr_out) && !tx->illegal && !tx->is_compressed) {
    printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: UNCOMPRESSED INSTRUCTION PASSED\n\tEXPECTED: %d\tACTUAL: %d\tIS_COMPRESSED: %d\tILLEGAL: %d\n\n" ANSI_COLOR_RESET, in->decoded, tx->instr_out, tx->is_compressed, tx->illegal);
  } else if ((0 <= in->instr <= 26) && !tx->illegal && tx->is_compressed) {
    printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: COMPRESSED INSTRUCTION PASSED\n\tEXPECTED: %d\tACTUAL: %d\tIS_COMPRESSED: %d\tILLEGAL: %d\n\n" ANSI_COLOR_RESET, in->decoded, tx->instr_out, tx->is_compressed, tx->illegal);
  } else if ((27 <= in->instr <= 54) && tx->illegal) {
    printf(ANSI_COLOR_GREEN "ALU SCOREBOARD: ILLEGAL INSTRUCTION DETECTED\n\tEXPECTED: %d\tACTUAL: %d\tIS_COMPRESSED: %d\tILLEGAL: %d\n\n" ANSI_COLOR_RESET, in->decoded, tx->instr_out, tx->is_compressed, tx->illegal);
  } else {
    printf(ANSI_COLOR_RED "ALU SCOREBOARD: COMPRESSED DECODER TEST FAILURE\n\tEXPECTED: %d\tACTUAL: %d\tIS_COMPRESSED: %d\tILLEGAL: %d\n\n" ANSI_COLOR_RESET, in->decoded, tx->instr_out, tx->is_compressed, tx->illegal);
  }

  delete in;
  delete tx;
}
