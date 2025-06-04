// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmptw_top__Syms.h"


void Vmptw_top::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vmptw_top__Syms* __restrict vlSymsp = static_cast<Vmptw_top__Syms*>(userp);
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vmptw_top::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vmptw_top__Syms* __restrict vlSymsp = static_cast<Vmptw_top__Syms*>(userp);
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*223:0*/ __Vtemp151[7];
    WData/*223:0*/ __Vtemp157[7];
    WData/*223:0*/ __Vtemp160[7];
    WData/*223:0*/ __Vtemp163[7];
    WData/*223:0*/ __Vtemp166[7];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgWData(oldp+0,(vlTOPp->mptw_top__DOT__input_transaction),196);
            tracep->chgCData(oldp+7,(vlTOPp->mptw_top__DOT__fetch_exception_cause),3);
            tracep->chgBit(oldp+8,(vlTOPp->mptw_top__DOT__fetch_to_pipe_ready));
            tracep->chgBit(oldp+9,(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready));
            tracep->chgWData(oldp+10,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction),196);
            tracep->chgBit(oldp+17,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid));
            tracep->chgBit(oldp+18,(vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready));
            tracep->chgBit(oldp+19,((1U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready))));
            tracep->chgCData(oldp+20,(vlTOPp->mptw_top__DOT__walking_stage_ready),4);
            tracep->chgQData(oldp+21,((((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__input_transaction[5U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->mptw_top__DOT__input_transaction[4U])) 
                                           >> 4U)))),64);
            tracep->chgQData(oldp+23,((((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__input_transaction[4U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__input_transaction[3U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->mptw_top__DOT__input_transaction[2U])) 
                                           >> 4U)))),64);
            tracep->chgBit(oldp+25,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__next_state));
            tracep->chgWData(oldp+26,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d),196);
            tracep->chgWData(oldp+33,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master),196);
            tracep->chgWData(oldp+40,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo),196);
            tracep->chgBit(oldp+47,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_push));
            tracep->chgBit(oldp+48,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_pop));
            tracep->chgBit(oldp+49,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push));
            tracep->chgBit(oldp+50,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop));
            tracep->chgWData(oldp+51,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_data_in),196);
            tracep->chgBit(oldp+58,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock));
            tracep->chgCData(oldp+59,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n),2);
            tracep->chgCData(oldp+60,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n),2);
            tracep->chgCData(oldp+61,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n),3);
            tracep->chgWData(oldp+62,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n),784);
            tracep->chgBit(oldp+87,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock));
            tracep->chgCData(oldp+88,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n),2);
            tracep->chgCData(oldp+89,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n),2);
            tracep->chgCData(oldp+90,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n),3);
            tracep->chgWData(oldp+91,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n),784);
            tracep->chgBit(oldp+116,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__next_state));
            tracep->chgWData(oldp+117,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d),196);
            tracep->chgBit(oldp+124,(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_reg__s_data_ready));
            tracep->chgBit(oldp+125,((1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                            >> 1U))));
            tracep->chgBit(oldp+126,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__next_state));
            tracep->chgWData(oldp+127,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d),196);
            tracep->chgBit(oldp+134,(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_reg__s_data_ready));
            tracep->chgBit(oldp+135,((1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                            >> 2U))));
            tracep->chgBit(oldp+136,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__next_state));
            tracep->chgWData(oldp+137,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d),196);
            tracep->chgBit(oldp+144,(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_reg__s_data_ready));
            tracep->chgBit(oldp+145,((1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                            >> 3U))));
            tracep->chgBit(oldp+146,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__next_state));
            tracep->chgWData(oldp+147,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d),196);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+154,((4U == (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))));
            tracep->chgBit(oldp+155,((0U == (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))));
            if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))) {
                __Vtemp151[0U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                            ((IData)(1U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                     (0x1fU & (((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
                __Vtemp151[1U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                            ((IData)(2U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                     ((IData)(1U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
                __Vtemp151[2U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                            ((IData)(3U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                     ((IData)(2U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
                __Vtemp151[3U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                            ((IData)(4U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                     ((IData)(3U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
                __Vtemp151[4U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                            ((IData)(5U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                     ((IData)(4U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
                __Vtemp151[5U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                            ((IData)(6U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                     ((IData)(5U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
                __Vtemp151[6U] = (0xfU & (((0U == (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                            ? 0U : 
                                           (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                            ((IData)(7U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                          | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                             ((IData)(6U) 
                                              + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))));
            } else {
                __Vtemp151[0U] = 0U;
                __Vtemp151[1U] = 0U;
                __Vtemp151[2U] = 0U;
                __Vtemp151[3U] = 0U;
                __Vtemp151[4U] = 0U;
                __Vtemp151[5U] = 0U;
                __Vtemp151[6U] = 0U;
            }
            tracep->chgWData(oldp+156,(__Vtemp151),196);
            tracep->chgBit(oldp+163,((4U == (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))));
            tracep->chgBit(oldp+164,((0U == (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))));
            if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))) {
                __Vtemp157[0U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(1U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     (0x1fU & (((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp157[1U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(2U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(1U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp157[2U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(3U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(2U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp157[3U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(4U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(3U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp157[4U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(5U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(4U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp157[5U] = (((0U == (0x1fU & 
                                           ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                    ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(6U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(5U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     >> (0x1fU & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))));
                __Vtemp157[6U] = (0xfU & (((0U == (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                            ? 0U : 
                                           (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(7U) 
                                             + (0x1fU 
                                                & (((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                          | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                             ((IData)(6U) 
                                              + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))));
            } else {
                __Vtemp157[0U] = 0U;
                __Vtemp157[1U] = 0U;
                __Vtemp157[2U] = 0U;
                __Vtemp157[3U] = 0U;
                __Vtemp157[4U] = 0U;
                __Vtemp157[5U] = 0U;
                __Vtemp157[6U] = 0U;
            }
            tracep->chgWData(oldp+165,(__Vtemp157),196);
            tracep->chgCData(oldp+172,((3U & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))),2);
            tracep->chgCData(oldp+173,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q),2);
            tracep->chgCData(oldp+174,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q),2);
            tracep->chgCData(oldp+175,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q),3);
            tracep->chgWData(oldp+176,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q),784);
            tracep->chgCData(oldp+201,((3U & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))),2);
            tracep->chgCData(oldp+202,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q),2);
            tracep->chgCData(oldp+203,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q),2);
            tracep->chgCData(oldp+204,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q),3);
            tracep->chgWData(oldp+205,(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q),784);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgWData(oldp+230,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q),196);
            tracep->chgBit(oldp+237,(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid));
            tracep->chgWData(oldp+238,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q),196);
            tracep->chgBit(oldp+245,(vlTOPp->mptw_top__DOT__pipe_to_walking_valid));
            tracep->chgBit(oldp+246,(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state));
            tracep->chgBit(oldp+247,(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state));
            tracep->chgWData(oldp+248,(vlTOPp->mptw_top__DOT__walking_stage_data),784);
            tracep->chgCData(oldp+273,(vlTOPp->mptw_top__DOT__walking_stage_valid),4);
            __Vtemp160[0U] = vlTOPp->mptw_top__DOT__walking_stage_data[0U];
            __Vtemp160[1U] = vlTOPp->mptw_top__DOT__walking_stage_data[1U];
            __Vtemp160[2U] = vlTOPp->mptw_top__DOT__walking_stage_data[2U];
            __Vtemp160[3U] = vlTOPp->mptw_top__DOT__walking_stage_data[3U];
            __Vtemp160[4U] = vlTOPp->mptw_top__DOT__walking_stage_data[4U];
            __Vtemp160[5U] = vlTOPp->mptw_top__DOT__walking_stage_data[5U];
            __Vtemp160[6U] = (0xfU & vlTOPp->mptw_top__DOT__walking_stage_data[6U]);
            tracep->chgWData(oldp+274,(__Vtemp160),196);
            tracep->chgBit(oldp+281,((1U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))));
            tracep->chgWData(oldp+282,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q),196);
            tracep->chgBit(oldp+289,(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_reg__m_data_valid));
            tracep->chgBit(oldp+290,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__current_state));
            __Vtemp163[0U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[7U] 
                               << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[6U] 
                                            >> 4U));
            __Vtemp163[1U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[8U] 
                               << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[7U] 
                                            >> 4U));
            __Vtemp163[2U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[9U] 
                               << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[8U] 
                                            >> 4U));
            __Vtemp163[3U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                               << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[9U] 
                                            >> 4U));
            __Vtemp163[4U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                               << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                            >> 4U));
            __Vtemp163[5U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                               << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                            >> 4U));
            __Vtemp163[6U] = (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                                       << 0x1cU) | 
                                      (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                       >> 4U)));
            tracep->chgWData(oldp+291,(__Vtemp163),196);
            tracep->chgBit(oldp+298,((1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                            >> 1U))));
            tracep->chgWData(oldp+299,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q),196);
            tracep->chgBit(oldp+306,(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_reg__m_data_valid));
            tracep->chgBit(oldp+307,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__current_state));
            __Vtemp166[0U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                               << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                            >> 8U));
            __Vtemp166[1U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
                               << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                                            >> 8U));
            __Vtemp166[2U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
                               << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
                                            >> 8U));
            __Vtemp166[3U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                               << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
                                            >> 8U));
            __Vtemp166[4U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
                               << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                                            >> 8U));
            __Vtemp166[5U] = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                               << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
                                            >> 8U));
            __Vtemp166[6U] = (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                       << 0x18U) | 
                                      (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                       >> 8U)));
            tracep->chgWData(oldp+308,(__Vtemp166),196);
            tracep->chgBit(oldp+315,((1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                            >> 2U))));
            tracep->chgWData(oldp+316,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q),196);
            tracep->chgBit(oldp+323,(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_reg__m_data_valid));
            tracep->chgBit(oldp+324,(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__current_state));
        }
        tracep->chgBit(oldp+325,(vlTOPp->clk_i));
        tracep->chgBit(oldp+326,(vlTOPp->rst_ni));
        tracep->chgBit(oldp+327,(vlTOPp->flush_i));
        tracep->chgBit(oldp+328,(vlTOPp->mptw_enable_i));
        tracep->chgQData(oldp+329,(vlTOPp->spa_i),64);
        tracep->chgQData(oldp+331,(vlTOPp->mmpt_reg_i),64);
        tracep->chgCData(oldp+333,(vlTOPp->access_type_i),2);
        tracep->chgBit(oldp+334,(vlTOPp->mptw_transaction_valid_i));
        tracep->chgBit(oldp+335,(vlTOPp->mptw_ready_o));
        tracep->chgBit(oldp+336,(vlTOPp->access_page_fault_o));
        tracep->chgCData(oldp+337,(vlTOPp->format_error_o),3);
        tracep->chgBit(oldp+338,(vlTOPp->plb_master_mem_req));
        tracep->chgBit(oldp+339,(vlTOPp->plb_master_mem_gnt));
        tracep->chgBit(oldp+340,(vlTOPp->plb_master_mem_valid));
        tracep->chgQData(oldp+341,(vlTOPp->plb_master_mem_addr),64);
        tracep->chgQData(oldp+343,(vlTOPp->plb_master_mem_rdata),64);
        tracep->chgQData(oldp+345,(vlTOPp->plb_master_mem_wdata),64);
        tracep->chgBit(oldp+347,(vlTOPp->plb_master_mem_we));
        tracep->chgCData(oldp+348,(vlTOPp->plb_master_mem_be),8);
        tracep->chgBit(oldp+349,(vlTOPp->plb_master_mem_error));
    }
}

void Vmptw_top::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vmptw_top__Syms* __restrict vlSymsp = static_cast<Vmptw_top__Syms*>(userp);
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
    }
}
