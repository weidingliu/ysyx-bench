// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCPUTop.h"
#include "VCPUTop__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VCPUTop::VCPUTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCPUTop__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_time_int{vlSymsp->TOP.io_time_int}
    , io_inst{vlSymsp->TOP.io_inst}
    , io_pc{vlSymsp->TOP.io_pc}
    , io_result{vlSymsp->TOP.io_result}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VCPUTop::VCPUTop(const char* _vcname__)
    : VCPUTop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCPUTop::~VCPUTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VCPUTop___024root___eval_initial(VCPUTop___024root* vlSelf);
void VCPUTop___024root___eval_settle(VCPUTop___024root* vlSelf);
void VCPUTop___024root___eval(VCPUTop___024root* vlSelf);
#ifdef VL_DEBUG
void VCPUTop___024root___eval_debug_assertions(VCPUTop___024root* vlSelf);
#endif  // VL_DEBUG
void VCPUTop___024root___final(VCPUTop___024root* vlSelf);

static void _eval_initial_loop(VCPUTop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VCPUTop___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VCPUTop___024root___eval_settle(&(vlSymsp->TOP));
        VCPUTop___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VCPUTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCPUTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCPUTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VCPUTop___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VCPUTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VCPUTop::final() {
    VCPUTop___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCPUTop::hierName() const { return vlSymsp->name(); }
const char* VCPUTop::modelName() const { return "VCPUTop"; }
unsigned VCPUTop::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VCPUTop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VCPUTop___024root__trace_init_top(VCPUTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCPUTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPUTop___024root*>(voidSelf);
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VCPUTop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VCPUTop___024root__trace_register(VCPUTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCPUTop::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VCPUTop::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCPUTop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
