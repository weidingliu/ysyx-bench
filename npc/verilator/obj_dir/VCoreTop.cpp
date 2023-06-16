// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCoreTop.h"
#include "VCoreTop__Syms.h"
#include "verilated_vcd_c.h"
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
// Evaluation loop

void VCoreTop___024root___eval_initial(VCoreTop___024root* vlSelf);
void VCoreTop___024root___eval_settle(VCoreTop___024root* vlSelf);
void VCoreTop___024root___eval(VCoreTop___024root* vlSelf);
#ifdef VL_DEBUG
void VCoreTop___024root___eval_debug_assertions(VCoreTop___024root* vlSelf);
#endif  // VL_DEBUG
void VCoreTop___024root___final(VCoreTop___024root* vlSelf);

static void _eval_initial_loop(VCoreTop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VCoreTop___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VCoreTop___024root___eval_settle(&(vlSymsp->TOP));
        VCoreTop___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VCoreTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCoreTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCoreTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VCoreTop___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VCoreTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VCoreTop::final() {
    VCoreTop___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCoreTop::hierName() const { return vlSymsp->name(); }
const char* VCoreTop::modelName() const { return "VCoreTop"; }
unsigned VCoreTop::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VCoreTop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VCoreTop___024root__trace_init_top(VCoreTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCoreTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCoreTop___024root*>(voidSelf);
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VCoreTop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VCoreTop___024root__trace_register(VCoreTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCoreTop::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VCoreTop::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCoreTop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
