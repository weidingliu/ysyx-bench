// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCORETOP__SYMS_H_
#define VERILATED_VCORETOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCoreTop.h"

// INCLUDE MODULE CLASSES
#include "VCoreTop___024root.h"
#include "VCoreTop___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VCoreTop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCoreTop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCoreTop___024root             TOP;
    VCoreTop___024unit             TOP____024unit;

    // CONSTRUCTORS
    VCoreTop__Syms(VerilatedContext* contextp, const char* namep, VCoreTop* modelp);
    ~VCoreTop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
