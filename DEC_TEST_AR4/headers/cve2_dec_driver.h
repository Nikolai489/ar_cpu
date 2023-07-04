#include "cve2_dec_tbf.h"

#include "Vcve2_dec.h"
#include "Vcve2_dec___024unit.h"
#include "Vcve2_dec_cve2_pkg.h"
#include "testb.h"

DECDriver::DECDriver(TESTB<Vcve2_dec> *dut) {
  this->dut = dut;
}

void DECDriver::drive(DECInTxn *tx) {
  if (tx != NULL) {
    dut->m_core->instr_rdata_i = tx->instr;
  }
}
