// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VIBEX_REGISTER_FILE_FF_H_
#define VERILATED_VIBEX_REGISTER_FILE_FF_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "svdpi.h"

class Vibex_register_file_ff__Syms;
class Vibex_register_file_ff___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vibex_register_file_ff VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vibex_register_file_ff__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_IN8(&test_en_i,0,0);
    VL_IN8(&dummy_instr_id_i,0,0);
    VL_IN8(&dummy_instr_wb_i,0,0);
    VL_IN8(&raddr_a_i,4,0);
    VL_IN8(&raddr_b_i,4,0);
    VL_IN8(&waddr_a_i,4,0);
    VL_IN8(&we_a_i,0,0);
    VL_OUT8(&err_o,0,0);
    VL_OUT(&rdata_a_o,31,0);
    VL_OUT(&rdata_b_o,31,0);
    VL_IN(&wdata_a_i,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vibex_register_file_ff___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vibex_register_file_ff(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vibex_register_file_ff(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vibex_register_file_ff();
  private:
    VL_UNCOPYABLE(Vibex_register_file_ff);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
