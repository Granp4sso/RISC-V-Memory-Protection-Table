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
    WData/*287:0*/ __Vtemp178[9];
    WData/*287:0*/ __Vtemp180[9];
    WData/*287:0*/ __Vtemp182[9];
    WData/*287:0*/ __Vtemp184[9];
    WData/*287:0*/ __Vtemp186[9];
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
    vlTOPp->walking_mem_master_mem_be[3U] = 0U;
    vlTOPp->walking_mem_master_mem_we[3U] = 0U;
    vlTOPp->walking_mem_master_mem_wdata[3U] = 0ULL;
    vlTOPp->mptw_top__DOT__input_transaction[4U] = 
        (0xfffffff3U & vlTOPp->mptw_top__DOT__input_transaction[4U]);
    vlTOPp->mptw_top__DOT__input_transaction[8U] = 
        (0x7ffbffU & vlTOPp->mptw_top__DOT__input_transaction[8U]);
    vlTOPp->mptw_top__DOT__input_transaction[8U] = 
        (0x7ff800U | vlTOPp->mptw_top__DOT__input_transaction[8U]);
    vlTOPp->mptw_top__DOT__input_transaction[4U] = 
        (0xfU & vlTOPp->mptw_top__DOT__input_transaction[4U]);
    vlTOPp->mptw_top__DOT__input_transaction[5U] = 0U;
    vlTOPp->mptw_top__DOT__input_transaction[6U] = 0xfffffff0U;
    vlTOPp->mptw_top__DOT__input_transaction[7U] = 0xffffffffU;
    vlTOPp->mptw_top__DOT__input_transaction[8U] = 
        (0xfU | (0x7ffff0U & vlTOPp->mptw_top__DOT__input_transaction[8U]));
    vlTOPp->mptw_top__DOT__input_transaction[8U] = 
        (0x7fff1fU & vlTOPp->mptw_top__DOT__input_transaction[8U]);
    vlTOPp->mptw_top__DOT__input_transaction[8U] = 
        (0x7ffeffU & vlTOPp->mptw_top__DOT__input_transaction[8U]);
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
        ((0x7ffdffU & vlTOPp->mptw_top__DOT__input_transaction[8U]) 
         | (0xfffffe00U & ((IData)(vlTOPp->mptw_transaction_valid_i) 
                           << 9U)));
    if ((0U == (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_push_status_q))) {
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_push_status_d 
            = (((0x1fU == (0x1fU & (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q))) 
                & (~ (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_pop)))
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_push_status_q))) {
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_push_status_d 
                = ((IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_pop)
                    ? 0U : 1U);
        }
    }
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q)));
    }
    if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__commit_to_output_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__commit_to_output_valid = 0U;
    }
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
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[1U][0U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[1U][1U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[1U][2U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[1U][3U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[1U][4U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[1U][5U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[1U][6U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[1U][7U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__issue_stage_slave_data[1U][8U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 0U;
    }
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
    vlTOPp->mptw_top__DOT__walking_stage_data[0U][0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__walking_stage_data[0U][1U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__walking_stage_data[0U][2U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__walking_stage_data[0U][3U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__walking_stage_data[0U][4U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__walking_stage_data[0U][5U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__walking_stage_data[0U][6U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__walking_stage_data[0U][7U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__walking_stage_data[0U][8U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__walking_stage_data[1U][0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__walking_stage_data[1U][1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__walking_stage_data[1U][2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__walking_stage_data[1U][3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__walking_stage_data[1U][4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__walking_stage_data[1U][5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__walking_stage_data[1U][6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__walking_stage_data[1U][7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__walking_stage_data[1U][8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__walking_stage_data[2U][0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__walking_stage_data[2U][1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__walking_stage_data[2U][2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__walking_stage_data[2U][3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__walking_stage_data[2U][4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__walking_stage_data[2U][5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__walking_stage_data[2U][6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__walking_stage_data[2U][7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__walking_stage_data[2U][8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__walking_stage_data[3U][0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__walking_stage_data[3U][1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__walking_stage_data[3U][2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__walking_stage_data[3U][3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__walking_stage_data[3U][4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__walking_stage_data[3U][5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__walking_stage_data[3U][6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__walking_stage_data[3U][7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__walking_stage_data[3U][8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    vlTOPp->mptw_top__DOT__walking_stage_data[4U][0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__walking_stage_data[4U][1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__walking_stage_data[4U][2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__walking_stage_data[4U][3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__walking_stage_data[4U][4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__walking_stage_data[4U][5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__walking_stage_data[4U][6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__walking_stage_data[4U][7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__walking_stage_data[4U][8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_valid = 0U;
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
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_to_issue_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_to_issue_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__backend_to_issue_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__backend_to_issue_valid = 0U;
    }
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__from_issue_bus_ready = 0U;
    if ((0U == (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_push_status_q))) {
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__from_issue_bus_ready 
            = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_ready;
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
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffbffU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
           | (0x400U & vlTOPp->mptw_top__DOT__input_transaction[8U]));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
           | (0x7ff800U & vlTOPp->mptw_top__DOT__input_transaction[8U]));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[0U]))));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[1U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[0U]))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[3U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[2U]))));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[2U]))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__input_transaction[4U]));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__input_transaction[8U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__input_transaction[7U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                                        >> 4U)))) << 4U)));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[8U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__input_transaction[7U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                                              >> 4U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__input_transaction[8U])) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__input_transaction[7U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                                                                 >> 4U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffff0U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[8U])) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__input_transaction[7U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                                                 >> 4U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffdffU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & vlTOPp->mptw_top__DOT__input_transaction[8U]));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__input_transaction[5U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__input_transaction[4U])) 
                                        >> 4U)))) << 4U)));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[5U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__input_transaction[5U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__input_transaction[4U])) 
                                              >> 4U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__input_transaction[5U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__input_transaction[4U])) 
                                                                 >> 4U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[6U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__input_transaction[5U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__input_transaction[4U])) 
                                                 >> 4U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = ((0x7fffefU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
           | (0x10U & vlTOPp->mptw_top__DOT__input_transaction[8U]));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffeffU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__input_transaction[8U] 
                         >> 1U) & vlTOPp->mptw_top__DOT__input_transaction[8U])));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__format_error = 0U;
    if (((IData)(vlTOPp->mptw_transaction_valid_i) 
         & (vlTOPp->mptw_top__DOT__input_transaction[8U] 
            >> 9U))) {
        if ((0x80000000U & vlTOPp->mptw_top__DOT__input_transaction[1U])) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__format_error = 3U;
        } else {
            if ((0x40000000U & vlTOPp->mptw_top__DOT__input_transaction[1U])) {
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__format_error = 3U;
            } else {
                if ((0x20000000U & vlTOPp->mptw_top__DOT__input_transaction[1U])) {
                    if ((0x10000000U & vlTOPp->mptw_top__DOT__input_transaction[1U])) {
                        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__format_error = 0U;
                    } else {
                        if ((0U != (0xfffU & ((vlTOPp->mptw_top__DOT__input_transaction[4U] 
                                               << 0xcU) 
                                              | (vlTOPp->mptw_top__DOT__input_transaction[3U] 
                                                 >> 0x14U))))) {
                            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__format_error = 3U;
                        }
                    }
                } else {
                    if ((0x10000000U & vlTOPp->mptw_top__DOT__input_transaction[1U])) {
                        if ((0U != (0x1fffffU & ((vlTOPp->mptw_top__DOT__input_transaction[4U] 
                                                  << 0x15U) 
                                                 | (vlTOPp->mptw_top__DOT__input_transaction[3U] 
                                                    >> 0xbU))))) {
                            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__format_error = 3U;
                        }
                    } else {
                        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__format_error = 3U;
                    }
                }
            }
        }
    }
    vlTOPp->mptw_transaction_valid_o = vlTOPp->mptw_top__DOT__commit_to_output_valid;
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
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data
         [4U][4U])) {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                             [4U][2U] << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                [4U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                 [4U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__walking_stage_data
                                 [4U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                     [4U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__walking_stage_data
                                       [4U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    } else {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                             [4U][2U] << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                [4U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                 [4U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__walking_stage_data
                                 [4U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                     [4U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__walking_stage_data
                                       [4U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    }
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__format_error_cause_o = 0U;
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data
         [0U][4U])) {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                             [0U][2U] << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                [0U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                 [0U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__walking_stage_data
                                 [0U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                     [0U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__walking_stage_data
                                       [0U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    } else {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                             [0U][2U] << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                [0U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                 [0U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__walking_stage_data
                                 [0U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                     [0U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__walking_stage_data
                                       [0U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 0U;
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data
         [1U][4U])) {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                             [1U][2U] << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                [1U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                 [1U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__walking_stage_data
                                 [1U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                     [1U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__walking_stage_data
                                       [1U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    } else {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                             [1U][2U] << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                [1U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                 [1U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__walking_stage_data
                                 [1U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                     [1U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__walking_stage_data
                                       [1U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 0U;
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data
         [2U][4U])) {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                             [2U][2U] << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                [2U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                 [2U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__walking_stage_data
                                 [2U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                     [2U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__walking_stage_data
                                       [2U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    } else {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                             [2U][2U] << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                [2U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                 [2U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__walking_stage_data
                                 [2U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                     [2U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__walking_stage_data
                                       [2U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 0U;
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data
         [3U][4U])) {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                             [3U][2U] << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                [3U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                 [3U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__walking_stage_data
                                 [3U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                     [3U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__walking_stage_data
                                       [3U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    } else {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                             [3U][2U] << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                [3U][1U] 
                                                >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                 [3U][2U] << 4U) | 
                                (vlTOPp->mptw_top__DOT__walking_stage_data
                                 [3U][1U] >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                     [3U][2U] << 4U) 
                                    | (vlTOPp->mptw_top__DOT__walking_stage_data
                                       [3U][1U] >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 0U;
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data
         [4U][4U])) {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset 
            = ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                [4U][2U] << 4U) | (
                                                   vlTOPp->mptw_top__DOT__walking_stage_data
                                                   [4U][1U] 
                                                   >> 0x1cU))))
                ? (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                            [4U][3U] << 0x14U) | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                  [4U][2U] 
                                                  >> 0xcU)))
                : 0U);
    }
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data
         [0U][4U])) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset 
            = ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                [0U][2U] << 4U) | (
                                                   vlTOPp->mptw_top__DOT__walking_stage_data
                                                   [0U][1U] 
                                                   >> 0x1cU))))
                ? 0U : ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                         [0U][2U] << 4U) 
                                        | (vlTOPp->mptw_top__DOT__walking_stage_data
                                           [0U][1U] 
                                           >> 0x1cU))))
                         ? 0U : ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                                  [0U][2U] 
                                                  << 4U) 
                                                 | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                    [0U][1U] 
                                                    >> 0x1cU))))
                                  ? (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                              [0U][4U] 
                                              << 0x10U) 
                                             | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                [0U][3U] 
                                                >> 0x10U)))
                                  : 0U)));
    }
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data
         [1U][4U])) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset 
            = ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                [1U][2U] << 4U) | (
                                                   vlTOPp->mptw_top__DOT__walking_stage_data
                                                   [1U][1U] 
                                                   >> 0x1cU))))
                ? 0U : (0xfU & ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                                 [1U][2U] 
                                                 << 4U) 
                                                | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                   [1U][1U] 
                                                   >> 0x1cU))))
                                 ? ((vlTOPp->mptw_top__DOT__walking_stage_data
                                     [1U][4U] << 0x19U) 
                                    | (vlTOPp->mptw_top__DOT__walking_stage_data
                                       [1U][3U] >> 7U))
                                 : ((3U == (0xfU & 
                                            ((vlTOPp->mptw_top__DOT__walking_stage_data
                                              [1U][2U] 
                                              << 4U) 
                                             | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                [1U][1U] 
                                                >> 0x1cU))))
                                     ? ((vlTOPp->mptw_top__DOT__walking_stage_data
                                         [1U][4U] << 0x19U) 
                                        | (vlTOPp->mptw_top__DOT__walking_stage_data
                                           [1U][3U] 
                                           >> 7U)) : 0U))));
    }
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data
         [2U][4U])) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset 
            = (0xfU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                        [2U][2U] << 4U) 
                                       | (vlTOPp->mptw_top__DOT__walking_stage_data
                                          [2U][1U] 
                                          >> 0x1cU))))
                        ? ((vlTOPp->mptw_top__DOT__walking_stage_data
                            [2U][3U] << 2U) | (vlTOPp->mptw_top__DOT__walking_stage_data
                                               [2U][2U] 
                                               >> 0x1eU))
                        : ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                            [2U][2U] 
                                            << 4U) 
                                           | (vlTOPp->mptw_top__DOT__walking_stage_data
                                              [2U][1U] 
                                              >> 0x1cU))))
                            ? ((vlTOPp->mptw_top__DOT__walking_stage_data
                                [2U][3U] << 2U) | (
                                                   vlTOPp->mptw_top__DOT__walking_stage_data
                                                   [2U][2U] 
                                                   >> 0x1eU))
                            : ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                                [2U][2U] 
                                                << 4U) 
                                               | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                  [2U][1U] 
                                                  >> 0x1cU))))
                                ? ((vlTOPp->mptw_top__DOT__walking_stage_data
                                    [2U][3U] << 2U) 
                                   | (vlTOPp->mptw_top__DOT__walking_stage_data
                                      [2U][2U] >> 0x1eU))
                                : 0U))));
    }
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data
         [3U][4U])) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset 
            = (0xfU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                        [3U][2U] << 4U) 
                                       | (vlTOPp->mptw_top__DOT__walking_stage_data
                                          [3U][1U] 
                                          >> 0x1cU))))
                        ? ((vlTOPp->mptw_top__DOT__walking_stage_data
                            [3U][3U] << 0xbU) | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                 [3U][2U] 
                                                 >> 0x15U))
                        : ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                            [3U][2U] 
                                            << 4U) 
                                           | (vlTOPp->mptw_top__DOT__walking_stage_data
                                              [3U][1U] 
                                              >> 0x1cU))))
                            ? ((vlTOPp->mptw_top__DOT__walking_stage_data
                                [3U][3U] << 0xbU) | 
                               (vlTOPp->mptw_top__DOT__walking_stage_data
                                [3U][2U] >> 0x15U))
                            : ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                                [3U][2U] 
                                                << 4U) 
                                               | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                  [3U][1U] 
                                                  >> 0x1cU))))
                                ? ((vlTOPp->mptw_top__DOT__walking_stage_data
                                    [3U][3U] << 0xbU) 
                                   | (vlTOPp->mptw_top__DOT__walking_stage_data
                                      [3U][2U] >> 0x15U))
                                : 0U))));
    }
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U] 
        = ((0x3ffU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U]) 
           | (0x7ffc00U & vlTOPp->mptw_top__DOT__walking_stage_data
              [4U][8U]));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                    [4U][1U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [4U][0U]))));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [4U][1U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                      [4U][0U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                    [4U][3U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [4U][2U]))));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [4U][3U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                      [4U][2U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__walking_stage_data
              [4U][4U]));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__walking_stage_data
                                                       [4U][8U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data
                                                        [4U][7U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data
                                                        [4U][6U])) 
                                        >> 4U)))) << 4U)));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                              [4U][8U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data
                                                            [4U][7U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data
                                                              [4U][6U])) 
                                              >> 4U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__walking_stage_data
                                                                            [4U][8U])) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__walking_stage_data
                                                                               [4U][7U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__walking_stage_data
                                                                                [4U][6U])) 
                                                                 >> 4U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffff0U & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                                 [4U][8U])) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data
                                                               [4U][7U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__walking_stage_data
                                                                 [4U][6U])) 
                                                 >> 4U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffdffU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & vlTOPp->mptw_top__DOT__walking_stage_data
              [4U][8U]));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U] 
        = ((0x7fffefU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U]) 
           | (0x10U & vlTOPp->mptw_top__DOT__walking_stage_data
              [4U][8U]));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U] 
        = ((0x7fff1fU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x200U & vlTOPp->mptw_top__DOT__walking_stage_data
                               [4U][8U]) ? (7U & (vlTOPp->mptw_top__DOT__walking_stage_data
                                                  [4U][8U] 
                                                  >> 5U))
                               : 0U) << 5U)));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffeffU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__walking_stage_data
                         [4U][8U] >> 1U) & vlTOPp->mptw_top__DOT__walking_stage_data
                        [4U][8U])));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x3ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x7ffc00U & vlTOPp->mptw_top__DOT__walking_stage_data
              [0U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                    [0U][1U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [0U][0U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [0U][1U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                      [0U][0U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                    [0U][3U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [0U][2U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [0U][3U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                      [0U][2U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__walking_stage_data
              [0U][4U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__walking_stage_data
                                                       [0U][8U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data
                                                        [0U][7U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data
                                                        [0U][6U])) 
                                        >> 4U)))) << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                              [0U][8U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data
                                                            [0U][7U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data
                                                              [0U][6U])) 
                                              >> 4U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__walking_stage_data
                                                                            [0U][8U])) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__walking_stage_data
                                                                               [0U][7U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__walking_stage_data
                                                                                [0U][6U])) 
                                                                 >> 4U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffff0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                                 [0U][8U])) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data
                                                               [0U][7U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__walking_stage_data
                                                                 [0U][6U])) 
                                                 >> 4U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffdffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & vlTOPp->mptw_top__DOT__walking_stage_data
              [0U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7fffefU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x10U & vlTOPp->mptw_top__DOT__walking_stage_data
              [0U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7fff1fU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x200U & vlTOPp->mptw_top__DOT__walking_stage_data
                               [0U][8U]) ? (7U & (vlTOPp->mptw_top__DOT__walking_stage_data
                                                  [0U][8U] 
                                                  >> 5U))
                               : 0U) << 5U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffeffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__walking_stage_data
                         [0U][8U] >> 1U) & vlTOPp->mptw_top__DOT__walking_stage_data
                        [0U][8U])));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x3ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x7ffc00U & vlTOPp->mptw_top__DOT__walking_stage_data
              [1U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                    [1U][1U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [1U][0U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [1U][1U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                      [1U][0U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                    [1U][3U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [1U][2U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [1U][3U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                      [1U][2U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__walking_stage_data
              [1U][4U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__walking_stage_data
                                                       [1U][8U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data
                                                        [1U][7U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data
                                                        [1U][6U])) 
                                        >> 4U)))) << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                              [1U][8U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data
                                                            [1U][7U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data
                                                              [1U][6U])) 
                                              >> 4U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__walking_stage_data
                                                                            [1U][8U])) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__walking_stage_data
                                                                               [1U][7U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__walking_stage_data
                                                                                [1U][6U])) 
                                                                 >> 4U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffff0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                                 [1U][8U])) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data
                                                               [1U][7U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__walking_stage_data
                                                                 [1U][6U])) 
                                                 >> 4U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffdffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & vlTOPp->mptw_top__DOT__walking_stage_data
              [1U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7fffefU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x10U & vlTOPp->mptw_top__DOT__walking_stage_data
              [1U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7fff1fU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x200U & vlTOPp->mptw_top__DOT__walking_stage_data
                               [1U][8U]) ? (7U & (vlTOPp->mptw_top__DOT__walking_stage_data
                                                  [1U][8U] 
                                                  >> 5U))
                               : 0U) << 5U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffeffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__walking_stage_data
                         [1U][8U] >> 1U) & vlTOPp->mptw_top__DOT__walking_stage_data
                        [1U][8U])));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x3ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x7ffc00U & vlTOPp->mptw_top__DOT__walking_stage_data
              [2U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                    [2U][1U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [2U][0U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [2U][1U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                      [2U][0U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                    [2U][3U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [2U][2U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [2U][3U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                      [2U][2U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__walking_stage_data
              [2U][4U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__walking_stage_data
                                                       [2U][8U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data
                                                        [2U][7U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data
                                                        [2U][6U])) 
                                        >> 4U)))) << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                              [2U][8U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data
                                                            [2U][7U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data
                                                              [2U][6U])) 
                                              >> 4U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__walking_stage_data
                                                                            [2U][8U])) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__walking_stage_data
                                                                               [2U][7U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__walking_stage_data
                                                                                [2U][6U])) 
                                                                 >> 4U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffff0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                                 [2U][8U])) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data
                                                               [2U][7U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__walking_stage_data
                                                                 [2U][6U])) 
                                                 >> 4U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffdffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & vlTOPp->mptw_top__DOT__walking_stage_data
              [2U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7fffefU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x10U & vlTOPp->mptw_top__DOT__walking_stage_data
              [2U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7fff1fU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x200U & vlTOPp->mptw_top__DOT__walking_stage_data
                               [2U][8U]) ? (7U & (vlTOPp->mptw_top__DOT__walking_stage_data
                                                  [2U][8U] 
                                                  >> 5U))
                               : 0U) << 5U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffeffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__walking_stage_data
                         [2U][8U] >> 1U) & vlTOPp->mptw_top__DOT__walking_stage_data
                        [2U][8U])));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x3ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x7ffc00U & vlTOPp->mptw_top__DOT__walking_stage_data
              [3U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                    [3U][1U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [3U][0U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [3U][1U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                      [3U][0U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                    [3U][3U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [3U][2U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                     [3U][3U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                      [3U][2U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__walking_stage_data
              [3U][4U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__walking_stage_data
                                                       [3U][8U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data
                                                        [3U][7U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data
                                                        [3U][6U])) 
                                        >> 4U)))) << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                              [3U][8U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data
                                                            [3U][7U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data
                                                              [3U][6U])) 
                                              >> 4U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__walking_stage_data
                                                                            [3U][8U])) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__walking_stage_data
                                                                               [3U][7U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__walking_stage_data
                                                                                [3U][6U])) 
                                                                 >> 4U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffff0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data
                                                 [3U][8U])) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data
                                                               [3U][7U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__walking_stage_data
                                                                 [3U][6U])) 
                                                 >> 4U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffdffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & vlTOPp->mptw_top__DOT__walking_stage_data
              [3U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7fffefU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x10U & vlTOPp->mptw_top__DOT__walking_stage_data
              [3U][8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7fff1fU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x200U & vlTOPp->mptw_top__DOT__walking_stage_data
                               [3U][8U]) ? (7U & (vlTOPp->mptw_top__DOT__walking_stage_data
                                                  [3U][8U] 
                                                  >> 5U))
                               : 0U) << 5U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x7ffeffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__walking_stage_data
                         [3U][8U] >> 1U) & vlTOPp->mptw_top__DOT__walking_stage_data
                        [3U][8U])));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__spa_current_page_number = 0U;
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__base_phyisical_address = 0ULL;
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data
                  [4U][4U] >> 5U)))) {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__base_phyisical_address 
            = (0xfffffffffffff000ULL & (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__walking_stage_data
                                                         [4U][6U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data
                                                            [4U][5U])) 
                                            << 0x1eU) 
                                           | (0x3ffffffffffff000ULL 
                                              & ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__walking_stage_data
                                                                 [4U][4U])) 
                                                 >> 2U)))));
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__spa_current_page_number = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__base_phyisical_address;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = 0U;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = 0ULL;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data
                  [0U][4U] >> 5U)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
            = ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                [0U][2U] << 4U) | (
                                                   vlTOPp->mptw_top__DOT__walking_stage_data
                                                   [0U][1U] 
                                                   >> 0x1cU))))
                ? (0xfffffffffffff000ULL & (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__walking_stage_data
                                                             [0U][1U])) 
                                             << 0x2cU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data
                                                               [0U][0U])) 
                                               << 0xcU)))
                : (0xfffffffffffff000ULL & (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__walking_stage_data
                                                             [0U][6U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlTOPp->mptw_top__DOT__walking_stage_data
                                                                [0U][5U])) 
                                                << 0x1eU) 
                                               | (0x3ffffffffffff000ULL 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mptw_top__DOT__walking_stage_data
                                                                     [0U][4U])) 
                                                     >> 2U))))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
            = ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                [0U][2U] << 4U) | (
                                                   vlTOPp->mptw_top__DOT__walking_stage_data
                                                   [0U][1U] 
                                                   >> 0x1cU))))
                ? 0U : (0x1ffU & ((2U == (0xfU & ((
                                                   vlTOPp->mptw_top__DOT__walking_stage_data
                                                   [0U][2U] 
                                                   << 4U) 
                                                  | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                     [0U][1U] 
                                                     >> 0x1cU))))
                                   ? ((vlTOPp->mptw_top__DOT__walking_stage_data
                                       [0U][4U] << 0x15U) 
                                      | (vlTOPp->mptw_top__DOT__walking_stage_data
                                         [0U][3U] >> 0xbU))
                                   : ((3U == (0xfU 
                                              & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                                  [0U][2U] 
                                                  << 4U) 
                                                 | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                    [0U][1U] 
                                                    >> 0x1cU))))
                                       ? ((vlTOPp->mptw_top__DOT__walking_stage_data
                                           [0U][4U] 
                                           << 0x15U) 
                                          | (vlTOPp->mptw_top__DOT__walking_stage_data
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
    if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data
                  [1U][4U] >> 5U)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
            = ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                [1U][2U] << 4U) | (
                                                   vlTOPp->mptw_top__DOT__walking_stage_data
                                                   [1U][1U] 
                                                   >> 0x1cU))))
                ? (0xfffffffffffff000ULL & (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__walking_stage_data
                                                             [1U][1U])) 
                                             << 0x2cU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data
                                                               [1U][0U])) 
                                               << 0xcU)))
                : (0xfffffffffffff000ULL & (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__walking_stage_data
                                                             [1U][6U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlTOPp->mptw_top__DOT__walking_stage_data
                                                                [1U][5U])) 
                                                << 0x1eU) 
                                               | (0x3ffffffffffff000ULL 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mptw_top__DOT__walking_stage_data
                                                                     [1U][4U])) 
                                                     >> 2U))))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
            = (0x1ffU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                          [1U][2U] 
                                          << 4U) | 
                                         (vlTOPp->mptw_top__DOT__walking_stage_data
                                          [1U][1U] 
                                          >> 0x1cU))))
                          ? ((vlTOPp->mptw_top__DOT__walking_stage_data
                              [1U][4U] << 0x1eU) | 
                             (vlTOPp->mptw_top__DOT__walking_stage_data
                              [1U][3U] >> 2U)) : ((2U 
                                                   == 
                                                   (0xfU 
                                                    & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                                        [1U][2U] 
                                                        << 4U) 
                                                       | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                          [1U][1U] 
                                                          >> 0x1cU))))
                                                   ? 
                                                  ((vlTOPp->mptw_top__DOT__walking_stage_data
                                                    [1U][4U] 
                                                    << 0x1eU) 
                                                   | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                      [1U][3U] 
                                                      >> 2U))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0xfU 
                                                     & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                                         [1U][2U] 
                                                         << 4U) 
                                                        | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                           [1U][1U] 
                                                           >> 0x1cU))))
                                                    ? 
                                                   ((vlTOPp->mptw_top__DOT__walking_stage_data
                                                     [1U][4U] 
                                                     << 0x1eU) 
                                                    | (vlTOPp->mptw_top__DOT__walking_stage_data
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
    if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data
                  [2U][4U] >> 5U)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
            = (0xfffffffffffff000ULL & (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__walking_stage_data
                                                         [2U][6U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data
                                                            [2U][5U])) 
                                            << 0x1eU) 
                                           | (0x3ffffffffffff000ULL 
                                              & ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__walking_stage_data
                                                                 [2U][4U])) 
                                                 >> 2U)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
            = (0x1ffU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                          [2U][2U] 
                                          << 4U) | 
                                         (vlTOPp->mptw_top__DOT__walking_stage_data
                                          [2U][1U] 
                                          >> 0x1cU))))
                          ? ((vlTOPp->mptw_top__DOT__walking_stage_data
                              [2U][3U] << 7U) | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                 [2U][2U] 
                                                 >> 0x19U))
                          : ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                              [2U][2U] 
                                              << 4U) 
                                             | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                [2U][1U] 
                                                >> 0x1cU))))
                              ? ((vlTOPp->mptw_top__DOT__walking_stage_data
                                  [2U][3U] << 7U) | 
                                 (vlTOPp->mptw_top__DOT__walking_stage_data
                                  [2U][2U] >> 0x19U))
                              : ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                                  [2U][2U] 
                                                  << 4U) 
                                                 | (vlTOPp->mptw_top__DOT__walking_stage_data
                                                    [2U][1U] 
                                                    >> 0x1cU))))
                                  ? ((vlTOPp->mptw_top__DOT__walking_stage_data
                                      [2U][3U] << 7U) 
                                     | (vlTOPp->mptw_top__DOT__walking_stage_data
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
    if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data
                  [3U][4U] >> 5U)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
            = (0xfffffffffffff000ULL & (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__walking_stage_data
                                                         [3U][6U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data
                                                            [3U][5U])) 
                                            << 0x1eU) 
                                           | (0x3ffffffffffff000ULL 
                                              & ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__walking_stage_data
                                                                 [3U][4U])) 
                                                 >> 2U)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
            = (0x1ffU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                          [3U][2U] 
                                          << 4U) | 
                                         (vlTOPp->mptw_top__DOT__walking_stage_data
                                          [3U][1U] 
                                          >> 0x1cU))))
                          ? ((vlTOPp->mptw_top__DOT__walking_stage_data
                              [3U][3U] << 0x10U) | 
                             (vlTOPp->mptw_top__DOT__walking_stage_data
                              [3U][2U] >> 0x10U)) : 
                         ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                           [3U][2U] 
                                           << 4U) | 
                                          (vlTOPp->mptw_top__DOT__walking_stage_data
                                           [3U][1U] 
                                           >> 0x1cU))))
                           ? ((vlTOPp->mptw_top__DOT__walking_stage_data
                               [3U][3U] << 0x10U) | 
                              (vlTOPp->mptw_top__DOT__walking_stage_data
                               [3U][2U] >> 0x10U)) : 
                          ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data
                                            [3U][2U] 
                                            << 4U) 
                                           | (vlTOPp->mptw_top__DOT__walking_stage_data
                                              [3U][1U] 
                                              >> 0x1cU))))
                            ? ((vlTOPp->mptw_top__DOT__walking_stage_data
                                [3U][3U] << 0x10U) 
                               | (vlTOPp->mptw_top__DOT__walking_stage_data
                                  [3U][2U] >> 0x10U))
                            : 0U))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
            = (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
               + ((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number)) 
                  << 3U));
    }
    vlTOPp->mptw_top__DOT__walking_stage_valid[0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_valid;
    vlTOPp->mptw_top__DOT__walking_stage_valid[1U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid;
    vlTOPp->mptw_top__DOT__walking_stage_valid[2U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid;
    vlTOPp->mptw_top__DOT__walking_stage_valid[3U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid;
    vlTOPp->mptw_top__DOT__walking_stage_valid[4U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid;
    vlTOPp->mptw_top__DOT__issue_stage_slave_valid[0U] 
        = vlTOPp->mptw_top__DOT__fetch_to_issue_valid;
    vlTOPp->mptw_top__DOT__issue_stage_slave_valid[1U] 
        = vlTOPp->mptw_top__DOT__backend_to_issue_valid;
    vlTOPp->mptw_top__DOT__issue_stage_master_ready[0U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__from_issue_bus_ready;
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_valid[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid;
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_valid[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid;
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & (((0U != (IData)(vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__format_error))
                               ? 3U : 0U) << 2U)));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = ((0x7fff1fU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x200U & vlTOPp->mptw_top__DOT__input_transaction[8U])
                               ? (IData)(vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__format_error)
                               : 0U) << 5U)));
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[8U] 
        = ((0x7ffbffU & vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[8U]) 
           | (0x400U & vlTOPp->mptw_top__DOT__issue_stage_master_data
              [0U][8U]));
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__issue_stage_master_data
                                    [0U][1U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__issue_stage_master_data
                                     [0U][0U]))));
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__issue_stage_master_data
                                     [0U][1U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__issue_stage_master_data
                                      [0U][0U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__issue_stage_master_data
                                    [0U][3U])) << 0x20U) 
                   | (QData)((IData)(vlTOPp->mptw_top__DOT__issue_stage_master_data
                                     [0U][2U]))));
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__issue_stage_master_data
                                     [0U][3U])) << 0x20U) 
                    | (QData)((IData)(vlTOPp->mptw_top__DOT__issue_stage_master_data
                                      [0U][2U]))) >> 0x20U));
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__issue_stage_master_data
              [0U][4U]));
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[6U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                       [0U][8U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                        [0U][7U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                        [0U][6U])) 
                                        >> 4U)))) << 4U)));
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[7U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__issue_stage_master_data
                                              [0U][8U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                            [0U][7U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                              [0U][6U])) 
                                              >> 4U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                                            [0U][8U])) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                                               [0U][7U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                                                [0U][6U])) 
                                                                 >> 4U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[8U] 
        = ((0x7ffff0U & vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[8U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                 [0U][8U])) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                               [0U][7U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                                 [0U][6U])) 
                                                 >> 4U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[8U] 
        = ((0x7ffdffU & vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[8U]) 
           | (0x200U & vlTOPp->mptw_top__DOT__issue_stage_master_data
              [0U][8U]));
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[4U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[4U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                       [0U][6U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                        [0U][5U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                        [0U][4U])) 
                                        >> 4U)))) << 4U)));
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[5U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__issue_stage_master_data
                                              [0U][6U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                            [0U][5U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                              [0U][4U])) 
                                              >> 4U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                                            [0U][6U])) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                                               [0U][5U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                                                [0U][4U])) 
                                                                 >> 4U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[6U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                 [0U][6U])) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                               [0U][5U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__issue_stage_master_data
                                                                 [0U][4U])) 
                                                 >> 4U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[8U] 
        = ((0x7fffefU & vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[8U]) 
           | (0x10U & vlTOPp->mptw_top__DOT__issue_stage_master_data
              [0U][8U]));
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[4U]) 
           | (0xcU & vlTOPp->mptw_top__DOT__issue_stage_master_data
              [0U][4U]));
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[8U] 
        = ((0x7fff1fU & vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[8U]) 
           | (0xe0U & vlTOPp->mptw_top__DOT__issue_stage_master_data
              [0U][8U]));
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[8U] 
        = ((0x7ffeffU & vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[8U]) 
           | (0x100U & vlTOPp->mptw_top__DOT__issue_stage_master_data
              [0U][8U]));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__mpte_permissions = 0U;
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data
         [4U][4U])) {
        __Vtemp178[0U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [4U][0U];
        __Vtemp178[1U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [4U][1U];
        __Vtemp178[2U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [4U][2U];
        __Vtemp178[3U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [4U][3U];
        __Vtemp178[4U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [4U][4U];
        __Vtemp178[5U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [4U][5U];
        __Vtemp178[6U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [4U][6U];
        __Vtemp178[7U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [4U][7U];
        __Vtemp178[8U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [4U][8U];
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0x8eU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp178[((IData)(1U) 
                                               + (((IData)(0x8eU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset)))) 
                                                  >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x8eU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset)))))))) 
                         | (__Vtemp178[(((IData)(0x8eU) 
                                         + (0x3fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset)))) 
                                        >> 5U)] >> 
                            (0x1fU & ((IData)(0x8eU) 
                                      + (0x3fU & ((IData)(3U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset))))))))
                : 0U);
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = 0U;
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data
         [0U][4U])) {
        __Vtemp180[0U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [0U][0U];
        __Vtemp180[1U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [0U][1U];
        __Vtemp180[2U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [0U][2U];
        __Vtemp180[3U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [0U][3U];
        __Vtemp180[4U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [0U][4U];
        __Vtemp180[5U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [0U][5U];
        __Vtemp180[6U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [0U][6U];
        __Vtemp180[7U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [0U][7U];
        __Vtemp180[8U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [0U][8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0x8eU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp180[((IData)(1U) 
                                               + (((IData)(0x8eU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                                  >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x8eU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))))) 
                         | (__Vtemp180[(((IData)(0x8eU) 
                                         + (0x3fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                        >> 5U)] >> 
                            (0x1fU & ((IData)(0x8eU) 
                                      + (0x3fU & ((IData)(3U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))))
                : 0U);
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = 0U;
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data
         [1U][4U])) {
        __Vtemp182[0U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [1U][0U];
        __Vtemp182[1U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [1U][1U];
        __Vtemp182[2U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [1U][2U];
        __Vtemp182[3U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [1U][3U];
        __Vtemp182[4U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [1U][4U];
        __Vtemp182[5U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [1U][5U];
        __Vtemp182[6U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [1U][6U];
        __Vtemp182[7U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [1U][7U];
        __Vtemp182[8U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [1U][8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0x8eU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp182[((IData)(1U) 
                                               + (((IData)(0x8eU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                                  >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x8eU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))))) 
                         | (__Vtemp182[(((IData)(0x8eU) 
                                         + (0x3fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                        >> 5U)] >> 
                            (0x1fU & ((IData)(0x8eU) 
                                      + (0x3fU & ((IData)(3U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))))
                : 0U);
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = 0U;
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data
         [2U][4U])) {
        __Vtemp184[0U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [2U][0U];
        __Vtemp184[1U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [2U][1U];
        __Vtemp184[2U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [2U][2U];
        __Vtemp184[3U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [2U][3U];
        __Vtemp184[4U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [2U][4U];
        __Vtemp184[5U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [2U][5U];
        __Vtemp184[6U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [2U][6U];
        __Vtemp184[7U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [2U][7U];
        __Vtemp184[8U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [2U][8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0x8eU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp184[((IData)(1U) 
                                               + (((IData)(0x8eU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                                  >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x8eU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))))) 
                         | (__Vtemp184[(((IData)(0x8eU) 
                                         + (0x3fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                        >> 5U)] >> 
                            (0x1fU & ((IData)(0x8eU) 
                                      + (0x3fU & ((IData)(3U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))))
                : 0U);
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = 0U;
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data
         [3U][4U])) {
        __Vtemp186[0U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [3U][0U];
        __Vtemp186[1U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [3U][1U];
        __Vtemp186[2U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [3U][2U];
        __Vtemp186[3U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [3U][3U];
        __Vtemp186[4U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [3U][4U];
        __Vtemp186[5U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [3U][5U];
        __Vtemp186[6U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [3U][6U];
        __Vtemp186[7U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [3U][7U];
        __Vtemp186[8U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [3U][8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0x8eU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp186[((IData)(1U) 
                                               + (((IData)(0x8eU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                                  >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x8eU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))))) 
                         | (__Vtemp186[(((IData)(0x8eU) 
                                         + (0x3fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                        >> 5U)] >> 
                            (0x1fU & ((IData)(0x8eU) 
                                      + (0x3fU & ((IData)(3U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))))
                : 0U);
    }
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[4U] 
        = ((3U & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & ((0xfffffff0U & ((IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr) 
                                             << 4U)) 
                             | (0xcU & vlTOPp->mptw_top__DOT__walking_stage_data
                                [4U][4U]))));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[5U] 
        = ((3U & ((IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr) 
                  >> 0x1cU)) | (0xfffffffcU & ((0xcU 
                                                & ((IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr) 
                                                   >> 0x1cU)) 
                                               | (0xfffffff0U 
                                                  & ((IData)(
                                                             (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr 
                                                              >> 0x20U)) 
                                                     << 4U)))));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[6U]) 
           | ((3U & ((IData)((vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr 
                              >> 0x20U)) >> 0x1cU)) 
              | (0xcU & ((IData)((vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr 
                                  >> 0x20U)) >> 0x1cU))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & ((0xfffffff0U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                                             << 4U)) 
                             | (0xcU & vlTOPp->mptw_top__DOT__walking_stage_data
                                [0U][4U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = ((3U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                  >> 0x1cU)) | (0xfffffffcU & ((0xcU 
                                                & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                                                   >> 0x1cU)) 
                                               | (0xfffffff0U 
                                                  & ((IData)(
                                                             (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                                              >> 0x20U)) 
                                                     << 4U)))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | ((3U & ((IData)((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                              >> 0x20U)) >> 0x1cU)) 
              | (0xcU & ((IData)((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                  >> 0x20U)) >> 0x1cU))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & ((0xfffffff0U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                                             << 4U)) 
                             | (0xcU & vlTOPp->mptw_top__DOT__walking_stage_data
                                [1U][4U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = ((3U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                  >> 0x1cU)) | (0xfffffffcU & ((0xcU 
                                                & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                                                   >> 0x1cU)) 
                                               | (0xfffffff0U 
                                                  & ((IData)(
                                                             (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                                              >> 0x20U)) 
                                                     << 4U)))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | ((3U & ((IData)((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                              >> 0x20U)) >> 0x1cU)) 
              | (0xcU & ((IData)((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                  >> 0x20U)) >> 0x1cU))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & ((0xfffffff0U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                                             << 4U)) 
                             | (0xcU & vlTOPp->mptw_top__DOT__walking_stage_data
                                [2U][4U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = ((3U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                  >> 0x1cU)) | (0xfffffffcU & ((0xcU 
                                                & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                                                   >> 0x1cU)) 
                                               | (0xfffffff0U 
                                                  & ((IData)(
                                                             (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                                              >> 0x20U)) 
                                                     << 4U)))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | ((3U & ((IData)((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                              >> 0x20U)) >> 0x1cU)) 
              | (0xcU & ((IData)((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                  >> 0x20U)) >> 0x1cU))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & ((0xfffffff0U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                                             << 4U)) 
                             | (0xcU & vlTOPp->mptw_top__DOT__walking_stage_data
                                [3U][4U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = ((3U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                  >> 0x1cU)) | (0xfffffffcU & ((0xcU 
                                                & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                                                   >> 0x1cU)) 
                                               | (0xfffffff0U 
                                                  & ((IData)(
                                                             (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                                              >> 0x20U)) 
                                                     << 4U)))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | ((3U & ((IData)((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                              >> 0x20U)) >> 0x1cU)) 
              | (0xcU & ((IData)((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                  >> 0x20U)) >> 0x1cU))));
    if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__next_state 
                = (vlTOPp->mptw_top__DOT__walking_stage_valid
                   [4U] | vlTOPp->mptw_top__DOT__walking_stage_valid
                   [4U]);
        }
    } else {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__walking_stage_valid
            [4U];
    }
    if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ vlTOPp->mptw_top__DOT__walking_stage_valid
                       [4U]))) {
                if (vlTOPp->mptw_top__DOT__walking_stage_valid
                    [4U]) {
                    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_valid
        [1U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_valid
        [0U];
    vlTOPp->mptw_top__DOT__issue_stage_master_valid[1U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_valid
        [1U];
    vlTOPp->mptw_top__DOT__issue_stage_master_valid[0U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_valid
        [0U];
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
            if (vlTOPp->mptw_top__DOT__walking_stage_valid
                [4U]) {
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[0U];
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[1U];
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[2U];
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[3U];
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[4U];
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[5U];
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[6U];
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[7U];
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__walking_stage_valid
            [4U]) {
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[0U];
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[1U];
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[2U];
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[3U];
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[4U];
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[5U];
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[6U];
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[7U];
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U];
        }
    }
    vlTOPp->mptw_top__DOT__walking_stage_ready[4U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_valid = 0U;
    if ((0U == (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_push_status_q))) {
        if ((vlTOPp->mptw_top__DOT__issue_stage_master_valid
             [0U] & (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_ready))) {
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_valid = 1U;
        }
    }
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_push = 0U;
    if ((0U == (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_push_status_q))) {
        if ((vlTOPp->mptw_top__DOT__issue_stage_master_valid
             [0U] & (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_ready))) {
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_push = 1U;
        }
    }
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_next_valid_id_d 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_next_valid_id_q;
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[8U] 
        = (0x7ff800U | vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[8U]);
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[0U] = 0U;
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[1U] = 0U;
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[2U] = 0U;
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[3U] = 0U;
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[4U] = 0U;
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[5U] = 0U;
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[6U] = 0U;
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[7U] = 0U;
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[8U] = 0U;
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_data_in = 0U;
    if ((0U == (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_push_status_q))) {
        if ((vlTOPp->mptw_top__DOT__issue_stage_master_valid
             [0U] & (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_ready))) {
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[8U] 
                = ((0x7ffU & vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[8U]) 
                   | (0xfffff800U & ((IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_next_valid_id_d) 
                                     << 0xbU)));
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_next_valid_id_d 
                = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_next_valid_id_q)));
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[0U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[0U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[1U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[1U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[2U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[2U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[3U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[3U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[4U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[4U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[5U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[5U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[6U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[6U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[7U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[7U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[8U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[8U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_data_in 
                = (0xfffU & (vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction[8U] 
                             >> 0xbU));
        }
    }
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_push) 
         & (0x20U != (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__gate_clock = 0U;
    }
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_n 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_push) 
         & (0x20U != (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_n 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q;
    if (((IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_push) 
         & (0x20U != (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_push) 
           & (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_pop)) 
          & (0x20U != (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_n 
            = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q;
    }
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0U];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[1U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[1U];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[2U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[2U];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[3U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[3U];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[4U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[4U];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[5U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[5U];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[6U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[6U];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[7U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[7U];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[8U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[8U];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[9U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[9U];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xaU] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xaU];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xbU] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xbU];
    if (((IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_push) 
         & (0x20U != (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT____Vlvbound1 
            = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_data_in;
        if ((0x17fU >= (0x1ffU & ((IData)(0xcU) * (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIII(12,(0x1ffU & ((IData)(0xcU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT____Vlvbound1);
        }
    }
}

void Vmptw_top::_settle__TOP__2(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_settle__TOP__2\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->plb_master_mem_addr = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->plb_master_mem_req = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U] 
        = ((0x7ffbffU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U]) 
           | (0x400U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U] 
        = ((0x7ffU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U]) 
           | (0x7ff800U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[0U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[0U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[1U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[1U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[2U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[2U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[3U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[3U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[4U] 
        = ((0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U]) 
           | ((0xfffffffcU & ((((0U != (7U & (vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U] 
                                              >> 5U))) 
                                | ((vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U] 
                                    >> 9U) & (0U != 
                                              (((QData)((IData)(
                                                                vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U])) 
                                                << 0x3cU) 
                                               | (((QData)((IData)(
                                                                   vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U])) 
                                                     >> 4U))))))
                                ? 3U : (3U & ((vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U] 
                                               << 0x1eU) 
                                              | (vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U] 
                                                 >> 2U)))) 
                              << 2U)) | (3U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U])));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[5U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[6U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[7U] 
        = ((0xfU & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U]) 
           | (0xfffffff0U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U] 
        = ((0x7ffc00U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U]) 
           | ((0x3e0U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U]) 
              | ((0xfffffff0U & ((IData)((0U != (((QData)((IData)(
                                                                  vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U])) 
                                                       >> 4U))))) 
                                 << 4U)) | (0xfU & 
                                            vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U]))));
    vlTOPp->mptw_top__DOT__issue_stage_master_ready[1U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_slave_ready;
    vlTOPp->walking_mem_master_mem_addr[0U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[0U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT__walking_stage_valid
                          [0U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)) 
                         | (~ ((~ vlTOPp->mptw_top__DOT__walking_stage_valid
                                [0U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__walking_stage_valid
            [0U];
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
            if ((vlTOPp->mptw_top__DOT__walking_stage_valid
                 [0U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))) {
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
        if (vlTOPp->mptw_top__DOT__walking_stage_valid
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
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_valid
                          [0U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT__walking_stage_valid
                               [0U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->walking_mem_master_mem_addr[1U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[1U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT__walking_stage_valid
                          [1U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)) 
                         | (~ ((~ vlTOPp->mptw_top__DOT__walking_stage_valid
                                [1U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__walking_stage_valid
            [1U];
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
            if ((vlTOPp->mptw_top__DOT__walking_stage_valid
                 [1U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))) {
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
        if (vlTOPp->mptw_top__DOT__walking_stage_valid
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
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_valid
                          [1U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT__walking_stage_valid
                               [1U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->walking_mem_master_mem_addr[2U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[2U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT__walking_stage_valid
                          [2U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)) 
                         | (~ ((~ vlTOPp->mptw_top__DOT__walking_stage_valid
                                [2U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__walking_stage_valid
            [2U];
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
            if ((vlTOPp->mptw_top__DOT__walking_stage_valid
                 [2U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))) {
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
        if (vlTOPp->mptw_top__DOT__walking_stage_valid
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
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_valid
                          [2U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT__walking_stage_valid
                               [2U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->walking_mem_master_mem_addr[3U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[3U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((vlTOPp->mptw_top__DOT__walking_stage_valid
                          [3U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)) 
                         | (~ ((~ vlTOPp->mptw_top__DOT__walking_stage_valid
                                [3U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__walking_stage_valid
            [3U];
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
            if ((vlTOPp->mptw_top__DOT__walking_stage_valid
                 [3U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))) {
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
        if (vlTOPp->mptw_top__DOT__walking_stage_valid
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
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_valid
                          [3U] & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                if ((1U & (~ ((~ vlTOPp->mptw_top__DOT__walking_stage_valid
                               [3U]) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_ready
        [1U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_ready
        [0U];
    vlTOPp->mptw_top__DOT__walking_stage_ready[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT__walking_stage_ready[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT__walking_stage_ready[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT__walking_stage_ready[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
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
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_stage_ready
                          [0U])))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlTOPp->mptw_top__DOT__walking_stage_ready
                              [0U])))) {
                    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_stage_ready
                          [1U])))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlTOPp->mptw_top__DOT__walking_stage_ready
                              [1U])))) {
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
                          & vlTOPp->mptw_top__DOT__walking_stage_ready
                          [2U])))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlTOPp->mptw_top__DOT__walking_stage_ready
                              [2U])))) {
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
                          & vlTOPp->mptw_top__DOT__walking_stage_ready
                          [3U])))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlTOPp->mptw_top__DOT__walking_stage_ready
                              [3U])))) {
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
                          & vlTOPp->mptw_top__DOT__walking_stage_ready
                          [4U])))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & vlTOPp->mptw_top__DOT__walking_stage_ready
                              [4U])))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_stage_ready
                          [0U]) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                      & vlTOPp->mptw_top__DOT__walking_stage_ready
                                      [0U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_stage_ready
                          [1U]) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                      & vlTOPp->mptw_top__DOT__walking_stage_ready
                                      [1U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_stage_ready
                          [2U]) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                      & vlTOPp->mptw_top__DOT__walking_stage_ready
                                      [2U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_stage_ready
                          [3U]) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                      & vlTOPp->mptw_top__DOT__walking_stage_ready
                                      [3U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & vlTOPp->mptw_top__DOT__walking_stage_ready
                          [4U]) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                      & vlTOPp->mptw_top__DOT__walking_stage_ready
                                      [4U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & vlTOPp->mptw_top__DOT__walking_stage_ready
                 [0U])) {
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[0U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[1U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[2U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[3U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[4U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[5U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[6U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[7U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U];
            }
        }
    } else {
        if (vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[0U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[1U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[2U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[3U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[4U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[5U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[6U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[7U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U];
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
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & vlTOPp->mptw_top__DOT__walking_stage_ready
                 [1U])) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U];
            }
        }
    } else {
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U];
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
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & vlTOPp->mptw_top__DOT__walking_stage_ready
                 [2U])) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U];
            }
        }
    } else {
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U];
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
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & vlTOPp->mptw_top__DOT__walking_stage_ready
                 [3U])) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U];
            }
        }
    } else {
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U];
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            if (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                 & vlTOPp->mptw_top__DOT__walking_stage_ready
                 [4U])) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U];
            }
        }
    } else {
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U];
        }
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
    if (vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                          & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                          [1U])))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_valid)) 
                              & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                              [1U])))) {
                    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_transaction_valid_i) 
                          & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                          [0U]) | (~ ((~ (IData)(vlTOPp->mptw_transaction_valid_i)) 
                                      & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                                      [0U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state 
            = vlTOPp->mptw_transaction_valid_i;
    }
    if (vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                          & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                          [1U]) | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_valid)) 
                                      & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                                      [1U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_valid;
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
            if (((IData)(vlTOPp->mptw_transaction_valid_i) 
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
        if (vlTOPp->mptw_transaction_valid_i) {
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
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_valid) 
                 & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                 [1U])) {
                vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[0U];
                vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[1U];
                vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[2U];
                vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[3U];
                vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[4U];
                vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[5U];
                vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[6U];
                vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[7U];
                vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[8U];
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_valid) {
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[0U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[1U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[2U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[3U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[4U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[5U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[6U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[7U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data[8U];
        }
    }
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_transaction_valid_i) 
                          & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                          [0U])))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_transaction_valid_i)) 
                              & vlTOPp->mptw_top__DOT__issue_stage_slave_ready
                              [0U])))) {
                    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->mptw_ready_o = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready;
}

void Vmptw_top::_initial__TOP__3(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_initial__TOP__3\n"); );
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
    vlTOPp->_initial__TOP__3(vlSymsp);
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
    vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__1(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__2(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__3(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__4(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u._settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__5(vlSymsp);
    vlTOPp->_settle__TOP__2(vlSymsp);
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
    mptw_transaction_valid_o = VL_RAND_RESET_I(1);
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
    VL_RAND_RESET_W(279, mptw_top__DOT__input_transaction);
    mptw_top__DOT__fetch_to_issue_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_to_walking_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            VL_RAND_RESET_W(279, mptw_top__DOT__walking_stage_data[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            mptw_top__DOT__walking_stage_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            mptw_top__DOT__walking_stage_ready[__Vi0] = VL_RAND_RESET_I(1);
    }}
    mptw_top__DOT__backend_to_issue_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__retire_to_commit_data);
    mptw_top__DOT__retire_to_commit_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__retire_to_commit_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__commit_to_output_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__fetch_pipe_status_busy = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_pipe_status_busy = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            VL_RAND_RESET_W(279, mptw_top__DOT__issue_stage_slave_data[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            mptw_top__DOT__issue_stage_slave_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            mptw_top__DOT__issue_stage_slave_ready[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            VL_RAND_RESET_W(279, mptw_top__DOT__issue_stage_master_data[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            mptw_top__DOT__issue_stage_master_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            mptw_top__DOT__issue_stage_master_ready[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            mptw_top__DOT____Vcellout__issue_stage_u__stage_master_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            VL_RAND_RESET_W(279, mptw_top__DOT____Vcellout__issue_stage_u__stage_master_data[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            mptw_top__DOT____Vcellout__issue_stage_u__stage_slave_ready[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            VL_RAND_RESET_W(279, mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_data[__Vi0]);
    }}
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__fetch_stage_u__DOT__output_transaction);
    mptw_top__DOT__fetch_stage_u__DOT__format_error = VL_RAND_RESET_I(3);
    mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(279, mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d);
    mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__dummy = VL_RAND_RESET_I(1);
    mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(279, mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d);
    mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__dummy = VL_RAND_RESET_I(1);
    mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(279, mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d);
    mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__dummy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction);
    VL_RAND_RESET_W(72, mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req);
    mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q);
    VL_RAND_RESET_W(279, mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d);
    mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__dummy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__retire_stage_u__DOT__to_issue_transaction);
    mptw_top__DOT__retire_stage_u__DOT__rob_push_status_q = VL_RAND_RESET_I(2);
    mptw_top__DOT__retire_stage_u__DOT__rob_push_status_d = VL_RAND_RESET_I(2);
    mptw_top__DOT__retire_stage_u__DOT__rob_next_valid_id_q = VL_RAND_RESET_I(6);
    mptw_top__DOT__retire_stage_u__DOT__rob_next_valid_id_d = VL_RAND_RESET_I(6);
    mptw_top__DOT__retire_stage_u__DOT__rob_fifo_push = VL_RAND_RESET_I(1);
    mptw_top__DOT__retire_stage_u__DOT__rob_fifo_pop = VL_RAND_RESET_I(1);
    mptw_top__DOT__retire_stage_u__DOT__rob_fifo_data_in = VL_RAND_RESET_I(12);
    mptw_top__DOT__retire_stage_u__DOT__from_issue_bus_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_data);
    mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__gate_clock = VL_RAND_RESET_I(1);
    mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_n = VL_RAND_RESET_I(5);
    mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q = VL_RAND_RESET_I(5);
    mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_n = VL_RAND_RESET_I(5);
    mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q = VL_RAND_RESET_I(5);
    mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_n = VL_RAND_RESET_I(6);
    mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(384, mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n);
    VL_RAND_RESET_W(384, mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q);
    mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT____Vlvbound1 = VL_RAND_RESET_I(12);
    mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(279, mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d);
    mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__dummy = VL_RAND_RESET_I(1);
    mptw_top__DOT__commit_stage_u__DOT__format_error_cause_o = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(279, mptw_top__DOT__commit_stage_u__DOT__output_transaction);
    mptw_top__DOT__commit_stage_u__DOT__mpte_permissions = VL_RAND_RESET_I(3);
    mptw_top__DOT__commit_stage_u__DOT__spa_current_page_number = VL_RAND_RESET_I(9);
    mptw_top__DOT__commit_stage_u__DOT__base_phyisical_address = VL_RAND_RESET_Q(64);
    mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr = VL_RAND_RESET_Q(64);
    mptw_top__DOT__commit_stage_u__DOT__range_offset = VL_RAND_RESET_I(4);
    mptw_top__DOT__commit_stage_u__DOT__slave_to_reg_bus_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(279, mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d);
    mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__dummy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o = VL_RAND_RESET_I(3);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = VL_RAND_RESET_I(3);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = VL_RAND_RESET_I(9);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = VL_RAND_RESET_Q(64);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = VL_RAND_RESET_Q(64);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset = VL_RAND_RESET_I(4);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__dummy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d);
    mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__dummy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o = VL_RAND_RESET_I(3);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = VL_RAND_RESET_I(3);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = VL_RAND_RESET_I(9);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = VL_RAND_RESET_Q(64);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = VL_RAND_RESET_Q(64);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset = VL_RAND_RESET_I(4);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__dummy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d);
    mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__dummy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o = VL_RAND_RESET_I(3);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = VL_RAND_RESET_I(3);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = VL_RAND_RESET_I(9);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = VL_RAND_RESET_Q(64);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = VL_RAND_RESET_Q(64);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset = VL_RAND_RESET_I(4);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__dummy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d);
    mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__dummy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__format_error_cause_o = VL_RAND_RESET_I(3);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = VL_RAND_RESET_I(3);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = VL_RAND_RESET_I(9);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = VL_RAND_RESET_Q(64);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = VL_RAND_RESET_Q(64);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset = VL_RAND_RESET_I(4);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__dummy = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = VL_RAND_RESET_I(1);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q);
    VL_RAND_RESET_W(279, mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d);
    mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__dummy = VL_RAND_RESET_I(1);
    __Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = VL_RAND_RESET_I(1);
    __Vchglast__TOP__mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_ready = VL_RAND_RESET_I(1);
    __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    __Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
