#include "Vibex_compressed_decoder.h"
// #include "Vibex_compressed_decoder___024unit.h"
#include "ibex_compressed_decoder_tbf.h"
#include "testb.h"

CompressedDecSequencer::CompressedDecSequencer() {}

CompressedDecInTxn *CompressedDecSequencer::generateTxn() {
  CompressedDecInTxn *tx = new CompressedDecInTxn();
  std::srand(rand());
  tx->instr = CompressedDecInTxn::Instruction(rand() % 56);
  return tx;
}
