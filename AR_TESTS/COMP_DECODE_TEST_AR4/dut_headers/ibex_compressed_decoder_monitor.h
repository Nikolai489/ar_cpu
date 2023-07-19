#include "ibex_compressed_decoder_tbf.h"

CompressedDecInMonitor::CompressedDecInMonitor(TESTB<Vibex_compressed_decoder> *dut, CompressedDecScoreboard *scb) {
  this->dut = dut;
  this->scb = scb;
}

void CompressedDecInMonitor::monitor() {
  CompressedDecInTxn *tx = new CompressedDecInTxn();
  tx->instr = CompressedDecInTxn::Instruction(dut->m_core->enum_dpi);
  tx->decoded = dut->m_core->instr_i;
  scb->writeIn(tx);
}

CompressedDecOutMonitor::CompressedDecOutMonitor(TESTB<Vibex_compressed_decoder> *dut, CompressedDecScoreboard *scb) {
  this->dut = dut;
  this->scb = scb;
}

void CompressedDecOutMonitor::monitor() {
  CompressedDecOutTxn *tx = new CompressedDecOutTxn();
  tx->instr_out = dut->m_core->instr_o;
  tx->is_compressed = dut->m_core->is_compressed_o;
  tx->illegal = dut->m_core->illegal_instr_o;
  scb->writeOut(tx);
}
