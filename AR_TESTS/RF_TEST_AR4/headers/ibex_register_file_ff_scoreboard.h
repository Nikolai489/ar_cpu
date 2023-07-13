#include "Vibex_register_file_ff.h"
#include "ibex_register_file_ff_tbf.h"
#include "testb.h"

void debugInfo(RFOutTxn *tx) {
  printf(DEBUG "Register File State:\n" RESET);
  for (int i = 0; i < 16; i++) {
    printf(DEBUG "x%d:" RESET, 2 * i);
    SET_CURSOR_POS(5);
    printf(DEBUG "%d" RESET, tx->rf[2 * i]);
    SET_CURSOR_POS(15);
    printf(DEBUG "x%d:" RESET, 2 * i + 1);
    SET_CURSOR_POS(20);
    printf(DEBUG "%d\n" RESET, tx->rf[2 * i + 1]);
  }
  printf("\n");
}

void RFScoreboard::writeIn(RFInTxn *tx) {
  in_q.push_back(tx);
}

void RFScoreboard::writeOut(RFOutTxn *tx) {
  if (in_q.empty()) {
    printf("Fatal error in Register File Scoreboard: empty transaction queue");
    exit(1);
  }

  RFInTxn *in;
  in = in_q.front();
  in_q.pop_front();

  if (in->read_addr_1 && !in->read_addr_2 && !in->write_en) {
    printf(INFO "Reading data on Port 1:\nRegister Address: x%d\tData: %d\n" RESET, in->read_addr_1, tx->read_data_1);
    debugInfo(tx);
  } else if (in->read_addr_2 && !in->read_addr_1 && !in->write_en) {
    printf(INFO "Reading data on Port 2:\nRegister Address: x%d\tData: %d\n" RESET, in->read_addr_2, tx->read_data_2);
    debugInfo(tx);
  } else if (in->read_addr_2 && in->read_addr_1 && !in->write_en) {
    printf(INFO "Reading data on Both Ports:\nPort1 Address: x%d\tData: %d\nPort2 Address: x%d\tData: %d\n" RESET, in->read_addr_1, tx->read_data_1, in->read_addr_2, tx->read_data_2);
    debugInfo(tx);
  } else {
    printf(INFO "Writing data:\nRegister Address: x%d\tData: %d\n" RESET, in->write_addr, in->write_data);
    debugInfo(tx);
  }

  delete in;
  delete tx;
}
