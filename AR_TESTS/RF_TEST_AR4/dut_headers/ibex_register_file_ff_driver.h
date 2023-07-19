#include "ibex_register_file_ff_tbf.h"

RFDriver::RFDriver(TESTB<DUT_CLASS_NAME> *dut) {
  this->dut = dut;
}

void RFDriver::drive(RFInTxn *tx) {
  if (tx != NULL) {
    dut->m_core->rst_ni = tx->reset;
    dut->m_core->raddr_a_i = tx->read_addr_1;
    dut->m_core->raddr_b_i = tx->read_addr_2;
    dut->m_core->waddr_a_i = tx->write_addr;
    dut->m_core->wdata_a_i = tx->write_data;
    dut->m_core->we_a_i = tx->write_en;
  }
}
