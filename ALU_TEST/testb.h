#ifndef TESTB_H
#define TESTB_H

#include <stdint.h>
#include <stdio.h>
#include <verilated_vcd_c.h>

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
      m_core->trace(m_trace, 99);
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

  virtual void tick(void) {
    m_tick_count++;
    eval();
    if (m_trace) m_trace->dump((vluint64_t)(10 * m_tick_count - 2));
    m_core->clk_i = 1;
    eval();
    if (m_trace) m_trace->dump((vluint64_t)(10 * m_tick_count));
    m_core->clk_i = 0;
    eval();
    if (m_trace) {
      m_trace->dump((vluint64_t)(10 * m_tick_count + 5));
      m_trace->flush();
    }
  }

  unsigned long tick_count(void) {
    return m_tick_count;
  }
};

#endif  // TESTBENCH_H
