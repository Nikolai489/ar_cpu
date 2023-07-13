#include "dr32e_lsu_tbf.h"

#include "Vdr32e_lsu.h"
//#include "Vdr32e_lsu___024unit.h"
//#include "Vdr32e_lsu_dr32e_pkg.h"
#include "testb.h"

LSUDriver::LSUDriver(TESTB<Vdr32e_lsu> *dut) {
  this->dut = dut;
}

void LSUDriver::drive(LSUInTxn *tx) {
  if (tx != NULL) {
    dut->m_core->data_rvalid_i = tx->valid;
    dut->m_core->lsu_we_i = tx->we;
    dut->m_core->lsu_wdata_i = tx->wdata;
    dut->m_core->lsu_sign_ext_i = tx->sign_ext;
    dut->m_core->lsu_req_i = tx->req;
    dut->m_core->data_rdata_i = tx->rdata;
    dut->m_core->data_bus_err_i = tx->bus_err;
    dut->m_core->adder_result_ex_i = tx->adder_result;
    dut->m_core->data_gnt_i = tx->gnt;
    dut->m_core->clk_i = tx->clk;
    dut->m_core->rst_ni = tx->rst;
  }
}
