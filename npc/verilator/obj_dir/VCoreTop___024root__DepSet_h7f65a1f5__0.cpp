// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCoreTop__Syms.h"
#include "VCoreTop___024root.h"

void VCoreTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void VCoreTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__0(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->clock))) {
        vlSelf->CoreTop__DOT__mem_rdata = 0ULL;
    } else if ((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))) {
        if (((0x45U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
             & ((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                | ((0x70U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                   | ((0x47U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                      & ((0x11U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                         & ((0x6fU != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                            & ((0xeU != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                               & ((0x74U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                  | (0x77U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))))))))))) {
            VCoreTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                       ((0x45U 
                                                                         == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                                         ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                                         : vlSelf->CoreTop__DOT__MEM__DOT___GEN_16), 
                                                                       ((0x46U 
                                                                         == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                                         ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                                                         : 
                                                                        ((0x70U 
                                                                          == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                                          ? 
                                                                         ((0U 
                                                                           == 
                                                                           (3U 
                                                                            & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                                >> 1U))))
                                                                           ? (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                                                           : 
                                                                          ((1U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                                >> 1U))))
                                                                            ? 
                                                                           ((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                                            << 0x10U)
                                                                            : 
                                                                           ((2U 
                                                                             == 
                                                                             (3U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                                >> 1U))))
                                                                             ? 
                                                                            ((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                                             << 0x20U)
                                                                             : 
                                                                            ((3U 
                                                                              == 
                                                                              (3U 
                                                                               & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                                >> 1U))))
                                                                              ? 
                                                                             ((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                                              << 0x30U)
                                                                              : 0ULL))))
                                                                          : 
                                                                         ((0x74U 
                                                                           == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                                           ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                                                           : 
                                                                          ((0x77U 
                                                                            == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                                            ? 
                                                                           ((1U 
                                                                             & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                                >> 2U)))
                                                                             ? 
                                                                            ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                                             << 0x20U)
                                                                             : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                                                            : 0ULL)))), 
                                                                       ((0x46U 
                                                                         == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                                         ? 0xffU
                                                                         : (IData)(vlSelf->CoreTop__DOT__MEM__DOT___GEN_32)));
            vlSelf->CoreTop__DOT__mem_rdata = 0ULL;
        } else {
            VCoreTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                      ((0x45U 
                                                                        == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                                        ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                                        : vlSelf->CoreTop__DOT__MEM__DOT___GEN_16), vlSelf->__Vtask_pmem_read__4__rdata);
            vlSelf->CoreTop__DOT__mem_rdata = vlSelf->__Vtask_pmem_read__4__rdata;
        }
    } else {
        vlSelf->CoreTop__DOT__mem_rdata = 0ULL;
    }
    VL_WRITEF("----------dfas---%x\n",64,vlSelf->CoreTop__DOT__IF__DOT__temp);
    if ((1U & (~ ((IData)(vlSelf->reset) | (IData)(vlSelf->clock))))) {
        if (VL_UNLIKELY((0ULL == vlSelf->CoreTop__DOT__IF__DOT__temp))) {
            VL_FINISH_MT("vsrc/ifm.v", 17, "");
        }
        VCoreTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->CoreTop__DOT__IF__DOT__temp, vlSelf->__Vtask_pmem_read__0__rdata);
        vlSelf->CoreTop__DOT__IFM__DOT__rdata = vlSelf->__Vtask_pmem_read__0__rdata;
    }
    vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27 
        = (0xffU & ((0U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                     ? (IData)(vlSelf->CoreTop__DOT__mem_rdata)
                     : ((1U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                         ? (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                    >> 8U)) : ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                ? (IData)(
                                                          (vlSelf->CoreTop__DOT__mem_rdata 
                                                           >> 0x10U))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                    ? (IData)(
                                                              (vlSelf->CoreTop__DOT__mem_rdata 
                                                               >> 0x18U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                     ? (IData)(
                                                               (vlSelf->CoreTop__DOT__mem_rdata 
                                                                >> 0x20U))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                      ? (IData)(
                                                                (vlSelf->CoreTop__DOT__mem_rdata 
                                                                 >> 0x28U))
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                       ? (IData)(
                                                                 (vlSelf->CoreTop__DOT__mem_rdata 
                                                                  >> 0x30U))
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                        ? (IData)(
                                                                  (vlSelf->CoreTop__DOT__mem_rdata 
                                                                   >> 0x38U))
                                                        : 0U)))))))));
    vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44 
        = (0xffffU & ((0U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                            >> 1U))))
                       ? (IData)(vlSelf->CoreTop__DOT__mem_rdata)
                       : ((1U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                >> 1U))))
                           ? (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                      >> 0x10U)) : 
                          ((2U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 1U))))
                            ? (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                       >> 0x20U)) : 
                           ((3U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                  >> 1U))))
                             ? (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                        >> 0x30U)) : 0U)))));
}
