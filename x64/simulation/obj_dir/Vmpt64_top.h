// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMPT64_TOP_H_
#define _VMPT64_TOP_H_  // guard

#include "verilated.h"

//==========

class Vmpt64_top__Syms;
class Vmpt64_top_VerilatedVcd;


//----------

VL_MODULE(Vmpt64_top) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(flush_i,0,0);
    VL_IN8(ptw_enable_i,0,0);
    VL_IN8(addr_valid_i,0,0);
    VL_OUT8(access_page_fault_o,0,0);
    VL_OUT8(format_error_o,2,0);
    VL_OUT8(m_mem_req,0,0);
    VL_IN8(m_mem_gnt,0,0);
    VL_IN8(m_mem_valid,0,0);
    VL_OUT8(m_mem_we,0,0);
    VL_OUT8(m_mem_be,7,0);
    VL_IN8(m_mem_error,0,0);
    VL_OUT8(ptw_busy_o,0,0);
    VL_OUT8(ptw_valid_o,0,0);
    VL_IN8(access_type_i,1,0);
    VL_OUT8(allow_o,0,0);
    VL_IN64(spa_i,55,0);
    VL_IN64(mmpt_reg_i,63,0);
    VL_OUT64(m_mem_addr,63,0);
    VL_IN64(m_mem_rdata,63,0);
    VL_OUT64(m_mem_wdata,63,0);
    VL_OUT64(plb_entry_o,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*2:0*/ mpt64_top__DOT__next_state_d;
    CData/*2:0*/ mpt64_top__DOT__curr_state_q;
    CData/*1:0*/ mpt64_top__DOT__next_lookup_state_d;
    CData/*1:0*/ mpt64_top__DOT__curr_lookup_state_q;
    CData/*1:0*/ mpt64_top__DOT__access_type_q;
    CData/*0:0*/ mpt64_top__DOT__access_page_fault_d;
    CData/*0:0*/ mpt64_top__DOT__access_page_fault_q;
    CData/*2:0*/ mpt64_top__DOT__format_error_cause_d;
    CData/*2:0*/ mpt64_top__DOT__format_error_cause_q;
    CData/*1:0*/ mpt64_top__DOT__permissions;
    QData/*55:0*/ mpt64_top__DOT__spa_q;
    QData/*63:0*/ mpt64_top__DOT__mmpt_q;
    QData/*63:0*/ mpt64_top__DOT__mptl_entry_q;
    QData/*63:0*/ mpt64_top__DOT__plb_entry_d;
    QData/*63:0*/ mpt64_top__DOT__plb_entry_q;
    QData/*43:0*/ mpt64_top__DOT__next_look_up_addr;
    QData/*63:0*/ mpt64_top__DOT__mptl3_entry;
    QData/*63:0*/ mpt64_top__DOT__mptl2_entry;
    QData/*63:0*/ mpt64_top__DOT__mptl1_entry;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    CData/*0:0*/ __Vm_traceActivity[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vmpt64_top__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmpt64_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vmpt64_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vmpt64_top();
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
    static void _eval_initial_loop(Vmpt64_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vmpt64_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vmpt64_top__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vmpt64_top__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vmpt64_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vmpt64_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vmpt64_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vmpt64_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vmpt64_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vmpt64_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
