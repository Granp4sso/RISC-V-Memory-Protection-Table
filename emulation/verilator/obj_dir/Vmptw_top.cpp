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
            VL_FATAL_MT("/home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/mptw_top.sv", 22, "",
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
            VL_FATAL_MT("/home/stefano/Desktop/Work/Projects/smmtt/b_emu/rtl/mptw_top.sv", 22, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vmptw_top::_settle__TOP__3(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_settle__TOP__3\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp229[5];
    // Body
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[0U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[0U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[1U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[1U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[2U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[2U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[3U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[3U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[4U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[4U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[5U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[5U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[6U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[6U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[7U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[7U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[8U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[8U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[8U] 
        = ((0xfffbffU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[8U]) 
           | (0xfffffc00U & ((IData)((0U != (((QData)((IData)(
                                                              vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[8U])) 
                                              << 0x3cU) 
                                             | (((QData)((IData)(
                                                                 vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[7U])) 
                                                 << 0x1cU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[6U])) 
                                                   >> 4U))))) 
                             << 0xaU)));
    VL_EXTEND_WI(130,2, __Vtemp229, (((0U != (7U & 
                                              (vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[8U] 
                                               >> 5U))) 
                                      | ((vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[8U] 
                                          >> 9U) & 
                                         (0U != (((QData)((IData)(
                                                                  vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[8U])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[7U])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[6U])) 
                                                       >> 4U))))))
                                      ? 2U : (3U & 
                                              ((vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[5U] 
                                                << 0x1eU) 
                                               | (vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                                                  >> 2U)))));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[4U] 
        = ((3U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & (__Vtemp229[0U] << 2U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[5U] 
        = ((3U & (__Vtemp229[0U] >> 0x1eU)) | (0xfffffffcU 
                                               & (__Vtemp229[1U] 
                                                  << 2U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[6U] 
        = ((3U & (__Vtemp229[1U] >> 0x1eU)) | (0xfffffffcU 
                                               & (__Vtemp229[2U] 
                                                  << 2U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[7U] 
        = ((3U & (__Vtemp229[2U] >> 0x1eU)) | (0xfffffffcU 
                                               & (__Vtemp229[3U] 
                                                  << 2U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[8U] 
        = ((0xffffe0U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[8U]) 
           | ((3U & (__Vtemp229[3U] >> 0x1eU)) | (0xfffffffcU 
                                                  & ((0xfffffff0U 
                                                      & (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (((QData)((IData)(
                                                                                vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[8U])) 
                                                                     << 0x3cU) 
                                                                    | (((QData)((IData)(
                                                                                vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[7U])) 
                                                                        << 0x1cU) 
                                                                       | ((QData)((IData)(
                                                                                vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_data[6U])) 
                                                                          >> 4U))))) 
                                                          << 2U) 
                                                         << 2U)) 
                                                     | (__Vtemp229[4U] 
                                                        << 2U)))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[0U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[1U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[2U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[3U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[4U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[5U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[6U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[7U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[8U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & (((1U == (3U & ((vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U] 
                                             << 0x1eU) 
                                            | (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                                               >> 2U))))
                               ? 0U : (3U & ((vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U] 
                                              << 0x1eU) 
                                             | (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                                                >> 2U)))) 
                             << 2U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[0U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[1U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[2U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[3U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[4U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[5U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[6U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[7U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[8U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & (((1U == (3U & ((vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U] 
                                             << 0x1eU) 
                                            | (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                                               >> 2U))))
                               ? 0U : (3U & ((vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U] 
                                              << 0x1eU) 
                                             | (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                                                >> 2U)))) 
                             << 2U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[0U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[1U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[2U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[3U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[4U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[5U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[6U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[7U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[8U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & (((1U == (3U & ((vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U] 
                                             << 0x1eU) 
                                            | (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                                               >> 2U))))
                               ? 0U : (3U & ((vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U] 
                                              << 0x1eU) 
                                             | (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                                                >> 2U)))) 
                             << 2U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[0U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[1U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[2U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[3U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[4U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[5U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[6U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[7U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[8U] 
        = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & (((1U == (3U & ((vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U] 
                                             << 0x1eU) 
                                            | (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                                               >> 2U))))
                               ? 0U : (3U & ((vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[5U] 
                                              << 0x1eU) 
                                             | (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_data[4U] 
                                                >> 2U)))) 
                             << 2U)));
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
                 & vlTOPp->mptw_top__DOT__to_walking_stage_data_ready
                 [0U])) {
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[0U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[1U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[2U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[3U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[4U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[5U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[6U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[7U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] = 0U;
        if (vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[0U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[1U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[2U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[3U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[4U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[5U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[6U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[7U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__output_transaction[8U];
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
                 & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                 [0U])) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] = 0U;
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
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
                 & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                 [1U])) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] = 0U;
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
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
                 & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                 [2U])) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] = 0U;
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
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
                 & vlTOPp->mptw_top__DOT__walking_to_demux_data_ready
                 [3U])) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] = 0U;
        if (vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_master_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__output_transaction[8U];
        }
    }
}

VL_INLINE_OPT void Vmptw_top::_combo__TOP__5(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_combo__TOP__5\n"); );
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
}

VL_INLINE_OPT void Vmptw_top::_sequent__TOP__6(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_sequent__TOP__6\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*287:0*/ __Vtemp560[9];
    WData/*287:0*/ __Vtemp562[9];
    WData/*287:0*/ __Vtemp564[9];
    WData/*287:0*/ __Vtemp566[9];
    WData/*287:0*/ __Vtemp568[9];
    // Body
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q 
            = vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_d;
        vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q 
            = vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_d;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state 
            = (((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [7U]) ? ((1U != vlTOPp->mptw_top__DOT__system_control_flush
                           [7U]) & ((~ (vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                                        >> 0xbU)) & (IData)(vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__next_state)))
                 : (IData)(vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__next_state)) 
               & 1U);
        vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q 
            = vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_d;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state 
            = (((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [0U]) ? ((1U != vlTOPp->mptw_top__DOT__system_control_flush
                           [0U]) & ((~ (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U] 
                                        >> 0xbU)) & (IData)(vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state)))
                 : (IData)(vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state)) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state 
            = (((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [6U]) ? ((1U != vlTOPp->mptw_top__DOT__system_control_flush
                           [6U]) & ((~ (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                                        >> 0xbU)) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state)))
                 : (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state)) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state 
            = (((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [5U]) ? ((1U != vlTOPp->mptw_top__DOT__system_control_flush
                           [5U]) & ((~ (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                                        >> 0xbU)) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state)))
                 : (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state)) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state 
            = (((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [4U]) ? ((1U != vlTOPp->mptw_top__DOT__system_control_flush
                           [4U]) & ((~ (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                                        >> 0xbU)) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state)))
                 : (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state)) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state 
            = (((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [3U]) ? ((1U != vlTOPp->mptw_top__DOT__system_control_flush
                           [3U]) & ((~ (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
                                        >> 0xbU)) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state)))
                 : (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state)) 
               & 1U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state 
            = (((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [2U]) ? ((1U != vlTOPp->mptw_top__DOT__system_control_flush
                           [2U]) & ((~ (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U] 
                                        >> 0xbU)) & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state)))
                 : (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state)) 
               & 1U);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state 
            = (((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [1U]) ? ((1U != vlTOPp->mptw_top__DOT__system_control_flush
                           [1U]) & ((~ (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U] 
                                        >> 0xbU)) & (IData)(vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state)))
                 : (IData)(vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__next_state)) 
               & 1U);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state 
            = (((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [1U]) ? ((1U != vlTOPp->mptw_top__DOT__system_control_flush
                           [1U]) & ((~ (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U] 
                                        >> 0xbU)) & (IData)(vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state)))
                 : (IData)(vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__next_state)) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state 
            = (((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [6U]) ? ((1U != vlTOPp->mptw_top__DOT__system_control_flush
                           [6U]) & ((~ (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                                        >> 0xbU)) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state)))
                 : (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state)) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state 
            = (((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [5U]) ? ((1U != vlTOPp->mptw_top__DOT__system_control_flush
                           [5U]) & ((~ (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                                        >> 0xbU)) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state)))
                 : (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state)) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state 
            = (((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [4U]) ? ((1U != vlTOPp->mptw_top__DOT__system_control_flush
                           [4U]) & ((~ (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                                        >> 0xbU)) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state)))
                 : (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state)) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state 
            = (((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [3U]) ? ((1U != vlTOPp->mptw_top__DOT__system_control_flush
                           [3U]) & ((~ (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                                        >> 0xbU)) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state)))
                 : (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state)) 
               & 1U);
    } else {
        vlTOPp->mptw_top__DOT__control_unit_u__DOT__status_reg_q = 0U;
        vlTOPp->mptw_top__DOT__control_unit_u__DOT__ctrl_status_q = 0U;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__control_unit_u__DOT__control_reg_q = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = 0U;
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
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [7U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [7U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U]))
                : vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U]);
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [7U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [7U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U]))
                : vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U]);
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [7U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [7U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U]))
                : vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U]);
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [7U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [7U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U]))
                : vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U]);
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [7U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [7U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U]))
                : vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U]);
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [7U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [7U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U]))
                : vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U]);
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [7U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [7U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U]))
                : vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U]);
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [7U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [7U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U]))
                : vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U]);
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [7U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [7U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U]))
                : vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U]);
    } else {
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] = 0U;
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
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [0U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [0U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U]))
                : vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U]);
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [0U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [0U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U]))
                : vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U]);
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [0U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [0U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U]))
                : vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U]);
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [0U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [0U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U]))
                : vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U]);
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [0U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [0U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U]))
                : vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U]);
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [0U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [0U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U]))
                : vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U]);
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [0U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [0U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U]))
                : vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U]);
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [0U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [0U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U]))
                : vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U]);
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [0U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [0U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U]))
                : vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U]);
    } else {
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U] = 0U;
    }
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_to_issue_data_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_to_issue_data_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 0U;
    }
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [6U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [6U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [6U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [6U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [6U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [6U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [6U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [6U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [6U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [6U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [6U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [6U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [6U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [6U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [6U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [6U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [6U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [6U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U]);
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 0U;
    }
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [5U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [5U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [5U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [5U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [5U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [5U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [5U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [5U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [5U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [5U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [5U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [5U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [5U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [5U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [5U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [5U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [5U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [5U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U]);
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 0U;
    }
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [4U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [4U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [4U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [4U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [4U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [4U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [4U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [4U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [4U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [4U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [4U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [4U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [4U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [4U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [4U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [4U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [4U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [4U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U]);
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_forwarding_valid = 0U;
    }
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [3U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [3U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [3U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [3U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [3U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [3U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [3U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [3U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [3U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [3U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [3U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [3U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [3U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [3U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [3U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [3U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [3U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [3U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U]);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [2U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [2U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U]))
                : vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U]);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [2U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [2U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U]))
                : vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U]);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [2U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [2U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U]))
                : vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U]);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [2U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [2U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U]))
                : vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U]);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [2U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [2U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U]))
                : vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U]);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [2U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [2U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U]))
                : vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U]);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [2U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [2U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U]))
                : vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U]);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [2U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [2U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U]))
                : vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U]);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [2U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [2U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U]))
                : vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U]);
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U] = 0U;
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_to_demux_data_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_to_demux_data_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid = 0U;
    }
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [1U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [1U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U]))
                : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[0U]);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [1U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [1U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U]))
                : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[1U]);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [1U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [1U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U]))
                : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[2U]);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [1U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [1U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U]))
                : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[3U]);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [1U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [1U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U]))
                : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[4U]);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [1U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [1U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U]))
                : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[5U]);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [1U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [1U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U]))
                : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[6U]);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [1U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [1U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U]))
                : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[7U]);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [1U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [1U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U]))
                : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_d[8U]);
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U] = 0U;
    }
    if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid = 0U;
    }
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[0U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [1U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [1U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U]))
                : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[0U]);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[1U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [1U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [1U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U]))
                : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[1U]);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[2U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [1U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [1U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U]))
                : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[2U]);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[3U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [1U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [1U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U]))
                : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[3U]);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[4U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [1U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [1U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U]))
                : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[4U]);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[5U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [1U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [1U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U]))
                : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[5U]);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[6U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [1U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [1U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U]))
                : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[6U]);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[7U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [1U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [1U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U]))
                : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[7U]);
        vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_q[8U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [1U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [1U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U]))
                : vlTOPp->mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_backend_reg__DOT__reg_data_d[8U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [6U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [6U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [6U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [6U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [6U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [6U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [6U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [6U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [6U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [6U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [6U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [6U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [6U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [6U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [6U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [6U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [6U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [6U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U]);
    } else {
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
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [5U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [5U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [5U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [5U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [5U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [5U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [5U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [5U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [5U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [5U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [5U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [5U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [5U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [5U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [5U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [5U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [5U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [5U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U]);
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [4U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [4U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [4U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [4U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [4U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [4U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [4U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [4U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [4U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [4U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [4U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [4U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [4U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [4U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [4U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [4U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [4U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [4U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U]);
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [3U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [3U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [3U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [3U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [3U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [3U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [3U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [3U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [3U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [3U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [3U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [3U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [3U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [3U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [3U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [3U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U]);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
            = ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                [3U]) ? ((1U == vlTOPp->mptw_top__DOT__system_control_flush
                          [3U]) ? 0U : ((0x800U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__internal_transaction[8U])
                                         ? 0U : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U]))
                : vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U]);
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    vlTOPp->mptw_top__DOT__walking_to_retire_data_valid[4U] 
        = vlTOPp->mptw_top__DOT____Vcellout__last_parsing_stage_u__stage_master_valid;
    vlTOPp->mptw_top__DOT__issue_stage_slave_valid[0U] 
        = vlTOPp->mptw_top__DOT__fetch_to_issue_data_valid;
    vlTOPp->mptw_top__DOT__to_walking_stage_data_valid[0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_to_demux_data_valid;
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_valid[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid;
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_valid[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__issue_to_backend_valid;
    vlTOPp->mptw_top__DOT__walking_to_demux_data_valid[3U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__stage_master_valid;
    vlTOPp->mptw_top__DOT__walking_to_demux_data_valid[2U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid;
    vlTOPp->mptw_top__DOT__walking_to_demux_data_valid[1U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid;
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
    vlTOPp->mptw_top__DOT__walking_to_demux_data_valid[0U] 
        = vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid;
    vlTOPp->mptw_result_valid_o = vlTOPp->mptw_top__DOT__walking_to_retire_data_valid
        [4U];
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
    vlTOPp->mptw_top__DOT__retire_demux_select[0U] 
        = (1U & ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U] 
                  >> 0xaU) & (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U] 
                              >> 9U)));
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
    vlTOPp->mptw_top__DOT__issue_stage_master_valid[1U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_valid
        [1U];
    vlTOPp->mptw_top__DOT__issue_stage_master_valid[0U] 
        = vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_master_valid
        [0U];
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
    vlTOPp->plb_entry_o = (((QData)((IData)(vlTOPp->mptw_top__DOT__walking_to_retire_data_data
                                            [4U][3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_to_retire_data_data
                                                        [4U][2U])));
    vlTOPp->mptw_top__DOT__issue_stage_slave_valid[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_valid
        [0U];
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
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_valid
        [1U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_slave_valid[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_slave_valid
        [0U];
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
    vlTOPp->mptw_top__DOT__system_status_busy[7U] = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__parsing_reg__DOT__busy;
    vlTOPp->mptw_top__DOT__to_walking_stage_data_ready[4U] 
        = vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__slave_to_reg_bus_ready;
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
    vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__mpte_permissions = 0U;
    if ((0x20U & vlTOPp->mptw_top__DOT__to_walking_stage_data_data
         [4U][6U])) {
        __Vtemp560[0U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][0U];
        __Vtemp560[1U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][1U];
        __Vtemp560[2U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][2U];
        __Vtemp560[3U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][3U];
        __Vtemp560[4U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][4U];
        __Vtemp560[5U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][5U];
        __Vtemp560[6U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][6U];
        __Vtemp560[7U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][7U];
        __Vtemp560[8U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [4U][8U];
        vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0xceU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__last_parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp560[((IData)(1U) 
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
                         | (__Vtemp560[(((IData)(0xceU) 
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
        __Vtemp562[0U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][0U];
        __Vtemp562[1U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][1U];
        __Vtemp562[2U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][2U];
        __Vtemp562[3U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][3U];
        __Vtemp562[4U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][4U];
        __Vtemp562[5U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][5U];
        __Vtemp562[6U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][6U];
        __Vtemp562[7U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][7U];
        __Vtemp562[8U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [0U][8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0xceU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp562[((IData)(1U) 
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
                         | (__Vtemp562[(((IData)(0xceU) 
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
        __Vtemp564[0U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][0U];
        __Vtemp564[1U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][1U];
        __Vtemp564[2U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][2U];
        __Vtemp564[3U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][3U];
        __Vtemp564[4U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][4U];
        __Vtemp564[5U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][5U];
        __Vtemp564[6U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][6U];
        __Vtemp564[7U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][7U];
        __Vtemp564[8U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [1U][8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0xceU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp564[((IData)(1U) 
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
                         | (__Vtemp564[(((IData)(0xceU) 
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
        __Vtemp566[0U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][0U];
        __Vtemp566[1U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][1U];
        __Vtemp566[2U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][2U];
        __Vtemp566[3U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][3U];
        __Vtemp566[4U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][4U];
        __Vtemp566[5U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][5U];
        __Vtemp566[6U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][6U];
        __Vtemp566[7U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][7U];
        __Vtemp566[8U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [2U][8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0xceU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp566[((IData)(1U) 
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
                         | (__Vtemp566[(((IData)(0xceU) 
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
        __Vtemp568[0U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][0U];
        __Vtemp568[1U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][1U];
        __Vtemp568[2U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][2U];
        __Vtemp568[3U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][3U];
        __Vtemp568[4U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][4U];
        __Vtemp568[5U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][5U];
        __Vtemp568[6U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][6U];
        __Vtemp568[7U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][7U];
        __Vtemp568[8U] = vlTOPp->mptw_top__DOT__to_walking_stage_data_data
            [3U][8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0xceU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (__Vtemp568[((IData)(1U) 
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
                         | (__Vtemp568[(((IData)(0xceU) 
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
}

VL_INLINE_OPT void Vmptw_top::_combo__TOP__7(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_combo__TOP__7\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    QData/*63:0*/ __Vtemp569;
    // Body
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
    __Vtemp569 = (((QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[3U])) 
                   << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[2U])));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[2U])))) 
                             << 4U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5U] 
        = ((0xfU & ((IData)(__Vtemp569) >> 0x1cU)) 
           | (0xfffffff0U & ((IData)((__Vtemp569 >> 0x20U)) 
                             << 4U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[6U]) 
           | (0xfU & ((IData)((__Vtemp569 >> 0x20U)) 
                      >> 0x1cU)));
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
    vlTOPp->plb_master_mem_addr = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->plb_master_mem_req = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->mptw_top__DOT__issue_stage_master_ready[1U] 
        = vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__PVT__req_bus_ready;
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
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_ready
        [1U];
    vlTOPp->mptw_top__DOT____Vcellinp__issue_stage_u__stage_master_ready[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_master_ready
        [0U];
    vlTOPp->mptw_top__DOT__to_walking_stage_data_ready[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT__to_walking_stage_data_ready[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT__to_walking_stage_data_ready[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT__to_walking_stage_data_ready[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready;
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
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_slave_ready[0U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__fetch_to_issue_ready;
    vlTOPp->mptw_top__DOT____Vcellout__issue_stage_u__stage_slave_ready[1U] 
        = vlTOPp->mptw_top__DOT__issue_stage_u__DOT__backend_to_issue_ready;
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

VL_INLINE_OPT void Vmptw_top::_sequent__TOP__9(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_sequent__TOP__9\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->walking_mem_master_mem_addr[3U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[3U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->mptw_top__DOT__system_status_flushed[6U] 
        = ((((3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                      [6U]) ? 3U : 0U)) & (3U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed))) 
            & (3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                       [6U]) ? 3U : 0U))) ? 3U : 1U);
    vlTOPp->walking_mem_master_mem_addr[2U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[2U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->mptw_top__DOT__system_status_flushed[5U] 
        = ((((3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                      [5U]) ? 3U : 0U)) & (3U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed))) 
            & (3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                       [5U]) ? 3U : 0U))) ? 3U : 1U);
    vlTOPp->walking_mem_master_mem_addr[1U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[1U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->mptw_top__DOT__system_status_flushed[4U] 
        = ((((3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                      [4U]) ? 3U : 0U)) & (3U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed))) 
            & (3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                       [4U]) ? 3U : 0U))) ? 3U : 1U);
    vlTOPp->walking_mem_master_mem_addr[0U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_addr;
    vlTOPp->walking_mem_master_mem_req[0U] = vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.memory_master_mem_req;
    vlTOPp->mptw_top__DOT__system_status_flushed[3U] 
        = ((((3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                      [3U]) ? 3U : 0U)) & (3U == (IData)(vlSymsp->TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.stage_status_flushed))) 
            & (3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                       [3U]) ? 3U : 0U))) ? 3U : 1U);
    vlTOPp->mptw_top__DOT__system_status_flushed[2U] 
        = (((3U == ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                     [2U]) ? 3U : 0U)) & (3U == (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_status_flushed)))
            ? 3U : (((0U != ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                              [2U]) ? 3U : 0U)) | (0U 
                                                   != (IData)(vlSymsp->TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.stage_status_flushed)))
                     ? 1U : 0U));
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
}
