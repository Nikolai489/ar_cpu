#include "dr32e_dec_tbf.h"

DECDriver::DECDriver(TESTB<DUT_CLASS_NAME> *dut) {
  this->dut = dut;
}

void DECDriver::drive(DECInTxn *tx) {
  if (tx != NULL) {
    dut->m_core->instr_rdata_i = tx->instr;
    dut->m_core->instr_rdata_alu_i = tx->instr;
  }
}
