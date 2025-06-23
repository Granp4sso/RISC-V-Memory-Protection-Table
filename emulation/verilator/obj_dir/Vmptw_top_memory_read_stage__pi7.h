// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmptw_top.h for the primary calling header

#ifndef _VMPTW_TOP_MEMORY_READ_STAGE__PI7_H_
#define _VMPTW_TOP_MEMORY_READ_STAGE__PI7_H_  // guard

#include "verilated.h"

//==========

class Vmptw_top__Syms;
class Vmptw_top_VerilatedVcd;


//----------

VL_MODULE(Vmptw_top_memory_read_stage__pi7) {
  public:
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(stage_slave_valid,0,0);
    VL_OUT8(stage_slave_ready,0,0);
    VL_OUT8(stage_master_valid,0,0);
    VL_IN8(stage_master_ready,0,0);
    VL_IN8(stage_ctrl_flush,1,0);
    VL_IN8(stage_ctrl_stall,0,0);
    VL_OUT8(stage_status_busy,0,0);
    VL_OUT8(stage_status_flushed,1,0);
    VL_OUT8(stage_status_stalled,0,0);
    VL_OUT8(memory_master_mem_req,0,0);
    VL_IN8(memory_master_mem_gnt,0,0);
    VL_IN8(memory_master_mem_valid,0,0);
    VL_OUT8(__PVT__memory_master_mem_we,0,0);
    VL_OUT8(__PVT__memory_master_mem_be,7,0);
    VL_IN8(memory_master_mem_error,0,0);
    VL_INW(stage_slave_data,279,0,9);
    VL_OUTW(stage_master_data,279,0,9);
    VL_OUT64(memory_master_mem_addr,63,0);
    VL_IN64(memory_master_mem_rdata,63,0);
    VL_OUT64(__PVT__memory_master_mem_wdata,63,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__req_bus_ready;
    CData/*0:0*/ __PVT__to_output_bus_valid;
    CData/*0:0*/ __PVT__valid_do_walk;
    CData/*0:0*/ __PVT__grant_fifo_push;
    CData/*0:0*/ __PVT__grant_fifo_pop;
    CData/*0:0*/ __PVT__valid_fifo_push;
    CData/*0:0*/ __PVT__valid_fifo_pop;
    CData/*6:0*/ __PVT__valid_counter_q;
    CData/*6:0*/ __PVT__valid_counter_d;
    CData/*6:0*/ __PVT__spec_transaction_cnt_q;
    CData/*6:0*/ __PVT__spec_transaction_cnt_d;
    CData/*6:0*/ __PVT__stage_usage;
    CData/*1:0*/ __PVT__grant_fifo_status_q;
    CData/*1:0*/ __PVT__grant_fifo_status_d;
    CData/*1:0*/ __PVT__valid_fifo_status_q;
    CData/*1:0*/ __PVT__valid_fifo_status_d;
    CData/*0:0*/ __PVT__flush_fifo;
    CData/*0:0*/ __PVT__flush_grant_fifo_pop;
    CData/*1:0*/ __PVT__flush_status_q;
    CData/*1:0*/ __PVT__flush_status_d;
    CData/*0:0*/ __PVT__grant_fifo_u__DOT__gate_clock;
    CData/*5:0*/ __PVT__grant_fifo_u__DOT__read_pointer_n;
    CData/*5:0*/ __PVT__grant_fifo_u__DOT__read_pointer_q;
    CData/*5:0*/ __PVT__grant_fifo_u__DOT__write_pointer_n;
    CData/*5:0*/ __PVT__grant_fifo_u__DOT__write_pointer_q;
    CData/*6:0*/ __PVT__grant_fifo_u__DOT__status_cnt_n;
    CData/*6:0*/ __PVT__grant_fifo_u__DOT__status_cnt_q;
    CData/*0:0*/ __PVT__valid_fifo_u__DOT__gate_clock;
    CData/*5:0*/ __PVT__valid_fifo_u__DOT__read_pointer_n;
    CData/*5:0*/ __PVT__valid_fifo_u__DOT__read_pointer_q;
    CData/*5:0*/ __PVT__valid_fifo_u__DOT__write_pointer_n;
    CData/*5:0*/ __PVT__valid_fifo_u__DOT__write_pointer_q;
    CData/*6:0*/ __PVT__valid_fifo_u__DOT__status_cnt_n;
    CData/*6:0*/ __PVT__valid_fifo_u__DOT__status_cnt_q;
    WData/*279:0*/ __PVT__to_output_bus_data[9];
    WData/*279:0*/ __PVT__grant_fifo_to_valid_fifo[9];
    WData/*279:0*/ __PVT__valid_fifo_to_master[9];
    WData/*17919:0*/ __PVT__grant_fifo_u__DOT__mem_n[560];
    WData/*17919:0*/ __PVT__grant_fifo_u__DOT__mem_q[560];
    WData/*17919:0*/ __PVT__valid_fifo_u__DOT__mem_n[560];
    WData/*17919:0*/ __PVT__valid_fifo_u__DOT__mem_q[560];
    
    // LOCAL VARIABLES
    WData/*279:0*/ __Vcellout__grant_fifo_u__data_o[9];
    WData/*279:0*/ grant_fifo_u__DOT____Vlvbound1[9];
    WData/*279:0*/ valid_fifo_u__DOT____Vlvbound1[9];
    
    // INTERNAL VARIABLES
  private:
    Vmptw_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmptw_top_memory_read_stage__pi7);  ///< Copying not allowed
  public:
    Vmptw_top_memory_read_stage__pi7(const char* name = "TOP");
    ~Vmptw_top_memory_read_stage__pi7();
    
    // INTERNAL METHODS
    void __Vconfigure(Vmptw_top__Syms* symsp, bool first);
    void _combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__11(Vmptw_top__Syms* __restrict vlSymsp);
    void _combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__32(Vmptw_top__Syms* __restrict vlSymsp);
    void _combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__12(Vmptw_top__Syms* __restrict vlSymsp);
    void _combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__33(Vmptw_top__Syms* __restrict vlSymsp);
    void _combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__13(Vmptw_top__Syms* __restrict vlSymsp);
    void _combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__34(Vmptw_top__Syms* __restrict vlSymsp);
    void _combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__14(Vmptw_top__Syms* __restrict vlSymsp);
    void _combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__35(Vmptw_top__Syms* __restrict vlSymsp);
    void _combo__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__15(Vmptw_top__Syms* __restrict vlSymsp);
    void _combo__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__31(Vmptw_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__27(Vmptw_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__44(Vmptw_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__28(Vmptw_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__43(Vmptw_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__29(Vmptw_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__42(Vmptw_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__30(Vmptw_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__41(Vmptw_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__16(Vmptw_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__21(Vmptw_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__26(Vmptw_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__45(Vmptw_top__Syms* __restrict vlSymsp);
    void _settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__1(Vmptw_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__7(Vmptw_top__Syms* __restrict vlSymsp);
    void _settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__2(Vmptw_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__8(Vmptw_top__Syms* __restrict vlSymsp);
    void _settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__3(Vmptw_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__9(Vmptw_top__Syms* __restrict vlSymsp);
    void _settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__10(Vmptw_top__Syms* __restrict vlSymsp);
    void _settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__4(Vmptw_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__5(Vmptw_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__6(Vmptw_top__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
