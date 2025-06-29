// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmptw_top.h for the primary calling header

#include "Vmptw_top_memory_read_stage__pi8.h"
#include "Vmptw_top__Syms.h"

//==========

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__6(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__6\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    this->__PVT__valid_fifo_pop = 0U;
    if ((0U != (IData)(this->__PVT__valid_fifo_status_q))) {
        if ((1U != (IData)(this->__PVT__valid_fifo_status_q))) {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready) {
                    this->__PVT__valid_fifo_pop = 1U;
                }
            }
        }
    }
    this->__PVT__valid_do_walk = 1U;
    this->__PVT__valid_counter_d = this->__PVT__valid_counter_q;
    this->__PVT__grant_fifo_pop = ((1U == (IData)(this->__PVT__flush_status_q)) 
                                   & (IData)(this->__PVT__flush_grant_fifo_pop));
    this->__PVT__valid_fifo_push = 0U;
    this->__PVT__valid_fifo_to_master[0U] = 0U;
    this->__PVT__valid_fifo_to_master[1U] = 0U;
    this->__PVT__valid_fifo_to_master[2U] = 0U;
    this->__PVT__valid_fifo_to_master[3U] = 0U;
    this->__PVT__valid_fifo_to_master[4U] = 0U;
    this->__PVT__valid_fifo_to_master[5U] = 0U;
    this->__PVT__valid_fifo_to_master[6U] = 0U;
    this->__PVT__valid_fifo_to_master[7U] = 0U;
    this->__PVT__valid_fifo_to_master[8U] = 0U;
    this->__PVT__to_output_bus_valid = 0U;
    this->__PVT__valid_fifo_status_d = 0U;
    if ((0U == (IData)(this->__PVT__valid_fifo_status_q))) {
        if (((IData)(this->__PVT__grant_fifo_push) 
             & (0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
            this->__PVT__valid_fifo_status_d = 1U;
        }
    } else {
        if ((1U == (IData)(this->__PVT__valid_fifo_status_q))) {
            this->__PVT__valid_fifo_status_d = 1U;
            this->__PVT__valid_do_walk = (0U == (3U 
                                                 & ((this->__Vcellout__grant_fifo_u__data_o[5U] 
                                                     << 0x1eU) 
                                                    | (this->__Vcellout__grant_fifo_u__data_o[4U] 
                                                       >> 2U))));
            if (this->__PVT__valid_do_walk) {
                if (((IData)(vlTOPp->plb_master_mem_valid) 
                     | (0U != (IData)(this->__PVT__valid_counter_q)))) {
                    if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop 
                            = (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                        if (((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready)) 
                             & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_fifo_status_d = 2U;
                        } else {
                            this->__PVT__valid_fifo_to_master[0U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[0U];
                            this->__PVT__valid_fifo_to_master[1U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[1U];
                            this->__PVT__valid_fifo_to_master[2U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[2U];
                            this->__PVT__valid_fifo_to_master[3U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[3U];
                            this->__PVT__valid_fifo_to_master[4U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[4U];
                            this->__PVT__valid_fifo_to_master[5U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[5U];
                            this->__PVT__valid_fifo_to_master[6U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[6U];
                            this->__PVT__valid_fifo_to_master[7U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[7U];
                            this->__PVT__valid_fifo_to_master[8U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[8U];
                            this->__PVT__to_output_bus_valid = 1U;
                        }
                        this->__PVT__valid_counter_d 
                            = (0x3fU & ((IData)(vlTOPp->plb_master_mem_valid)
                                         ? (IData)(this->__PVT__valid_counter_q)
                                         : ((IData)(this->__PVT__valid_counter_q) 
                                            - (IData)(1U))));
                    }
                }
            } else {
                if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                     & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                    this->__PVT__grant_fifo_pop = (0U 
                                                   != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                    if (((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready)) 
                         & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_fifo_status_d = 2U;
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[0U];
                        this->__PVT__valid_fifo_to_master[1U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[1U];
                        this->__PVT__valid_fifo_to_master[2U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[2U];
                        this->__PVT__valid_fifo_to_master[3U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[3U];
                        this->__PVT__valid_fifo_to_master[4U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[4U];
                        this->__PVT__valid_fifo_to_master[5U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[5U];
                        this->__PVT__valid_fifo_to_master[6U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[6U];
                        this->__PVT__valid_fifo_to_master[7U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[7U];
                        this->__PVT__valid_fifo_to_master[8U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[8U];
                        this->__PVT__to_output_bus_valid = 1U;
                    }
                    this->__PVT__valid_counter_d = 
                        (0x3fU & ((IData)(vlTOPp->plb_master_mem_valid)
                                   ? ((IData)(1U) + (IData)(this->__PVT__valid_counter_q))
                                   : (IData)(this->__PVT__valid_counter_q)));
                }
            }
            if (((((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                   & (~ (IData)(this->__PVT__grant_fifo_push))) 
                  | (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
                 | (((0U == ((0x1fU & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                             - (IData)(1U))) & ((IData)(this->__PVT__grant_fifo_pop) 
                                                & (~ (IData)(this->__PVT__grant_fifo_push)))) 
                    & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready)))) {
                this->__PVT__valid_fifo_status_d = 0U;
            }
        } else {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                this->__PVT__valid_do_walk = (0U == 
                                              (3U & 
                                               ((((0x22ffU 
                                                   >= 
                                                   (0x3fffU 
                                                    & ((IData)(0x118U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x118U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 0U
                                                     : 
                                                    (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                     ((IData)(6U) 
                                                      + 
                                                      (0x1ffU 
                                                       & (((IData)(0x118U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x118U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                   | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                      ((IData)(5U) 
                                                       + 
                                                       (0x1ffU 
                                                        & (((IData)(0x118U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                           >> 5U)))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x118U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                   : 0U) 
                                                 << 0x1eU) 
                                                | (((0x22ffU 
                                                     >= 
                                                     (0x3fffU 
                                                      & ((IData)(0x118U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x118U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                       ? 0U
                                                       : 
                                                      (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                       ((IData)(5U) 
                                                        + 
                                                        (0x1ffU 
                                                         & (((IData)(0x118U) 
                                                             * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                            >> 5U)))] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x118U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                     | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                        ((IData)(4U) 
                                                         + 
                                                         (0x1ffU 
                                                          & (((IData)(0x118U) 
                                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                             >> 5U)))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x118U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                     : 0U) 
                                                   >> 2U))));
                if (this->__PVT__valid_do_walk) {
                    if (((IData)(vlTOPp->plb_master_mem_valid) 
                         | (0U != (IData)(this->__PVT__valid_counter_q)))) {
                        if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                             & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__grant_fifo_pop = 1U;
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_counter_d 
                                = (0x3fU & ((IData)(vlTOPp->plb_master_mem_valid)
                                             ? (IData)(this->__PVT__valid_counter_q)
                                             : ((IData)(this->__PVT__valid_counter_q) 
                                                - (IData)(1U))));
                        }
                    }
                } else {
                    if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop = 1U;
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_counter_d 
                            = (0x3fU & ((IData)(vlTOPp->plb_master_mem_valid)
                                         ? ((IData)(1U) 
                                            + (IData)(this->__PVT__valid_counter_q))
                                         : (IData)(this->__PVT__valid_counter_q)));
                    }
                }
                if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready) {
                    if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                                * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))) {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[1U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(1U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[2U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(2U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[3U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(3U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[4U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(4U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[5U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(6U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(5U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[6U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(7U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(6U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[7U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(8U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(7U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[8U] 
                            = (0xffffffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                              ? 0U : 
                                             (this->__PVT__valid_fifo_u__DOT__mem_q[
                                              ((IData)(9U) 
                                               + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                            | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                               ((IData)(8U) 
                                                + (0x1ffU 
                                                   & (((IData)(0x118U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))));
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] = 0U;
                        this->__PVT__valid_fifo_to_master[1U] = 0U;
                        this->__PVT__valid_fifo_to_master[2U] = 0U;
                        this->__PVT__valid_fifo_to_master[3U] = 0U;
                        this->__PVT__valid_fifo_to_master[4U] = 0U;
                        this->__PVT__valid_fifo_to_master[5U] = 0U;
                        this->__PVT__valid_fifo_to_master[6U] = 0U;
                        this->__PVT__valid_fifo_to_master[7U] = 0U;
                        this->__PVT__valid_fifo_to_master[8U] = 0U;
                    }
                    this->__PVT__to_output_bus_valid = 1U;
                    this->__PVT__valid_fifo_status_d 
                        = (((0U == ((0x1fU & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                                    - (IData)(1U))) 
                            & (~ (IData)(this->__PVT__valid_fifo_push)))
                            ? 1U : 2U);
                } else {
                    this->__PVT__valid_fifo_status_d = 2U;
                }
            }
        }
    }
    this->__PVT__valid_fifo_u__DOT__read_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__read_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__read_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__read_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__status_cnt_n = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__grant_fifo_push) & (IData)(this->__PVT__grant_fifo_pop)) 
          & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    }
    this->__PVT__valid_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__valid_fifo_u__DOT__write_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q)));
    }
    this->__PVT__valid_fifo_u__DOT__status_cnt_n = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__valid_fifo_push) & (IData)(this->__PVT__valid_fifo_pop)) 
          & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x117U)) {
        this->__PVT__valid_fifo_u__DOT__mem_n[__Vilp] 
            = this->__PVT__valid_fifo_u__DOT__mem_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->valid_fifo_u__DOT____Vlvbound1[0U] = 
            this->__PVT__grant_fifo_to_valid_fifo[0U];
        this->valid_fifo_u__DOT____Vlvbound1[1U] = 
            this->__PVT__grant_fifo_to_valid_fifo[1U];
        this->valid_fifo_u__DOT____Vlvbound1[2U] = 
            this->__PVT__grant_fifo_to_valid_fifo[2U];
        this->valid_fifo_u__DOT____Vlvbound1[3U] = 
            this->__PVT__grant_fifo_to_valid_fifo[3U];
        this->valid_fifo_u__DOT____Vlvbound1[4U] = 
            this->__PVT__grant_fifo_to_valid_fifo[4U];
        this->valid_fifo_u__DOT____Vlvbound1[5U] = 
            this->__PVT__grant_fifo_to_valid_fifo[5U];
        this->valid_fifo_u__DOT____Vlvbound1[6U] = 
            this->__PVT__grant_fifo_to_valid_fifo[6U];
        this->valid_fifo_u__DOT____Vlvbound1[7U] = 
            this->__PVT__grant_fifo_to_valid_fifo[7U];
        this->valid_fifo_u__DOT____Vlvbound1[8U] = 
            this->__PVT__grant_fifo_to_valid_fifo[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(280,(0x3fffU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))), this->__PVT__valid_fifo_u__DOT__mem_n, this->valid_fifo_u__DOT____Vlvbound1);
        }
    }
    this->stage_master_valid = ((~ ((2U == (IData)(this->__PVT__flush_status_q)) 
                                    & (this->__PVT__valid_fifo_to_master[8U] 
                                       >> 0xbU))) & (IData)(this->__PVT__to_output_bus_valid));
    this->__PVT__spec_transaction_cnt_d = this->__PVT__spec_transaction_cnt_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[8U] 
                                                  >> 0xbU))) {
        this->__PVT__spec_transaction_cnt_d = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(this->__PVT__spec_transaction_cnt_q)));
        if (((IData)(this->__PVT__to_output_bus_valid) 
             & (this->__PVT__valid_fifo_to_master[8U] 
                >> 0xbU))) {
            this->__PVT__spec_transaction_cnt_d = this->__PVT__spec_transaction_cnt_q;
        }
    } else {
        if ((((IData)(this->__PVT__to_output_bus_valid) 
              & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready)) 
             & (this->__PVT__valid_fifo_to_master[8U] 
                >> 0xbU))) {
            this->__PVT__spec_transaction_cnt_d = (0x3fU 
                                                   & ((IData)(this->__PVT__spec_transaction_cnt_q) 
                                                      - (IData)(1U)));
        }
    }
    if (((2U == (IData)(this->__PVT__flush_status_q)) 
         & (this->__PVT__valid_fifo_to_master[8U] >> 0xbU))) {
        this->stage_master_data[0U] = 0xddddddddU;
        this->stage_master_data[1U] = 0xddddddddU;
        this->stage_master_data[2U] = 0U;
        this->stage_master_data[3U] = 0U;
        this->stage_master_data[4U] = 0U;
        this->stage_master_data[5U] = 0U;
        this->stage_master_data[6U] = 0U;
        this->stage_master_data[7U] = 0U;
        this->stage_master_data[8U] = 0U;
    } else {
        this->stage_master_data[0U] = this->__PVT__valid_fifo_to_master[0U];
        this->stage_master_data[1U] = this->__PVT__valid_fifo_to_master[1U];
        this->stage_master_data[2U] = this->__PVT__valid_fifo_to_master[2U];
        this->stage_master_data[3U] = this->__PVT__valid_fifo_to_master[3U];
        this->stage_master_data[4U] = this->__PVT__valid_fifo_to_master[4U];
        this->stage_master_data[5U] = this->__PVT__valid_fifo_to_master[5U];
        this->stage_master_data[6U] = this->__PVT__valid_fifo_to_master[6U];
        this->stage_master_data[7U] = this->__PVT__valid_fifo_to_master[7U];
        this->stage_master_data[8U] = this->__PVT__valid_fifo_to_master[8U];
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__11(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__11\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__grant_fifo_to_valid_fifo[6U] = ((0xfU 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[6U]) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(vlTOPp->plb_master_mem_rdata) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[7U] = ((0xfU 
                                                  & ((IData)(vlTOPp->plb_master_mem_rdata) 
                                                     >> 0x1cU)) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               (vlTOPp->plb_master_mem_rdata 
                                                                >> 0x20U)) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[8U] = ((0xfffff0U 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[8U]) 
                                                 | (0xfU 
                                                    & ((IData)(
                                                               (vlTOPp->plb_master_mem_rdata 
                                                                >> 0x20U)) 
                                                       >> 0x1cU)));
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__16(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__16\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__spec_transaction_cnt_q = ((IData)(vlTOPp->rst_ni)
                                            ? ((IData)(this->__PVT__flush_fifo)
                                                ? 0U
                                                : (IData)(this->__PVT__spec_transaction_cnt_d))
                                            : 0U);
    if ((1U & ((~ (IData)(vlTOPp->rst_ni)) | (IData)(this->__PVT__flush_fifo)))) {
        this->__PVT__valid_counter_q = 0U;
        this->__PVT__valid_fifo_status_q = 0U;
        this->__PVT__grant_fifo_status_q = 0U;
    } else {
        this->__PVT__valid_counter_q = this->__PVT__valid_counter_d;
        this->__PVT__valid_fifo_status_q = this->__PVT__valid_fifo_status_d;
        this->__PVT__grant_fifo_status_q = this->__PVT__grant_fifo_status_d;
    }
    this->__PVT__flush_status_q = ((IData)(vlTOPp->rst_ni)
                                    ? (IData)(this->__PVT__flush_status_d)
                                    : 0U);
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__req_bus_ready = 0U;
        }
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__req_bus_ready = 0U;
        }
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__21(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__21\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    if (vlTOPp->rst_ni) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_q 
            = this->__PVT__grant_fifo_u__DOT__write_pointer_n;
        this->__PVT__valid_fifo_u__DOT__write_pointer_q 
            = ((IData)(this->__PVT__flush_fifo) ? 0U
                : (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_n));
        this->__PVT__valid_fifo_u__DOT__read_pointer_q 
            = ((IData)(this->__PVT__flush_fifo) ? 0U
                : (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_n));
    } else {
        this->__PVT__grant_fifo_u__DOT__write_pointer_q = 0U;
        this->__PVT__valid_fifo_u__DOT__write_pointer_q = 0U;
        this->__PVT__valid_fifo_u__DOT__read_pointer_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(this->__PVT__valid_fifo_u__DOT__gate_clock)))) {
            __Vilp = 0U;
            while ((__Vilp <= 0x117U)) {
                this->__PVT__valid_fifo_u__DOT__mem_q[__Vilp] 
                    = this->__PVT__valid_fifo_u__DOT__mem_n[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x117U)) {
            this->__PVT__valid_fifo_u__DOT__mem_q[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    this->__PVT__grant_fifo_u__DOT__read_pointer_q 
        = ((IData)(vlTOPp->rst_ni) ? (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_n)
            : 0U);
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(this->__PVT__grant_fifo_u__DOT__gate_clock)))) {
            __Vilp = 0U;
            while ((__Vilp <= 0x117U)) {
                this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp] 
                    = this->__PVT__grant_fifo_u__DOT__mem_n[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x117U)) {
            this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlTOPp->rst_ni) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_q 
            = ((IData)(this->__PVT__flush_fifo) ? 0U
                : (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_n));
        this->__PVT__grant_fifo_u__DOT__status_cnt_q 
            = this->__PVT__grant_fifo_u__DOT__status_cnt_n;
    } else {
        this->__PVT__valid_fifo_u__DOT__status_cnt_q = 0U;
        this->__PVT__grant_fifo_u__DOT__status_cnt_q = 0U;
    }
    if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))) {
        this->__Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  (0x1ffU & (((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                             >> 5U))] >> (0x1fU & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[8U] 
            = (0xffffffU & (((0U == (0x1fU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                              ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                                      ((IData)(9U) 
                                       + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x118U) 
                                                * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                            | (this->__PVT__grant_fifo_u__DOT__mem_q[
                               ((IData)(8U) + (0x1ffU 
                                               & (((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))));
    } else {
        this->__Vcellout__grant_fifo_u__data_o[0U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[1U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[2U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[3U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[4U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[5U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[6U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[7U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[8U] = 0U;
    }
    this->__PVT__stage_usage = (0x3fU & ((0x1fU & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                                         + (0x1fU & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))));
    this->__PVT__flush_status_d = ((2U & (IData)(this->__PVT__flush_status_q))
                                    ? ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [2U]) ? 3U
                                            : 0U) : 
                                       ((0U == (IData)(this->__PVT__spec_transaction_cnt_q))
                                         ? 0U : 2U))
                                    : ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))
                                            ? 3U : 1U)
                                        : ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [2U]) ? 
                                           ((1U == 
                                             vlTOPp->mptw_top__DOT__system_control_flush
                                             [2U]) ? 1U
                                             : 2U) : 0U)));
    this->stage_status_flushed = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        this->stage_status_flushed = 3U;
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->stage_status_flushed = 1U;
            if ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                this->stage_status_flushed = 3U;
            }
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [2U])) {
                this->stage_status_flushed = 1U;
            }
        }
    }
    this->__PVT__grant_fifo_to_valid_fifo[0U] = this->__Vcellout__grant_fifo_u__data_o[0U];
    this->__PVT__grant_fifo_to_valid_fifo[1U] = this->__Vcellout__grant_fifo_u__data_o[1U];
    this->__PVT__grant_fifo_to_valid_fifo[2U] = this->__Vcellout__grant_fifo_u__data_o[2U];
    this->__PVT__grant_fifo_to_valid_fifo[3U] = this->__Vcellout__grant_fifo_u__data_o[3U];
    this->__PVT__grant_fifo_to_valid_fifo[4U] = this->__Vcellout__grant_fifo_u__data_o[4U];
    this->__PVT__grant_fifo_to_valid_fifo[5U] = this->__Vcellout__grant_fifo_u__data_o[5U];
    this->__PVT__grant_fifo_to_valid_fifo[6U] = this->__Vcellout__grant_fifo_u__data_o[6U];
    this->__PVT__grant_fifo_to_valid_fifo[7U] = this->__Vcellout__grant_fifo_u__data_o[7U];
    this->__PVT__grant_fifo_to_valid_fifo[8U] = this->__Vcellout__grant_fifo_u__data_o[8U];
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__26(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__26\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    this->__PVT__grant_fifo_status_d = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if ((vlTOPp->mptw_top__DOT__issue_stage_master_valid
             [1U] & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                      & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                     & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_status_d = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U] 
                                                        >> 2U))))
                                                 ? 
                                                ((IData)(vlTOPp->plb_master_mem_gnt)
                                                  ? 0U
                                                  : 1U)
                                                 : 0U);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__grant_fifo_status_d = 1U;
            if (vlTOPp->plb_master_mem_gnt) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > ((IData)(1U) + (IData)(this->__PVT__stage_usage)))
                      ? 0U : 2U);
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > (IData)(this->__PVT__stage_usage))
                      ? 0U : 2U);
            }
        }
    }
    this->memory_master_mem_addr = 0ULL;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if ((vlTOPp->mptw_top__DOT__issue_stage_master_valid
             [1U] & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                      & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                     & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_addr = (((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[2U])));
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_addr = (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[2U])));
        }
    }
    this->memory_master_mem_req = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if ((vlTOPp->mptw_top__DOT__issue_stage_master_valid
             [1U] & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                      & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                     & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_req = 1U;
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_req = vlTOPp->mptw_top__DOT__issue_stage_master_valid
                [1U];
        }
    }
    this->__PVT__grant_fifo_push = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if ((vlTOPp->mptw_top__DOT__issue_stage_master_valid
             [1U] & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                      & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                     & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_push = ((0U != 
                                             (3U & 
                                              ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5U] 
                                                << 0x1eU) 
                                               | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U] 
                                                  >> 2U)))) 
                                            | (IData)(vlTOPp->plb_master_mem_gnt));
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->plb_master_mem_gnt) {
                this->__PVT__grant_fifo_push = 1U;
            }
        }
    }
    this->__PVT__req_bus_ready = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if ((vlTOPp->mptw_top__DOT__issue_stage_master_valid
             [1U] & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                      & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                     & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__req_bus_ready = ((0U != (3U 
                                                  & ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U] 
                                                        >> 2U)))) 
                                          | (IData)(vlTOPp->plb_master_mem_gnt));
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->plb_master_mem_gnt) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > ((IData)(1U) 
                                                 + (IData)(this->__PVT__stage_usage)));
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > (IData)(this->__PVT__stage_usage));
            }
        }
    }
    this->__PVT__flush_grant_fifo_pop = 0U;
    if ((1U & (~ ((IData)(this->__PVT__flush_status_q) 
                  >> 1U)))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            if ((0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                if (((IData)(vlTOPp->plb_master_mem_valid) 
                     | (0U != (3U & ((this->__PVT__grant_fifo_to_valid_fifo[5U] 
                                      << 0x1eU) | (
                                                   this->__PVT__grant_fifo_to_valid_fifo[4U] 
                                                   >> 2U)))))) {
                    this->__PVT__flush_grant_fifo_pop = 1U;
                }
            }
        }
    }
    this->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q)));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x117U)) {
        this->__PVT__grant_fifo_u__DOT__mem_n[__Vilp] 
            = this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->grant_fifo_u__DOT____Vlvbound1[0U] = 
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[0U];
        this->grant_fifo_u__DOT____Vlvbound1[1U] = 
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[1U];
        this->grant_fifo_u__DOT____Vlvbound1[2U] = 
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[2U];
        this->grant_fifo_u__DOT____Vlvbound1[3U] = 
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[3U];
        this->grant_fifo_u__DOT____Vlvbound1[4U] = 
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[4U];
        this->grant_fifo_u__DOT____Vlvbound1[5U] = 
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[5U];
        this->grant_fifo_u__DOT____Vlvbound1[6U] = 
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[6U];
        this->grant_fifo_u__DOT____Vlvbound1[7U] = 
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[7U];
        this->grant_fifo_u__DOT____Vlvbound1[8U] = 
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__input_transaction[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(280,(0x3fffU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))), this->__PVT__grant_fifo_u__DOT__mem_n, this->grant_fifo_u__DOT____Vlvbound1);
        }
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__36(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__36\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__flush_fifo = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        }
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [2U])) {
                this->__PVT__flush_fifo = (1U == vlTOPp->mptw_top__DOT__system_control_flush
                                           [2U]);
            }
        }
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__7(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__7\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    this->__PVT__valid_fifo_pop = 0U;
    if ((0U != (IData)(this->__PVT__valid_fifo_status_q))) {
        if ((1U != (IData)(this->__PVT__valid_fifo_status_q))) {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) {
                    this->__PVT__valid_fifo_pop = 1U;
                }
            }
        }
    }
    this->__PVT__valid_do_walk = 1U;
    this->__PVT__valid_counter_d = this->__PVT__valid_counter_q;
    this->__PVT__grant_fifo_pop = ((1U == (IData)(this->__PVT__flush_status_q)) 
                                   & (IData)(this->__PVT__flush_grant_fifo_pop));
    this->__PVT__valid_fifo_push = 0U;
    this->__PVT__valid_fifo_to_master[0U] = 0U;
    this->__PVT__valid_fifo_to_master[1U] = 0U;
    this->__PVT__valid_fifo_to_master[2U] = 0U;
    this->__PVT__valid_fifo_to_master[3U] = 0U;
    this->__PVT__valid_fifo_to_master[4U] = 0U;
    this->__PVT__valid_fifo_to_master[5U] = 0U;
    this->__PVT__valid_fifo_to_master[6U] = 0U;
    this->__PVT__valid_fifo_to_master[7U] = 0U;
    this->__PVT__valid_fifo_to_master[8U] = 0U;
    this->__PVT__to_output_bus_valid = 0U;
    this->__PVT__valid_fifo_status_d = 0U;
    if ((0U == (IData)(this->__PVT__valid_fifo_status_q))) {
        if (((IData)(this->__PVT__grant_fifo_push) 
             & (0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
            this->__PVT__valid_fifo_status_d = 1U;
        }
    } else {
        if ((1U == (IData)(this->__PVT__valid_fifo_status_q))) {
            this->__PVT__valid_fifo_status_d = 1U;
            this->__PVT__valid_do_walk = (0U == (3U 
                                                 & ((this->__Vcellout__grant_fifo_u__data_o[5U] 
                                                     << 0x1eU) 
                                                    | (this->__Vcellout__grant_fifo_u__data_o[4U] 
                                                       >> 2U))));
            if (this->__PVT__valid_do_walk) {
                if ((vlTOPp->walking_mem_master_mem_valid
                     [0U] | (0U != (IData)(this->__PVT__valid_counter_q)))) {
                    if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop 
                            = (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                        if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
                             & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_fifo_status_d = 2U;
                        } else {
                            this->__PVT__valid_fifo_to_master[0U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[0U];
                            this->__PVT__valid_fifo_to_master[1U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[1U];
                            this->__PVT__valid_fifo_to_master[2U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[2U];
                            this->__PVT__valid_fifo_to_master[3U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[3U];
                            this->__PVT__valid_fifo_to_master[4U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[4U];
                            this->__PVT__valid_fifo_to_master[5U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[5U];
                            this->__PVT__valid_fifo_to_master[6U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[6U];
                            this->__PVT__valid_fifo_to_master[7U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[7U];
                            this->__PVT__valid_fifo_to_master[8U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[8U];
                            this->__PVT__to_output_bus_valid = 1U;
                        }
                        this->__PVT__valid_counter_d 
                            = (0x3fU & (vlTOPp->walking_mem_master_mem_valid
                                        [0U] ? (IData)(this->__PVT__valid_counter_q)
                                         : ((IData)(this->__PVT__valid_counter_q) 
                                            - (IData)(1U))));
                    }
                }
            } else {
                if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                     & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                    this->__PVT__grant_fifo_pop = (0U 
                                                   != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                    if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
                         & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_fifo_status_d = 2U;
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[0U];
                        this->__PVT__valid_fifo_to_master[1U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[1U];
                        this->__PVT__valid_fifo_to_master[2U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[2U];
                        this->__PVT__valid_fifo_to_master[3U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[3U];
                        this->__PVT__valid_fifo_to_master[4U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[4U];
                        this->__PVT__valid_fifo_to_master[5U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[5U];
                        this->__PVT__valid_fifo_to_master[6U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[6U];
                        this->__PVT__valid_fifo_to_master[7U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[7U];
                        this->__PVT__valid_fifo_to_master[8U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[8U];
                        this->__PVT__to_output_bus_valid = 1U;
                    }
                    this->__PVT__valid_counter_d = 
                        (0x3fU & (vlTOPp->walking_mem_master_mem_valid
                                  [0U] ? ((IData)(1U) 
                                          + (IData)(this->__PVT__valid_counter_q))
                                   : (IData)(this->__PVT__valid_counter_q)));
                }
            }
            if (((((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                   & (~ (IData)(this->__PVT__grant_fifo_push))) 
                  | (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
                 | (((0U == ((0x1fU & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                             - (IData)(1U))) & ((IData)(this->__PVT__grant_fifo_pop) 
                                                & (~ (IData)(this->__PVT__grant_fifo_push)))) 
                    & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)))) {
                this->__PVT__valid_fifo_status_d = 0U;
            }
        } else {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                this->__PVT__valid_do_walk = (0U == 
                                              (3U & 
                                               ((((0x22ffU 
                                                   >= 
                                                   (0x3fffU 
                                                    & ((IData)(0x118U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x118U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 0U
                                                     : 
                                                    (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                     ((IData)(6U) 
                                                      + 
                                                      (0x1ffU 
                                                       & (((IData)(0x118U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x118U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                   | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                      ((IData)(5U) 
                                                       + 
                                                       (0x1ffU 
                                                        & (((IData)(0x118U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                           >> 5U)))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x118U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                   : 0U) 
                                                 << 0x1eU) 
                                                | (((0x22ffU 
                                                     >= 
                                                     (0x3fffU 
                                                      & ((IData)(0x118U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x118U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                       ? 0U
                                                       : 
                                                      (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                       ((IData)(5U) 
                                                        + 
                                                        (0x1ffU 
                                                         & (((IData)(0x118U) 
                                                             * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                            >> 5U)))] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x118U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                     | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                        ((IData)(4U) 
                                                         + 
                                                         (0x1ffU 
                                                          & (((IData)(0x118U) 
                                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                             >> 5U)))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x118U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                     : 0U) 
                                                   >> 2U))));
                if (this->__PVT__valid_do_walk) {
                    if ((vlTOPp->walking_mem_master_mem_valid
                         [0U] | (0U != (IData)(this->__PVT__valid_counter_q)))) {
                        if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                             & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__grant_fifo_pop = 1U;
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_counter_d 
                                = (0x3fU & (vlTOPp->walking_mem_master_mem_valid
                                            [0U] ? (IData)(this->__PVT__valid_counter_q)
                                             : ((IData)(this->__PVT__valid_counter_q) 
                                                - (IData)(1U))));
                        }
                    }
                } else {
                    if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop = 1U;
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_counter_d 
                            = (0x3fU & (vlTOPp->walking_mem_master_mem_valid
                                        [0U] ? ((IData)(1U) 
                                                + (IData)(this->__PVT__valid_counter_q))
                                         : (IData)(this->__PVT__valid_counter_q)));
                    }
                }
                if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) {
                    if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                                * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))) {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[1U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(1U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[2U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(2U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[3U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(3U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[4U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(4U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[5U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(6U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(5U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[6U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(7U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(6U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[7U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(8U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(7U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[8U] 
                            = (0xffffffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                              ? 0U : 
                                             (this->__PVT__valid_fifo_u__DOT__mem_q[
                                              ((IData)(9U) 
                                               + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                            | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                               ((IData)(8U) 
                                                + (0x1ffU 
                                                   & (((IData)(0x118U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))));
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] = 0U;
                        this->__PVT__valid_fifo_to_master[1U] = 0U;
                        this->__PVT__valid_fifo_to_master[2U] = 0U;
                        this->__PVT__valid_fifo_to_master[3U] = 0U;
                        this->__PVT__valid_fifo_to_master[4U] = 0U;
                        this->__PVT__valid_fifo_to_master[5U] = 0U;
                        this->__PVT__valid_fifo_to_master[6U] = 0U;
                        this->__PVT__valid_fifo_to_master[7U] = 0U;
                        this->__PVT__valid_fifo_to_master[8U] = 0U;
                    }
                    this->__PVT__to_output_bus_valid = 1U;
                    this->__PVT__valid_fifo_status_d 
                        = (((0U == ((0x1fU & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                                    - (IData)(1U))) 
                            & (~ (IData)(this->__PVT__valid_fifo_push)))
                            ? 1U : 2U);
                } else {
                    this->__PVT__valid_fifo_status_d = 2U;
                }
            }
        }
    }
    this->__PVT__valid_fifo_u__DOT__read_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__read_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__read_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__read_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__status_cnt_n = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__grant_fifo_push) & (IData)(this->__PVT__grant_fifo_pop)) 
          & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    }
    this->__PVT__valid_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__valid_fifo_u__DOT__write_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q)));
    }
    this->__PVT__valid_fifo_u__DOT__status_cnt_n = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__valid_fifo_push) & (IData)(this->__PVT__valid_fifo_pop)) 
          & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x117U)) {
        this->__PVT__valid_fifo_u__DOT__mem_n[__Vilp] 
            = this->__PVT__valid_fifo_u__DOT__mem_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->valid_fifo_u__DOT____Vlvbound1[0U] = 
            this->__PVT__grant_fifo_to_valid_fifo[0U];
        this->valid_fifo_u__DOT____Vlvbound1[1U] = 
            this->__PVT__grant_fifo_to_valid_fifo[1U];
        this->valid_fifo_u__DOT____Vlvbound1[2U] = 
            this->__PVT__grant_fifo_to_valid_fifo[2U];
        this->valid_fifo_u__DOT____Vlvbound1[3U] = 
            this->__PVT__grant_fifo_to_valid_fifo[3U];
        this->valid_fifo_u__DOT____Vlvbound1[4U] = 
            this->__PVT__grant_fifo_to_valid_fifo[4U];
        this->valid_fifo_u__DOT____Vlvbound1[5U] = 
            this->__PVT__grant_fifo_to_valid_fifo[5U];
        this->valid_fifo_u__DOT____Vlvbound1[6U] = 
            this->__PVT__grant_fifo_to_valid_fifo[6U];
        this->valid_fifo_u__DOT____Vlvbound1[7U] = 
            this->__PVT__grant_fifo_to_valid_fifo[7U];
        this->valid_fifo_u__DOT____Vlvbound1[8U] = 
            this->__PVT__grant_fifo_to_valid_fifo[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(280,(0x3fffU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))), this->__PVT__valid_fifo_u__DOT__mem_n, this->valid_fifo_u__DOT____Vlvbound1);
        }
    }
    this->stage_master_valid = ((~ ((2U == (IData)(this->__PVT__flush_status_q)) 
                                    & (this->__PVT__valid_fifo_to_master[8U] 
                                       >> 0xbU))) & (IData)(this->__PVT__to_output_bus_valid));
    this->__PVT__spec_transaction_cnt_d = this->__PVT__spec_transaction_cnt_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                                                  >> 0xbU))) {
        this->__PVT__spec_transaction_cnt_d = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(this->__PVT__spec_transaction_cnt_q)));
        if (((IData)(this->__PVT__to_output_bus_valid) 
             & (this->__PVT__valid_fifo_to_master[8U] 
                >> 0xbU))) {
            this->__PVT__spec_transaction_cnt_d = this->__PVT__spec_transaction_cnt_q;
        }
    } else {
        if ((((IData)(this->__PVT__to_output_bus_valid) 
              & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
             & (this->__PVT__valid_fifo_to_master[8U] 
                >> 0xbU))) {
            this->__PVT__spec_transaction_cnt_d = (0x3fU 
                                                   & ((IData)(this->__PVT__spec_transaction_cnt_q) 
                                                      - (IData)(1U)));
        }
    }
    if (((2U == (IData)(this->__PVT__flush_status_q)) 
         & (this->__PVT__valid_fifo_to_master[8U] >> 0xbU))) {
        this->stage_master_data[0U] = 0xddddddddU;
        this->stage_master_data[1U] = 0xddddddddU;
        this->stage_master_data[2U] = 0U;
        this->stage_master_data[3U] = 0U;
        this->stage_master_data[4U] = 0U;
        this->stage_master_data[5U] = 0U;
        this->stage_master_data[6U] = 0U;
        this->stage_master_data[7U] = 0U;
        this->stage_master_data[8U] = 0U;
    } else {
        this->stage_master_data[0U] = this->__PVT__valid_fifo_to_master[0U];
        this->stage_master_data[1U] = this->__PVT__valid_fifo_to_master[1U];
        this->stage_master_data[2U] = this->__PVT__valid_fifo_to_master[2U];
        this->stage_master_data[3U] = this->__PVT__valid_fifo_to_master[3U];
        this->stage_master_data[4U] = this->__PVT__valid_fifo_to_master[4U];
        this->stage_master_data[5U] = this->__PVT__valid_fifo_to_master[5U];
        this->stage_master_data[6U] = this->__PVT__valid_fifo_to_master[6U];
        this->stage_master_data[7U] = this->__PVT__valid_fifo_to_master[7U];
        this->stage_master_data[8U] = this->__PVT__valid_fifo_to_master[8U];
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__12(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__12\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__grant_fifo_to_valid_fifo[6U] = ((0xfU 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[6U]) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               vlTOPp->walking_mem_master_mem_rdata
                                                               [0U]) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[7U] = ((0xfU 
                                                  & ((IData)(
                                                             vlTOPp->walking_mem_master_mem_rdata
                                                             [0U]) 
                                                     >> 0x1cU)) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [0U] 
                                                                >> 0x20U)) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[8U] = ((0xfffff0U 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[8U]) 
                                                 | (0xfU 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [0U] 
                                                                >> 0x20U)) 
                                                       >> 0x1cU)));
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__22(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__22\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    if (vlTOPp->rst_ni) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_q 
            = this->__PVT__grant_fifo_u__DOT__write_pointer_n;
        this->__PVT__valid_fifo_u__DOT__write_pointer_q 
            = ((IData)(this->__PVT__flush_fifo) ? 0U
                : (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_n));
        this->__PVT__valid_fifo_u__DOT__read_pointer_q 
            = ((IData)(this->__PVT__flush_fifo) ? 0U
                : (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_n));
    } else {
        this->__PVT__grant_fifo_u__DOT__write_pointer_q = 0U;
        this->__PVT__valid_fifo_u__DOT__write_pointer_q = 0U;
        this->__PVT__valid_fifo_u__DOT__read_pointer_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(this->__PVT__valid_fifo_u__DOT__gate_clock)))) {
            __Vilp = 0U;
            while ((__Vilp <= 0x117U)) {
                this->__PVT__valid_fifo_u__DOT__mem_q[__Vilp] 
                    = this->__PVT__valid_fifo_u__DOT__mem_n[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x117U)) {
            this->__PVT__valid_fifo_u__DOT__mem_q[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    this->__PVT__grant_fifo_u__DOT__read_pointer_q 
        = ((IData)(vlTOPp->rst_ni) ? (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_n)
            : 0U);
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(this->__PVT__grant_fifo_u__DOT__gate_clock)))) {
            __Vilp = 0U;
            while ((__Vilp <= 0x117U)) {
                this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp] 
                    = this->__PVT__grant_fifo_u__DOT__mem_n[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x117U)) {
            this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlTOPp->rst_ni) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_q 
            = ((IData)(this->__PVT__flush_fifo) ? 0U
                : (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_n));
        this->__PVT__grant_fifo_u__DOT__status_cnt_q 
            = this->__PVT__grant_fifo_u__DOT__status_cnt_n;
    } else {
        this->__PVT__valid_fifo_u__DOT__status_cnt_q = 0U;
        this->__PVT__grant_fifo_u__DOT__status_cnt_q = 0U;
    }
    if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))) {
        this->__Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  (0x1ffU & (((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                             >> 5U))] >> (0x1fU & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[8U] 
            = (0xffffffU & (((0U == (0x1fU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                              ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                                      ((IData)(9U) 
                                       + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x118U) 
                                                * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                            | (this->__PVT__grant_fifo_u__DOT__mem_q[
                               ((IData)(8U) + (0x1ffU 
                                               & (((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))));
    } else {
        this->__Vcellout__grant_fifo_u__data_o[0U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[1U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[2U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[3U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[4U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[5U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[6U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[7U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[8U] = 0U;
    }
    this->__PVT__stage_usage = (0x3fU & ((0x1fU & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                                         + (0x1fU & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))));
    this->__PVT__flush_status_d = ((2U & (IData)(this->__PVT__flush_status_q))
                                    ? ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [3U]) ? 3U
                                            : 0U) : 
                                       ((0U == (IData)(this->__PVT__spec_transaction_cnt_q))
                                         ? 0U : 2U))
                                    : ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))
                                            ? 3U : 1U)
                                        : ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [3U]) ? 
                                           ((1U == 
                                             vlTOPp->mptw_top__DOT__system_control_flush
                                             [3U]) ? 1U
                                             : 2U) : 0U)));
    this->stage_status_flushed = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        this->stage_status_flushed = 3U;
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->stage_status_flushed = 1U;
            if ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                this->stage_status_flushed = 3U;
            }
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [3U])) {
                this->stage_status_flushed = 1U;
            }
        }
    }
    this->__PVT__grant_fifo_to_valid_fifo[0U] = this->__Vcellout__grant_fifo_u__data_o[0U];
    this->__PVT__grant_fifo_to_valid_fifo[1U] = this->__Vcellout__grant_fifo_u__data_o[1U];
    this->__PVT__grant_fifo_to_valid_fifo[2U] = this->__Vcellout__grant_fifo_u__data_o[2U];
    this->__PVT__grant_fifo_to_valid_fifo[3U] = this->__Vcellout__grant_fifo_u__data_o[3U];
    this->__PVT__grant_fifo_to_valid_fifo[4U] = this->__Vcellout__grant_fifo_u__data_o[4U];
    this->__PVT__grant_fifo_to_valid_fifo[5U] = this->__Vcellout__grant_fifo_u__data_o[5U];
    this->__PVT__grant_fifo_to_valid_fifo[6U] = this->__Vcellout__grant_fifo_u__data_o[6U];
    this->__PVT__grant_fifo_to_valid_fifo[7U] = this->__Vcellout__grant_fifo_u__data_o[7U];
    this->__PVT__grant_fifo_to_valid_fifo[8U] = this->__Vcellout__grant_fifo_u__data_o[8U];
    this->memory_master_mem_addr = 0ULL;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_addr = (((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_addr = (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
        }
    }
    this->memory_master_mem_req = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_req = 1U;
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_req = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid;
        }
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__27(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__27\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    this->__PVT__grant_fifo_status_d = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_status_d = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                        >> 2U))))
                                                 ? 
                                                (vlTOPp->walking_mem_master_mem_gnt
                                                 [0U]
                                                  ? 0U
                                                  : 1U)
                                                 : 0U);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__grant_fifo_status_d = 1U;
            if (vlTOPp->walking_mem_master_mem_gnt[0U]) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > ((IData)(1U) + (IData)(this->__PVT__stage_usage)))
                      ? 0U : 2U);
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > (IData)(this->__PVT__stage_usage))
                      ? 0U : 2U);
            }
        }
    }
    this->__PVT__grant_fifo_push = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_push = ((0U != 
                                             (3U & 
                                              ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                << 0x1eU) 
                                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                  >> 2U)))) 
                                            | vlTOPp->walking_mem_master_mem_gnt
                                            [0U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->walking_mem_master_mem_gnt[0U]) {
                this->__PVT__grant_fifo_push = 1U;
            }
        }
    }
    this->__PVT__req_bus_ready = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__req_bus_ready = ((0U != (3U 
                                                  & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                        >> 2U)))) 
                                          | vlTOPp->walking_mem_master_mem_gnt
                                          [0U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->walking_mem_master_mem_gnt[0U]) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > ((IData)(1U) 
                                                 + (IData)(this->__PVT__stage_usage)));
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > (IData)(this->__PVT__stage_usage));
            }
        }
    }
    this->__PVT__flush_grant_fifo_pop = 0U;
    if ((1U & (~ ((IData)(this->__PVT__flush_status_q) 
                  >> 1U)))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            if ((0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                if ((vlTOPp->walking_mem_master_mem_valid
                     [0U] | (0U != (3U & ((this->__PVT__grant_fifo_to_valid_fifo[5U] 
                                           << 0x1eU) 
                                          | (this->__PVT__grant_fifo_to_valid_fifo[4U] 
                                             >> 2U)))))) {
                    this->__PVT__flush_grant_fifo_pop = 1U;
                }
            }
        }
    }
    this->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q)));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x117U)) {
        this->__PVT__grant_fifo_u__DOT__mem_n[__Vilp] 
            = this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->grant_fifo_u__DOT____Vlvbound1[0U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
        this->grant_fifo_u__DOT____Vlvbound1[1U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
        this->grant_fifo_u__DOT____Vlvbound1[2U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
        this->grant_fifo_u__DOT____Vlvbound1[3U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
        this->grant_fifo_u__DOT____Vlvbound1[4U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
        this->grant_fifo_u__DOT____Vlvbound1[5U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
        this->grant_fifo_u__DOT____Vlvbound1[6U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
        this->grant_fifo_u__DOT____Vlvbound1[7U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
        this->grant_fifo_u__DOT____Vlvbound1[8U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(280,(0x3fffU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))), this->__PVT__grant_fifo_u__DOT__mem_n, this->grant_fifo_u__DOT____Vlvbound1);
        }
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__37(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__37\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__flush_fifo = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        }
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [3U])) {
                this->__PVT__flush_fifo = (1U == vlTOPp->mptw_top__DOT__system_control_flush
                                           [3U]);
            }
        }
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__8(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__8\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    this->__PVT__valid_fifo_pop = 0U;
    if ((0U != (IData)(this->__PVT__valid_fifo_status_q))) {
        if ((1U != (IData)(this->__PVT__valid_fifo_status_q))) {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) {
                    this->__PVT__valid_fifo_pop = 1U;
                }
            }
        }
    }
    this->__PVT__valid_do_walk = 1U;
    this->__PVT__valid_counter_d = this->__PVT__valid_counter_q;
    this->__PVT__grant_fifo_pop = ((1U == (IData)(this->__PVT__flush_status_q)) 
                                   & (IData)(this->__PVT__flush_grant_fifo_pop));
    this->__PVT__valid_fifo_push = 0U;
    this->__PVT__valid_fifo_to_master[0U] = 0U;
    this->__PVT__valid_fifo_to_master[1U] = 0U;
    this->__PVT__valid_fifo_to_master[2U] = 0U;
    this->__PVT__valid_fifo_to_master[3U] = 0U;
    this->__PVT__valid_fifo_to_master[4U] = 0U;
    this->__PVT__valid_fifo_to_master[5U] = 0U;
    this->__PVT__valid_fifo_to_master[6U] = 0U;
    this->__PVT__valid_fifo_to_master[7U] = 0U;
    this->__PVT__valid_fifo_to_master[8U] = 0U;
    this->__PVT__to_output_bus_valid = 0U;
    this->__PVT__valid_fifo_status_d = 0U;
    if ((0U == (IData)(this->__PVT__valid_fifo_status_q))) {
        if (((IData)(this->__PVT__grant_fifo_push) 
             & (0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
            this->__PVT__valid_fifo_status_d = 1U;
        }
    } else {
        if ((1U == (IData)(this->__PVT__valid_fifo_status_q))) {
            this->__PVT__valid_fifo_status_d = 1U;
            this->__PVT__valid_do_walk = (0U == (3U 
                                                 & ((this->__Vcellout__grant_fifo_u__data_o[5U] 
                                                     << 0x1eU) 
                                                    | (this->__Vcellout__grant_fifo_u__data_o[4U] 
                                                       >> 2U))));
            if (this->__PVT__valid_do_walk) {
                if ((vlTOPp->walking_mem_master_mem_valid
                     [1U] | (0U != (IData)(this->__PVT__valid_counter_q)))) {
                    if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop 
                            = (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                        if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
                             & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_fifo_status_d = 2U;
                        } else {
                            this->__PVT__valid_fifo_to_master[0U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[0U];
                            this->__PVT__valid_fifo_to_master[1U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[1U];
                            this->__PVT__valid_fifo_to_master[2U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[2U];
                            this->__PVT__valid_fifo_to_master[3U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[3U];
                            this->__PVT__valid_fifo_to_master[4U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[4U];
                            this->__PVT__valid_fifo_to_master[5U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[5U];
                            this->__PVT__valid_fifo_to_master[6U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[6U];
                            this->__PVT__valid_fifo_to_master[7U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[7U];
                            this->__PVT__valid_fifo_to_master[8U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[8U];
                            this->__PVT__to_output_bus_valid = 1U;
                        }
                        this->__PVT__valid_counter_d 
                            = (0x3fU & (vlTOPp->walking_mem_master_mem_valid
                                        [1U] ? (IData)(this->__PVT__valid_counter_q)
                                         : ((IData)(this->__PVT__valid_counter_q) 
                                            - (IData)(1U))));
                    }
                }
            } else {
                if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                     & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                    this->__PVT__grant_fifo_pop = (0U 
                                                   != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                    if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
                         & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_fifo_status_d = 2U;
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[0U];
                        this->__PVT__valid_fifo_to_master[1U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[1U];
                        this->__PVT__valid_fifo_to_master[2U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[2U];
                        this->__PVT__valid_fifo_to_master[3U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[3U];
                        this->__PVT__valid_fifo_to_master[4U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[4U];
                        this->__PVT__valid_fifo_to_master[5U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[5U];
                        this->__PVT__valid_fifo_to_master[6U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[6U];
                        this->__PVT__valid_fifo_to_master[7U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[7U];
                        this->__PVT__valid_fifo_to_master[8U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[8U];
                        this->__PVT__to_output_bus_valid = 1U;
                    }
                    this->__PVT__valid_counter_d = 
                        (0x3fU & (vlTOPp->walking_mem_master_mem_valid
                                  [1U] ? ((IData)(1U) 
                                          + (IData)(this->__PVT__valid_counter_q))
                                   : (IData)(this->__PVT__valid_counter_q)));
                }
            }
            if (((((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                   & (~ (IData)(this->__PVT__grant_fifo_push))) 
                  | (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
                 | (((0U == ((0x1fU & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                             - (IData)(1U))) & ((IData)(this->__PVT__grant_fifo_pop) 
                                                & (~ (IData)(this->__PVT__grant_fifo_push)))) 
                    & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)))) {
                this->__PVT__valid_fifo_status_d = 0U;
            }
        } else {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                this->__PVT__valid_do_walk = (0U == 
                                              (3U & 
                                               ((((0x22ffU 
                                                   >= 
                                                   (0x3fffU 
                                                    & ((IData)(0x118U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x118U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 0U
                                                     : 
                                                    (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                     ((IData)(6U) 
                                                      + 
                                                      (0x1ffU 
                                                       & (((IData)(0x118U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x118U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                   | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                      ((IData)(5U) 
                                                       + 
                                                       (0x1ffU 
                                                        & (((IData)(0x118U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                           >> 5U)))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x118U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                   : 0U) 
                                                 << 0x1eU) 
                                                | (((0x22ffU 
                                                     >= 
                                                     (0x3fffU 
                                                      & ((IData)(0x118U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x118U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                       ? 0U
                                                       : 
                                                      (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                       ((IData)(5U) 
                                                        + 
                                                        (0x1ffU 
                                                         & (((IData)(0x118U) 
                                                             * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                            >> 5U)))] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x118U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                     | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                        ((IData)(4U) 
                                                         + 
                                                         (0x1ffU 
                                                          & (((IData)(0x118U) 
                                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                             >> 5U)))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x118U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                     : 0U) 
                                                   >> 2U))));
                if (this->__PVT__valid_do_walk) {
                    if ((vlTOPp->walking_mem_master_mem_valid
                         [1U] | (0U != (IData)(this->__PVT__valid_counter_q)))) {
                        if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                             & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__grant_fifo_pop = 1U;
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_counter_d 
                                = (0x3fU & (vlTOPp->walking_mem_master_mem_valid
                                            [1U] ? (IData)(this->__PVT__valid_counter_q)
                                             : ((IData)(this->__PVT__valid_counter_q) 
                                                - (IData)(1U))));
                        }
                    }
                } else {
                    if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop = 1U;
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_counter_d 
                            = (0x3fU & (vlTOPp->walking_mem_master_mem_valid
                                        [1U] ? ((IData)(1U) 
                                                + (IData)(this->__PVT__valid_counter_q))
                                         : (IData)(this->__PVT__valid_counter_q)));
                    }
                }
                if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) {
                    if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                                * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))) {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[1U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(1U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[2U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(2U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[3U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(3U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[4U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(4U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[5U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(6U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(5U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[6U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(7U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(6U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[7U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(8U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(7U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[8U] 
                            = (0xffffffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                              ? 0U : 
                                             (this->__PVT__valid_fifo_u__DOT__mem_q[
                                              ((IData)(9U) 
                                               + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                            | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                               ((IData)(8U) 
                                                + (0x1ffU 
                                                   & (((IData)(0x118U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))));
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] = 0U;
                        this->__PVT__valid_fifo_to_master[1U] = 0U;
                        this->__PVT__valid_fifo_to_master[2U] = 0U;
                        this->__PVT__valid_fifo_to_master[3U] = 0U;
                        this->__PVT__valid_fifo_to_master[4U] = 0U;
                        this->__PVT__valid_fifo_to_master[5U] = 0U;
                        this->__PVT__valid_fifo_to_master[6U] = 0U;
                        this->__PVT__valid_fifo_to_master[7U] = 0U;
                        this->__PVT__valid_fifo_to_master[8U] = 0U;
                    }
                    this->__PVT__to_output_bus_valid = 1U;
                    this->__PVT__valid_fifo_status_d 
                        = (((0U == ((0x1fU & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                                    - (IData)(1U))) 
                            & (~ (IData)(this->__PVT__valid_fifo_push)))
                            ? 1U : 2U);
                } else {
                    this->__PVT__valid_fifo_status_d = 2U;
                }
            }
        }
    }
    this->__PVT__valid_fifo_u__DOT__read_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__read_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__read_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__read_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__status_cnt_n = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__grant_fifo_push) & (IData)(this->__PVT__grant_fifo_pop)) 
          & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    }
    this->__PVT__valid_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__valid_fifo_u__DOT__write_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q)));
    }
    this->__PVT__valid_fifo_u__DOT__status_cnt_n = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__valid_fifo_push) & (IData)(this->__PVT__valid_fifo_pop)) 
          & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x117U)) {
        this->__PVT__valid_fifo_u__DOT__mem_n[__Vilp] 
            = this->__PVT__valid_fifo_u__DOT__mem_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->valid_fifo_u__DOT____Vlvbound1[0U] = 
            this->__PVT__grant_fifo_to_valid_fifo[0U];
        this->valid_fifo_u__DOT____Vlvbound1[1U] = 
            this->__PVT__grant_fifo_to_valid_fifo[1U];
        this->valid_fifo_u__DOT____Vlvbound1[2U] = 
            this->__PVT__grant_fifo_to_valid_fifo[2U];
        this->valid_fifo_u__DOT____Vlvbound1[3U] = 
            this->__PVT__grant_fifo_to_valid_fifo[3U];
        this->valid_fifo_u__DOT____Vlvbound1[4U] = 
            this->__PVT__grant_fifo_to_valid_fifo[4U];
        this->valid_fifo_u__DOT____Vlvbound1[5U] = 
            this->__PVT__grant_fifo_to_valid_fifo[5U];
        this->valid_fifo_u__DOT____Vlvbound1[6U] = 
            this->__PVT__grant_fifo_to_valid_fifo[6U];
        this->valid_fifo_u__DOT____Vlvbound1[7U] = 
            this->__PVT__grant_fifo_to_valid_fifo[7U];
        this->valid_fifo_u__DOT____Vlvbound1[8U] = 
            this->__PVT__grant_fifo_to_valid_fifo[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(280,(0x3fffU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))), this->__PVT__valid_fifo_u__DOT__mem_n, this->valid_fifo_u__DOT____Vlvbound1);
        }
    }
    this->stage_master_valid = ((~ ((2U == (IData)(this->__PVT__flush_status_q)) 
                                    & (this->__PVT__valid_fifo_to_master[8U] 
                                       >> 0xbU))) & (IData)(this->__PVT__to_output_bus_valid));
    this->__PVT__spec_transaction_cnt_d = this->__PVT__spec_transaction_cnt_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                                                  >> 0xbU))) {
        this->__PVT__spec_transaction_cnt_d = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(this->__PVT__spec_transaction_cnt_q)));
        if (((IData)(this->__PVT__to_output_bus_valid) 
             & (this->__PVT__valid_fifo_to_master[8U] 
                >> 0xbU))) {
            this->__PVT__spec_transaction_cnt_d = this->__PVT__spec_transaction_cnt_q;
        }
    } else {
        if ((((IData)(this->__PVT__to_output_bus_valid) 
              & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
             & (this->__PVT__valid_fifo_to_master[8U] 
                >> 0xbU))) {
            this->__PVT__spec_transaction_cnt_d = (0x3fU 
                                                   & ((IData)(this->__PVT__spec_transaction_cnt_q) 
                                                      - (IData)(1U)));
        }
    }
    if (((2U == (IData)(this->__PVT__flush_status_q)) 
         & (this->__PVT__valid_fifo_to_master[8U] >> 0xbU))) {
        this->stage_master_data[0U] = 0xddddddddU;
        this->stage_master_data[1U] = 0xddddddddU;
        this->stage_master_data[2U] = 0U;
        this->stage_master_data[3U] = 0U;
        this->stage_master_data[4U] = 0U;
        this->stage_master_data[5U] = 0U;
        this->stage_master_data[6U] = 0U;
        this->stage_master_data[7U] = 0U;
        this->stage_master_data[8U] = 0U;
    } else {
        this->stage_master_data[0U] = this->__PVT__valid_fifo_to_master[0U];
        this->stage_master_data[1U] = this->__PVT__valid_fifo_to_master[1U];
        this->stage_master_data[2U] = this->__PVT__valid_fifo_to_master[2U];
        this->stage_master_data[3U] = this->__PVT__valid_fifo_to_master[3U];
        this->stage_master_data[4U] = this->__PVT__valid_fifo_to_master[4U];
        this->stage_master_data[5U] = this->__PVT__valid_fifo_to_master[5U];
        this->stage_master_data[6U] = this->__PVT__valid_fifo_to_master[6U];
        this->stage_master_data[7U] = this->__PVT__valid_fifo_to_master[7U];
        this->stage_master_data[8U] = this->__PVT__valid_fifo_to_master[8U];
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__13(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__13\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__grant_fifo_to_valid_fifo[6U] = ((0xfU 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[6U]) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               vlTOPp->walking_mem_master_mem_rdata
                                                               [1U]) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[7U] = ((0xfU 
                                                  & ((IData)(
                                                             vlTOPp->walking_mem_master_mem_rdata
                                                             [1U]) 
                                                     >> 0x1cU)) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [1U] 
                                                                >> 0x20U)) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[8U] = ((0xfffff0U 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[8U]) 
                                                 | (0xfU 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [1U] 
                                                                >> 0x20U)) 
                                                       >> 0x1cU)));
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__23(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__23\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    if (vlTOPp->rst_ni) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_q 
            = this->__PVT__grant_fifo_u__DOT__write_pointer_n;
        this->__PVT__valid_fifo_u__DOT__write_pointer_q 
            = ((IData)(this->__PVT__flush_fifo) ? 0U
                : (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_n));
        this->__PVT__valid_fifo_u__DOT__read_pointer_q 
            = ((IData)(this->__PVT__flush_fifo) ? 0U
                : (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_n));
    } else {
        this->__PVT__grant_fifo_u__DOT__write_pointer_q = 0U;
        this->__PVT__valid_fifo_u__DOT__write_pointer_q = 0U;
        this->__PVT__valid_fifo_u__DOT__read_pointer_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(this->__PVT__valid_fifo_u__DOT__gate_clock)))) {
            __Vilp = 0U;
            while ((__Vilp <= 0x117U)) {
                this->__PVT__valid_fifo_u__DOT__mem_q[__Vilp] 
                    = this->__PVT__valid_fifo_u__DOT__mem_n[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x117U)) {
            this->__PVT__valid_fifo_u__DOT__mem_q[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    this->__PVT__grant_fifo_u__DOT__read_pointer_q 
        = ((IData)(vlTOPp->rst_ni) ? (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_n)
            : 0U);
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(this->__PVT__grant_fifo_u__DOT__gate_clock)))) {
            __Vilp = 0U;
            while ((__Vilp <= 0x117U)) {
                this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp] 
                    = this->__PVT__grant_fifo_u__DOT__mem_n[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x117U)) {
            this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlTOPp->rst_ni) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_q 
            = ((IData)(this->__PVT__flush_fifo) ? 0U
                : (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_n));
        this->__PVT__grant_fifo_u__DOT__status_cnt_q 
            = this->__PVT__grant_fifo_u__DOT__status_cnt_n;
    } else {
        this->__PVT__valid_fifo_u__DOT__status_cnt_q = 0U;
        this->__PVT__grant_fifo_u__DOT__status_cnt_q = 0U;
    }
    if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))) {
        this->__Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  (0x1ffU & (((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                             >> 5U))] >> (0x1fU & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[8U] 
            = (0xffffffU & (((0U == (0x1fU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                              ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                                      ((IData)(9U) 
                                       + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x118U) 
                                                * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                            | (this->__PVT__grant_fifo_u__DOT__mem_q[
                               ((IData)(8U) + (0x1ffU 
                                               & (((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))));
    } else {
        this->__Vcellout__grant_fifo_u__data_o[0U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[1U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[2U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[3U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[4U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[5U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[6U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[7U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[8U] = 0U;
    }
    this->__PVT__stage_usage = (0x3fU & ((0x1fU & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                                         + (0x1fU & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))));
    this->__PVT__flush_status_d = ((2U & (IData)(this->__PVT__flush_status_q))
                                    ? ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [4U]) ? 3U
                                            : 0U) : 
                                       ((0U == (IData)(this->__PVT__spec_transaction_cnt_q))
                                         ? 0U : 2U))
                                    : ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))
                                            ? 3U : 1U)
                                        : ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [4U]) ? 
                                           ((1U == 
                                             vlTOPp->mptw_top__DOT__system_control_flush
                                             [4U]) ? 1U
                                             : 2U) : 0U)));
    this->stage_status_flushed = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        this->stage_status_flushed = 3U;
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->stage_status_flushed = 1U;
            if ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                this->stage_status_flushed = 3U;
            }
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [4U])) {
                this->stage_status_flushed = 1U;
            }
        }
    }
    this->__PVT__grant_fifo_to_valid_fifo[0U] = this->__Vcellout__grant_fifo_u__data_o[0U];
    this->__PVT__grant_fifo_to_valid_fifo[1U] = this->__Vcellout__grant_fifo_u__data_o[1U];
    this->__PVT__grant_fifo_to_valid_fifo[2U] = this->__Vcellout__grant_fifo_u__data_o[2U];
    this->__PVT__grant_fifo_to_valid_fifo[3U] = this->__Vcellout__grant_fifo_u__data_o[3U];
    this->__PVT__grant_fifo_to_valid_fifo[4U] = this->__Vcellout__grant_fifo_u__data_o[4U];
    this->__PVT__grant_fifo_to_valid_fifo[5U] = this->__Vcellout__grant_fifo_u__data_o[5U];
    this->__PVT__grant_fifo_to_valid_fifo[6U] = this->__Vcellout__grant_fifo_u__data_o[6U];
    this->__PVT__grant_fifo_to_valid_fifo[7U] = this->__Vcellout__grant_fifo_u__data_o[7U];
    this->__PVT__grant_fifo_to_valid_fifo[8U] = this->__Vcellout__grant_fifo_u__data_o[8U];
    this->memory_master_mem_addr = 0ULL;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_addr = (((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_addr = (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
        }
    }
    this->memory_master_mem_req = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_req = 1U;
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_req = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid;
        }
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__28(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__28\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    this->__PVT__grant_fifo_status_d = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_status_d = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                        >> 2U))))
                                                 ? 
                                                (vlTOPp->walking_mem_master_mem_gnt
                                                 [1U]
                                                  ? 0U
                                                  : 1U)
                                                 : 0U);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__grant_fifo_status_d = 1U;
            if (vlTOPp->walking_mem_master_mem_gnt[1U]) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > ((IData)(1U) + (IData)(this->__PVT__stage_usage)))
                      ? 0U : 2U);
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > (IData)(this->__PVT__stage_usage))
                      ? 0U : 2U);
            }
        }
    }
    this->__PVT__grant_fifo_push = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_push = ((0U != 
                                             (3U & 
                                              ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                << 0x1eU) 
                                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                  >> 2U)))) 
                                            | vlTOPp->walking_mem_master_mem_gnt
                                            [1U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->walking_mem_master_mem_gnt[1U]) {
                this->__PVT__grant_fifo_push = 1U;
            }
        }
    }
    this->__PVT__req_bus_ready = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__req_bus_ready = ((0U != (3U 
                                                  & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                        >> 2U)))) 
                                          | vlTOPp->walking_mem_master_mem_gnt
                                          [1U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->walking_mem_master_mem_gnt[1U]) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > ((IData)(1U) 
                                                 + (IData)(this->__PVT__stage_usage)));
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > (IData)(this->__PVT__stage_usage));
            }
        }
    }
    this->__PVT__flush_grant_fifo_pop = 0U;
    if ((1U & (~ ((IData)(this->__PVT__flush_status_q) 
                  >> 1U)))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            if ((0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                if ((vlTOPp->walking_mem_master_mem_valid
                     [1U] | (0U != (3U & ((this->__PVT__grant_fifo_to_valid_fifo[5U] 
                                           << 0x1eU) 
                                          | (this->__PVT__grant_fifo_to_valid_fifo[4U] 
                                             >> 2U)))))) {
                    this->__PVT__flush_grant_fifo_pop = 1U;
                }
            }
        }
    }
    this->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q)));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x117U)) {
        this->__PVT__grant_fifo_u__DOT__mem_n[__Vilp] 
            = this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->grant_fifo_u__DOT____Vlvbound1[0U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
        this->grant_fifo_u__DOT____Vlvbound1[1U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
        this->grant_fifo_u__DOT____Vlvbound1[2U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
        this->grant_fifo_u__DOT____Vlvbound1[3U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
        this->grant_fifo_u__DOT____Vlvbound1[4U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
        this->grant_fifo_u__DOT____Vlvbound1[5U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
        this->grant_fifo_u__DOT____Vlvbound1[6U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
        this->grant_fifo_u__DOT____Vlvbound1[7U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
        this->grant_fifo_u__DOT____Vlvbound1[8U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(280,(0x3fffU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))), this->__PVT__grant_fifo_u__DOT__mem_n, this->grant_fifo_u__DOT____Vlvbound1);
        }
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__38(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__38\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__flush_fifo = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        }
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [4U])) {
                this->__PVT__flush_fifo = (1U == vlTOPp->mptw_top__DOT__system_control_flush
                                           [4U]);
            }
        }
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__9(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__9\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    this->__PVT__valid_fifo_pop = 0U;
    if ((0U != (IData)(this->__PVT__valid_fifo_status_q))) {
        if ((1U != (IData)(this->__PVT__valid_fifo_status_q))) {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) {
                    this->__PVT__valid_fifo_pop = 1U;
                }
            }
        }
    }
    this->__PVT__valid_do_walk = 1U;
    this->__PVT__valid_counter_d = this->__PVT__valid_counter_q;
    this->__PVT__grant_fifo_pop = ((1U == (IData)(this->__PVT__flush_status_q)) 
                                   & (IData)(this->__PVT__flush_grant_fifo_pop));
    this->__PVT__valid_fifo_push = 0U;
    this->__PVT__valid_fifo_to_master[0U] = 0U;
    this->__PVT__valid_fifo_to_master[1U] = 0U;
    this->__PVT__valid_fifo_to_master[2U] = 0U;
    this->__PVT__valid_fifo_to_master[3U] = 0U;
    this->__PVT__valid_fifo_to_master[4U] = 0U;
    this->__PVT__valid_fifo_to_master[5U] = 0U;
    this->__PVT__valid_fifo_to_master[6U] = 0U;
    this->__PVT__valid_fifo_to_master[7U] = 0U;
    this->__PVT__valid_fifo_to_master[8U] = 0U;
    this->__PVT__to_output_bus_valid = 0U;
    this->__PVT__valid_fifo_status_d = 0U;
    if ((0U == (IData)(this->__PVT__valid_fifo_status_q))) {
        if (((IData)(this->__PVT__grant_fifo_push) 
             & (0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
            this->__PVT__valid_fifo_status_d = 1U;
        }
    } else {
        if ((1U == (IData)(this->__PVT__valid_fifo_status_q))) {
            this->__PVT__valid_fifo_status_d = 1U;
            this->__PVT__valid_do_walk = (0U == (3U 
                                                 & ((this->__Vcellout__grant_fifo_u__data_o[5U] 
                                                     << 0x1eU) 
                                                    | (this->__Vcellout__grant_fifo_u__data_o[4U] 
                                                       >> 2U))));
            if (this->__PVT__valid_do_walk) {
                if ((vlTOPp->walking_mem_master_mem_valid
                     [2U] | (0U != (IData)(this->__PVT__valid_counter_q)))) {
                    if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop 
                            = (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                        if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
                             & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_fifo_status_d = 2U;
                        } else {
                            this->__PVT__valid_fifo_to_master[0U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[0U];
                            this->__PVT__valid_fifo_to_master[1U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[1U];
                            this->__PVT__valid_fifo_to_master[2U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[2U];
                            this->__PVT__valid_fifo_to_master[3U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[3U];
                            this->__PVT__valid_fifo_to_master[4U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[4U];
                            this->__PVT__valid_fifo_to_master[5U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[5U];
                            this->__PVT__valid_fifo_to_master[6U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[6U];
                            this->__PVT__valid_fifo_to_master[7U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[7U];
                            this->__PVT__valid_fifo_to_master[8U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[8U];
                            this->__PVT__to_output_bus_valid = 1U;
                        }
                        this->__PVT__valid_counter_d 
                            = (0x3fU & (vlTOPp->walking_mem_master_mem_valid
                                        [2U] ? (IData)(this->__PVT__valid_counter_q)
                                         : ((IData)(this->__PVT__valid_counter_q) 
                                            - (IData)(1U))));
                    }
                }
            } else {
                if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                     & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                    this->__PVT__grant_fifo_pop = (0U 
                                                   != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                    if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
                         & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_fifo_status_d = 2U;
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[0U];
                        this->__PVT__valid_fifo_to_master[1U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[1U];
                        this->__PVT__valid_fifo_to_master[2U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[2U];
                        this->__PVT__valid_fifo_to_master[3U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[3U];
                        this->__PVT__valid_fifo_to_master[4U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[4U];
                        this->__PVT__valid_fifo_to_master[5U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[5U];
                        this->__PVT__valid_fifo_to_master[6U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[6U];
                        this->__PVT__valid_fifo_to_master[7U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[7U];
                        this->__PVT__valid_fifo_to_master[8U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[8U];
                        this->__PVT__to_output_bus_valid = 1U;
                    }
                    this->__PVT__valid_counter_d = 
                        (0x3fU & (vlTOPp->walking_mem_master_mem_valid
                                  [2U] ? ((IData)(1U) 
                                          + (IData)(this->__PVT__valid_counter_q))
                                   : (IData)(this->__PVT__valid_counter_q)));
                }
            }
            if (((((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                   & (~ (IData)(this->__PVT__grant_fifo_push))) 
                  | (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
                 | (((0U == ((0x1fU & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                             - (IData)(1U))) & ((IData)(this->__PVT__grant_fifo_pop) 
                                                & (~ (IData)(this->__PVT__grant_fifo_push)))) 
                    & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)))) {
                this->__PVT__valid_fifo_status_d = 0U;
            }
        } else {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                this->__PVT__valid_do_walk = (0U == 
                                              (3U & 
                                               ((((0x22ffU 
                                                   >= 
                                                   (0x3fffU 
                                                    & ((IData)(0x118U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x118U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 0U
                                                     : 
                                                    (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                     ((IData)(6U) 
                                                      + 
                                                      (0x1ffU 
                                                       & (((IData)(0x118U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x118U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                   | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                      ((IData)(5U) 
                                                       + 
                                                       (0x1ffU 
                                                        & (((IData)(0x118U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                           >> 5U)))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x118U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                   : 0U) 
                                                 << 0x1eU) 
                                                | (((0x22ffU 
                                                     >= 
                                                     (0x3fffU 
                                                      & ((IData)(0x118U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x118U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                       ? 0U
                                                       : 
                                                      (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                       ((IData)(5U) 
                                                        + 
                                                        (0x1ffU 
                                                         & (((IData)(0x118U) 
                                                             * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                            >> 5U)))] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x118U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                     | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                        ((IData)(4U) 
                                                         + 
                                                         (0x1ffU 
                                                          & (((IData)(0x118U) 
                                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                             >> 5U)))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x118U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                     : 0U) 
                                                   >> 2U))));
                if (this->__PVT__valid_do_walk) {
                    if ((vlTOPp->walking_mem_master_mem_valid
                         [2U] | (0U != (IData)(this->__PVT__valid_counter_q)))) {
                        if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                             & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__grant_fifo_pop = 1U;
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_counter_d 
                                = (0x3fU & (vlTOPp->walking_mem_master_mem_valid
                                            [2U] ? (IData)(this->__PVT__valid_counter_q)
                                             : ((IData)(this->__PVT__valid_counter_q) 
                                                - (IData)(1U))));
                        }
                    }
                } else {
                    if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop = 1U;
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_counter_d 
                            = (0x3fU & (vlTOPp->walking_mem_master_mem_valid
                                        [2U] ? ((IData)(1U) 
                                                + (IData)(this->__PVT__valid_counter_q))
                                         : (IData)(this->__PVT__valid_counter_q)));
                    }
                }
                if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) {
                    if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                                * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))) {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[1U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(1U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[2U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(2U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[3U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(3U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[4U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(4U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[5U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(6U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(5U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[6U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(7U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(6U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[7U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(8U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(7U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[8U] 
                            = (0xffffffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                              ? 0U : 
                                             (this->__PVT__valid_fifo_u__DOT__mem_q[
                                              ((IData)(9U) 
                                               + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                            | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                               ((IData)(8U) 
                                                + (0x1ffU 
                                                   & (((IData)(0x118U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))));
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] = 0U;
                        this->__PVT__valid_fifo_to_master[1U] = 0U;
                        this->__PVT__valid_fifo_to_master[2U] = 0U;
                        this->__PVT__valid_fifo_to_master[3U] = 0U;
                        this->__PVT__valid_fifo_to_master[4U] = 0U;
                        this->__PVT__valid_fifo_to_master[5U] = 0U;
                        this->__PVT__valid_fifo_to_master[6U] = 0U;
                        this->__PVT__valid_fifo_to_master[7U] = 0U;
                        this->__PVT__valid_fifo_to_master[8U] = 0U;
                    }
                    this->__PVT__to_output_bus_valid = 1U;
                    this->__PVT__valid_fifo_status_d 
                        = (((0U == ((0x1fU & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                                    - (IData)(1U))) 
                            & (~ (IData)(this->__PVT__valid_fifo_push)))
                            ? 1U : 2U);
                } else {
                    this->__PVT__valid_fifo_status_d = 2U;
                }
            }
        }
    }
    this->__PVT__valid_fifo_u__DOT__read_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__read_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__read_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__read_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__status_cnt_n = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__grant_fifo_push) & (IData)(this->__PVT__grant_fifo_pop)) 
          & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    }
    this->__PVT__valid_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__valid_fifo_u__DOT__write_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q)));
    }
    this->__PVT__valid_fifo_u__DOT__status_cnt_n = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__valid_fifo_push) & (IData)(this->__PVT__valid_fifo_pop)) 
          & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x117U)) {
        this->__PVT__valid_fifo_u__DOT__mem_n[__Vilp] 
            = this->__PVT__valid_fifo_u__DOT__mem_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->valid_fifo_u__DOT____Vlvbound1[0U] = 
            this->__PVT__grant_fifo_to_valid_fifo[0U];
        this->valid_fifo_u__DOT____Vlvbound1[1U] = 
            this->__PVT__grant_fifo_to_valid_fifo[1U];
        this->valid_fifo_u__DOT____Vlvbound1[2U] = 
            this->__PVT__grant_fifo_to_valid_fifo[2U];
        this->valid_fifo_u__DOT____Vlvbound1[3U] = 
            this->__PVT__grant_fifo_to_valid_fifo[3U];
        this->valid_fifo_u__DOT____Vlvbound1[4U] = 
            this->__PVT__grant_fifo_to_valid_fifo[4U];
        this->valid_fifo_u__DOT____Vlvbound1[5U] = 
            this->__PVT__grant_fifo_to_valid_fifo[5U];
        this->valid_fifo_u__DOT____Vlvbound1[6U] = 
            this->__PVT__grant_fifo_to_valid_fifo[6U];
        this->valid_fifo_u__DOT____Vlvbound1[7U] = 
            this->__PVT__grant_fifo_to_valid_fifo[7U];
        this->valid_fifo_u__DOT____Vlvbound1[8U] = 
            this->__PVT__grant_fifo_to_valid_fifo[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(280,(0x3fffU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))), this->__PVT__valid_fifo_u__DOT__mem_n, this->valid_fifo_u__DOT____Vlvbound1);
        }
    }
    this->stage_master_valid = ((~ ((2U == (IData)(this->__PVT__flush_status_q)) 
                                    & (this->__PVT__valid_fifo_to_master[8U] 
                                       >> 0xbU))) & (IData)(this->__PVT__to_output_bus_valid));
    this->__PVT__spec_transaction_cnt_d = this->__PVT__spec_transaction_cnt_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                                                  >> 0xbU))) {
        this->__PVT__spec_transaction_cnt_d = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(this->__PVT__spec_transaction_cnt_q)));
        if (((IData)(this->__PVT__to_output_bus_valid) 
             & (this->__PVT__valid_fifo_to_master[8U] 
                >> 0xbU))) {
            this->__PVT__spec_transaction_cnt_d = this->__PVT__spec_transaction_cnt_q;
        }
    } else {
        if ((((IData)(this->__PVT__to_output_bus_valid) 
              & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
             & (this->__PVT__valid_fifo_to_master[8U] 
                >> 0xbU))) {
            this->__PVT__spec_transaction_cnt_d = (0x3fU 
                                                   & ((IData)(this->__PVT__spec_transaction_cnt_q) 
                                                      - (IData)(1U)));
        }
    }
    if (((2U == (IData)(this->__PVT__flush_status_q)) 
         & (this->__PVT__valid_fifo_to_master[8U] >> 0xbU))) {
        this->stage_master_data[0U] = 0xddddddddU;
        this->stage_master_data[1U] = 0xddddddddU;
        this->stage_master_data[2U] = 0U;
        this->stage_master_data[3U] = 0U;
        this->stage_master_data[4U] = 0U;
        this->stage_master_data[5U] = 0U;
        this->stage_master_data[6U] = 0U;
        this->stage_master_data[7U] = 0U;
        this->stage_master_data[8U] = 0U;
    } else {
        this->stage_master_data[0U] = this->__PVT__valid_fifo_to_master[0U];
        this->stage_master_data[1U] = this->__PVT__valid_fifo_to_master[1U];
        this->stage_master_data[2U] = this->__PVT__valid_fifo_to_master[2U];
        this->stage_master_data[3U] = this->__PVT__valid_fifo_to_master[3U];
        this->stage_master_data[4U] = this->__PVT__valid_fifo_to_master[4U];
        this->stage_master_data[5U] = this->__PVT__valid_fifo_to_master[5U];
        this->stage_master_data[6U] = this->__PVT__valid_fifo_to_master[6U];
        this->stage_master_data[7U] = this->__PVT__valid_fifo_to_master[7U];
        this->stage_master_data[8U] = this->__PVT__valid_fifo_to_master[8U];
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__14(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__14\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__grant_fifo_to_valid_fifo[6U] = ((0xfU 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[6U]) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               vlTOPp->walking_mem_master_mem_rdata
                                                               [2U]) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[7U] = ((0xfU 
                                                  & ((IData)(
                                                             vlTOPp->walking_mem_master_mem_rdata
                                                             [2U]) 
                                                     >> 0x1cU)) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [2U] 
                                                                >> 0x20U)) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[8U] = ((0xfffff0U 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[8U]) 
                                                 | (0xfU 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [2U] 
                                                                >> 0x20U)) 
                                                       >> 0x1cU)));
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__24(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__24\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    if (vlTOPp->rst_ni) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_q 
            = this->__PVT__grant_fifo_u__DOT__write_pointer_n;
        this->__PVT__valid_fifo_u__DOT__write_pointer_q 
            = ((IData)(this->__PVT__flush_fifo) ? 0U
                : (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_n));
        this->__PVT__valid_fifo_u__DOT__read_pointer_q 
            = ((IData)(this->__PVT__flush_fifo) ? 0U
                : (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_n));
    } else {
        this->__PVT__grant_fifo_u__DOT__write_pointer_q = 0U;
        this->__PVT__valid_fifo_u__DOT__write_pointer_q = 0U;
        this->__PVT__valid_fifo_u__DOT__read_pointer_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(this->__PVT__valid_fifo_u__DOT__gate_clock)))) {
            __Vilp = 0U;
            while ((__Vilp <= 0x117U)) {
                this->__PVT__valid_fifo_u__DOT__mem_q[__Vilp] 
                    = this->__PVT__valid_fifo_u__DOT__mem_n[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x117U)) {
            this->__PVT__valid_fifo_u__DOT__mem_q[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    this->__PVT__grant_fifo_u__DOT__read_pointer_q 
        = ((IData)(vlTOPp->rst_ni) ? (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_n)
            : 0U);
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(this->__PVT__grant_fifo_u__DOT__gate_clock)))) {
            __Vilp = 0U;
            while ((__Vilp <= 0x117U)) {
                this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp] 
                    = this->__PVT__grant_fifo_u__DOT__mem_n[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x117U)) {
            this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlTOPp->rst_ni) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_q 
            = ((IData)(this->__PVT__flush_fifo) ? 0U
                : (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_n));
        this->__PVT__grant_fifo_u__DOT__status_cnt_q 
            = this->__PVT__grant_fifo_u__DOT__status_cnt_n;
    } else {
        this->__PVT__valid_fifo_u__DOT__status_cnt_q = 0U;
        this->__PVT__grant_fifo_u__DOT__status_cnt_q = 0U;
    }
    if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))) {
        this->__Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  (0x1ffU & (((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                             >> 5U))] >> (0x1fU & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[8U] 
            = (0xffffffU & (((0U == (0x1fU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                              ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                                      ((IData)(9U) 
                                       + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x118U) 
                                                * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                            | (this->__PVT__grant_fifo_u__DOT__mem_q[
                               ((IData)(8U) + (0x1ffU 
                                               & (((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))));
    } else {
        this->__Vcellout__grant_fifo_u__data_o[0U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[1U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[2U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[3U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[4U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[5U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[6U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[7U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[8U] = 0U;
    }
    this->__PVT__stage_usage = (0x3fU & ((0x1fU & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                                         + (0x1fU & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))));
    this->__PVT__flush_status_d = ((2U & (IData)(this->__PVT__flush_status_q))
                                    ? ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [5U]) ? 3U
                                            : 0U) : 
                                       ((0U == (IData)(this->__PVT__spec_transaction_cnt_q))
                                         ? 0U : 2U))
                                    : ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))
                                            ? 3U : 1U)
                                        : ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [5U]) ? 
                                           ((1U == 
                                             vlTOPp->mptw_top__DOT__system_control_flush
                                             [5U]) ? 1U
                                             : 2U) : 0U)));
    this->stage_status_flushed = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        this->stage_status_flushed = 3U;
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->stage_status_flushed = 1U;
            if ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                this->stage_status_flushed = 3U;
            }
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [5U])) {
                this->stage_status_flushed = 1U;
            }
        }
    }
    this->__PVT__grant_fifo_to_valid_fifo[0U] = this->__Vcellout__grant_fifo_u__data_o[0U];
    this->__PVT__grant_fifo_to_valid_fifo[1U] = this->__Vcellout__grant_fifo_u__data_o[1U];
    this->__PVT__grant_fifo_to_valid_fifo[2U] = this->__Vcellout__grant_fifo_u__data_o[2U];
    this->__PVT__grant_fifo_to_valid_fifo[3U] = this->__Vcellout__grant_fifo_u__data_o[3U];
    this->__PVT__grant_fifo_to_valid_fifo[4U] = this->__Vcellout__grant_fifo_u__data_o[4U];
    this->__PVT__grant_fifo_to_valid_fifo[5U] = this->__Vcellout__grant_fifo_u__data_o[5U];
    this->__PVT__grant_fifo_to_valid_fifo[6U] = this->__Vcellout__grant_fifo_u__data_o[6U];
    this->__PVT__grant_fifo_to_valid_fifo[7U] = this->__Vcellout__grant_fifo_u__data_o[7U];
    this->__PVT__grant_fifo_to_valid_fifo[8U] = this->__Vcellout__grant_fifo_u__data_o[8U];
    this->memory_master_mem_addr = 0ULL;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_addr = (((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_addr = (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
        }
    }
    this->memory_master_mem_req = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_req = 1U;
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_req = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid;
        }
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__29(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__29\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    this->__PVT__grant_fifo_status_d = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_status_d = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                        >> 2U))))
                                                 ? 
                                                (vlTOPp->walking_mem_master_mem_gnt
                                                 [2U]
                                                  ? 0U
                                                  : 1U)
                                                 : 0U);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__grant_fifo_status_d = 1U;
            if (vlTOPp->walking_mem_master_mem_gnt[2U]) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > ((IData)(1U) + (IData)(this->__PVT__stage_usage)))
                      ? 0U : 2U);
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > (IData)(this->__PVT__stage_usage))
                      ? 0U : 2U);
            }
        }
    }
    this->__PVT__grant_fifo_push = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_push = ((0U != 
                                             (3U & 
                                              ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                << 0x1eU) 
                                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                  >> 2U)))) 
                                            | vlTOPp->walking_mem_master_mem_gnt
                                            [2U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->walking_mem_master_mem_gnt[2U]) {
                this->__PVT__grant_fifo_push = 1U;
            }
        }
    }
    this->__PVT__req_bus_ready = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__req_bus_ready = ((0U != (3U 
                                                  & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                        >> 2U)))) 
                                          | vlTOPp->walking_mem_master_mem_gnt
                                          [2U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->walking_mem_master_mem_gnt[2U]) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > ((IData)(1U) 
                                                 + (IData)(this->__PVT__stage_usage)));
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > (IData)(this->__PVT__stage_usage));
            }
        }
    }
    this->__PVT__flush_grant_fifo_pop = 0U;
    if ((1U & (~ ((IData)(this->__PVT__flush_status_q) 
                  >> 1U)))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            if ((0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                if ((vlTOPp->walking_mem_master_mem_valid
                     [2U] | (0U != (3U & ((this->__PVT__grant_fifo_to_valid_fifo[5U] 
                                           << 0x1eU) 
                                          | (this->__PVT__grant_fifo_to_valid_fifo[4U] 
                                             >> 2U)))))) {
                    this->__PVT__flush_grant_fifo_pop = 1U;
                }
            }
        }
    }
    this->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q)));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x117U)) {
        this->__PVT__grant_fifo_u__DOT__mem_n[__Vilp] 
            = this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->grant_fifo_u__DOT____Vlvbound1[0U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
        this->grant_fifo_u__DOT____Vlvbound1[1U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
        this->grant_fifo_u__DOT____Vlvbound1[2U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
        this->grant_fifo_u__DOT____Vlvbound1[3U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
        this->grant_fifo_u__DOT____Vlvbound1[4U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
        this->grant_fifo_u__DOT____Vlvbound1[5U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
        this->grant_fifo_u__DOT____Vlvbound1[6U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
        this->grant_fifo_u__DOT____Vlvbound1[7U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
        this->grant_fifo_u__DOT____Vlvbound1[8U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(280,(0x3fffU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))), this->__PVT__grant_fifo_u__DOT__mem_n, this->grant_fifo_u__DOT____Vlvbound1);
        }
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__39(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__39\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__flush_fifo = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        }
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [5U])) {
                this->__PVT__flush_fifo = (1U == vlTOPp->mptw_top__DOT__system_control_flush
                                           [5U]);
            }
        }
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__10(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_settle__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__10\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    this->__PVT__valid_fifo_pop = 0U;
    if ((0U != (IData)(this->__PVT__valid_fifo_status_q))) {
        if ((1U != (IData)(this->__PVT__valid_fifo_status_q))) {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) {
                    this->__PVT__valid_fifo_pop = 1U;
                }
            }
        }
    }
    this->__PVT__valid_do_walk = 1U;
    this->__PVT__valid_counter_d = this->__PVT__valid_counter_q;
    this->__PVT__grant_fifo_pop = ((1U == (IData)(this->__PVT__flush_status_q)) 
                                   & (IData)(this->__PVT__flush_grant_fifo_pop));
    this->__PVT__valid_fifo_push = 0U;
    this->__PVT__valid_fifo_to_master[0U] = 0U;
    this->__PVT__valid_fifo_to_master[1U] = 0U;
    this->__PVT__valid_fifo_to_master[2U] = 0U;
    this->__PVT__valid_fifo_to_master[3U] = 0U;
    this->__PVT__valid_fifo_to_master[4U] = 0U;
    this->__PVT__valid_fifo_to_master[5U] = 0U;
    this->__PVT__valid_fifo_to_master[6U] = 0U;
    this->__PVT__valid_fifo_to_master[7U] = 0U;
    this->__PVT__valid_fifo_to_master[8U] = 0U;
    this->__PVT__to_output_bus_valid = 0U;
    this->__PVT__valid_fifo_status_d = 0U;
    if ((0U == (IData)(this->__PVT__valid_fifo_status_q))) {
        if (((IData)(this->__PVT__grant_fifo_push) 
             & (0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
            this->__PVT__valid_fifo_status_d = 1U;
        }
    } else {
        if ((1U == (IData)(this->__PVT__valid_fifo_status_q))) {
            this->__PVT__valid_fifo_status_d = 1U;
            this->__PVT__valid_do_walk = (0U == (3U 
                                                 & ((this->__Vcellout__grant_fifo_u__data_o[5U] 
                                                     << 0x1eU) 
                                                    | (this->__Vcellout__grant_fifo_u__data_o[4U] 
                                                       >> 2U))));
            if (this->__PVT__valid_do_walk) {
                if ((vlTOPp->walking_mem_master_mem_valid
                     [3U] | (0U != (IData)(this->__PVT__valid_counter_q)))) {
                    if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop 
                            = (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                        if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
                             & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_fifo_status_d = 2U;
                        } else {
                            this->__PVT__valid_fifo_to_master[0U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[0U];
                            this->__PVT__valid_fifo_to_master[1U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[1U];
                            this->__PVT__valid_fifo_to_master[2U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[2U];
                            this->__PVT__valid_fifo_to_master[3U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[3U];
                            this->__PVT__valid_fifo_to_master[4U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[4U];
                            this->__PVT__valid_fifo_to_master[5U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[5U];
                            this->__PVT__valid_fifo_to_master[6U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[6U];
                            this->__PVT__valid_fifo_to_master[7U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[7U];
                            this->__PVT__valid_fifo_to_master[8U] 
                                = this->__PVT__grant_fifo_to_valid_fifo[8U];
                            this->__PVT__to_output_bus_valid = 1U;
                        }
                        this->__PVT__valid_counter_d 
                            = (0x3fU & (vlTOPp->walking_mem_master_mem_valid
                                        [3U] ? (IData)(this->__PVT__valid_counter_q)
                                         : ((IData)(this->__PVT__valid_counter_q) 
                                            - (IData)(1U))));
                    }
                }
            } else {
                if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                     & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                    this->__PVT__grant_fifo_pop = (0U 
                                                   != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q));
                    if (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
                         & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_fifo_status_d = 2U;
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[0U];
                        this->__PVT__valid_fifo_to_master[1U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[1U];
                        this->__PVT__valid_fifo_to_master[2U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[2U];
                        this->__PVT__valid_fifo_to_master[3U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[3U];
                        this->__PVT__valid_fifo_to_master[4U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[4U];
                        this->__PVT__valid_fifo_to_master[5U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[5U];
                        this->__PVT__valid_fifo_to_master[6U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[6U];
                        this->__PVT__valid_fifo_to_master[7U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[7U];
                        this->__PVT__valid_fifo_to_master[8U] 
                            = this->__PVT__grant_fifo_to_valid_fifo[8U];
                        this->__PVT__to_output_bus_valid = 1U;
                    }
                    this->__PVT__valid_counter_d = 
                        (0x3fU & (vlTOPp->walking_mem_master_mem_valid
                                  [3U] ? ((IData)(1U) 
                                          + (IData)(this->__PVT__valid_counter_q))
                                   : (IData)(this->__PVT__valid_counter_q)));
                }
            }
            if (((((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                   & (~ (IData)(this->__PVT__grant_fifo_push))) 
                  | (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
                 | (((0U == ((0x1fU & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                             - (IData)(1U))) & ((IData)(this->__PVT__grant_fifo_pop) 
                                                & (~ (IData)(this->__PVT__grant_fifo_push)))) 
                    & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)))) {
                this->__PVT__valid_fifo_status_d = 0U;
            }
        } else {
            if ((2U == (IData)(this->__PVT__valid_fifo_status_q))) {
                this->__PVT__valid_do_walk = (0U == 
                                              (3U & 
                                               ((((0x22ffU 
                                                   >= 
                                                   (0x3fffU 
                                                    & ((IData)(0x118U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x118U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 0U
                                                     : 
                                                    (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                     ((IData)(6U) 
                                                      + 
                                                      (0x1ffU 
                                                       & (((IData)(0x118U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x118U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                   | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                      ((IData)(5U) 
                                                       + 
                                                       (0x1ffU 
                                                        & (((IData)(0x118U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                           >> 5U)))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x118U) 
                                                          * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                   : 0U) 
                                                 << 0x1eU) 
                                                | (((0x22ffU 
                                                     >= 
                                                     (0x3fffU 
                                                      & ((IData)(0x118U) 
                                                         * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x118U) 
                                                           * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                                       ? 0U
                                                       : 
                                                      (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                       ((IData)(5U) 
                                                        + 
                                                        (0x1ffU 
                                                         & (((IData)(0x118U) 
                                                             * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                            >> 5U)))] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x118U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                                     | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                                        ((IData)(4U) 
                                                         + 
                                                         (0x1ffU 
                                                          & (((IData)(0x118U) 
                                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                             >> 5U)))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x118U) 
                                                            * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
                                                     : 0U) 
                                                   >> 2U))));
                if (this->__PVT__valid_do_walk) {
                    if ((vlTOPp->walking_mem_master_mem_valid
                         [3U] | (0U != (IData)(this->__PVT__valid_counter_q)))) {
                        if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                             & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                            this->__PVT__grant_fifo_pop = 1U;
                            this->__PVT__valid_fifo_push = 1U;
                            this->__PVT__valid_counter_d 
                                = (0x3fU & (vlTOPp->walking_mem_master_mem_valid
                                            [3U] ? (IData)(this->__PVT__valid_counter_q)
                                             : ((IData)(this->__PVT__valid_counter_q) 
                                                - (IData)(1U))));
                        }
                    }
                } else {
                    if (((0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
                        this->__PVT__grant_fifo_pop = 1U;
                        this->__PVT__valid_fifo_push = 1U;
                        this->__PVT__valid_counter_d 
                            = (0x3fU & (vlTOPp->walking_mem_master_mem_valid
                                        [3U] ? ((IData)(1U) 
                                                + (IData)(this->__PVT__valid_counter_q))
                                         : (IData)(this->__PVT__valid_counter_q)));
                    }
                }
                if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) {
                    if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                                * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))) {
                        this->__PVT__valid_fifo_to_master[0U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[1U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(1U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[2U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(2U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[3U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(3U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[4U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(4U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[5U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(6U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(5U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[6U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(7U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(6U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[7U] 
                            = (((0U == (0x1fU & ((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (this->__PVT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(8U) 
                                          + (0x1ffU 
                                             & (((IData)(0x118U) 
                                                 * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(7U) + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x118U) 
                                               * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))));
                        this->__PVT__valid_fifo_to_master[8U] 
                            = (0xffffffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                                              ? 0U : 
                                             (this->__PVT__valid_fifo_u__DOT__mem_q[
                                              ((IData)(9U) 
                                               + (0x1ffU 
                                                  & (((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                            | (this->__PVT__valid_fifo_u__DOT__mem_q[
                                               ((IData)(8U) 
                                                + (0x1ffU 
                                                   & (((IData)(0x118U) 
                                                       * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x118U) 
                                                      * (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q))))));
                    } else {
                        this->__PVT__valid_fifo_to_master[0U] = 0U;
                        this->__PVT__valid_fifo_to_master[1U] = 0U;
                        this->__PVT__valid_fifo_to_master[2U] = 0U;
                        this->__PVT__valid_fifo_to_master[3U] = 0U;
                        this->__PVT__valid_fifo_to_master[4U] = 0U;
                        this->__PVT__valid_fifo_to_master[5U] = 0U;
                        this->__PVT__valid_fifo_to_master[6U] = 0U;
                        this->__PVT__valid_fifo_to_master[7U] = 0U;
                        this->__PVT__valid_fifo_to_master[8U] = 0U;
                    }
                    this->__PVT__to_output_bus_valid = 1U;
                    this->__PVT__valid_fifo_status_d 
                        = (((0U == ((0x1fU & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)) 
                                    - (IData)(1U))) 
                            & (~ (IData)(this->__PVT__valid_fifo_push)))
                            ? 1U : 2U);
                } else {
                    this->__PVT__valid_fifo_status_d = 2U;
                }
            }
        }
    }
    this->__PVT__valid_fifo_u__DOT__read_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__read_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__read_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__read_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__read_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)));
    }
    this->__PVT__grant_fifo_u__DOT__status_cnt_n = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__grant_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__grant_fifo_push) & (IData)(this->__PVT__grant_fifo_pop)) 
          & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__status_cnt_n 
            = this->__PVT__grant_fifo_u__DOT__status_cnt_q;
    }
    this->__PVT__valid_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__valid_fifo_u__DOT__write_pointer_n 
        = this->__PVT__valid_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q)));
    }
    this->__PVT__valid_fifo_u__DOT__status_cnt_n = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(1U) + (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__valid_fifo_pop) & (0U 
                                                 != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = (0x3fU & ((IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q) 
                        - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__valid_fifo_push) & (IData)(this->__PVT__valid_fifo_pop)) 
          & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_n 
            = this->__PVT__valid_fifo_u__DOT__status_cnt_q;
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x117U)) {
        this->__PVT__valid_fifo_u__DOT__mem_n[__Vilp] 
            = this->__PVT__valid_fifo_u__DOT__mem_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (((IData)(this->__PVT__valid_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q)))) {
        this->valid_fifo_u__DOT____Vlvbound1[0U] = 
            this->__PVT__grant_fifo_to_valid_fifo[0U];
        this->valid_fifo_u__DOT____Vlvbound1[1U] = 
            this->__PVT__grant_fifo_to_valid_fifo[1U];
        this->valid_fifo_u__DOT____Vlvbound1[2U] = 
            this->__PVT__grant_fifo_to_valid_fifo[2U];
        this->valid_fifo_u__DOT____Vlvbound1[3U] = 
            this->__PVT__grant_fifo_to_valid_fifo[3U];
        this->valid_fifo_u__DOT____Vlvbound1[4U] = 
            this->__PVT__grant_fifo_to_valid_fifo[4U];
        this->valid_fifo_u__DOT____Vlvbound1[5U] = 
            this->__PVT__grant_fifo_to_valid_fifo[5U];
        this->valid_fifo_u__DOT____Vlvbound1[6U] = 
            this->__PVT__grant_fifo_to_valid_fifo[6U];
        this->valid_fifo_u__DOT____Vlvbound1[7U] = 
            this->__PVT__grant_fifo_to_valid_fifo[7U];
        this->valid_fifo_u__DOT____Vlvbound1[8U] = 
            this->__PVT__grant_fifo_to_valid_fifo[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(280,(0x3fffU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_q))), this->__PVT__valid_fifo_u__DOT__mem_n, this->valid_fifo_u__DOT____Vlvbound1);
        }
    }
    this->stage_master_valid = ((~ ((2U == (IData)(this->__PVT__flush_status_q)) 
                                    & (this->__PVT__valid_fifo_to_master[8U] 
                                       >> 0xbU))) & (IData)(this->__PVT__to_output_bus_valid));
    this->__PVT__spec_transaction_cnt_d = this->__PVT__spec_transaction_cnt_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U] 
                                                  >> 0xbU))) {
        this->__PVT__spec_transaction_cnt_d = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(this->__PVT__spec_transaction_cnt_q)));
        if (((IData)(this->__PVT__to_output_bus_valid) 
             & (this->__PVT__valid_fifo_to_master[8U] 
                >> 0xbU))) {
            this->__PVT__spec_transaction_cnt_d = this->__PVT__spec_transaction_cnt_q;
        }
    } else {
        if ((((IData)(this->__PVT__to_output_bus_valid) 
              & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
             & (this->__PVT__valid_fifo_to_master[8U] 
                >> 0xbU))) {
            this->__PVT__spec_transaction_cnt_d = (0x3fU 
                                                   & ((IData)(this->__PVT__spec_transaction_cnt_q) 
                                                      - (IData)(1U)));
        }
    }
    if (((2U == (IData)(this->__PVT__flush_status_q)) 
         & (this->__PVT__valid_fifo_to_master[8U] >> 0xbU))) {
        this->stage_master_data[0U] = 0xddddddddU;
        this->stage_master_data[1U] = 0xddddddddU;
        this->stage_master_data[2U] = 0U;
        this->stage_master_data[3U] = 0U;
        this->stage_master_data[4U] = 0U;
        this->stage_master_data[5U] = 0U;
        this->stage_master_data[6U] = 0U;
        this->stage_master_data[7U] = 0U;
        this->stage_master_data[8U] = 0U;
    } else {
        this->stage_master_data[0U] = this->__PVT__valid_fifo_to_master[0U];
        this->stage_master_data[1U] = this->__PVT__valid_fifo_to_master[1U];
        this->stage_master_data[2U] = this->__PVT__valid_fifo_to_master[2U];
        this->stage_master_data[3U] = this->__PVT__valid_fifo_to_master[3U];
        this->stage_master_data[4U] = this->__PVT__valid_fifo_to_master[4U];
        this->stage_master_data[5U] = this->__PVT__valid_fifo_to_master[5U];
        this->stage_master_data[6U] = this->__PVT__valid_fifo_to_master[6U];
        this->stage_master_data[7U] = this->__PVT__valid_fifo_to_master[7U];
        this->stage_master_data[8U] = this->__PVT__valid_fifo_to_master[8U];
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__15(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__15\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__grant_fifo_to_valid_fifo[6U] = ((0xfU 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[6U]) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               vlTOPp->walking_mem_master_mem_rdata
                                                               [3U]) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[7U] = ((0xfU 
                                                  & ((IData)(
                                                             vlTOPp->walking_mem_master_mem_rdata
                                                             [3U]) 
                                                     >> 0x1cU)) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [3U] 
                                                                >> 0x20U)) 
                                                       << 4U)));
    this->__PVT__grant_fifo_to_valid_fifo[8U] = ((0xfffff0U 
                                                  & this->__PVT__grant_fifo_to_valid_fifo[8U]) 
                                                 | (0xfU 
                                                    & ((IData)(
                                                               (vlTOPp->walking_mem_master_mem_rdata
                                                                [3U] 
                                                                >> 0x20U)) 
                                                       >> 0x1cU)));
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__25(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__25\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    if (vlTOPp->rst_ni) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_q 
            = this->__PVT__grant_fifo_u__DOT__write_pointer_n;
        this->__PVT__valid_fifo_u__DOT__write_pointer_q 
            = ((IData)(this->__PVT__flush_fifo) ? 0U
                : (IData)(this->__PVT__valid_fifo_u__DOT__write_pointer_n));
        this->__PVT__valid_fifo_u__DOT__read_pointer_q 
            = ((IData)(this->__PVT__flush_fifo) ? 0U
                : (IData)(this->__PVT__valid_fifo_u__DOT__read_pointer_n));
    } else {
        this->__PVT__grant_fifo_u__DOT__write_pointer_q = 0U;
        this->__PVT__valid_fifo_u__DOT__write_pointer_q = 0U;
        this->__PVT__valid_fifo_u__DOT__read_pointer_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(this->__PVT__valid_fifo_u__DOT__gate_clock)))) {
            __Vilp = 0U;
            while ((__Vilp <= 0x117U)) {
                this->__PVT__valid_fifo_u__DOT__mem_q[__Vilp] 
                    = this->__PVT__valid_fifo_u__DOT__mem_n[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x117U)) {
            this->__PVT__valid_fifo_u__DOT__mem_q[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    this->__PVT__grant_fifo_u__DOT__read_pointer_q 
        = ((IData)(vlTOPp->rst_ni) ? (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_n)
            : 0U);
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(this->__PVT__grant_fifo_u__DOT__gate_clock)))) {
            __Vilp = 0U;
            while ((__Vilp <= 0x117U)) {
                this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp] 
                    = this->__PVT__grant_fifo_u__DOT__mem_n[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x117U)) {
            this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlTOPp->rst_ni) {
        this->__PVT__valid_fifo_u__DOT__status_cnt_q 
            = ((IData)(this->__PVT__flush_fifo) ? 0U
                : (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_n));
        this->__PVT__grant_fifo_u__DOT__status_cnt_q 
            = this->__PVT__grant_fifo_u__DOT__status_cnt_n;
    } else {
        this->__PVT__valid_fifo_u__DOT__status_cnt_q = 0U;
        this->__PVT__grant_fifo_u__DOT__status_cnt_q = 0U;
    }
    if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))) {
        this->__Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  (0x1ffU & (((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                             >> 5U))] >> (0x1fU & ((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x1ffU & (
                                                   ((IData)(0x118U) 
                                                    * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x118U) 
                                                  * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (this->__PVT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                             * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                  >> (0x1fU & ((IData)(0x118U) * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))));
        this->__Vcellout__grant_fifo_u__data_o[8U] 
            = (0xffffffU & (((0U == (0x1fU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                              ? 0U : (this->__PVT__grant_fifo_u__DOT__mem_q[
                                      ((IData)(9U) 
                                       + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x118U) 
                                                * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                            | (this->__PVT__grant_fifo_u__DOT__mem_q[
                               ((IData)(8U) + (0x1ffU 
                                               & (((IData)(0x118U) 
                                                   * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x118U) 
                                            * (IData)(this->__PVT__grant_fifo_u__DOT__read_pointer_q))))));
    } else {
        this->__Vcellout__grant_fifo_u__data_o[0U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[1U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[2U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[3U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[4U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[5U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[6U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[7U] = 0U;
        this->__Vcellout__grant_fifo_u__data_o[8U] = 0U;
    }
    this->__PVT__stage_usage = (0x3fU & ((0x1fU & (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                                         + (0x1fU & (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))));
    this->__PVT__flush_status_d = ((2U & (IData)(this->__PVT__flush_status_q))
                                    ? ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [6U]) ? 3U
                                            : 0U) : 
                                       ((0U == (IData)(this->__PVT__spec_transaction_cnt_q))
                                         ? 0U : 2U))
                                    : ((1U & (IData)(this->__PVT__flush_status_q))
                                        ? ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))
                                            ? 3U : 1U)
                                        : ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                                            [6U]) ? 
                                           ((1U == 
                                             vlTOPp->mptw_top__DOT__system_control_flush
                                             [6U]) ? 1U
                                             : 2U) : 0U)));
    this->stage_status_flushed = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        this->stage_status_flushed = 3U;
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->stage_status_flushed = 1U;
            if ((0U == (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                this->stage_status_flushed = 3U;
            }
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [6U])) {
                this->stage_status_flushed = 1U;
            }
        }
    }
    this->__PVT__grant_fifo_to_valid_fifo[0U] = this->__Vcellout__grant_fifo_u__data_o[0U];
    this->__PVT__grant_fifo_to_valid_fifo[1U] = this->__Vcellout__grant_fifo_u__data_o[1U];
    this->__PVT__grant_fifo_to_valid_fifo[2U] = this->__Vcellout__grant_fifo_u__data_o[2U];
    this->__PVT__grant_fifo_to_valid_fifo[3U] = this->__Vcellout__grant_fifo_u__data_o[3U];
    this->__PVT__grant_fifo_to_valid_fifo[4U] = this->__Vcellout__grant_fifo_u__data_o[4U];
    this->__PVT__grant_fifo_to_valid_fifo[5U] = this->__Vcellout__grant_fifo_u__data_o[5U];
    this->__PVT__grant_fifo_to_valid_fifo[6U] = this->__Vcellout__grant_fifo_u__data_o[6U];
    this->__PVT__grant_fifo_to_valid_fifo[7U] = this->__Vcellout__grant_fifo_u__data_o[7U];
    this->__PVT__grant_fifo_to_valid_fifo[8U] = this->__Vcellout__grant_fifo_u__data_o[8U];
    this->memory_master_mem_addr = 0ULL;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_addr = (((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_addr = (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
        }
    }
    this->memory_master_mem_req = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                            >> 2U))))) {
                this->memory_master_mem_req = 1U;
            }
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->memory_master_mem_req = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid;
        }
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__30(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_combo__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__30\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    this->__PVT__grant_fifo_status_d = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_status_d = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                        >> 2U))))
                                                 ? 
                                                (vlTOPp->walking_mem_master_mem_gnt
                                                 [3U]
                                                  ? 0U
                                                  : 1U)
                                                 : 0U);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            this->__PVT__grant_fifo_status_d = 1U;
            if (vlTOPp->walking_mem_master_mem_gnt[3U]) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > ((IData)(1U) + (IData)(this->__PVT__stage_usage)))
                      ? 0U : 2U);
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__grant_fifo_status_d = 
                    ((0x20U > (IData)(this->__PVT__stage_usage))
                      ? 0U : 2U);
            }
        }
    }
    this->__PVT__grant_fifo_push = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__grant_fifo_push = ((0U != 
                                             (3U & 
                                              ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                << 0x1eU) 
                                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                  >> 2U)))) 
                                            | vlTOPp->walking_mem_master_mem_gnt
                                            [3U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->walking_mem_master_mem_gnt[3U]) {
                this->__PVT__grant_fifo_push = 1U;
            }
        }
    }
    this->__PVT__req_bus_ready = 0U;
    if ((0U == (IData)(this->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(this->__PVT__stage_usage)) 
                 & (0x20U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(this->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            this->__PVT__req_bus_ready = ((0U != (3U 
                                                  & ((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                        >> 2U)))) 
                                          | vlTOPp->walking_mem_master_mem_gnt
                                          [3U]);
        }
    } else {
        if ((1U == (IData)(this->__PVT__grant_fifo_status_q))) {
            if (vlTOPp->walking_mem_master_mem_gnt[3U]) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > ((IData)(1U) 
                                                 + (IData)(this->__PVT__stage_usage)));
            }
        } else {
            if ((2U == (IData)(this->__PVT__grant_fifo_status_q))) {
                this->__PVT__req_bus_ready = (0x20U 
                                              > (IData)(this->__PVT__stage_usage));
            }
        }
    }
    this->__PVT__flush_grant_fifo_pop = 0U;
    if ((1U & (~ ((IData)(this->__PVT__flush_status_q) 
                  >> 1U)))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            if ((0U != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                if ((vlTOPp->walking_mem_master_mem_valid
                     [3U] | (0U != (3U & ((this->__PVT__grant_fifo_to_valid_fifo[5U] 
                                           << 0x1eU) 
                                          | (this->__PVT__grant_fifo_to_valid_fifo[4U] 
                                             >> 2U)))))) {
                    this->__PVT__flush_grant_fifo_pop = 1U;
                }
            }
        }
    }
    this->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    this->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = this->__PVT__grant_fifo_u__DOT__write_pointer_q;
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q)));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x117U)) {
        this->__PVT__grant_fifo_u__DOT__mem_n[__Vilp] 
            = this->__PVT__grant_fifo_u__DOT__mem_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (((IData)(this->__PVT__grant_fifo_push) & (0x20U 
                                                  != (IData)(this->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        this->grant_fifo_u__DOT____Vlvbound1[0U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
        this->grant_fifo_u__DOT____Vlvbound1[1U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
        this->grant_fifo_u__DOT____Vlvbound1[2U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
        this->grant_fifo_u__DOT____Vlvbound1[3U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
        this->grant_fifo_u__DOT____Vlvbound1[4U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
        this->grant_fifo_u__DOT____Vlvbound1[5U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
        this->grant_fifo_u__DOT____Vlvbound1[6U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
        this->grant_fifo_u__DOT____Vlvbound1[7U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
        this->grant_fifo_u__DOT____Vlvbound1[8U] = 
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(280,(0x3fffU & ((IData)(0x118U) 
                                              * (IData)(this->__PVT__grant_fifo_u__DOT__write_pointer_q))), this->__PVT__grant_fifo_u__DOT__mem_n, this->grant_fifo_u__DOT____Vlvbound1);
        }
    }
}

VL_INLINE_OPT void Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__40(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8::_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__40\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__flush_fifo = 0U;
    if ((2U & (IData)(this->__PVT__flush_status_q))) {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        }
    } else {
        if ((1U & (IData)(this->__PVT__flush_status_q))) {
            this->__PVT__flush_fifo = 1U;
        } else {
            if ((0U != vlTOPp->mptw_top__DOT__system_control_flush
                 [6U])) {
                this->__PVT__flush_fifo = (1U == vlTOPp->mptw_top__DOT__system_control_flush
                                           [6U]);
            }
        }
    }
}
