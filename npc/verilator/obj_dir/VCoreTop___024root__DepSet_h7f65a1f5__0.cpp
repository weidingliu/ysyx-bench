// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCoreTop__Syms.h"
#include "VCoreTop___024root.h"

void VCoreTop___024unit____Vdpiimwrap_set_pc__Vdpioc2_TOP____024unit(const VlUnpacked<IData/*31:0*/, 7> &inst);
void VCoreTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__0(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__CoreTop__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__CoreTop__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__CoreTop__DOT__rf__v0;
    QData/*63:0*/ __Vdly__CoreTop__DOT__IF__DOT__temp;
    VlWide<3>/*65:0*/ __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier;
    VlWide<3>/*95:0*/ __Vtemp_h1dd46a16__0;
    VlWide<3>/*95:0*/ __Vtemp_hde0b1c98__0;
    VlWide<3>/*95:0*/ __Vtemp_h6220044e__0;
    VlWide<3>/*95:0*/ __Vtemp_h3968d463__0;
    VlWide<3>/*95:0*/ __Vtemp_h55f836b3__0;
    VlWide<3>/*95:0*/ __Vtemp_hce5104d0__0;
    // Body
    __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U];
    __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U];
    __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U];
    __Vdly__CoreTop__DOT__IF__DOT__temp = vlSelf->CoreTop__DOT__IF__DOT__temp;
    __Vdlyvset__CoreTop__DOT__rf__v0 = 0U;
    vlSelf->CoreTop__DOT__valid_3 = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG = vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_signal_inst_valid;
    vlSelf->CoreTop__DOT__valid_1 = ((~ (IData)(vlSelf->reset)) 
                                     & ((~ (IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)) 
                                        & (IData)(vlSelf->CoreTop__DOT__EX_io_in_ready)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[0U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___GEN_8[0U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[1U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___GEN_8[1U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[2U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___GEN_8[2U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[3U] 
        = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___GEN_8[3U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p[4U] 
        = (0xfU & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___GEN_8[4U]);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S = (((QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_14[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_14[0U])));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U] 
        = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U];
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U] 
        = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U];
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U] 
        = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U];
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] 
        = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[3U];
    vlSelf->CoreTop__DOT__DIP_io_inst_REG = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst;
    vlSelf->CoreTop__DOT__DIP_io_dnpc_REG = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc;
    vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1 = vlSelf->CoreTop__DOT__DIP_io_is_break_REG;
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG;
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG;
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG;
    vlSelf->CoreTop__DOT__DIP_io_pc_REG = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC;
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG;
    if (vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen) {
        __Vdlyvval__CoreTop__DOT__rf__v0 = ((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                             ? 0ULL
                                             : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData);
        __Vdlyvset__CoreTop__DOT__rf__v0 = 1U;
        __Vdlyvdim0__CoreTop__DOT__rf__v0 = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest;
    }
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen 
        = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen;
    if (vlSelf->CoreTop__DOT__EX_io_out_valid) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData 
            = vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2 
            = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2
                : vlSelf->CoreTop__DOT__EX__DOT___GEN_3);
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1 
            = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1
                : vlSelf->CoreTop__DOT__EX__DOT___GEN_1);
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid 
            = vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid;
        vlSelf->CoreTop__DOT__valid_2 = (1U & (~ (IData)(vlSelf->reset)));
    } else {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid 
            = vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid;
        vlSelf->CoreTop__DOT__valid_2 = 0U;
    }
    vlSelf->CoreTop__DOT__DIP_io_is_skip_REG = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip;
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor = 0ULL;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state = 0U;
        __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] = 0U;
        __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] = 0U;
        __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] = 0U;
    } else {
        if ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count 
                = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___wrap_value_T_1;
        }
        if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor 
                = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed) 
                    & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2 
                               >> 0x3fU))) ? (- vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2)
                    : vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2);
        }
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid)
                ? ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))
                    ? 0U : (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T) 
                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__s))
                             ? 2U : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_2)))
                : 0U);
        if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
            VL_EXTEND_WQ(65,64, __Vtemp_h1dd46a16__0, 
                         ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                           ? vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3
                           : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3))));
            VL_EXTEND_WQ(66,64, __Vtemp_hde0b1c98__0, 
                         (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U])) 
                           << 0x3eU) | (((QData)((IData)(
                                                         vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                           >> 2U))));
            if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))) {
                __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] 
                    = (__Vtemp_h1dd46a16__0[0U] << 1U);
                __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] 
                    = ((__Vtemp_h1dd46a16__0[0U] >> 0x1fU) 
                       | (__Vtemp_h1dd46a16__0[1U] 
                          << 1U));
                __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] 
                    = ((__Vtemp_h1dd46a16__0[1U] >> 0x1fU) 
                       | (__Vtemp_h1dd46a16__0[2U] 
                          << 1U));
            } else {
                __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] 
                    = __Vtemp_hde0b1c98__0[0U];
                __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] 
                    = __Vtemp_hde0b1c98__0[1U];
                __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] 
                    = __Vtemp_hde0b1c98__0[2U];
            }
        }
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U] 
        = __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U] 
        = __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[1U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U] 
        = __Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[2U];
    if (vlSelf->CoreTop__DOT__EX_io_in_ready) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2 
            = (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                        >> 0x14U));
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1 
            = (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                        >> 0xfU));
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2 
            = ((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
                 & ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                    == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                 >> 0x14U)))) & (0U 
                                                 != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest)))
                ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                : ((((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                     & ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                        == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                     >> 0x14U)))) & 
                    (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest)))
                    ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                    : ((((IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen) 
                         & ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                            == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0x14U)))) 
                        & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest)))
                        ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                        : ((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0x14U)))
                            ? 0ULL : vlSelf->CoreTop__DOT__rf
                           [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                      >> 0x14U))]))));
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1 
            = ((((IData)(vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen) 
                 & ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest) 
                    == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                 >> 0xfU)))) & (0U 
                                                != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest)))
                ? vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData
                : ((((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
                     & ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                        == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                     >> 0xfU)))) & 
                    (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest)))
                    ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
                    : ((((IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen) 
                         & ((IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest) 
                            == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                         >> 0xfU)))) 
                        & (0U != (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest)))
                        ? vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData
                        : ((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0xfU)))
                            ? 0ULL : vlSelf->CoreTop__DOT__rf
                           [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                      >> 0xfU))]))));
    }
    if (__Vdlyvset__CoreTop__DOT__rf__v0) {
        vlSelf->CoreTop__DOT__rf[__Vdlyvdim0__CoreTop__DOT__rf__v0] 
            = __Vdlyvval__CoreTop__DOT__rf__v0;
    }
    vlSelf->CoreTop__DOT__DIP__DOT__IN[3U] = vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG;
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___wrap_value_T_1 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T = (1U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))
            ? 1U : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__s = ((1U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                                                  & (0x3fU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)));
    __Vtemp_h3968d463__0[0U] = ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U] 
                                 << 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U] 
                                           >> 0x1fU));
    __Vtemp_h3968d463__0[1U] = ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] 
                                 << 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U] 
                                           >> 0x1fU));
    __Vtemp_h3968d463__0[2U] = (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] 
                                >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp_h55f836b3__0, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor);
    VL_SUB_W(3, __Vtemp_hce5104d0__0, __Vtemp_h3968d463__0, __Vtemp_h55f836b3__0);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[0U] 
        = __Vtemp_hce5104d0__0[0U];
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
        = __Vtemp_hce5104d0__0[1U];
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U] 
        = (1U & __Vtemp_hce5104d0__0[2U]);
    vlSelf->CoreTop__DOT__DIP__DOT__IN[0U] = vlSelf->CoreTop__DOT__DIP_io_inst_REG;
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst 
        = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst;
    vlSelf->CoreTop__DOT__DIP__DOT__IN[4U] = (IData)(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG);
    vlSelf->CoreTop__DOT__DIP__DOT__IN[5U] = (IData)(
                                                     (vlSelf->CoreTop__DOT__DIP_io_dnpc_REG 
                                                      >> 0x20U));
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc 
        = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc;
    vlSelf->CoreTop__DOT__DIP_io_is_break_REG = ((0x42U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                 & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1U] 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1;
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG 
        = vlSelf->CoreTop__DOT__EX__DOT__mcause;
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2U] 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1;
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG 
        = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3U] 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1;
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG 
        = vlSelf->CoreTop__DOT__EX__DOT__mtvec;
    vlSelf->CoreTop__DOT__DIP__DOT__IN[1U] = (IData)(vlSelf->CoreTop__DOT__DIP_io_pc_REG);
    vlSelf->CoreTop__DOT__DIP__DOT__IN[2U] = (IData)(
                                                     (vlSelf->CoreTop__DOT__DIP_io_pc_REG 
                                                      >> 0x20U));
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC 
        = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC;
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0U] 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1;
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG 
        = vlSelf->CoreTop__DOT__EX__DOT__mepc;
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
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData 
        = vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData;
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest 
        = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest;
    vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_signal_inst_valid 
        = ((IData)(vlSelf->CoreTop__DOT__valid_3) & (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid 
        = ((IData)(vlSelf->CoreTop__DOT__valid_2) & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
    vlSelf->CoreTop__DOT__DIP__DOT__IN[6U] = vlSelf->CoreTop__DOT__DIP_io_is_skip_REG;
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip 
        = (((0xa0000048ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
            | (0xa00003f8ULL == vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)) 
           | ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp) 
              & (0xa1200000ULL >= vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)));
    vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1 
        = (vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1 
           + vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6 
        = ((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
            ? (0xfffffffffffffffeULL & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)
            : (1ULL | (0xfffffffffffffffeULL & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)));
    vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen 
        = ((IData)(vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_signal_inst_valid) 
           & (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
    if (vlSelf->CoreTop__DOT__EX_io_out_valid) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen;
    }
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U] = 0U;
        __Vdly__CoreTop__DOT__IF__DOT__temp = 0x80000000ULL;
        vlSelf->CoreTop__DOT__EX__DOT__mip = 0ULL;
        vlSelf->CoreTop__DOT__EX__DOT__mie = 0ULL;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count = 0U;
    } else {
        if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
            if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))) {
                VL_EXTEND_WQ(66,64, __Vtemp_h6220044e__0, 
                             ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)
                               ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                               : (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T))));
                vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[0U] = 0U;
                vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[1U] = 0U;
                vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[2U] 
                    = (__Vtemp_h6220044e__0[0U] << 2U);
                vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[3U] 
                    = ((__Vtemp_h6220044e__0[0U] >> 0x1eU) 
                       | (__Vtemp_h6220044e__0[1U] 
                          << 2U));
                vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand[4U] 
                    = ((__Vtemp_h6220044e__0[1U] >> 0x1eU) 
                       | (__Vtemp_h6220044e__0[2U] 
                          << 2U));
            }
        }
        if (((IData)(vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump) 
             | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid)))) {
            __Vdly__CoreTop__DOT__IF__DOT__temp = (
                                                   (0x19U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                                    : vlSelf->CoreTop__DOT__EX__DOT___GEN_289);
        } else if (vlSelf->CoreTop__DOT__EX_io_in_ready) {
            __Vdly__CoreTop__DOT__IF__DOT__temp = vlSelf->CoreTop__DOT__IF__DOT___temp_T_2;
        }
        if ((0x40U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            if ((0x1aU != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                if ((0x68U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                    vlSelf->CoreTop__DOT__EX__DOT__mip 
                        = vlSelf->CoreTop__DOT__EX__DOT___GEN_172;
                    vlSelf->CoreTop__DOT__EX__DOT__mie 
                        = vlSelf->CoreTop__DOT__EX__DOT___GEN_171;
                }
            }
        }
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) 
                & (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_out_valid)))
                ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___count_T_5)
                : 0U);
    }
    if (vlSelf->CoreTop__DOT__EX_io_in_ready) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType 
            = ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                ? 0U : ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                         ? 1U : ((0x6013U == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                  ? 0U : ((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                           ? 4U : (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 4U
                                                    : 
                                                   ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 5U
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x40005013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 1U
                                                       : 
                                                      ((0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 4U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 4U
                                                         : 
                                                        ((0x4013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x7013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x5013U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 1U
                                                            : 
                                                           ((0x1003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 4U
                                                             : 
                                                            ((0x5003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                              ? 4U
                                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_239))))))))))))))));
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type 
            = (((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
               | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)));
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm 
            = ((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                    ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                          >> 0x1fU) ? 0xfffffffffffffULL
                          : 0ULL) << 0xcU) | (QData)((IData)(
                                                             (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                              >> 0x14U))))
                    : 0ULL) | ((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                ? ((((0x80000U & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                      ? 0xfffffffffffULL
                                      : 0ULL) << 0x14U) 
                                   | (QData)((IData)(
                                                     ((0xff000U 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst) 
                                                      | ((0x800U 
                                                          & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                               >> 0x14U)))))))
                                : 0ULL)) | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                             ? (((QData)((IData)(
                                                                 ((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))))
                                             : 0ULL)) 
                | ((9U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                    ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                          >> 0x1fU) ? 0xfffffffffffffULL
                          : 0ULL) << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                    >> 7U))))))
                    : 0ULL)) | ((0xbU == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                 ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                       >> 0x1fU) ? 0x7ffffffffffffULL
                                       : 0ULL) << 0xdU) 
                                    | (QData)((IData)(
                                                      ((0x1000U 
                                                        & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                           >> 0x13U)) 
                                                       | ((0x800U 
                                                           & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                   >> 7U))))))))
                                 : 0ULL));
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type 
            = (((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                 ? 2U : 0U) | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                ? 2U : 0U));
    }
    if (VL_UNLIKELY(vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1)) {
        VL_FINISH_MT("vsrc/DIP_model.v", 95, "");
    }
    VCoreTop___024unit____Vdpiimwrap_set_pc__Vdpioc2_TOP____024unit(vlSelf->CoreTop__DOT__DIP__DOT__IN);
    VCoreTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->CoreTop__DOT__DIP__DOT__rf);
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__mcause = 0ULL;
        vlSelf->CoreTop__DOT__EX__DOT__mstatus = 0ULL;
        vlSelf->CoreTop__DOT__EX__DOT__mtvec = 0ULL;
    } else {
        if ((0x17U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            vlSelf->CoreTop__DOT__EX__DOT__mcause = 0xbULL;
            vlSelf->CoreTop__DOT__EX__DOT__mstatus 
                = vlSelf->CoreTop__DOT__EX__DOT___T_92;
        } else {
            if ((0x40U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                if ((0x1aU != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                    vlSelf->CoreTop__DOT__EX__DOT__mcause 
                        = vlSelf->CoreTop__DOT__EX__DOT___GEN_177;
                }
            }
            if ((0x18U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                vlSelf->CoreTop__DOT__EX__DOT__mstatus 
                    = vlSelf->CoreTop__DOT__EX__DOT___T_112;
            } else if ((0x40U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                vlSelf->CoreTop__DOT__EX__DOT__mstatus 
                    = vlSelf->CoreTop__DOT__EX__DOT___GEN_181;
            }
        }
        if ((0x40U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            if ((0x1aU != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                if ((0x68U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                    vlSelf->CoreTop__DOT__EX__DOT__mtvec 
                        = vlSelf->CoreTop__DOT__EX__DOT___GEN_168;
                }
            }
        }
    }
    if (vlSelf->CoreTop__DOT__EX_io_out_valid) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc 
            = ((0x19U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                : vlSelf->CoreTop__DOT__EX__DOT___GEN_289);
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC;
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest;
    }
    vlSelf->CoreTop__DOT__MEM__DOT___GEN_16 = ((0x46U 
                                                == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                : (
                                                   (0x70U 
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
                                                            : 0ULL))))))))));
    vlSelf->io_inst = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst;
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___count_T_5 
        = (0x7fU & ((IData)(2U) + (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_out_valid 
        = (0x44U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count));
    if (vlSelf->CoreTop__DOT__EX_io_in_ready) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid 
            = vlSelf->CoreTop__DOT__ID_io_out_bits_ctrl_signal_inst_valid;
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen 
            = ((IData)(vlSelf->CoreTop__DOT__ID_io_out_bits_ctrl_signal_inst_valid) 
               & (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3));
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst 
            = vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst;
    }
    if ((0x17U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        vlSelf->CoreTop__DOT__EX__DOT__mepc = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC;
    } else if ((0x40U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        if ((0x1aU != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            if ((0x68U != (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                vlSelf->CoreTop__DOT__EX__DOT__mepc 
                    = vlSelf->CoreTop__DOT__EX__DOT___GEN_169;
            }
        }
    }
    if (vlSelf->CoreTop__DOT__EX_io_in_ready) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype 
            = ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                ? 0x40U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316));
    }
    vlSelf->CoreTop__DOT__EX__DOT__csr_data = ((0x17U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                : (
                                                   (0x18U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                    : 0ULL));
    if (vlSelf->CoreTop__DOT__EX_io_in_ready) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC 
            = vlSelf->CoreTop__DOT__ID_io_in_bits_r_PC;
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest 
            = (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                        >> 7U));
        vlSelf->CoreTop__DOT__ID_io_in_bits_r_PC = vlSelf->CoreTop__DOT__IF__DOT__temp;
        vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
            = ((IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)
                ? 0U : ((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                       >> 2U))) ? (IData)(
                                                          (vlSelf->CoreTop__DOT__IFM__DOT__rdata 
                                                           >> 0x20U))
                         : (IData)(vlSelf->CoreTop__DOT__IFM__DOT__rdata)));
    }
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid) 
           & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_3 = ((1U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                              ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm
                                              : 0ULL);
    vlSelf->CoreTop__DOT__MEM__DOT__addr_temp = ((0x45U 
                                                  == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                                  : vlSelf->CoreTop__DOT__MEM__DOT___GEN_16);
    vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21 
        = ((0U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
            ? (QData)((IData)((0xffU & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
            : ((1U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                ? ((QData)((IData)((0xffU & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                   << 8U) : ((2U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                              ? ((QData)((IData)((0xffU 
                                                  & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                 << 0x10U) : ((3U == 
                                               (7U 
                                                & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                               ? ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                  << 0x18U)
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                   << 0x20U)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                    << 0x28U)
                                                    : 
                                                   ((6U 
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
                                                     ((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                      << 0x38U)
                                                      : 0ULL))))))));
    vlSelf->CoreTop__DOT__MEM__DOT___GEN_32 = ((0x70U 
                                                == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 1U))))
                                                     ? 0xcU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                  >> 1U))))
                                                      ? 0x30U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                   >> 1U))))
                                                       ? 0xc0U
                                                       : 0U))))
                                                : (
                                                   (0x74U 
                                                    == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                      ? 2U
                                                      : 
                                                     ((2U 
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
                                                    : 
                                                   ((0x77U 
                                                     == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                 >> 2U)))
                                                      ? 0xf0U
                                                      : 0xfU)
                                                     : 0U)));
    vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump = 
        ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType)) 
         & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
    vlSelf->CoreTop__DOT__EX__DOT___T_92 = (0xfffffffffffffff7ULL 
                                            & vlSelf->CoreTop__DOT__EX__DOT__mstatus);
    vlSelf->CoreTop__DOT__EX__DOT___T_112 = (8ULL | vlSelf->CoreTop__DOT__EX__DOT__mstatus);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_57 
        = ((0x300U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
            ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
            : ((0x305U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                : ((0x341U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                    ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                    : ((0x342U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                        ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                        : ((0x304U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                            ? vlSelf->CoreTop__DOT__EX__DOT__mie
                            : ((0x344U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                : 0ULL))))));
    vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen 
        = ((IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid) 
           & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
    vlSelf->CoreTop__DOT__EX__DOT__is_div = (((((((
                                                   ((0x43U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                    | (0x13U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                                   | (0x79U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                                  | (0x10U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                                 | (0x12U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                                | (0xfU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                               | (0x7aU 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                              | (0xdU 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                             & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
    vlSelf->CoreTop__DOT__EX__DOT__is_mul = (((0x78U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                              | (7U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                             & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
    vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed 
        = ((((0x43U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
             | (0x79U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
            | (0x12U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
           | (0x7aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)));
    vlSelf->CoreTop__DOT__EX__DOT__is_divw = ((((0x79U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                | (0x10U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                               | (0x7aU 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                              | (0xdU 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)));
    vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1 
        = (vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC 
           + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_1 = ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                              ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC
                                              : 0ULL);
    vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_div) 
           & (2U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)));
    vlSelf->CoreTop__DOT__EX_io_out_valid = (1U & (
                                                   (~ 
                                                    ((0x44U 
                                                      != (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count)) 
                                                     & (IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul))) 
                                                   & (~ 
                                                      ((2U 
                                                        != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                                                       & (IData)(vlSelf->CoreTop__DOT__EX__DOT__is_div)))));
    vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul) 
           & (0x44U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count)));
    vlSelf->CoreTop__DOT__EX_io_in_ready = (1U & (~ 
                                                  (((0x44U 
                                                     != (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count)) 
                                                    & (IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)) 
                                                   | ((2U 
                                                       != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__is_div)))));
    vlSelf->CoreTop__DOT__IF__DOT__temp = __Vdly__CoreTop__DOT__IF__DOT__temp;
    vlSelf->io_pc = vlSelf->CoreTop__DOT__IF__DOT__temp;
    vlSelf->CoreTop__DOT__IF__DOT___temp_T_2 = (4ULL 
                                                + vlSelf->CoreTop__DOT__IF__DOT__temp);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_363 
        = ((0x501bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
           | ((0x2013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
              | ((0x6003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                 | ((0x3bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                    | ((0x40000033U == (0xfe00707fU 
                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                       | ((0x33U == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                          | ((0x7033U == (0xfe00707fU 
                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                             | ((0x3033U == (0xfe00707fU 
                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                | ((0x103bU == (0xfe00707fU 
                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                   | ((0x6033U == (0xfe00707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                      | ((0x200003bU 
                                          == (0xfe00707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                         | ((0x200403bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                            | ((0x200603bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                               | ((0x4000003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                  | ((0x2033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                     | ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                        | ((0x503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                           | ((0x4033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                              | ((0x200703bU 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                 | ((0x1033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                    | ((0x2007033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                       | ((0x200503bU 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                          | ((0x2006033U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                             | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x3023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x1023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x100073U 
                                                                                != vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst) 
                                                                                & ((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x5063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x7063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | (0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_209 
        = ((0x17U == (0x7fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 0U : ((0x37U == (0x7fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                     ? 0U : ((0x3023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                              ? 4U : ((0x1023U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                       ? 4U : ((0x23U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 4U
                                                : (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 4U
                                                    : 
                                                   ((0x100073U 
                                                     == vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                                     ? 0U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 3U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 3U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 2U
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 2U
                                                         : 
                                                        ((0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 2U
                                                          : 
                                                         ((0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 2U
                                                           : 
                                                          ((0x6063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 2U
                                                            : 
                                                           ((0x7063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 2U
                                                             : 0U)))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_144 
        = ((0x3023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 9U : ((0x1023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                     ? 9U : ((0x23U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                              ? 9U : ((0x2023U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                       ? 9U : ((0x100073U 
                                                == vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                                ? 0U
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 7U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 8U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0xbU
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 0xbU
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 0xbU
                                                        : 
                                                       ((0x4063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 0xbU
                                                         : 
                                                        ((0x6063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0xbU
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 0xbU
                                                           : 
                                                          ((0x2073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 8U
                                                            : 
                                                           ((0x1073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 8U
                                                             : 0U)))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_268 
        = ((0x23U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 0x74U : ((0x2023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                        ? 0x77U : ((0x100073U == vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                    ? 0x42U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 0x19U
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 0x48U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 0x6bU
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0x6cU
                                                      : 
                                                     ((0x5063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 0x76U
                                                       : 
                                                      ((0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 0x7bU
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 0xbU
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0xcU
                                                          : 
                                                         ((0x2073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 0x15U
                                                           : 
                                                          ((0x1073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 0x16U
                                                            : 
                                                           ((0x73U 
                                                             == vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                                             ? 0x17U
                                                             : 
                                                            ((0x30200073U 
                                                              == vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                                              ? 0x18U
                                                              : 0U)))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3 = 
        ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
         | ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
            | ((0x6013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
               | ((0x3003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                  | ((0x2003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                     | ((0x3013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                        | ((0x1bU == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                           | ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                              | ((0x4003U == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                 | ((3U == (0x707fU 
                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                    | ((0x4013U == 
                                        (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                       | ((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                          | ((0x5013U 
                                              == (0xfc00707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                             | ((0x1003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                | ((0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                   | ((0x101bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                      | ((0x4000501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                         | (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_363))))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_224 
        = ((0x4000003bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 0U : ((0x2033U == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                     ? 5U : ((0x4000503bU == (0xfe00707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                              ? 1U : ((0x503bU == (0xfe00707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                       ? 1U : ((0x4033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 0U
                                                : (
                                                   (0x200703bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 1U
                                                     : 
                                                    ((0x2007033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x200503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2006033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x5033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 1U
                                                         : 
                                                        ((0x2005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x2004033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x40005033U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2000033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_209))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_159 
        = ((0x4000503bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 5U : ((0x503bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                     ? 5U : ((0x4033U == (0xfe00707fU 
                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                              ? 5U : ((0x200703bU == 
                                       (0xfe00707fU 
                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                       ? 5U : ((0x1033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 5U
                                                : (
                                                   (0x2007033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 5U
                                                    : 
                                                   ((0x200503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 5U
                                                     : 
                                                    ((0x2006033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 5U
                                                      : 
                                                     ((0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 5U
                                                       : 
                                                      ((0x2005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x2004033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 5U
                                                         : 
                                                        ((0x40005033U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 5U
                                                          : 
                                                         ((0x2000033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 5U
                                                           : 
                                                          ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 3U
                                                            : 
                                                           ((0x37U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 3U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_144))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_283 
        = ((0x4033U == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 0x72U : ((0x200703bU == (0xfe00707fU 
                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                        ? 0xdU : ((0x1033U == (0xfe00707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                   ? 0x41U : ((0x2007033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                               ? 0xfU
                                               : ((0x200503bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                   ? 0x10U
                                                   : 
                                                  ((0x2006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 0x12U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 0x75U
                                                     : 
                                                    ((0x2005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0x13U
                                                      : 
                                                     ((0x2004033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 0x43U
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 0x14U
                                                        : 
                                                       ((0x2000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 7U
                                                         : 
                                                        ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0x40U
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 0x1aU
                                                           : 
                                                          ((0x3023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 0x46U
                                                            : 
                                                           ((0x1023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 0x70U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_268))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_239 
        = ((0x101bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 1U : ((0x4000501bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                     ? 1U : ((0x501bU == (0xfc00707fU 
                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                              ? 1U : ((0x2013U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                       ? 5U : ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 4U
                                                : (
                                                   (0x3bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x40000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x33U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 1U
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x200003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x200403bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x200603bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_224))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_174 
        = ((0x501bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 8U : ((0x2013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                     ? 8U : ((0x6003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                              ? 8U : ((0x3bU == (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                       ? 5U : ((0x40000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 5U
                                                : (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 5U
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 5U
                                                     : 
                                                    ((0x3033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 5U
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 5U
                                                       : 
                                                      ((0x6033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x200003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 5U
                                                         : 
                                                        ((0x200403bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 5U
                                                          : 
                                                         ((0x200603bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 5U
                                                           : 
                                                          ((0x4000003bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 5U
                                                            : 
                                                           ((0x2033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 5U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_159))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_298 
        = ((0x6003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 0x11U : ((0x3bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                        ? 0x68U : ((0x40000033U == 
                                    (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                    ? 0x69U : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 0x40U
                                                : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 0x71U
                                                    : 
                                                   ((0x3033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 0x6aU
                                                     : 
                                                    ((0x103bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0x73U
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 0x44U
                                                       : 
                                                      ((0x200003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 0x78U
                                                        : 
                                                       ((0x200403bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 0x79U
                                                         : 
                                                        ((0x200603bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0x7aU
                                                          : 
                                                         ((0x4000003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 1U
                                                           : 
                                                          ((0x2033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 2U
                                                            : 
                                                           ((0x4000503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 9U
                                                             : 
                                                            ((0x503bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                              ? 0xaU
                                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_283))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_189 
        = ((0x6013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 8U : ((0x3003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                     ? 8U : ((0x2003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                              ? 8U : ((0x3013U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                       ? 8U : ((0x1bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 8U
                                                : (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 8U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 8U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 8U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 8U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 8U
                                                        : 
                                                       ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 8U
                                                         : 
                                                        ((0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 8U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 8U
                                                           : 
                                                          ((0x101bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 8U
                                                            : 
                                                           ((0x4000501bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 8U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_174))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_313 
        = ((0x2003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 0x47U : ((0x3013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                        ? 0x6aU : ((0x1bU == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                    ? 0x6dU : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 0x6eU
                                                : (
                                                   (0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 0x6fU
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 0xeU
                                                     : 
                                                    ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0x72U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 0x71U
                                                       : 
                                                      ((0x5013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 0x75U
                                                        : 
                                                       ((0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 3U
                                                         : 
                                                        ((0x5003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 4U
                                                          : 
                                                         ((0x101bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 5U
                                                           : 
                                                          ((0x4000501bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 6U
                                                            : 
                                                           ((0x501bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 8U
                                                             : 
                                                            ((0x2013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                              ? 2U
                                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_298))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0 = 
        ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
          ? 8U : ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                   ? 8U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_189)));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316 
        = ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 0x41U : ((0x6013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                        ? 0x44U : ((0x3003U == (0x707fU 
                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                    ? 0x45U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_313))));
}

void VCoreTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void VCoreTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
extern const VlWide<9>/*287:0*/ VCoreTop__ConstPool__CONST_h5285eb67_0;
extern const VlWide<9>/*287:0*/ VCoreTop__ConstPool__CONST_hd571e6a2_0;
extern const VlWide<9>/*287:0*/ VCoreTop__ConstPool__CONST_h5285fb67_0;
extern const VlWide<9>/*287:0*/ VCoreTop__ConstPool__CONST_haaadcf73_0;
extern const VlWide<9>/*287:0*/ VCoreTop__ConstPool__CONST_h52851f67_0;
extern const VlWide<9>/*287:0*/ VCoreTop__ConstPool__CONST_h3d049ec4_0;

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__0(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h236fbee0__0;
    VlWide<3>/*95:0*/ __Vtemp_h4619e6d2__0;
    VlWide<3>/*95:0*/ __Vtemp_h236fbee0__1;
    VlWide<9>/*287:0*/ __Vtemp_hc080bf2c__0;
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__0;
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__1;
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__2;
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__3;
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__4;
    VlWide<9>/*287:0*/ __Vtemp_h97b21e08__5;
    VlWide<9>/*287:0*/ __Vtemp_hdb070ad9__0;
    VlWide<9>/*287:0*/ __Vtemp_h44b8a12a__0;
    VlWide<9>/*287:0*/ __Vtemp_h3296fae5__0;
    VlWide<9>/*287:0*/ __Vtemp_h273f8897__0;
    VlWide<9>/*287:0*/ __Vtemp_h5b520086__0;
    VlWide<9>/*287:0*/ __Vtemp_h0c9b13de__0;
    VlWide<9>/*287:0*/ __Vtemp_hc080bf2c__1;
    VlWide<3>/*95:0*/ __Vtemp_h142d788e__0;
    VlWide<3>/*95:0*/ __Vtemp_h666e501b__0;
    VlWide<3>/*95:0*/ __Vtemp_h93802347__0;
    VlWide<3>/*95:0*/ __Vtemp_h50d8b522__0;
    VlWide<5>/*159:0*/ __Vtemp_h5943c197__0;
    VlWide<5>/*159:0*/ __Vtemp_h97a97068__0;
    VlWide<4>/*127:0*/ __Vtemp_h7a2d1147__0;
    VlWide<4>/*127:0*/ __Vtemp_h8248920c__0;
    VlWide<4>/*127:0*/ __Vtemp_h14069084__0;
    VlWide<4>/*127:0*/ __Vtemp_h02754327__0;
    VlWide<4>/*127:0*/ __Vtemp_he2247138__0;
    VlWide<3>/*95:0*/ __Vtemp_hb8aebf5c__0;
    VlWide<3>/*95:0*/ __Vtemp_hed83a4a1__0;
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp_h236fbee0__0, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S);
    VL_EXTEND_WQ(65,64, __Vtemp_h4619e6d2__0, vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6);
    VL_EXTEND_WQ(65,64, __Vtemp_h236fbee0__1, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S);
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_14[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_14[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_14[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_14[0U] 
            = __Vtemp_h236fbee0__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_14[1U] 
            = __Vtemp_h236fbee0__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_14[2U] 
            = __Vtemp_h236fbee0__0[2U];
    } else if ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        if ((0x3fU != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))) {
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_14[0U] 
                = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6) 
                   << 1U);
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_14[1U] 
                = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6) 
                    >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_14[2U] 
                = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6 
                            >> 0x20U)) >> 0x1fU);
        } else {
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_14[0U] 
                = __Vtemp_h4619e6d2__0[0U];
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_14[1U] 
                = __Vtemp_h4619e6d2__0[1U];
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_14[2U] 
                = __Vtemp_h4619e6d2__0[2U];
        }
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_14[0U] 
            = __Vtemp_h236fbee0__1[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_14[1U] 
            = __Vtemp_h236fbee0__1[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_14[2U] 
            = __Vtemp_h236fbee0__1[2U];
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->clock))) {
        vlSelf->CoreTop__DOT__mem_rdata = 0ULL;
    } else if ((((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
                 & (IData)(vlSelf->CoreTop__DOT__valid_2)) 
                & (IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid))) {
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
                                                                        : vlSelf->CoreTop__DOT__MEM__DOT___GEN_16), vlSelf->__Vtask_pmem_read__5__rdata);
            vlSelf->CoreTop__DOT__mem_rdata = vlSelf->__Vtask_pmem_read__5__rdata;
        }
    } else {
        vlSelf->CoreTop__DOT__mem_rdata = 0ULL;
    }
    VL_EXTEND_WW(268,132, __Vtemp_hc080bf2c__0, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p);
    VL_EXTEND_WW(269,132, __Vtemp_h97b21e08__0, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
    VL_EXTEND_WW(269,132, __Vtemp_h97b21e08__1, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
    VL_EXTEND_WW(268,132, __Vtemp_h97b21e08__2, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
    VL_EXTEND_WW(268,132, __Vtemp_h97b21e08__3, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
    VL_EXTEND_WW(268,132, __Vtemp_h97b21e08__4, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
    VL_EXTEND_WW(268,132, __Vtemp_h97b21e08__5, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
    __Vtemp_hdb070ad9__0[0U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[0U] 
                                & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? (~ __Vtemp_h97b21e08__4[0U])
                                    : ((6U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__5[0U])
                                        : VCoreTop__ConstPool__CONST_hd571e6a2_0[0U])));
    __Vtemp_hdb070ad9__0[1U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[1U] 
                                & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? (~ __Vtemp_h97b21e08__4[1U])
                                    : ((6U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__5[1U])
                                        : VCoreTop__ConstPool__CONST_hd571e6a2_0[1U])));
    __Vtemp_hdb070ad9__0[2U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[2U] 
                                & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? (~ __Vtemp_h97b21e08__4[2U])
                                    : ((6U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__5[2U])
                                        : VCoreTop__ConstPool__CONST_hd571e6a2_0[2U])));
    __Vtemp_hdb070ad9__0[3U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[3U] 
                                & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? (~ __Vtemp_h97b21e08__4[3U])
                                    : ((6U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__5[3U])
                                        : VCoreTop__ConstPool__CONST_hd571e6a2_0[3U])));
    __Vtemp_hdb070ad9__0[4U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[4U] 
                                & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? (~ __Vtemp_h97b21e08__4[4U])
                                    : ((6U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__5[4U])
                                        : VCoreTop__ConstPool__CONST_hd571e6a2_0[4U])));
    __Vtemp_hdb070ad9__0[5U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[5U] 
                                & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? (~ __Vtemp_h97b21e08__4[5U])
                                    : ((6U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__5[5U])
                                        : VCoreTop__ConstPool__CONST_hd571e6a2_0[5U])));
    __Vtemp_hdb070ad9__0[6U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[6U] 
                                & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? (~ __Vtemp_h97b21e08__4[6U])
                                    : ((6U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__5[6U])
                                        : VCoreTop__ConstPool__CONST_hd571e6a2_0[6U])));
    __Vtemp_hdb070ad9__0[7U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[7U] 
                                & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? (~ __Vtemp_h97b21e08__4[7U])
                                    : ((6U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__5[7U])
                                        : VCoreTop__ConstPool__CONST_hd571e6a2_0[7U])));
    __Vtemp_hdb070ad9__0[8U] = (VCoreTop__ConstPool__CONST_h5285eb67_0[8U] 
                                & ((5U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? (~ __Vtemp_h97b21e08__4[8U])
                                    : ((6U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? (~ __Vtemp_h97b21e08__5[8U])
                                        : VCoreTop__ConstPool__CONST_hd571e6a2_0[8U])));
    VL_EXTEND_WW(269,268, __Vtemp_h44b8a12a__0, __Vtemp_hdb070ad9__0);
    __Vtemp_h3296fae5__0[0U] = (VCoreTop__ConstPool__CONST_h5285fb67_0[0U] 
                                & ((0U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? VCoreTop__ConstPool__CONST_haaadcf73_0[0U]
                                    : ((1U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? __Vtemp_h97b21e08__0[0U]
                                        : ((2U == (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                            ? __Vtemp_h97b21e08__1[0U]
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                ? (
                                                   __Vtemp_h97b21e08__2[0U] 
                                                   << 1U)
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (~ 
                                                    (__Vtemp_h97b21e08__3[0U] 
                                                     << 1U))
                                                    : 
                                                   __Vtemp_h44b8a12a__0[0U]))))));
    __Vtemp_h3296fae5__0[1U] = (VCoreTop__ConstPool__CONST_h5285fb67_0[1U] 
                                & ((0U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? VCoreTop__ConstPool__CONST_haaadcf73_0[1U]
                                    : ((1U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? __Vtemp_h97b21e08__0[1U]
                                        : ((2U == (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                            ? __Vtemp_h97b21e08__1[1U]
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                ? (
                                                   (__Vtemp_h97b21e08__2[0U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp_h97b21e08__2[1U] 
                                                      << 1U))
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (~ 
                                                    ((__Vtemp_h97b21e08__3[0U] 
                                                      >> 0x1fU) 
                                                     | (__Vtemp_h97b21e08__3[1U] 
                                                        << 1U)))
                                                    : 
                                                   __Vtemp_h44b8a12a__0[1U]))))));
    __Vtemp_h3296fae5__0[2U] = (VCoreTop__ConstPool__CONST_h5285fb67_0[2U] 
                                & ((0U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? VCoreTop__ConstPool__CONST_haaadcf73_0[2U]
                                    : ((1U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? __Vtemp_h97b21e08__0[2U]
                                        : ((2U == (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                            ? __Vtemp_h97b21e08__1[2U]
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                ? (
                                                   (__Vtemp_h97b21e08__2[1U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp_h97b21e08__2[2U] 
                                                      << 1U))
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (~ 
                                                    ((__Vtemp_h97b21e08__3[1U] 
                                                      >> 0x1fU) 
                                                     | (__Vtemp_h97b21e08__3[2U] 
                                                        << 1U)))
                                                    : 
                                                   __Vtemp_h44b8a12a__0[2U]))))));
    __Vtemp_h3296fae5__0[3U] = (VCoreTop__ConstPool__CONST_h5285fb67_0[3U] 
                                & ((0U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? VCoreTop__ConstPool__CONST_haaadcf73_0[3U]
                                    : ((1U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? __Vtemp_h97b21e08__0[3U]
                                        : ((2U == (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                            ? __Vtemp_h97b21e08__1[3U]
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                ? (
                                                   (__Vtemp_h97b21e08__2[2U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp_h97b21e08__2[3U] 
                                                      << 1U))
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (~ 
                                                    ((__Vtemp_h97b21e08__3[2U] 
                                                      >> 0x1fU) 
                                                     | (__Vtemp_h97b21e08__3[3U] 
                                                        << 1U)))
                                                    : 
                                                   __Vtemp_h44b8a12a__0[3U]))))));
    __Vtemp_h3296fae5__0[4U] = (VCoreTop__ConstPool__CONST_h5285fb67_0[4U] 
                                & ((0U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? VCoreTop__ConstPool__CONST_haaadcf73_0[4U]
                                    : ((1U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? __Vtemp_h97b21e08__0[4U]
                                        : ((2U == (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                            ? __Vtemp_h97b21e08__1[4U]
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                ? (
                                                   (__Vtemp_h97b21e08__2[3U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp_h97b21e08__2[4U] 
                                                      << 1U))
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (~ 
                                                    ((__Vtemp_h97b21e08__3[3U] 
                                                      >> 0x1fU) 
                                                     | (__Vtemp_h97b21e08__3[4U] 
                                                        << 1U)))
                                                    : 
                                                   __Vtemp_h44b8a12a__0[4U]))))));
    __Vtemp_h3296fae5__0[5U] = (VCoreTop__ConstPool__CONST_h5285fb67_0[5U] 
                                & ((0U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? VCoreTop__ConstPool__CONST_haaadcf73_0[5U]
                                    : ((1U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? __Vtemp_h97b21e08__0[5U]
                                        : ((2U == (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                            ? __Vtemp_h97b21e08__1[5U]
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                ? (
                                                   (__Vtemp_h97b21e08__2[4U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp_h97b21e08__2[5U] 
                                                      << 1U))
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (~ 
                                                    ((__Vtemp_h97b21e08__3[4U] 
                                                      >> 0x1fU) 
                                                     | (__Vtemp_h97b21e08__3[5U] 
                                                        << 1U)))
                                                    : 
                                                   __Vtemp_h44b8a12a__0[5U]))))));
    __Vtemp_h3296fae5__0[6U] = (VCoreTop__ConstPool__CONST_h5285fb67_0[6U] 
                                & ((0U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? VCoreTop__ConstPool__CONST_haaadcf73_0[6U]
                                    : ((1U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? __Vtemp_h97b21e08__0[6U]
                                        : ((2U == (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                            ? __Vtemp_h97b21e08__1[6U]
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                ? (
                                                   (__Vtemp_h97b21e08__2[5U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp_h97b21e08__2[6U] 
                                                      << 1U))
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (~ 
                                                    ((__Vtemp_h97b21e08__3[5U] 
                                                      >> 0x1fU) 
                                                     | (__Vtemp_h97b21e08__3[6U] 
                                                        << 1U)))
                                                    : 
                                                   __Vtemp_h44b8a12a__0[6U]))))));
    __Vtemp_h3296fae5__0[7U] = (VCoreTop__ConstPool__CONST_h5285fb67_0[7U] 
                                & ((0U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? VCoreTop__ConstPool__CONST_haaadcf73_0[7U]
                                    : ((1U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? __Vtemp_h97b21e08__0[7U]
                                        : ((2U == (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                            ? __Vtemp_h97b21e08__1[7U]
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                ? (
                                                   (__Vtemp_h97b21e08__2[6U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp_h97b21e08__2[7U] 
                                                      << 1U))
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (~ 
                                                    ((__Vtemp_h97b21e08__3[6U] 
                                                      >> 0x1fU) 
                                                     | (__Vtemp_h97b21e08__3[7U] 
                                                        << 1U)))
                                                    : 
                                                   __Vtemp_h44b8a12a__0[7U]))))));
    __Vtemp_h3296fae5__0[8U] = (VCoreTop__ConstPool__CONST_h5285fb67_0[8U] 
                                & ((0U == (7U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                    ? VCoreTop__ConstPool__CONST_haaadcf73_0[8U]
                                    : ((1U == (7U & 
                                               vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                        ? __Vtemp_h97b21e08__0[8U]
                                        : ((2U == (7U 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                            ? __Vtemp_h97b21e08__1[8U]
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                ? (
                                                   (__Vtemp_h97b21e08__2[7U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp_h97b21e08__2[8U] 
                                                      << 1U))
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U]))
                                                    ? 
                                                   (~ 
                                                    ((__Vtemp_h97b21e08__3[7U] 
                                                      >> 0x1fU) 
                                                     | (__Vtemp_h97b21e08__3[8U] 
                                                        << 1U)))
                                                    : 
                                                   __Vtemp_h44b8a12a__0[8U]))))));
    VL_ADD_W(9, __Vtemp_h273f8897__0, __Vtemp_hc080bf2c__0, __Vtemp_h3296fae5__0);
    VL_EXTEND_WI(268,1, __Vtemp_h5b520086__0, ((0U 
                                                != 
                                                (7U 
                                                 & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                               & ((1U 
                                                   != 
                                                   (7U 
                                                    & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                                  & ((2U 
                                                      != 
                                                      (7U 
                                                       & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                                     & ((3U 
                                                         != 
                                                         (7U 
                                                          & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                                        & ((4U 
                                                            == 
                                                            (7U 
                                                             & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                                           | ((5U 
                                                               == 
                                                               (7U 
                                                                & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])) 
                                                              | (6U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier[0U])))))))));
    VL_ADD_W(9, __Vtemp_h0c9b13de__0, __Vtemp_h273f8897__0, __Vtemp_h5b520086__0);
    VL_EXTEND_WW(266,132, __Vtemp_hc080bf2c__1, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___GEN_8[0U] 
        = (VCoreTop__ConstPool__CONST_h52851f67_0[0U] 
           & ((IData)(vlSelf->reset) ? VCoreTop__ConstPool__CONST_h3d049ec4_0[0U]
               : ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid)
                   ? ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))
                       ? VCoreTop__ConstPool__CONST_h3d049ec4_0[0U]
                       : (((VCoreTop__ConstPool__CONST_h5285eb67_0[1U] 
                            & __Vtemp_h0c9b13de__0[1U]) 
                           << 0x1eU) | ((VCoreTop__ConstPool__CONST_h5285eb67_0[0U] 
                                         & __Vtemp_h0c9b13de__0[0U]) 
                                        >> 2U))) : 
                  __Vtemp_hc080bf2c__1[0U])));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___GEN_8[1U] 
        = (VCoreTop__ConstPool__CONST_h52851f67_0[1U] 
           & ((IData)(vlSelf->reset) ? VCoreTop__ConstPool__CONST_h3d049ec4_0[1U]
               : ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid)
                   ? ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))
                       ? VCoreTop__ConstPool__CONST_h3d049ec4_0[1U]
                       : (((VCoreTop__ConstPool__CONST_h5285eb67_0[2U] 
                            & __Vtemp_h0c9b13de__0[2U]) 
                           << 0x1eU) | ((VCoreTop__ConstPool__CONST_h5285eb67_0[1U] 
                                         & __Vtemp_h0c9b13de__0[1U]) 
                                        >> 2U))) : 
                  __Vtemp_hc080bf2c__1[1U])));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___GEN_8[2U] 
        = (VCoreTop__ConstPool__CONST_h52851f67_0[2U] 
           & ((IData)(vlSelf->reset) ? VCoreTop__ConstPool__CONST_h3d049ec4_0[2U]
               : ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid)
                   ? ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))
                       ? VCoreTop__ConstPool__CONST_h3d049ec4_0[2U]
                       : (((VCoreTop__ConstPool__CONST_h5285eb67_0[3U] 
                            & __Vtemp_h0c9b13de__0[3U]) 
                           << 0x1eU) | ((VCoreTop__ConstPool__CONST_h5285eb67_0[2U] 
                                         & __Vtemp_h0c9b13de__0[2U]) 
                                        >> 2U))) : 
                  __Vtemp_hc080bf2c__1[2U])));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___GEN_8[3U] 
        = (VCoreTop__ConstPool__CONST_h52851f67_0[3U] 
           & ((IData)(vlSelf->reset) ? VCoreTop__ConstPool__CONST_h3d049ec4_0[3U]
               : ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid)
                   ? ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))
                       ? VCoreTop__ConstPool__CONST_h3d049ec4_0[3U]
                       : (((VCoreTop__ConstPool__CONST_h5285eb67_0[4U] 
                            & __Vtemp_h0c9b13de__0[4U]) 
                           << 0x1eU) | ((VCoreTop__ConstPool__CONST_h5285eb67_0[3U] 
                                         & __Vtemp_h0c9b13de__0[3U]) 
                                        >> 2U))) : 
                  __Vtemp_hc080bf2c__1[3U])));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___GEN_8[4U] 
        = (VCoreTop__ConstPool__CONST_h52851f67_0[4U] 
           & ((IData)(vlSelf->reset) ? VCoreTop__ConstPool__CONST_h3d049ec4_0[4U]
               : ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid)
                   ? ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))
                       ? VCoreTop__ConstPool__CONST_h3d049ec4_0[4U]
                       : (((VCoreTop__ConstPool__CONST_h5285eb67_0[5U] 
                            & __Vtemp_h0c9b13de__0[5U]) 
                           << 0x1eU) | ((VCoreTop__ConstPool__CONST_h5285eb67_0[4U] 
                                         & __Vtemp_h0c9b13de__0[4U]) 
                                        >> 2U))) : 
                  __Vtemp_hc080bf2c__1[4U])));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___GEN_8[5U] 
        = (VCoreTop__ConstPool__CONST_h52851f67_0[5U] 
           & ((IData)(vlSelf->reset) ? VCoreTop__ConstPool__CONST_h3d049ec4_0[5U]
               : ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid)
                   ? ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))
                       ? VCoreTop__ConstPool__CONST_h3d049ec4_0[5U]
                       : (((VCoreTop__ConstPool__CONST_h5285eb67_0[6U] 
                            & __Vtemp_h0c9b13de__0[6U]) 
                           << 0x1eU) | ((VCoreTop__ConstPool__CONST_h5285eb67_0[5U] 
                                         & __Vtemp_h0c9b13de__0[5U]) 
                                        >> 2U))) : 
                  __Vtemp_hc080bf2c__1[5U])));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___GEN_8[6U] 
        = (VCoreTop__ConstPool__CONST_h52851f67_0[6U] 
           & ((IData)(vlSelf->reset) ? VCoreTop__ConstPool__CONST_h3d049ec4_0[6U]
               : ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid)
                   ? ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))
                       ? VCoreTop__ConstPool__CONST_h3d049ec4_0[6U]
                       : (((VCoreTop__ConstPool__CONST_h5285eb67_0[7U] 
                            & __Vtemp_h0c9b13de__0[7U]) 
                           << 0x1eU) | ((VCoreTop__ConstPool__CONST_h5285eb67_0[6U] 
                                         & __Vtemp_h0c9b13de__0[6U]) 
                                        >> 2U))) : 
                  __Vtemp_hc080bf2c__1[6U])));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___GEN_8[7U] 
        = (VCoreTop__ConstPool__CONST_h52851f67_0[7U] 
           & ((IData)(vlSelf->reset) ? VCoreTop__ConstPool__CONST_h3d049ec4_0[7U]
               : ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid)
                   ? ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))
                       ? VCoreTop__ConstPool__CONST_h3d049ec4_0[7U]
                       : (((VCoreTop__ConstPool__CONST_h5285eb67_0[8U] 
                            & __Vtemp_h0c9b13de__0[8U]) 
                           << 0x1eU) | ((VCoreTop__ConstPool__CONST_h5285eb67_0[7U] 
                                         & __Vtemp_h0c9b13de__0[7U]) 
                                        >> 2U))) : 
                  __Vtemp_hc080bf2c__1[7U])));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___GEN_8[8U] 
        = (VCoreTop__ConstPool__CONST_h52851f67_0[8U] 
           & ((IData)(vlSelf->reset) ? VCoreTop__ConstPool__CONST_h3d049ec4_0[8U]
               : ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid)
                   ? ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count))
                       ? VCoreTop__ConstPool__CONST_h3d049ec4_0[8U]
                       : ((VCoreTop__ConstPool__CONST_h5285eb67_0[8U] 
                           & __Vtemp_h0c9b13de__0[8U]) 
                          >> 2U)) : __Vtemp_hc080bf2c__1[8U])));
    if ((1U & (~ ((IData)(vlSelf->reset) | (IData)(vlSelf->clock))))) {
        if (VL_UNLIKELY((0ULL == vlSelf->CoreTop__DOT__IF__DOT__temp))) {
            VL_FINISH_MT("vsrc/ifm.v", 17, "");
        } else {
            VCoreTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->CoreTop__DOT__IF__DOT__temp, vlSelf->__Vtask_pmem_read__0__rdata);
            vlSelf->CoreTop__DOT__IFM__DOT__rdata = vlSelf->__Vtask_pmem_read__0__rdata;
        }
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
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData 
        = ((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))
            ? ((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                ? vlSelf->CoreTop__DOT__mem_rdata : 
               ((0x47U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                 ? ((1U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                   >> 2U))) ? (((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__mem_rdata 
                                                                             >> 0x3fU)))
                                                                  ? 0xffffffffU
                                                                  : 0U))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (vlSelf->CoreTop__DOT__mem_rdata 
                                                                  >> 0x20U))))
                     : (((QData)((IData)(((1U & (IData)(
                                                        (vlSelf->CoreTop__DOT__mem_rdata 
                                                         >> 0x1fU)))
                                           ? 0xffffffffU
                                           : 0U))) 
                         << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__mem_rdata))))
                 : ((0x11U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                     ? ((1U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                       >> 2U))) ? (QData)((IData)(
                                                                  (vlSelf->CoreTop__DOT__mem_rdata 
                                                                   >> 0x20U)))
                         : (QData)((IData)(vlSelf->CoreTop__DOT__mem_rdata)))
                     : ((0x6fU == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                         ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                         : ((0xeU == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                             ? ((((0x80U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                   ? 0xffffffffffffffULL
                                   : 0ULL) << 8U) | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27)))
                             : ((3U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                 ? ((((0x8000U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44))
                                       ? 0xffffffffffffULL
                                       : 0ULL) << 0x10U) 
                                    | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44)))
                                 : ((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                     ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44))
                                     : 0ULL))))))) : vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData);
    vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2 
        = ((((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
             & ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2))) 
            & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest)))
            ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
            : vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2);
    vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1 
        = ((((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
             & ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1))) 
            & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest)))
            ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
            : vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
            ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2
            : vlSelf->CoreTop__DOT__EX__DOT___GEN_3);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
            ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1
            : vlSelf->CoreTop__DOT__EX__DOT___GEN_1);
    if (vlSelf->CoreTop__DOT__EX__DOT__is_divw) {
        vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2 
            = (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3));
        vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 
            = (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2 
            = vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3;
        vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 
            = vlSelf->CoreTop__DOT__EX__DOT___shift_result_T;
    }
    VL_EXTEND_WQ(95,64, __Vtemp_h142d788e__0, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T);
    VL_SHIFTL_WWI(95,95,5, __Vtemp_h666e501b__0, __Vtemp_h142d788e__0, 
                  (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)));
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
        = __Vtemp_h666e501b__0[0U];
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[1U] 
        = __Vtemp_h666e501b__0[1U];
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[2U] 
        = (0x7fffffffU & __Vtemp_h666e501b__0[2U]);
    VL_EXTEND_WI(95,32, __Vtemp_h93802347__0, (IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T));
    VL_SHIFTL_WWI(95,95,6, __Vtemp_h50d8b522__0, __Vtemp_h93802347__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)));
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
        = __Vtemp_h50d8b522__0[0U];
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[1U] 
        = __Vtemp_h50d8b522__0[1U];
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[2U] 
        = (0x7fffffffU & __Vtemp_h50d8b522__0[2U]);
    vlSelf->CoreTop__DOT__EX__DOT__branch_flag = ((0x6bU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                   == vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                                                   : 
                                                  ((0x6cU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                    != vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                                                    : 
                                                   ((0x76U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    VL_GTES_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                                                     : 
                                                    ((0x7bU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 
                                                     VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? 
                                                      (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                       < vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? 
                                                       (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                        >= vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                        | (0x18U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)))))))));
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
        = (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
           - vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T), 
                         (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)));
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T) 
           >> (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)));
    vlSelf->CoreTop__DOT__EX__DOT___T_39 = (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_57 
                                            | vlSelf->CoreTop__DOT__EX__DOT___shift_result_T);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
        = (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
           + vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3);
    vlSelf->CoreTop__DOT__EX_io_is_flush = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                                             | (IData)(vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump)) 
                                            & (IData)(vlSelf->CoreTop__DOT__valid_1));
    vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11 = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag)
                                                  ? 
                                                 ((0x6bU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                   : 
                                                  ((0x6cU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                    : 
                                                   ((0x76U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                     : 
                                                    ((0x7bU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                        : 0ULL))))))
                                                  : 
                                                 (4ULL 
                                                  + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC));
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28 
        = (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25)));
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35 
        = (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31)));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_60 = ((0x15U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? ((0x300U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                   : 
                                                  ((0x305U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                     : 
                                                    ((0x342U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                      : 
                                                     ((0x304U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                       : 
                                                      ((0x344U 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT___T_39
                                                        : vlSelf->CoreTop__DOT__EX__DOT__mip))))))
                                               : ((0x16U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  ((0x300U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                    : 
                                                   ((0x305U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                     : 
                                                    ((0x341U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                      : 
                                                     ((0x342U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                       : 
                                                      ((0x304U 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                        : 
                                                       ((0x344U 
                                                         == 
                                                         (0xfffU 
                                                          & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                                         : vlSelf->CoreTop__DOT__EX__DOT__mip))))))
                                                   : vlSelf->CoreTop__DOT__EX__DOT__mip));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_80 = ((0x10U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                               : ((0x13U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                   : 
                                                  ((0x43U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                    : 
                                                   ((0x15U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    ((0x300U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                      : 
                                                     ((0x305U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                       : 
                                                      ((0x341U 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                        : 
                                                       ((0x342U 
                                                         == 
                                                         (0xfffU 
                                                          & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                         : 
                                                        ((0x304U 
                                                          == 
                                                          (0xfffU 
                                                           & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT___T_39
                                                          : vlSelf->CoreTop__DOT__EX__DOT__mie)))))
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 
                                                     ((0x300U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                       : 
                                                      ((0x305U 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                        : 
                                                       ((0x341U 
                                                         == 
                                                         (0xfffU 
                                                          & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                         : 
                                                        ((0x342U 
                                                          == 
                                                          (0xfffU 
                                                           & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                          : 
                                                         ((0x304U 
                                                           == 
                                                           (0xfffU 
                                                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                                           : vlSelf->CoreTop__DOT__EX__DOT__mie)))))
                                                      : vlSelf->CoreTop__DOT__EX__DOT__mie)))));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_100 = ((7U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                    : 
                                                   ((0x12U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                      : 
                                                     ((0x13U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                       : 
                                                      ((0x43U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                        : 
                                                       ((0x15U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? 
                                                        ((0x300U 
                                                          == 
                                                          (0xfffU 
                                                           & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                          : 
                                                         ((0x305U 
                                                           == 
                                                           (0xfffU 
                                                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                           : 
                                                          ((0x341U 
                                                            == 
                                                            (0xfffU 
                                                             & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                            : 
                                                           ((0x342U 
                                                             == 
                                                             (0xfffU 
                                                              & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT___T_39
                                                             : vlSelf->CoreTop__DOT__EX__DOT__mcause))))
                                                         : 
                                                        ((0x16U 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? 
                                                         ((0x300U 
                                                           == 
                                                           (0xfffU 
                                                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                           : 
                                                          ((0x305U 
                                                            == 
                                                            (0xfffU 
                                                             & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                            : 
                                                           ((0x341U 
                                                             == 
                                                             (0xfffU 
                                                              & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                             : 
                                                            ((0x342U 
                                                              == 
                                                              (0xfffU 
                                                               & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                                              : vlSelf->CoreTop__DOT__EX__DOT__mcause))))
                                                          : vlSelf->CoreTop__DOT__EX__DOT__mcause))))))));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_120 = ((0x7aU 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                : (
                                                   (0xdU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                      : 
                                                     ((0xfU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                       : 
                                                      ((0x12U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                        : 
                                                       ((0x10U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                         : 
                                                        ((0x13U 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                          : 
                                                         ((0x43U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                           : 
                                                          ((0x15U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? 
                                                           ((0x300U 
                                                             == 
                                                             (0xfffU 
                                                              & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                             : 
                                                            ((0x305U 
                                                              == 
                                                              (0xfffU 
                                                               & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                              : 
                                                             ((0x341U 
                                                               == 
                                                               (0xfffU 
                                                                & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                               ? vlSelf->CoreTop__DOT__EX__DOT___T_39
                                                               : vlSelf->CoreTop__DOT__EX__DOT__mepc)))
                                                            : 
                                                           ((0x16U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? 
                                                            ((0x300U 
                                                              == 
                                                              (0xfffU 
                                                               & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                              : 
                                                             ((0x305U 
                                                               == 
                                                               (0xfffU 
                                                                & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                               ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                               : 
                                                              ((0x341U 
                                                                == 
                                                                (0xfffU 
                                                                 & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                                ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                                                : vlSelf->CoreTop__DOT__EX__DOT__mepc)))
                                                             : vlSelf->CoreTop__DOT__EX__DOT__mepc)))))))))));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_147 = ((0x72U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                : (
                                                   (0x6dU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                    : 
                                                   ((0x78U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                     : 
                                                    ((0x79U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                      : 
                                                     ((0x7aU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                          : 
                                                         ((0xfU 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                           : 
                                                          ((0x12U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                            : 
                                                           ((0x10U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                             : 
                                                            ((0x13U 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                              : 
                                                             ((0x43U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                               : 
                                                              ((0x15U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? 
                                                               ((0x300U 
                                                                 == 
                                                                 (0xfffU 
                                                                  & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                                 ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                                 : 
                                                                ((0x305U 
                                                                  == 
                                                                  (0xfffU 
                                                                   & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                                  ? vlSelf->CoreTop__DOT__EX__DOT___T_39
                                                                  : vlSelf->CoreTop__DOT__EX__DOT__mtvec))
                                                                : 
                                                               ((0x16U 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? 
                                                                ((0x300U 
                                                                  == 
                                                                  (0xfffU 
                                                                   & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                                  ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                                  : 
                                                                 ((0x305U 
                                                                   == 
                                                                   (0xfffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                                   ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                                                   : vlSelf->CoreTop__DOT__EX__DOT__mtvec))
                                                                 : vlSelf->CoreTop__DOT__EX__DOT__mtvec)))))))))))))));
    if ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        vlSelf->CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_172 = vlSelf->CoreTop__DOT__EX__DOT__mip;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_171 = vlSelf->CoreTop__DOT__EX__DOT__mie;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_169 = vlSelf->CoreTop__DOT__EX__DOT__mepc;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_168 = vlSelf->CoreTop__DOT__EX__DOT__mtvec;
    } else if ((0x69U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        vlSelf->CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_172 = vlSelf->CoreTop__DOT__EX__DOT__mip;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_171 = vlSelf->CoreTop__DOT__EX__DOT__mie;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_169 = vlSelf->CoreTop__DOT__EX__DOT__mepc;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_168 = vlSelf->CoreTop__DOT__EX__DOT__mtvec;
    } else if ((0x71U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        vlSelf->CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_172 = vlSelf->CoreTop__DOT__EX__DOT__mip;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_171 = vlSelf->CoreTop__DOT__EX__DOT__mie;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_169 = vlSelf->CoreTop__DOT__EX__DOT__mepc;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_168 = vlSelf->CoreTop__DOT__EX__DOT__mtvec;
    } else {
        if ((0x72U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            vlSelf->CoreTop__DOT__EX__DOT___GEN_167 
                = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                = vlSelf->CoreTop__DOT__EX__DOT__mip;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                = vlSelf->CoreTop__DOT__EX__DOT__mie;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_169 
                = vlSelf->CoreTop__DOT__EX__DOT__mepc;
        } else if ((0x6dU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            vlSelf->CoreTop__DOT__EX__DOT___GEN_167 
                = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                = vlSelf->CoreTop__DOT__EX__DOT__mip;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                = vlSelf->CoreTop__DOT__EX__DOT__mie;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_169 
                = vlSelf->CoreTop__DOT__EX__DOT__mepc;
        } else if ((0x78U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            vlSelf->CoreTop__DOT__EX__DOT___GEN_167 
                = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                = vlSelf->CoreTop__DOT__EX__DOT__mip;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                = vlSelf->CoreTop__DOT__EX__DOT__mie;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_169 
                = vlSelf->CoreTop__DOT__EX__DOT__mepc;
        } else if ((0x79U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            vlSelf->CoreTop__DOT__EX__DOT___GEN_167 
                = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                = vlSelf->CoreTop__DOT__EX__DOT__mip;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                = vlSelf->CoreTop__DOT__EX__DOT__mie;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_169 
                = vlSelf->CoreTop__DOT__EX__DOT__mepc;
        } else {
            if ((0x7aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                vlSelf->CoreTop__DOT__EX__DOT___GEN_167 
                    = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                    = vlSelf->CoreTop__DOT__EX__DOT__mip;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                    = vlSelf->CoreTop__DOT__EX__DOT__mie;
            } else if ((0xdU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                vlSelf->CoreTop__DOT__EX__DOT___GEN_167 
                    = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                    = vlSelf->CoreTop__DOT__EX__DOT__mip;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                    = vlSelf->CoreTop__DOT__EX__DOT__mie;
            } else if ((1U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                vlSelf->CoreTop__DOT__EX__DOT___GEN_167 
                    = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                    = vlSelf->CoreTop__DOT__EX__DOT__mip;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                    = vlSelf->CoreTop__DOT__EX__DOT__mie;
            } else if ((7U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                vlSelf->CoreTop__DOT__EX__DOT___GEN_167 
                    = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                    = vlSelf->CoreTop__DOT__EX__DOT__mip;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                    = vlSelf->CoreTop__DOT__EX__DOT__mie;
            } else if ((0xfU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                vlSelf->CoreTop__DOT__EX__DOT___GEN_167 
                    = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                    = vlSelf->CoreTop__DOT__EX__DOT__mip;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                    = vlSelf->CoreTop__DOT__EX__DOT__mie;
            } else if ((0x12U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                vlSelf->CoreTop__DOT__EX__DOT___GEN_167 
                    = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                    = vlSelf->CoreTop__DOT__EX__DOT__mip;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                    = vlSelf->CoreTop__DOT__EX__DOT__mie;
            } else {
                if ((0x10U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                    vlSelf->CoreTop__DOT__EX__DOT___GEN_167 
                        = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
                    vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                        = vlSelf->CoreTop__DOT__EX__DOT__mip;
                } else if ((0x13U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                    vlSelf->CoreTop__DOT__EX__DOT___GEN_167 
                        = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
                    vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                        = vlSelf->CoreTop__DOT__EX__DOT__mip;
                } else if ((0x43U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                    vlSelf->CoreTop__DOT__EX__DOT___GEN_167 
                        = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
                    vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                        = vlSelf->CoreTop__DOT__EX__DOT__mip;
                } else {
                    vlSelf->CoreTop__DOT__EX__DOT___GEN_167 
                        = ((0x15U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                            ? ((0x300U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                ? vlSelf->CoreTop__DOT__EX__DOT___T_39
                                : vlSelf->CoreTop__DOT__EX__DOT__mstatus)
                            : ((0x16U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? ((0x300U == (0xfffU 
                                               & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                    ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                    : vlSelf->CoreTop__DOT__EX__DOT__mstatus)
                                : vlSelf->CoreTop__DOT__EX__DOT__mstatus));
                    vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                        = vlSelf->CoreTop__DOT__EX__DOT___GEN_60;
                }
                vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                    = vlSelf->CoreTop__DOT__EX__DOT___GEN_80;
            }
            vlSelf->CoreTop__DOT__EX__DOT___GEN_169 
                = vlSelf->CoreTop__DOT__EX__DOT___GEN_120;
        }
        vlSelf->CoreTop__DOT__EX__DOT___GEN_168 = vlSelf->CoreTop__DOT__EX__DOT___GEN_147;
    }
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7 
        = (((QData)((IData)(((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1)));
    VL_EXTEND_WQ(129,64, __Vtemp_h5943c197__0, (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed) 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 
                                                            >> 0x3fU)))
                                                 ? 
                                                (- vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1)
                                                 : vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1));
    VL_EXTEND_WW(129,128, __Vtemp_h97a97068__0, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend);
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[3U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[4U] = 0U;
    } else if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] 
            = __Vtemp_h5943c197__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] 
            = __Vtemp_h5943c197__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] 
            = __Vtemp_h5943c197__0[2U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[3U] 
            = __Vtemp_h5943c197__0[3U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[4U] 
            = __Vtemp_h5943c197__0[4U];
    } else if ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] 
            = (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                 ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U]
                 : (IData)((0x7fffffffffffffffULL & 
                            (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U])))))) 
               << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] 
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
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] 
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
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[3U] 
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
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[4U] 
            = (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                 ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U]
                 : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
                     >> 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U] 
                               << 0x1fU))) >> 0x1fU);
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] 
            = __Vtemp_h97a97068__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] 
            = __Vtemp_h97a97068__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] 
            = __Vtemp_h97a97068__0[2U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[3U] 
            = __Vtemp_h97a97068__0[3U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[4U] 
            = __Vtemp_h97a97068__0[4U];
    }
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2 
        = ((2U & ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 
                           >> 0x3fU)) << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2 
                                                            >> 0x3fU))));
    vlSelf->CoreTop__DOT__ID_io_out_bits_ctrl_signal_inst_valid 
        = (1U & (~ ((0U == ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                             ? 0x40U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))) 
                    | (IData)(vlSelf->CoreTop__DOT__EX_io_is_flush))));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_289 = ((0x48U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? (0xfffffffffffffffeULL 
                                                   & vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1)
                                                : (
                                                   (0x6bU 
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
                                                        ((0x17U 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__csr_data
                                                          : 
                                                         ((0x18U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__csr_data
                                                           : 
                                                          (4ULL 
                                                           + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC))))))))));
    VL_EXTEND_WQ(127,64, __Vtemp_h7a2d1147__0, VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3))));
    VL_EXTEND_WQ(127,64, __Vtemp_h8248920c__0, (((QData)((IData)(
                                                                 ((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp_h14069084__0, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h02754327__0, __Vtemp_h14069084__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)));
    VL_EXTEND_WQ(127,64, __Vtemp_he2247138__0, ((0x75U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? 
                                                (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)))
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                                                                     >> 0x1fU)
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U])))
                                                  : 
                                                 ((6U 
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
                                                      VL_SHIFTRS_QQI(64,64,6, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)))
                                                       : 0ULL))))))));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_207 = ((1U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                                ? (
                                                   ((QData)((IData)(
                                                                    ((0x6eU 
                                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                      ? 
                                                                     __Vtemp_h7a2d1147__0[1U]
                                                                      : 
                                                                     ((0x73U 
                                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                       ? 
                                                                      __Vtemp_h8248920c__0[1U]
                                                                       : 
                                                                      ((0x41U 
                                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                        ? 
                                                                       __Vtemp_h02754327__0[1U]
                                                                        : 
                                                                       __Vtemp_he2247138__0[1U]))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((0x6eU 
                                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                       ? 
                                                                      __Vtemp_h7a2d1147__0[0U]
                                                                       : 
                                                                      ((0x73U 
                                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                        ? 
                                                                       __Vtemp_h8248920c__0[0U]
                                                                        : 
                                                                       ((0x41U 
                                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                         ? 
                                                                        __Vtemp_h02754327__0[0U]
                                                                         : 
                                                                        __Vtemp_he2247138__0[0U]))))))
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                                    ? 
                                                   ((0x6aU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    ((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                      < vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                                                      ? 1ULL
                                                      : 0ULL)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 
                                                     (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                                                       ? 1ULL
                                                       : 0ULL)
                                                      : 0ULL))
                                                    : 0ULL));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_177 = ((0x68U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                : (
                                                   (0x44U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                    : 
                                                   ((0x69U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                     : 
                                                    ((0x71U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                      : 
                                                     ((0x72U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                       : 
                                                      ((0x6dU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                        : 
                                                       ((0x78U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                         : 
                                                        ((0x79U 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                          : 
                                                         ((0x7aU 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                           : 
                                                          ((0xdU 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                             : vlSelf->CoreTop__DOT__EX__DOT___GEN_100)))))))))));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_181 = ((0x1aU 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                : (
                                                   (0x68U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                    : vlSelf->CoreTop__DOT__EX__DOT___GEN_167));
    VL_EXTEND_WQ(65,64, __Vtemp_hb8aebf5c__0, ((((0U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U])))
                                                  : 0ULL) 
                                                | ((1U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U])))
                                                    : 0ULL)) 
                                               | ((2U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                                   ? 
                                                  (- 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))))
                                                   : 0ULL)));
    VL_EXTEND_WQ(65,64, __Vtemp_hed83a4a1__0, (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))));
    if (vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___io_out_bits_result_remainder_T_1[0U] 
            = (__Vtemp_hb8aebf5c__0[0U] | ((3U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                            ? (IData)(
                                                      (- 
                                                       (((QData)((IData)(
                                                                         vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U])))))
                                            : 0U));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___io_out_bits_result_remainder_T_1[1U] 
            = (__Vtemp_hb8aebf5c__0[1U] | ((3U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                            ? (IData)(
                                                      ((- 
                                                        (((QData)((IData)(
                                                                          vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U])))) 
                                                       >> 0x20U))
                                            : 0U));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___io_out_bits_result_remainder_T_1[2U] 
            = (__Vtemp_hb8aebf5c__0[2U] | ((3U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                            ? 1U : 0U));
        vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
            = (((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S
                   : 0ULL) | ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                               ? (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)
                               : 0ULL)) | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                            ? (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)
                                            : 0ULL)) 
               | ((3U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S
                   : 0ULL));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___io_out_bits_result_remainder_T_1[0U] 
            = __Vtemp_hed83a4a1__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___io_out_bits_result_remainder_T_1[1U] 
            = __Vtemp_hed83a4a1__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___io_out_bits_result_remainder_T_1[2U] 
            = __Vtemp_hed83a4a1__0[2U];
        vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S;
    }
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_30 
        = (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT__div__DOT___io_out_bits_result_remainder_T_1[0U] 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(
                                                                  vlSelf->CoreTop__DOT__EX__DOT__div__DOT___io_out_bits_result_remainder_T_1[0U])));
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_26 
        = (((QData)((IData)(((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient)));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_138 = ((0x6dU 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                                : (
                                                   (0x78U 
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
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->CoreTop__DOT__EX__DOT__div__DOT___io_out_bits_result_remainder_T_1[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___io_out_bits_result_remainder_T_1[0U])))
                                                          : 
                                                         ((0x12U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___io_out_bits_result_remainder_T_1[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->CoreTop__DOT__EX__DOT__div__DOT___io_out_bits_result_remainder_T_1[0U])))
                                                           : 
                                                          ((0x10U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_26
                                                            : 
                                                           ((0x13U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient
                                                             : 
                                                            ((0x43U 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient
                                                              : 
                                                             ((0x15U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_57
                                                               : 
                                                              ((0x16U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_57
                                                                : 0ULL))))))))))))));
    vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
            ? ((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                    ? vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3
                    : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                        ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                        : ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                            ? (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                               | vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                            : ((0x69U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                : ((0x71U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                       & vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                                    : ((0x72U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                           ^ vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_3)
                                        : vlSelf->CoreTop__DOT__EX__DOT___GEN_138)))))))
            : ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                ? ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                    ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                    : 0ULL) : ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? 0ULL : vlSelf->CoreTop__DOT__EX__DOT___GEN_207)));
}
