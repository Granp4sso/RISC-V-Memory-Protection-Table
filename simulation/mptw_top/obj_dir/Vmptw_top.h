// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMPTW_TOP_H_
#define _VMPTW_TOP_H_  // guard

#include "verilated.h"

//==========

class Vmptw_top__Syms;
class Vmptw_top_VerilatedVcd;


//----------

VL_MODULE(Vmptw_top) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(flush_i,0,0);
    VL_IN8(mptw_enable_i,0,0);
    VL_IN8(access_type_i,1,0);
    VL_IN8(mptw_transaction_valid_i,0,0);
    VL_OUT8(mptw_ready_o,0,0);
    VL_OUT8(access_page_fault_o,0,0);
    VL_OUT8(format_error_o,2,0);
    VL_OUT8(plb_cache_mem_req,0,0);
    VL_IN8(plb_cache_mem_gnt,0,0);
    VL_IN8(plb_cache_mem_valid,0,0);
    VL_IN8(plb_cache_mem_rdata,7,0);
    VL_OUT8(plb_cache_mem_wdata,7,0);
    VL_OUT8(plb_cache_mem_we,0,0);
    VL_OUT8(plb_cache_mem_be,0,0);
    VL_IN8(plb_cache_mem_error,0,0);
    VL_OUTW(plb_cache_mem_addr,71,0,3);
    VL_IN64(spa_i,63,0);
    VL_IN64(mmpt_reg_i,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*2:0*/ mptw_top__DOT__fetch_exception_cause;
    CData/*0:0*/ mptw_top__DOT__fetch_to_pipe_ready;
    CData/*0:0*/ mptw_top__DOT__pipe_to_plb_lookup_valid;
    CData/*0:0*/ mptw_top__DOT__pipe_to_plb_lookup_ready;
    CData/*0:0*/ mptw_top__DOT__plb_lookup_to_pipe_ready;
    CData/*0:0*/ mptw_top__DOT__pipe_to_walking_valid;
    CData/*0:0*/ mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state;
    CData/*0:0*/ mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__next_state;
    CData/*0:0*/ mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__dummy;
    CData/*0:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_q;
    CData/*0:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_valid_q;
    CData/*0:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__hit_produced;
    CData/*0:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid;
    CData/*0:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_ready;
    CData/*0:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_valid;
    CData/*0:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_ready;
    CData/*0:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__current_state;
    CData/*0:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__next_state;
    CData/*0:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__dummy;
    CData/*0:0*/ mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state;
    CData/*0:0*/ mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__next_state;
    CData/*0:0*/ mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__dummy;
    WData/*131:0*/ mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[5];
    WData/*131:0*/ mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[5];
    WData/*131:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[5];
    WData/*131:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[5];
    WData/*131:0*/ mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[5];
    WData/*131:0*/ mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[5];
    WData/*131:0*/ mptw_top__DOT__input_transaction[5];
    WData/*131:0*/ mptw_top__DOT__fetch_stage_u__DOT__transaction_o[5];
    WData/*71:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req[3];
    WData/*131:0*/ mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[5];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    CData/*0:0*/ __Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid;
    CData/*0:0*/ __Vm_traceActivity[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vmptw_top__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmptw_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vmptw_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vmptw_top();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
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
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vmptw_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vmptw_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vmptw_top__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vmptw_top__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vmptw_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__4(Vmptw_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vmptw_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vmptw_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vmptw_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(Vmptw_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vmptw_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
