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

VL_INLINE_OPT void VCoreTop___024root___ico_sequent__TOP__0(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___GEN_20 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__NewReq)
                                           ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value)
                                           : ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))
                                               ? ((0x3fU 
                                                   <= (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__cntShift))
                                                   ? 0x3fU
                                                   : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__cntShift))
                                               : (0x3fU 
                                                  & ((2U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))
                                                      ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value)
                                                      : 
                                                     ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value) 
                                                      + 
                                                      (3U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))))))));
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__MMEM__DOT__rdata = 0ULL;
    } else {
        if (((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)) 
             & (~ (IData)(vlSelf->clock)))) {
            VCoreTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer, vlSelf->__Vtask_pmem_read__2__rdata);
            vlSelf->CoreTop__DOT__MMEM__DOT__rdata 
                = vlSelf->__Vtask_pmem_read__2__rdata;
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
    if (((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
         & (IData)(vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid))) {
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xeU] 
            = (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__rdata);
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xfU] 
            = (IData)((vlSelf->CoreTop__DOT__MMEM__DOT__rdata 
                       >> 0x20U));
    } else {
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU];
    }
    if (((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)) 
         & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid))) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xeU] 
            = (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__rdata);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xfU] 
            = (IData)((vlSelf->CoreTop__DOT__MMEM__DOT__rdata 
                       >> 0x20U));
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xeU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xfU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU];
    }
    vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? vlSelf->CoreTop__DOT__MMEM__DOT__rdata
            : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1)
                ? ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                         >> 3U)))) ? 
                   (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U])))
                    : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                             >> 3U))))
                        ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U])))
                        : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 3U))))
                            ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U])))
                            : ((3U == (7U & (IData)(
                                                    (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U])))
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U])))
                                    : ((5U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU])))
                                        : ((6U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU])))
                                            : ((7U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU])))
                                                : 0ULL))))))))
                : ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                         >> 3U)))) ? 
                   (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U])))
                    : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                             >> 3U))))
                        ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U])))
                        : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 3U))))
                            ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U])))
                            : ((3U == (7U & (IData)(
                                                    (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U])))
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U])))
                                    : ((5U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU])))
                                        : ((6U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU])))
                                            : ((7U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU])))
                                                : 0ULL))))))))));
    vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27 
        = (0xffU & ((0U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                     ? (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata)
                     : ((1U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                         ? (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                    >> 8U)) : ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                ? (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                           >> 0x10U))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                    ? (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                               >> 0x18U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                     ? (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                >> 0x20U))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                      ? (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                 >> 0x28U))
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                       ? (IData)(
                                                                 (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                  >> 0x30U))
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                        ? (IData)(
                                                                  (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                   >> 0x38U))
                                                        : 0U)))))))));
    vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44 
        = (0xffffU & ((0U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                            >> 1U))))
                       ? (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata)
                       : ((1U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                >> 1U))))
                           ? (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                      >> 0x10U)) : 
                          ((2U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 1U))))
                            ? (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                       >> 0x20U)) : 
                           ((3U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                  >> 1U))))
                             ? (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                        >> 0x30U)) : 0U)))));
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData 
        = ((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))
            ? ((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                ? vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata
                : ((0x47U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                    ? ((1U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                      >> 2U))) ? (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                                >> 0x3fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                     >> 0x20U))))
                        : (((QData)((IData)(((1U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                            >> 0x1fU)))
                                              ? 0xffffffffU
                                              : 0U))) 
                            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata))))
                    : ((0x11U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                        ? ((1U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                          >> 2U))) ? 
                           (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                            >> 0x20U) : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata)))
                        : ((0x6fU == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                            ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                            : ((0xeU == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? ((((0x80U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                      ? 0xffffffffffffffULL
                                      : 0ULL) << 8U) 
                                   | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27)))
                                : ((3U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? ((((0x8000U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44))
                                          ? 0xffffffffffffULL
                                          : 0ULL) << 0x10U) 
                                       | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44)))
                                    : ((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44))
                                        : 0ULL)))))))
            : vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData);
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

extern const VlWide<16>/*511:0*/ VCoreTop__ConstPool__CONST_h93e1b771_0;
void VCoreTop___024unit____Vdpiimwrap_set_pc__Vdpioc2_TOP____024unit(const VlUnpacked<IData/*31:0*/, 7> &inst);
void VCoreTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);
extern const VlUnpacked<CData/*0:0*/, 64> VCoreTop__ConstPool__TABLE_h1d315e1c_0;
extern const VlUnpacked<CData/*1:0*/, 64> VCoreTop__ConstPool__TABLE_h2941df74_0;

