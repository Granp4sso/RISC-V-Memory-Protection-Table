// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmptw_top.h for the primary calling header

#include "Vmptw_top.h"
#include "Vmptw_top__Syms.h"

//==========

void Vmptw_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmptw_top::eval\n"); );
    Vmptw_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/stefano/Desktop/Work/Projects/smmtt/b_pipelining_2/rtl/mptw_top.sv", 23, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmptw_top::_eval_initial_loop(Vmptw_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/stefano/Desktop/Work/Projects/smmtt/b_pipelining_2/rtl/mptw_top.sv", 23, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vmptw_top::_sequent__TOP__4(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_sequent__TOP__4\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state) 
               & 1U);
    } else {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state = 0U;
    }
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__commit_to_output_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__commit_to_output_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 0U;
    }
    vlTOPp->mptw_top__DOT__walking_stage_data[0x18U] 
        = ((0x3fffffffU & vlTOPp->mptw_top__DOT__walking_stage_data[0x18U]) 
           | (0xc0000000U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                             << 0x1eU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x19U] 
        = ((0x3fffffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                           >> 2U)) | (0xc0000000U & 
                                      (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                                       << 0x1eU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU] 
        = ((0x3fffffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                           >> 2U)) | (0xc0000000U & 
                                      (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                                       << 0x1eU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU] 
        = ((0x3fffffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                           >> 2U)) | (0xc0000000U & 
                                      (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                                       << 0x1eU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x1cU] 
        = ((0x3fffffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                           >> 2U)) | (0xc0000000U & 
                                      (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                                       << 0x1eU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU] 
        = ((0x3fffffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                           >> 2U)) | (0xc0000000U & 
                                      (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                                       << 0x1eU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x1eU] 
        = ((0x3fffffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                           >> 2U)) | (0xc0000000U & 
                                      (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                                       << 0x1eU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x1fU] 
        = ((0x3fffffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                           >> 2U)) | (0xc0000000U & 
                                      (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                                       << 0x1eU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x20U] 
        = ((0x3fffffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                           >> 2U)) | (0xc0000000U & 
                                      (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                                       << 0x1eU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x21U] 
        = (0x3fffffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                          >> 2U));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
        = ((0xfffffU & vlTOPp->mptw_top__DOT__walking_stage_data[0x10U]) 
           | (0xfff00000U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                             << 0x14U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
        = ((0xfffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                                      << 0x14U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
        = ((0xfffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                                      << 0x14U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
        = ((0xfffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                                      << 0x14U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
        = ((0xfffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                                      << 0x14U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x15U] 
        = ((0xfffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                                      << 0x14U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x16U] 
        = ((0xfffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                                      << 0x14U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x17U] 
        = ((0xfffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                                      << 0x14U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x18U] 
        = ((0xc0000000U & vlTOPp->mptw_top__DOT__walking_stage_data[0x18U]) 
           | ((0xfffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                           >> 0xcU)) | (0xfff00000U 
                                        & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                                           << 0x14U))));
    vlTOPp->mptw_top__DOT__walking_stage_data[8U] = 
        ((0x3ffU & vlTOPp->mptw_top__DOT__walking_stage_data[8U]) 
         | (0xfffffc00U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                           << 0xaU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[9U] = 
        ((0x3ffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                    >> 0x16U)) | (0xfffffc00U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                                                 << 0xaU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
        = ((0x3ffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                      >> 0x16U)) | (0xfffffc00U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                                                   << 0xaU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
        = ((0x3ffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                      >> 0x16U)) | (0xfffffc00U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                                                   << 0xaU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
        = ((0x3ffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                      >> 0x16U)) | (0xfffffc00U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                                                   << 0xaU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
        = ((0x3ffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                      >> 0x16U)) | (0xfffffc00U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                                                   << 0xaU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
        = ((0x3ffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                      >> 0x16U)) | (0xfffffc00U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                                                   << 0xaU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
        = ((0x3ffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                      >> 0x16U)) | (0xfffffc00U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                                                   << 0xaU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
        = ((0xfff00000U & vlTOPp->mptw_top__DOT__walking_stage_data[0x10U]) 
           | ((0x3ffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                         >> 0x16U)) | (0xfffffc00U 
                                       & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                                          << 0xaU))));
    vlTOPp->mptw_top__DOT__walking_stage_data[0U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__walking_stage_data[1U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__walking_stage_data[2U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__walking_stage_data[3U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__walking_stage_data[4U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__walking_stage_data[5U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__walking_stage_data[6U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__walking_stage_data[7U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__walking_stage_data[8U] = 
        ((0xfffffc00U & vlTOPp->mptw_top__DOT__walking_stage_data[8U]) 
         | vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U]);
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_valid = 0U;
    }
    vlTOPp->mptw_transaction_valid_o = vlTOPp->mptw_top__DOT__commit_to_output_valid;
    if ((8U & vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU])) {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU] 
                             << 6U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU] 
                                       >> 0x1aU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU] 
                                 << 6U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU] 
                                           >> 0x1aU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU] 
                                     << 6U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU] 
                                               >> 0x1aU))))) {
                    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    } else {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU] 
                             << 6U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU] 
                                       >> 0x1aU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU] 
                                 << 6U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU] 
                                           >> 0x1aU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU] 
                                     << 6U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU] 
                                               >> 0x1aU))))) {
                    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    }
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__format_error_cause_o = 0U;
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data[4U])) {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                             << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                       >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                 << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                           >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                     << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                               >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    } else {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                             << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                       >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                 << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                           >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                     << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                               >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 0U;
    if ((0x8000U & vlTOPp->mptw_top__DOT__walking_stage_data[0xcU])) {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                             << 0x1aU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                          >> 6U))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                 << 0x1aU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                              >> 6U))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                     << 0x1aU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                                  >> 6U))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    } else {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                             << 0x1aU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                          >> 6U))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                 << 0x1aU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                              >> 6U))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                     << 0x1aU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                                  >> 6U))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 0U;
    if ((0x2000000U & vlTOPp->mptw_top__DOT__walking_stage_data[0x14U])) {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                             << 0x10U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                          >> 0x10U))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                 << 0x10U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                              >> 0x10U))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                     << 0x10U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                                  >> 0x10U))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    } else {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                             << 0x10U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                          >> 0x10U))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                 << 0x10U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                              >> 0x10U))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                     << 0x10U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                                  >> 0x10U))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 0U;
    if ((8U & vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU])) {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset 
            = ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU] 
                                << 6U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU] 
                                          >> 0x1aU))))
                ? (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1cU] 
                            << 0x16U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU] 
                                         >> 0xaU)))
                : 0U);
    }
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data[4U])) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset 
            = ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                          >> 0x1cU))))
                ? 0U : (0xfU & ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                                 << 4U) 
                                                | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                                   >> 0x1cU))))
                                 ? ((vlTOPp->mptw_top__DOT__walking_stage_data[4U] 
                                     << 0x19U) | (vlTOPp->mptw_top__DOT__walking_stage_data[3U] 
                                                  >> 7U))
                                 : ((3U == (0xfU & 
                                            ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                              << 4U) 
                                             | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                                >> 0x1cU))))
                                     ? ((vlTOPp->mptw_top__DOT__walking_stage_data[4U] 
                                         << 0x19U) 
                                        | (vlTOPp->mptw_top__DOT__walking_stage_data[3U] 
                                           >> 7U)) : 0U))));
    }
    if ((0x8000U & vlTOPp->mptw_top__DOT__walking_stage_data[0xcU])) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset 
            = (0xfU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                        << 0x1aU) | 
                                       (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                        >> 6U)))) ? 
                       ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                         << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                      >> 8U)) : ((2U 
                                                  == 
                                                  (0xfU 
                                                   & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                                       << 0x1aU) 
                                                      | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                                         >> 6U))))
                                                  ? 
                                                 ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                                   << 0x18U) 
                                                  | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                                     >> 8U))
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0xfU 
                                                    & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                                        << 0x1aU) 
                                                       | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                                          >> 6U))))
                                                   ? 
                                                  ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                                    << 0x18U) 
                                                   | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                                      >> 8U))
                                                   : 0U))));
    }
    if ((0x2000000U & vlTOPp->mptw_top__DOT__walking_stage_data[0x14U])) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset 
            = (0xfU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                        << 0x10U) | 
                                       (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                        >> 0x10U))))
                        ? ((vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                            << 0x17U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                         >> 9U)) : 
                       ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                         << 0x10U) 
                                        | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                           >> 0x10U))))
                         ? ((vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                             << 0x17U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                          >> 9U)) : 
                        ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                          << 0x10U) 
                                         | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                            >> 0x10U))))
                          ? ((vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                              << 0x17U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                           >> 9U)) : 0U))));
    }
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU])) 
                    << 0x22U) | (((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x19U])) 
                                  << 2U) | ((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data[0x18U])) 
                                            >> 0x1eU))));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU])) 
                     << 0x22U) | (((QData)((IData)(
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[0x19U])) 
                                   << 2U) | ((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__walking_stage_data[0x18U])) 
                                             >> 0x1eU))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x1cU])) 
                    << 0x22U) | (((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU])) 
                                  << 2U) | ((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU])) 
                                            >> 0x1eU))));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x1cU])) 
                     << 0x22U) | (((QData)((IData)(
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU])) 
                                   << 2U) | ((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU])) 
                                             >> 0x1eU))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[4U]) 
           | (3U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU] 
                     << 2U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1cU] 
                               >> 0x1eU))));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__walking_stage_data[0x21U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data[0x20U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data[0x1fU])) 
                                        >> 2U)))) << 4U)));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x21U])) 
                              << 0x3eU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data[0x20U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data[0x1fU])) 
                                              >> 2U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__walking_stage_data[0x21U])) 
                                                            << 0x3eU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0x20U])) 
                                                               << 0x1eU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__walking_stage_data[0x1fU])) 
                                                                 >> 2U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U] 
        = ((0x3f0U & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x21U])) 
                                 << 0x3eU) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0x20U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__walking_stage_data[0x1fU])) 
                                                 >> 2U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U] 
        = ((0x1ffU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & (vlTOPp->mptw_top__DOT__walking_stage_data[0x21U] 
                        << 2U)));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U] 
        = ((0x3efU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U]) 
           | (0x10U & (vlTOPp->mptw_top__DOT__walking_stage_data[0x21U] 
                       << 2U)));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U] 
        = ((0x31fU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x80U & vlTOPp->mptw_top__DOT__walking_stage_data[0x21U])
                               ? (7U & (vlTOPp->mptw_top__DOT__walking_stage_data[0x21U] 
                                        >> 3U)) : 0U) 
                             << 5U)));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U] 
        = ((0x2ffU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x21U] 
                         << 1U) & (vlTOPp->mptw_top__DOT__walking_stage_data[0x21U] 
                                   << 2U))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[1U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0U]))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[3U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[2U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[2U]))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__walking_stage_data[4U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__walking_stage_data[8U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data[7U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data[6U])) 
                                        >> 4U)))) << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[8U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data[7U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data[6U])) 
                                              >> 4U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__walking_stage_data[8U])) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__walking_stage_data[7U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__walking_stage_data[6U])) 
                                                                 >> 4U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x3f0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[8U])) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data[7U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__walking_stage_data[6U])) 
                                                 >> 4U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x1ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & vlTOPp->mptw_top__DOT__walking_stage_data[8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x3efU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x10U & vlTOPp->mptw_top__DOT__walking_stage_data[8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x31fU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x200U & vlTOPp->mptw_top__DOT__walking_stage_data[8U])
                               ? (7U & ((vlTOPp->mptw_top__DOT__walking_stage_data[9U] 
                                         << 0x1bU) 
                                        | (vlTOPp->mptw_top__DOT__walking_stage_data[8U] 
                                           >> 5U)))
                               : 0U) << 5U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x2ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__walking_stage_data[8U] 
                         >> 1U) & vlTOPp->mptw_top__DOT__walking_stage_data[8U])));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0xaU])) 
                    << 0x36U) | (((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[9U])) 
                                  << 0x16U) | ((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data[8U])) 
                                               >> 0xaU))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0xaU])) 
                     << 0x36U) | (((QData)((IData)(
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[9U])) 
                                   << 0x16U) | ((QData)((IData)(
                                                                vlTOPp->mptw_top__DOT__walking_stage_data[8U])) 
                                                >> 0xaU))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0xcU])) 
                    << 0x36U) | (((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0xbU])) 
                                  << 0x16U) | ((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0xaU])) 
                                               >> 0xaU))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0xcU])) 
                     << 0x36U) | (((QData)((IData)(
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[0xbU])) 
                                   << 0x16U) | ((QData)((IData)(
                                                                vlTOPp->mptw_top__DOT__walking_stage_data[0xaU])) 
                                                >> 0xaU))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (3U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                     << 0x16U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                  >> 0xaU))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__walking_stage_data[0x10U])) 
                                       << 0x32U) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data[0xfU])) 
                                        << 0x12U) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data[0xeU])) 
                                        >> 0xeU)))) 
                             << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x10U])) 
                              << 0x32U) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data[0xfU])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data[0xeU])) 
                                              >> 0xeU)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__walking_stage_data[0x10U])) 
                                                            << 0x32U) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0xfU])) 
                                                               << 0x12U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__walking_stage_data[0xeU])) 
                                                                 >> 0xeU))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x3f0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x10U])) 
                                 << 0x32U) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0xfU])) 
                                               << 0x12U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__walking_stage_data[0xeU])) 
                                                 >> 0xeU))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x1ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & (vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                        >> 0xaU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x3efU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x10U & (vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                       >> 0xaU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x31fU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x80000U & vlTOPp->mptw_top__DOT__walking_stage_data[0x10U])
                               ? (7U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
                                         << 0x11U) 
                                        | (vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                                           >> 0xfU)))
                               : 0U) << 5U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x2ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                         >> 0xbU) & (vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                                     >> 0xaU))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x12U])) 
                    << 0x2cU) | (((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x11U])) 
                                  << 0xcU) | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data[0x10U])) 
                                              >> 0x14U))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x12U])) 
                     << 0x2cU) | (((QData)((IData)(
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[0x11U])) 
                                   << 0xcU) | ((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0x10U])) 
                                               >> 0x14U))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x14U])) 
                    << 0x2cU) | (((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x13U])) 
                                  << 0xcU) | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data[0x12U])) 
                                              >> 0x14U))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x14U])) 
                     << 0x2cU) | (((QData)((IData)(
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[0x13U])) 
                                   << 0xcU) | ((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0x12U])) 
                                               >> 0x14U))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (3U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x15U] 
                     << 0xcU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                                 >> 0x14U))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__walking_stage_data[0x18U])) 
                                       << 0x28U) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data[0x17U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlTOPp->mptw_top__DOT__walking_stage_data[0x16U])) 
                                                  >> 0x18U)))) 
                             << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x18U])) 
                              << 0x28U) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data[0x17U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data[0x16U])) 
                                              >> 0x18U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__walking_stage_data[0x18U])) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0x17U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__walking_stage_data[0x16U])) 
                                                                 >> 0x18U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x3f0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x18U])) 
                                 << 0x28U) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0x17U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__walking_stage_data[0x16U])) 
                                                 >> 0x18U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x1ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & (vlTOPp->mptw_top__DOT__walking_stage_data[0x18U] 
                        >> 0x14U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x3efU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x10U & (vlTOPp->mptw_top__DOT__walking_stage_data[0x18U] 
                       >> 0x14U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x31fU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x20000000U & vlTOPp->mptw_top__DOT__walking_stage_data[0x18U])
                               ? (7U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x19U] 
                                         << 7U) | (
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[0x18U] 
                                                   >> 0x19U)))
                               : 0U) << 5U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x2ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x18U] 
                         >> 0x15U) & (vlTOPp->mptw_top__DOT__walking_stage_data[0x18U] 
                                      >> 0x14U))));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__spa_current_page_number = 0U;
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__base_phyisical_address = 0ULL;
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU] 
                  >> 3U)))) {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__base_phyisical_address 
            = (0xfffffffffffff000ULL & (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__walking_stage_data[0x1eU])) 
                                         << 0x20U) 
                                        | (0xfffffffffffff000ULL 
                                           & (QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU])))));
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__spa_current_page_number = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__base_phyisical_address;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = 0U;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = 0ULL;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data[4U] 
                  >> 5U)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
            = ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                          >> 0x1cU))))
                ? (0xfffffffffffff000ULL & (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__walking_stage_data[1U])) 
                                             << 0x2cU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0U])) 
                                               << 0xcU)))
                : (0xfffffffffffff000ULL & (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__walking_stage_data[6U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlTOPp->mptw_top__DOT__walking_stage_data[5U])) 
                                                << 0x1eU) 
                                               | (0x3ffffffffffff000ULL 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mptw_top__DOT__walking_stage_data[4U])) 
                                                     >> 2U))))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
            = (0x1ffU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                          << 4U) | 
                                         (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                          >> 0x1cU))))
                          ? ((vlTOPp->mptw_top__DOT__walking_stage_data[4U] 
                              << 0x1eU) | (vlTOPp->mptw_top__DOT__walking_stage_data[3U] 
                                           >> 2U)) : 
                         ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                           << 4U) | 
                                          (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                           >> 0x1cU))))
                           ? ((vlTOPp->mptw_top__DOT__walking_stage_data[4U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__walking_stage_data[3U] 
                                            >> 2U))
                           : ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                               << 4U) 
                                              | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                                 >> 0x1cU))))
                               ? ((vlTOPp->mptw_top__DOT__walking_stage_data[4U] 
                                   << 0x1eU) | (vlTOPp->mptw_top__DOT__walking_stage_data[3U] 
                                                >> 2U))
                               : 0U))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
            = (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
               + ((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number)) 
                  << 3U));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = 0U;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = 0ULL;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                  >> 0xfU)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
            = (0xfffffffffffff000ULL & (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__walking_stage_data[0xeU])) 
                                         << 0x34U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data[0xdU])) 
                                            << 0x14U) 
                                           | (0xffffffffff000ULL 
                                              & ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__walking_stage_data[0xcU])) 
                                                 >> 0xcU)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
            = (0x1ffU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                          << 0x1aU) 
                                         | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                            >> 6U))))
                          ? ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                              << 0x1dU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                           >> 3U)) : 
                         ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                           << 0x1aU) 
                                          | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                             >> 6U))))
                           ? ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                               << 0x1dU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                            >> 3U))
                           : ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                               << 0x1aU) 
                                              | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                                 >> 6U))))
                               ? ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                   << 0x1dU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                                >> 3U))
                               : 0U))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
            = (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
               + ((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number)) 
                  << 3U));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = 0U;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = 0ULL;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                  >> 0x19U)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
            = (0xfffffffffffff000ULL & (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__walking_stage_data[0x16U])) 
                                         << 0x2aU) 
                                        | (0xfffffffffffff000ULL 
                                           & ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data[0x15U])) 
                                              << 0xaU))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
            = (0x1ffU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                          << 0x10U) 
                                         | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                            >> 0x10U))))
                          ? ((vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                              << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                           >> 4U)) : 
                         ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                           << 0x10U) 
                                          | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                             >> 0x10U))))
                           ? ((vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                               << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                            >> 4U))
                           : ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                               << 0x10U) 
                                              | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                                 >> 0x10U))))
                               ? ((vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                                   << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                                >> 4U))
                               : 0U))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
            = (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
               + ((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number)) 
                  << 3U));
    }
    vlTOPp->mptw_top__DOT__walking_stage_valid = ((7U 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid) 
                                                     << 3U));
    vlTOPp->mptw_top__DOT__walking_stage_valid = ((0xbU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid) 
                                                     << 2U));
    vlTOPp->mptw_top__DOT__walking_stage_valid = ((0xdU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid) 
                                                     << 1U));
    vlTOPp->mptw_top__DOT__walking_stage_valid = ((0xeU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                                                  | (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_valid));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__mpte_permissions = 0U;
    if ((8U & vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU])) {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0x3acU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset))))))
                           ? 0U : (vlTOPp->mptw_top__DOT__walking_stage_data[
                                   ((IData)(1U) + (
                                                   ((IData)(0x3acU) 
                                                    + 
                                                    (0x3fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x3acU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset)))))))) 
                         | (vlTOPp->mptw_top__DOT__walking_stage_data[
                            (((IData)(0x3acU) + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset)))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x3acU) 
                                                  + 
                                                  (0x3fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset))))))))
                : 0U);
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = 0U;
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data[4U])) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0x8eU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (vlTOPp->mptw_top__DOT__walking_stage_data[
                                   ((IData)(1U) + (
                                                   ((IData)(0x8eU) 
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
                         | (vlTOPp->mptw_top__DOT__walking_stage_data[
                            (((IData)(0x8eU) + (0x3fU 
                                                & ((IData)(3U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x8eU) 
                                                  + 
                                                  (0x3fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))))
                : 0U);
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = 0U;
    if ((0x8000U & vlTOPp->mptw_top__DOT__walking_stage_data[0xcU])) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0x198U) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (vlTOPp->mptw_top__DOT__walking_stage_data[
                                   ((IData)(1U) + (
                                                   ((IData)(0x198U) 
                                                    + 
                                                    (0x3fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x198U) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))))) 
                         | (vlTOPp->mptw_top__DOT__walking_stage_data[
                            (((IData)(0x198U) + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x198U) 
                                                  + 
                                                  (0x3fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))))
                : 0U);
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = 0U;
    if ((0x2000000U & vlTOPp->mptw_top__DOT__walking_stage_data[0x14U])) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0x2a2U) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (vlTOPp->mptw_top__DOT__walking_stage_data[
                                   ((IData)(1U) + (
                                                   ((IData)(0x2a2U) 
                                                    + 
                                                    (0x3fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x2a2U) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))))) 
                         | (vlTOPp->mptw_top__DOT__walking_stage_data[
                            (((IData)(0x2a2U) + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x2a2U) 
                                                  + 
                                                  (0x3fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))))
                : 0U);
    }
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[4U] 
        = ((3U & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & ((0xfffffff0U & ((IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr) 
                                             << 4U)) 
                             | (0xcU & (vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU] 
                                        << 2U)))));
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
                             | (0xcU & vlTOPp->mptw_top__DOT__walking_stage_data[4U]))));
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
                             | (0xcU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                                         << 0x16U) 
                                        | (0x3ffffcU 
                                           & (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                              >> 0xaU)))))));
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
                             | (0xcU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x15U] 
                                         << 0xcU) | 
                                        (0xffcU & (
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                                                   >> 0x14U)))))));
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
    if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                         >> 3U));
        }
    } else {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__next_state 
            = (1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                     >> 3U));
    }
    if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                          >> 3U)))) {
                if ((8U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))) {
                    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
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
            if ((8U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))) {
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
        if ((8U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))) {
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
    vlTOPp->mptw_top__DOT__walking_stage_ready = ((7U 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__slave_to_reg_bus_ready) 
                                                     << 3U));
}

