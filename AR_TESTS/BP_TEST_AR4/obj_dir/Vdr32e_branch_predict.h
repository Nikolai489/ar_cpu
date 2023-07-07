// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VDR32E_BRANCH_PREDICT_H_
#define VERILATED_VDR32E_BRANCH_PREDICT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vdr32e_branch_predict__Syms;
class Vdr32e_branch_predict___024root;
class VerilatedVcdC;
class Vdr32e_branch_predict_dr32e_pkg;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vdr32e_branch_predict VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vdr32e_branch_predict__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_IN8(&fetch_valid_i,0,0);
    VL_OUT8(&predict_branch_taken_o,0,0);
    VL_IN(&fetch_rdata_i,31,0);
    VL_IN(&fetch_pc_i,31,0);
    VL_OUT(&predict_branch_pc_o,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vdr32e_branch_predict_dr32e_pkg* const __PVT__dr32e_pkg;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vdr32e_branch_predict___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vdr32e_branch_predict(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vdr32e_branch_predict(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vdr32e_branch_predict();
  private:
    VL_UNCOPYABLE(Vdr32e_branch_predict);  ///< Copying not allowed

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
