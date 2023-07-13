#include "dr32e_lsu_tbf.h"
#include <random>
#include "Vdr32e_lsu.h"
//#include "Vdr32e_lsu___024unit.h"
//#include "Vdr32e_lsu_dr32e_pkg.h"
#include "../testb.h"
//#define TIMEUNIT 10
using namespace std;
int prev_gnt, prev_valid;

LSUSequencer::LSUSequencer(TESTB<Vdr32e_lsu> *dut) {
  this->dut = dut;
}

LSUInTxn *LSUSequencer::generateTxn(int clocks) {
  LSUInTxn *tx = new LSUInTxn();
  tx->rst = 1;
  //tx->valid = 1;
  //tx->gnt = 1;
  tx->we = rand() % 2;
  tx->adder_result = rand();
  tx->sign_ext = rand() % 2;
  //tx->rdata = rand();
  if(tx->we)
    tx->wdata = rand();
  tx->req = 1;
  tx->type = rand() % 4;
  return tx;
}

LSUInTxn *LSUSequencer::driveCtrlSignals(){
  LSUInTxn *tx = new LSUInTxn();
  LSUOutTxn *tx_out = new LSUOutTxn();
  tx_out->req_o = dut->m_core->data_req_o;
  tx->rst = 1;
  if(prev_gnt == 1 & prev_valid == 0 & tx_out->req_o == 0){
    tx->valid = 1;
    tx->adder_result = rand();
    tx->rdata = rand();
  }
  if(tx_out->req_o == 1)
    tx->gnt = 1;
  prev_gnt = tx->gnt;
  prev_valid = tx->valid; 
  return tx;
}