VL_INLINE_OPT void Vmptw_top::_sequent__TOP__5(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_sequent__TOP__5\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->plb_master_mem_addr = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->plb_master_mem_req = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->walking_mem_master_mem_addr[0U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[0U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->walking_mem_master_mem_addr[1U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[1U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->walking_mem_master_mem_addr[2U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[2U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
}

VL_INLINE_OPT void Vmptw_top::_combo__TOP__6(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_combo__TOP__6\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        ((0x1ffU & vlTOPp->mptw_top__DOT__input_transaction[8U]) 
         | (0xfffffe00U & ((IData)(vlTOPp->mptw_transaction_valid_i) 
                           << 9U)));
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
        = ((0x3f0U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[8U])) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__input_transaction[7U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                                                 >> 4U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = ((0x1ffU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
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
        = ((0x3efU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
           | (0x10U & vlTOPp->mptw_top__DOT__input_transaction[8U]));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = ((0x2ffU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
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
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & (((0U != (IData)(vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__format_error))
                               ? 3U : 0U) << 2U)));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = ((0x31fU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x200U & vlTOPp->mptw_top__DOT__input_transaction[8U])
                               ? (IData)(vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__format_error)
                               : 0U) << 5U)));
}

VL_INLINE_OPT void Vmptw_top::_combo__TOP__7(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_combo__TOP__7\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)) 
                         | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                               & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = (1U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid));
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
            if (((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                 & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))) {
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
        if ((1U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))) {
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
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                              & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                           >> 1U) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)) 
                         | (~ ((~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                   >> 1U)) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = (1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                     >> 1U));
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
            if ((((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                  >> 1U) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))) {
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
        if ((2U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))) {
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
            if ((1U & (~ (((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                           >> 1U) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                if ((1U & (~ ((~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                  >> 1U)) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                           >> 2U) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)) 
                         | (~ ((~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                   >> 2U)) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = (1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                     >> 2U));
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
            if ((((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                  >> 2U) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))) {
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
        if ((4U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))) {
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
            if ((1U & (~ (((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                           >> 2U) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                if ((1U & (~ ((~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                  >> 2U)) & (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_transaction_valid_i) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_slave_ready)) 
                         | (~ ((~ (IData)(vlTOPp->mptw_transaction_valid_i)) 
                               & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_slave_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state 
            = vlTOPp->mptw_transaction_valid_i;
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
                 & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_slave_ready))) {
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
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_transaction_valid_i) 
                          & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_transaction_valid_i)) 
                              & (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_slave_ready))))) {
                    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
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
        = ((0x3e0U & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U]) 
           | ((0xfffffff0U & ((IData)((0U != (((QData)((IData)(
                                                               vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U])) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[7U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[6U])) 
                                                    >> 4U))))) 
                              << 4U)) | (0xfU & vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__valid_fifo_to_master[8U])));
    vlTOPp->mptw_top__DOT__walking_stage_ready = ((0xeU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)) 
                                                  | (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready));
    vlTOPp->mptw_top__DOT__walking_stage_ready = ((0xdU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready) 
                                                     << 1U));
    vlTOPp->mptw_top__DOT__walking_stage_ready = ((0xbU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready) 
                                                     << 2U));
    vlTOPp->mptw_ready_o = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready;
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready))))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready))))) {
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
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 1U))))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
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
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 2U))))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
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
            if ((1U & (~ ((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 3U))))) {
                if ((1U & (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                              & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                 >> 3U))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)) 
                         | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                               & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 1U)) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                           & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                              >> 1U)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 2U)) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                           & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                              >> 2U)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 3U)) | (~ ((~ (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid)) 
                                           & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                              >> 3U)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid;
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
                 & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready))) {
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
                 & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                    >> 1U))) {
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
                 & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                    >> 2U))) {
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
                 & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                    >> 3U))) {
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
}

