// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmptw_top.h for the primary calling header

#ifndef VERILATED_VMPTW_TOP_MEMORY_READ_STAGE__PI8_H_
#define VERILATED_VMPTW_TOP_MEMORY_READ_STAGE__PI8_H_  // guard

#include "verilated.h"


class Vmptw_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmptw_top_memory_read_stage__pi8 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
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
        CData/*0:0*/ __PVT__req_bus_ready;
        CData/*0:0*/ __PVT__to_output_bus_valid;
        CData/*0:0*/ __PVT__valid_do_walk;
        CData/*0:0*/ __PVT__grant_fifo_push;
        CData/*0:0*/ __PVT__grant_fifo_pop;
        CData/*0:0*/ __PVT__valid_fifo_push;
        CData/*0:0*/ __PVT__valid_fifo_pop;
        CData/*5:0*/ __PVT__valid_counter_q;
        CData/*5:0*/ __PVT__valid_counter_d;
        CData/*5:0*/ __PVT__spec_transaction_cnt_q;
        CData/*5:0*/ __PVT__spec_transaction_cnt_d;
        CData/*5:0*/ __PVT__stage_usage;
        CData/*1:0*/ __PVT__grant_fifo_status_q;
        CData/*1:0*/ __PVT__grant_fifo_status_d;
        CData/*1:0*/ __PVT__valid_fifo_status_q;
        CData/*1:0*/ __PVT__valid_fifo_status_d;
        CData/*0:0*/ __PVT__flush_fifo;
        CData/*0:0*/ __PVT__flush_grant_fifo_pop;
        CData/*1:0*/ __PVT__flush_status_q;
        CData/*1:0*/ __PVT__flush_status_d;
        CData/*0:0*/ __PVT__grant_fifo_u__DOT__gate_clock;
        CData/*4:0*/ __PVT__grant_fifo_u__DOT__read_pointer_n;
        CData/*4:0*/ __PVT__grant_fifo_u__DOT__read_pointer_q;
        CData/*4:0*/ __PVT__grant_fifo_u__DOT__write_pointer_n;
        CData/*4:0*/ __PVT__grant_fifo_u__DOT__write_pointer_q;
        CData/*5:0*/ __PVT__grant_fifo_u__DOT__status_cnt_n;
        CData/*5:0*/ __PVT__grant_fifo_u__DOT__status_cnt_q;
        CData/*0:0*/ __PVT__valid_fifo_u__DOT__gate_clock;
        CData/*4:0*/ __PVT__valid_fifo_u__DOT__read_pointer_n;
        CData/*4:0*/ __PVT__valid_fifo_u__DOT__read_pointer_q;
        CData/*4:0*/ __PVT__valid_fifo_u__DOT__write_pointer_n;
        CData/*4:0*/ __PVT__valid_fifo_u__DOT__write_pointer_q;
        CData/*5:0*/ __PVT__valid_fifo_u__DOT__status_cnt_n;
        CData/*5:0*/ __PVT__valid_fifo_u__DOT__status_cnt_q;
        VL_INW(stage_slave_data,279,0,9);
        VL_OUTW(stage_master_data,279,0,9);
        VlWide<9>/*279:0*/ __PVT__to_output_bus_data;
        VL_OUT64(memory_master_mem_addr,63,0);
        VL_IN64(memory_master_mem_rdata,63,0);
        VL_OUT64(__PVT__memory_master_mem_wdata,63,0);
        VlWide<9>/*279:0*/ __PVT__valid_fifo_to_master;
        VlWide<9>/*279:0*/ __Vcellout__grant_fifo_u__data_o;
        VlWide<9>/*279:0*/ __Vcellout__valid_fifo_u__data_o;
        VlWide<9>/*279:0*/ __Vcellinp__valid_fifo_u__data_i;
        VlWide<280>/*8959:0*/ __PVT__grant_fifo_u__DOT__mem_n;
        VlWide<280>/*8959:0*/ __PVT__grant_fifo_u__DOT__mem_q;
        VlWide<9>/*279:0*/ grant_fifo_u__DOT____Vlvbound_h4b40406a__0;
    };
    struct {
        VlWide<280>/*8959:0*/ __PVT__valid_fifo_u__DOT__mem_n;
        VlWide<280>/*8959:0*/ __PVT__valid_fifo_u__DOT__mem_q;
        VlWide<9>/*279:0*/ valid_fifo_u__DOT____Vlvbound_h4b40406a__0;
    };

    // INTERNAL VARIABLES
    Vmptw_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmptw_top_memory_read_stage__pi8(Vmptw_top__Syms* symsp, const char* v__name);
    ~Vmptw_top_memory_read_stage__pi8();
    VL_UNCOPYABLE(Vmptw_top_memory_read_stage__pi8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
