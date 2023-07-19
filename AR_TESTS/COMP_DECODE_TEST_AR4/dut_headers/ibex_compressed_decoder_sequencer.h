#include "ibex_compressed_decoder_tbf.h"

CompressedDecSequencer::CompressedDecSequencer() {}

CompressedDecInTxn *CompressedDecSequencer::generateTxn() {
  CompressedDecInTxn *tx = new CompressedDecInTxn();
  std::srand(rand());
  tx->instr = CompressedDecInTxn::Instruction(rand() % 56);
  return tx;
}
