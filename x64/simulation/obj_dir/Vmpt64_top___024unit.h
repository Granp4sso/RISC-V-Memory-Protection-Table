// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmpt64_top.h for the primary calling header

#ifndef _VMPT64_TOP___024UNIT_H_
#define _VMPT64_TOP___024UNIT_H_  // guard

#include "verilated.h"

//==========

class Vmpt64_top__Syms;
class Vmpt64_top_VerilatedVcd;


//----------

VL_MODULE(Vmpt64_top___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vmpt64_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmpt64_top___024unit);  ///< Copying not allowed
  public:
    Vmpt64_top___024unit(const char* name = "TOP");
    ~Vmpt64_top___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vmpt64_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
