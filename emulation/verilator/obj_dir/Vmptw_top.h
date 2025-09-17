// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VMPTW_TOP_H_
#define VERILATED_VMPTW_TOP_H_  // guard

#include "verilated.h"

class Vmptw_top__Syms;
class Vmptw_top___024root;
class VerilatedVcdC;
class Vmptw_top_memory_read_stage__pi8;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vmptw_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vmptw_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_IN8(&flush_all_i,0,0);
    VL_IN8(&flush_spec_i,0,0);
    VL_IN8(&stall_i,0,0);
    VL_OUT8(&busy_o,0,0);
    VL_OUT8(&stalled_o,0,0);
    VL_IN8(&access_type_i,1,0);
    VL_IN8(&speculative_i,0,0);
    VL_IN8(&mptw_transaction_valid_i,0,0);
    VL_OUT8(&mptw_ready_o,0,0);
    VL_OUT8(&mptw_result_valid_o,0,0);
    VL_OUT8(&access_page_fault_o,0,0);
    VL_OUT8(&format_error_o,2,0);
    VL_OUT8(&plb_master_mem_req,0,0);
    VL_IN8(&plb_master_mem_gnt,0,0);
    VL_IN8(&plb_master_mem_valid,0,0);
    VL_OUT8(&plb_master_mem_we,0,0);
    VL_OUT8(&plb_master_mem_be,7,0);
    VL_IN8(&plb_master_mem_error,0,0);
    VL_IN64(&spa_i,63,0);
    VL_IN64(&mmpt_reg_i,63,0);
    VL_OUT64(&plb_entry_o,63,0);
    VL_OUT64(&plb_master_mem_addr,63,0);
    VL_IN64(&plb_master_mem_rdata,63,0);
    VL_OUT64(&plb_master_mem_wdata,63,0);
    VL_OUT8((&walking_mem_master_mem_req)[4],0,0);
    VL_IN8((&walking_mem_master_mem_gnt)[4],0,0);
    VL_IN8((&walking_mem_master_mem_valid)[4],0,0);
    VL_OUT64((&walking_mem_master_mem_addr)[4],63,0);
    VL_IN64((&walking_mem_master_mem_rdata)[4],63,0);
    VL_OUT64((&walking_mem_master_mem_wdata)[4],63,0);
    VL_OUT8((&walking_mem_master_mem_we)[4],0,0);
    VL_OUT8((&walking_mem_master_mem_be)[4],7,0);
    VL_IN8((&walking_mem_master_mem_error)[4],0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vmptw_top_memory_read_stage__pi8* const __PVT__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u;
    Vmptw_top_memory_read_stage__pi8* const __PVT__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    Vmptw_top_memory_read_stage__pi8* const __PVT__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    Vmptw_top_memory_read_stage__pi8* const __PVT__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    Vmptw_top_memory_read_stage__pi8* const __PVT__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vmptw_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vmptw_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vmptw_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vmptw_top();
  private:
    VL_UNCOPYABLE(Vmptw_top);  ///< Copying not allowed

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
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
