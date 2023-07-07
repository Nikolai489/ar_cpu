#ifndef TESTB_H
#define TESTB_H

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <verilated_vcd_c.h>

#include "defines.h"
#include "components/instr_defs.h"
#define TBASSERT(TB, A) \
  do {                  \
    if (!A) {           \
      TB.closeTrace();  \
    }                   \
    assert(A);          \
  } while (0);

template <class VA>
class TESTB {
 public:
  VA *m_core;
  VerilatedVcdC *m_trace;
  uint64_t m_tick_count;

  TESTB(void) : m_trace(NULL), m_tick_count(0l) {
    m_core = new VA;
    Verilated::traceEverOn(true);
    m_core->clk_i = 0;
    eval();
  }

  virtual ~TESTB(void) {
    closeTrace();
    delete m_core;
    m_core = NULL;
  }

  virtual void openTrace(const char *vcd_name) {
    if (!m_trace) {
      m_trace = new VerilatedVcdC;
      m_core->trace(m_trace, PROBE_DEPTH);
      m_trace->open(vcd_name);
    }
  }

  virtual void closeTrace(void) {
    if (m_trace) {
      m_trace->close();
      delete m_trace;
      m_trace = NULL;
    }
  }

  virtual void eval(void) {
    m_core->eval();
  }

  virtual void tick(int tick_mode, int time_step, char *time_unit) {
    if (tick_mode == 0) {
      m_tick_count++;
      eval();
      if (m_trace) m_trace->dump((vluint64_t)(time_step * m_tick_count * ((!strcmp(time_unit, "ps")) ? 1 : (!strcmp(time_unit, "ns") ? 1000 : (!strcmp(time_unit, "us")) ? 1000000
                                                                                                                                                                         : throw std::invalid_argument("Invalid time units!\nDefaulting to ps"))) -
                                              2 * (time_step / (float)10) * ((!strcmp(time_unit, "ps")) ? 1 : (!strcmp(time_unit, "ns") ? 1000 : (!strcmp(time_unit, "us")) ? 1000000
                                                                                                                                                                            : throw std::invalid_argument("Invalid time units!\nDefaulting to ps")))));
      m_core->clk_i = 1;
      eval();
      if (m_trace) m_trace->dump((vluint64_t)(time_step * m_tick_count * ((!strcmp(time_unit, "ps")) ? 1 : (!strcmp(time_unit, "ns") ? 1000 : (!strcmp(time_unit, "us")) ? 1000000
                                                                                                                                                                         : throw std::invalid_argument("Invalid time units!\nDefaulting to ps")))));
      m_core->clk_i = 0;
      eval();
      if (m_trace) {
        m_trace->dump((vluint64_t)(time_step * m_tick_count * ((!strcmp(time_unit, "ps")) ? 1 : (!strcmp(time_unit, "ns") ? 1000 : (!strcmp(time_unit, "us")) ? 1000000
                                                                                                                                                              : throw std::invalid_argument("Invalid time units!\nDefaulting to ps"))) +
                                   5 * (time_step / (float)10) * ((!strcmp(time_unit, "ps")) ? 1 : (!strcmp(time_unit, "ns") ? 1000 : (!strcmp(time_unit, "us")) ? 1000000
                                                                                                                                                                 : throw std::invalid_argument("Invalid time units!\nDefaulting to ps")))));
        m_trace->flush();
      }
    } else {
      eval();
      m_trace->dump(m_tick_count);
      m_tick_count += time_step * ((!strcmp(time_unit, "ps")) ? 1 : (!strcmp(time_unit, "ns") ? 1000 : (!strcmp(time_unit, "us")) ? 1000000
                                                                                                                                  : throw std::invalid_argument("Invalid time units!\nDefaulting to ps")));  // * Smallest Time-step = 1ps
    }
  }

  unsigned long tick_count(void) {
    return m_tick_count;
  }
};

#endif  // TESTBENCH_H
