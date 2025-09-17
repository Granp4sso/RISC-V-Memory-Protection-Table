// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmptw_top.h for the primary calling header

#include "Vmptw_top__pch.h"
#include "Vmptw_top__Syms.h"
#include "Vmptw_top_memory_read_stage__pi8.h"

extern const VlWide<9>/*287:0*/ Vmptw_top__ConstPool__CONST_h4d851b67_0;
extern const VlWide<9>/*287:0*/ Vmptw_top__ConstPool__CONST_h083ec1be_0;

VL_ATTR_COLD void Vmptw_top_memory_read_stage__pi8___stl_sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8___stl_sequent__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__0\n"); );
    // Body
    vlSelf->__Vcellout__valid_fifo_u__data_o[0U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(1U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   (0x1ffU & (((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[0U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[1U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(2U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[1U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[2U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(3U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[2U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[3U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(4U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[3U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[4U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(5U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[4U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[5U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(6U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[5U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[6U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(7U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[6U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[7U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(8U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[7U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[8U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(9U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(8U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[8U]));
    vlSelf->__PVT__stage_usage = (0x3fU & ((0x1fU & (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                                           + (0x1fU 
                                              & (IData)(vlSelf->__PVT__valid_fifo_u__DOT__status_cnt_q))));
    vlSelf->__Vcellout__grant_fifo_u__data_o[0U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(1U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   (0x1ffU & (((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[0U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[1U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(2U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[1U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[2U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(3U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[2U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[3U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(4U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[3U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[4U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(5U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[4U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[5U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(6U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[5U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[6U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(7U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[6U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[7U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(8U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[7U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[8U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(9U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(8U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[8U]));
    vlSelf->__PVT__flush_fifo = 0U;
    vlSelf->stage_status_flushed = 0U;
    if ((2U & (IData)(vlSelf->__PVT__flush_status_q))) {
        if ((1U & (IData)(vlSelf->__PVT__flush_status_q))) {
            vlSelf->__PVT__req_bus_ready = 0U;
            vlSelf->__PVT__flush_fifo = 1U;
            vlSelf->__PVT__flush_status_d = ((0U != 
                                              vlSymsp->TOP.mptw_top__DOT__system_control_flush
                                              [2U])
                                              ? 3U : 0U);
        } else {
            vlSelf->__PVT__flush_status_d = ((0U == (IData)(vlSelf->__PVT__spec_transaction_cnt_q))
                                              ? 0U : 2U);
        }
        vlSelf->stage_status_flushed = 3U;
    } else if ((1U & (IData)(vlSelf->__PVT__flush_status_q))) {
        vlSelf->__PVT__req_bus_ready = 0U;
        vlSelf->__PVT__flush_fifo = 1U;
        vlSelf->stage_status_flushed = 1U;
        if ((0U == (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
            vlSelf->__PVT__flush_status_d = 3U;
            vlSelf->stage_status_flushed = 3U;
        } else {
            vlSelf->__PVT__flush_status_d = 1U;
        }
    } else if ((0U != vlSymsp->TOP.mptw_top__DOT__system_control_flush
                [2U])) {
        if ((1U == vlSymsp->TOP.mptw_top__DOT__system_control_flush
             [2U])) {
            vlSelf->__PVT__flush_fifo = 1U;
            vlSelf->__PVT__flush_status_d = 1U;
        } else {
            vlSelf->__PVT__flush_fifo = 0U;
            vlSelf->__PVT__flush_status_d = 2U;
        }
        vlSelf->stage_status_flushed = 1U;
    } else {
        vlSelf->__PVT__flush_status_d = 0U;
    }
    vlSelf->__PVT__grant_fifo_status_d = 0U;
    vlSelf->memory_master_mem_addr = 0ULL;
    vlSelf->memory_master_mem_req = 0U;
    vlSelf->__PVT__grant_fifo_push = 0U;
    vlSelf->__PVT__req_bus_ready = 0U;
    if ((0U == (IData)(vlSelf->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlSymsp->TOP.mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid) 
             & (((0x20U > (IData)(vlSelf->__PVT__stage_usage)) 
                 & (0x20U != (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(vlSelf->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & (vlSymsp->TOP.mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] 
                              >> 2U)))) {
                vlSelf->__PVT__grant_fifo_status_d 
                    = ((IData)(vlSymsp->TOP.plb_master_mem_gnt)
                        ? 0U : 1U);
                vlSelf->memory_master_mem_addr = (((QData)((IData)(
                                                                   vlSymsp->TOP.mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP.mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U])));
                vlSelf->memory_master_mem_req = 1U;
            } else {
                vlSelf->__PVT__grant_fifo_status_d = 0U;
            }
            vlSelf->__PVT__grant_fifo_push = ((0U != 
                                               (3U 
                                                & (vlSymsp->TOP.mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] 
                                                   >> 2U))) 
                                              || (IData)(vlSymsp->TOP.plb_master_mem_gnt));
            vlSelf->__PVT__req_bus_ready = ((0U != 
                                             (3U & 
                                              (vlSymsp->TOP.mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U] 
                                               >> 2U))) 
                                            || (IData)(vlSymsp->TOP.plb_master_mem_gnt));
        }
    } else if ((1U == (IData)(vlSelf->__PVT__grant_fifo_status_q))) {
        vlSelf->__PVT__grant_fifo_status_d = 1U;
        if (vlSymsp->TOP.plb_master_mem_gnt) {
            if ((0x20U > ((IData)(1U) + (IData)(vlSelf->__PVT__stage_usage)))) {
                vlSelf->__PVT__grant_fifo_status_d = 0U;
                vlSelf->__PVT__grant_fifo_push = 1U;
                vlSelf->__PVT__req_bus_ready = 1U;
            } else {
                vlSelf->__PVT__grant_fifo_status_d = 2U;
                vlSelf->__PVT__grant_fifo_push = 1U;
                vlSelf->__PVT__req_bus_ready = 0U;
            }
        }
        vlSelf->memory_master_mem_addr = (((QData)((IData)(
                                                           vlSymsp->TOP.mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP.mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U])));
        vlSelf->memory_master_mem_req = vlSymsp->TOP.mptw_top__DOT__issue_stage_u__DOT__issue_to_plb_lookup_valid;
    } else if ((2U == (IData)(vlSelf->__PVT__grant_fifo_status_q))) {
        if ((0x20U > (IData)(vlSelf->__PVT__stage_usage))) {
            vlSelf->__PVT__grant_fifo_status_d = 0U;
            vlSelf->__PVT__req_bus_ready = 1U;
        } else {
            vlSelf->__PVT__grant_fifo_status_d = 2U;
            vlSelf->__PVT__req_bus_ready = 0U;
        }
    }
    vlSelf->__Vcellinp__valid_fifo_u__data_i[0U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[0U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[1U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[1U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[2U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[2U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[3U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[3U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[4U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[4U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[5U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[5U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[6U] = 
        (((IData)(vlSymsp->TOP.plb_master_mem_rdata) 
          << 4U) | (0xfU & vlSelf->__Vcellout__grant_fifo_u__data_o[6U]));
    vlSelf->__Vcellinp__valid_fifo_u__data_i[7U] = 
        (((IData)(vlSymsp->TOP.plb_master_mem_rdata) 
          >> 0x1cU) | ((IData)((vlSymsp->TOP.plb_master_mem_rdata 
                                >> 0x20U)) << 4U));
    vlSelf->__Vcellinp__valid_fifo_u__data_i[8U] = 
        ((0xfffff0U & vlSelf->__Vcellout__grant_fifo_u__data_o[8U]) 
         | ((IData)((vlSymsp->TOP.plb_master_mem_rdata 
                     >> 0x20U)) >> 0x1cU));
    vlSelf->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q;
    VL_ASSIGN_W(8960,vlSelf->__PVT__grant_fifo_u__DOT__mem_n, vlSelf->__PVT__grant_fifo_u__DOT__mem_q);
    if (((IData)(vlSelf->__PVT__grant_fifo_push) & 
         (0x20U != (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlSelf->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
        vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q)));
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[0U] 
            = vlSymsp->TOP.mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[0U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[1U] 
            = vlSymsp->TOP.mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[1U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[2U] 
            = vlSymsp->TOP.mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[2U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[3U] 
            = vlSymsp->TOP.mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[3U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[4U] 
            = vlSymsp->TOP.mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[4U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[5U] 
            = vlSymsp->TOP.mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[5U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[6U] 
            = vlSymsp->TOP.mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[6U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[7U] 
            = vlSymsp->TOP.mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[7U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[8U] 
            = vlSymsp->TOP.mptw_top__DOT__issue_stage_u__DOT__pipeline_register_generate__DOT__issue_reg__DOT__reg_data_q[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WW(8960,280,(0x3fffU & ((IData)(0x118U) 
                                                 * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q))), vlSelf->__PVT__grant_fifo_u__DOT__mem_n, vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0);
        }
    }
    vlSelf->__PVT__flush_grant_fifo_pop = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__flush_status_q) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__flush_status_q))) {
            if ((0U != (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                if (((IData)(vlSymsp->TOP.plb_master_mem_valid) 
                     | (0U != (0xcU & vlSelf->__Vcellinp__valid_fifo_u__data_i[4U])))) {
                    vlSelf->__PVT__flush_grant_fifo_pop = 1U;
                }
            }
        }
    }
}

VL_ATTR_COLD void Vmptw_top_memory_read_stage__pi8___stl_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8___stl_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__0\n"); );
    // Body
    vlSelf->__Vcellout__valid_fifo_u__data_o[0U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(1U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   (0x1ffU & (((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[0U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[1U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(2U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[1U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[2U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(3U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[2U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[3U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(4U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[3U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[4U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(5U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[4U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[5U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(6U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[5U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[6U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(7U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[6U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[7U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(8U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[7U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[8U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(9U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(8U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[8U]));
    vlSelf->__PVT__stage_usage = (0x3fU & ((0x1fU & (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                                           + (0x1fU 
                                              & (IData)(vlSelf->__PVT__valid_fifo_u__DOT__status_cnt_q))));
    vlSelf->__Vcellout__grant_fifo_u__data_o[0U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(1U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   (0x1ffU & (((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[0U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[1U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(2U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[1U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[2U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(3U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[2U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[3U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(4U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[3U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[4U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(5U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[4U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[5U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(6U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[5U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[6U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(7U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[6U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[7U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(8U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[7U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[8U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(9U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(8U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[8U]));
    vlSelf->__PVT__flush_fifo = 0U;
    vlSelf->stage_status_flushed = 0U;
    if ((2U & (IData)(vlSelf->__PVT__flush_status_q))) {
        if ((1U & (IData)(vlSelf->__PVT__flush_status_q))) {
            vlSelf->__PVT__req_bus_ready = 0U;
            vlSelf->__PVT__flush_fifo = 1U;
            vlSelf->__PVT__flush_status_d = ((0U != 
                                              vlSymsp->TOP.mptw_top__DOT__system_control_flush
                                              [3U])
                                              ? 3U : 0U);
        } else {
            vlSelf->__PVT__flush_status_d = ((0U == (IData)(vlSelf->__PVT__spec_transaction_cnt_q))
                                              ? 0U : 2U);
        }
        vlSelf->stage_status_flushed = 3U;
    } else if ((1U & (IData)(vlSelf->__PVT__flush_status_q))) {
        vlSelf->__PVT__req_bus_ready = 0U;
        vlSelf->__PVT__flush_fifo = 1U;
        vlSelf->stage_status_flushed = 1U;
        if ((0U == (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
            vlSelf->__PVT__flush_status_d = 3U;
            vlSelf->stage_status_flushed = 3U;
        } else {
            vlSelf->__PVT__flush_status_d = 1U;
        }
    } else if ((0U != vlSymsp->TOP.mptw_top__DOT__system_control_flush
                [3U])) {
        if ((1U == vlSymsp->TOP.mptw_top__DOT__system_control_flush
             [3U])) {
            vlSelf->__PVT__flush_fifo = 1U;
            vlSelf->__PVT__flush_status_d = 1U;
        } else {
            vlSelf->__PVT__flush_fifo = 0U;
            vlSelf->__PVT__flush_status_d = 2U;
        }
        vlSelf->stage_status_flushed = 1U;
    } else {
        vlSelf->__PVT__flush_status_d = 0U;
    }
    vlSelf->__PVT__grant_fifo_status_d = 0U;
    vlSelf->memory_master_mem_addr = 0ULL;
    vlSelf->memory_master_mem_req = 0U;
    vlSelf->__PVT__req_bus_ready = 0U;
    vlSelf->__PVT__grant_fifo_push = 0U;
    if ((0U == (IData)(vlSelf->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(vlSelf->__PVT__stage_usage)) 
                 & (0x20U != (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(vlSelf->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & (vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                              >> 2U)))) {
                vlSelf->__PVT__grant_fifo_status_d 
                    = (vlSymsp->TOP.walking_mem_master_mem_gnt
                       [0U] ? 0U : 1U);
                vlSelf->memory_master_mem_addr = (((QData)((IData)(
                                                                   vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
                vlSelf->memory_master_mem_req = 1U;
            } else {
                vlSelf->__PVT__grant_fifo_status_d = 0U;
            }
            vlSelf->__PVT__req_bus_ready = ((0U != 
                                             (3U & 
                                              (vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                               >> 2U))) 
                                            || vlSymsp->TOP.walking_mem_master_mem_gnt
                                            [0U]);
            vlSelf->__PVT__grant_fifo_push = ((0U != 
                                               (3U 
                                                & (vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                   >> 2U))) 
                                              || vlSymsp->TOP.walking_mem_master_mem_gnt
                                              [0U]);
        }
    } else if ((1U == (IData)(vlSelf->__PVT__grant_fifo_status_q))) {
        vlSelf->__PVT__grant_fifo_status_d = 1U;
        if (vlSymsp->TOP.walking_mem_master_mem_gnt
            [0U]) {
            if ((0x20U > ((IData)(1U) + (IData)(vlSelf->__PVT__stage_usage)))) {
                vlSelf->__PVT__grant_fifo_status_d = 0U;
                vlSelf->__PVT__req_bus_ready = 1U;
            } else {
                vlSelf->__PVT__grant_fifo_status_d = 2U;
                vlSelf->__PVT__req_bus_ready = 0U;
            }
            vlSelf->__PVT__grant_fifo_push = 1U;
        }
        vlSelf->memory_master_mem_addr = (((QData)((IData)(
                                                           vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
        vlSelf->memory_master_mem_req = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid;
    } else if ((2U == (IData)(vlSelf->__PVT__grant_fifo_status_q))) {
        if ((0x20U > (IData)(vlSelf->__PVT__stage_usage))) {
            vlSelf->__PVT__grant_fifo_status_d = 0U;
            vlSelf->__PVT__req_bus_ready = 1U;
        } else {
            vlSelf->__PVT__grant_fifo_status_d = 2U;
            vlSelf->__PVT__req_bus_ready = 0U;
        }
    }
    vlSelf->__Vcellinp__valid_fifo_u__data_i[0U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[0U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[1U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[1U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[2U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[2U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[3U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[3U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[4U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[4U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[5U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[5U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[6U] = 
        (((IData)(vlSymsp->TOP.walking_mem_master_mem_rdata
                  [0U]) << 4U) | (0xfU & vlSelf->__Vcellout__grant_fifo_u__data_o[6U]));
    vlSelf->__Vcellinp__valid_fifo_u__data_i[7U] = 
        (((IData)(vlSymsp->TOP.walking_mem_master_mem_rdata
                  [0U]) >> 0x1cU) | ((IData)((vlSymsp->TOP.walking_mem_master_mem_rdata
                                              [0U] 
                                              >> 0x20U)) 
                                     << 4U));
    vlSelf->__Vcellinp__valid_fifo_u__data_i[8U] = 
        ((0xfffff0U & vlSelf->__Vcellout__grant_fifo_u__data_o[8U]) 
         | ((IData)((vlSymsp->TOP.walking_mem_master_mem_rdata
                     [0U] >> 0x20U)) >> 0x1cU));
    vlSelf->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q;
    VL_ASSIGN_W(8960,vlSelf->__PVT__grant_fifo_u__DOT__mem_n, vlSelf->__PVT__grant_fifo_u__DOT__mem_q);
    if (((IData)(vlSelf->__PVT__grant_fifo_push) & 
         (0x20U != (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlSelf->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
        vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q)));
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[0U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[1U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[2U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[3U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[4U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[5U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[6U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[7U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[8U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WW(8960,280,(0x3fffU & ((IData)(0x118U) 
                                                 * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q))), vlSelf->__PVT__grant_fifo_u__DOT__mem_n, vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0);
        }
    }
    vlSelf->__PVT__flush_grant_fifo_pop = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__flush_status_q) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__flush_status_q))) {
            if ((0U != (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                if ((vlSymsp->TOP.walking_mem_master_mem_valid
                     [0U] | (0U != (3U & (vlSelf->__Vcellinp__valid_fifo_u__data_i[4U] 
                                          >> 2U))))) {
                    vlSelf->__PVT__flush_grant_fifo_pop = 1U;
                }
            }
        }
    }
}

VL_ATTR_COLD void Vmptw_top_memory_read_stage__pi8___stl_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8___stl_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__0\n"); );
    // Body
    vlSelf->__Vcellout__valid_fifo_u__data_o[0U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(1U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   (0x1ffU & (((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[0U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[1U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(2U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[1U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[2U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(3U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[2U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[3U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(4U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[3U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[4U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(5U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[4U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[5U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(6U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[5U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[6U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(7U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[6U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[7U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(8U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[7U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[8U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(9U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(8U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[8U]));
    vlSelf->__PVT__stage_usage = (0x3fU & ((0x1fU & (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                                           + (0x1fU 
                                              & (IData)(vlSelf->__PVT__valid_fifo_u__DOT__status_cnt_q))));
    vlSelf->__Vcellout__grant_fifo_u__data_o[0U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(1U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   (0x1ffU & (((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[0U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[1U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(2U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[1U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[2U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(3U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[2U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[3U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(4U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[3U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[4U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(5U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[4U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[5U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(6U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[5U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[6U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(7U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[6U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[7U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(8U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[7U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[8U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(9U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(8U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[8U]));
    vlSelf->__PVT__flush_fifo = 0U;
    vlSelf->stage_status_flushed = 0U;
    if ((2U & (IData)(vlSelf->__PVT__flush_status_q))) {
        if ((1U & (IData)(vlSelf->__PVT__flush_status_q))) {
            vlSelf->__PVT__req_bus_ready = 0U;
            vlSelf->__PVT__flush_fifo = 1U;
            vlSelf->__PVT__flush_status_d = ((0U != 
                                              vlSymsp->TOP.mptw_top__DOT__system_control_flush
                                              [4U])
                                              ? 3U : 0U);
        } else {
            vlSelf->__PVT__flush_status_d = ((0U == (IData)(vlSelf->__PVT__spec_transaction_cnt_q))
                                              ? 0U : 2U);
        }
        vlSelf->stage_status_flushed = 3U;
    } else if ((1U & (IData)(vlSelf->__PVT__flush_status_q))) {
        vlSelf->__PVT__req_bus_ready = 0U;
        vlSelf->__PVT__flush_fifo = 1U;
        vlSelf->stage_status_flushed = 1U;
        if ((0U == (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
            vlSelf->__PVT__flush_status_d = 3U;
            vlSelf->stage_status_flushed = 3U;
        } else {
            vlSelf->__PVT__flush_status_d = 1U;
        }
    } else if ((0U != vlSymsp->TOP.mptw_top__DOT__system_control_flush
                [4U])) {
        if ((1U == vlSymsp->TOP.mptw_top__DOT__system_control_flush
             [4U])) {
            vlSelf->__PVT__flush_fifo = 1U;
            vlSelf->__PVT__flush_status_d = 1U;
        } else {
            vlSelf->__PVT__flush_fifo = 0U;
            vlSelf->__PVT__flush_status_d = 2U;
        }
        vlSelf->stage_status_flushed = 1U;
    } else {
        vlSelf->__PVT__flush_status_d = 0U;
    }
    vlSelf->__PVT__grant_fifo_status_d = 0U;
    vlSelf->memory_master_mem_addr = 0ULL;
    vlSelf->memory_master_mem_req = 0U;
    vlSelf->__PVT__req_bus_ready = 0U;
    vlSelf->__PVT__grant_fifo_push = 0U;
    if ((0U == (IData)(vlSelf->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(vlSelf->__PVT__stage_usage)) 
                 & (0x20U != (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(vlSelf->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & (vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                              >> 2U)))) {
                vlSelf->__PVT__grant_fifo_status_d 
                    = (vlSymsp->TOP.walking_mem_master_mem_gnt
                       [1U] ? 0U : 1U);
                vlSelf->memory_master_mem_addr = (((QData)((IData)(
                                                                   vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
                vlSelf->memory_master_mem_req = 1U;
            } else {
                vlSelf->__PVT__grant_fifo_status_d = 0U;
            }
            vlSelf->__PVT__req_bus_ready = ((0U != 
                                             (3U & 
                                              (vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                               >> 2U))) 
                                            || vlSymsp->TOP.walking_mem_master_mem_gnt
                                            [1U]);
            vlSelf->__PVT__grant_fifo_push = ((0U != 
                                               (3U 
                                                & (vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                   >> 2U))) 
                                              || vlSymsp->TOP.walking_mem_master_mem_gnt
                                              [1U]);
        }
    } else if ((1U == (IData)(vlSelf->__PVT__grant_fifo_status_q))) {
        vlSelf->__PVT__grant_fifo_status_d = 1U;
        if (vlSymsp->TOP.walking_mem_master_mem_gnt
            [1U]) {
            if ((0x20U > ((IData)(1U) + (IData)(vlSelf->__PVT__stage_usage)))) {
                vlSelf->__PVT__grant_fifo_status_d = 0U;
                vlSelf->__PVT__req_bus_ready = 1U;
            } else {
                vlSelf->__PVT__grant_fifo_status_d = 2U;
                vlSelf->__PVT__req_bus_ready = 0U;
            }
            vlSelf->__PVT__grant_fifo_push = 1U;
        }
        vlSelf->memory_master_mem_addr = (((QData)((IData)(
                                                           vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
        vlSelf->memory_master_mem_req = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid;
    } else if ((2U == (IData)(vlSelf->__PVT__grant_fifo_status_q))) {
        if ((0x20U > (IData)(vlSelf->__PVT__stage_usage))) {
            vlSelf->__PVT__grant_fifo_status_d = 0U;
            vlSelf->__PVT__req_bus_ready = 1U;
        } else {
            vlSelf->__PVT__grant_fifo_status_d = 2U;
            vlSelf->__PVT__req_bus_ready = 0U;
        }
    }
    vlSelf->__Vcellinp__valid_fifo_u__data_i[0U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[0U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[1U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[1U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[2U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[2U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[3U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[3U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[4U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[4U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[5U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[5U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[6U] = 
        (((IData)(vlSymsp->TOP.walking_mem_master_mem_rdata
                  [1U]) << 4U) | (0xfU & vlSelf->__Vcellout__grant_fifo_u__data_o[6U]));
    vlSelf->__Vcellinp__valid_fifo_u__data_i[7U] = 
        (((IData)(vlSymsp->TOP.walking_mem_master_mem_rdata
                  [1U]) >> 0x1cU) | ((IData)((vlSymsp->TOP.walking_mem_master_mem_rdata
                                              [1U] 
                                              >> 0x20U)) 
                                     << 4U));
    vlSelf->__Vcellinp__valid_fifo_u__data_i[8U] = 
        ((0xfffff0U & vlSelf->__Vcellout__grant_fifo_u__data_o[8U]) 
         | ((IData)((vlSymsp->TOP.walking_mem_master_mem_rdata
                     [1U] >> 0x20U)) >> 0x1cU));
    vlSelf->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q;
    VL_ASSIGN_W(8960,vlSelf->__PVT__grant_fifo_u__DOT__mem_n, vlSelf->__PVT__grant_fifo_u__DOT__mem_q);
    if (((IData)(vlSelf->__PVT__grant_fifo_push) & 
         (0x20U != (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlSelf->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
        vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q)));
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[0U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[1U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[2U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[3U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[4U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[5U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[6U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[7U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[8U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WW(8960,280,(0x3fffU & ((IData)(0x118U) 
                                                 * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q))), vlSelf->__PVT__grant_fifo_u__DOT__mem_n, vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0);
        }
    }
    vlSelf->__PVT__flush_grant_fifo_pop = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__flush_status_q) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__flush_status_q))) {
            if ((0U != (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                if ((vlSymsp->TOP.walking_mem_master_mem_valid
                     [1U] | (0U != (3U & (vlSelf->__Vcellinp__valid_fifo_u__data_i[4U] 
                                          >> 2U))))) {
                    vlSelf->__PVT__flush_grant_fifo_pop = 1U;
                }
            }
        }
    }
}

VL_ATTR_COLD void Vmptw_top_memory_read_stage__pi8___stl_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8___stl_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__0\n"); );
    // Body
    vlSelf->__Vcellout__valid_fifo_u__data_o[0U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(1U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   (0x1ffU & (((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[0U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[1U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(2U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[1U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[2U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(3U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[2U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[3U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(4U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[3U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[4U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(5U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[4U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[5U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(6U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[5U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[6U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(7U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[6U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[7U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(8U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[7U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[8U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(9U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(8U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[8U]));
    vlSelf->__PVT__stage_usage = (0x3fU & ((0x1fU & (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                                           + (0x1fU 
                                              & (IData)(vlSelf->__PVT__valid_fifo_u__DOT__status_cnt_q))));
    vlSelf->__Vcellout__grant_fifo_u__data_o[0U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(1U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   (0x1ffU & (((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[0U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[1U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(2U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[1U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[2U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(3U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[2U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[3U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(4U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[3U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[4U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(5U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[4U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[5U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(6U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[5U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[6U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(7U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[6U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[7U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(8U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[7U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[8U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(9U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(8U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[8U]));
    vlSelf->__PVT__flush_fifo = 0U;
    vlSelf->stage_status_flushed = 0U;
    if ((2U & (IData)(vlSelf->__PVT__flush_status_q))) {
        if ((1U & (IData)(vlSelf->__PVT__flush_status_q))) {
            vlSelf->__PVT__req_bus_ready = 0U;
            vlSelf->__PVT__flush_fifo = 1U;
            vlSelf->__PVT__flush_status_d = ((0U != 
                                              vlSymsp->TOP.mptw_top__DOT__system_control_flush
                                              [5U])
                                              ? 3U : 0U);
        } else {
            vlSelf->__PVT__flush_status_d = ((0U == (IData)(vlSelf->__PVT__spec_transaction_cnt_q))
                                              ? 0U : 2U);
        }
        vlSelf->stage_status_flushed = 3U;
    } else if ((1U & (IData)(vlSelf->__PVT__flush_status_q))) {
        vlSelf->__PVT__req_bus_ready = 0U;
        vlSelf->__PVT__flush_fifo = 1U;
        vlSelf->stage_status_flushed = 1U;
        if ((0U == (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
            vlSelf->__PVT__flush_status_d = 3U;
            vlSelf->stage_status_flushed = 3U;
        } else {
            vlSelf->__PVT__flush_status_d = 1U;
        }
    } else if ((0U != vlSymsp->TOP.mptw_top__DOT__system_control_flush
                [5U])) {
        if ((1U == vlSymsp->TOP.mptw_top__DOT__system_control_flush
             [5U])) {
            vlSelf->__PVT__flush_fifo = 1U;
            vlSelf->__PVT__flush_status_d = 1U;
        } else {
            vlSelf->__PVT__flush_fifo = 0U;
            vlSelf->__PVT__flush_status_d = 2U;
        }
        vlSelf->stage_status_flushed = 1U;
    } else {
        vlSelf->__PVT__flush_status_d = 0U;
    }
    vlSelf->__PVT__grant_fifo_status_d = 0U;
    vlSelf->memory_master_mem_addr = 0ULL;
    vlSelf->memory_master_mem_req = 0U;
    vlSelf->__PVT__req_bus_ready = 0U;
    vlSelf->__PVT__grant_fifo_push = 0U;
    if ((0U == (IData)(vlSelf->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(vlSelf->__PVT__stage_usage)) 
                 & (0x20U != (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(vlSelf->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & (vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                              >> 2U)))) {
                vlSelf->__PVT__grant_fifo_status_d 
                    = (vlSymsp->TOP.walking_mem_master_mem_gnt
                       [2U] ? 0U : 1U);
                vlSelf->memory_master_mem_addr = (((QData)((IData)(
                                                                   vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
                vlSelf->memory_master_mem_req = 1U;
            } else {
                vlSelf->__PVT__grant_fifo_status_d = 0U;
            }
            vlSelf->__PVT__req_bus_ready = ((0U != 
                                             (3U & 
                                              (vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                               >> 2U))) 
                                            || vlSymsp->TOP.walking_mem_master_mem_gnt
                                            [2U]);
            vlSelf->__PVT__grant_fifo_push = ((0U != 
                                               (3U 
                                                & (vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                   >> 2U))) 
                                              || vlSymsp->TOP.walking_mem_master_mem_gnt
                                              [2U]);
        }
    } else if ((1U == (IData)(vlSelf->__PVT__grant_fifo_status_q))) {
        vlSelf->__PVT__grant_fifo_status_d = 1U;
        if (vlSymsp->TOP.walking_mem_master_mem_gnt
            [2U]) {
            if ((0x20U > ((IData)(1U) + (IData)(vlSelf->__PVT__stage_usage)))) {
                vlSelf->__PVT__grant_fifo_status_d = 0U;
                vlSelf->__PVT__req_bus_ready = 1U;
            } else {
                vlSelf->__PVT__grant_fifo_status_d = 2U;
                vlSelf->__PVT__req_bus_ready = 0U;
            }
            vlSelf->__PVT__grant_fifo_push = 1U;
        }
        vlSelf->memory_master_mem_addr = (((QData)((IData)(
                                                           vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
        vlSelf->memory_master_mem_req = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid;
    } else if ((2U == (IData)(vlSelf->__PVT__grant_fifo_status_q))) {
        if ((0x20U > (IData)(vlSelf->__PVT__stage_usage))) {
            vlSelf->__PVT__grant_fifo_status_d = 0U;
            vlSelf->__PVT__req_bus_ready = 1U;
        } else {
            vlSelf->__PVT__grant_fifo_status_d = 2U;
            vlSelf->__PVT__req_bus_ready = 0U;
        }
    }
    vlSelf->__Vcellinp__valid_fifo_u__data_i[0U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[0U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[1U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[1U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[2U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[2U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[3U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[3U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[4U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[4U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[5U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[5U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[6U] = 
        (((IData)(vlSymsp->TOP.walking_mem_master_mem_rdata
                  [2U]) << 4U) | (0xfU & vlSelf->__Vcellout__grant_fifo_u__data_o[6U]));
    vlSelf->__Vcellinp__valid_fifo_u__data_i[7U] = 
        (((IData)(vlSymsp->TOP.walking_mem_master_mem_rdata
                  [2U]) >> 0x1cU) | ((IData)((vlSymsp->TOP.walking_mem_master_mem_rdata
                                              [2U] 
                                              >> 0x20U)) 
                                     << 4U));
    vlSelf->__Vcellinp__valid_fifo_u__data_i[8U] = 
        ((0xfffff0U & vlSelf->__Vcellout__grant_fifo_u__data_o[8U]) 
         | ((IData)((vlSymsp->TOP.walking_mem_master_mem_rdata
                     [2U] >> 0x20U)) >> 0x1cU));
    vlSelf->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q;
    VL_ASSIGN_W(8960,vlSelf->__PVT__grant_fifo_u__DOT__mem_n, vlSelf->__PVT__grant_fifo_u__DOT__mem_q);
    if (((IData)(vlSelf->__PVT__grant_fifo_push) & 
         (0x20U != (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlSelf->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
        vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q)));
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[0U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[1U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[2U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[3U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[4U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[5U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[6U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[7U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[8U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WW(8960,280,(0x3fffU & ((IData)(0x118U) 
                                                 * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q))), vlSelf->__PVT__grant_fifo_u__DOT__mem_n, vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0);
        }
    }
    vlSelf->__PVT__flush_grant_fifo_pop = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__flush_status_q) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__flush_status_q))) {
            if ((0U != (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                if ((vlSymsp->TOP.walking_mem_master_mem_valid
                     [2U] | (0U != (3U & (vlSelf->__Vcellinp__valid_fifo_u__data_i[4U] 
                                          >> 2U))))) {
                    vlSelf->__PVT__flush_grant_fifo_pop = 1U;
                }
            }
        }
    }
}

VL_ATTR_COLD void Vmptw_top_memory_read_stage__pi8___stl_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__0(Vmptw_top_memory_read_stage__pi8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmptw_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmptw_top_memory_read_stage__pi8___stl_sequent__TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u__0\n"); );
    // Body
    vlSelf->__Vcellout__valid_fifo_u__data_o[0U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(1U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   (0x1ffU & (((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[0U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[1U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(2U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[1U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[2U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(3U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[2U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[3U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(4U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[3U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[4U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(5U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[4U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[5U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(6U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[5U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[6U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(7U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[6U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[7U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(8U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[7U]));
    vlSelf->__Vcellout__valid_fifo_u__data_o[8U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                          ((IData)(9U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__valid_fifo_u__DOT__mem_q[
                   ((IData)(8U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__valid_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[8U]));
    vlSelf->__PVT__stage_usage = (0x3fU & ((0x1fU & (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q)) 
                                           + (0x1fU 
                                              & (IData)(vlSelf->__PVT__valid_fifo_u__DOT__status_cnt_q))));
    vlSelf->__Vcellout__grant_fifo_u__data_o[0U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[0U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(1U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   (0x1ffU & (((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                              >> 5U))] >> (0x1fU & 
                                           ((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[0U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[1U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[1U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(2U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(1U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[1U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[2U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[2U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(3U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(2U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[2U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[3U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[3U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(4U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(3U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[3U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[4U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[4U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(5U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(4U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[4U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[5U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[5U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(6U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(5U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[5U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[6U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[6U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(7U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(6U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[6U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[7U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[7U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(8U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(7U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[7U]));
    vlSelf->__Vcellout__grant_fifo_u__data_o[8U] = 
        (Vmptw_top__ConstPool__CONST_h4d851b67_0[8U] 
         & ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
             ? (((0U == (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q))))
                  ? 0U : (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                          ((IData)(9U) + (0x1ffU & 
                                          (((IData)(0x118U) 
                                            * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                          << ((IData)(0x20U) - (0x1fU 
                                                & ((IData)(0x118U) 
                                                   * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))) 
                | (vlSelf->__PVT__grant_fifo_u__DOT__mem_q[
                   ((IData)(8U) + (0x1ffU & (((IData)(0x118U) 
                                              * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                   >> (0x1fU & ((IData)(0x118U) * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__read_pointer_q)))))
             : Vmptw_top__ConstPool__CONST_h083ec1be_0[8U]));
    vlSelf->__PVT__flush_fifo = 0U;
    vlSelf->stage_status_flushed = 0U;
    if ((2U & (IData)(vlSelf->__PVT__flush_status_q))) {
        if ((1U & (IData)(vlSelf->__PVT__flush_status_q))) {
            vlSelf->__PVT__req_bus_ready = 0U;
            vlSelf->__PVT__flush_fifo = 1U;
            vlSelf->__PVT__flush_status_d = ((0U != 
                                              vlSymsp->TOP.mptw_top__DOT__system_control_flush
                                              [6U])
                                              ? 3U : 0U);
        } else {
            vlSelf->__PVT__flush_status_d = ((0U == (IData)(vlSelf->__PVT__spec_transaction_cnt_q))
                                              ? 0U : 2U);
        }
        vlSelf->stage_status_flushed = 3U;
    } else if ((1U & (IData)(vlSelf->__PVT__flush_status_q))) {
        vlSelf->__PVT__req_bus_ready = 0U;
        vlSelf->__PVT__flush_fifo = 1U;
        vlSelf->stage_status_flushed = 1U;
        if ((0U == (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
            vlSelf->__PVT__flush_status_d = 3U;
            vlSelf->stage_status_flushed = 3U;
        } else {
            vlSelf->__PVT__flush_status_d = 1U;
        }
    } else if ((0U != vlSymsp->TOP.mptw_top__DOT__system_control_flush
                [6U])) {
        if ((1U == vlSymsp->TOP.mptw_top__DOT__system_control_flush
             [6U])) {
            vlSelf->__PVT__flush_fifo = 1U;
            vlSelf->__PVT__flush_status_d = 1U;
        } else {
            vlSelf->__PVT__flush_fifo = 0U;
            vlSelf->__PVT__flush_status_d = 2U;
        }
        vlSelf->stage_status_flushed = 1U;
    } else {
        vlSelf->__PVT__flush_status_d = 0U;
    }
    vlSelf->__PVT__grant_fifo_status_d = 0U;
    vlSelf->memory_master_mem_addr = 0ULL;
    vlSelf->memory_master_mem_req = 0U;
    vlSelf->__PVT__req_bus_ready = 0U;
    vlSelf->__PVT__grant_fifo_push = 0U;
    if ((0U == (IData)(vlSelf->__PVT__grant_fifo_status_q))) {
        if (((IData)(vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid) 
             & (((0x20U > (IData)(vlSelf->__PVT__stage_usage)) 
                 & (0x20U != (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q))) 
                & (0x20U != (IData)(vlSelf->__PVT__valid_fifo_u__DOT__status_cnt_q))))) {
            if ((0U == (3U & (vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                              >> 2U)))) {
                vlSelf->__PVT__grant_fifo_status_d 
                    = (vlSymsp->TOP.walking_mem_master_mem_gnt
                       [3U] ? 0U : 1U);
                vlSelf->memory_master_mem_addr = (((QData)((IData)(
                                                                   vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
                vlSelf->memory_master_mem_req = 1U;
            } else {
                vlSelf->__PVT__grant_fifo_status_d = 0U;
            }
            vlSelf->__PVT__req_bus_ready = ((0U != 
                                             (3U & 
                                              (vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                               >> 2U))) 
                                            || vlSymsp->TOP.walking_mem_master_mem_gnt
                                            [3U]);
            vlSelf->__PVT__grant_fifo_push = ((0U != 
                                               (3U 
                                                & (vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U] 
                                                   >> 2U))) 
                                              || vlSymsp->TOP.walking_mem_master_mem_gnt
                                              [3U]);
        }
    } else if ((1U == (IData)(vlSelf->__PVT__grant_fifo_status_q))) {
        vlSelf->__PVT__grant_fifo_status_d = 1U;
        if (vlSymsp->TOP.walking_mem_master_mem_gnt
            [3U]) {
            if ((0x20U > ((IData)(1U) + (IData)(vlSelf->__PVT__stage_usage)))) {
                vlSelf->__PVT__grant_fifo_status_d = 0U;
                vlSelf->__PVT__req_bus_ready = 1U;
            } else {
                vlSelf->__PVT__grant_fifo_status_d = 2U;
                vlSelf->__PVT__req_bus_ready = 0U;
            }
            vlSelf->__PVT__grant_fifo_push = 1U;
        }
        vlSelf->memory_master_mem_addr = (((QData)((IData)(
                                                           vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U])));
        vlSelf->memory_master_mem_req = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__forwarding_to_walking_valid;
    } else if ((2U == (IData)(vlSelf->__PVT__grant_fifo_status_q))) {
        if ((0x20U > (IData)(vlSelf->__PVT__stage_usage))) {
            vlSelf->__PVT__grant_fifo_status_d = 0U;
            vlSelf->__PVT__req_bus_ready = 1U;
        } else {
            vlSelf->__PVT__grant_fifo_status_d = 2U;
            vlSelf->__PVT__req_bus_ready = 0U;
        }
    }
    vlSelf->__Vcellinp__valid_fifo_u__data_i[0U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[0U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[1U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[1U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[2U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[2U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[3U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[3U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[4U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[4U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[5U] = 
        vlSelf->__Vcellout__grant_fifo_u__data_o[5U];
    vlSelf->__Vcellinp__valid_fifo_u__data_i[6U] = 
        (((IData)(vlSymsp->TOP.walking_mem_master_mem_rdata
                  [3U]) << 4U) | (0xfU & vlSelf->__Vcellout__grant_fifo_u__data_o[6U]));
    vlSelf->__Vcellinp__valid_fifo_u__data_i[7U] = 
        (((IData)(vlSymsp->TOP.walking_mem_master_mem_rdata
                  [3U]) >> 0x1cU) | ((IData)((vlSymsp->TOP.walking_mem_master_mem_rdata
                                              [3U] 
                                              >> 0x20U)) 
                                     << 4U));
    vlSelf->__Vcellinp__valid_fifo_u__data_i[8U] = 
        ((0xfffff0U & vlSelf->__Vcellout__grant_fifo_u__data_o[8U]) 
         | ((IData)((vlSymsp->TOP.walking_mem_master_mem_rdata
                     [3U] >> 0x20U)) >> 0x1cU));
    vlSelf->__PVT__grant_fifo_u__DOT__gate_clock = 1U;
    vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_n 
        = vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q;
    VL_ASSIGN_W(8960,vlSelf->__PVT__grant_fifo_u__DOT__mem_n, vlSelf->__PVT__grant_fifo_u__DOT__mem_q);
    if (((IData)(vlSelf->__PVT__grant_fifo_push) & 
         (0x20U != (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlSelf->__PVT__grant_fifo_u__DOT__gate_clock = 0U;
        vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_n 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q)));
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[0U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[0U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[1U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[1U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[2U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[2U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[3U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[3U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[4U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[4U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[5U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[5U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[6U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[6U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[7U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[7U];
        vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0[8U] 
            = vlSymsp->TOP.mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__gen_forwarding_buffer__DOT__forwarding_buffer_u__DOT__fwd_buffer_reg__DOT__reg_data_q[8U];
        if ((0x22ffU >= (0x3fffU & ((IData)(0x118U) 
                                    * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WW(8960,280,(0x3fffU & ((IData)(0x118U) 
                                                 * (IData)(vlSelf->__PVT__grant_fifo_u__DOT__write_pointer_q))), vlSelf->__PVT__grant_fifo_u__DOT__mem_n, vlSelf->grant_fifo_u__DOT____Vlvbound_h4b40406a__0);
        }
    }
    vlSelf->__PVT__flush_grant_fifo_pop = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__flush_status_q) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__flush_status_q))) {
            if ((0U != (IData)(vlSelf->__PVT__grant_fifo_u__DOT__status_cnt_q))) {
                if ((vlSymsp->TOP.walking_mem_master_mem_valid
                     [3U] | (0U != (3U & (vlSelf->__Vcellinp__valid_fifo_u__data_i[4U] 
                                          >> 2U))))) {
                    vlSelf->__PVT__flush_grant_fifo_pop = 1U;
                }
            }
        }
    }
}
