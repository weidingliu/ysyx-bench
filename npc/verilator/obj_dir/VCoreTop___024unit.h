// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCoreTop.h for the primary calling header

#ifndef VERILATED_VCORETOP___024UNIT_H_
#define VERILATED_VCORETOP___024UNIT_H_  // guard

#include "verilated.h"

class VCoreTop__Syms;

class VCoreTop___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VCoreTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCoreTop___024unit(VCoreTop__Syms* symsp, const char* name);
    ~VCoreTop___024unit();
    VL_UNCOPYABLE(VCoreTop___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
