#include "ibex_prefetch_buffer_tbf.h"

#include "Vibex_prefetch_buffer.h"

#include "testb.h"

PBDriver::PBDriver(TESTB<Vibex_prefetch_buffer> *dut) {
  this->dut = dut;
}

void PBDriver::drive(PBInTxn *tx) {
  if (tx != NULL) {
    dut->m_core->rst_ni = tx->rst;
    dut->m_core->req_i = tx->req;
    dut->m_core->branch_i = tx->branch;
    dut->m_core->addr_i = tx->addr;
    dut->m_core->ready_i = tx->ready;
    dut->m_core->instr_gnt_i = tx->instr_grant; 
    dut->m_core->instr_rdata_i = tx->instr_rdata; 
    dut->m_core->instr_rvalid_i = tx->instr_rvalid ;
    dut->m_core->instr_err_i = tx->instr_err;  
  }
}