void Vmptw_top::_eval(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_eval\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__8(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__8(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__8(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__8(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__9(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__9(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__9(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__9(vlSymsp);
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__13(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__14(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__15(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__16(vlSymsp);
    vlTOPp->_combo__TOP__7(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
    vlTOPp->__Vclklast__TOP__rst_ni = vlTOPp->rst_ni;
}

VL_INLINE_OPT QData Vmptw_top::_change_request(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_change_request\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vmptw_top::_change_request_1(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_change_request_1\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready)
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready));
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_pipelining_2/rtl/plb_lookup_stage.sv:71: mptw_top.plb_lookup_stage_u.local_to_reg_bus_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_pipelining_2/rtl/walking_stage.sv:57: mptw_top.gen_walking_stages[0].walking_stage_u.walking_to_pipe_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_pipelining_2/rtl/walking_stage.sv:57: mptw_top.gen_walking_stages[1].walking_stage_u.walking_to_pipe_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_pipelining_2/rtl/walking_stage.sv:57: mptw_top.gen_walking_stages[2].walking_stage_u.walking_to_pipe_ready\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
    return __req;
}

#ifdef VL_DEBUG
void Vmptw_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((flush_i & 0xfeU))) {
        Verilated::overWidthError("flush_i");}
    if (VL_UNLIKELY((mptw_enable_i & 0xfeU))) {
        Verilated::overWidthError("mptw_enable_i");}
    if (VL_UNLIKELY((access_type_i & 0xfcU))) {
        Verilated::overWidthError("access_type_i");}
    if (VL_UNLIKELY((mptw_transaction_valid_i & 0xfeU))) {
        Verilated::overWidthError("mptw_transaction_valid_i");}
    if (VL_UNLIKELY((plb_master_mem_gnt & 0xfeU))) {
        Verilated::overWidthError("plb_master_mem_gnt");}
    if (VL_UNLIKELY((plb_master_mem_valid & 0xfeU))) {
        Verilated::overWidthError("plb_master_mem_valid");}
    if (VL_UNLIKELY((plb_master_mem_error & 0xfeU))) {
        Verilated::overWidthError("plb_master_mem_error");}
}
#endif  // VL_DEBUG
