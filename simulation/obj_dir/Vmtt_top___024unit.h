// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmtt_top.h for the primary calling header

#ifndef _VMTT_TOP___024UNIT_H_
#define _VMTT_TOP___024UNIT_H_  // guard

#include "verilated.h"

//==========

class Vmtt_top__Syms;
class Vmtt_top_VerilatedVcd;


//----------

VL_MODULE(Vmtt_top___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vmtt_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmtt_top___024unit);  ///< Copying not allowed
  public:
    Vmtt_top___024unit(const char* name = "TOP");
    ~Vmtt_top___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vmtt_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
