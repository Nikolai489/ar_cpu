#include "Vdr32e_branch_predict.h"
// #include "Vdr32e_branch_predict___024unit.h"
#include "Vdr32e_branch_predict_dr32e_pkg.h"
#include "dr32e_branch_predict_tbf.h"

BPInMonitor::BPInMonitor(TESTB<Vdr32e_branch_predict> *dut, BPScoreboard *scb) {
  this->dut = dut;
  this->scb = scb;
}

void BPInMonitor::monitor() {
  BPInTxn *tx = new BPInTxn();
  tx->instr = dut->m_core->fetch_rdata_i;
  tx->pc = dut->m_core->fetch_pc_i;
  tx->valid = dut->m_core->fetch_valid_i;
  tx->rst = dut->m_core->rst_ni;
  scb->writeIn(tx);
}

BPOutMonitor::BPOutMonitor(TESTB<Vdr32e_branch_predict> *dut, BPScoreboard *scb) {
  this->dut = dut;
  this->scb = scb;
}

void BPOutMonitor::monitor() {
  BPOutTxn *tx = new BPOutTxn();
  tx->branch_taken = dut->m_core->predict_branch_taken_o;
  tx->branch_pc = dut->m_core->predict_branch_pc_o;
  scb->writeOut(tx);
}
