// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCoreTop__Syms.h"
#include "VCoreTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCoreTop___024root___dump_triggers__ico(VCoreTop___024root* vlSelf);
#endif  // VL_DEBUG

void VCoreTop___024root___eval_triggers__ico(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCoreTop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void VCoreTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void VCoreTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__1__PROF__SRAMTemp__l301(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__1__PROF__SRAMTemp__l301\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__MMEM__DOT__rdata = 0ULL;
    } else {
        if (((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)) 
             & (~ (IData)(vlSelf->clock)))) {
            VCoreTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer, vlSelf->__Vtask_pmem_read__3__rdata);
            vlSelf->CoreTop__DOT__MMEM__DOT__rdata 
                = vlSelf->__Vtask_pmem_read__3__rdata;
        }
        if (((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)) 
             & (~ (IData)(vlSelf->clock)))) {
            VCoreTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer, 
                                                                       ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                                                         ? vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data
                                                                         : 
                                                                        ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                                                          ? 0ULL
                                                                          : 
                                                                         ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                                           ? 
                                                                          ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                                            ? 0ULL
                                                                            : vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data)
                                                                           : 0ULL))), 
                                                                       ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                                                         ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb)
                                                                         : 
                                                                        ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                                                          ? 0U
                                                                          : 
                                                                         ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                                           ? 
                                                                          ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                                            ? 0U
                                                                            : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb))
                                                                           : 0U))));
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCoreTop___024root___dump_triggers__act(VCoreTop___024root* vlSelf);
#endif  // VL_DEBUG

void VCoreTop___024root___eval_triggers__act(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCoreTop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VCoreTop___024unit____Vdpiimwrap_set_pc__Vdpioc2_TOP____024unit(const VlUnpacked<IData/*31:0*/, 7> &inst);
void VCoreTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__492__PROF__DIP_model__l93(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__492__PROF__DIP_model__l93\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1)) {
        VL_FINISH_MT("vsrc/DIP_model.v", 95, "");
    }
    VCoreTop___024unit____Vdpiimwrap_set_pc__Vdpioc2_TOP____024unit(vlSelf->CoreTop__DOT__DIP__DOT__IN);
    VCoreTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->CoreTop__DOT__DIP__DOT__rf);
}
