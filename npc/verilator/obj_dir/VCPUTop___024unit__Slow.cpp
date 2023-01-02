// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCPUTop__Syms.h"
#include "VCPUTop___024unit.h"

void VCPUTop___024unit___ctor_var_reset(VCPUTop___024unit* vlSelf);

VCPUTop___024unit::VCPUTop___024unit(VCPUTop__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPUTop___024unit___ctor_var_reset(this);
}

void VCPUTop___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCPUTop___024unit::~VCPUTop___024unit() {
}
