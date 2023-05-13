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
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h236fbee0__0;
    VlWide<3>/*95:0*/ __Vtemp_h4619e6d2__0;
    VlWide<3>/*95:0*/ __Vtemp_h236fbee0__1;
    VlWide<5>/*159:0*/ __Vtemp_h5943c197__0;
    VlWide<5>/*159:0*/ __Vtemp_h97a97068__0;
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp_h236fbee0__0, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S);
    VL_EXTEND_WQ(65,64, __Vtemp_h4619e6d2__0, vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6);
    VL_EXTEND_WQ(65,64, __Vtemp_h236fbee0__1, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S);
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] 
            = __Vtemp_h236fbee0__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] 
            = __Vtemp_h236fbee0__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] 
            = __Vtemp_h236fbee0__0[2U];
    } else if ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        if ((0x3fU != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))) {
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] 
                = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6) 
                   << 1U);
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] 
                = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6) 
                    >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] 
                = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6 
                            >> 0x20U)) >> 0x1fU);
        } else {
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] 
                = __Vtemp_h4619e6d2__0[0U];
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] 
                = __Vtemp_h4619e6d2__0[1U];
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] 
                = __Vtemp_h4619e6d2__0[2U];
        }
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] 
            = __Vtemp_h236fbee0__1[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] 
            = __Vtemp_h236fbee0__1[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] 
            = __Vtemp_h236fbee0__1[2U];
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->clock))) {
        vlSelf->CoreTop__DOT__mem_rdata = 0ULL;
    } else if (((2U == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state)) 
                | (3U == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state)))) {
        if ((3U == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state))) {
            VCoreTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                       ((3U 
                                                                         == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state))
                                                                         ? vlSelf->CoreTop__DOT__DCACHE__DOT__mem_write_addr_reg
                                                                         : vlSelf->CoreTop__DOT__DCACHE__DOT__mem_addr_reg), 
                                                                       (((QData)((IData)(
                                                                                vlSelf->CoreTop__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                                                                         << 0x20U) 
                                                                        | (QData)((IData)(
                                                                                vlSelf->CoreTop__DOT__DCACHE__DOT__mem_write_data_reg[0U]))), 0xffU);
            vlSelf->CoreTop__DOT__mem_rdata = 0ULL;
        } else {
            VCoreTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                      ((3U 
                                                                        == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__state))
                                                                        ? vlSelf->CoreTop__DOT__DCACHE__DOT__mem_write_addr_reg
                                                                        : vlSelf->CoreTop__DOT__DCACHE__DOT__mem_addr_reg), vlSelf->__Vtask_pmem_read__4__rdata);
            vlSelf->CoreTop__DOT__mem_rdata = vlSelf->__Vtask_pmem_read__4__rdata;
        }
    } else {
        vlSelf->CoreTop__DOT__mem_rdata = 0ULL;
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->clock))) {
        vlSelf->CoreTop__DOT__IFMEM_rdata = 0ULL;
    } else if ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))) {
        VCoreTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg, vlSelf->__Vtask_pmem_read__5__rdata);
        vlSelf->CoreTop__DOT__IFMEM_rdata = vlSelf->__Vtask_pmem_read__5__rdata;
    } else {
        vlSelf->CoreTop__DOT__IFMEM_rdata = 0ULL;
    }
    VL_EXTEND_WQ(129,64, __Vtemp_h5943c197__0, (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed) 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 
                                                            >> 0x3fU)))
                                                 ? 
                                                (- vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1)
                                                 : vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1));
    VL_EXTEND_WW(129,128, __Vtemp_h97a97068__0, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend);
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[3U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[4U] = 0U;
    } else if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U] 
            = __Vtemp_h5943c197__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U] 
            = __Vtemp_h5943c197__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[2U] 
            = __Vtemp_h5943c197__0[2U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[3U] 
            = __Vtemp_h5943c197__0[3U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[4U] 
            = __Vtemp_h5943c197__0[4U];
    } else if ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U] 
            = (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                 ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U]
                 : (IData)((0x7fffffffffffffffULL & 
                            (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U])))))) 
               << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U] 
            = ((((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                  ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U]
                  : (IData)((0x7fffffffffffffffULL 
                             & (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U])))))) 
                >> 0x1fU) | (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                               ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U]
                               : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[0U] 
                                   << 0x1fU) | (IData)(
                                                       ((0x7fffffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U])))) 
                                                        >> 0x20U)))) 
                             << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[2U] 
            = ((((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                  ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U]
                  : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[0U] 
                      << 0x1fU) | (IData)(((0x7fffffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U])))) 
                                           >> 0x20U)))) 
                >> 0x1fU) | (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                               ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]
                               : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[0U] 
                                   >> 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
                                             << 0x1fU))) 
                             << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[3U] 
            = ((((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                  ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]
                  : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[0U] 
                      >> 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
                                << 0x1fU))) >> 0x1fU) 
               | (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                    ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U]
                    : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
                        >> 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U] 
                                  << 0x1fU))) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[4U] 
            = (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                 ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U]
                 : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
                     >> 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U] 
                               << 0x1fU))) >> 0x1fU);
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U] 
            = __Vtemp_h97a97068__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U] 
            = __Vtemp_h97a97068__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[2U] 
            = __Vtemp_h97a97068__0[2U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[3U] 
            = __Vtemp_h97a97068__0[3U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[4U] 
            = __Vtemp_h97a97068__0[4U];
    }
    if ((8U == (IData)(vlSelf->CoreTop__DOT__DCACHE__DOT__count))) {
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[0U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0U];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[1U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[1U];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[2U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[3U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[4U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[5U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[6U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[7U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[8U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[9U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[0xaU] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[0xbU] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[0xcU] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[0xdU] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[0xeU] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[0xfU] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0xfU];
    } else {
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[0U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[1U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[2U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[3U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[4U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[5U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[6U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[7U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[8U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[9U] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[0xaU] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[0xbU] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[0xcU] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[0xdU] 
            = vlSelf->CoreTop__DOT__DCACHE__DOT__data_line_reg[0xfU];
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[0xeU] 
            = (IData)(vlSelf->CoreTop__DOT__mem_rdata);
        vlSelf->CoreTop__DOT__DCACHE__DOT___GEN_39[0xfU] 
            = (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                       >> 0x20U));
    }
    if ((8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))) {
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU];
    } else {
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[0xeU] 
            = (IData)(vlSelf->CoreTop__DOT__IFMEM_rdata);
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_26[0xfU] 
            = (IData)((vlSelf->CoreTop__DOT__IFMEM_rdata 
                       >> 0x20U));
    }
}
