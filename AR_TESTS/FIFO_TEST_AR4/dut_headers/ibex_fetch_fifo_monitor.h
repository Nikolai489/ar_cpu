#include "ibex_fetch_fifo_tbf.h"

FFInMonitor::FFInMonitor(TESTB<DUT_CLASS_NAME> *dut, FFScoreboard *scb)
{
  this->dut = dut;
  this->scb = scb;
}
void FFInMonitor::monitor()
{
  FFInTxn *tx = new FFInTxn();

  tx->rst = dut->m_core->rst_ni;
  tx->clear = dut->m_core->clear_i;
  tx->in_valid = dut->m_core->in_valid_i;
  tx->in_addr = dut->m_core->in_addr_i;
  tx->in_rdata = dut->m_core->in_rdata_i;
  tx->in_err = dut->m_core->in_err_i;
  tx->out_ready = dut->m_core->out_ready_i;

  scb->writeIn(tx);
}

FFOutMonitor::FFOutMonitor(TESTB<DUT_CLASS_NAME> *dut, FFScoreboard *scb)
{
  this->dut = dut;
  this->scb = scb;
}

void FFOutMonitor::monitor()
{
  FFOutTxn *tx = new FFOutTxn();
  tx->out_rdata = dut->m_core->out_rdata_o;
  scb->writeOut(tx);
}