VL_INLINE_OPT void VCoreTop___024root___nba_sequent__TOP__0(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__rf__v0;
    __Vdlyvdim0__CoreTop__DOT__rf__v0 = 0;
    QData/*63:0*/ __Vdlyvval__CoreTop__DOT__rf__v0;
    __Vdlyvval__CoreTop__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__rf__v0;
    __Vdlyvset__CoreTop__DOT__rf__v0 = 0;
    VlWide<3>/*65:0*/ __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier;
    VL_ZERO_W(66, __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier);
    CData/*2:0*/ __Vdly__CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state;
    __Vdly__CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state = 0;
    CData/*1:0*/ __Vdly__CoreTop__DOT__ICACHE__DOT__read_state;
    __Vdly__CoreTop__DOT__ICACHE__DOT__read_state = 0;
    CData/*2:0*/ __Vdly__CoreTop__DOT__ICACHE__DOT__state;
    __Vdly__CoreTop__DOT__ICACHE__DOT__state = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v0;
    __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v0;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v1;
    __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v1 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v1;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v2;
    __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v2 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v2;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v2 = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v3;
    __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v3 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v3;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v3 = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0;
    __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0 = 0;
    QData/*52:0*/ __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0;
    __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0;
    __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0 = 0;
    VlWide<16>/*511:0*/ __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0;
    VL_ZERO_W(512, __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0);
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0;
    __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0 = 0;
    VlWide<16>/*511:0*/ __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0;
    VL_ZERO_W(512, __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0);
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0;
    __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0;
    __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0 = 0;
    QData/*52:0*/ __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0;
    __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0;
    __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 0;
    CData/*7:0*/ __Vdly__CoreTop__DOT__MMEM__DOT__read_count;
    __Vdly__CoreTop__DOT__MMEM__DOT__read_count = 0;
    QData/*63:0*/ __Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer;
    __Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer = 0;
    QData/*63:0*/ __Vdly__CoreTop__DOT__MMEM__DOT__write_addr_buffer;
    __Vdly__CoreTop__DOT__MMEM__DOT__write_addr_buffer = 0;
    CData/*1:0*/ __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state;
    __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0;
    __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0 = 0;
    CData/*1:0*/ __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state;
    __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v0;
    __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v0;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v1;
    __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v1 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v1;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v2;
    __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v2 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v2;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v2 = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v3;
    __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v3 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v3;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v3 = 0;
    CData/*2:0*/ __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state;
    __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0;
    __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0;
    __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0 = 0;
    QData/*52:0*/ __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0;
    __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0;
    __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0 = 0;
    VlWide<16>/*511:0*/ __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0;
    VL_ZERO_W(512, __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0);
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0;
    __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0 = 0;
    VlWide<16>/*511:0*/ __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0;
    VL_ZERO_W(512, __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0);
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0;
    __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0;
    __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0 = 0;
    QData/*52:0*/ __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0;
    __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0;
    __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 0;
    CData/*1:0*/ __Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state;
    __Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state = 0;
    CData/*1:0*/ __Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state;
    __Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state = 0;
    VlWide<4>/*127:0*/ __Vtemp_h19a5b938__0;
    VlWide<4>/*127:0*/ __Vtemp_he837eb31__0;
    VlWide<3>/*95:0*/ __Vtemp_h890baa9f__0;
    VlWide<3>/*95:0*/ __Vtemp_h9858ecef__0;
    VlWide<3>/*95:0*/ __Vtemp_hf71b6c6a__1;
    VlWide<3>/*95:0*/ __Vtemp_h9858ecef__1;
    VlWide<3>/*95:0*/ __Vtemp_h1cfbcb08__0;
    VlWide<5>/*159:0*/ __Vtemp_h25ba1d03__0;
    VlWide<5>/*159:0*/ __Vtemp_hb15812e9__0;
    VlWide<5>/*159:0*/ __Vtemp_h19b35859__0;
    VlWide<5>/*159:0*/ __Vtemp_h8c6964a6__0;
    VlWide<3>/*95:0*/ __Vtemp_hfc1d42bd__0;
    VlWide<3>/*95:0*/ __Vtemp_had48ed99__0;
    VlWide<6>/*191:0*/ __Vtemp_hc8cf7fd9__0;
    VlWide<6>/*191:0*/ __Vtemp_hdf433f48__0;
    VlWide<16>/*511:0*/ __Vtemp_h902130f5__0;
    VlWide<3>/*95:0*/ __Vtemp_h052dcc23__0;
    VlWide<3>/*95:0*/ __Vtemp_h0fbea1b2__0;
    VlWide<4>/*127:0*/ __Vtemp_h0533a6ed__0;
    VlWide<4>/*127:0*/ __Vtemp_h97f32683__0;
    VlWide<3>/*95:0*/ __Vtemp_h8004274a__0;
    VlWide<3>/*95:0*/ __Vtemp_h29cbf8c2__0;
    VlWide<4>/*127:0*/ __Vtemp_hb23900ce__0;
    // Body
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0 = 0U;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0 = 0U;
    __Vdly__CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state 
        = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state;
    __Vdly__CoreTop__DOT__ICACHE__DOT__state = vlSelf->CoreTop__DOT__ICACHE__DOT__state;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 0U;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 0U;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0 = 0U;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0 = 0U;
    __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U];
    __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U];
    __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U];
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0 = 0U;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0 = 0U;
    __Vdlyvset__CoreTop__DOT__rf__v0 = 0U;
    __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state;
    __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state;
    __Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state;
    __Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v0 = 0U;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v1 = 0U;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v2 = 0U;
    __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v3 = 0U;
    __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0 = 0U;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0 = 0U;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 0U;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 0U;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0 = 0U;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0 = 0U;
    __Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer 
        = vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer;
    __Vdly__CoreTop__DOT__MMEM__DOT__write_addr_buffer 
        = vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer;
    __Vdly__CoreTop__DOT__MMEM__DOT__read_count = vlSelf->CoreTop__DOT__MMEM__DOT__read_count;
    __Vdly__CoreTop__DOT__ICACHE__DOT__read_state = vlSelf->CoreTop__DOT__ICACHE__DOT__read_state;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v0 = 0U;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v1 = 0U;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v2 = 0U;
    __Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v3 = 0U;
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en) 
         & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))) {
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[1U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[2U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[3U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[4U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[5U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[6U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[7U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[8U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[9U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xaU];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xbU];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xcU];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xdU];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xeU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xeU];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xfU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xfU];
        __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0 = 1U;
        __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
        __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 1U;
        __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data;
        __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0 = 1U;
        __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en) 
         & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
            >> 1U))) {
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[1U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[2U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[3U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[4U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[5U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[6U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[7U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[8U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[9U];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xaU];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xbU];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xcU];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xdU];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xeU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xeU];
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xfU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xfU];
        __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0 = 1U;
        __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
        __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 1U;
        __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
        __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data;
        __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0 = 1U;
        __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en) 
         & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask) 
            >> 1U))) {
        __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0 = 1U;
        __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 6U)));
    }
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en) 
         & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask))) {
        __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0 = 1U;
        __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 6U)));
    }
    if (vlSelf->CoreTop__DOT__rf_MPORT_en) {
        __Vdlyvval__CoreTop__DOT__rf__v0 = ((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                             ? 0ULL
                                             : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData);
        __Vdlyvset__CoreTop__DOT__rf__v0 = 1U;
        __Vdlyvdim0__CoreTop__DOT__rf__v0 = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest;
    }
    if (((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
         & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
            & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
               & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result))))) {
        __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v0 = 1U;
        __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v0 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 6U)));
    }
    if (((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
         & ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
            & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
               & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result))))) {
        __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v1 = 1U;
        __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v1 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 6U)));
    }
    if (((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
         & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
            & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
               & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8) 
                  & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)))))) {
        __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v2 = 1U;
        __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v2 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 6U)));
    }
    if (((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
         & ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
            & ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
               & ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)) 
                  & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8)))))) {
        __Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v3 = 1U;
        __Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v3 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 6U)));
    }
    if (((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
         & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))) {
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[1U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[2U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[3U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[4U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[5U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[6U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[7U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[8U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[9U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xaU];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xbU];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xcU];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xdU];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xeU];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xfU];
        __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0 = 1U;
        __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
        __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 1U;
        __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data;
        __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0 = 1U;
        __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
    if (((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
         & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r))) {
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[1U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[2U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[3U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[4U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[5U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[6U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[7U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[8U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[9U];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xaU];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xbU];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xcU];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xdU];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xeU];
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xfU];
        __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0 = 1U;
        __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
        __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 1U;
        __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
        __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data;
        __Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0 = 1U;
        __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
    }
    if (((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
         & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
            & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
               & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result))))) {
        __Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v0 = 1U;
        __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v0 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                >> 6U)));
    }
    if (((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
         & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
            & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
               & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result))))) {
        __Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v1 = 1U;
        __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v1 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                >> 6U)));
    }
    if (((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
         & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
            & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
               & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5) 
                  & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))))) {
        __Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v2 = 1U;
        __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v2 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                >> 6U)));
    }
    if (((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
         & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
            & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
               & ((~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)) 
                  & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5)))))) {
        __Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v3 = 1U;
        __Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v3 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                >> 6U)));
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0 = 1U;
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0 = 1U;
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0 = 1U;
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0 = 1U;
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0 = 1U;
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0 = 1U;
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0 = 1U;
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0 = 1U;
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0 = 1U;
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0 = 1U;
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0 = 1U;
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0 = 1U;
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0 = 1U;
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0 = 1U;
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0 = 1U;
    vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0 = 1U;
    vlSelf->CoreTop__DOT__DIP_io_inst_REG = vlSelf->io_inst;
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->io_pc >> 6U)));
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->io_pc >> 6U)));
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->io_pc >> 6U)));
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG 
        = ((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid) 
           & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)));
    if ((1U & (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__NewReq)))) {
        if ((1U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))) {
            if ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))) {
                __Vtemp_h19a5b938__0[0U] = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U];
                __Vtemp_h19a5b938__0[1U] = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U];
                __Vtemp_h19a5b938__0[2U] = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[2U];
                __Vtemp_h19a5b938__0[3U] = 0U;
                VL_SHIFTL_WWI(128,128,6, __Vtemp_he837eb31__0, __Vtemp_h19a5b938__0, (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value));
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U] 
                    = __Vtemp_he837eb31__0[0U];
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U] 
                    = __Vtemp_he837eb31__0[1U];
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U] 
                    = __Vtemp_he837eb31__0[2U];
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U] 
                    = __Vtemp_he837eb31__0[3U];
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[4U] = 0U;
            } else if ((3U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))) {
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U] 
                    = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[0U];
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U] 
                    = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[1U];
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U] 
                    = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[2U];
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U] 
                    = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[3U];
                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[4U] 
                    = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[4U];
            }
        }
    }
    if (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__NewReq) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bSign)
                ? (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src2)
                : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
            = ((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign)
                         ? (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1)
                         : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1)) 
               << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
            = (((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign)
                          ? (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1)
                          : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1)) 
                >> 0x1fU) | ((IData)((((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign)
                                        ? (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1)
                                        : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1) 
                                      >> 0x20U)) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[2U] 
            = ((IData)((((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign)
                          ? (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1)
                          : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1) 
                        >> 0x20U)) >> 0x1fU);
    }
    vlSelf->CoreTop__DOT__valid = ((~ (IData)(vlSelf->reset)) 
                                   & ((~ (IData)(vlSelf->CoreTop__DOT___T_3)) 
                                      & (IData)(vlSelf->CoreTop__DOT___GEN_197)));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid) 
           & (0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)));
    vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG = ((IData)(vlSelf->CoreTop__DOT__WB_io_out_valid) 
                                                   & ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid) 
                                                      & (IData)(vlSelf->CoreTop__DOT__valid_2)));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
    vlSelf->CoreTop__DOT__DIP_io_is_skip_REG = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip;
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
    vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1 = vlSelf->CoreTop__DOT__DIP_io_is_break_REG;
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
    vlSelf->CoreTop__DOT__DIP_io_pc_REG = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC;
    vlSelf->CoreTop__DOT__DIP_io_dnpc_REG = ((IData)(vlSelf->CoreTop__DOT__IF_io_excp_flush)
                                              ? vlSelf->CoreTop__DOT__CSR__DOT__mtvec
                                              : ((IData)(vlSelf->CoreTop__DOT__IF_io_mret_flush)
                                                  ? vlSelf->CoreTop__DOT__CSR__DOT__mepc
                                                  : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc));
    if (__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][0U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][1U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][2U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][3U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][4U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][5U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][6U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][7U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][8U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][9U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][0xaU] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][0xbU] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][0xcU] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][0xdU] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][0xeU] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0][0xfU] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0[0xfU];
    }
    if (__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][0U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][1U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][2U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][3U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][4U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][5U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][6U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][7U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][8U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][9U] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][0xaU] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][0xbU] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][0xcU] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][0xdU] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][0xeU] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0][0xfU] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0[0xfU];
    }
    if (__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0] = 1U;
    }
    if (__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0] = 1U;
    }
    if (__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0;
    }
    if (__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0] 
            = __Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0;
    }
    if (vlSelf->reset) {
        __Vdly__CoreTop__DOT__ICACHE__DOT__state = 0U;
        __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state 
            = __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state;
        __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state 
            = __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state;
        __Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state 
            = __Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state;
        __Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state = 0U;
    } else {
        __Vdly__CoreTop__DOT__ICACHE__DOT__state = 
            ((0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
              ? ((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid)
                  ? 1U : 0U) : ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                 ? ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit)
                                     ? 0U : 2U) : (
                                                   (2U 
                                                    == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                    ? (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_6)
                                                    : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_9))));
        if ((0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))) {
            if ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
                __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))) {
            if (((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
                 & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready))) {
                __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state = 2U;
            }
        } else {
            __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state 
                = ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
                    ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_30)
                    : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_32));
        }
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state 
            = __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state;
        if ((0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))) {
            if ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
                __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))) {
            if (((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
                 & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready))) {
                __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state = 2U;
            }
        } else {
            __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state 
                = ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
                    ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_22)
                    : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_24));
        }
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state 
            = __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state;
        if ((0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state))) {
            if ((((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid) 
                  & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce)) 
                 & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)))) {
                __Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state))) {
            if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_raddr_req_valid) 
                 & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                    & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready)))) {
                __Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state))) {
            __Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state 
                = vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_2;
        }
        vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state 
            = __Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state;
        if ((0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))) {
            if ((((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce) 
                  & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid)) 
                 & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we))) {
                __Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))) {
            if ((((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
                  & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready)) 
                 & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_waddr_req_valid))) {
                __Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state = 2U;
            }
        } else {
            __Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state 
                = ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
                    ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_8)
                    : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_10));
        }
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state 
        = __Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state;
    if (__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v0] = 1U;
    }
    if (__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v1) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v1] = 0U;
    }
    if (__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v2) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v2] = 0U;
    }
    if (__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v3) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v3] = 1U;
    }
    __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state 
        = ((IData)(vlSelf->reset) ? 0U : ((0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))
                                           ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid)
                                               ? 1U
                                               : 0U)
                                           : ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))
                                               ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit)
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data)
                                                     ? 
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1
                                                    [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0]
                                                     : 
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0
                                                    [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0])
                                                    ? 3U
                                                    : 2U))
                                               : ((2U 
                                                   == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))
                                                   ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_10)
                                                   : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_14)))));
    if (__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0] = 1U;
    }
    if (__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0] = 1U;
    }
    if (__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][1U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][2U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][3U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][4U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][5U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][6U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][7U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][8U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][9U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0xaU] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0xbU] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0xcU] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0xdU] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0xeU] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0xfU] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xfU];
    }
    if (__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][1U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][2U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][3U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][4U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][5U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][6U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][7U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][8U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][9U] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0xaU] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0xbU] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0xcU] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0xdU] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0xeU] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0xfU] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xfU];
    }
    if (__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0] = 1U;
    }
    if (__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0] = 1U;
    }
    if (__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0;
    }
    if (__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0] 
            = __Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0;
    }
    if (vlSelf->reset) {
        __Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer = 0ULL;
        vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer 
            = __Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer;
        __Vdly__CoreTop__DOT__MMEM__DOT__write_addr_buffer = 0ULL;
        vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer 
            = __Vdly__CoreTop__DOT__MMEM__DOT__write_addr_buffer;
        __Vdly__CoreTop__DOT__MMEM__DOT__read_count = 0U;
        vlSelf->CoreTop__DOT__MMEM__DOT__read_count 
            = __Vdly__CoreTop__DOT__MMEM__DOT__read_count;
        __Vdly__CoreTop__DOT__ICACHE__DOT__read_state = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__read_state 
            = __Vdly__CoreTop__DOT__ICACHE__DOT__read_state;
        vlSelf->CoreTop__DOT__CSR__DOT__mie = 0ULL;
        vlSelf->CoreTop__DOT__CSR__DOT__mip = 0ULL;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[1U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU] = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU] = 0U;
        __Vdly__CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state 
            = __Vdly__CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[2U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[3U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[4U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[5U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[6U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[7U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[8U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[9U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xaU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xbU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xcU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xdU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xeU] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xfU] = 0U;
        __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] = 0U;
        __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] = 0U;
        __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] = 0U;
    } else {
        if (((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)) 
             & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state)))) {
            if (vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0) {
                __Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer 
                    = vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr;
                __Vdly__CoreTop__DOT__MMEM__DOT__read_count 
                    = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                        ? 0U : 7U);
            } else if (vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0) {
                __Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer 
                    = vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr;
                __Vdly__CoreTop__DOT__MMEM__DOT__read_count = 7U;
            } else if (vlSelf->CoreTop__DOT__ARBITER__DOT__state) {
                if (vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) {
                    __Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer 
                        = vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr;
                    __Vdly__CoreTop__DOT__MMEM__DOT__read_count = 7U;
                } else {
                    __Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer 
                        = vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr;
                    __Vdly__CoreTop__DOT__MMEM__DOT__read_count 
                        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                            ? 0U : 7U);
                }
            } else {
                __Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer 
                    = vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr;
                __Vdly__CoreTop__DOT__MMEM__DOT__read_count = 7U;
            }
        }
        if (((IData)((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))) 
             & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last)))) {
            __Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer 
                = (8ULL + vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer);
            __Vdly__CoreTop__DOT__MMEM__DOT__read_count 
                = (0xffU & ((IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_count) 
                            - (IData)(1U)));
        }
        vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer 
            = __Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer;
        if (((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)) 
             & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state)))) {
            __Vdly__CoreTop__DOT__MMEM__DOT__write_addr_buffer 
                = ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                    ? vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr
                    : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                        ? 0ULL : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                   ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                       ? 0ULL : vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr)
                                   : 0ULL)));
        }
        if (((((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                   ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid)
                   : ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                      & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                          ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                             & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid))
                          : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid))))) 
              & (IData)(vlSelf->CoreTop__DOT__MMEM_wd_ready)) 
             & (~ (IData)(vlSelf->CoreTop__DOT__MMEM_wd_last)))) {
            __Vdly__CoreTop__DOT__MMEM__DOT__write_addr_buffer 
                = (8ULL + vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer);
        }
        vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer 
            = __Vdly__CoreTop__DOT__MMEM__DOT__write_addr_buffer;
        vlSelf->CoreTop__DOT__MMEM__DOT__read_count 
            = __Vdly__CoreTop__DOT__MMEM__DOT__read_count;
        if ((0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))) {
            if ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))) {
                __Vdly__CoreTop__DOT__ICACHE__DOT__read_state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))) {
            if (((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
                 & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                     ? (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
                     : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                        & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                           & (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))))))) {
                __Vdly__CoreTop__DOT__ICACHE__DOT__read_state = 2U;
            }
        } else {
            __Vdly__CoreTop__DOT__ICACHE__DOT__read_state 
                = ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                    ? (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_17)
                    : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_19));
        }
        vlSelf->CoreTop__DOT__ICACHE__DOT__read_state 
            = __Vdly__CoreTop__DOT__ICACHE__DOT__read_state;
        if ((1U & (~ ((0x300U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                      & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))))) {
            if ((1U & (~ ((0x305U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                          & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))))) {
                if ((1U & (~ ((0x341U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                              & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))))) {
                    vlSelf->CoreTop__DOT__CSR__DOT__mie 
                        = vlSelf->CoreTop__DOT__CSR__DOT___GEN_8;
                    vlSelf->CoreTop__DOT__CSR__DOT__mip 
                        = vlSelf->CoreTop__DOT__CSR__DOT___GEN_9;
                }
            }
        }
        if ((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))) {
            if ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))) {
                if ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))) {
                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0U] 
                        = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0U];
                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[1U] 
                        = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[1U];
                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U] 
                        = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[2U];
                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U] 
                        = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[3U];
                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U] 
                        = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[4U];
                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U] 
                        = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[5U];
                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U] 
                        = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[6U];
                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U] 
                        = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[7U];
                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U] 
                        = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[8U];
                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U] 
                        = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[9U];
                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU] 
                        = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xaU];
                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU] 
                        = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xbU];
                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU] 
                        = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xcU];
                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU] 
                        = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xdU];
                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU] 
                        = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xeU];
                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU] 
                        = vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xfU];
                }
            }
        }
        if ((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
            if ((1U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
                if ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[1U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[2U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[3U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[4U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[5U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[6U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[7U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[8U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[9U];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xaU];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xbU];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xcU];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xdU];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xeU];
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU] 
                        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xfU];
                }
            }
            if ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit)))) {
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write = 0U;
                    if (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data) {
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[1U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[2U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[2U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[3U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[3U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[4U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[4U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[5U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[5U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[6U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[6U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[7U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[7U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[8U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[8U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[9U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[9U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xaU] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xaU];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xbU] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xbU];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xcU] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xcU];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xdU] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xdU];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xeU] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xeU];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xfU] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xfU];
                    } else {
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[1U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[2U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[2U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[3U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[3U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[4U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[4U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[5U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[5U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[6U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[6U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[7U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[7U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[8U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[8U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[9U] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[9U];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xaU] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xaU];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xbU] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xbU];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xcU] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xcU];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xdU] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xdU];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xeU] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xeU];
                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xfU] 
                            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xfU];
                    }
                }
            } else if ((2U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_89;
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[1U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[2U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[2U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[3U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[3U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[4U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[4U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[5U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[5U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[6U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[6U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[7U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[7U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[8U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[8U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[9U] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[9U];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xaU] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xaU];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xbU] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xbU];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xcU] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xcU];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xdU] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xdU];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xeU] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xeU];
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xfU] 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xfU];
            }
        }
        __Vdly__CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__NewReq)
                ? 1U : ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))
                         ? 2U : ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))
                                  ? 3U : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___GEN_7))));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state 
            = __Vdly__CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state;
        if (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid) {
            if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))) {
                __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] 
                    = ((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                 ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                 : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))) 
                       << 1U);
                __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] 
                    = (((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                  ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                  : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))) 
                        >> 0x1fU) | ((IData)((((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                                ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                                : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))) 
                                              >> 0x20U)) 
                                     << 1U));
                __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] 
                    = ((IData)((((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                  ? vlSelf->CoreTop__DOT__EX__DOT__src2
                                  : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))) 
                                >> 0x20U)) >> 0x1fU);
            } else {
                __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] 
                    = (IData)((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U])) 
                                << 0x3eU) | (((QData)((IData)(
                                                              vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                                >> 2U))));
                __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] 
                    = (IData)(((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U])) 
                                 << 0x3eU) | (((QData)((IData)(
                                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                                 >> 2U))) 
                               >> 0x20U));
                __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] = 0U;
            }
        }
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] 
        = __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] 
        = __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] 
        = __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U];
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_csr_csr_idx 
            = (0xfffU & (IData)(vlSelf->CoreTop__DOT__ID__DOT__imm));
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type 
            = ((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
               | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                  | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))));
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type 
            = (((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                 ? 2U : 0U) | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                ? 2U : 0U));
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2 
            = (((IData)(vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen) 
                & ((IData)(vlSelf->__VdfgTmp_ha248cb35__0) 
                   & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest))))
                ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                : (((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                    & (((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                        == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                     >> 0x14U))) & 
                       (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                    ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                    : (((IData)(vlSelf->CoreTop__DOT__rf_MPORT_en) 
                        & (((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                            == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                         >> 0x14U))) 
                           & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))))
                        ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                        : ((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                            >> 0x14U)))
                            ? 0ULL : vlSelf->CoreTop__DOT__rf
                           [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                      >> 0x14U))]))));
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1 
            = (((IData)(vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen) 
                & ((IData)(vlSelf->__VdfgTmp_ha116befc__0) 
                   & (0U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest))))
                ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                : (((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                    & (((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                        == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                     >> 0xfU))) & (0U 
                                                   != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest))))
                    ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                    : (((IData)(vlSelf->CoreTop__DOT__rf_MPORT_en) 
                        & (((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                            == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                         >> 0xfU))) 
                           & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))))
                        ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                        : ((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                            >> 0xfU)))
                            ? 0ULL : vlSelf->CoreTop__DOT__rf
                           [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                      >> 0xfU))]))));
    }
    if (__Vdlyvset__CoreTop__DOT__rf__v0) {
        vlSelf->CoreTop__DOT__rf[__Vdlyvdim0__CoreTop__DOT__rf__v0] 
            = __Vdlyvval__CoreTop__DOT__rf__v0;
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_raddr_req_valid 
        = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state));
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_waddr_req_valid 
        = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                            >> 6U)));
    vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r = 
        ((~ (IData)(vlSelf->reset)) & ((~ (((IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid) 
                                            | (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)) 
                                           & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))) 
                                       & (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_98)));
    vlSelf->CoreTop__DOT__DIP__DOT__IN[0U] = vlSelf->CoreTop__DOT__DIP_io_inst_REG;
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_25 
        = (((IData)((0U != (0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                             >> 0x38U))))) 
            << 3U) | ((0U != (0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                               >> 0x38U))))
                       ? (((IData)((0U != (0xfU & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                           >> 0x3cU))))) 
                           << 2U) | ((0U != (0xfU & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                             >> 0x3cU))))
                                      ? ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                        >> 0x3fU)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x3eU)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x3dU)))))
                                      : ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                        >> 0x3bU)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x3aU)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x39U)))))))
                       : (((IData)((0U != (0xfU & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                           >> 0x34U))))) 
                           << 2U) | ((0U != (0xfU & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                             >> 0x34U))))
                                      ? ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                        >> 0x37U)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x36U)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x35U)))))
                                      : ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                        >> 0x33U)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x32U)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x31U)))))))));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_51 
        = (((IData)((0U != (0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                             >> 0x28U))))) 
            << 3U) | ((0U != (0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                               >> 0x28U))))
                       ? (((IData)((0U != (0xfU & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                           >> 0x2cU))))) 
                           << 2U) | ((0U != (0xfU & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                             >> 0x2cU))))
                                      ? ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                        >> 0x2fU)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x2eU)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x2dU)))))
                                      : ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                        >> 0x2bU)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x2aU)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x29U)))))))
                       : (((IData)((0U != (0xfU & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                           >> 0x24U))))) 
                           << 2U) | ((0U != (0xfU & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                             >> 0x24U))))
                                      ? ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                        >> 0x27U)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x26U)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x25U)))))
                                      : ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                        >> 0x23U)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x22U)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x21U)))))))));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_79 
        = (((IData)((0U != (0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                             >> 0x18U))))) 
            << 3U) | ((0U != (0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                               >> 0x18U))))
                       ? (((IData)((0U != (0xfU & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                           >> 0x1cU))))) 
                           << 2U) | ((0U != (0xfU & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                             >> 0x1cU))))
                                      ? ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                        >> 0x1fU)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x1eU)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x1dU)))))
                                      : ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                        >> 0x1bU)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x1aU)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x19U)))))))
                       : (((IData)((0U != (0xfU & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                           >> 0x14U))))) 
                           << 2U) | ((0U != (0xfU & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                             >> 0x14U))))
                                      ? ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                        >> 0x17U)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x16U)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x15U)))))
                                      : ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                        >> 0x13U)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x12U)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0x11U)))))))));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_105 
        = (((IData)((0U != (0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                             >> 8U))))) 
            << 3U) | ((0U != (0xffU & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                               >> 8U))))
                       ? (((IData)((0U != (0xfU & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                           >> 0xcU))))) 
                           << 2U) | ((0U != (0xfU & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                             >> 0xcU))))
                                      ? ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                        >> 0xfU)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0xeU)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0xdU)))))
                                      : ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                        >> 0xbU)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 0xaU)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 9U)))))))
                       : (((IData)((0U != (0xfU & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                           >> 4U))))) 
                           << 2U) | ((0U != (0xfU & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                             >> 4U))))
                                      ? ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                        >> 7U)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 6U)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 5U)))))
                                      : ((1U & (IData)(
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                        >> 3U)))
                                          ? 3U : ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 2U)))
                                                   ? 2U
                                                   : 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                              >> 1U)))))))));
    if (vlSelf->CoreTop__DOT___T_15) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen;
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst;
    }
    vlSelf->io_inst = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst;
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value 
        = (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___GEN_20));
    __Vtemp_h890baa9f__0[0U] = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U];
    __Vtemp_h890baa9f__0[1U] = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U];
    __Vtemp_h890baa9f__0[2U] = (1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[4U]);
    __Vtemp_h9858ecef__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg);
    __Vtemp_h9858ecef__0[1U] = (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                        >> 0x20U));
    __Vtemp_h9858ecef__0[2U] = 0U;
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough 
        = VL_GTE_W(3, __Vtemp_h890baa9f__0, __Vtemp_h9858ecef__0);
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U] = 0U;
    } else if (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid) {
        if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))) {
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] = 0U;
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] = 0U;
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                = ((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                             ? vlSelf->CoreTop__DOT__EX__DOT__src1
                             : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))) 
                   << 2U);
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                = (((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                              ? vlSelf->CoreTop__DOT__EX__DOT__src1
                              : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)))) 
                    >> 0x1eU) | ((IData)((((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                                            ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                            : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1))) 
                                          >> 0x20U)) 
                                 << 2U));
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U] 
                = ((IData)((((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                              ? vlSelf->CoreTop__DOT__EX__DOT__src1
                              : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1))) 
                            >> 0x20U)) >> 0x1eU);
        }
    }
    if ((1U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[2U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[3U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[4U] 
            = (0x1fU & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U]);
    } else if ((2U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[2U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[3U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[4U] 
            = (0x1fU & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U]);
    } else if ((3U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[0U] 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] 
               << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[1U] 
            = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] 
                >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] 
                             << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[2U] 
            = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] 
                >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                             << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[3U] 
            = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                             << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[4U] 
            = (0x1fU & ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                         >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U] 
                                      << 1U)));
    } else if ((4U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[0U] 
            = (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] 
                  << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[1U] 
            = (~ ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] 
                   >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] 
                                << 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[2U] 
            = (~ ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] 
                   >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                                << 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[3U] 
            = (~ ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                   >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                                << 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[4U] 
            = (0x1fU & (~ ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                            >> 0x1fU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U] 
                                         << 1U))));
    } else {
        if ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[0U] 
                = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U]);
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[1U] 
                = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U]);
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[2U] 
                = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U]);
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[3U] 
                = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U]);
        } else if ((6U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[0U] 
                = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U]);
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[1U] 
                = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U]);
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[2U] 
                = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U]);
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[3U] 
                = (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U]);
        } else {
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[0U] = 0U;
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[1U] = 0U;
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[2U] = 0U;
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[3U] = 0U;
        }
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[4U] 
            = (0x1fU & (0xfU & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                 ? (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U])
                                 : ((6U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                     ? (~ vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U])
                                     : 0U))));
    }
    vlSelf->CoreTop__DOT__DIP__DOT__IN[3U] = vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG;
    vlSelf->CoreTop__DOT__valid_2 = ((~ (IData)(vlSelf->reset)) 
                                     & ((~ (IData)(vlSelf->CoreTop__DOT___T_16)) 
                                        & (IData)(vlSelf->CoreTop__DOT___GEN_248)));
    vlSelf->CoreTop__DOT__DIP__DOT__IN[6U] = vlSelf->CoreTop__DOT__DIP_io_is_skip_REG;
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[1U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[2U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[3U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[4U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[5U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[6U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][6U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[7U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][7U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[8U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][8U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[9U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][9U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xaU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xaU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xbU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xbU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xcU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xcU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xdU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xdU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xeU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xeU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xfU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xfU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[1U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[2U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[3U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[4U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[5U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[6U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][6U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[7U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][7U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[8U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][8U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[9U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][9U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xaU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xaU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xbU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xbU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xcU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xcU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xdU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xdU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xeU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xeU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xfU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xfU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0U] = vlSelf->CoreTop__DOT__rf
        [0U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[1U] = vlSelf->CoreTop__DOT__rf
        [1U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[2U] = vlSelf->CoreTop__DOT__rf
        [2U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[3U] = vlSelf->CoreTop__DOT__rf
        [3U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[4U] = vlSelf->CoreTop__DOT__rf
        [4U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[5U] = vlSelf->CoreTop__DOT__rf
        [5U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[6U] = vlSelf->CoreTop__DOT__rf
        [6U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[7U] = vlSelf->CoreTop__DOT__rf
        [7U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[8U] = vlSelf->CoreTop__DOT__rf
        [8U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[9U] = vlSelf->CoreTop__DOT__rf
        [9U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xaU] = vlSelf->CoreTop__DOT__rf
        [0xaU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xbU] = vlSelf->CoreTop__DOT__rf
        [0xbU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xcU] = vlSelf->CoreTop__DOT__rf
        [0xcU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xdU] = vlSelf->CoreTop__DOT__rf
        [0xdU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xeU] = vlSelf->CoreTop__DOT__rf
        [0xeU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xfU] = vlSelf->CoreTop__DOT__rf
        [0xfU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x10U] = vlSelf->CoreTop__DOT__rf
        [0x10U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x11U] = vlSelf->CoreTop__DOT__rf
        [0x11U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x12U] = vlSelf->CoreTop__DOT__rf
        [0x12U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x13U] = vlSelf->CoreTop__DOT__rf
        [0x13U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x14U] = vlSelf->CoreTop__DOT__rf
        [0x14U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x15U] = vlSelf->CoreTop__DOT__rf
        [0x15U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x16U] = vlSelf->CoreTop__DOT__rf
        [0x16U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x17U] = vlSelf->CoreTop__DOT__rf
        [0x17U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x18U] = vlSelf->CoreTop__DOT__rf
        [0x18U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x19U] = vlSelf->CoreTop__DOT__rf
        [0x19U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1aU] = vlSelf->CoreTop__DOT__rf
        [0x1aU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1bU] = vlSelf->CoreTop__DOT__rf
        [0x1bU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1cU] = vlSelf->CoreTop__DOT__rf
        [0x1cU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1dU] = vlSelf->CoreTop__DOT__rf
        [0x1dU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1eU] = vlSelf->CoreTop__DOT__rf
        [0x1eU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1fU] = vlSelf->CoreTop__DOT__rf
        [0x1fU];
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[3U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[4U] = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg = 0ULL;
        vlSelf->CoreTop__DOT__CSR__DOT__mcause = 0ULL;
        vlSelf->CoreTop__DOT__CSR__DOT__mstatus = 0ULL;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg = 0ULL;
    } else {
        if (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid) {
            if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))) {
                vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] = 0U;
                vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U] = 0U;
                vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[2U] = 0U;
                vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[3U] = 0U;
                vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[4U] = 0U;
            } else {
                vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                    = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[1U] 
                        << 0x1eU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[0U] 
                                     >> 2U));
                vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U] 
                    = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[2U] 
                        << 0x1eU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[1U] 
                                     >> 2U));
                vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[2U] 
                    = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[3U] 
                        << 0x1eU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[2U] 
                                     >> 2U));
                vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[3U] 
                    = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                        << 0x1eU) | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[3U] 
                                     >> 2U));
                vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[4U] 
                    = ((((8U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U])
                          ? 3U : 0U) << 2U) | (3U & 
                                               (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
                                                >> 2U)));
            }
        }
        if ((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
            if ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit)))) {
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg 
                        = (0xffffffffffffffc0ULL & vlSelf->CoreTop__DOT__MEM__DOT__addr_temp);
                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg 
                        = ((((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data)
                              ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data
                              : vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data) 
                            << 0xbU) | (QData)((IData)(
                                                       (0x7c0U 
                                                        & ((IData)(
                                                                   (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                    >> 6U)) 
                                                           << 6U)))));
                }
            }
        }
        if (((0x300U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
             & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))) {
            vlSelf->CoreTop__DOT__CSR__DOT__mcause 
                = vlSelf->CoreTop__DOT__CSR__DOT___GEN_1;
            vlSelf->CoreTop__DOT__CSR__DOT__mstatus 
                = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_data;
        } else {
            vlSelf->CoreTop__DOT__CSR__DOT__mcause 
                = (((0x305U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                    & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))
                    ? vlSelf->CoreTop__DOT__CSR__DOT___GEN_1
                    : (((0x341U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                        & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))
                        ? vlSelf->CoreTop__DOT__CSR__DOT___GEN_1
                        : ((IData)(vlSelf->CoreTop__DOT__CSR__DOT____VdfgTmp_had87db98__0)
                            ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_data
                            : vlSelf->CoreTop__DOT__CSR__DOT___GEN_1)));
            if (vlSelf->CoreTop__DOT__IF_io_mret_flush) {
                vlSelf->CoreTop__DOT__CSR__DOT__mstatus 
                    = vlSelf->CoreTop__DOT__CSR__DOT___mstatus_T_1;
            } else if (vlSelf->CoreTop__DOT__IF_io_excp_flush) {
                vlSelf->CoreTop__DOT__CSR__DOT__mstatus 
                    = vlSelf->CoreTop__DOT__CSR__DOT___mstatus_T;
            }
        }
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0];
    vlSelf->CoreTop__DOT__DIP_io_is_break_REG = ((0x42U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                 & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
    vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[1U] 
        = vlSelf->CoreTop__DOT__CSR__DOT__mcause;
    vlSelf->CoreTop__DOT__CSR__DOT___mstatus_T_1 = 
        (8ULL | vlSelf->CoreTop__DOT__CSR__DOT__mstatus);
    vlSelf->CoreTop__DOT__CSR__DOT___mstatus_T = (0xfffffffffffffff7ULL 
                                                  & vlSelf->CoreTop__DOT__CSR__DOT__mstatus);
    vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[2U] 
        = vlSelf->CoreTop__DOT__CSR__DOT__mstatus;
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0];
    if (vlSelf->CoreTop__DOT___T_9) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData 
            = vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2 
            = vlSelf->CoreTop__DOT__EX__DOT__src2;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1 
            = vlSelf->CoreTop__DOT__EX__DOT__src1;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm;
    }
    vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1 
        = (vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm 
           + vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1);
    vlSelf->CoreTop__DOT__DIP__DOT__IN[4U] = (IData)(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG);
    vlSelf->CoreTop__DOT__DIP__DOT__IN[5U] = (IData)(
                                                     (vlSelf->CoreTop__DOT__DIP_io_dnpc_REG 
                                                      >> 0x20U));
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg = 0ULL;
    } else if ((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))) {
        if ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit)))) {
                vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg 
                    = (0xffffffffffffffc0ULL & vlSelf->CoreTop__DOT__IF__DOT__temp);
            }
        }
    }
    vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
            ? vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg
            : 0ULL);
    if (vlSelf->CoreTop__DOT___T_9) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype;
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we 
        = ((0x45U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
           & ((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
              | ((0x70U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                 | ((0x47U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                    & ((0x11U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                       & ((0x6fU != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                          & ((0xeU != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                             & ((0x74U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                | (0x77U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))))))))));
    if (vlSelf->CoreTop__DOT___T_15) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_ertn_flush 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_ertn_flush;
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_excp_flush 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_excp_flush;
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_en 
            = ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_en) 
               & (IData)(vlSelf->CoreTop__DOT__valid_1));
    }
    vlSelf->CoreTop__DOT__valid_1 = ((~ (IData)(vlSelf->reset)) 
                                     & ((~ ((IData)(vlSelf->CoreTop__DOT___T_16) 
                                            | (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall))) 
                                        & (IData)(vlSelf->CoreTop__DOT___GEN_221)));
    vlSelf->CoreTop__DOT__DIP__DOT__IN[1U] = (IData)(vlSelf->CoreTop__DOT__DIP_io_pc_REG);
    vlSelf->CoreTop__DOT__DIP__DOT__IN[2U] = (IData)(
                                                     (vlSelf->CoreTop__DOT__DIP_io_pc_REG 
                                                      >> 0x20U));
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r = 0U;
    } else if ((0U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
        if ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit)))) {
                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r 
                    = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data;
            }
        }
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state 
        = __Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state;
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__MMEM__DOT__write_state = 0U;
        vlSelf->CoreTop__DOT__MMEM__DOT__read_state = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r = 0U;
    } else {
        vlSelf->CoreTop__DOT__MMEM__DOT__write_state 
            = vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state;
        vlSelf->CoreTop__DOT__MMEM__DOT__read_state 
            = vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state;
        if ((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))) {
            if ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit)))) {
                    vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r 
                        = vlSelf->CoreTop__DOT__ICACHE__DOT__lru
                        [vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0];
                }
            }
        }
    }
    if (__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__lru[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v0] = 1U;
    }
    if (__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v1) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__lru[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v1] = 0U;
    }
    if (__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v2) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__lru[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v2] = 0U;
    }
    if (__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v3) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__lru[__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v3] = 1U;
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__state = __Vdly__CoreTop__DOT__ICACHE__DOT__state;
    __Vtemp_hf71b6c6a__1[0U] = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U];
    __Vtemp_hf71b6c6a__1[1U] = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U];
    __Vtemp_hf71b6c6a__1[2U] = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[4U];
    __Vtemp_h9858ecef__1[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg);
    __Vtemp_h9858ecef__1[1U] = (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                        >> 0x20U));
    __Vtemp_h9858ecef__1[2U] = 0U;
    VL_SUB_W(3, __Vtemp_h1cfbcb08__0, __Vtemp_hf71b6c6a__1, __Vtemp_h9858ecef__1);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[0U] 
        = (((IData)((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U])))) 
            << 1U) | (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[1U] 
        = (((IData)((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U])))) 
            >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U]))) 
                                  >> 0x20U)) << 1U));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[2U] 
        = (((IData)(((((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U]))) 
                     >> 0x20U)) >> 0x1fU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough)
                                                                         ? 
                                                                        __Vtemp_h1cfbcb08__0[1U]
                                                                         : 
                                                                        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U]))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough)
                                                                          ? 
                                                                         __Vtemp_h1cfbcb08__0[0U]
                                                                          : 
                                                                         vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U]))))) 
                                             << 1U));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[3U] 
        = (((IData)((((QData)((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough)
                                        ? __Vtemp_h1cfbcb08__0[1U]
                                        : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U]))) 
                      << 0x20U) | (QData)((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough)
                                                    ? 
                                                   __Vtemp_h1cfbcb08__0[0U]
                                                    : 
                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U]))))) 
            >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                    ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough)
                                                      ? 
                                                     __Vtemp_h1cfbcb08__0[1U]
                                                      : 
                                                     vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough)
                                                                  ? 
                                                                 __Vtemp_h1cfbcb08__0[0U]
                                                                  : 
                                                                 vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U])))) 
                                  >> 0x20U)) << 1U));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5[4U] 
        = ((IData)(((((QData)((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough)
                                        ? __Vtemp_h1cfbcb08__0[1U]
                                        : vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U]))) 
                      << 0x20U) | (QData)((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough)
                                                    ? 
                                                   __Vtemp_h1cfbcb08__0[0U]
                                                    : 
                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U])))) 
                    >> 0x20U)) >> 0x1fU);
    if ((0U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))) {
        __Vtemp_h25ba1d03__0[0U] = 0U;
        __Vtemp_h25ba1d03__0[1U] = 0U;
        __Vtemp_h25ba1d03__0[2U] = 0U;
        __Vtemp_h25ba1d03__0[3U] = 0U;
        __Vtemp_h25ba1d03__0[4U] = 0U;
    } else {
        __Vtemp_h25ba1d03__0[0U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[0U];
        __Vtemp_h25ba1d03__0[1U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[1U];
        __Vtemp_h25ba1d03__0[2U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[2U];
        __Vtemp_h25ba1d03__0[3U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[3U];
        __Vtemp_h25ba1d03__0[4U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19[4U];
    }
    VL_ADD_W(5, __Vtemp_hb15812e9__0, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p, __Vtemp_h25ba1d03__0);
    __Vtemp_h19b35859__0[0U] = ((0U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                & ((1U != (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                   & ((2U != (7U & 
                                              vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                      & ((3U != (7U 
                                                 & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                         & ((4U == 
                                             (7U & 
                                              vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                            | ((5U 
                                                == 
                                                (7U 
                                                 & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                               | (6U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))))))));
    __Vtemp_h19b35859__0[1U] = 0U;
    __Vtemp_h19b35859__0[2U] = 0U;
    __Vtemp_h19b35859__0[3U] = 0U;
    __Vtemp_h19b35859__0[4U] = 0U;
    VL_ADD_W(5, __Vtemp_h8c6964a6__0, __Vtemp_hb15812e9__0, __Vtemp_h19b35859__0);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[0U] 
        = __Vtemp_h8c6964a6__0[0U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[1U] 
        = __Vtemp_h8c6964a6__0[1U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[2U] 
        = __Vtemp_h8c6964a6__0[2U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[3U] 
        = __Vtemp_h8c6964a6__0[3U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp[4U] 
        = (0xfU & __Vtemp_h8c6964a6__0[4U]);
    if (vlSelf->CoreTop__DOT___T_15) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid 
            = vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid;
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip 
            = ((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
               | ((0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                  | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
                     & (0xa1200000ULL >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp))));
    }
    vlSelf->CoreTop__DOT__MEM__DOT__addr_temp = ((0x45U 
                                                  == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                  : 
                                                 ((0x46U 
                                                   == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                   : 
                                                  ((0x70U 
                                                    == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                    : 
                                                   ((0x47U 
                                                     == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                     : 
                                                    ((0x11U 
                                                      == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                      : 
                                                     ((0x6fU 
                                                       == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                        : 
                                                       ((0x74U 
                                                         == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                         : 
                                                        ((0x77U 
                                                          == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                           : 
                                                          ((4U 
                                                            == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                            : 0ULL)))))))))));
    if (vlSelf->CoreTop__DOT___T_15) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData 
            = vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData;
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest;
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc;
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC;
    }
    if (vlSelf->CoreTop__DOT___T_9) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_ertn_flush 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_ertn_flush;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_excp_flush 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_excp_flush;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_en 
            = ((0x18U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
               | ((0x15U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                  | (0x16U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))));
    }
    if ((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU];
    } else {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[1U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[2U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[3U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[4U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[5U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[6U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[7U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[8U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[9U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xaU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xbU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xcU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xdU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xeU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xfU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType 
            = ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                ? 0U : ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                         ? 1U : ((0x6013U == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                  ? 0U : ((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                           ? 4U : (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 4U
                                                    : 
                                                   ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 5U
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x40005013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 1U
                                                       : 
                                                      ((0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 4U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 4U
                                                         : 
                                                        ((0x4013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x7013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x5013U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 1U
                                                            : 
                                                           ((0x1003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 4U
                                                             : 
                                                            ((0x5003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                              ? 4U
                                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_239))))))))))))))));
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm 
            = vlSelf->CoreTop__DOT__ID__DOT__imm;
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count 
        = ((IData)(vlSelf->reset) ? 0U : (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid) 
                                           & (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_out_valid)))
                                           ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___count_T_5)
                                           : 0U));
    if (VL_UNLIKELY(vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1)) {
        VL_FINISH_MT("vsrc/DIP_model.v", 95, "");
    }
    VCoreTop___024unit____Vdpiimwrap_set_pc__Vdpioc2_TOP____024unit(vlSelf->CoreTop__DOT__DIP__DOT__IN);
    VCoreTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->CoreTop__DOT__DIP__DOT__rf);
    if (vlSelf->CoreTop__DOT___T_9) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc 
            = vlSelf->CoreTop__DOT__IF_io_branch_io_dnpc;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC;
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4 
        = ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
           & (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)));
    vlSelf->CoreTop__DOT__MMEM_wd_ready = ((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)) 
                                           | (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_count)) 
           & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)));
    vlSelf->CoreTop__DOT__ARBITER__DOT__state = ((~ (IData)(vlSelf->reset)) 
                                                 & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0) 
                                                    | ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0) 
                                                       | (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_55))));
    vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0 
        = (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                            >> 6U)));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___GEN_7 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))
            ? ((0x3fU == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value))
                ? 4U : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))
            : ((4U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))
                ? 0U : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state)));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_136 
        = (((IData)((0U != (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                            >> 0x18U))) << 3U) | ((0U 
                                                   != 
                                                   (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                    >> 0x18U))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                              >> 0x1cU))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                        >> 0x1cU))
                                                       ? 
                                                      ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                        >> 0x1fU)
                                                        ? 3U
                                                        : 
                                                       ((0x40000000U 
                                                         & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                            >> 0x1dU))))
                                                       : 
                                                      ((0x8000000U 
                                                        & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                        ? 3U
                                                        : 
                                                       ((0x4000000U 
                                                         & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                            >> 0x19U))))))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xfU 
                                                              & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                                 >> 0x14U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (0xfU 
                                                        & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                           >> 0x14U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                        ? 3U
                                                        : 
                                                       ((0x400000U 
                                                         & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                            >> 0x15U))))
                                                       : 
                                                      ((0x80000U 
                                                        & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                        ? 3U
                                                        : 
                                                       ((0x40000U 
                                                         & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                            >> 0x11U))))))));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_162 
        = (((IData)((0U != (0xffU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                     >> 8U)))) << 3U) 
           | ((0U != (0xffU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                               >> 8U))) ? (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xfU 
                                                      & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                         >> 0xcU)))) 
                                            << 2U) 
                                           | ((0U != 
                                               (0xfU 
                                                & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                   >> 0xcU)))
                                               ? ((0x8000U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                   ? 3U
                                                   : 
                                                  ((0x4000U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                    ? 2U
                                                    : 
                                                   (1U 
                                                    & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                       >> 0xdU))))
                                               : ((0x800U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                   ? 3U
                                                   : 
                                                  ((0x400U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                    ? 2U
                                                    : 
                                                   (1U 
                                                    & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                       >> 9U))))))
               : (((IData)((0U != (0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                           >> 4U)))) 
                   << 2U) | ((0U != (0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                             >> 4U)))
                              ? ((0x80U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                  ? 3U : ((0x40U & 
                                           vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                           ? 2U : (1U 
                                                   & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                      >> 5U))))
                              : ((8U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                  ? 3U : ((4U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                           ? 2U : (1U 
                                                   & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                      >> 1U))))))));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_190 
        = (((IData)((0U != (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                            >> 0x18U))) << 3U) | ((0U 
                                                   != 
                                                   (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                    >> 0x18U))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                              >> 0x1cU))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                        >> 0x1cU))
                                                       ? 
                                                      ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                        >> 0x1fU)
                                                        ? 3U
                                                        : 
                                                       ((0x40000000U 
                                                         & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                            >> 0x1dU))))
                                                       : 
                                                      ((0x8000000U 
                                                        & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                        ? 3U
                                                        : 
                                                       ((0x4000000U 
                                                         & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                            >> 0x19U))))))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xfU 
                                                              & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                                 >> 0x14U)))) 
                                                    << 2U) 
                                                   | ((0U 
                                                       != 
                                                       (0xfU 
                                                        & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                           >> 0x14U)))
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                        ? 3U
                                                        : 
                                                       ((0x400000U 
                                                         & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                            >> 0x15U))))
                                                       : 
                                                      ((0x80000U 
                                                        & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                        ? 3U
                                                        : 
                                                       ((0x40000U 
                                                         & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                         ? 2U
                                                         : 
                                                        (1U 
                                                         & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                            >> 0x11U))))))));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_216 
        = (((IData)((0U != (0xffU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                     >> 8U)))) << 3U) 
           | ((0U != (0xffU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                               >> 8U))) ? (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xfU 
                                                      & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                         >> 0xcU)))) 
                                            << 2U) 
                                           | ((0U != 
                                               (0xfU 
                                                & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                   >> 0xcU)))
                                               ? ((0x8000U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                   ? 3U
                                                   : 
                                                  ((0x4000U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                    ? 2U
                                                    : 
                                                   (1U 
                                                    & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                       >> 0xdU))))
                                               : ((0x800U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                   ? 3U
                                                   : 
                                                  ((0x400U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                                    ? 2U
                                                    : 
                                                   (1U 
                                                    & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                       >> 9U))))))
               : (((IData)((0U != (0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                           >> 4U)))) 
                   << 2U) | ((0U != (0xfU & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                             >> 4U)))
                              ? ((0x80U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                  ? 3U : ((0x40U & 
                                           vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                           ? 2U : (1U 
                                                   & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                      >> 5U))))
                              : ((8U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                  ? 3U : ((4U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U])
                                           ? 2U : (1U 
                                                   & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                      >> 1U))))))));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_out_valid 
        = (0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___count_T_5 
        = (0x7fU & ((IData)(2U) + (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count)));
    vlSelf->CoreTop__DOT__rf_MPORT_en = ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid_2));
    vlSelf->CoreTop__DOT__EX__DOT__src2 = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                            ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2
                                            : ((1U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                                ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm
                                                : 0ULL));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask 
        = ((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
            ? 0xffU : ((0x70U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                        ? ((0U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 1U))))
                            ? 3U : ((1U == (3U & (IData)(
                                                         (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                          >> 1U))))
                                     ? 0xcU : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 1U))))
                                                ? 0x30U
                                                : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? 0xc0U
                                                    : 0U))))
                        : ((0x74U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                            ? ((0U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                ? 1U : ((1U == (7U 
                                                & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                         ? 2U : ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                  ? 4U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                   ? 8U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                    ? 0x10U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                     ? 0x20U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                      ? 0x40U
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                       ? 0x80U
                                                       : 0U))))))))
                            : ((0x77U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? ((1U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                  >> 2U)))
                                    ? 0xf0U : 0xfU)
                                : 0U))));
    vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21 
        = ((0U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
            ? (QData)((IData)((0xffU & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
            : ((1U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                ? (QData)((IData)((0xff00U & ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2) 
                                              << 8U))))
                : ((2U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                    ? (QData)((IData)((0xff0000U & 
                                       ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2) 
                                        << 0x10U))))
                    : ((3U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                        ? (QData)((IData)(((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2) 
                                           << 0x18U)))
                        : ((4U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                            ? ((QData)((IData)((0xffU 
                                                & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                               << 0x20U) : ((5U == 
                                             (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                             ? ((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                << 0x28U)
                                             : ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                 ? 
                                                ((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                 << 0x30U)
                                                 : 
                                                ((7U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                  ? 
                                                 (vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2 
                                                  << 0x38U)
                                                  : 0ULL))))))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
        = ((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
            ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
            : ((0x70U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                ? ((0U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                         >> 1U)))) ? (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                    : ((1U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                             >> 1U))))
                        ? (QData)((IData)(((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2) 
                                           << 0x10U)))
                        : ((2U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 1U))))
                            ? ((QData)((IData)((0xffffU 
                                                & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                               << 0x20U) : ((3U == 
                                             (3U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 1U))))
                                             ? (vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2 
                                                << 0x30U)
                                             : 0ULL))))
                : ((0x74U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                    ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                    : ((0x77U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                        ? ((1U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                          >> 2U))) ? 
                           (vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2 
                            << 0x20U) : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                        : 0ULL))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result 
        = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
            [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0] 
            & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG)) 
           & ((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
               >> 0xbU) == vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result 
        = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
            [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0] 
            & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG)) 
           & ((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
               >> 0xbU) == vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data));
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen) 
           & (IData)(vlSelf->CoreTop__DOT__valid_1));
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid) 
           & (IData)(vlSelf->CoreTop__DOT__valid_1));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__cntShift 
        = (0x7fU & ((0x40U | (((IData)((0U != (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                       >> 0x20U)))) 
                               << 5U) | ((0U != (IData)(
                                                        (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                         >> 0x20U)))
                                          ? (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xffffU 
                                                        & (IData)(
                                                                  (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                                   >> 0x30U))))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                             >> 0x30U))))
                                                 ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_25)
                                                 : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_51)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xffffU 
                                                        & (IData)(
                                                                  (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                                   >> 0x10U))))) 
                                              << 4U) 
                                             | ((0U 
                                                 != 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg 
                                                             >> 0x10U))))
                                                 ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_79)
                                                 : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_105)))))) 
                    - ((0x40U & (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[2U] 
                                 << 6U)) | ((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[2U])
                                             ? 0U : 
                                            (((IData)(
                                                      (0U 
                                                       != 
                                                       vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])) 
                                              << 5U) 
                                             | ((0U 
                                                 != 
                                                 vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U])
                                                 ? 
                                                (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                            >> 0x10U))) 
                                                  << 4U) 
                                                 | ((0U 
                                                     != 
                                                     (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[1U] 
                                                      >> 0x10U))
                                                     ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_136)
                                                     : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_162)))
                                                 : 
                                                (((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                            >> 0x10U))) 
                                                  << 4U) 
                                                 | ((0U 
                                                     != 
                                                     (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg[0U] 
                                                      >> 0x10U))
                                                     ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_190)
                                                     : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_216)))))))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask) 
           & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)
               ? 0xffU : 0U));
    if (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xfU];
    } else if (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xfU];
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result) 
           | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce 
        = (((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
            & (IData)(vlSelf->CoreTop__DOT__valid_1)) 
           & (IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
    vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_55 = ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                    ? 
                                                   ((~ 
                                                     (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last) 
                                                       & (2U 
                                                          == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))) 
                                                      | (1U 
                                                         == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))) 
                                                    & (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state))
                                                    : (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state));
    vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0 
        = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)) 
           & (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)));
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen 
            = ((~ (IData)(vlSelf->CoreTop__DOT__empty)) 
               & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
    }
    vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen = ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen) 
                                                & (IData)(vlSelf->CoreTop__DOT__valid));
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst 
            = vlSelf->CoreTop__DOT__ID_io_in_bits_Inst;
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_ertn_flush 
            = (0x18U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2));
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_excp_flush 
            = (0x17U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2));
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid 
            = (1U & (~ ((0U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2)) 
                        | ((IData)(vlSelf->CoreTop__DOT__empty) 
                           | (IData)(vlSelf->CoreTop__DOT__IF_io_flush)))));
    }
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0 
        = ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid) 
           & (IData)(vlSelf->CoreTop__DOT__valid));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
        = ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                 >> 3U)))) ? (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3))
            : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                     >> 3U)))) ? (QData)((IData)(
                                                                 ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3) 
                                                                  << 8U)))
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                         >> 3U)))) ? (QData)((IData)(
                                                                     ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3) 
                                                                      << 0x10U)))
                    : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                             >> 3U))))
                        ? (QData)((IData)(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3) 
                                           << 0x18U)))
                        : ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 3U))))
                            ? ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                               << 0x20U) : ((5U == 
                                             (7U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                             ? ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                                                << 0x28U)
                                             : ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                                 ? 
                                                ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                                                 << 0x30U)
                                                 : 
                                                ((7U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                                  ? 
                                                 ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                                                  << 0x38U)
                                                  : 0ULL))))))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
           & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
              & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
           & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce) 
           & ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
              & (0xa2000000ULL >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)));
    vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_98 = ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0) 
                                                   | (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r));
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__IF__DOT__temp = 0x80000000ULL;
    } else if ((1U & ((((~ (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall)) 
                        & (~ (IData)(vlSelf->CoreTop__DOT__IF_io_ex_stall))) 
                       & (~ (IData)(vlSelf->CoreTop__DOT__IF_io_excp_flush))) 
                      & (~ (IData)(vlSelf->CoreTop__DOT__IF_io_mret_flush))))) {
        if (((IData)(vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump) 
             | (IData)(vlSelf->CoreTop__DOT__IF_io_branch_io_is_branch))) {
            vlSelf->CoreTop__DOT__IF__DOT__temp = vlSelf->CoreTop__DOT__IF_io_branch_io_dnpc;
        } else if (((~ (IData)(vlSelf->CoreTop__DOT__full)) 
                    & (IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid))) {
            vlSelf->CoreTop__DOT__IF__DOT__temp = vlSelf->CoreTop__DOT__IF__DOT___temp_T_10;
        }
    } else if (vlSelf->CoreTop__DOT__IF_io_excp_flush) {
        vlSelf->CoreTop__DOT__IF__DOT__temp = vlSelf->CoreTop__DOT__CSR__DOT__mtvec;
    } else if (vlSelf->CoreTop__DOT__IF_io_mret_flush) {
        vlSelf->CoreTop__DOT__IF__DOT__temp = vlSelf->CoreTop__DOT__CSR__DOT__mepc;
    }
    vlSelf->CoreTop__DOT__IF_io_mret_flush = ((0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                              & ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_ertn_flush) 
                                                 & (IData)(vlSelf->CoreTop__DOT__valid_2)));
    vlSelf->CoreTop__DOT__IF_io_excp_flush = ((0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                              & ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_excp_flush) 
                                                 & (IData)(vlSelf->CoreTop__DOT__valid_2)));
    vlSelf->CoreTop__DOT__IF_io_wb_stall = ((IData)(vlSelf->CoreTop__DOT__valid_2) 
                                            & ((0U 
                                                != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                               & ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_ertn_flush) 
                                                  | (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_excp_flush))));
    vlSelf->CoreTop__DOT__EX__DOT__is_jump = ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType)) 
                                              & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0));
    __Vtemp_hfc1d42bd__0[0U] = (IData)((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 7U)))
                                                           ? 0xffU
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 6U)))
                                                              ? 0xffU
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 5U)))
                                                                 ? 0xffU
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 4U)))
                                                                    ? 0xffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 3U)))
                                                                       ? 0xffU
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 2U)))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((1U 
                                                                             & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 1U)))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((1U 
                                                                              & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask))
                                                                              ? 0xffU
                                                                              : 0U)))))))))));
    __Vtemp_hfc1d42bd__0[1U] = (IData)(((((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                       >> 7U)))
                                                            ? 0xffU
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 6U)))
                                                               ? 0xffU
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                             >> 5U)))
                                                                  ? 0xffU
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 4U)))
                                                                     ? 0xffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((1U 
                                                                        & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 3U)))
                                                                        ? 0xffU
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((1U 
                                                                           & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 2U)))
                                                                           ? 0xffU
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 1U)))
                                                                              ? 0xffU
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((1U 
                                                                               & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask))
                                                                               ? 0xffU
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[0U] 
        = __Vtemp_hfc1d42bd__0[0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[1U] 
        = __Vtemp_hfc1d42bd__0[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[2U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0xbU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0xaU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 9U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 8U)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[3U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0xfU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0xeU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0xdU)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0xcU)))
                                ? 0xffU : 0U))));
    __Vtemp_had48ed99__0[0U] = (IData)((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 0x27U)))
                                                           ? 0xffU
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0x26U)))
                                                              ? 0xffU
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0x25U)))
                                                                 ? 0xffU
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x24U)))
                                                                    ? 0xffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x23U)))
                                                                       ? 0xffU
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x22U)))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((1U 
                                                                             & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x21U)))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x20U)))
                                                                              ? 0xffU
                                                                              : 0U)))))))))));
    __Vtemp_had48ed99__0[1U] = (IData)(((((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                       >> 0x27U)))
                                                            ? 0xffU
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 0x26U)))
                                                               ? 0xffU
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                             >> 0x25U)))
                                                                  ? 0xffU
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x24U)))
                                                                     ? 0xffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((1U 
                                                                        & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x23U)))
                                                                        ? 0xffU
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((1U 
                                                                           & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x22U)))
                                                                           ? 0xffU
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x21U)))
                                                                              ? 0xffU
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x20U)))
                                                                               ? 0xffU
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[0U] 
        = __Vtemp_had48ed99__0[0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[1U] 
        = __Vtemp_had48ed99__0[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[2U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x2bU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x2aU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x29U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x28U)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[3U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x2fU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x2eU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x2dU)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x2cU)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)) 
           | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3));
    vlSelf->__VdfgTmp_h5a5a8c61__0 = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                      | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we) 
           & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
              | (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
            & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we))
            ? (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result) 
                << 1U) | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result))
            : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)
                ? 2U : 1U));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce));
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
           & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)));
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready = 
        (1U & ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
               | (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    vlSelf->CoreTop__DOT___T_16 = ((IData)(vlSelf->CoreTop__DOT__IF_io_mret_flush) 
                                   | (IData)(vlSelf->CoreTop__DOT__IF_io_excp_flush));
    vlSelf->CoreTop__DOT__IF__DOT___temp_T_10 = (4ULL 
                                                 + vlSelf->CoreTop__DOT__IF__DOT__temp);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result 
        = ((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0] 
            & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG)) 
           & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
               >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0
              [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]));
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result 
        = ((vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0] 
            & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG)) 
           & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
               >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1
              [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0]));
    vlSelf->CoreTop__DOT__WB_io_out_valid = ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall)) 
                                             & (IData)(vlSelf->CoreTop__DOT__valid_2));
    vlSelf->CoreTop__DOT__CSR__DOT__mepc = (((0x300U 
                                              == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                                             & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))
                                             ? vlSelf->CoreTop__DOT__CSR__DOT___GEN_2
                                             : (((0x305U 
                                                  == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                                                 & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))
                                                 ? vlSelf->CoreTop__DOT__CSR__DOT___GEN_2
                                                 : 
                                                (((0x341U 
                                                   == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                                                  & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))
                                                  ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_data
                                                  : vlSelf->CoreTop__DOT__CSR__DOT___GEN_2)));
    __Vtemp_hc8cf7fd9__0[4U] = (IData)((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 0x17U)))
                                                           ? 0xffU
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0x16U)))
                                                              ? 0xffU
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0x15U)))
                                                                 ? 0xffU
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x14U)))
                                                                    ? 0xffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x13U)))
                                                                       ? 0xffU
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x12U)))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((1U 
                                                                             & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x11U)))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x10U)))
                                                                              ? 0xffU
                                                                              : 0U)))))))))));
    __Vtemp_hc8cf7fd9__0[5U] = (IData)(((((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                       >> 0x17U)))
                                                            ? 0xffU
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 0x16U)))
                                                               ? 0xffU
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                             >> 0x15U)))
                                                                  ? 0xffU
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x14U)))
                                                                     ? 0xffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((1U 
                                                                        & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x13U)))
                                                                        ? 0xffU
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((1U 
                                                                           & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x12U)))
                                                                           ? 0xffU
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x11U)))
                                                                              ? 0xffU
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x10U)))
                                                                               ? 0xffU
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[0U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[1U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[2U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[3U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[4U] 
        = __Vtemp_hc8cf7fd9__0[4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[5U] 
        = __Vtemp_hc8cf7fd9__0[5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[6U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x1bU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x1aU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x19U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x18U)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[7U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x1fU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x1eU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x1dU)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x1cU)))
                                ? 0xffU : 0U))));
    __Vtemp_hdf433f48__0[4U] = (IData)((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 0x37U)))
                                                           ? 0xffU
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0x36U)))
                                                              ? 0xffU
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0x35U)))
                                                                 ? 0xffU
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x34U)))
                                                                    ? 0xffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x33U)))
                                                                       ? 0xffU
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x32U)))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((1U 
                                                                             & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x31U)))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x30U)))
                                                                              ? 0xffU
                                                                              : 0U)))))))))));
    __Vtemp_hdf433f48__0[5U] = (IData)(((((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                       >> 0x37U)))
                                                            ? 0xffU
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 0x36U)))
                                                               ? 0xffU
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                             >> 0x35U)))
                                                                  ? 0xffU
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x34U)))
                                                                     ? 0xffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((1U 
                                                                        & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x33U)))
                                                                        ? 0xffU
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((1U 
                                                                           & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x32U)))
                                                                           ? 0xffU
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x31U)))
                                                                              ? 0xffU
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x30U)))
                                                                               ? 0xffU
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[0U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[1U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[2U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[3U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[4U] 
        = __Vtemp_hdf433f48__0[4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[5U] 
        = __Vtemp_hdf433f48__0[5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[6U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x3bU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x3aU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x39U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x38U)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[7U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x3fU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x3eU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x3dU)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x3cU)))
                                ? 0xffU : 0U))));
    if (vlSelf->__VdfgTmp_h5a5a8c61__0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 6U)));
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data 
            = (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
               >> 0xbU);
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data = 0ULL;
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_10 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8)
            ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state));
    if (vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) {
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid 
            = vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready;
        vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr 
            = vlSelf->CoreTop__DOT__MEM__DOT__addr_temp;
        vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr 
            = vlSelf->CoreTop__DOT__MEM__DOT__addr_temp;
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last 
            = (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask;
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata;
        vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid 
            = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid 
            = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
    } else {
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid 
            = (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr 
            = ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
                ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg
                : 0ULL);
        vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr 
            = ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
                ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg
                : 0ULL);
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last 
            = (7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb = 0xffU;
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U])));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid 
            = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid 
            = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state));
    }
    vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0 
        = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)) 
           & ((IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid) 
              | (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)));
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest 
            = (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                        >> 7U));
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC 
            = ((0x1fU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
                ? vlSelf->CoreTop__DOT__buffer_31_PC
                : ((0x1eU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
                    ? vlSelf->CoreTop__DOT__buffer_30_PC
                    : ((0x1dU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
                        ? vlSelf->CoreTop__DOT__buffer_29_PC
                        : ((0x1cU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
                            ? vlSelf->CoreTop__DOT__buffer_28_PC
                            : ((0x1bU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))
                                ? vlSelf->CoreTop__DOT__buffer_27_PC
                                : vlSelf->CoreTop__DOT___GEN_190)))));
    }
    vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1 
        = (vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm 
           + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC);
    if (((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid) 
         & (~ (IData)(vlSelf->CoreTop__DOT__full)))) {
        if ((0U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_0_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_0_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((1U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_1_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_1_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((2U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_2_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_2_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((3U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_3_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_3_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((4U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_4_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_4_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((5U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_5_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_5_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((6U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_6_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_6_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((7U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_7_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_7_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((8U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_8_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_8_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((9U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_9_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_9_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0xaU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_10_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_10_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0xbU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_11_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_11_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0xcU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_12_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_12_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0xdU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_13_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_13_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0xeU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_14_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_14_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0xfU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_15_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_15_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x10U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_16_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_16_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x11U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_17_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_17_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x12U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_18_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_18_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x13U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_19_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_19_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x14U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_20_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_20_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x15U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_21_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_21_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x16U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_22_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_22_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x17U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_23_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_23_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x18U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_24_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_24_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x19U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_25_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_25_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x1aU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_26_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_26_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x1bU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_27_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_27_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x1cU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_28_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_28_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x1dU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_29_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_29_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x1eU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_30_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_30_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
        if ((0x1fU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__head)))) {
            vlSelf->CoreTop__DOT__buffer_31_PC = vlSelf->io_pc;
            vlSelf->CoreTop__DOT__buffer_31_Inst = vlSelf->CoreTop__DOT__IF_io_out_bits_Inst;
        }
    }
    if (vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xfU];
    } else if (vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xfU];
    } else {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[1U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[2U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[3U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[4U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[5U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[6U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[7U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[8U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[9U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit 
        = ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result) 
           | (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__CSR__DOT__mtvec = 0ULL;
    } else if ((1U & (~ ((0x300U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                         & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))))) {
        if (((0x305U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
             & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))) {
            vlSelf->CoreTop__DOT__CSR__DOT__mtvec = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_data;
        }
    }
    vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en 
        = ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_en) 
           & (IData)(vlSelf->CoreTop__DOT__valid_2));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[1U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[2U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[3U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[4U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[5U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[6U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[6U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[7U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[7U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[8U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[9U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xaU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xbU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xcU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xdU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xeU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[6U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xfU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[7U];
    vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
            ? (((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                 ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid)
                 : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                     ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                     : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                         ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                             ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                             : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid))
                         : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid))))
                ? 2U : 0U) : ((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
                               ? (((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)) 
                                   & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last))
                                   ? 0U : 2U) : 0U));
    vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
           & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
               ? (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
               : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                  & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                     & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))))));
    if (vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0) {
        vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready 
            = (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready 
            = (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state));
        vlSelf->CoreTop__DOT__MMEM_wd_last = vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last;
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready 
            = vlSelf->CoreTop__DOT__MMEM_wd_ready;
    } else {
        vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready 
            = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                   ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                      & (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)))
                   : (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready 
            = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                   ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                      & (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))
                   : (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
        vlSelf->CoreTop__DOT__MMEM_wd_last = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                              & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                                 & ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                                    & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last))));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready 
            = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                   ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                      & (IData)(vlSelf->CoreTop__DOT__MMEM_wd_ready))
                   : (IData)(vlSelf->CoreTop__DOT__MMEM_wd_ready)));
    }
    vlSelf->CoreTop__DOT__CSR__DOT___GEN_1 = ((IData)(vlSelf->CoreTop__DOT__IF_io_excp_flush)
                                               ? 0xbULL
                                               : vlSelf->CoreTop__DOT__CSR__DOT__mcause);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_24 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
            ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)
                : 0U) : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state));
    if ((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                >> 6U)));
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data 
            = (vlSelf->CoreTop__DOT__IF__DOT__temp 
               >> 0xbU);
    } else {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr = 0U;
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data = 0ULL;
    }
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__tail = 0U;
    } else if (vlSelf->CoreTop__DOT___T_5) {
        vlSelf->CoreTop__DOT__tail = 0U;
    } else if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__tail = vlSelf->CoreTop__DOT___tail_T_1;
    }
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__MMEM__DOT__rdata = 0ULL;
    } else {
        if (((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)) 
             & (~ (IData)(vlSelf->clock)))) {
            VCoreTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer, vlSelf->__Vtask_pmem_read__2__rdata);
            vlSelf->CoreTop__DOT__MMEM__DOT__rdata 
                = vlSelf->__Vtask_pmem_read__2__rdata;
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
    vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? vlSelf->CoreTop__DOT__MMEM__DOT__rdata
            : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1)
                ? ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                         >> 3U)))) ? 
                   (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U])))
                    : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                             >> 3U))))
                        ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U])))
                        : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 3U))))
                            ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U])))
                            : ((3U == (7U & (IData)(
                                                    (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U])))
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U])))
                                    : ((5U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU])))
                                        : ((6U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU])))
                                            : ((7U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU])))
                                                : 0ULL))))))))
                : ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                         >> 3U)))) ? 
                   (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U])))
                    : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                             >> 3U))))
                        ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U])))
                        : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 3U))))
                            ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U])))
                            : ((3U == (7U & (IData)(
                                                    (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U])))
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U])))
                                    : ((5U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU])))
                                        : ((6U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU])))
                                            : ((7U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU])))
                                                : 0ULL))))))))));
    vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27 
        = (0xffU & ((0U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                     ? (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata)
                     : ((1U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                         ? (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                    >> 8U)) : ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                ? (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                           >> 0x10U))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                    ? (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                               >> 0x18U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                     ? (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                >> 0x20U))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                      ? (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                 >> 0x28U))
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                       ? (IData)(
                                                                 (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                  >> 0x30U))
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                        ? (IData)(
                                                                  (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                   >> 0x38U))
                                                        : 0U)))))))));
    if (vlSelf->CoreTop__DOT___T_15) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_idx;
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_data 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_data;
    }
    if (vlSelf->CoreTop__DOT___T_9) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_idx 
            = vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_data 
            = ((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                ? 0ULL : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                           ? 0ULL : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                      ? 0ULL : ((0x44U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? 0ULL
                                                 : 
                                                ((0x69U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? 0ULL
                                                  : 
                                                 ((0x71U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 0ULL
                                                   : 
                                                  ((0x72U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 0ULL
                                                    : 
                                                   ((0x6dU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 0ULL
                                                     : 
                                                    ((0x78U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 0ULL
                                                      : 
                                                     ((0x79U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? 0ULL
                                                       : 
                                                      ((0x7aU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? 0ULL
                                                        : 
                                                       ((0xdU 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? 0ULL
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? 0ULL
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? 0ULL
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? 0ULL
                                                            : 
                                                           ((0x12U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? 0ULL
                                                             : 
                                                            ((0x10U 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? 0ULL
                                                              : 
                                                             ((0x13U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? 0ULL
                                                               : 
                                                              ((0x43U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? 0ULL
                                                                : 
                                                               ((0x15U 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? 
                                                                (vlSelf->CoreTop__DOT__EX_io_csr_rd_io_rd_data 
                                                                 | vlSelf->CoreTop__DOT__EX__DOT__src1)
                                                                 : 
                                                                ((0x16U 
                                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                  ? vlSelf->CoreTop__DOT__EX__DOT__src1
                                                                  : 0ULL)))))))))))))))))))));
    }
    if (vlSelf->CoreTop__DOT___T) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype 
            = vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2;
    }
    vlSelf->CoreTop__DOT__CSR__DOT___GEN_2 = ((IData)(vlSelf->CoreTop__DOT__IF_io_excp_flush)
                                               ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC
                                               : vlSelf->CoreTop__DOT__CSR__DOT__mepc);
    if (vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0) {
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid 
            = (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid 
            = (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state));
    } else {
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid 
            = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                   ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                      & (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))
                   : (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid 
            = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                   ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                      & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)))
                   : (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
    }
    vlSelf->io_pc = vlSelf->CoreTop__DOT__IF__DOT__temp;
    vlSelf->CoreTop__DOT__ICACHE__DOT___io_in_rdata_rep_bits_rdata_T_1 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
           & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit));
    vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[0U] 
        = vlSelf->CoreTop__DOT__CSR__DOT__mepc;
    vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[3U] 
        = vlSelf->CoreTop__DOT__CSR__DOT__mtvec;
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0U] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[1U] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[1U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[2U] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[2U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[3U] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[3U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[4U] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[4U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[5U] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[5U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[6U] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[6U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[7U] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[7U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[8U] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[8U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[9U] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[9U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xaU] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xaU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xbU] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xbU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xcU] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xcU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xdU] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xdU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xeU] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xeU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xfU] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xfU]);
    if ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[1U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[1U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[1U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[2U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[2U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[2U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[3U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[3U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[3U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[4U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[4U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[4U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[5U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[5U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[5U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[6U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[6U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[6U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[7U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[7U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[7U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[8U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[8U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[8U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[9U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[9U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[9U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xaU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xaU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xaU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xbU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xbU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xbU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xcU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xcU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xcU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xdU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xdU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xdU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xeU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xeU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xeU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xfU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xfU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xfU]);
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[1U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[1U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[1U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[2U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[2U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[2U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[3U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[3U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[3U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[4U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[4U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[4U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[5U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[5U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[5U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[6U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[6U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[6U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[7U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[7U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[7U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[8U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[8U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[8U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[9U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[9U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[9U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xaU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xaU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xaU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xbU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xbU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xbU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xcU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xcU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xcU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xdU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xdU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xdU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xeU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xeU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xeU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xfU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xfU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xfU]);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_17 = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last) 
                                                   & (IData)(vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid))
                                                   ? 3U
                                                   : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state));
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->CoreTop__DOT__MMEM_wd_last) 
                             << 5U) | ((((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                          ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready)
                                          : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0) 
                                             | ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                 ? 
                                                ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                                 | (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready))
                                                 : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready)))) 
                                        << 4U) | ((
                                                   (1U 
                                                    == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)) 
                                                   << 3U) 
                                                  | ((((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                                        ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)
                                                        : 
                                                       ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                                        & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                            ? 
                                                           ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                                            & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid))
                                                            : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)))) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))));
    if (VCoreTop__ConstPool__TABLE_h1d315e1c_0[vlSelf->__Vtableidx1]) {
        vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state 
            = VCoreTop__ConstPool__TABLE_h2941df74_0
            [vlSelf->__Vtableidx1];
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_8 
        = ((((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
             & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready)) 
            & (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state)))
            ? 3U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready));
    if (((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
         & (IData)(vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid))) {
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xeU] 
            = (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__rdata);
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xfU] 
            = (IData)((vlSelf->CoreTop__DOT__MMEM__DOT__rdata 
                       >> 0x20U));
    } else {
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU];
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid));
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid));
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid));
    vlSelf->CoreTop__DOT___tail_T_1 = (0x3fU & ((IData)(1U) 
                                                + (IData)(vlSelf->CoreTop__DOT__tail)));
    if ((0xdU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_177 = vlSelf->CoreTop__DOT__buffer_13_PC;
        vlSelf->CoreTop__DOT___GEN_145 = vlSelf->CoreTop__DOT__buffer_13_Inst;
    } else if ((0xcU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_177 = vlSelf->CoreTop__DOT__buffer_12_PC;
        vlSelf->CoreTop__DOT___GEN_145 = vlSelf->CoreTop__DOT__buffer_12_Inst;
    } else if ((0xbU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_177 = vlSelf->CoreTop__DOT__buffer_11_PC;
        vlSelf->CoreTop__DOT___GEN_145 = vlSelf->CoreTop__DOT__buffer_11_Inst;
    } else if ((0xaU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_177 = vlSelf->CoreTop__DOT__buffer_10_PC;
        vlSelf->CoreTop__DOT___GEN_145 = vlSelf->CoreTop__DOT__buffer_10_Inst;
    } else if ((9U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_177 = vlSelf->CoreTop__DOT__buffer_9_PC;
        vlSelf->CoreTop__DOT___GEN_145 = vlSelf->CoreTop__DOT__buffer_9_Inst;
    } else if ((8U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_177 = vlSelf->CoreTop__DOT__buffer_8_PC;
        vlSelf->CoreTop__DOT___GEN_145 = vlSelf->CoreTop__DOT__buffer_8_Inst;
    } else if ((7U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_177 = vlSelf->CoreTop__DOT__buffer_7_PC;
        vlSelf->CoreTop__DOT___GEN_145 = vlSelf->CoreTop__DOT__buffer_7_Inst;
    } else if ((6U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_177 = vlSelf->CoreTop__DOT__buffer_6_PC;
        vlSelf->CoreTop__DOT___GEN_145 = vlSelf->CoreTop__DOT__buffer_6_Inst;
    } else if ((5U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_177 = vlSelf->CoreTop__DOT__buffer_5_PC;
        vlSelf->CoreTop__DOT___GEN_145 = vlSelf->CoreTop__DOT__buffer_5_Inst;
    } else if ((4U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_177 = vlSelf->CoreTop__DOT__buffer_4_PC;
        vlSelf->CoreTop__DOT___GEN_145 = vlSelf->CoreTop__DOT__buffer_4_Inst;
    } else if ((3U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_177 = vlSelf->CoreTop__DOT__buffer_3_PC;
        vlSelf->CoreTop__DOT___GEN_145 = vlSelf->CoreTop__DOT__buffer_3_Inst;
    } else if ((2U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_177 = vlSelf->CoreTop__DOT__buffer_2_PC;
        vlSelf->CoreTop__DOT___GEN_145 = vlSelf->CoreTop__DOT__buffer_2_Inst;
    } else if ((1U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_177 = vlSelf->CoreTop__DOT__buffer_1_PC;
        vlSelf->CoreTop__DOT___GEN_145 = vlSelf->CoreTop__DOT__buffer_1_Inst;
    } else {
        vlSelf->CoreTop__DOT___GEN_177 = vlSelf->CoreTop__DOT__buffer_0_PC;
        vlSelf->CoreTop__DOT___GEN_145 = vlSelf->CoreTop__DOT__buffer_0_Inst;
    }
    vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata 
        = ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___io_in_rdata_rep_bits_rdata_T_1)
            ? ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                     >> 3U)))) ? (((QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0U])))
                : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                         >> 3U)))) ? 
                   (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[2U])))
                    : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                             >> 3U))))
                        ? (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[4U])))
                        : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                 >> 3U))))
                            ? (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[6U])))
                            : ((4U == (7U & (IData)(
                                                    (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[9U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[8U])))
                                : ((5U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xbU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xaU])))
                                    : ((6U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xdU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xcU])))
                                        : ((7U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xeU])))
                                            : 0ULL))))))))
            : ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                     >> 3U)))) ? (((QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0U])))
                : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                         >> 3U)))) ? 
                   (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U])))
                    : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                             >> 3U))))
                        ? (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U])))
                        : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                 >> 3U))))
                            ? (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U])))
                            : ((4U == (7U & (IData)(
                                                    (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U])))
                                : ((5U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU])))
                                    : ((6U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU])))
                                        : ((7U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU])))
                                            : 0ULL)))))))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_30 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready) 
            & (7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write)))
            ? 3U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT____VdfgTmp_h9d851aea__0 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready) 
           & (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state)));
    vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44 
        = (0xffffU & ((0U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                            >> 1U))))
                       ? (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata)
                       : ((1U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                >> 1U))))
                           ? (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                      >> 0x10U)) : 
                          ((2U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 1U))))
                            ? (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                       >> 0x20U)) : 
                           ((3U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                  >> 1U))))
                             ? (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                        >> 0x30U)) : 0U)))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_32 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
            ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid)
                ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
            : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state));
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_10 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
            ? (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid) 
                & (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state)))
                ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
            : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_22 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last) 
            & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid))
            ? 3U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state));
    if (((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)) 
         & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid))) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xeU] 
            = (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__rdata);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xfU] 
            = (IData)((vlSelf->CoreTop__DOT__MMEM__DOT__rdata 
                       >> 0x20U));
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xeU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xfU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU];
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_2 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid) 
            & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
               & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last)))
            ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state));
    vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6 
        = ((IData)(vlSelf->CoreTop__DOT__valid_1) & 
           ((~ (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                  ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid)
                  : ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)) 
                     & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
                        | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4)))) 
                | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                    ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid)
                    : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3) 
                       | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                          & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)))))) 
            & (4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))));
    if ((0x1aU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_190 = vlSelf->CoreTop__DOT__buffer_26_PC;
        vlSelf->CoreTop__DOT___GEN_158 = vlSelf->CoreTop__DOT__buffer_26_Inst;
    } else if ((0x19U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_190 = vlSelf->CoreTop__DOT__buffer_25_PC;
        vlSelf->CoreTop__DOT___GEN_158 = vlSelf->CoreTop__DOT__buffer_25_Inst;
    } else if ((0x18U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_190 = vlSelf->CoreTop__DOT__buffer_24_PC;
        vlSelf->CoreTop__DOT___GEN_158 = vlSelf->CoreTop__DOT__buffer_24_Inst;
    } else if ((0x17U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_190 = vlSelf->CoreTop__DOT__buffer_23_PC;
        vlSelf->CoreTop__DOT___GEN_158 = vlSelf->CoreTop__DOT__buffer_23_Inst;
    } else if ((0x16U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_190 = vlSelf->CoreTop__DOT__buffer_22_PC;
        vlSelf->CoreTop__DOT___GEN_158 = vlSelf->CoreTop__DOT__buffer_22_Inst;
    } else if ((0x15U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_190 = vlSelf->CoreTop__DOT__buffer_21_PC;
        vlSelf->CoreTop__DOT___GEN_158 = vlSelf->CoreTop__DOT__buffer_21_Inst;
    } else if ((0x14U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_190 = vlSelf->CoreTop__DOT__buffer_20_PC;
        vlSelf->CoreTop__DOT___GEN_158 = vlSelf->CoreTop__DOT__buffer_20_Inst;
    } else if ((0x13U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_190 = vlSelf->CoreTop__DOT__buffer_19_PC;
        vlSelf->CoreTop__DOT___GEN_158 = vlSelf->CoreTop__DOT__buffer_19_Inst;
    } else if ((0x12U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_190 = vlSelf->CoreTop__DOT__buffer_18_PC;
        vlSelf->CoreTop__DOT___GEN_158 = vlSelf->CoreTop__DOT__buffer_18_Inst;
    } else if ((0x11U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_190 = vlSelf->CoreTop__DOT__buffer_17_PC;
        vlSelf->CoreTop__DOT___GEN_158 = vlSelf->CoreTop__DOT__buffer_17_Inst;
    } else if ((0x10U == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_190 = vlSelf->CoreTop__DOT__buffer_16_PC;
        vlSelf->CoreTop__DOT___GEN_158 = vlSelf->CoreTop__DOT__buffer_16_Inst;
    } else if ((0xfU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_190 = vlSelf->CoreTop__DOT__buffer_15_PC;
        vlSelf->CoreTop__DOT___GEN_158 = vlSelf->CoreTop__DOT__buffer_15_Inst;
    } else if ((0xeU == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail)))) {
        vlSelf->CoreTop__DOT___GEN_190 = vlSelf->CoreTop__DOT__buffer_14_PC;
        vlSelf->CoreTop__DOT___GEN_158 = vlSelf->CoreTop__DOT__buffer_14_Inst;
    } else {
        vlSelf->CoreTop__DOT___GEN_190 = vlSelf->CoreTop__DOT___GEN_177;
        vlSelf->CoreTop__DOT___GEN_158 = vlSelf->CoreTop__DOT___GEN_145;
    }
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__head = 0U;
    } else if (vlSelf->CoreTop__DOT___T_5) {
        vlSelf->CoreTop__DOT__head = 0U;
    } else if (((IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid) 
                & (~ (IData)(vlSelf->CoreTop__DOT__full)))) {
        vlSelf->CoreTop__DOT__head = vlSelf->CoreTop__DOT___head_T_1;
    }
    vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid 
        = ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
           | ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
              & (3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))));
    vlSelf->CoreTop__DOT__CSR__DOT____VdfgTmp_h0abbaf32__0 
        = ((0x304U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
           & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en));
    vlSelf->CoreTop__DOT__CSR__DOT____VdfgTmp_had87db98__0 
        = ((0x342U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
           & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en));
    VL_SHIFTR_WWI(512,512,32, __Vtemp_h902130f5__0, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg, 0x40U);
    if ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_14 
            = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid)
                ? 2U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state));
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_89 
            = (0xfU & ((7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))
                        ? 0U : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write) 
                                + (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT____VdfgTmp_h9d851aea__0))));
        if (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT____VdfgTmp_h9d851aea__0) {
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0U] 
                = __Vtemp_h902130f5__0[0U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[1U] 
                = __Vtemp_h902130f5__0[1U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[2U] 
                = __Vtemp_h902130f5__0[2U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[3U] 
                = __Vtemp_h902130f5__0[3U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[4U] 
                = __Vtemp_h902130f5__0[4U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[5U] 
                = __Vtemp_h902130f5__0[5U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[6U] 
                = __Vtemp_h902130f5__0[6U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[7U] 
                = __Vtemp_h902130f5__0[7U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[8U] 
                = __Vtemp_h902130f5__0[8U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[9U] 
                = __Vtemp_h902130f5__0[9U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xaU] 
                = __Vtemp_h902130f5__0[0xaU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xbU] 
                = __Vtemp_h902130f5__0[0xbU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xcU] 
                = __Vtemp_h902130f5__0[0xcU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xdU] 
                = __Vtemp_h902130f5__0[0xdU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xeU] 
                = __Vtemp_h902130f5__0[0xeU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xfU] 
                = __Vtemp_h902130f5__0[0xfU];
        } else {
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[1U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[2U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[2U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[3U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[3U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[4U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[4U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[5U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[5U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[6U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[6U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[7U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[7U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[8U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[8U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[9U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[9U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xaU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xaU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xbU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xbU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xcU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xcU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xdU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xdU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xeU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xeU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xfU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xfU];
        }
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_14 
            = ((4U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))
                ? (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8) 
                    | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid))
                    ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))
                : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state));
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_89 
            = (0xfU & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write));
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xeU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xfU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xfU];
    }
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData 
        = ((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))
            ? ((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                ? vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata
                : ((0x47U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                    ? ((1U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                      >> 2U))) ? (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                                >> 0x3fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                     >> 0x20U))))
                        : (((QData)((IData)(((1U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                            >> 0x1fU)))
                                              ? 0xffffffffU
                                              : 0U))) 
                            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata))))
                    : ((0x11U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                        ? ((1U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                          >> 2U))) ? 
                           (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                            >> 0x20U) : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata)))
                        : ((0x6fU == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                            ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                            : ((0xeU == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? ((((0x80U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                      ? 0xffffffffffffffULL
                                      : 0ULL) << 8U) 
                                   | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27)))
                                : ((3U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? ((((0x8000U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44))
                                          ? 0xffffffffffffULL
                                          : 0ULL) << 0x10U) 
                                       | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44)))
                                    : ((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44))
                                        : 0ULL)))))))
            : vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData);
    vlSelf->CoreTop__DOT___T_15 = (1U & ((~ ((~ (IData)(vlSelf->CoreTop__DOT__valid_1)) 
                                             | (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6))) 
                                         & (~ (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall))));
    vlSelf->CoreTop__DOT__EX_io_out_ready = (1U & (
                                                   (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)) 
                                                   & (~ (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall))));
    vlSelf->CoreTop__DOT__ID_io_in_bits_Inst = ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                 ? vlSelf->CoreTop__DOT__buffer_31_Inst
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                  ? vlSelf->CoreTop__DOT__buffer_30_Inst
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                   ? vlSelf->CoreTop__DOT__buffer_29_Inst
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                    ? vlSelf->CoreTop__DOT__buffer_28_Inst
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->CoreTop__DOT__tail)))
                                                     ? vlSelf->CoreTop__DOT__buffer_27_Inst
                                                     : vlSelf->CoreTop__DOT___GEN_158)))));
    vlSelf->CoreTop__DOT___head_T_1 = (0x3fU & ((IData)(1U) 
                                                + (IData)(vlSelf->CoreTop__DOT__head)));
    vlSelf->CoreTop__DOT__empty = ((IData)(vlSelf->CoreTop__DOT__head) 
                                   == (IData)(vlSelf->CoreTop__DOT__tail));
    vlSelf->CoreTop__DOT__full = (((0x1fU & (IData)(vlSelf->CoreTop__DOT__head)) 
                                   == (0x1fU & (IData)(vlSelf->CoreTop__DOT__tail))) 
                                  & (((IData)(vlSelf->CoreTop__DOT__head) 
                                      ^ (IData)(vlSelf->CoreTop__DOT__tail)) 
                                     >> 5U));
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_19 = ((3U 
                                                   == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                                   ? 
                                                  ((IData)(vlSelf->CoreTop__DOT__full)
                                                    ? (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)
                                                    : 0U)
                                                   : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state));
    if (vlSelf->CoreTop__DOT__CSR__DOT____VdfgTmp_had87db98__0) {
        vlSelf->CoreTop__DOT__CSR__DOT___GEN_8 = vlSelf->CoreTop__DOT__CSR__DOT__mie;
        vlSelf->CoreTop__DOT__CSR__DOT___GEN_9 = vlSelf->CoreTop__DOT__CSR__DOT__mip;
    } else if (vlSelf->CoreTop__DOT__CSR__DOT____VdfgTmp_h0abbaf32__0) {
        vlSelf->CoreTop__DOT__CSR__DOT___GEN_8 = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_data;
        vlSelf->CoreTop__DOT__CSR__DOT___GEN_9 = vlSelf->CoreTop__DOT__CSR__DOT__mip;
    } else {
        vlSelf->CoreTop__DOT__CSR__DOT___GEN_8 = vlSelf->CoreTop__DOT__CSR__DOT__mie;
        vlSelf->CoreTop__DOT__CSR__DOT___GEN_9 = ((
                                                   (0x344U 
                                                    == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx)) 
                                                   & (IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en))
                                                   ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_data
                                                   : vlSelf->CoreTop__DOT__CSR__DOT__mip);
    }
    vlSelf->CoreTop__DOT__EX__DOT__src1 = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                            ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1
                                            : ((2U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                                ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC
                                                : 0ULL));
    vlSelf->CoreTop__DOT___GEN_248 = ((IData)(vlSelf->CoreTop__DOT___T_15) 
                                      | ((~ (IData)(vlSelf->CoreTop__DOT__WB_io_out_valid)) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid_2)));
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h37196788__0 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
           & (IData)(vlSelf->CoreTop__DOT__EX_io_out_ready));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_363 
        = ((0x501bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
           | ((0x2013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
              | ((0x6003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                 | ((0x3bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                    | ((0x40000033U == (0xfe00707fU 
                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                       | ((0x33U == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                          | ((0x7033U == (0xfe00707fU 
                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                             | ((0x3033U == (0xfe00707fU 
                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                | ((0x103bU == (0xfe00707fU 
                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                   | ((0x6033U == (0xfe00707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                      | ((0x200003bU 
                                          == (0xfe00707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                         | ((0x200403bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                            | ((0x200603bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                               | ((0x4000003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                  | ((0x2033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                     | ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                        | ((0x503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                           | ((0x4033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                              | ((0x200703bU 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                 | ((0x1033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                    | ((0x2007033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                       | ((0x200503bU 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                          | ((0x2006033U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                             | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | ((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | ((0x3023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x1023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x100073U 
                                                                                != vlSelf->CoreTop__DOT__ID_io_in_bits_Inst) 
                                                                                & ((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | ((0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x5063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x7063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                & ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                                                | (0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_209 
        = ((0x17U == (0x7fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 0U : ((0x37U == (0x7fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 0U : ((0x3023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 4U : ((0x1023U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 4U : ((0x23U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 4U
                                                : (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 4U
                                                    : 
                                                   ((0x100073U 
                                                     == vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)
                                                     ? 0U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 3U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 3U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 2U
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 2U
                                                         : 
                                                        ((0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 2U
                                                          : 
                                                         ((0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 2U
                                                           : 
                                                          ((0x6063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 2U
                                                            : 
                                                           ((0x7063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 2U
                                                             : 0U)))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_268 
        = ((0x23U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 0x74U : ((0x2023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                        ? 0x77U : ((0x100073U == vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)
                                    ? 0x42U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 0x19U
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 0x48U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 0x6bU
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0x6cU
                                                      : 
                                                     ((0x5063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0x76U
                                                       : 
                                                      ((0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 0x7bU
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 0xbU
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0xcU
                                                          : 
                                                         ((0x2073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 0x15U
                                                           : 
                                                          ((0x1073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 0x16U
                                                            : 
                                                           ((0x73U 
                                                             == vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)
                                                             ? 0x17U
                                                             : 
                                                            ((0x30200073U 
                                                              == vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)
                                                              ? 0x18U
                                                              : 0U)))))))))))))));
    vlSelf->__VdfgTmp_ha116befc__0 = ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                      == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                   >> 0xfU)));
    vlSelf->__VdfgTmp_ha248cb35__0 = ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                                      == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                   >> 0x14U)));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_144 
        = ((0x3023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 9U : ((0x1023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 9U : ((0x23U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 9U : ((0x2023U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 9U : ((0x100073U 
                                                == vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)
                                                ? 0U
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 7U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 8U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0xbU
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0xbU
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 0xbU
                                                        : 
                                                       ((0x4063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 0xbU
                                                         : 
                                                        ((0x6063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0xbU
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 0xbU
                                                           : 
                                                          ((0x2073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 8U
                                                            : 
                                                           ((0x1073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 8U
                                                             : 0U)))))))))))))));
    vlSelf->CoreTop__DOT__ICACHE__DOT___T_5 = ((~ (IData)(vlSelf->CoreTop__DOT__full)) 
                                               & (3U 
                                                  == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)));
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1), 
                         (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1) 
           >> (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
        = (vlSelf->CoreTop__DOT__EX__DOT__src1 - vlSelf->CoreTop__DOT__EX__DOT__src2);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
        = (vlSelf->CoreTop__DOT__EX__DOT__src1 + vlSelf->CoreTop__DOT__EX__DOT__src2);
    vlSelf->CoreTop__DOT__EX__DOT___compar_result_T 
        = (vlSelf->CoreTop__DOT__EX__DOT__src1 < vlSelf->CoreTop__DOT__EX__DOT__src2);
    vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_4 
        = VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT__src1, vlSelf->CoreTop__DOT__EX__DOT__src2);
    vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump = 
        ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_jump) 
         & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h37196788__0));
    vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3 = 
        ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
         | ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
            | ((0x6013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
               | ((0x3003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                  | ((0x2003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                     | ((0x3013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                        | ((0x1bU == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                           | ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                              | ((0x4003U == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                 | ((3U == (0x707fU 
                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                    | ((0x4013U == 
                                        (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                       | ((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                          | ((0x5013U 
                                              == (0xfc00707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                             | ((0x1003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                | ((0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                   | ((0x101bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                      | ((0x4000501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                         | (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_363))))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_224 
        = ((0x4000003bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 0U : ((0x2033U == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 5U : ((0x4000503bU == (0xfe00707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 1U : ((0x503bU == (0xfe00707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 1U : ((0x4033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 0U
                                                : (
                                                   (0x200703bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 1U
                                                     : 
                                                    ((0x2007033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x200503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2006033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x5033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 1U
                                                         : 
                                                        ((0x2005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x2004033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x40005033U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2000033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_209))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_283 
        = ((0x4033U == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 0x72U : ((0x200703bU == (0xfe00707fU 
                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                        ? 0xdU : ((0x1033U == (0xfe00707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                   ? 0x41U : ((0x2007033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                               ? 0xfU
                                               : ((0x200503bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                   ? 0x10U
                                                   : 
                                                  ((0x2006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 0x12U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 0x75U
                                                     : 
                                                    ((0x2005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0x13U
                                                      : 
                                                     ((0x2004033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0x43U
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 0x14U
                                                        : 
                                                       ((0x2000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 7U
                                                         : 
                                                        ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0x40U
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 0x1aU
                                                           : 
                                                          ((0x3023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 0x46U
                                                            : 
                                                           ((0x1023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 0x70U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_268))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_159 
        = ((0x4000503bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 5U : ((0x503bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 5U : ((0x4033U == (0xfe00707fU 
                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 5U : ((0x200703bU == 
                                       (0xfe00707fU 
                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 5U : ((0x1033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 5U
                                                : (
                                                   (0x2007033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 5U
                                                    : 
                                                   ((0x200503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 5U
                                                     : 
                                                    ((0x2006033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 5U
                                                      : 
                                                     ((0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 5U
                                                       : 
                                                      ((0x2005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x2004033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 5U
                                                         : 
                                                        ((0x40005033U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 5U
                                                          : 
                                                         ((0x2000033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 5U
                                                           : 
                                                          ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 3U
                                                            : 
                                                           ((0x37U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 3U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_144))))))))))))))));
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_6 = ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5)
                                                  ? 0U
                                                  : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state));
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_9 = ((3U 
                                                  == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                  ? (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                   ? 
                                                  (((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5) 
                                                    | ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
                                                       & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                                           ? 
                                                          (1U 
                                                           == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))
                                                           : 
                                                          ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                                           & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                                              & (1U 
                                                                 == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))))))
                                                    ? 0U
                                                    : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                   : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)));
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28 
        = (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25)));
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35 
        = (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31)));
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7 
        = (((QData)((IData)(((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1)));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_239 
        = ((0x101bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 1U : ((0x4000501bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 1U : ((0x501bU == (0xfc00707fU 
                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 1U : ((0x2013U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 5U : ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 4U
                                                : (
                                                   (0x3bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x40000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x33U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 1U
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x200003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x200403bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x200603bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_224))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_298 
        = ((0x6003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 0x11U : ((0x3bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                        ? 0x68U : ((0x40000033U == 
                                    (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                    ? 0x69U : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 0x40U
                                                : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 0x71U
                                                    : 
                                                   ((0x3033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 0x6aU
                                                     : 
                                                    ((0x103bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0x73U
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0x44U
                                                       : 
                                                      ((0x200003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 0x78U
                                                        : 
                                                       ((0x200403bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 0x79U
                                                         : 
                                                        ((0x200603bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0x7aU
                                                          : 
                                                         ((0x4000003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 1U
                                                           : 
                                                          ((0x2033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 2U
                                                            : 
                                                           ((0x4000503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 9U
                                                             : 
                                                            ((0x503bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                              ? 0xaU
                                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_283))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_174 
        = ((0x501bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 8U : ((0x2013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 8U : ((0x6003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 8U : ((0x3bU == (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 5U : ((0x40000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 5U
                                                : (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 5U
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 5U
                                                     : 
                                                    ((0x3033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 5U
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 5U
                                                       : 
                                                      ((0x6033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x200003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 5U
                                                         : 
                                                        ((0x200403bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 5U
                                                          : 
                                                         ((0x200603bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 5U
                                                           : 
                                                          ((0x4000003bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 5U
                                                            : 
                                                           ((0x2033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 5U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_159))))))))))))))));
    __Vtemp_h052dcc23__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1);
    __Vtemp_h052dcc23__0[1U] = (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                        >> 0x20U));
    __Vtemp_h052dcc23__0[2U] = 0U;
    VL_SHIFTL_WWI(95,95,5, __Vtemp_h0fbea1b2__0, __Vtemp_h052dcc23__0, 
                  (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    __Vtemp_h0533a6ed__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1);
    __Vtemp_h0533a6ed__0[1U] = (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                        >> 0x20U));
    __Vtemp_h0533a6ed__0[2U] = 0U;
    __Vtemp_h0533a6ed__0[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h97f32683__0, __Vtemp_h0533a6ed__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    __Vtemp_h8004274a__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1);
    __Vtemp_h8004274a__0[1U] = 0U;
    __Vtemp_h8004274a__0[2U] = 0U;
    VL_SHIFTL_WWI(95,95,6, __Vtemp_h29cbf8c2__0, __Vtemp_h8004274a__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    __Vtemp_hb23900ce__0[0U] = (IData)(((0x75U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                         ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                         : ((5U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                             ? (((QData)((IData)(
                                                                 ((__Vtemp_h29cbf8c2__0[0U] 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0x1fU 
                                                                    >= 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                                    ? 
                                                                   ((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1) 
                                                                    << 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                                    : 0U))))
                                             : ((6U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28
                                                 : 
                                                ((8U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35
                                                  : 
                                                 ((9U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    VL_SHIFTRS_QQI(64,64,6, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                     : 0ULL))))))));
    __Vtemp_hb23900ce__0[1U] = (IData)((((0x75U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                          ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                             >> (0x3fU 
                                                 & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                          : ((5U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                              ? (((QData)((IData)(
                                                                  ((__Vtemp_h29cbf8c2__0[0U] 
                                                                    >> 0x1fU)
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0x1fU 
                                                                     >= 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                                     ? 
                                                                    ((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1) 
                                                                     << 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                                     : 0U))))
                                              : ((6U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 
                                                     VL_SHIFTRS_QQI(64,64,6, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                      : 0ULL))))))) 
                                        >> 0x20U));
    if ((0x73U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[0U] 
            = (IData)((((QData)((IData)(((__Vtemp_h0fbea1b2__0[0U] 
                                          >> 0x1fU)
                                          ? 0xffffffffU
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1) 
                                          << (0x1fU 
                                              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))))));
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[1U] 
            = (IData)(((((QData)((IData)(((__Vtemp_h0fbea1b2__0[0U] 
                                           >> 0x1fU)
                                           ? 0xffffffffU
                                           : 0U))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1) 
                                                      << 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))))) 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[3U] = 0U;
    } else if ((0x41U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[0U] 
            = __Vtemp_h97f32683__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[1U] 
            = __Vtemp_h97f32683__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[2U] 
            = __Vtemp_h97f32683__0[2U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[3U] 
            = (0x7fffffffU & __Vtemp_h97f32683__0[3U]);
    } else {
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[0U] 
            = __Vtemp_hb23900ce__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[1U] 
            = __Vtemp_hb23900ce__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[3U] = 0U;
    }
    vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx 
        = ((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
            ? 0U : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                     ? 0U : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                              ? 0U : ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? 0U : ((0x69U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? 0U
                                                : (
                                                   (0x71U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 0U
                                                    : 
                                                   ((0x72U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 0U
                                                     : 
                                                    ((0x6dU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 0U
                                                      : 
                                                     ((0x78U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? 0U
                                                       : 
                                                      ((0x79U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? 0U
                                                        : 
                                                       ((0x7aU 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? 0U
                                                         : 
                                                        ((0xdU 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? 0U
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? 0U
                                                            : 
                                                           ((0xfU 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? 0U
                                                             : 
                                                            ((0x12U 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? 0U
                                                              : 
                                                             ((0x10U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? 0U
                                                               : 
                                                              ((0x13U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? 0U
                                                                : 
                                                               ((0x43U 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? 0U
                                                                 : 
                                                                ((0x15U 
                                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                  ? (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_csr_csr_idx)
                                                                  : 
                                                                 ((0x16U 
                                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                   ? (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_csr_csr_idx)
                                                                   : 0U)))))))))))))))))))));
    vlSelf->CoreTop__DOT__EX__DOT__is_mul = (((0x78U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                              | (7U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0));
    vlSelf->CoreTop__DOT__EX__DOT__branch_flag = ((0x6bU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                   == vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                   : 
                                                  ((0x6cU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                    != vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                    : 
                                                   ((0x76U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    VL_GTES_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT__src1, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                     : 
                                                    ((0x7bU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_4)
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T)
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                       & (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                          >= vlSelf->CoreTop__DOT__EX__DOT__src2)))))));
    vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2 = (
                                                   (0x79U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                   | (0x10U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)));
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0 
        = ((0x7aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
           | (0xdU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_flow_div_signed 
        = (((0x43U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
            | (0x79U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
           | ((0x12U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
              | (0x7aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_313 
        = ((0x2003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 0x47U : ((0x3013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                        ? 0x6aU : ((0x1bU == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                    ? 0x6dU : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 0x6eU
                                                : (
                                                   (0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 0x6fU
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 0xeU
                                                     : 
                                                    ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0x72U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0x71U
                                                       : 
                                                      ((0x5013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 0x75U
                                                        : 
                                                       ((0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 3U
                                                         : 
                                                        ((0x5003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 4U
                                                          : 
                                                         ((0x101bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 5U
                                                           : 
                                                          ((0x4000501bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 6U
                                                            : 
                                                           ((0x501bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 8U
                                                             : 
                                                            ((0x2013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                              ? 2U
                                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_298))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_189 
        = ((0x6013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 8U : ((0x3003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 8U : ((0x2003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 8U : ((0x3013U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 8U : ((0x1bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 8U
                                                : (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 8U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 8U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 8U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 8U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 8U
                                                        : 
                                                       ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 8U
                                                         : 
                                                        ((0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 8U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 8U
                                                           : 
                                                          ((0x101bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 8U
                                                            : 
                                                           ((0x4000501bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 8U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_174))))))))))))))));
    vlSelf->CoreTop__DOT__EX_io_csr_rd_io_rd_data = 
        ((0x300U == (IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx))
          ? vlSelf->CoreTop__DOT__CSR__DOT__mstatus
          : ((0x305U == (IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx))
              ? vlSelf->CoreTop__DOT__CSR__DOT__mtvec
              : ((0x341U == (IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx))
                  ? vlSelf->CoreTop__DOT__CSR__DOT__mepc
                  : ((0x342U == (IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx))
                      ? vlSelf->CoreTop__DOT__CSR__DOT__mcause
                      : ((0x304U == (IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx))
                          ? vlSelf->CoreTop__DOT__CSR__DOT__mie
                          : ((0x344U == (IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx))
                              ? vlSelf->CoreTop__DOT__CSR__DOT__mip
                              : 0ULL))))));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid 
        = ((0x44U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count)) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul));
    if (vlSelf->CoreTop__DOT__EX__DOT__branch_flag) {
        vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11 = 
            ((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
              ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
              : ((0x6cU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                  ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                  : ((0x76U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                      ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                      : ((0x7bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                          ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                          : ((0xbU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                              ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                              : ((0xcU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                  ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                  : 0ULL))))));
        vlSelf->CoreTop__DOT__EX__DOT__is_branch = vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11 = 
            (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC);
        vlSelf->CoreTop__DOT__EX__DOT__is_branch = 0U;
    }
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_valid 
        = ((4U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state)) 
           & ((((((0x43U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                  | (0x13U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                 | (IData)(vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2)) 
                | ((0x12U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                   | (0xfU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)))) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0)) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0)));
    vlSelf->CoreTop__DOT__EX__DOT__is_divw = ((IData)(vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2) 
                                              | (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0));
    if ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))) {
        vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2 = 0x40U;
        vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0 = 8U;
    } else if ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))) {
        vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2 = 0x41U;
        vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0 = 8U;
    } else {
        vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2 
            = ((0x6013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                ? 0x44U : ((0x3003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                            ? 0x45U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_313)));
        vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0 
            = vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_189;
    }
    vlSelf->CoreTop__DOT__IF_io_branch_io_dnpc = ((0x19U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                                   : 
                                                  ((0x48U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (0xfffffffffffffffeULL 
                                                    & vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1)
                                                    : 
                                                   ((0x6bU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11
                                                     : 
                                                    ((0x6cU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11
                                                      : 
                                                     ((0x76U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11
                                                        : 
                                                       ((0x7bU 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11
                                                          : 
                                                         (4ULL 
                                                          + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)))))))));
    vlSelf->CoreTop__DOT__IF_io_branch_io_is_branch 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_branch) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h37196788__0));
    vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_2 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_branch) 
           | (IData)(vlSelf->CoreTop__DOT__EX__DOT__is_jump));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__NewReq 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state)) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_valid));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___GEN_20 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__NewReq)
                                           ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value)
                                           : ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))
                                               ? ((0x3fU 
                                                   <= (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__cntShift))
                                                   ? 0x3fU
                                                   : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__cntShift))
                                               : (0x3fU 
                                                  & ((2U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))
                                                      ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value)
                                                      : 
                                                     ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value) 
                                                      + 
                                                      (3U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))))))));
    if (vlSelf->CoreTop__DOT__EX__DOT__is_divw) {
        if (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_flow_div_signed) {
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src2 
                = (((QData)((IData)(((1U & (IData)(
                                                   (vlSelf->CoreTop__DOT__EX__DOT__src2 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1 
                = (((QData)((IData)(((1U & (IData)(
                                                   (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1)));
        } else {
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src2 
                = (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2));
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1 
                = (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1));
        }
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src2 
            = vlSelf->CoreTop__DOT__EX__DOT__src2;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1 
            = vlSelf->CoreTop__DOT__EX__DOT__src1;
    }
    vlSelf->CoreTop__DOT__ID__DOT__imm = ((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                               ? ((
                                                   ((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                     >> 0x1fU)
                                                     ? 0xfffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                     >> 0x14U))))
                                               : 0ULL) 
                                             | ((7U 
                                                 == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 
                                                ((((0x80000U 
                                                    & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)
                                                    ? 0xfffffffffffULL
                                                    : 0ULL) 
                                                  << 0x14U) 
                                                 | (QData)((IData)(
                                                                   ((0xff000U 
                                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                           >> 9U)) 
                                                                       | (0x7feU 
                                                                          & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                             >> 0x14U)))))))
                                                 : 0ULL)) 
                                            | ((3U 
                                                == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                ? (
                                                   ((QData)((IData)(
                                                                    ((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                      >> 0x1fU)
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))))
                                                : 0ULL)) 
                                           | ((9U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                               ? ((
                                                   ((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                     >> 0x1fU)
                                                     ? 0xfffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                           >> 7U))))))
                                               : 0ULL)) 
                                          | ((0xbU 
                                              == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                              ? (((
                                                   (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                    >> 0x1fU)
                                                    ? 0x7ffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xdU) 
                                                 | (QData)((IData)(
                                                                   ((0x1000U 
                                                                     & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                        >> 0x13U)) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                           << 4U)) 
                                                                       | ((0x7e0U 
                                                                           & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                              >> 0x14U)) 
                                                                          | (0x1eU 
                                                                             & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                                >> 7U))))))))
                                              : 0ULL));
    vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_4 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_2) 
           & ((IData)(vlSelf->CoreTop__DOT__valid) 
              & (IData)(vlSelf->CoreTop__DOT__EX_io_out_ready)));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bSign 
        = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src2 
                    >> 0x3fU)) & (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_flow_div_signed));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign 
        = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1 
                    >> 0x3fU)) & (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_flow_div_signed));
    vlSelf->CoreTop__DOT__IF_io_flush = ((0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                         & (IData)(vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_4));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign)
            ? (- (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[4U])) 
                   << 0x3fU) | (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U])) 
                                 << 0x1fU) | ((QData)((IData)(
                                                              vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U])) 
                                              >> 1U))))
            : (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[4U])) 
                << 0x3fU) | (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U])) 
                              << 0x1fU) | ((QData)((IData)(
                                                           vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U])) 
                                           >> 1U))));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bSign))
            ? (- (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U]))))
            : (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U]))));
    vlSelf->CoreTop__DOT__IF_io_out_bits_Inst = ((IData)(vlSelf->CoreTop__DOT__IF_io_flush)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                              >> 2U)))
                                                   ? (IData)(
                                                             (vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata 
                                                              >> 0x20U))
                                                   : (IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata)));
    vlSelf->CoreTop__DOT___T_3 = ((IData)(vlSelf->CoreTop__DOT__IF_io_flush) 
                                  | ((IData)(vlSelf->CoreTop__DOT__IF_io_excp_flush) 
                                     | ((IData)(vlSelf->CoreTop__DOT__IF_io_mret_flush) 
                                        | (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall))));
    vlSelf->CoreTop__DOT__IF_io_ex_stall = ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_flush)) 
                                            & (IData)(vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_4));
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_30 
        = (((QData)((IData)(((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder)));
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_26 
        = (((QData)((IData)(((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient)));
    vlSelf->CoreTop__DOT___T_5 = ((IData)(vlSelf->CoreTop__DOT___T_3) 
                                  | ((IData)(vlSelf->CoreTop__DOT__IF_io_ex_stall) 
                                     | (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall)));
    vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid 
        = (1U & ((~ (IData)(vlSelf->CoreTop__DOT__full)) 
                 & ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump)) 
                    & ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_branch_io_is_branch)) 
                       & ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall)) 
                          & ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_ex_stall)) 
                             & ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_excp_flush)) 
                                & (~ (IData)(vlSelf->CoreTop__DOT__IF_io_mret_flush)))))))));
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_hd56c994a__0 
        = (((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
            & (IData)(vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_2)) 
           | (IData)(vlSelf->CoreTop__DOT__IF_io_ex_stall));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_47 = ((0x72U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                  ^ vlSelf->CoreTop__DOT__EX__DOT__src2)
                                               : ((0x6dU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                                   : 
                                                  ((0x78U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
                                                                       >> 0x1fU)
                                                                       ? 0xffffffffU
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))
                                                    : 
                                                   ((0x79U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_26
                                                     : 
                                                    ((0x7aU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_30
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_30
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                                                                >> 0x1fU)))
                                                                           ? 0xffffffffU
                                                                           : 0U))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10)))
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U])))
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder
                                                          : 
                                                         ((0x12U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder
                                                           : 
                                                          ((0x10U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_26
                                                            : 
                                                           ((0x13U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient
                                                             : 
                                                            ((0x43U 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient
                                                              : 
                                                             ((0x15U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? vlSelf->CoreTop__DOT__EX_io_csr_rd_io_rd_data
                                                               : 
                                                              ((0x16U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? vlSelf->CoreTop__DOT__EX_io_csr_rd_io_rd_data
                                                                : 0ULL)))))))))))))));
    vlSelf->CoreTop__DOT___T_9 = (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid)) 
                                   & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_valid)) 
                                      & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_hd56c994a__0)) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid)))) 
                                  & (IData)(vlSelf->CoreTop__DOT__EX_io_out_ready));
    vlSelf->CoreTop__DOT___T = (((~ ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid) 
                                       | (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_valid)) 
                                      & (IData)(vlSelf->CoreTop__DOT__valid)) 
                                     | (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_hd56c994a__0))) 
                                 & (IData)(vlSelf->CoreTop__DOT__EX_io_out_ready)) 
                                & ((~ (((IData)(vlSelf->CoreTop__DOT__valid) 
                                        & ((4U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType)) 
                                           & ((((0xeU 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                | (0x6fU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                               | ((0x45U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                  | ((3U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                     | (4U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))))) 
                                              | ((0x47U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                 | (0x11U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)))))) 
                                       & ((IData)(vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen) 
                                          & ((IData)(vlSelf->__VdfgTmp_ha116befc__0) 
                                             | (IData)(vlSelf->__VdfgTmp_ha248cb35__0))))) 
                                   & (~ (IData)(vlSelf->CoreTop__DOT__empty))));
    vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
            ? ((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                    ? vlSelf->CoreTop__DOT__EX__DOT__src2
                    : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                        ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                        : ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                            ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                               | vlSelf->CoreTop__DOT__EX__DOT__src2)
                            : ((0x69U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                : ((0x71U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                       & vlSelf->CoreTop__DOT__EX__DOT__src2)
                                    : vlSelf->CoreTop__DOT__EX__DOT___GEN_47))))))
            : ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                ? ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                    ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                    : 0ULL) : ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? 0ULL : ((1U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                           ? (((QData)((IData)(
                                                               ((0x6eU 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? (IData)(
                                                                           (VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))) 
                                                                            >> 0x20U))
                                                                 : 
                                                                vlSelf->CoreTop__DOT__EX__DOT___GEN_76[1U]))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0x6eU 
                                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                  ? (IData)(
                                                                            VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))))
                                                                  : 
                                                                 vlSelf->CoreTop__DOT__EX__DOT___GEN_76[0U]))))
                                           : ((5U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                               ? ((0x6aU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  ((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T)
                                                    ? 1ULL
                                                    : 0ULL)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   ((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_4)
                                                     ? 1ULL
                                                     : 0ULL)
                                                    : 0ULL))
                                               : 0ULL)))));
    vlSelf->CoreTop__DOT___GEN_221 = ((IData)(vlSelf->CoreTop__DOT___T_9) 
                                      | ((~ (IData)(vlSelf->CoreTop__DOT___T_15)) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid_1)));
    vlSelf->CoreTop__DOT___GEN_197 = ((IData)(vlSelf->CoreTop__DOT___T) 
                                      | ((~ (IData)(vlSelf->CoreTop__DOT___T_9)) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid)));
}
