#include "dr32e_dec_tbf.h"

#include "Vdr32e_dec.h"
//#include "Vdr32e_dec___024unit.h"
#include "Vdr32e_dec_dr32e_pkg.h"
#include "../testb.h"

DECDriver::DECDriver(TESTB<Vdr32e_dec> *dut) {
  this->dut = dut;
}

void DECDriver::drive(DECInTxn *tx) {
  if (tx != NULL) {
    dut->m_core->instr_rdata_i = tx->instr;
    dut->m_core->instr_rdata_alu_i = tx->instr;
  }
}
