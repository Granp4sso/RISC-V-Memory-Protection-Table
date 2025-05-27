// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline_register.h for the primary calling header

#include "Vpipeline_register.h"
#include "Vpipeline_register__Syms.h"

//==========

void Vpipeline_register::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpipeline_register::eval\n"); );
    Vpipeline_register__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vpipeline_register* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/stefano/Desktop/Work/Projects/smmtt/b_pipelining/rtl/pipeline_register.sv", 12, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vpipeline_register::_eval_initial_loop(Vpipeline_register__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/stefano/Desktop/Work/Projects/smmtt/b_pipelining/rtl/pipeline_register.sv", 12, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vpipeline_register::_sequent__TOP__1(Vpipeline_register__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_register::_sequent__TOP__1\n"); );
    Vpipeline_register* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ (IData)(vlTOPp->rst_ni)) | (IData)(vlTOPp->s_ctrl_flush)))) {
        vlTOPp->pipeline_register__DOT__valid_q = 0U;
    } else {
        if (((~ (IData)(vlTOPp->pipeline_register__DOT__stall)) 
             & (IData)(vlTOPp->m_data_ready))) {
            vlTOPp->pipeline_register__DOT__valid_q 
                = (1U & ((~ (IData)(vlTOPp->s_ctrl_flush)) 
                         & (~ (IData)(vlTOPp->pipeline_register__DOT__stall))));
        }
    }
    if (vlTOPp->rst_ni) {
        if (((~ (IData)(vlTOPp->pipeline_register__DOT__stall)) 
             & (IData)(vlTOPp->s_data_valid))) {
            vlTOPp->pipeline_register__DOT__reg_data_q 
                = ((IData)(vlTOPp->s_ctrl_flush) ? 0U
                    : vlTOPp->s_data_rdata);
        }
    } else {
        vlTOPp->pipeline_register__DOT__reg_data_q = 0U;
    }
}

VL_INLINE_OPT void Vpipeline_register::_combo__TOP__3(Vpipeline_register__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_register::_combo__TOP__3\n"); );
    Vpipeline_register* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->pipeline_register__DOT__stall = (1U & ((IData)(vlTOPp->s_ctrl_stall) 
                                                   | (~ (IData)(vlTOPp->m_data_ready))));
    vlTOPp->m_data_valid = ((~ (IData)(vlTOPp->s_ctrl_flush)) 
                            & (IData)(vlTOPp->pipeline_register__DOT__valid_q));
    vlTOPp->m_data_rdata = ((IData)(vlTOPp->s_ctrl_flush)
                             ? 0U : vlTOPp->pipeline_register__DOT__reg_data_q);
    vlTOPp->s_data_ready = (1U & (~ (IData)(vlTOPp->pipeline_register__DOT__stall)));
}

void Vpipeline_register::_eval(Vpipeline_register__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_register::_eval\n"); );
    Vpipeline_register* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

VL_INLINE_OPT QData Vpipeline_register::_change_request(Vpipeline_register__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_register::_change_request\n"); );
    Vpipeline_register* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vpipeline_register::_change_request_1(Vpipeline_register__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_register::_change_request_1\n"); );
    Vpipeline_register* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vpipeline_register::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_register::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((s_data_valid & 0xfeU))) {
        Verilated::overWidthError("s_data_valid");}
    if (VL_UNLIKELY((m_data_ready & 0xfeU))) {
        Verilated::overWidthError("m_data_ready");}
    if (VL_UNLIKELY((s_ctrl_flush & 0xfeU))) {
        Verilated::overWidthError("s_ctrl_flush");}
    if (VL_UNLIKELY((s_ctrl_stall & 0xfeU))) {
        Verilated::overWidthError("s_ctrl_stall");}
}
#endif  // VL_DEBUG
