#include "Vibex_register_file_ff.h"
#include "ibex_register_file_ff_tbf.h"
#include "testb.h"

RFSequencer::RFSequencer() {}

RFInTxn *RFSequencer::generateTxn() {
  RFInTxn *tx = new RFInTxn();

  switch (rand() % 4) {
    case 0:
      tx->reset = 1;
      tx->read_addr_1 = (rand() % 31) + 1;
      tx->read_addr_2 = 0;
      tx->write_addr = 0;
      tx->write_data = 0;
      tx->write_en = 0;
      break;
    case 1:
      tx->reset = 1;
      tx->read_addr_1 = 0;
      tx->read_addr_2 = (rand() % 31) + 1;
      tx->write_addr = 0;
      tx->write_data = 0;
      tx->write_en = 0;
      break;
    case 2:
      tx->reset = 1;
      tx->read_addr_1 = (rand() % 31) + 1;
      tx->read_addr_2 = (rand() % 31) + 1;
      tx->write_addr = 0;
      tx->write_data = 0;
      tx->write_en = 0;
      break;
    case 3:
      tx->reset = 1;
      tx->read_addr_1 = 0;
      tx->read_addr_2 = 0;
      tx->write_addr = rand() % 32;
      tx->write_data = rand() % 256;
      tx->write_en = 1;
      break;
    default:
      break;
  }
  return tx;
}
