#include "Vibex_register_file_ff.h"
#include "Vibex_register_file_ff___024root.h"
#include "ibex_register_file_ff_tbf.h"
#include "testb.h"

RFInMonitor::RFInMonitor(TESTB<Vibex_register_file_ff> *dut, RFScoreboard *scb) {
  this->dut = dut;
  this->scb = scb;
}

void RFInMonitor::monitor() {
  RFInTxn *in_tx = new RFInTxn();
  in_tx->reset = dut->m_core->rst_ni;
  in_tx->read_addr_1 = dut->m_core->raddr_a_i;
  in_tx->read_addr_2 = dut->m_core->raddr_b_i;
  in_tx->write_addr = dut->m_core->waddr_a_i;
  in_tx->write_data = dut->m_core->wdata_a_i;
  in_tx->write_en = dut->m_core->we_a_i;
  scb->writeIn(in_tx);
}

RFOutMonitor::RFOutMonitor(TESTB<Vibex_register_file_ff> *dut, RFScoreboard *scb) {
  this->dut = dut;
  this->scb = scb;
}

void RFOutMonitor::monitor() {
  RFOutTxn *out_tx = new RFOutTxn();
  out_tx->read_data_1 = dut->m_core->rdata_a_o;
  out_tx->read_data_2 = dut->m_core->rdata_b_o;
  out_tx->rf = dut->m_core->rootp->ibex_register_file_ff__DOT__rf_reg;
  scb->writeOut(out_tx);
}
