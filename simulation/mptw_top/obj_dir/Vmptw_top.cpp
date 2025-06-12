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
            VL_FATAL_MT("/home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/mptw_top.sv", 23, "",
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
            VL_FATAL_MT("/home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/mptw_top.sv", 23, "",
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
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q 
        = ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_n)
            : 0U);
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__gate_clock)))) {
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[1U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[1U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[2U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[2U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[3U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[3U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[4U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[4U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[5U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[5U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[6U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[6U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[7U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[7U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[8U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[8U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[9U] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[9U];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xaU] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xaU];
            vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xbU] 
                = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_n[0xbU];
        }
    } else {
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[9U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xaU] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__mem_q[0xbU] = 0U;
    }
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q 
            = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_n;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q 
            = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_n;
    } else {
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__write_pointer_q = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q = 0U;
    }
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_fifo_u__DOT__read_pointer_q)));
    }
}

VL_INLINE_OPT void Vmptw_top::_sequent__TOP__5(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_sequent__TOP__5\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*287:0*/ __Vtemp413[9];
    WData/*287:0*/ __Vtemp415[9];
    WData/*287:0*/ __Vtemp417[9];
    WData/*287:0*/ __Vtemp419[9];
    WData/*287:0*/ __Vtemp421[9];
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
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
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
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_next_valid_id_q 
            = ((0x20U == (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_next_valid_id_d))
                ? 0U : (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_next_valid_id_d));
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U];
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
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state) 
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
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U];
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
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state) 
               & 1U);
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
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_push_status_q 
            = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_push_status_d;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state) 
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
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] = 0U;
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
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_next_valid_id_q = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] = 0U;
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
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_push_status_q = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state = 0U;
    }
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
    if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__commit_to_output_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__commit_to_output_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 0U;
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
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
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
    if (vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__retire_stage_u__DOT__issue_pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__backend_to_issue_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__backend_to_issue_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_to_issue_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_to_issue_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid = 0U;
    }
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
    vlTOPp->mptw_transaction_valid_o = vlTOPp->mptw_top__DOT__commit_to_output_valid;
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
    vlTOPp->mptw_top__DOT__walking_stage_valid[4U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid;
    vlTOPp->mptw_top__DOT__walking_stage_valid[3U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid;
    vlTOPp->mptw_top__DOT__walking_stage_valid[2U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid;
    vlTOPp->mptw_top__DOT__walking_stage_valid[1U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid;
    vlTOPp->mptw_top__DOT__walking_stage_valid[0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_valid;
    vlTOPp->mptw_top__DOT__issue_stage_slave_valid[1U] 
        = vlTOPp->mptw_top__DOT__backend_to_issue_valid;
    vlTOPp->mptw_top__DOT__issue_stage_slave_valid[0U] 
        = vlTOPp->mptw_top__DOT__fetch_to_issue_valid;
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_valid[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid;
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_valid[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid;
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
        __Vtemp413[0U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [4U][0U];
        __Vtemp413[1U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [4U][1U];
        __Vtemp413[2U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [4U][2U];
        __Vtemp413[3U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [4U][3U];
        __Vtemp413[4U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [4U][4U];
        __Vtemp413[5U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [4U][5U];
        __Vtemp413[6U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [4U][6U];
        __Vtemp413[7U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [4U][7U];
        __Vtemp413[8U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [4U][8U];
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0x8eU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp413[((IData)(1U) 
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
                         | (__Vtemp413[(((IData)(0x8eU) 
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
        __Vtemp415[0U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [0U][0U];
        __Vtemp415[1U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [0U][1U];
        __Vtemp415[2U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [0U][2U];
        __Vtemp415[3U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [0U][3U];
        __Vtemp415[4U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [0U][4U];
        __Vtemp415[5U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [0U][5U];
        __Vtemp415[6U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [0U][6U];
        __Vtemp415[7U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [0U][7U];
        __Vtemp415[8U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [0U][8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0x8eU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp415[((IData)(1U) 
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
                         | (__Vtemp415[(((IData)(0x8eU) 
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
        __Vtemp417[0U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [1U][0U];
        __Vtemp417[1U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [1U][1U];
        __Vtemp417[2U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [1U][2U];
        __Vtemp417[3U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [1U][3U];
        __Vtemp417[4U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [1U][4U];
        __Vtemp417[5U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [1U][5U];
        __Vtemp417[6U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [1U][6U];
        __Vtemp417[7U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [1U][7U];
        __Vtemp417[8U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [1U][8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0x8eU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp417[((IData)(1U) 
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
                         | (__Vtemp417[(((IData)(0x8eU) 
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
        __Vtemp419[0U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [2U][0U];
        __Vtemp419[1U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [2U][1U];
        __Vtemp419[2U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [2U][2U];
        __Vtemp419[3U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [2U][3U];
        __Vtemp419[4U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [2U][4U];
        __Vtemp419[5U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [2U][5U];
        __Vtemp419[6U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [2U][6U];
        __Vtemp419[7U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [2U][7U];
        __Vtemp419[8U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [2U][8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0x8eU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp419[((IData)(1U) 
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
                         | (__Vtemp419[(((IData)(0x8eU) 
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
        __Vtemp421[0U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [3U][0U];
        __Vtemp421[1U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [3U][1U];
        __Vtemp421[2U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [3U][2U];
        __Vtemp421[3U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [3U][3U];
        __Vtemp421[4U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [3U][4U];
        __Vtemp421[5U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [3U][5U];
        __Vtemp421[6U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [3U][6U];
        __Vtemp421[7U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [3U][7U];
        __Vtemp421[8U] = vlTOPp->mptw_top__DOT__walking_stage_data
            [3U][8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0x8eU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp421[((IData)(1U) 
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
                         | (__Vtemp421[(((IData)(0x8eU) 
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
        ((0x7ffdffU & vlTOPp->mptw_top__DOT__input_transaction[8U]) 
         | (0xfffffe00U & ((IData)(vlTOPp->mptw_transaction_valid_i) 
                           << 9U)));
    vlTOPp->mptw_top__DOT__retire_stage_u__DOT__from_issue_bus_ready = 0U;
    if ((0U == (IData)(vlTOPp->mptw_top__DOT__retire_stage_u__DOT__rob_push_status_q))) {
        vlTOPp->mptw_top__DOT__retire_stage_u__DOT__from_issue_bus_ready 
            = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_ready;
    }
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
    vlTOPp->mptw_top__DOT__issue_stage_master_ready[0U] 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__from_issue_bus_ready;
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
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & (((0U != (IData)(vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__format_error))
                               ? 3U : 0U) << 2U)));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = ((0x7fff1fU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x200U & vlTOPp->mptw_top__DOT__input_transaction[8U])
                               ? (IData)(vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__format_error)
                               : 0U) << 5U)));
}

VL_INLINE_OPT void Vmptw_top::_combo__TOP__7(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_combo__TOP__7\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

VL_INLINE_OPT void Vmptw_top::_sequent__TOP__8(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_sequent__TOP__8\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

VL_INLINE_OPT void Vmptw_top::_sequent__TOP__9(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_sequent__TOP__9\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->walking_mem_master_mem_addr[0U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[0U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->walking_mem_master_mem_addr[1U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[1U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->walking_mem_master_mem_addr[2U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[2U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->walking_mem_master_mem_addr[3U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[3U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->plb_master_mem_addr = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->plb_master_mem_req = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.memory_master_mem_req;
}

void Vmptw_top::_eval(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_eval\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
        vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__6(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__6(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__6(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__6(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__6(vlSymsp);
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__15(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__15(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__15(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__15(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__15(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__16(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__17(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__18(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__19(vlSymsp);
    vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u._combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__20(vlSymsp);
    vlTOPp->_combo__TOP__7(vlSymsp);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity[4U] = 1U;
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__25(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__25(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__25(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__25(vlSymsp);
        vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u._sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__25(vlSymsp);
        vlTOPp->_sequent__TOP__9(vlSymsp);
    }
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
         | (vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_ready)
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)
         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready));
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/plb_lookup_stage.sv:71: mptw_top.plb_lookup_stage_u.local_to_reg_bus_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_ready))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/retire_stage.sv:85: mptw_top.retire_stage_u.to_issue_bus_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/walking_stage.sv:57: mptw_top.gen_walking_stages[0].walking_stage_u.walking_to_pipe_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/walking_stage.sv:57: mptw_top.gen_walking_stages[1].walking_stage_u.walking_to_pipe_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/walking_stage.sv:57: mptw_top.gen_walking_stages[2].walking_stage_u.walking_to_pipe_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_retire/rtl/walking_stage.sv:57: mptw_top.gen_walking_stages[3].walking_stage_u.walking_to_pipe_ready\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_ready 
        = vlTOPp->mptw_top__DOT__retire_stage_u__DOT__to_issue_bus_ready;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready;
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
