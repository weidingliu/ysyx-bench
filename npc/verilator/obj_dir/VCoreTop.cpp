// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCoreTop.h"
#include "VCoreTop__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VCoreTop::VCoreTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCoreTop__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_inst{vlSymsp->TOP.io_inst}
    , io_pc{vlSymsp->TOP.io_pc}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VCoreTop::VCoreTop(const char* _vcname__)
    : VCoreTop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCoreTop::~VCoreTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCoreTop___024root___eval_debug_assertions(VCoreTop___024root* vlSelf);
#endif  // VL_DEBUG
void VCoreTop___024root___eval_static(VCoreTop___024root* vlSelf);
void VCoreTop___024root___eval_initial(VCoreTop___024root* vlSelf);
void VCoreTop___024root___eval_settle(VCoreTop___024root* vlSelf);
void VCoreTop___024root___eval(VCoreTop___024root* vlSelf);

void VCoreTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCoreTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCoreTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCoreTop___024root___eval_static(&(vlSymsp->TOP));
        VCoreTop___024root___eval_initial(&(vlSymsp->TOP));
        VCoreTop___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCoreTop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCoreTop::eventsPending() { return false; }

uint64_t VCoreTop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCoreTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCoreTop___024root___eval_final(VCoreTop___024root* vlSelf);

VL_ATTR_COLD void VCoreTop::final() {
    VCoreTop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCoreTop::hierName() const { return vlSymsp->name(); }
const char* VCoreTop::modelName() const { return "VCoreTop"; }
unsigned VCoreTop::threads() const { return 1; }
