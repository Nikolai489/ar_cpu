#include "Vdr32e_branch_predict.h"
// #include "Vdr32e_branch_predict___024unit.h"
#include "Vdr32e_branch_predict_dr32e_pkg.h"
#include "dr32e_branch_predict_tbf.h"

BPDriver::BPDriver(TESTB<Vdr32e_branch_predict> *dut) {
  this->dut = dut;
}

void BPDriver::drive(BPInTxn *tx) {
  if (tx != NULL) {
    dut->m_core->fetch_rdata_i = tx->instr;
    dut->m_core->fetch_pc_i = tx->pc;
    dut->m_core->fetch_valid_i = tx->valid;
  }
}
