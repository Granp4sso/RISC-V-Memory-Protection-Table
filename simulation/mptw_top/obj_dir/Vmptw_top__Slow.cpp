// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmptw_top.h for the primary calling header

#include "Vmptw_top.h"
#include "Vmptw_top__Syms.h"

//==========

VL_CTOR_IMP(Vmptw_top) {
    Vmptw_top__Syms* __restrict vlSymsp = __VlSymsp = new Vmptw_top__Syms(this, name());
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmptw_top::__Vconfigure(Vmptw_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vmptw_top::~Vmptw_top() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vmptw_top::_initial__TOP__1(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_initial__TOP__1\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->plb_master_mem_wdata = 0ULL;
    vlTOPp->plb_master_mem_we = 0U;
    vlTOPp->plb_master_mem_be = 0U;
}

void Vmptw_top::_settle__TOP__2(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_settle__TOP__2\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->walking_mem_master_mem_be[0U] = 0U;
    vlTOPp->walking_mem_master_mem_we[0U] = 0U;
    vlTOPp->walking_mem_master_mem_wdata[0U] = 0ULL;
    vlTOPp->walking_mem_master_mem_be[1U] = 0U;
    vlTOPp->walking_mem_master_mem_we[1U] = 0U;
    vlTOPp->walking_mem_master_mem_wdata[1U] = 0ULL;
    vlTOPp->walking_mem_master_mem_be[2U] = 0U;
    vlTOPp->walking_mem_master_mem_we[2U] = 0U;
    vlTOPp->walking_mem_master_mem_wdata[2U] = 0ULL;
    vlTOPp->mptw_top__DOT__walking_stage_ready = (8U 
                                                  | (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready));
    vlTOPp->mptw_top__DOT__input_transaction[2U] = 
        ((0xfffffff0U & ((IData)(vlTOPp->spa_i) << 4U)) 
         | ((IData)(vlTOPp->access_type_i) << 2U));
    vlTOPp->mptw_top__DOT__input_transaction[3U] = 
        ((0xfU & ((IData)(vlTOPp->spa_i) >> 0x1cU)) 
         | (0xfffffff0U & ((IData)((vlTOPp->spa_i >> 0x20U)) 
                           << 4U)));
    vlTOPp->mptw_top__DOT__input_transaction[4U] = 
        ((0xfU & ((IData)((vlTOPp->spa_i >> 0x20U)) 
                  >> 0x1cU)) | (0xfffffff0U & ((IData)(vlTOPp->mmpt_reg_i) 
                                               << 4U)));
    vlTOPp->mptw_top__DOT__input_transaction[5U] = 
        ((0xfU & ((IData)(vlTOPp->mmpt_reg_i) >> 0x1cU)) 
         | (0xfffffff0U & ((IData)((vlTOPp->mmpt_reg_i 
                                    >> 0x20U)) << 4U)));
    vlTOPp->mptw_top__DOT__input_transaction[6U] = 
        (0xfU & ((IData)((vlTOPp->mmpt_reg_i >> 0x20U)) 
                 >> 0x1cU));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U] 
        = (IData)(vlTOPp->walking_mem_master_mem_rdata
                  [0U]);
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U] 
        = (IData)((vlTOPp->walking_mem_master_mem_rdata
                   [0U] >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U] 
        = (IData)(vlTOPp->walking_mem_master_mem_rdata
                  [1U]);
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U] 
        = (IData)((vlTOPp->walking_mem_master_mem_rdata
                   [1U] >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U] 
        = (IData)(vlTOPp->walking_mem_master_mem_rdata
                  [2U]);
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U] 
        = (IData)((vlTOPp->walking_mem_master_mem_rdata
                   [2U] >> 0x20U));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U] 
        = (IData)(vlTOPp->plb_master_mem_rdata);
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U] 
        = (IData)((vlTOPp->plb_master_mem_rdata >> 0x20U));
    vlTOPp->plb_master_mem_addr = (((QData)((IData)(
                                                    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U])) 
                                    << 0x3cU) | (((QData)((IData)(
                                                                  vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U])) 
                                                    >> 4U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(vlTOPp->plb_master_mem_gnt) & (4U 
                                                != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = 1U;
    if ((vlTOPp->walking_mem_master_mem_gnt[0U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = 1U;
    if ((vlTOPp->walking_mem_master_mem_gnt[1U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = 1U;
    if ((vlTOPp->walking_mem_master_mem_gnt[2U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q;
    if (((IData)(vlTOPp->plb_master_mem_valid) & (0U 
                                                  != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q;
    if (((IData)(vlTOPp->plb_master_mem_gnt) & (4U 
                                                != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q;
    if (((IData)(vlTOPp->plb_master_mem_gnt) & (4U 
                                                != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(vlTOPp->plb_master_mem_valid) & (0U 
                                                  != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlTOPp->plb_master_mem_gnt) & (IData)(vlTOPp->plb_master_mem_valid)) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q;
    if ((vlTOPp->walking_mem_master_mem_valid[0U] & 
         (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q;
    if ((vlTOPp->walking_mem_master_mem_gnt[0U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q;
    if ((vlTOPp->walking_mem_master_mem_gnt[0U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if ((vlTOPp->walking_mem_master_mem_valid[0U] & 
         (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((vlTOPp->walking_mem_master_mem_gnt[0U] & 
           vlTOPp->walking_mem_master_mem_valid[0U]) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q;
    if ((vlTOPp->walking_mem_master_mem_valid[1U] & 
         (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q;
    if ((vlTOPp->walking_mem_master_mem_gnt[1U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q;
    if ((vlTOPp->walking_mem_master_mem_gnt[1U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if ((vlTOPp->walking_mem_master_mem_valid[1U] & 
         (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((vlTOPp->walking_mem_master_mem_gnt[1U] & 
           vlTOPp->walking_mem_master_mem_valid[1U]) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q;
    if ((vlTOPp->walking_mem_master_mem_valid[2U] & 
         (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q;
    if ((vlTOPp->walking_mem_master_mem_gnt[2U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q;
    if ((vlTOPp->walking_mem_master_mem_gnt[2U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if ((vlTOPp->walking_mem_master_mem_valid[2U] & 
         (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((vlTOPp->walking_mem_master_mem_gnt[2U] & 
           vlTOPp->walking_mem_master_mem_valid[2U]) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q;
    }
    vlTOPp->walking_mem_master_mem_addr[0U] = (((QData)((IData)(
                                                                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U])) 
                                                << 0x3cU) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U])) 
                                                     >> 4U)));
    vlTOPp->walking_mem_master_mem_addr[1U] = (((QData)((IData)(
                                                                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U])) 
                                                << 0x3cU) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U])) 
                                                     >> 4U)));
    vlTOPp->walking_mem_master_mem_addr[2U] = (((QData)((IData)(
                                                                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U])) 
                                                << 0x3cU) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U])) 
                                                     >> 4U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[1U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[1U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[2U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[2U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[3U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[3U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[4U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[4U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[5U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[5U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[6U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[6U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[7U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[7U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[8U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[8U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[9U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[9U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xaU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xaU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xbU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xbU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xcU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xcU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xdU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xdU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xeU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xeU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xfU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xfU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x10U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x10U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x11U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x11U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x12U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x12U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x13U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x13U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x14U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x14U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x15U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x15U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x16U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x16U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x17U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x17U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x18U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x18U];
    if (((IData)(vlTOPp->plb_master_mem_gnt) & (4U 
                                                != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[0U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[1U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[2U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[3U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[4U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[5U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[6U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U];
        if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(196,(0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1);
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[9U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[9U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xaU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xaU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xbU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xbU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xcU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xcU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xdU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xdU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xeU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xeU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xfU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xfU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x10U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x10U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x11U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x11U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x12U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x12U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x13U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x13U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x14U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x14U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x15U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x15U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x16U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x16U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x17U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x17U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x18U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x18U];
    if ((vlTOPp->walking_mem_master_mem_gnt[0U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U];
        if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(196,(0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1);
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[9U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[9U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xaU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xaU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xbU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xbU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xcU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xcU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xdU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xdU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xeU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xeU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xfU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xfU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x10U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x10U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x11U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x11U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x12U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x12U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x13U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x13U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x14U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x14U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x15U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x15U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x16U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x16U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x17U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x17U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x18U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x18U];
    if ((vlTOPp->walking_mem_master_mem_gnt[1U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U];
        if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(196,(0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1);
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[9U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[9U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xaU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xaU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xbU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xbU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xcU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xcU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xdU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xdU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xeU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xeU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xfU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xfU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x10U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x10U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x11U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x11U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x12U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x12U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x13U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x13U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x14U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x14U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x15U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x15U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x16U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x16U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x17U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x17U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x18U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x18U];
    if ((vlTOPp->walking_mem_master_mem_gnt[2U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U];
        if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(196,(0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1);
        }
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = 0U;
    }
    vlTOPp->mptw_top__DOT__walking_stage_data[0U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__walking_stage_data[1U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__walking_stage_data[2U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__walking_stage_data[3U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__walking_stage_data[4U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__walking_stage_data[5U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__walking_stage_data[6U] = 
        ((0xfffffff0U & vlTOPp->mptw_top__DOT__walking_stage_data[6U]) 
         | vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[6U]);
    vlTOPp->mptw_top__DOT__walking_stage_data[6U] = 
        ((0xfU & vlTOPp->mptw_top__DOT__walking_stage_data[6U]) 
         | (0xfffffff0U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                           << 4U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[7U] = 
        ((0xfU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                  >> 0x1cU)) | (0xfffffff0U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                                               << 4U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[8U] = 
        ((0xfU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                  >> 0x1cU)) | (0xfffffff0U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                                               << 4U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[9U] = 
        ((0xfU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                  >> 0x1cU)) | (0xfffffff0U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                                               << 4U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
        = ((0xfU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                    >> 0x1cU)) | (0xfffffff0U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
        = ((0xfU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                    >> 0x1cU)) | (0xfffffff0U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
        = ((0xffffff00U & vlTOPp->mptw_top__DOT__walking_stage_data[0xcU]) 
           | ((0xfU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                       >> 0x1cU)) | (0xfffffff0U & 
                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                                      << 4U))));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
        = ((0xffU & vlTOPp->mptw_top__DOT__walking_stage_data[0xcU]) 
           | (0xffffff00U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                             << 8U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
        = ((0xffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                                                  << 8U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
        = ((0xffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                                                  << 8U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
        = ((0xffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                                                  << 8U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
        = ((0xffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                                                  << 8U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
        = ((0xffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                                                  << 8U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
        = ((0xfffff000U & vlTOPp->mptw_top__DOT__walking_stage_data[0x12U]) 
           | ((0xffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                        >> 0x18U)) | (0xffffff00U & 
                                      (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                                       << 8U))));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
        = ((0xfffU & vlTOPp->mptw_top__DOT__walking_stage_data[0x12U]) 
           | (0xfffff000U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                             << 0xcU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
        = ((0xfffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                                                   << 0xcU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
        = ((0xfffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                                                   << 0xcU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x15U] 
        = ((0xfffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                                                   << 0xcU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x16U] 
        = ((0xfffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                                                   << 0xcU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x17U] 
        = ((0xfffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                                                   << 0xcU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x18U] 
        = ((0xfffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                                                   << 0xcU)));
    if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  (0x1fU & (((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U] 
            = (0xfU & (((0U == (0x1fU & ((IData)(0xc4U) 
                                         * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                         ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                 ((IData)(7U) + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                       | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                          ((IData)(6U) + (0x1fU & (
                                                   ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                          >> (0x1fU & ((IData)(0xc4U) 
                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))));
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U] = 0U;
    }
    if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  (0x1fU & (((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U] 
            = (0xfU & (((0U == (0x1fU & ((IData)(0xc4U) 
                                         * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                         ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                 ((IData)(7U) + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                       | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                          ((IData)(6U) + (0x1fU & (
                                                   ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                          >> (0x1fU & ((IData)(0xc4U) 
                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))));
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U] = 0U;
    }
    if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  (0x1fU & (((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U] 
            = (0xfU & (((0U == (0x1fU & ((IData)(0xc4U) 
                                         * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                         ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                 ((IData)(7U) + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                       | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                          ((IData)(6U) + (0x1fU & (
                                                   ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                          >> (0x1fU & ((IData)(0xc4U) 
                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))));
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U] = 0U;
    }
    if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid = 0U;
    }
    if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  (0x1fU & (((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x1fU & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x1fU & (((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U] 
            = (0xfU & (((0U == (0x1fU & ((IData)(0xc4U) 
                                         * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                         ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                 ((IData)(7U) + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                       | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                          ((IData)(6U) + (0x1fU & (
                                                   ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                          >> (0x1fU & ((IData)(0xc4U) 
                                       * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))));
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U] = 0U;
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__pipe_to_walking_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__pipe_to_walking_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    vlTOPp->mptw_top__DOT__fetch_exception_cause = 0U;
    if (vlTOPp->mptw_transaction_valid_i) {
        if ((8U & vlTOPp->mptw_top__DOT__input_transaction[6U])) {
            vlTOPp->mptw_top__DOT__fetch_exception_cause = 3U;
        } else {
            if ((4U & vlTOPp->mptw_top__DOT__input_transaction[6U])) {
                vlTOPp->mptw_top__DOT__fetch_exception_cause = 3U;
            } else {
                if ((2U & vlTOPp->mptw_top__DOT__input_transaction[6U])) {
                    if ((1U & vlTOPp->mptw_top__DOT__input_transaction[6U])) {
                        vlTOPp->mptw_top__DOT__fetch_exception_cause = 0U;
                    } else {
                        if ((0U != (0xfffU & ((vlTOPp->mptw_top__DOT__input_transaction[4U] 
                                               << 8U) 
                                              | (vlTOPp->mptw_top__DOT__input_transaction[3U] 
                                                 >> 0x18U))))) {
                            vlTOPp->mptw_top__DOT__fetch_exception_cause = 3U;
                        }
                    }
                } else {
                    if ((1U & vlTOPp->mptw_top__DOT__input_transaction[6U])) {
                        if ((0U != (0x1fffffU & ((vlTOPp->mptw_top__DOT__input_transaction[4U] 
                                                  << 0x11U) 
                                                 | (vlTOPp->mptw_top__DOT__input_transaction[3U] 
                                                    >> 0xfU))))) {
                            vlTOPp->mptw_top__DOT__fetch_exception_cause = 3U;
                        }
                    } else {
                        vlTOPp->mptw_top__DOT__fetch_exception_cause = 3U;
                    }
                }
            }
        }
    }
    vlTOPp->plb_master_mem_req = ((((4U > (7U & (((3U 
                                                   & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)) 
                                                  + (IData)(vlTOPp->plb_master_mem_gnt)) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))))) 
                                    & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
                                   & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
                                  & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_bus_valid));
    vlTOPp->walking_mem_master_mem_req[0U] = ((((4U 
                                                 > 
                                                 (7U 
                                                  & (((3U 
                                                       & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)) 
                                                      + 
                                                      vlTOPp->walking_mem_master_mem_gnt
                                                      [0U]) 
                                                     + 
                                                     (3U 
                                                      & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))))) 
                                                & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
                                               & (4U 
                                                  != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
                                              & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid));
    vlTOPp->walking_mem_master_mem_req[1U] = ((((4U 
                                                 > 
                                                 (7U 
                                                  & (((3U 
                                                       & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)) 
                                                      + 
                                                      vlTOPp->walking_mem_master_mem_gnt
                                                      [1U]) 
                                                     + 
                                                     (3U 
                                                      & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))))) 
                                                & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
                                               & (4U 
                                                  != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
                                              & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid));
    vlTOPp->walking_mem_master_mem_req[2U] = ((((4U 
                                                 > 
                                                 (7U 
                                                  & (((3U 
                                                       & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)) 
                                                      + 
                                                      vlTOPp->walking_mem_master_mem_gnt
                                                      [2U]) 
                                                     + 
                                                     (3U 
                                                      & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))))) 
                                                & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
                                               & (4U 
                                                  != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
                                              & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U] 
        = (0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U]);
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U] 
        = (0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U]);
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U] 
        = (0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U]);
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid) 
                          & (IData)(vlTOPp->plb_master_mem_gnt)) 
                         | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid)) 
                               & (IData)(vlTOPp->plb_master_mem_gnt)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U];
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid) 
                 & (IData)(vlTOPp->plb_master_mem_gnt))) {
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[0U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[1U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[2U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[3U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[4U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[5U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[6U];
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[0U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[1U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[2U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[3U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[4U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[5U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[6U];
        }
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid) 
                          & (IData)(vlTOPp->plb_master_mem_gnt))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid)) 
                              & (IData)(vlTOPp->plb_master_mem_gnt))))) {
                    vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U] 
        = (0xfU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U]);
    vlTOPp->mptw_top__DOT__walking_stage_valid = ((0xeU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                                                  | (IData)(vlTOPp->mptw_top__DOT__pipe_to_walking_valid));
    vlTOPp->mptw_top__DOT__walking_stage_valid = ((0xdU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid) 
                                                     << 1U));
    vlTOPp->mptw_top__DOT__walking_stage_valid = ((0xbU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid) 
                                                     << 2U));
    vlTOPp->mptw_top__DOT__walking_stage_valid = ((7U 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid) 
                                                     << 3U));
    if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_transaction_valid_i) 
                          & (IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready)) 
                         | (~ ((~ (IData)(vlTOPp->mptw_transaction_valid_i)) 
                               & (IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__next_state 
            = vlTOPp->mptw_transaction_valid_i;
    }
    vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[6U];
    if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_transaction_valid_i) 
                 & (IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready))) {
                vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__input_transaction[0U];
                vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__input_transaction[1U];
                vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__input_transaction[2U];
                vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__input_transaction[3U];
                vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__input_transaction[4U];
                vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__input_transaction[5U];
                vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__input_transaction[6U];
            }
        }
    } else {
        if (vlTOPp->mptw_transaction_valid_i) {
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__input_transaction[0U];
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__input_transaction[1U];
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__input_transaction[2U];
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__input_transaction[3U];
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__input_transaction[4U];
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__input_transaction[5U];
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__input_transaction[6U];
        }
    }
    if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_transaction_valid_i) 
                          & (IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_transaction_valid_i)) 
                              & (IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready))))) {
                    vlTOPp->mptw_top__DOT__fetch_to_pipe_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_to_pipe_ready = 1U;
    }
    if ((0U == (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[0U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[1U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[2U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[3U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[4U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[5U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[6U] 
            = (0xfU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U]);
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[0U] 
            = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(1U) + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      (0x1fU & (((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                >> 5U))] >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[1U] 
            = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(2U) + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      ((IData)(1U) + (0x1fU & (((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[2U] 
            = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(3U) + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      ((IData)(2U) + (0x1fU & (((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[3U] 
            = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(4U) + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      ((IData)(3U) + (0x1fU & (((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[4U] 
            = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(5U) + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      ((IData)(4U) + (0x1fU & (((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[5U] 
            = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(6U) + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      ((IData)(5U) + (0x1fU & (((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[6U] 
            = (0xfU & ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(7U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(6U) + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0xc4U) 
                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U));
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                          & vlTOPp->walking_mem_master_mem_gnt
                          [0U]) | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                                      & vlTOPp->walking_mem_master_mem_gnt
                                      [0U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state 
            = (1U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid));
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state 
                = (1U & ((((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                           >> 1U) & vlTOPp->walking_mem_master_mem_gnt
                          [1U]) | (~ ((~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                          >> 1U)) & 
                                      vlTOPp->walking_mem_master_mem_gnt
                                      [1U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state 
            = (1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                     >> 1U));
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state 
                = (1U & ((((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                           >> 2U) & vlTOPp->walking_mem_master_mem_gnt
                          [2U]) | (~ ((~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                          >> 2U)) & 
                                      vlTOPp->walking_mem_master_mem_gnt
                                      [2U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state 
            = (1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                     >> 2U));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                 & vlTOPp->walking_mem_master_mem_gnt
                 [0U])) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__walking_stage_data[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__walking_stage_data[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__walking_stage_data[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__walking_stage_data[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__walking_stage_data[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__walking_stage_data[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
                    = (0xfU & vlTOPp->mptw_top__DOT__walking_stage_data[6U]);
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__walking_stage_data[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__walking_stage_data[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__walking_stage_data[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__walking_stage_data[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__walking_stage_data[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__walking_stage_data[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
                = (0xfU & vlTOPp->mptw_top__DOT__walking_stage_data[6U]);
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            if ((((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                  >> 1U) & vlTOPp->walking_mem_master_mem_gnt
                 [1U])) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[7U] 
                        << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[6U] 
                                     >> 4U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[8U] 
                        << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[7U] 
                                     >> 4U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[9U] 
                        << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[8U] 
                                     >> 4U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                        << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[9U] 
                                     >> 4U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                        << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                     >> 4U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                        << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                     >> 4U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
                    = (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                                << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                             >> 4U)));
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[7U] 
                    << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[6U] 
                                 >> 4U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[8U] 
                    << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[7U] 
                                 >> 4U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[9U] 
                    << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[8U] 
                                 >> 4U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                    << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[9U] 
                                 >> 4U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                    << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                 >> 4U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                    << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                 >> 4U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
                = (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                            << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                         >> 4U)));
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            if ((((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                  >> 2U) & vlTOPp->walking_mem_master_mem_gnt
                 [2U])) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                        << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                     >> 8U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
                        << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                                     >> 8U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
                        << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
                                     >> 8U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                        << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
                                     >> 8U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
                        << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                                     >> 8U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                        << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
                                     >> 8U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
                    = (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                             >> 8U)));
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                    << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                 >> 8U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
                    << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                                 >> 8U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
                    << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
                                 >> 8U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                    << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
                                 >> 8U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
                    << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                                 >> 8U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                    << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
                                 >> 8U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
                = (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                            << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                         >> 8U)));
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_slave_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                          & vlTOPp->walking_mem_master_mem_gnt
                          [0U])))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                              & vlTOPp->walking_mem_master_mem_gnt
                              [0U])))) {
                    vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_slave_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_slave_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_slave_ready = 1U;
            if ((1U & (~ (((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                           >> 1U) & vlTOPp->walking_mem_master_mem_gnt
                          [1U])))) {
                if ((1U & (~ ((~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                  >> 1U)) & vlTOPp->walking_mem_master_mem_gnt
                              [1U])))) {
                    vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_slave_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_slave_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_slave_ready = 1U;
            if ((1U & (~ (((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                           >> 2U) & vlTOPp->walking_mem_master_mem_gnt
                          [2U])))) {
                if ((1U & (~ ((~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                  >> 2U)) & vlTOPp->walking_mem_master_mem_gnt
                              [2U])))) {
                    vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_slave_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_slave_ready = 1U;
    }
    vlTOPp->mptw_ready_o = vlTOPp->mptw_top__DOT__fetch_to_pipe_ready;
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[0U] = 0U;
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[1U] = 0U;
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[2U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[2U]) 
           | ((0U != (((QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[0U]))))
               ? 3U : 0U));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[3U] 
        = ((3U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[3U]) 
           | (0xfffffffcU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[3U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[4U] 
        = ((3U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[4U]) 
           | (0xfffffffcU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[4U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[5U] 
        = ((3U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[5U]) 
           | (0xfffffffcU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[5U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[6U] 
        = ((3U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[6U]) 
           | (0xcU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[6U]));
    vlTOPp->mptw_top__DOT__walking_stage_ready = ((0xeU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)) 
                                                  | (IData)(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_slave_ready));
    vlTOPp->mptw_top__DOT__walking_stage_ready = ((0xdU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_slave_ready) 
                                                     << 1U));
    vlTOPp->mptw_top__DOT__walking_stage_ready = ((0xbU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_slave_ready) 
                                                     << 2U));
    if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid) 
                          & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)) 
                         | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid)) 
                               & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__next_state 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 1U)) | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid)) 
                                           & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                              >> 1U)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 2U)) | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid)) 
                                           & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                              >> 2U)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 3U)) | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid)) 
                                           & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                              >> 3U)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[6U];
    if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid) 
                 & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready))) {
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[0U];
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[1U];
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[2U];
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[3U];
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[4U];
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[5U];
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[6U];
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid) {
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[0U];
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[1U];
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[2U];
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[3U];
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[4U];
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[5U];
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[6U];
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) 
                 & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                    >> 1U))) {
                if ((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                        = (0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U]);
                } else {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                        = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  (0x1fU & (((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U))] 
                                  >> (0x1fU & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                        = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(1U) + (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                        = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(2U) + (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                        = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(3U) + (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                        = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(4U) + (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                        = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(6U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(5U) + (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                        = (0xfU & ((0x30fU >= (0x3ffU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? (((0U == (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                         ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                 ((IData)(7U) 
                                                  + 
                                                  (0x1fU 
                                                   & (((IData)(0xc4U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                       | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                          ((IData)(6U) 
                                           + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                    : 0U));
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) {
            if ((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = (0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U]);
            } else {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(1U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              (0x1fU & (((IData)(0xc4U) 
                                         * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                        >> 5U))] >> 
                              (0x1fU & ((IData)(0xc4U) 
                                        * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(2U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(1U) + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0xc4U) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(3U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(2U) + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0xc4U) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(4U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(3U) + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0xc4U) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(5U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(4U) + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0xc4U) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(6U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(5U) + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0xc4U) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = (0xfU & ((0x30fU >= (0x3ffU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                ? (((0U == (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                     ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                             ((IData)(7U) 
                                              + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                   | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                      ((IData)(6U) 
                                       + (0x1fU & (
                                                   ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                      >> (0x1fU & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                : 0U));
            }
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) 
                 & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                    >> 2U))) {
                if ((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                        = (0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U]);
                } else {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                        = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  (0x1fU & (((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U))] 
                                  >> (0x1fU & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                        = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(1U) + (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                        = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(2U) + (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                        = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(3U) + (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                        = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(4U) + (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                        = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(6U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(5U) + (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                        = (0xfU & ((0x30fU >= (0x3ffU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? (((0U == (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                         ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                 ((IData)(7U) 
                                                  + 
                                                  (0x1fU 
                                                   & (((IData)(0xc4U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                       | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                          ((IData)(6U) 
                                           + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                    : 0U));
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) {
            if ((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = (0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U]);
            } else {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(1U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              (0x1fU & (((IData)(0xc4U) 
                                         * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                        >> 5U))] >> 
                              (0x1fU & ((IData)(0xc4U) 
                                        * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(2U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(1U) + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0xc4U) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(3U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(2U) + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0xc4U) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(4U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(3U) + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0xc4U) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(5U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(4U) + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0xc4U) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(6U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(5U) + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0xc4U) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = (0xfU & ((0x30fU >= (0x3ffU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                ? (((0U == (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                     ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                             ((IData)(7U) 
                                              + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                   | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                      ((IData)(6U) 
                                       + (0x1fU & (
                                                   ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                      >> (0x1fU & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                : 0U));
            }
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) 
                 & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                    >> 3U))) {
                if ((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                        = (0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U]);
                } else {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                        = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  (0x1fU & (((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U))] 
                                  >> (0x1fU & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                        = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(1U) + (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                        = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(2U) + (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                        = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(3U) + (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                        = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(4U) + (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                        = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(6U) 
                                          + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(5U) + (0x1fU 
                                                  & (((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0xc4U) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                        = (0xfU & ((0x30fU >= (0x3ffU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? (((0U == (0x1fU 
                                                & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                         ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                 ((IData)(7U) 
                                                  + 
                                                  (0x1fU 
                                                   & (((IData)(0xc4U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                       | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                          ((IData)(6U) 
                                           + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                    : 0U));
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) {
            if ((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = (0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U]);
            } else {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(1U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              (0x1fU & (((IData)(0xc4U) 
                                         * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                        >> 5U))] >> 
                              (0x1fU & ((IData)(0xc4U) 
                                        * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(2U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(1U) + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0xc4U) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(3U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(2U) + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0xc4U) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(4U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(3U) + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0xc4U) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(5U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(4U) + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0xc4U) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(6U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(5U) + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0xc4U) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = (0xfU & ((0x30fU >= (0x3ffU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                ? (((0U == (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                     ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                             ((IData)(7U) 
                                              + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                   | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                      ((IData)(6U) 
                                       + (0x1fU & (
                                                   ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                      >> (0x1fU & ((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                : 0U));
            }
        }
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid) 
                          & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid)) 
                              & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready))))) {
                    vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 1U))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid)) 
                              & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                 >> 1U))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 2U))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid)) 
                              & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                 >> 2U))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 3U))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid)) 
                              & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                 >> 3U))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop 
        = ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready) 
           & (0U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push 
        = (((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready)) 
            | (0U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
           & (IData)(vlTOPp->plb_master_mem_valid));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop 
        = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
           & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push 
        = (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
            | (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
           & vlTOPp->walking_mem_master_mem_valid[0U]);
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop 
        = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
           & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push 
        = (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
            | (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
           & vlTOPp->walking_mem_master_mem_valid[1U]);
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop 
        = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
           & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push 
        = (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
            | (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
           & vlTOPp->walking_mem_master_mem_valid[2U]);
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid 
        = (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready) 
            & (0U == (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))
            ? (IData)(vlTOPp->plb_master_mem_valid)
            : (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = 0U;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q;
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
           & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop)) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[1U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[1U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[2U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[2U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[3U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[3U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[4U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[4U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[5U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[5U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[6U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[6U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[7U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[7U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[8U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[8U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[9U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[9U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xaU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xaU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xbU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xbU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xcU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xcU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xdU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xdU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xeU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xeU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xfU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xfU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x10U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x10U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x11U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x11U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x12U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x12U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x13U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x13U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x14U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x14U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x15U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x15U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x16U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x16U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x17U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x17U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x18U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x18U];
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[0U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[1U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[2U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[3U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[4U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[5U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[6U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U];
        if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(196,(0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1);
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid 
        = (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
            & (0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))
            ? vlTOPp->walking_mem_master_mem_valid[0U]
            : (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = 0U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
           & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop)) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[9U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[9U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xaU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xaU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xbU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xbU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xcU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xcU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xdU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xdU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xeU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xeU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xfU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xfU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x10U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x10U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x11U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x11U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x12U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x12U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x13U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x13U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x14U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x14U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x15U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x15U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x16U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x16U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x17U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x17U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x18U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x18U];
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U];
        if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(196,(0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1);
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid 
        = (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
            & (0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))
            ? vlTOPp->walking_mem_master_mem_valid[1U]
            : (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = 0U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
           & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop)) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[9U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[9U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xaU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xaU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xbU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xbU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xcU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xcU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xdU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xdU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xeU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xeU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xfU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xfU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x10U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x10U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x11U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x11U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x12U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x12U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x13U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x13U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x14U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x14U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x15U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x15U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x16U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x16U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x17U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x17U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x18U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x18U];
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U];
        if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(196,(0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1);
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid 
        = (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
            & (0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))
            ? vlTOPp->walking_mem_master_mem_valid[2U]
            : (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = 0U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
           & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop)) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[9U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[9U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xaU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xaU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xbU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xbU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xcU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xcU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xdU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xdU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xeU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xeU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xfU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xfU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x10U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x10U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x11U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x11U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x12U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x12U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x13U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x13U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x14U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x14U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x15U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x15U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x16U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x16U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x17U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x17U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x18U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x18U];
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U];
        if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(196,(0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1);
        }
    }
}

void Vmptw_top::_eval_initial(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_eval_initial\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
    vlTOPp->__Vclklast__TOP__rst_ni = vlTOPp->rst_ni;
}

void Vmptw_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::final\n"); );
    // Variables
    Vmptw_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmptw_top::_eval_settle(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_eval_settle\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vmptw_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_ni = VL_RAND_RESET_I(1);
    flush_i = VL_RAND_RESET_I(1);
    mptw_enable_i = VL_RAND_RESET_I(1);
    spa_i = VL_RAND_RESET_Q(64);
    mmpt_reg_i = VL_RAND_RESET_Q(64);
    access_type_i = VL_RAND_RESET_I(2);
    mptw_transaction_valid_i = VL_RAND_RESET_I(1);
    mptw_ready_o = VL_RAND_RESET_I(1);
    access_page_fault_o = VL_RAND_RESET_I(1);
    format_error_o = VL_RAND_RESET_I(3);
    plb_master_mem_req = VL_RAND_RESET_I(1);
    plb_master_mem_gnt = VL_RAND_RESET_I(1);
    plb_master_mem_valid = VL_RAND_RESET_I(1);
    plb_master_mem_addr = VL_RAND_RESET_Q(64);
    plb_master_mem_rdata = VL_RAND_RESET_Q(64);
    plb_master_mem_wdata = VL_RAND_RESET_Q(64);
    plb_master_mem_we = VL_RAND_RESET_I(1);
    plb_master_mem_be = VL_RAND_RESET_I(8);
    plb_master_mem_error = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            walking_mem_master_mem_req[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            walking_mem_master_mem_gnt[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            walking_mem_master_mem_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            walking_mem_master_mem_addr[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            walking_mem_master_mem_rdata[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            walking_mem_master_mem_wdata[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            walking_mem_master_mem_we[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            walking_mem_master_mem_be[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            walking_mem_master_mem_error[__Vi0] = VL_RAND_RESET_I(1);
    }}
    VL_RAND_RESET_W(196, mptw_top__DOT__input_transaction);
    mptw_top__DOT__fetch_exception_cause = VL_RAND_RESET_I(3);
    mptw_top__DOT__fetch_to_pipe_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__pipe_to_plb_lookup_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__pipe_to_plb_lookup_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_to_pipe_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__pipe_to_walking_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(784, mptw_top__DOT__walking_stage_data);
    mptw_top__DOT__walking_stage_valid = VL_RAND_RESET_I(4);
    mptw_top__DOT__walking_stage_ready = VL_RAND_RESET_I(4);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_slave_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_slave_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_slave_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__fetch_stage_u__DOT__transaction_o);
    mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q);
    VL_RAND_RESET_W(196, mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d);
    mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__dummy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction);
    VL_RAND_RESET_W(72, mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_master_bus_data);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_to_mem_bus_data);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_to_mem_bus_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_to_mem_bus_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo);
    VL_RAND_RESET_W(196, mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(196, mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__dummy = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(784, mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n);
    VL_RAND_RESET_W(784, mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q);
    VL_RAND_RESET_W(196, mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(784, mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n);
    VL_RAND_RESET_W(784, mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q);
    VL_RAND_RESET_W(196, mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1);
    mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q);
    VL_RAND_RESET_W(196, mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d);
    mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__dummy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__pipe_to_output_data);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__pipe_to_output_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__pipe_to_output_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_to_mem_bus_data);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_to_mem_bus_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_to_mem_bus_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__dummy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(784, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n);
    VL_RAND_RESET_W(784, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(784, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n);
    VL_RAND_RESET_W(784, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__dummy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__pipe_to_output_data);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__pipe_to_output_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__pipe_to_output_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_to_mem_bus_data);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_to_mem_bus_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_to_mem_bus_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__dummy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(784, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n);
    VL_RAND_RESET_W(784, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(784, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n);
    VL_RAND_RESET_W(784, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__dummy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__pipe_to_output_data);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__pipe_to_output_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__pipe_to_output_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_to_mem_bus_data);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_to_mem_bus_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_to_mem_bus_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__dummy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(784, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n);
    VL_RAND_RESET_W(784, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q = VL_RAND_RESET_I(2);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n = VL_RAND_RESET_I(3);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(784, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n);
    VL_RAND_RESET_W(784, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(196, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__dummy = VL_RAND_RESET_I(1);
    __Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid = VL_RAND_RESET_I(1);
    __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid = VL_RAND_RESET_I(1);
    __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid = VL_RAND_RESET_I(1);
    __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
