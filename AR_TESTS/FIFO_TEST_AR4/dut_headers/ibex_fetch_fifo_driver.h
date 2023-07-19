#include "ibex_fetch_fifo_tbf.h"

FFDriver::FFDriver(TESTB<DUT_CLASS_NAME> *dut)
{
  this->dut = dut;
}

void FFDriver::drive(FFInTxn *tx)
{
  if (tx != NULL)
  {
    dut->m_core->rst_ni = tx->rst;
    dut->m_core->clear_i = tx->clear;
    dut->m_core->in_valid_i = tx->in_valid;
    dut->m_core->in_addr_i = tx->in_addr;
    dut->m_core->in_rdata_i = tx->in_rdata;
    dut->m_core->in_err_i = tx->in_err;
    dut->m_core->out_ready_i = tx->out_ready;
  }
}
