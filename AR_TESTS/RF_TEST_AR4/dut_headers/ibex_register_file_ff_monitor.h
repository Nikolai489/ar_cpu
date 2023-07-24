#include "ibex_register_file_ff_tbf.h"

RFInMonitor::RFInMonitor(TESTB<DUT_CLASS_NAME> *dut, RFScoreboard *scb) {
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

RFOutMonitor::RFOutMonitor(TESTB<DUT_CLASS_NAME> *dut, RFScoreboard *scb) {
  this->dut = dut;
  this->scb = scb;
}

void RFOutMonitor::monitor() {
  RFOutTxn *out_tx = new RFOutTxn();
  out_tx->read_data_1 = dut->m_core->rdata_a_o;
  out_tx->read_data_2 = dut->m_core->rdata_b_o;
  out_tx->rf[0] = dut->m_core->rf_reg_0;
  out_tx->rf[1]= dut->m_core->rf_reg_1;
  out_tx->rf[2]= dut->m_core->rf_reg_2;
  out_tx->rf[3]= dut->m_core->rf_reg_3;
  out_tx->rf[4]= dut->m_core->rf_reg_4;
  out_tx->rf[5]= dut->m_core->rf_reg_5;
  out_tx->rf[6]= dut->m_core->rf_reg_6;
  out_tx->rf[7]= dut->m_core->rf_reg_7;
  out_tx->rf[8]= dut->m_core->rf_reg_8;
  out_tx->rf[9]= dut->m_core->rf_reg_9;
  out_tx->rf[10] = dut->m_core->rf_reg_10;
  out_tx->rf[11] = dut->m_core->rf_reg_11;
  out_tx->rf[12] = dut->m_core->rf_reg_12;
  out_tx->rf[13] = dut->m_core->rf_reg_13;
  out_tx->rf[14] = dut->m_core->rf_reg_14;
  out_tx->rf[15] = dut->m_core->rf_reg_15;
  out_tx->rf[16] = dut->m_core->rf_reg_16;
  out_tx->rf[17] = dut->m_core->rf_reg_17;
  out_tx->rf[18] = dut->m_core->rf_reg_18;
  out_tx->rf[19] = dut->m_core->rf_reg_19;
  out_tx->rf[20] = dut->m_core->rf_reg_20;
  out_tx->rf[21] = dut->m_core->rf_reg_21;
  out_tx->rf[22] = dut->m_core->rf_reg_22;
  out_tx->rf[23] = dut->m_core->rf_reg_23;
  out_tx->rf[24] = dut->m_core->rf_reg_24;
  out_tx->rf[25] = dut->m_core->rf_reg_25;
  out_tx->rf[26] = dut->m_core->rf_reg_26;
  out_tx->rf[27] = dut->m_core->rf_reg_27;
  out_tx->rf[28] = dut->m_core->rf_reg_28;
  out_tx->rf[29] = dut->m_core->rf_reg_29;
  out_tx->rf[30] = dut->m_core->rf_reg_30;
  out_tx->rf[31] = dut->m_core->rf_reg_31;

  scb->writeOut(out_tx);
}
