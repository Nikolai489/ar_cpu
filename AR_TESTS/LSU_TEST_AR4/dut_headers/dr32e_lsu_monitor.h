#include "dr32e_lsu_tbf.h"

LSUInMonitor::LSUInMonitor(TESTB<Vdr32e_lsu> *dut, LSUScoreboard *scb) {
  this->dut = dut;
  this->scb = scb;
}

void LSUInMonitor::monitor() {
  LSUInTxn *tx = new LSUInTxn();
  tx->adder_result = dut->m_core->adder_result_ex_i;
  tx->clk = dut->m_core->clk_i;
  tx->gnt = dut->m_core->data_gnt_i;
  tx->rdata = dut->m_core->data_rdata_i;
  tx->req = dut->m_core->lsu_req_i;
  tx->rst = dut->m_core->rst_ni;
  tx->type = dut->m_core->lsu_type_i;
  tx->valid = dut->m_core->data_rvalid_i;
  tx->wdata = dut->m_core->lsu_wdata_i;
  tx->we = dut->m_core->lsu_we_i;
  scb->writeIn(tx);
}

LSUOutMonitor::LSUOutMonitor(TESTB<Vdr32e_lsu> *dut, LSUScoreboard *scb) {
  this->dut = dut;
  this->scb = scb;
}

void LSUOutMonitor::monitor() {
  LSUOutTxn *tx = new LSUOutTxn();
  tx->addr_last = dut->m_core->addr_last_o;
  tx->addr_o = dut->m_core->data_addr_o;
  tx->addr_req = dut->m_core->addr_incr_req_o;
  tx->be_o = dut->m_core->data_be_o;
  tx->busy = dut->m_core->busy_o;
  tx->done_o = dut->m_core->lsu_req_done_o;
  tx->load_err = dut->m_core->load_err_o;
  tx->rdata_o = dut->m_core->lsu_rdata_o;
  tx->req_o = dut->m_core->data_req_o;
  tx->resp_valid = dut->m_core->lsu_resp_valid_o;
  tx->store_err = dut->m_core->store_err_o;
  tx->valid_o = dut->m_core->lsu_rdata_valid_o;
  tx->wdata_o = dut->m_core->data_wdata_o;
  tx->we_o = dut->m_core->data_we_o;
  scb->writeOut(tx);
}