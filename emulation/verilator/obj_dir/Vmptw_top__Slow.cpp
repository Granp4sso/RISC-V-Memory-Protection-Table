// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmptw_top.h for the primary calling header

#include "Vmptw_top.h"
#include "Vmptw_top__Syms.h"

//==========

VL_CTOR_IMP(Vmptw_top) {
    Vmptw_top__Syms* __restrict vlSymsp = __VlSymsp = new Vmptw_top__Syms(this, name());
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u, Vmptw_top_memory_read_stage__pi7);
    VL_CELL(__PVT__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u, Vmptw_top_memory_read_stage__pi7);
    VL_CELL(__PVT__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u, Vmptw_top_memory_read_stage__pi7);
    VL_CELL(__PVT__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u, Vmptw_top_memory_read_stage__pi7);
    VL_CELL(__PVT__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u, Vmptw_top_memory_read_stage__pi7);
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

void Vmptw_top::_settle__TOP__1(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_settle__TOP__1\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*287:0*/ __Vtemp203[9];
    WData/*287:0*/ __Vtemp205[9];
    WData/*287:0*/ __Vtemp207[9];
    WData/*287:0*/ __Vtemp209[9];
    WData/*287:0*/ __Vtemp211[9];
    QData/*63:0*/ __Vtemp214;
    // Body
    vlTOPp->stalled_o = 0U;
    vlTOPp->walking_mem_master_mem_be[0U] = 0U;
    vlTOPp->walking_mem_master_mem_we[0U] = 0U;
    vlTOPp->walking_mem_master_mem_wdata[0U] = 0ULL;
    vlTOPp->walking_mem_master_mem_be[1U] = 0U;
    vlTOPp->walking_mem_master_mem_we[1U] = 0U;
    vlTOPp->walking_mem_master_mem_wdata[1U] = 0ULL;
    vlTOPp->walking_mem_master_mem_be[2U] = 0U;
    vlTOPp->walking_mem_master_mem_we[2U] = 0U;
    vlTOPp->walking_mem_master_mem_wdata[2U] = 0ULL;
    vlTOPp->walking_mem_master_mem_be[3U] = 0U;
    vlTOPp->walking_mem_master_mem_we[3U] = 0U;
    vlTOPp->walking_mem_master_mem_wdata[3U] = 0ULL;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_valid[0U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[0U][0U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[0U][1U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[0U][2U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[0U][3U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[0U][4U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[0U][5U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[0U][6U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[0U][7U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[0U][8U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_valid[1U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[1U][0U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[1U][1U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[1U][2U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[1U][3U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[1U][4U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[1U][5U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[1U][6U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[1U][7U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[1U][8U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_valid[2U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[2U][0U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[2U][1U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[2U][2U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[2U][3U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[2U][4U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[2U][5U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[2U][6U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[2U][7U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[2U][8U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_valid[3U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[3U][0U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[3U][1U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[3U][2U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[3U][3U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[3U][4U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[3U][5U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[3U][6U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[3U][7U] = 0U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[3U][8U] = 0U;
    vlTOPp->mptw_top__DOT__system_control_stall[8U] 
        = vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_stall
        [8U];
    vlTOPp->mptw_top__DOT__system_control_stall[7U] 
        = vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_stall
        [7U];
    vlTOPp->mptw_top__DOT__system_control_stall[6U] 
        = vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_stall
        [6U];
    vlTOPp->mptw_top__DOT__system_control_stall[5U] 
        = vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_stall
        [5U];
    vlTOPp->mptw_top__DOT__system_control_stall[4U] 
        = vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_stall
        [4U];
    vlTOPp->mptw_top__DOT__system_control_stall[3U] 
        = vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_stall
        [3U];
    vlTOPp->mptw_top__DOT__system_control_stall[2U] 
        = vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_stall
        [2U];
    vlTOPp->mptw_top__DOT__system_control_stall[1U] 
        = vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_stall
        [1U];
    vlTOPp->mptw_top__DOT__system_control_stall[0U] 
        = vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_stall
        [0U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U] 
        = (0xfffffff3U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U]);
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U] 
        = (0x400U | vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U]);
    vlTOPp->mptw_top__DOT__input_transaction[4U] = 
        (0xfffffff3U & vlTOPp->mptw_top__DOT__input_transaction[4U]);
    vlTOPp->mptw_top__DOT__input_transaction[8U] = 
        (0xfffbffU & vlTOPp->mptw_top__DOT__input_transaction[8U]);
    vlTOPp->mptw_top__DOT__input_transaction[8U] = 
        (0xfff000U | vlTOPp->mptw_top__DOT__input_transaction[8U]);
    vlTOPp->mptw_top__DOT__input_transaction[4U] = 
        (0xfU & vlTOPp->mptw_top__DOT__input_transaction[4U]);
    vlTOPp->mptw_top__DOT__input_transaction[5U] = 0U;
    vlTOPp->mptw_top__DOT__input_transaction[6U] = 0U;
    vlTOPp->mptw_top__DOT__input_transaction[7U] = 0U;
    vlTOPp->mptw_top__DOT__input_transaction[8U] = 
        (0xfffff0U & vlTOPp->mptw_top__DOT__input_transaction[8U]);
    vlTOPp->mptw_top__DOT__input_transaction[8U] = 
        (0xffff1fU & vlTOPp->mptw_top__DOT__input_transaction[8U]);
    vlTOPp->mptw_top__DOT__input_transaction[8U] = 
        (0xfffeffU & vlTOPp->mptw_top__DOT__input_transaction[8U]);
    vlTOPp->mptw_top__DOT__system_status_stalled[0U] = 0U;
    vlTOPp->mptw_top__DOT__system_status_stalled[7U] = 0U;
    vlTOPp->mptw_top__DOT__system_status_stalled[1U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_status_stalled;
    vlTOPp->mptw_top__DOT__system_status_busy[1U] = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_status_busy;
    vlTOPp->mptw_top__DOT__system_status_stalled[2U] 
        = vlTOPp->mptw_top__DOT____Vcellout__plb_lookup_stage_u__stage_status_stalled;
    vlTOPp->mptw_top__DOT__system_status_busy[2U] = vlTOPp->mptw_top__DOT____Vcellout__plb_lookup_stage_u__stage_status_busy;
    vlTOPp->mptw_top__DOT__system_status_stalled[3U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_status_stalled;
    vlTOPp->mptw_top__DOT__system_status_busy[3U] = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_status_busy;
    vlTOPp->mptw_top__DOT__system_status_stalled[4U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_status_stalled;
    vlTOPp->mptw_top__DOT__system_status_busy[4U] = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_status_busy;
    vlTOPp->mptw_top__DOT__system_status_stalled[5U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_status_stalled;
    vlTOPp->mptw_top__DOT__system_status_busy[5U] = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_status_busy;
    vlTOPp->mptw_top__DOT__system_status_stalled[6U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_status_stalled;
    vlTOPp->mptw_top__DOT__system_status_busy[6U] = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_status_busy;
    vlTOPp->mptw_top__DOT__system_status_flushed[8U] = 3U;
    vlTOPp->mptw_top__DOT__walking_to_retire_data_ready[4U] = 1U;
    vlTOPp->mptw_top__DOT__input_transaction[0U] = (IData)(vlTOPp->mmpt_reg_i);
    vlTOPp->mptw_top__DOT__input_transaction[1U] = (IData)(
                                                           (vlTOPp->mmpt_reg_i 
                                                            >> 0x20U));
    vlTOPp->mptw_top__DOT__input_transaction[2U] = (IData)(vlTOPp->spa_i);
    vlTOPp->mptw_top__DOT__input_transaction[3U] = (IData)(
                                                           (vlTOPp->spa_i 
                                                            >> 0x20U));
    vlTOPp->mptw_top__DOT__input_transaction[4U] = 
        ((0xfffffffcU & vlTOPp->mptw_top__DOT__input_transaction[4U]) 
         | (IData)(vlTOPp->access_type_i));
    vlTOPp->mptw_top__DOT__input_transaction[8U] = 
        ((0xfff7ffU & vlTOPp->mptw_top__DOT__input_transaction[8U]) 
         | (0xfffff800U & ((IData)(vlTOPp->speculative_i) 
                           << 0xbU)));
    vlTOPp->mptw_top__DOT__input_transaction[8U] = 
        ((0xfffdffU & vlTOPp->mptw_top__DOT__input_transaction[8U]) 
         | (0xfffffe00U & ((IData)(vlTOPp->mptw_transaction_valid_i) 
                           << 9U)));
    vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type = 0U;
    if (vlTOPp->flush_spec_i) {
        vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type = 2U;
    }
    if (vlTOPp->flush_all_i) {
        vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type = 1U;
    }
    if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q)))) {
                if ((1U & (~ (IData)((0x3ffffU == vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q))))) {
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__unnamedblk3__DOT__i = 9U;
                }
            }
        }
    }
    if (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_to_issue_data_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_to_issue_data_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 0U;
    }
    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound5 
        = (3U & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q);
    vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_flush[0U] 
        = vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound5;
    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound5 
        = (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                 >> 2U));
    vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_flush[1U] 
        = vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound5;
    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound5 
        = (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                 >> 4U));
    vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_flush[2U] 
        = vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound5;
    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound5 
        = (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                 >> 6U));
    vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_flush[3U] 
        = vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound5;
    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound5 
        = (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                 >> 8U));
    vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_flush[4U] 
        = vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound5;
    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound5 
        = (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                 >> 0xaU));
    vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_flush[5U] 
        = vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound5;
    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound5 
        = (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                 >> 0xcU));
    vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_flush[6U] 
        = vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound5;
    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound5 
        = (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                 >> 0xeU));
    vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_flush[7U] 
        = vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound5;
    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound5 
        = (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                 >> 0x10U));
    vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_flush[8U] 
        = vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound5;
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_to_demux_data_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_to_demux_data_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid = 0U;
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
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[0U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[1U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[2U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[3U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[4U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[5U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[6U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[7U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[8U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[2U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[3U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[4U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[5U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[6U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[7U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[8U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[2U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[3U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[4U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[5U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[6U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[7U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[8U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[1U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[2U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[3U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[4U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[5U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[6U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[7U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[8U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[0U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[1U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[2U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[3U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[4U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[5U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[6U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[7U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__retire_demux_select[0U] 
        = (1U & ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U] 
                  >> 0xaU) & (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U] 
                              >> 9U)));
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[4U][0U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[4U][1U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[4U][2U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[4U][3U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[4U][4U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[4U][5U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[4U][6U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[4U][7U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__walking_to_retire_data_data[4U][8U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[0U][0U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[0U][1U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[0U][2U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[0U][3U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[0U][4U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[0U][5U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[0U][6U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[0U][7U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[0U][8U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[0U][0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[0U][1U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[0U][2U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[0U][3U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[0U][4U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[0U][5U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[0U][6U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[0U][7U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[0U][8U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[0U][0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[0U][1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[0U][2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[0U][3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[0U][4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[0U][5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[0U][6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[0U][7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[0U][8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[1U][0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[1U][1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[1U][2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[1U][3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[1U][4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[1U][5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[1U][6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[1U][7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[1U][8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[2U][0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[2U][1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[2U][2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[2U][3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[2U][4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[2U][5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[2U][6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[2U][7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[2U][8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[3U][0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[3U][1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[3U][2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[3U][3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[3U][4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[3U][5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[3U][6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[3U][7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_data[3U][8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[0U][0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[0U][1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[0U][2U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[0U][3U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[0U][4U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[0U][5U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[0U][6U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[0U][7U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[0U][8U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[1U][0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[1U][1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[1U][2U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[1U][3U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[1U][4U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[1U][5U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[1U][6U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[1U][7U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[1U][8U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[8U] 
        = vlTOPp->mptw_top__DOT__system_status_stalled
        [8U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[7U] 
        = vlTOPp->mptw_top__DOT__system_status_stalled
        [7U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[6U] 
        = vlTOPp->mptw_top__DOT__system_status_stalled
        [6U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[5U] 
        = vlTOPp->mptw_top__DOT__system_status_stalled
        [5U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[4U] 
        = vlTOPp->mptw_top__DOT__system_status_stalled
        [4U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[3U] 
        = vlTOPp->mptw_top__DOT__system_status_stalled
        [3U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[2U] 
        = vlTOPp->mptw_top__DOT__system_status_stalled
        [2U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[1U] 
        = vlTOPp->mptw_top__DOT__system_status_stalled
        [1U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[0U] 
        = vlTOPp->mptw_top__DOT__system_status_stalled
        [0U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[8U] 
        = vlTOPp->mptw_top__DOT__system_status_stalled
        [8U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[7U] 
        = vlTOPp->mptw_top__DOT__system_status_stalled
        [7U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[6U] 
        = vlTOPp->mptw_top__DOT__system_status_stalled
        [6U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[5U] 
        = vlTOPp->mptw_top__DOT__system_status_stalled
        [5U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[4U] 
        = vlTOPp->mptw_top__DOT__system_status_stalled
        [4U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[3U] 
        = vlTOPp->mptw_top__DOT__system_status_stalled
        [3U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[2U] 
        = vlTOPp->mptw_top__DOT__system_status_stalled
        [2U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[1U] 
        = vlTOPp->mptw_top__DOT__system_status_stalled
        [1U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[0U] 
        = vlTOPp->mptw_top__DOT__system_status_stalled
        [0U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[0U] 
        = vlTOPp->mptw_top__DOT__input_transaction[0U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[1U] 
        = vlTOPp->mptw_top__DOT__input_transaction[1U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[2U] 
        = vlTOPp->mptw_top__DOT__input_transaction[2U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[3U] 
        = vlTOPp->mptw_top__DOT__input_transaction[3U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U] 
        = vlTOPp->mptw_top__DOT__input_transaction[4U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[5U] 
        = vlTOPp->mptw_top__DOT__input_transaction[5U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[6U] 
        = vlTOPp->mptw_top__DOT__input_transaction[6U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[7U] 
        = vlTOPp->mptw_top__DOT__input_transaction[7U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = vlTOPp->mptw_top__DOT__input_transaction[8U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = (0xffff1fU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]);
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = ((0xfffeffU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__input_transaction[8U] 
                         >> 1U) & vlTOPp->mptw_top__DOT__input_transaction[8U])));
    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound1 
        = vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type;
    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
        = ((0x3fffcU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
           | (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound1));
    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound1 
        = vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type;
    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
        = ((0x3fff3U & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound1 
        = vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type;
    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
        = ((0x3ffcfU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound1 
        = vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type;
    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
        = ((0x3ff3fU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound1) 
              << 6U));
    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound1 
        = vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type;
    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
        = ((0x3fcffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound1) 
              << 8U));
    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound1 
        = vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type;
    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
        = ((0x3f3ffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound1) 
              << 0xaU));
    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound1 
        = vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type;
    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
        = ((0x3cfffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound1) 
              << 0xcU));
    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound1 
        = vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type;
    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
        = ((0x33fffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound1) 
              << 0xeU));
    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound1 
        = vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type;
    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
        = ((0xffffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound1) 
              << 0x10U));
    if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
                if ((0U != (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__unnamedblk2__DOT__i = 9U;
                }
            }
        }
    }
    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d = 0U;
    if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q)))) {
                if ((0x3ffffU == vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q)) {
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d = 0U;
                } else {
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound4 
                        = ((3U == (3U & vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q))
                            ? 0U : (3U & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3fffcU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound4));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound4 
                        = ((3U == (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 2U))) ? 0U
                            : (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                                     >> 2U)));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3fff3U & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound4) 
                              << 2U));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound4 
                        = ((3U == (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 4U))) ? 0U
                            : (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                                     >> 4U)));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3ffcfU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound4) 
                              << 4U));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound4 
                        = ((3U == (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 6U))) ? 0U
                            : (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                                     >> 6U)));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3ff3fU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound4) 
                              << 6U));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound4 
                        = ((3U == (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 8U))) ? 0U
                            : (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                                     >> 8U)));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3fcffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound4) 
                              << 8U));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound4 
                        = ((3U == (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 0xaU)))
                            ? 0U : (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                                          >> 0xaU)));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3f3ffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound4) 
                              << 0xaU));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound4 
                        = ((3U == (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 0xcU)))
                            ? 0U : (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                                          >> 0xcU)));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3cfffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound4) 
                              << 0xcU));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound4 
                        = ((3U == (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 0xeU)))
                            ? 0U : (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                                          >> 0xeU)));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x33fffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound4) 
                              << 0xeU));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound4 
                        = ((3U == (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 0x10U)))
                            ? 0U : (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
                                          >> 0x10U)));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0xffffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound4) 
                              << 0x10U));
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
                if ((0U != (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound2 
                        = vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type;
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3fffcU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound2));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound2 
                        = vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type;
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3fff3U & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound2) 
                              << 2U));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound2 
                        = vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type;
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3ffcfU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound2) 
                              << 4U));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound2 
                        = vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type;
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3ff3fU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound2) 
                              << 6U));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound2 
                        = vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type;
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3fcffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound2) 
                              << 8U));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound2 
                        = vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type;
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3f3ffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound2) 
                              << 0xaU));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound2 
                        = vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type;
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x3cfffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound2) 
                              << 0xcU));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound2 
                        = vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type;
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0x33fffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound2) 
                              << 0xeU));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound2 
                        = vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type;
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d 
                        = ((0xffffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound2) 
                              << 0x10U));
                }
            }
        }
    }
    vlTOPp->mptw_top__DOT__input_to_fetch_data_valid 
        = vlTOPp->mptw_transaction_valid_i;
    if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q)))) {
                vlTOPp->mptw_top__DOT__input_to_fetch_data_valid = 0U;
                if ((0x3ffffU == vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q)) {
                    vlTOPp->mptw_top__DOT__input_to_fetch_data_valid 
                        = vlTOPp->mptw_transaction_valid_i;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
                if ((0U != (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
                    vlTOPp->mptw_top__DOT__input_to_fetch_data_valid = 0U;
                }
            } else {
                if ((0U != (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
                    vlTOPp->mptw_top__DOT__input_to_fetch_data_valid = 0U;
                }
            }
        }
    }
    vlTOPp->mptw_top__DOT__walking_to_retire_data_valid[4U] 
        = vlTOPp->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_valid;
    vlTOPp->mptw_top__DOT__issue_stage_slave_valid[0U] 
        = vlTOPp->mptw_top__DOT__fetch_to_issue_data_valid;
    vlTOPp->mptw_top__DOT__system_control_flush[8U] 
        = vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_flush
        [8U];
    vlTOPp->mptw_top__DOT__system_control_flush[7U] 
        = vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_flush
        [7U];
    vlTOPp->mptw_top__DOT__system_control_flush[6U] 
        = vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_flush
        [6U];
    vlTOPp->mptw_top__DOT__system_control_flush[5U] 
        = vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_flush
        [5U];
    vlTOPp->mptw_top__DOT__system_control_flush[4U] 
        = vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_flush
        [4U];
    vlTOPp->mptw_top__DOT__system_control_flush[3U] 
        = vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_flush
        [3U];
    vlTOPp->mptw_top__DOT__system_control_flush[2U] 
        = vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_flush
        [2U];
    vlTOPp->mptw_top__DOT__system_control_flush[1U] 
        = vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_flush
        [1U];
    vlTOPp->mptw_top__DOT__system_control_flush[0U] 
        = vlTOPp->mptw_top__DOT____Vcellout__control_unit_u__master_control_flush
        [0U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_valid[0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_to_demux_data_valid;
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_valid[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid;
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_valid[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid;
    vlTOPp->mptw_top__DOT__walking_to_demux_data_valid[0U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid;
    vlTOPp->mptw_top__DOT__walking_to_demux_data_valid[1U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid;
    vlTOPp->mptw_top__DOT__walking_to_demux_data_valid[2U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid;
    vlTOPp->mptw_top__DOT__walking_to_demux_data_valid[3U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid;
    vlTOPp->plb_entry_o = (((QData)((IData)(vlTOPp->mptw_top__DOT__walking_to_retire_data_data
                                            [4U][3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_to_retire_data_data
                                                        [4U][2U])));
    vlTOPp->mptw_top__DOT__walking_output_transaction[0U][0U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [0U][0U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[0U][1U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [0U][1U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[0U][2U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [0U][2U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[0U][3U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [0U][3U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[0U][4U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [0U][4U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[0U][5U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [0U][5U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[0U][6U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [0U][6U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[0U][7U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [0U][7U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[0U][8U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [0U][8U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[1U][0U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [1U][0U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[1U][1U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [1U][1U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[1U][2U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [1U][2U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[1U][3U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [1U][3U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[1U][4U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [1U][4U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[1U][5U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [1U][5U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[1U][6U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [1U][6U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[1U][7U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [1U][7U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[1U][8U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [1U][8U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[2U][0U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [2U][0U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[2U][1U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [2U][1U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[2U][2U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [2U][2U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[2U][3U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [2U][3U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[2U][4U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [2U][4U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[2U][5U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [2U][5U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[2U][6U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [2U][6U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[2U][7U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [2U][7U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[2U][8U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [2U][8U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[3U][0U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [3U][0U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[3U][1U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [3U][1U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[3U][2U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [3U][2U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[3U][3U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [3U][3U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[3U][4U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [3U][4U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[3U][5U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [3U][5U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[3U][6U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [3U][6U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[3U][7U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [3U][7U];
    vlTOPp->mptw_top__DOT__walking_output_transaction[3U][8U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [3U][8U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[1U][0U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [0U][0U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[1U][1U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [0U][1U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[1U][2U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [0U][2U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[1U][3U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [0U][3U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[1U][4U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [0U][4U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[1U][5U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [0U][5U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[1U][6U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [0U][6U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[1U][7U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [0U][7U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[1U][8U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [0U][8U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[2U][0U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [1U][0U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[2U][1U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [1U][1U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[2U][2U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [1U][2U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[2U][3U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [1U][3U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[2U][4U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [1U][4U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[2U][5U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [1U][5U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[2U][6U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [1U][6U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[2U][7U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [1U][7U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[2U][8U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [1U][8U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[3U][0U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [2U][0U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[3U][1U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [2U][1U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[3U][2U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [2U][2U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[3U][3U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [2U][3U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[3U][4U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [2U][4U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[3U][5U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [2U][5U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[3U][6U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [2U][6U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[3U][7U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [2U][7U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[3U][8U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [2U][8U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[4U][0U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [3U][0U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[4U][1U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [3U][1U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[4U][2U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [3U][2U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[4U][3U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [3U][3U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[4U][4U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [3U][4U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[4U][5U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [3U][5U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[4U][6U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [3U][6U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[4U][7U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [3U][7U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_data[4U][8U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_data
        [3U][8U];
    vlTOPp->mptw_top__DOT__issue_stage_master_data[1U][0U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data
        [1U][0U];
    vlTOPp->mptw_top__DOT__issue_stage_master_data[1U][1U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data
        [1U][1U];
    vlTOPp->mptw_top__DOT__issue_stage_master_data[1U][2U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data
        [1U][2U];
    vlTOPp->mptw_top__DOT__issue_stage_master_data[1U][3U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data
        [1U][3U];
    vlTOPp->mptw_top__DOT__issue_stage_master_data[1U][4U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data
        [1U][4U];
    vlTOPp->mptw_top__DOT__issue_stage_master_data[1U][5U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data
        [1U][5U];
    vlTOPp->mptw_top__DOT__issue_stage_master_data[1U][6U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data
        [1U][6U];
    vlTOPp->mptw_top__DOT__issue_stage_master_data[1U][7U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data
        [1U][7U];
    vlTOPp->mptw_top__DOT__issue_stage_master_data[1U][8U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data
        [1U][8U];
    vlTOPp->mptw_top__DOT__issue_stage_master_data[0U][0U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data
        [0U][0U];
    vlTOPp->mptw_top__DOT__issue_stage_master_data[0U][1U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data
        [0U][1U];
    vlTOPp->mptw_top__DOT__issue_stage_master_data[0U][2U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data
        [0U][2U];
    vlTOPp->mptw_top__DOT__issue_stage_master_data[0U][3U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data
        [0U][3U];
    vlTOPp->mptw_top__DOT__issue_stage_master_data[0U][4U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data
        [0U][4U];
    vlTOPp->mptw_top__DOT__issue_stage_master_data[0U][5U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data
        [0U][5U];
    vlTOPp->mptw_top__DOT__issue_stage_master_data[0U][6U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data
        [0U][6U];
    vlTOPp->mptw_top__DOT__issue_stage_master_data[0U][7U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data
        [0U][7U];
    vlTOPp->mptw_top__DOT__issue_stage_master_data[0U][8U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data
        [0U][8U];
    vlTOPp->mptw_result_valid_o = vlTOPp->mptw_top__DOT__walking_to_retire_data_valid
        [4U];
    vlTOPp->mptw_top__DOT__system_status_flushed[0U] 
        = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
            [0U]) ? 3U : 0U);
    vlTOPp->mptw_top__DOT__system_status_flushed[1U] 
        = (((3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                     [1U]) ? 3U : 0U)) & (3U == ((0U 
                                                  != 
                                                  vlTOPp->mptw_top__DOT__system_control_flush
                                                  [1U])
                                                  ? 3U
                                                  : 0U)))
            ? 3U : (((0U != ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                              [1U]) ? 3U : 0U)) | (0U 
                                                   != 
                                                   ((0U 
                                                     != 
                                                     vlTOPp->mptw_top__DOT__system_control_flush
                                                     [1U])
                                                     ? 3U
                                                     : 0U)))
                     ? 1U : 0U));
    vlTOPp->mptw_top__DOT__system_status_flushed[7U] 
        = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
            [7U]) ? 3U : 0U);
    vlTOPp->mptw_top__DOT__issue_stage_master_valid[1U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_valid
        [1U];
    vlTOPp->mptw_top__DOT__issue_stage_master_valid[0U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_valid
        [0U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_valid[1U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_valid
        [0U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_valid[2U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_valid
        [1U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_valid[3U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_valid
        [2U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_valid[4U] 
        = vlTOPp->mptw_top__DOT__walking_to_demux_data_valid
        [3U];
    vlTOPp->mptw_top__DOT__retire_demux_select[1U] 
        = (1U & ((vlTOPp->mptw_top__DOT__walking_output_transaction
                  [1U][8U] >> 0xaU) & (vlTOPp->mptw_top__DOT__walking_output_transaction
                                       [1U][8U] >> 9U)));
    vlTOPp->mptw_top__DOT__retire_demux_select[2U] 
        = (1U & ((vlTOPp->mptw_top__DOT__walking_output_transaction
                  [2U][8U] >> 0xaU) & (vlTOPp->mptw_top__DOT__walking_output_transaction
                                       [2U][8U] >> 9U)));
    vlTOPp->mptw_top__DOT__retire_demux_select[3U] 
        = (1U & ((vlTOPp->mptw_top__DOT__walking_output_transaction
                  [3U][8U] >> 0xaU) & (vlTOPp->mptw_top__DOT__walking_output_transaction
                                       [3U][8U] >> 9U)));
    if ((0x20U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
         [4U][6U])) {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                             [4U][2U] << 4U) | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [4U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [4U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [4U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [4U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                       [4U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    } else {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                             [4U][2U] << 4U) | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [4U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [4U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [4U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [4U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                       [4U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    }
    if ((0x20U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
         [0U][6U])) {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                             [0U][2U] << 4U) | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [0U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [0U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [0U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [0U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                       [0U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    } else {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                             [0U][2U] << 4U) | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [0U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [0U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [0U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [0U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                       [0U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    }
    if ((0x20U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
         [1U][6U])) {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                             [1U][2U] << 4U) | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [1U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [1U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [1U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [1U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                       [1U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    } else {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                             [1U][2U] << 4U) | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [1U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [1U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [1U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [1U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                       [1U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    }
    if ((0x20U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
         [2U][6U])) {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                             [2U][2U] << 4U) | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [2U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [2U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [2U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [2U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                       [2U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    } else {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                             [2U][2U] << 4U) | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [2U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [2U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [2U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [2U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                       [2U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    }
    if ((0x20U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
         [3U][6U])) {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                             [3U][2U] << 4U) | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [3U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [3U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [3U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [3U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                       [3U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    } else {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                             [3U][2U] << 4U) | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [3U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [3U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                 [3U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [3U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                       [3U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    }
    if ((0x20U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
         [4U][6U])) {
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset 
            = (0xfU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                        [4U][2U] << 4U) 
                                       | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                          [4U][1U] 
                                          >> 0x1cU))))
                        ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                            [4U][3U] << 0x14U) | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                  [4U][2U] 
                                                  >> 0xcU))
                        : ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                            [4U][2U] 
                                            << 4U) 
                                           | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                              [4U][1U] 
                                              >> 0x1cU))))
                            ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                [4U][3U] << 0x14U) 
                               | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                  [4U][2U] >> 0xcU))
                            : ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [4U][2U] 
                                                << 4U) 
                                               | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                  [4U][1U] 
                                                  >> 0x1cU))))
                                ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                    [4U][3U] << 0x14U) 
                                   | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                      [4U][2U] >> 0xcU))
                                : 0U))));
    }
    if ((0x20U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
         [0U][6U])) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset 
            = ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                [0U][2U] << 4U) | (
                                                   vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                   [0U][1U] 
                                                   >> 0x1cU))))
                ? 0U : ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                         [0U][2U] << 4U) 
                                        | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                           [0U][1U] 
                                           >> 0x1cU))))
                         ? 0U : ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                  [0U][2U] 
                                                  << 4U) 
                                                 | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                    [0U][1U] 
                                                    >> 0x1cU))))
                                  ? (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                              [0U][4U] 
                                              << 0x10U) 
                                             | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [0U][3U] 
                                                >> 0x10U)))
                                  : 0U)));
    }
    if ((0x20U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
         [1U][6U])) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset 
            = ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                [1U][2U] << 4U) | (
                                                   vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                   [1U][1U] 
                                                   >> 0x1cU))))
                ? 0U : (0xfU & ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                 [1U][2U] 
                                                 << 4U) 
                                                | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                   [1U][1U] 
                                                   >> 0x1cU))))
                                 ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [1U][4U] << 0x19U) 
                                    | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                       [1U][3U] >> 7U))
                                 : ((3U == (0xfU & 
                                            ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                              [1U][2U] 
                                              << 4U) 
                                             | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [1U][1U] 
                                                >> 0x1cU))))
                                     ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                         [1U][4U] << 0x19U) 
                                        | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                           [1U][3U] 
                                           >> 7U)) : 0U))));
    }
    if ((0x20U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
         [2U][6U])) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset 
            = (0xfU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                        [2U][2U] << 4U) 
                                       | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                          [2U][1U] 
                                          >> 0x1cU))))
                        ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                            [2U][3U] << 2U) | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                               [2U][2U] 
                                               >> 0x1eU))
                        : ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                            [2U][2U] 
                                            << 4U) 
                                           | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                              [2U][1U] 
                                              >> 0x1cU))))
                            ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                [2U][3U] << 2U) | (
                                                   vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                   [2U][2U] 
                                                   >> 0x1eU))
                            : ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [2U][2U] 
                                                << 4U) 
                                               | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                  [2U][1U] 
                                                  >> 0x1cU))))
                                ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                    [2U][3U] << 2U) 
                                   | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                      [2U][2U] >> 0x1eU))
                                : 0U))));
    }
    if ((0x20U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
         [3U][6U])) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset 
            = (0xfU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                        [3U][2U] << 4U) 
                                       | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                          [3U][1U] 
                                          >> 0x1cU))))
                        ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                            [3U][3U] << 0xbU) | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                 [3U][2U] 
                                                 >> 0x15U))
                        : ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                            [3U][2U] 
                                            << 4U) 
                                           | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                              [3U][1U] 
                                              >> 0x1cU))))
                            ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                [3U][3U] << 0xbU) | 
                               (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                [3U][2U] >> 0x15U))
                            : ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [3U][2U] 
                                                << 4U) 
                                               | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                  [3U][1U] 
                                                  >> 0x1cU))))
                                ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                    [3U][3U] << 0xbU) 
                                   | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                      [3U][2U] >> 0x15U))
                                : 0U))));
    }
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffU & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xfff800U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [4U][8U]));
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                    [4U][1U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [4U][0U]))));
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [4U][1U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                      [4U][0U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                    [4U][3U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [4U][2U]))));
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [4U][3U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                      [4U][2U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [4U][4U]));
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xfffdffU & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [4U][8U]));
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [4U][6U]));
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][7U]) | (0xfffffff0U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                         [4U][7U]));
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xffffe0U & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U]) 
           | ((0xfU & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
               [4U][8U]) | (0x10U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                            [4U][8U])));
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xffff1fU & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x200U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                               [4U][8U]) ? (7U & (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                  [4U][8U] 
                                                  >> 5U))
                               : 0U) << 5U)));
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xfffeffU & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                         [4U][8U] >> 1U) & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                        [4U][8U])));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xfff800U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [0U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                    [0U][1U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [0U][0U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [0U][1U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                      [0U][0U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                    [0U][3U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [0U][2U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [0U][3U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                      [0U][2U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [0U][4U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xfffdffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [0U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [0U][6U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][7U]) | (0xfffffff0U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                         [0U][7U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xffffe0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | ((0xfU & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
               [0U][8U]) | (0x10U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                            [0U][8U])));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xfffbffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x400U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                         [0U][6U] << 5U) | vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                        [0U][8U])));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xffff1fU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x200U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                               [0U][8U]) ? (7U & (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                  [0U][8U] 
                                                  >> 5U))
                               : 0U) << 5U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xfffeffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                         [0U][8U] >> 1U) & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                        [0U][8U])));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xfff800U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [1U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                    [1U][1U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [1U][0U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [1U][1U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                      [1U][0U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                    [1U][3U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [1U][2U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [1U][3U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                      [1U][2U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [1U][4U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xfffdffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [1U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [1U][6U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][7U]) | (0xfffffff0U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                         [1U][7U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xffffe0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | ((0xfU & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
               [1U][8U]) | (0x10U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                            [1U][8U])));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xfffbffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x400U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                         [1U][6U] << 5U) | vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                        [1U][8U])));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xffff1fU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x200U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                               [1U][8U]) ? (7U & (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                  [1U][8U] 
                                                  >> 5U))
                               : 0U) << 5U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xfffeffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                         [1U][8U] >> 1U) & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                        [1U][8U])));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xfff800U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [2U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                    [2U][1U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [2U][0U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [2U][1U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                      [2U][0U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                    [2U][3U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [2U][2U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [2U][3U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                      [2U][2U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [2U][4U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xfffdffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [2U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [2U][6U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][7U]) | (0xfffffff0U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                         [2U][7U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xffffe0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | ((0xfU & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
               [2U][8U]) | (0x10U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                            [2U][8U])));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xfffbffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x400U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                         [2U][6U] << 5U) | vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                        [2U][8U])));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xffff1fU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x200U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                               [2U][8U]) ? (7U & (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                  [2U][8U] 
                                                  >> 5U))
                               : 0U) << 5U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xfffeffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                         [2U][8U] >> 1U) & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                        [2U][8U])));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xfff800U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [3U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                    [3U][1U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [3U][0U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [3U][1U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                      [3U][0U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                    [3U][3U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [3U][2U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                     [3U][3U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                      [3U][2U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [3U][4U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xfffdffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [3U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
              [3U][6U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][7U]) | (0xfffffff0U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                         [3U][7U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xffffe0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | ((0xfU & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
               [3U][8U]) | (0x10U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                            [3U][8U])));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xfffbffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x400U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                         [3U][6U] << 5U) | vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                        [3U][8U])));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xffff1fU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x200U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                               [3U][8U]) ? (7U & (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                  [3U][8U] 
                                                  >> 5U))
                               : 0U) << 5U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0xfffeffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                         [3U][8U] >> 1U) & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                        [3U][8U])));
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__spa_current_page_number = 0U;
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__base_phyisical_address = 0ULL;
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                  [4U][6U] >> 5U)))) {
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__base_phyisical_address 
            = (0xfffffffffffff000ULL & (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                         [4U][8U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                            [4U][7U])) 
                                            << 0x1eU) 
                                           | (0x3ffffffffffff000ULL 
                                              & ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                                 [4U][6U])) 
                                                 >> 2U)))));
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__spa_current_page_number = 0U;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__next_mpte_addr 
            = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__base_phyisical_address;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = 0U;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = 0ULL;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                  [0U][6U] >> 5U)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
            = ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                [0U][2U] << 4U) | (
                                                   vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                   [0U][1U] 
                                                   >> 0x1cU))))
                ? (0xfffffffffffff000ULL & (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                             [0U][1U])) 
                                             << 0x2cU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                               [0U][0U])) 
                                               << 0xcU)))
                : (0xfffffffffffff000ULL & (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                             [0U][8U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                                [0U][7U])) 
                                                << 0x1eU) 
                                               | (0x3ffffffffffff000ULL 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                                     [0U][6U])) 
                                                     >> 2U))))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
            = ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                [0U][2U] << 4U) | (
                                                   vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                   [0U][1U] 
                                                   >> 0x1cU))))
                ? 0U : (0x1ffU & ((2U == (0xfU & ((
                                                   vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                   [0U][2U] 
                                                   << 4U) 
                                                  | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                     [0U][1U] 
                                                     >> 0x1cU))))
                                   ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                       [0U][4U] << 0x15U) 
                                      | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                         [0U][3U] >> 0xbU))
                                   : ((3U == (0xfU 
                                              & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                  [0U][2U] 
                                                  << 4U) 
                                                 | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                    [0U][1U] 
                                                    >> 0x1cU))))
                                       ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                           [0U][4U] 
                                           << 0x15U) 
                                          | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                             [0U][3U] 
                                             >> 0xbU))
                                       : 0U))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
            = (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
               + ((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number)) 
                  << 3U));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = 0U;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = 0ULL;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                  [1U][6U] >> 5U)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
            = ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                [1U][2U] << 4U) | (
                                                   vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                   [1U][1U] 
                                                   >> 0x1cU))))
                ? (0xfffffffffffff000ULL & (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                             [1U][1U])) 
                                             << 0x2cU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                               [1U][0U])) 
                                               << 0xcU)))
                : (0xfffffffffffff000ULL & (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                             [1U][8U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                                [1U][7U])) 
                                                << 0x1eU) 
                                               | (0x3ffffffffffff000ULL 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                                     [1U][6U])) 
                                                     >> 2U))))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
            = (0x1ffU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                          [1U][2U] 
                                          << 4U) | 
                                         (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                          [1U][1U] 
                                          >> 0x1cU))))
                          ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                              [1U][4U] << 0x1eU) | 
                             (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                              [1U][3U] >> 2U)) : ((2U 
                                                   == 
                                                   (0xfU 
                                                    & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                        [1U][2U] 
                                                        << 4U) 
                                                       | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                          [1U][1U] 
                                                          >> 0x1cU))))
                                                   ? 
                                                  ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                    [1U][4U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                      [1U][3U] 
                                                      >> 2U))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0xfU 
                                                     & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                         [1U][2U] 
                                                         << 4U) 
                                                        | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                           [1U][1U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                     [1U][4U] 
                                                     << 0x1eU) 
                                                    | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                       [1U][3U] 
                                                       >> 2U))
                                                    : 0U))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
            = (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
               + ((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number)) 
                  << 3U));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = 0U;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = 0ULL;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                  [2U][6U] >> 5U)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
            = (0xfffffffffffff000ULL & (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                         [2U][8U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                            [2U][7U])) 
                                            << 0x1eU) 
                                           | (0x3ffffffffffff000ULL 
                                              & ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                                 [2U][6U])) 
                                                 >> 2U)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
            = (0x1ffU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                          [2U][2U] 
                                          << 4U) | 
                                         (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                          [2U][1U] 
                                          >> 0x1cU))))
                          ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                              [2U][3U] << 7U) | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                 [2U][2U] 
                                                 >> 0x19U))
                          : ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                              [2U][2U] 
                                              << 4U) 
                                             | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [2U][1U] 
                                                >> 0x1cU))))
                              ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                  [2U][3U] << 7U) | 
                                 (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                  [2U][2U] >> 0x19U))
                              : ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                  [2U][2U] 
                                                  << 4U) 
                                                 | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                    [2U][1U] 
                                                    >> 0x1cU))))
                                  ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                      [2U][3U] << 7U) 
                                     | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                        [2U][2U] >> 0x19U))
                                  : 0U))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
            = (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
               + ((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number)) 
                  << 3U));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = 0U;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = 0ULL;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                  [3U][6U] >> 5U)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
            = (0xfffffffffffff000ULL & (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                         [3U][8U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                            [3U][7U])) 
                                            << 0x1eU) 
                                           | (0x3ffffffffffff000ULL 
                                              & ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                                 [3U][6U])) 
                                                 >> 2U)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
            = (0x1ffU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                          [3U][2U] 
                                          << 4U) | 
                                         (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                          [3U][1U] 
                                          >> 0x1cU))))
                          ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                              [3U][3U] << 0x10U) | 
                             (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                              [3U][2U] >> 0x10U)) : 
                         ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                           [3U][2U] 
                                           << 4U) | 
                                          (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                           [3U][1U] 
                                           >> 0x1cU))))
                           ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                               [3U][3U] << 0x10U) | 
                              (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                               [3U][2U] >> 0x10U)) : 
                          ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                            [3U][2U] 
                                            << 4U) 
                                           | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                              [3U][1U] 
                                              >> 0x1cU))))
                            ? ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                [3U][3U] << 0x10U) 
                               | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                  [3U][2U] >> 0x10U))
                            : 0U))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
            = (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
               + ((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number)) 
                  << 3U));
    }
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[1U][0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_data
        [0U][0U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[1U][1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_data
        [0U][1U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[1U][2U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_data
        [0U][2U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[1U][3U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_data
        [0U][3U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[1U][4U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_data
        [0U][4U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[1U][5U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_data
        [0U][5U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[1U][6U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_data
        [0U][6U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[1U][7U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_data
        [0U][7U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[1U][8U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_data
        [0U][8U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_data
        [1U][0U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_data
        [1U][1U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[2U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_data
        [1U][2U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[3U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_data
        [1U][3U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_data
        [1U][4U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_data
        [1U][5U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[6U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_data
        [1U][6U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[7U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_data
        [1U][7U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[8U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_data
        [1U][8U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_valid[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_valid
        [0U];
    if (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [4U] & vlTOPp->mptw_top__DOT__walking_to_retire_data_ready
                          [4U]) | (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                                       [4U]) & vlTOPp->mptw_top__DOT__walking_to_retire_data_ready
                                      [4U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [4U];
    }
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [4U] & vlTOPp->mptw_top__DOT__walking_to_retire_data_ready
                          [4U])))) {
                if (((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                      [4U]) & vlTOPp->mptw_top__DOT__walking_to_retire_data_ready
                     [4U])) {
                    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [4U]) {
            vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [4U] & vlTOPp->mptw_top__DOT__walking_to_retire_data_ready
                          [4U])))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                               [4U]) & vlTOPp->mptw_top__DOT__walking_to_retire_data_ready
                              [4U])))) {
                    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__mpte_permissions = 0U;
    if ((0x20U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
         [4U][6U])) {
        __Vtemp203[0U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][0U];
        __Vtemp203[1U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][1U];
        __Vtemp203[2U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][2U];
        __Vtemp203[3U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][3U];
        __Vtemp203[4U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][4U];
        __Vtemp203[5U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][5U];
        __Vtemp203[6U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][6U];
        __Vtemp203[7U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][7U];
        __Vtemp203[8U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][8U];
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0xceU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp203[((IData)(1U) 
                                               + (((IData)(0xceU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset)))) 
                                                  >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xceU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset)))))))) 
                         | (__Vtemp203[(((IData)(0xceU) 
                                         + (0x3fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset)))) 
                                        >> 5U)] >> 
                            (0x1fU & ((IData)(0xceU) 
                                      + (0x3fU & ((IData)(3U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset))))))))
                : 0U);
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = 0U;
    if ((0x20U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
         [0U][6U])) {
        __Vtemp205[0U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][0U];
        __Vtemp205[1U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][1U];
        __Vtemp205[2U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][2U];
        __Vtemp205[3U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][3U];
        __Vtemp205[4U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][4U];
        __Vtemp205[5U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][5U];
        __Vtemp205[6U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][6U];
        __Vtemp205[7U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][7U];
        __Vtemp205[8U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0xceU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp205[((IData)(1U) 
                                               + (((IData)(0xceU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                                  >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xceU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))))) 
                         | (__Vtemp205[(((IData)(0xceU) 
                                         + (0x3fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                        >> 5U)] >> 
                            (0x1fU & ((IData)(0xceU) 
                                      + (0x3fU & ((IData)(3U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))))
                : 0U);
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = 0U;
    if ((0x20U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
         [1U][6U])) {
        __Vtemp207[0U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][0U];
        __Vtemp207[1U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][1U];
        __Vtemp207[2U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][2U];
        __Vtemp207[3U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][3U];
        __Vtemp207[4U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][4U];
        __Vtemp207[5U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][5U];
        __Vtemp207[6U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][6U];
        __Vtemp207[7U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][7U];
        __Vtemp207[8U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0xceU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp207[((IData)(1U) 
                                               + (((IData)(0xceU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                                  >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xceU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))))) 
                         | (__Vtemp207[(((IData)(0xceU) 
                                         + (0x3fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                        >> 5U)] >> 
                            (0x1fU & ((IData)(0xceU) 
                                      + (0x3fU & ((IData)(3U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))))
                : 0U);
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = 0U;
    if ((0x20U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
         [2U][6U])) {
        __Vtemp209[0U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][0U];
        __Vtemp209[1U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][1U];
        __Vtemp209[2U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][2U];
        __Vtemp209[3U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][3U];
        __Vtemp209[4U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][4U];
        __Vtemp209[5U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][5U];
        __Vtemp209[6U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][6U];
        __Vtemp209[7U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][7U];
        __Vtemp209[8U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0xceU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp209[((IData)(1U) 
                                               + (((IData)(0xceU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                                  >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xceU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))))) 
                         | (__Vtemp209[(((IData)(0xceU) 
                                         + (0x3fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                        >> 5U)] >> 
                            (0x1fU & ((IData)(0xceU) 
                                      + (0x3fU & ((IData)(3U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))))
                : 0U);
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = 0U;
    if ((0x20U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
         [3U][6U])) {
        __Vtemp211[0U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][0U];
        __Vtemp211[1U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][1U];
        __Vtemp211[2U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][2U];
        __Vtemp211[3U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][3U];
        __Vtemp211[4U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][4U];
        __Vtemp211[5U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][5U];
        __Vtemp211[6U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][6U];
        __Vtemp211[7U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][7U];
        __Vtemp211[8U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0xceU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp211[((IData)(1U) 
                                               + (((IData)(0xceU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                                  >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xceU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))))) 
                         | (__Vtemp211[(((IData)(0xceU) 
                                         + (0x3fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                        >> 5U)] >> 
                            (0x1fU & ((IData)(0xceU) 
                                      + (0x3fU & ((IData)(3U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))))
                : 0U);
    }
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffff0U & ((IData)(vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__next_mpte_addr) 
                             << 4U)));
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5U] 
        = ((0xfU & ((IData)(vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__next_mpte_addr) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__next_mpte_addr 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfU & ((IData)((vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__next_mpte_addr 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffff0U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                             << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = ((0xfU & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfU & ((IData)((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffff0U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                             << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = ((0xfU & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfU & ((IData)((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffff0U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                             << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = ((0xfU & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfU & ((IData)((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffff0U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                             << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = ((0xfU & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfU & ((IData)((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[1U][0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_data
        [1U][0U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[1U][1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_data
        [1U][1U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[1U][2U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_data
        [1U][2U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[1U][3U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_data
        [1U][3U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[1U][4U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_data
        [1U][4U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[1U][5U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_data
        [1U][5U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[1U][6U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_data
        [1U][6U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[1U][7U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_data
        [1U][7U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[1U][8U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_data
        [1U][8U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[0U][0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_data
        [0U][0U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[0U][1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_data
        [0U][1U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[0U][2U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_data
        [0U][2U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[0U][3U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_data
        [0U][3U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[0U][4U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_data
        [0U][4U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[0U][5U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_data
        [0U][5U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[0U][6U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_data
        [0U][6U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[0U][7U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_data
        [0U][7U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[0U][8U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_data
        [0U][8U];
    __Vtemp214 = (((QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[3U])) 
                   << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[2U])));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[2U])))) 
                             << 4U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5U] 
        = ((0xfU & ((IData)(__Vtemp214) >> 0x1cU)) 
           | (0xfffffff0U & ((IData)((__Vtemp214 >> 0x20U)) 
                             << 4U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[6U]) 
           | (0xfU & ((IData)((__Vtemp214 >> 0x20U)) 
                      >> 0x1cU)));
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_valid
        [1U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_valid
        [0U];
    vlTOPp->mptw_top__DOT__system_status_busy[7U] = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__busy;
    vlTOPp->mptw_top__DOT__to_walking_stage_data_ready[4U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & (((0x400U & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U])
                               ? 2U : (3U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                              [4U][5U] 
                                              << 0x1eU) 
                                             | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [4U][4U] 
                                                >> 2U)))) 
                             << 2U)));
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__format_error_cause_o 
        = (7U & (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U] 
                 >> 5U));
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            if ((vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                 [4U] & vlTOPp->mptw_top__DOT__walking_to_retire_data_ready
                 [4U])) {
                vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0U];
                vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1U];
                vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2U];
                vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3U];
                vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4U];
                vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5U];
                vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6U];
                vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7U];
                vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] = 0U;
        if (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [4U]) {
            vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[0U];
            vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[1U];
            vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[2U];
            vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[3U];
            vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[4U];
            vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[5U];
            vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[6U];
            vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[7U];
            vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction[8U];
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & (((0x400U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U])
                               ? 2U : (3U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                              [0U][5U] 
                                              << 0x1eU) 
                                             | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [0U][4U] 
                                                >> 2U)))) 
                             << 2U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o 
        = (7U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                 >> 5U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & (((0x400U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U])
                               ? 2U : (3U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                              [1U][5U] 
                                              << 0x1eU) 
                                             | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [1U][4U] 
                                                >> 2U)))) 
                             << 2U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o 
        = (7U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                 >> 5U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & (((0x400U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U])
                               ? 2U : (3U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                              [2U][5U] 
                                              << 0x1eU) 
                                             | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [2U][4U] 
                                                >> 2U)))) 
                             << 2U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o 
        = (7U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                 >> 5U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & (((0x400U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U])
                               ? 2U : (3U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                              [3U][5U] 
                                              << 0x1eU) 
                                             | (vlTOPp->mptw_top__DOT__to_walking_stage_data_data
                                                [3U][4U] 
                                                >> 2U)))) 
                             << 2U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__format_error_cause_o 
        = (7U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
                 >> 5U));
}

void Vmptw_top::_settle__TOP__2(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_settle__TOP__2\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mptw_top__DOT__system_status_flushed[3U] 
        = ((((3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                      [3U]) ? 3U : 0U)) & (3U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed))) 
            & (3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                       [3U]) ? 3U : 0U))) ? 3U : 1U);
    vlTOPp->walking_mem_master_mem_addr[0U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[0U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [0U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if (((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                      [0U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [0U]) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [0U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)) 
                         | (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                                [0U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [0U];
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [0U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                               [0U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            if ((vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                 [0U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] = 0U;
        if (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [0U]) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
        }
    }
    vlTOPp->mptw_top__DOT__system_status_flushed[4U] 
        = ((((3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                      [4U]) ? 3U : 0U)) & (3U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed))) 
            & (3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                       [4U]) ? 3U : 0U))) ? 3U : 1U);
    vlTOPp->walking_mem_master_mem_addr[1U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[1U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [1U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if (((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                      [1U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [1U]) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [1U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)) 
                         | (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                                [1U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [1U];
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [1U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                               [1U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            if ((vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                 [1U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] = 0U;
        if (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [1U]) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
        }
    }
    vlTOPp->mptw_top__DOT__system_status_flushed[5U] 
        = ((((3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                      [5U]) ? 3U : 0U)) & (3U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed))) 
            & (3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                       [5U]) ? 3U : 0U))) ? 3U : 1U);
    vlTOPp->walking_mem_master_mem_addr[2U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[2U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [2U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if (((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                      [2U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [2U]) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [2U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)) 
                         | (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                                [2U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [2U];
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [2U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                               [2U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            if ((vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                 [2U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] = 0U;
        if (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [2U]) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
        }
    }
    vlTOPp->mptw_top__DOT__system_status_flushed[6U] 
        = ((((3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                      [6U]) ? 3U : 0U)) & (3U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed))) 
            & (3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                       [6U]) ? 3U : 0U))) ? 3U : 1U);
    vlTOPp->walking_mem_master_mem_addr[3U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[3U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [3U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if (((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                      [3U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [3U]) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [3U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)) 
                         | (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                                [3U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [3U];
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                          [3U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                               [3U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            if ((vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
                 [3U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] = 0U;
        if (vlTOPp->mptw_top__DOT__to_walking_stage_data_valid
            [3U]) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
        }
    }
    vlTOPp->mptw_top__DOT__system_status_flushed[2U] 
        = (((3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                     [2U]) ? 3U : 0U)) & (3U == (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_status_flushed)))
            ? 3U : (((0U != ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                              [2U]) ? 3U : 0U)) | (0U 
                                                   != (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_status_flushed)))
                     ? 1U : 0U));
    vlTOPp->plb_master_mem_addr = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->plb_master_mem_req = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->mptw_top__DOT__issue_stage_master_ready[1U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready;
    vlTOPp->mptw_top__DOT__to_walking_stage_data_ready[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT__to_walking_stage_data_ready[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT__to_walking_stage_data_ready[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT__to_walking_stage_data_ready[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed[8U] 
        = vlTOPp->mptw_top__DOT__system_status_flushed
        [8U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed[7U] 
        = vlTOPp->mptw_top__DOT__system_status_flushed
        [7U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed[6U] 
        = vlTOPp->mptw_top__DOT__system_status_flushed
        [6U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed[5U] 
        = vlTOPp->mptw_top__DOT__system_status_flushed
        [5U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed[4U] 
        = vlTOPp->mptw_top__DOT__system_status_flushed
        [4U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed[3U] 
        = vlTOPp->mptw_top__DOT__system_status_flushed
        [3U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed[2U] 
        = vlTOPp->mptw_top__DOT__system_status_flushed
        [2U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed[1U] 
        = vlTOPp->mptw_top__DOT__system_status_flushed
        [1U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed[0U] 
        = vlTOPp->mptw_top__DOT__system_status_flushed
        [0U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_ready
        [1U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_ready
        [0U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__to_walking_stage_data_ready
                          [0U])))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & vlTOPp->mptw_top__DOT__to_walking_stage_data_ready
                     [0U])) {
                    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__to_walking_stage_data_ready
                          [0U]) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                      & vlTOPp->mptw_top__DOT__to_walking_stage_data_ready
                                      [0U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__to_walking_stage_data_ready
                          [0U])))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlTOPp->mptw_top__DOT__to_walking_stage_data_ready
                              [0U])))) {
                    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__walking_to_demux_data_ready[0U] 
        = vlTOPp->mptw_top__DOT__to_walking_stage_data_ready
        [1U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_ready[1U] 
        = vlTOPp->mptw_top__DOT__to_walking_stage_data_ready
        [2U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_ready[2U] 
        = vlTOPp->mptw_top__DOT__to_walking_stage_data_ready
        [3U];
    vlTOPp->mptw_top__DOT__walking_to_demux_data_ready[3U] 
        = vlTOPp->mptw_top__DOT__to_walking_stage_data_ready
        [4U];
    vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d = 0U;
    if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q)))) {
                if ((0x3ffffU == vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q)) {
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d = 0U;
                } else {
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound3 
                        = ((3U == (3U & vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q))
                            ? 3U : vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed
                           [0U]);
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d 
                        = ((0x3fffcU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d) 
                           | (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound3));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound3 
                        = ((3U == (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 2U))) ? 3U
                            : vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed
                           [1U]);
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d 
                        = ((0x3fff3U & vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound3) 
                              << 2U));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound3 
                        = ((3U == (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 4U))) ? 3U
                            : vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed
                           [2U]);
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d 
                        = ((0x3ffcfU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound3) 
                              << 4U));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound3 
                        = ((3U == (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 6U))) ? 3U
                            : vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed
                           [3U]);
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d 
                        = ((0x3ff3fU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound3) 
                              << 6U));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound3 
                        = ((3U == (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 8U))) ? 3U
                            : vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed
                           [4U]);
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d 
                        = ((0x3fcffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound3) 
                              << 8U));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound3 
                        = ((3U == (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 0xaU)))
                            ? 3U : vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed
                           [5U]);
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d 
                        = ((0x3f3ffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound3) 
                              << 0xaU));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound3 
                        = ((3U == (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 0xcU)))
                            ? 3U : vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed
                           [6U]);
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d 
                        = ((0x3cfffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound3) 
                              << 0xcU));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound3 
                        = ((3U == (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 0xeU)))
                            ? 3U : vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed
                           [7U]);
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d 
                        = ((0x33fffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound3) 
                              << 0xeU));
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound3 
                        = ((3U == (3U & (vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
                                         >> 0x10U)))
                            ? 3U : vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed
                           [8U]);
                    vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d 
                        = ((0xffffU & vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d) 
                           | ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT____Vlvbound3) 
                              << 0x10U));
                }
            }
        }
    }
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                          [0U] & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                          [0U])))) {
                if (((~ vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                      [0U]) & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                     [0U])) {
                    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
            [0U]) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                          [0U] & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                          [0U]) | (~ ((~ vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                                       [0U]) & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                                      [0U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
            [0U];
    }
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                          [1U] & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                          [1U])))) {
                if (((~ vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                      [1U]) & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                     [1U])) {
                    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
            [1U]) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                          [1U] & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                          [1U]) | (~ ((~ vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                                       [1U]) & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                                      [1U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
            [1U];
    }
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
            if ((vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                 [0U] & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                 [0U])) {
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [0U][0U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [0U][1U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [0U][2U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [0U][3U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [0U][4U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [0U][5U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [0U][6U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [0U][7U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [0U][8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U] = 0U;
        if (vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
            [0U]) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [0U][0U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [0U][1U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [0U][2U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [0U][3U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [0U][4U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [0U][5U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [0U][6U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [0U][7U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [0U][8U];
        }
    }
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            if ((vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                 [1U] & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                 [1U])) {
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [1U][0U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [1U][1U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [1U][2U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [1U][3U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [1U][4U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [1U][5U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [1U][6U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [1U][7U];
                vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                    [1U][8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] = 0U;
        if (vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
            [1U]) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [1U][0U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [1U][1U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [1U][2U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [1U][3U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [1U][4U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [1U][5U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [1U][6U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [1U][7U];
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data
                [1U][8U];
        }
    }
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                          [0U] & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                          [0U])))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                               [0U]) & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                              [0U])))) {
                    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                          [1U] & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                          [1U])))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid
                               [1U]) & vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready
                              [1U])))) {
                    vlTOPp->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [0U])))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                     [0U])) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [0U]) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                      & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                                      [0U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [1U])))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                     [1U])) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [1U]) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                      & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                                      [1U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [2U])))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                     [2U])) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [2U]) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                      & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                                      [2U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [3U])))) {
                if (((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                     & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                     [3U])) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [3U]) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                      & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                                      [3U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [0U])))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                              [0U])))) {
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
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [1U])))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                              [1U])))) {
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
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [2U])))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                              [2U])))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                          [3U])))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                              [3U])))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
    }
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_slave_ready[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready;
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_slave_ready[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready;
    vlTOPp->mptw_top__DOT__issue_stage_slave_ready[1U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_slave_ready
        [1U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_ready[0U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_slave_ready
        [0U];
    vlTOPp->mptw_top__DOT__issue_stage_master_ready[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_ready
        [1U];
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__input_to_fetch_data_valid) 
                          & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                          [0U]) | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__input_to_fetch_data_valid)) 
                                      & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                                      [0U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__input_to_fetch_data_valid;
    }
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__input_to_fetch_data_valid) 
                 & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                 [0U])) {
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[0U];
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[1U];
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[2U];
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[3U];
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U];
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[5U];
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[6U];
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[7U];
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U] = 0U;
        if (vlTOPp->mptw_top__DOT__input_to_fetch_data_valid) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[0U];
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[1U];
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[2U];
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[3U];
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U];
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[5U];
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[6U];
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[7U];
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U];
        }
    }
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__input_to_fetch_data_valid) 
                          & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                          [0U])))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__input_to_fetch_data_valid)) 
                              & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                              [0U])))) {
                    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy = 0U;
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__input_to_fetch_data_valid) 
                          & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                          [0U])))) {
                if (((~ (IData)(vlTOPp->mptw_top__DOT__input_to_fetch_data_valid)) 
                     & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                     [0U])) {
                    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy = 0U;
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__input_to_fetch_data_valid) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy = 1U;
        }
    }
    vlTOPp->mptw_ready_o = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready;
    if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q)))) {
                vlTOPp->mptw_ready_o = 0U;
                if ((0x3ffffU == vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q)) {
                    vlTOPp->mptw_ready_o = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
                if ((0U != (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
                    vlTOPp->mptw_ready_o = 0U;
                }
            } else {
                if ((0U != (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
                    vlTOPp->mptw_ready_o = 0U;
                }
            }
        }
    }
    vlTOPp->busy_o = 0U;
    if ((4U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
        if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                      >> 1U)))) {
            vlTOPp->busy_o = 1U;
        }
    } else {
        if ((2U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            vlTOPp->busy_o = 1U;
        } else {
            if ((1U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
                vlTOPp->busy_o = 1U;
            } else {
                if ((0U == (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type))) {
                    if (((IData)(vlTOPp->mptw_transaction_valid_i) 
                         & (IData)(vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready))) {
                        vlTOPp->busy_o = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d = 0U;
    if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))) {
            if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q)))) {
                vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d 
                    = ((0x3ffffU == vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q)
                        ? ((IData)(vlTOPp->mptw_transaction_valid_i)
                            ? 1U : 0U) : 2U);
            }
        } else {
            vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d 
                = ((1U & (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q))
                    ? ((0U != (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type))
                        ? 2U : 1U) : ((0U != (IData)(vlTOPp->mptw_top__DOT__control_unit_u__DOT__flush_type))
                                       ? 2U : (((IData)(vlTOPp->mptw_transaction_valid_i) 
                                                & (IData)(vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready))
                                                ? 1U
                                                : 0U)));
        }
    }
    vlTOPp->mptw_top__DOT__system_status_busy[0U] = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy;
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[8U] 
        = vlTOPp->mptw_top__DOT__system_status_busy
        [8U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[7U] 
        = vlTOPp->mptw_top__DOT__system_status_busy
        [7U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[6U] 
        = vlTOPp->mptw_top__DOT__system_status_busy
        [6U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[5U] 
        = vlTOPp->mptw_top__DOT__system_status_busy
        [5U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[4U] 
        = vlTOPp->mptw_top__DOT__system_status_busy
        [4U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[3U] 
        = vlTOPp->mptw_top__DOT__system_status_busy
        [3U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[2U] 
        = vlTOPp->mptw_top__DOT__system_status_busy
        [2U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[1U] 
        = vlTOPp->mptw_top__DOT__system_status_busy
        [1U];
    vlTOPp->mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[0U] 
        = vlTOPp->mptw_top__DOT__system_status_busy
        [0U];
}

void Vmptw_top::_initial__TOP__4(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_initial__TOP__4\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->plb_master_mem_be = 0U;
    vlTOPp->plb_master_mem_we = 0U;
    vlTOPp->plb_master_mem_wdata = 0ULL;
}

void Vmptw_top::_eval_initial(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_eval_initial\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__4(vlSymsp);
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
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__1(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__2(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__3(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__4(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__5(vlSymsp);
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__6(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__7(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__8(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__9(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__10(vlSymsp);
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Vmptw_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_ni = VL_RAND_RESET_I(1);
    flush_all_i = VL_RAND_RESET_I(1);
    flush_spec_i = VL_RAND_RESET_I(1);
    stall_i = VL_RAND_RESET_I(1);
    busy_o = VL_RAND_RESET_I(1);
    stalled_o = VL_RAND_RESET_I(1);
    spa_i = VL_RAND_RESET_Q(64);
    mmpt_reg_i = VL_RAND_RESET_Q(64);
    access_type_i = VL_RAND_RESET_I(2);
    speculative_i = VL_RAND_RESET_I(1);
    mptw_transaction_valid_i = VL_RAND_RESET_I(1);
    mptw_ready_o = VL_RAND_RESET_I(1);
    mptw_result_valid_o = VL_RAND_RESET_I(1);
    plb_entry_o = VL_RAND_RESET_Q(64);
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
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            walking_mem_master_mem_req[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            walking_mem_master_mem_gnt[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            walking_mem_master_mem_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            walking_mem_master_mem_addr[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            walking_mem_master_mem_rdata[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            walking_mem_master_mem_wdata[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            walking_mem_master_mem_we[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            walking_mem_master_mem_be[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            walking_mem_master_mem_error[__Vi0] = VL_RAND_RESET_I(1);
    }}
    VL_RAND_RESET_W(280, mptw_top__DOT__input_transaction);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(280, mptw_top__DOT__walking_output_transaction[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            mptw_top__DOT__retire_demux_select[__Vi0] = VL_RAND_RESET_I(1);
    }}
    mptw_top__DOT__input_to_fetch_data_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__fetch_to_issue_data_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_to_demux_data_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            VL_RAND_RESET_W(280, mptw_top__DOT__to_walking_stage_data_data[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            mptw_top__DOT__to_walking_stage_data_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            mptw_top__DOT__to_walking_stage_data_ready[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            VL_RAND_RESET_W(280, mptw_top__DOT__walking_to_demux_data_data[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            mptw_top__DOT__walking_to_demux_data_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            mptw_top__DOT__walking_to_demux_data_ready[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            VL_RAND_RESET_W(280, mptw_top__DOT__walking_to_retire_data_data[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            mptw_top__DOT__walking_to_retire_data_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            mptw_top__DOT__walking_to_retire_data_ready[__Vi0] = VL_RAND_RESET_I(1);
    }}
    mptw_top__DOT__commit_to_output_data_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__commit_to_output_data_ready = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<9; ++__Vi0) {
            mptw_top__DOT__system_control_flush[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<9; ++__Vi0) {
            mptw_top__DOT__system_control_stall[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<9; ++__Vi0) {
            mptw_top__DOT__system_status_busy[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<9; ++__Vi0) {
            mptw_top__DOT__system_status_flushed[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<9; ++__Vi0) {
            mptw_top__DOT__system_status_stalled[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<9; ++__Vi0) {
            mptw_top__DOT____Vcellinp__control_unit_u__slave_status_stalled[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<9; ++__Vi0) {
            mptw_top__DOT____Vcellinp__control_unit_u__slave_status_flushed[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<9; ++__Vi0) {
            mptw_top__DOT____Vcellinp__control_unit_u__slave_status_busy[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<9; ++__Vi0) {
            mptw_top__DOT____Vcellout__control_unit_u__master_control_stall[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<9; ++__Vi0) {
            mptw_top__DOT____Vcellout__control_unit_u__master_control_flush[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            VL_RAND_RESET_W(280, mptw_top__DOT__issue_stage_slave_data[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            mptw_top__DOT__issue_stage_slave_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            mptw_top__DOT__issue_stage_slave_ready[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            VL_RAND_RESET_W(280, mptw_top__DOT__issue_stage_master_data[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            mptw_top__DOT__issue_stage_master_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            mptw_top__DOT__issue_stage_master_ready[__Vi0] = VL_RAND_RESET_I(1);
    }}
    mptw_top__DOT____Vcellout__issue_stage_u__stage_status_stalled = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__issue_stage_u__stage_status_busy = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            mptw_top__DOT____Vcellout__issue_stage_u__stage_master_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            VL_RAND_RESET_W(280, mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            mptw_top__DOT____Vcellout__issue_stage_u__stage_slave_ready[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            VL_RAND_RESET_W(280, mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[__Vi0]);
    }}
    mptw_top__DOT____Vcellout__plb_lookup_stage_u__stage_status_stalled = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__plb_lookup_stage_u__stage_status_busy = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_status_stalled = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_status_busy = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_status_stalled = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_status_busy = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_status_stalled = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_status_busy = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_status_stalled = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_status_busy = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__control_unit_u__DOT__ctrl_status_q = VL_RAND_RESET_I(3);
    mptw_top__DOT__control_unit_u__DOT__ctrl_status_d = VL_RAND_RESET_I(3);
    mptw_top__DOT__control_unit_u__DOT__control_reg_q = VL_RAND_RESET_I(18);
    mptw_top__DOT__control_unit_u__DOT__control_reg_d = VL_RAND_RESET_I(18);
    mptw_top__DOT__control_unit_u__DOT__status_reg_q = VL_RAND_RESET_I(18);
    mptw_top__DOT__control_unit_u__DOT__status_reg_d = VL_RAND_RESET_I(18);
    mptw_top__DOT__control_unit_u__DOT__flush_type = VL_RAND_RESET_I(2);
    mptw_top__DOT__control_unit_u__DOT__unnamedblk2__DOT__i = 0;
    mptw_top__DOT__control_unit_u__DOT__unnamedblk3__DOT__i = 0;
    mptw_top__DOT__control_unit_u__DOT____Vlvbound1 = VL_RAND_RESET_I(2);
    mptw_top__DOT__control_unit_u__DOT____Vlvbound2 = VL_RAND_RESET_I(2);
    mptw_top__DOT__control_unit_u__DOT____Vlvbound3 = VL_RAND_RESET_I(2);
    mptw_top__DOT__control_unit_u__DOT____Vlvbound4 = VL_RAND_RESET_I(2);
    mptw_top__DOT__control_unit_u__DOT____Vlvbound5 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(280, mptw_top__DOT__fetch_stage_u__DOT__output_transaction);
    mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__busy = VL_RAND_RESET_I(1);
    mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d);
    VL_RAND_RESET_W(280, mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction);
    mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__busy = VL_RAND_RESET_I(1);
    mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d);
    VL_RAND_RESET_W(280, mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction);
    mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__busy = VL_RAND_RESET_I(1);
    mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d);
    VL_RAND_RESET_W(280, mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction);
    VL_RAND_RESET_W(280, mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction);
    VL_RAND_RESET_W(280, mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction);
    VL_RAND_RESET_W(72, mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req);
    mptw_top__DOT__plb_lookup_stage_u__DOT__flush_completed = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__busy = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q);
    VL_RAND_RESET_W(280, mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d);
    VL_RAND_RESET_W(280, mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction);
    mptw_top__DOT__last_parsing_stage_u__DOT__format_error_cause_o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(280, mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction);
    mptw_top__DOT__last_parsing_stage_u__DOT__mpte_permissions = VL_RAND_RESET_I(3);
    mptw_top__DOT__last_parsing_stage_u__DOT__spa_current_page_number = VL_RAND_RESET_I(9);
    mptw_top__DOT__last_parsing_stage_u__DOT__base_phyisical_address = VL_RAND_RESET_Q(64);
    mptw_top__DOT__last_parsing_stage_u__DOT__next_mpte_addr = VL_RAND_RESET_Q(64);
    mptw_top__DOT__last_parsing_stage_u__DOT__range_offset = VL_RAND_RESET_I(4);
    mptw_top__DOT__last_parsing_stage_u__DOT__slave_to_reg_bus_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__busy = VL_RAND_RESET_I(1);
    mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d);
    VL_RAND_RESET_W(280, mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forward_buffer_status_busy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forward_buffer_status_stalled = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = VL_RAND_RESET_I(3);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = VL_RAND_RESET_I(9);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = VL_RAND_RESET_Q(64);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = VL_RAND_RESET_Q(64);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset = VL_RAND_RESET_I(4);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forward_buffer_status_busy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forward_buffer_status_stalled = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = VL_RAND_RESET_I(3);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = VL_RAND_RESET_I(9);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = VL_RAND_RESET_Q(64);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = VL_RAND_RESET_Q(64);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset = VL_RAND_RESET_I(4);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forward_buffer_status_busy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forward_buffer_status_stalled = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = VL_RAND_RESET_I(3);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = VL_RAND_RESET_I(9);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = VL_RAND_RESET_Q(64);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = VL_RAND_RESET_Q(64);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset = VL_RAND_RESET_I(4);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__format_error_cause_o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_forwarding_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forward_buffer_status_busy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forward_buffer_status_stalled = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = VL_RAND_RESET_I(3);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = VL_RAND_RESET_I(9);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = VL_RAND_RESET_Q(64);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = VL_RAND_RESET_Q(64);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset = VL_RAND_RESET_I(4);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__busy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__busy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d);
    VL_RAND_RESET_W(280, mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vchglast__TOP__mptw_top__DOT__issue_stage_master_ready[__Vi0] = VL_RAND_RESET_I(1);
    }}
    VL_RAND_RESET_W(280, __Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction);
    VL_RAND_RESET_W(280, __Vchglast__TOP__mptw_top__DOT__last_parsing_stage_u__DOT__output_transaction);
    VL_RAND_RESET_W(280, __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction);
    VL_RAND_RESET_W(280, __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction);
    VL_RAND_RESET_W(280, __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction);
    VL_RAND_RESET_W(280, __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction);
    __Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
