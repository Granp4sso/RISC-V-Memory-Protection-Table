// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmptw_top.h for the primary calling header

#ifndef VERILATED_VMPTW_TOP___024UNIT_H_
#define VERILATED_VMPTW_TOP___024UNIT_H_  // guard

#include "verilated.h"


class Vmptw_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmptw_top___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vmptw_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmptw_top___024unit(Vmptw_top__Syms* symsp, const char* v__name);
    ~Vmptw_top___024unit();
    VL_UNCOPYABLE(Vmptw_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
