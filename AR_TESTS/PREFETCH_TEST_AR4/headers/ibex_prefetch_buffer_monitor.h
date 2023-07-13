#include "ibex_prefetch_buffer_tbf.h"

// #include "Vcve2_alu.h"
// #include "Vcve2_alu___024unit.h"
// #include "Vcve2_alu_cve2_pkg.h"
#include "Vibex_prefetch_buffer.h"
#include "testb.h"

PBInMonitor::PBInMonitor(TESTB<Vibex_prefetch_buffer> *dut, PBScoreboard *scb)
{
  this->dut = dut;
  this->scb = scb;
}

void PBInMonitor::monitor()
{
  PBInTxn *tx = new PBInTxn();

  tx->rst = dut->m_core->rst_ni;
  tx->req = dut->m_core->req_i;
  tx->branch = dut->m_core->branch_i;
  tx->addr = dut->m_core->addr_i;
  tx->ready = dut->m_core->ready_i;
  tx->instr_grant = dut->m_core->instr_gnt_i;
  tx->instr_rdata = dut->m_core->instr_rdata_i;
  tx->instr_rvalid = dut->m_core->instr_rvalid_i;
  tx->instr_err = dut->m_core->instr_err_i;

  scb->writeIn(tx);
}

PBOutMonitor::PBOutMonitor(TESTB<Vibex_prefetch_buffer> *dut, PBScoreboard *scb)
{
  this->dut = dut;
  this->scb = scb;
}

void PBOutMonitor::monitor()
{
  // TODO: Monitor at half clock cycle
  PBOutTxn *tx = new PBOutTxn();
  tx->addr_out = dut->m_core->addr_o;
  tx->rdata_out = dut->m_core->rdata_o;

  // tx->comparison_result = dut->m_core->comparison_result_o;
  // tx->is_equal_result = dut->m_core->is_equal_result_o;

  scb->writeOut(tx);
}