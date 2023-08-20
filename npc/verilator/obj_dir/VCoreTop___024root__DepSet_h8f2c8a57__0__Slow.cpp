// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCoreTop___024root.h"

VL_ATTR_COLD void VCoreTop___024root___eval_static(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_static\n"); );
}

VL_ATTR_COLD void VCoreTop___024root___eval_initial__TOP(VCoreTop___024root* vlSelf);

VL_ATTR_COLD void VCoreTop___024root___eval_initial(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_initial\n"); );
    // Body
    VCoreTop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VCoreTop___024root___eval_final(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_final\n"); );
}

VL_ATTR_COLD void VCoreTop___024root___eval_triggers__stl(VCoreTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCoreTop___024root___dump_triggers__stl(VCoreTop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VCoreTop___024root___eval_stl(VCoreTop___024root* vlSelf);

VL_ATTR_COLD void VCoreTop___024root___eval_settle(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VCoreTop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VCoreTop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/CoreTop.v", 3794, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VCoreTop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCoreTop___024root___dump_triggers__stl(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VCoreTop___024root___nba_sequent__TOP__618__PROF__CoreTop__l5120(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__730__PROF__CoreTop__l4482(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__696__PROF__CoreTop__l4481(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__578__PROF__CoreTop__l32(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__498__PROF__CoreTop__l534(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__499__PROF__CoreTop__l519(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__364__PROF__CoreTop__l3297(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__365__PROF__CoreTop__l3299(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__430__PROF__CoreTop__l3662(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__431__PROF__CoreTop__l3659(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__375__PROF__CoreTop__l5121(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__500__PROF__CoreTop__l5119(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__509__PROF__CoreTop__l1584(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__439__PROF__CoreTop__l2199(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__495__PROF__CoreTop__l920(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__379__PROF__CoreTop__l1785(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__579__PROF__CoreTop__l1786(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__580__PROF__CoreTop__l1799(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__445__PROF__CoreTop__l2962(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__681__PROF__CSR_DIFF__l10(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__429__PROF__CSR_DIFF__l11(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__432__PROF__CSR_DIFF__l12(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__682__PROF__CSR_DIFF__l13(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__382__PROF__CoreTop__l488(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__373__PROF__DIP_model__l85(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__442__PROF__DIP_model__l86(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__443__PROF__DIP_model__l87(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__384__PROF__DIP_model__l88(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__436__PROF__DIP_model__l89(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__437__PROF__DIP_model__l90(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__387__PROF__DIP_model__l91(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l1295(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__731__PROF__CoreTop__l4415(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__533__PROF__CoreTop__l5145(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__732__PROF__CoreTop__l4416(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__697__PROF__CoreTop__l4527(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__490__PROF__CoreTop__l3583(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__393__PROF__DIP_model__l52(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__394__PROF__DIP_model__l53(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__395__PROF__DIP_model__l54(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__396__PROF__DIP_model__l55(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__397__PROF__DIP_model__l56(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__398__PROF__DIP_model__l57(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__399__PROF__DIP_model__l58(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__400__PROF__DIP_model__l59(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__401__PROF__DIP_model__l60(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__402__PROF__DIP_model__l61(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__403__PROF__DIP_model__l62(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__404__PROF__DIP_model__l63(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__405__PROF__DIP_model__l64(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__406__PROF__DIP_model__l65(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__407__PROF__DIP_model__l66(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__408__PROF__DIP_model__l67(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__409__PROF__DIP_model__l68(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__410__PROF__DIP_model__l69(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__411__PROF__DIP_model__l70(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__412__PROF__DIP_model__l71(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__413__PROF__DIP_model__l72(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__414__PROF__DIP_model__l73(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__415__PROF__DIP_model__l74(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__416__PROF__DIP_model__l75(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__417__PROF__DIP_model__l76(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__418__PROF__DIP_model__l77(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__419__PROF__DIP_model__l78(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__420__PROF__DIP_model__l79(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__421__PROF__DIP_model__l80(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__422__PROF__DIP_model__l81(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__423__PROF__DIP_model__l82(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__424__PROF__DIP_model__l83(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__489__PROF__SRAMTemp__l320(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__769__PROF__CoreTop__l1379(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__542__PROF__CoreTop__l5131(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__599__PROF__CoreTop__l1643(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__581__PROF__CoreTop__l1985(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__582__PROF__CoreTop__l1987(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l5132(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__389__PROF__CoreTop__l1784(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__390__PROF__CoreTop__l1791(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__698__PROF__CoreTop__l4497(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__488__PROF__CoreTop__l2794(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__545__PROF__CoreTop__l5135(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l1119(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__435__PROF__CoreTop__l3571(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__425__PROF__CoreTop__l1798(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__427__PROF__CoreTop__l1805(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__772__PROF__CoreTop__l1133(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__773__PROF__CoreTop__l1131(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__531__PROF__CoreTop__l2463(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__774__PROF__CoreTop__l1045(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__503__PROF__CoreTop__l1147(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__737__PROF__CoreTop__l1145(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__510__PROF__CoreTop__l1574(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__434__PROF__CoreTop__l1443(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__468__PROF__CoreTop__l524(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__747__PROF__CoreTop__l2103(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__748__PROF__CoreTop__l2094(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__717__PROF__CoreTop__l4540(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__530__PROF__CoreTop__l2447(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__485__PROF__DIP_model__l93(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__777__PROF__CoreTop__l5167(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__720__PROF__CoreTop__l3664(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__721__PROF__CoreTop__l3666(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l1990(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__596__PROF__CoreTop__l1989(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__576__PROF__CoreTop__l3660(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__680__PROF__CoreTop__l3661(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__577__PROF__CoreTop__l4566(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__718__PROF__CoreTop__l4510(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__583__PROF__CoreTop__l1631(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__770__PROF__CoreTop__l1118(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__549__PROF__CoreTop__l1324(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__781__PROF__CoreTop__l1044(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__782__PROF__CoreTop__l1134(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__541__PROF__CoreTop__l2463(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__749__PROF__CoreTop__l1247(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__750__PROF__CoreTop__l1251(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__751__PROF__CoreTop__l1154(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__752__PROF__CoreTop__l1149(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__753__PROF__CoreTop__l1280(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__754__PROF__CoreTop__l1283(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__527__PROF__CoreTop__l3594(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__480__PROF__CoreTop__l1464(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__733__PROF__CoreTop__l3667(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__734__PROF__CoreTop__l3668(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__679__PROF__CoreTop__l2135(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__729__PROF__CoreTop__l5139(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__778__PROF__CoreTop__l653(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__788__PROF__CoreTop__l675(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__789__PROF__CoreTop__l1047(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__790__PROF__CoreTop__l1046(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__761__PROF__CoreTop__l1247(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__762__PROF__CoreTop__l1251(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__763__PROF__CoreTop__l1152(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__771__PROF__CoreTop__l1313(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__504__PROF__CoreTop__l1515(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__505__PROF__CoreTop__l3575(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__506__PROF__CoreTop__l1985(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__507__PROF__CoreTop__l1987(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__539__PROF__CoreTop__l3596(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__700__PROF__CoreTop__l5128(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__741__PROF__CoreTop__l399(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__742__PROF__CoreTop__l279(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__743__PROF__CoreTop__l338(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__744__PROF__CoreTop__l447(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__745__PROF__CoreTop__l447(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__746__PROF__CoreTop__l217(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__793__PROF__CoreTop__l682(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__794__PROF__CoreTop__l679(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__768__PROF__CoreTop__l1264(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__779__PROF__CoreTop__l1315(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__780__PROF__CoreTop__l1323(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__522__PROF__CoreTop__l3574(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__523__PROF__CoreTop__l2796(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__524__PROF__CoreTop__l1990(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__525__PROF__CoreTop__l1989(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__556__PROF__CoreTop__l5306(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__557__PROF__CoreTop__l3568(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__558__PROF__CoreTop__l3591(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__559__PROF__CoreTop__l2743(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l5300(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l5303(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l2731(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l5310(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l5309(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l5308(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__567__PROF__CoreTop__l5299(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__568__PROF__CoreTop__l5302(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__757__PROF__CoreTop__l406(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__758__PROF__CoreTop__l294(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__759__PROF__CoreTop__l353(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__760__PROF__CoreTop__l232(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__796__PROF__CoreTop__l684(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__797__PROF__CoreTop__l929(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__798__PROF__CoreTop__l928(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__799__PROF__CoreTop__l681(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__785__PROF__CoreTop__l5126(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__787__PROF__CoreTop__l1326(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__566__PROF__CoreTop__l5307(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__536__PROF__CoreTop__l2826(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__537__PROF__CoreTop__l2917(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__538__PROF__CoreTop__l2790(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__590__PROF__CoreTop__l2732(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l2485(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__765__PROF__CoreTop__l309(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__766__PROF__CoreTop__l368(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__767__PROF__CoreTop__l247(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__803__PROF__CoreTop__l911(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__804__PROF__CoreTop__l716(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__805__PROF__CoreTop__l739(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__806__PROF__CoreTop__l767(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__807__PROF__CoreTop__l790(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__808__PROF__CoreTop__l1165(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__809__PROF__CoreTop__l1162(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__810__PROF__CoreTop__l825(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__811__PROF__CoreTop__l848(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__812__PROF__CoreTop__l876(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__813__PROF__CoreTop__l899(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__550__PROF__CoreTop__l2891(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__551__PROF__CoreTop__l2899(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__552__PROF__CoreTop__l1788(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__553__PROF__CoreTop__l3006(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l2985(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__555__PROF__CoreTop__l3010(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__603__PROF__CoreTop__l2486(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__604__PROF__CoreTop__l2488(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__605__PROF__SRAMTemp__l248(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__606__PROF__CoreTop__l5265(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l5295(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l2494(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__1__PROF__SRAMTemp__l301(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__610__PROF__CoreTop__l2496(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l2490(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__775__PROF__CoreTop__l383(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__776__PROF__CoreTop__l262(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__817__PROF__CoreTop__l911(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__818__PROF__CoreTop__l1212(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__819__PROF__CoreTop__l906(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__586__PROF__CoreTop__l2893(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__587__PROF__CoreTop__l2901(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__588__PROF__CoreTop__l1786(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__589__PROF__CoreTop__l1799(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__686__PROF__CoreTop__l2101(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__687__PROF__SRAMTemp__l270(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__688__PROF__CoreTop__l3290(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__689__PROF__CoreTop__l3584(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l2111(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l5226(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__692__PROF__CoreTop__l3586(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__693__PROF__CoreTop__l3612(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__694__PROF__CoreTop__l3580(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__695__PROF__CoreTop__l3294(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__783__PROF__CoreTop__l387(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__784__PROF__CoreTop__l264(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__824__PROF__CoreTop__l1372(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l926(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__602__PROF__CoreTop__l2897(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__706__PROF__CoreTop__l2744(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__707__PROF__CoreTop__l2764(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1547(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1555(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__710__PROF__CoreTop__l2746(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__711__PROF__CoreTop__l2738(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__712__PROF__CoreTop__l3293(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__713__PROF__CoreTop__l2741(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2758(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__715__PROF__CoreTop__l3289(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__716__PROF__CoreTop__l1569(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__791__PROF__CoreTop__l446(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__685__PROF__CoreTop__l2913(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__724__PROF__CoreTop__l2767(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__725__PROF__CoreTop__l2768(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1585(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__727__PROF__CoreTop__l4565(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__728__PROF__CoreTop__l5165(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__705__PROF__CoreTop__l1785(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__739__PROF__CoreTop__l4592(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__740__PROF__CoreTop__l1356(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__792__PROF__CoreTop__l1327(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__786__PROF__CoreTop__l5124(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__756__PROF__CoreTop__l5125(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__795__PROF__CoreTop__l5130(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__800__PROF__CoreTop__l40(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__801__PROF__CoreTop__l4408(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__802__PROF__CoreTop__l5136(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__814__PROF__CoreTop__l34(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__815__PROF__CoreTop__l5262(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__816__PROF__CoreTop__l1353(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__820__PROF__CoreTop__l5127(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__821__PROF__CoreTop__l2099(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__822__PROF__CoreTop__l4545(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__823__PROF__CoreTop__l4412(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__826__PROF__CoreTop__l4570(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__827__PROF__CoreTop__l4549(VCoreTop___024root* vlSelf);

VL_ATTR_COLD void VCoreTop___024root___eval_stl(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VCoreTop___024root___nba_sequent__TOP__618__PROF__CoreTop__l5120(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VCoreTop___024root___nba_sequent__TOP__730__PROF__CoreTop__l4482(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__696__PROF__CoreTop__l4481(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__578__PROF__CoreTop__l32(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__498__PROF__CoreTop__l534(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__499__PROF__CoreTop__l519(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__364__PROF__CoreTop__l3297(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__365__PROF__CoreTop__l3299(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__430__PROF__CoreTop__l3662(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__431__PROF__CoreTop__l3659(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__375__PROF__CoreTop__l5121(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__500__PROF__CoreTop__l5119(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__509__PROF__CoreTop__l1584(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__439__PROF__CoreTop__l2199(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__495__PROF__CoreTop__l920(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__379__PROF__CoreTop__l1785(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__579__PROF__CoreTop__l1786(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__580__PROF__CoreTop__l1799(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__445__PROF__CoreTop__l2962(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__681__PROF__CSR_DIFF__l10(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__429__PROF__CSR_DIFF__l11(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__432__PROF__CSR_DIFF__l12(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__682__PROF__CSR_DIFF__l13(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__382__PROF__CoreTop__l488(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__373__PROF__DIP_model__l85(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__442__PROF__DIP_model__l86(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__443__PROF__DIP_model__l87(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__384__PROF__DIP_model__l88(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__436__PROF__DIP_model__l89(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__437__PROF__DIP_model__l90(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__387__PROF__DIP_model__l91(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l1295(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__731__PROF__CoreTop__l4415(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__533__PROF__CoreTop__l5145(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__732__PROF__CoreTop__l4416(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__697__PROF__CoreTop__l4527(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__490__PROF__CoreTop__l3583(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__393__PROF__DIP_model__l52(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__394__PROF__DIP_model__l53(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__395__PROF__DIP_model__l54(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__396__PROF__DIP_model__l55(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__397__PROF__DIP_model__l56(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__398__PROF__DIP_model__l57(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__399__PROF__DIP_model__l58(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__400__PROF__DIP_model__l59(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__401__PROF__DIP_model__l60(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__402__PROF__DIP_model__l61(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__403__PROF__DIP_model__l62(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__404__PROF__DIP_model__l63(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__405__PROF__DIP_model__l64(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__406__PROF__DIP_model__l65(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__407__PROF__DIP_model__l66(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__408__PROF__DIP_model__l67(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__409__PROF__DIP_model__l68(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__410__PROF__DIP_model__l69(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__411__PROF__DIP_model__l70(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__412__PROF__DIP_model__l71(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__413__PROF__DIP_model__l72(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__414__PROF__DIP_model__l73(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__415__PROF__DIP_model__l74(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__416__PROF__DIP_model__l75(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__417__PROF__DIP_model__l76(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__418__PROF__DIP_model__l77(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__419__PROF__DIP_model__l78(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__420__PROF__DIP_model__l79(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__421__PROF__DIP_model__l80(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__422__PROF__DIP_model__l81(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__423__PROF__DIP_model__l82(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__424__PROF__DIP_model__l83(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__489__PROF__SRAMTemp__l320(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__769__PROF__CoreTop__l1379(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__542__PROF__CoreTop__l5131(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__599__PROF__CoreTop__l1643(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__581__PROF__CoreTop__l1985(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__582__PROF__CoreTop__l1987(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l5132(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__389__PROF__CoreTop__l1784(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__390__PROF__CoreTop__l1791(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__698__PROF__CoreTop__l4497(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__488__PROF__CoreTop__l2794(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__545__PROF__CoreTop__l5135(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l1119(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__435__PROF__CoreTop__l3571(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__425__PROF__CoreTop__l1798(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__427__PROF__CoreTop__l1805(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__772__PROF__CoreTop__l1133(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__773__PROF__CoreTop__l1131(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__531__PROF__CoreTop__l2463(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__774__PROF__CoreTop__l1045(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__503__PROF__CoreTop__l1147(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__737__PROF__CoreTop__l1145(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__510__PROF__CoreTop__l1574(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__434__PROF__CoreTop__l1443(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__468__PROF__CoreTop__l524(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__747__PROF__CoreTop__l2103(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__748__PROF__CoreTop__l2094(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__717__PROF__CoreTop__l4540(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__530__PROF__CoreTop__l2447(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__485__PROF__DIP_model__l93(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__777__PROF__CoreTop__l5167(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__720__PROF__CoreTop__l3664(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__721__PROF__CoreTop__l3666(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l1990(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__596__PROF__CoreTop__l1989(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__576__PROF__CoreTop__l3660(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__680__PROF__CoreTop__l3661(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__577__PROF__CoreTop__l4566(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__718__PROF__CoreTop__l4510(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__583__PROF__CoreTop__l1631(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__770__PROF__CoreTop__l1118(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__549__PROF__CoreTop__l1324(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__781__PROF__CoreTop__l1044(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__782__PROF__CoreTop__l1134(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__541__PROF__CoreTop__l2463(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__749__PROF__CoreTop__l1247(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__750__PROF__CoreTop__l1251(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__751__PROF__CoreTop__l1154(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__752__PROF__CoreTop__l1149(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__753__PROF__CoreTop__l1280(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__754__PROF__CoreTop__l1283(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__527__PROF__CoreTop__l3594(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__480__PROF__CoreTop__l1464(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__733__PROF__CoreTop__l3667(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__734__PROF__CoreTop__l3668(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__679__PROF__CoreTop__l2135(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__729__PROF__CoreTop__l5139(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__778__PROF__CoreTop__l653(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__788__PROF__CoreTop__l675(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__789__PROF__CoreTop__l1047(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__790__PROF__CoreTop__l1046(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__761__PROF__CoreTop__l1247(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__762__PROF__CoreTop__l1251(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__763__PROF__CoreTop__l1152(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__771__PROF__CoreTop__l1313(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__504__PROF__CoreTop__l1515(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__505__PROF__CoreTop__l3575(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__506__PROF__CoreTop__l1985(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__507__PROF__CoreTop__l1987(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__539__PROF__CoreTop__l3596(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__700__PROF__CoreTop__l5128(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__741__PROF__CoreTop__l399(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__742__PROF__CoreTop__l279(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__743__PROF__CoreTop__l338(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__744__PROF__CoreTop__l447(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__745__PROF__CoreTop__l447(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__746__PROF__CoreTop__l217(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__793__PROF__CoreTop__l682(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__794__PROF__CoreTop__l679(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__768__PROF__CoreTop__l1264(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__779__PROF__CoreTop__l1315(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__780__PROF__CoreTop__l1323(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__522__PROF__CoreTop__l3574(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__523__PROF__CoreTop__l2796(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__524__PROF__CoreTop__l1990(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__525__PROF__CoreTop__l1989(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__556__PROF__CoreTop__l5306(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__557__PROF__CoreTop__l3568(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__558__PROF__CoreTop__l3591(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__559__PROF__CoreTop__l2743(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l5300(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l5303(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l2731(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l5310(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l5309(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l5308(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__567__PROF__CoreTop__l5299(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__568__PROF__CoreTop__l5302(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__757__PROF__CoreTop__l406(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__758__PROF__CoreTop__l294(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__759__PROF__CoreTop__l353(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__760__PROF__CoreTop__l232(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__796__PROF__CoreTop__l684(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__797__PROF__CoreTop__l929(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__798__PROF__CoreTop__l928(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__799__PROF__CoreTop__l681(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__785__PROF__CoreTop__l5126(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__787__PROF__CoreTop__l1326(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__566__PROF__CoreTop__l5307(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__536__PROF__CoreTop__l2826(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__537__PROF__CoreTop__l2917(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__538__PROF__CoreTop__l2790(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__590__PROF__CoreTop__l2732(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l2485(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__765__PROF__CoreTop__l309(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__766__PROF__CoreTop__l368(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__767__PROF__CoreTop__l247(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__803__PROF__CoreTop__l911(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__804__PROF__CoreTop__l716(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__805__PROF__CoreTop__l739(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__806__PROF__CoreTop__l767(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__807__PROF__CoreTop__l790(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__808__PROF__CoreTop__l1165(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__809__PROF__CoreTop__l1162(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__810__PROF__CoreTop__l825(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__811__PROF__CoreTop__l848(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__812__PROF__CoreTop__l876(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__813__PROF__CoreTop__l899(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__550__PROF__CoreTop__l2891(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__551__PROF__CoreTop__l2899(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__552__PROF__CoreTop__l1788(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__553__PROF__CoreTop__l3006(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l2985(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__555__PROF__CoreTop__l3010(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__603__PROF__CoreTop__l2486(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__604__PROF__CoreTop__l2488(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__605__PROF__SRAMTemp__l248(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__606__PROF__CoreTop__l5265(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l5295(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l2494(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__1__PROF__SRAMTemp__l301(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__610__PROF__CoreTop__l2496(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l2490(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__775__PROF__CoreTop__l383(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__776__PROF__CoreTop__l262(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__817__PROF__CoreTop__l911(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__818__PROF__CoreTop__l1212(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__819__PROF__CoreTop__l906(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__586__PROF__CoreTop__l2893(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__587__PROF__CoreTop__l2901(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__588__PROF__CoreTop__l1786(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__589__PROF__CoreTop__l1799(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__686__PROF__CoreTop__l2101(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__687__PROF__SRAMTemp__l270(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__688__PROF__CoreTop__l3290(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__689__PROF__CoreTop__l3584(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l2111(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l5226(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__692__PROF__CoreTop__l3586(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__693__PROF__CoreTop__l3612(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__694__PROF__CoreTop__l3580(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__695__PROF__CoreTop__l3294(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__783__PROF__CoreTop__l387(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__784__PROF__CoreTop__l264(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__824__PROF__CoreTop__l1372(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l926(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__602__PROF__CoreTop__l2897(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__706__PROF__CoreTop__l2744(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__707__PROF__CoreTop__l2764(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1547(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1555(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__710__PROF__CoreTop__l2746(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__711__PROF__CoreTop__l2738(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__712__PROF__CoreTop__l3293(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__713__PROF__CoreTop__l2741(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2758(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__715__PROF__CoreTop__l3289(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__716__PROF__CoreTop__l1569(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__791__PROF__CoreTop__l446(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__685__PROF__CoreTop__l2913(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__724__PROF__CoreTop__l2767(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__725__PROF__CoreTop__l2768(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1585(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__727__PROF__CoreTop__l4565(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__728__PROF__CoreTop__l5165(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__705__PROF__CoreTop__l1785(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__739__PROF__CoreTop__l4592(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__740__PROF__CoreTop__l1356(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__792__PROF__CoreTop__l1327(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__786__PROF__CoreTop__l5124(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__756__PROF__CoreTop__l5125(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__795__PROF__CoreTop__l5130(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__800__PROF__CoreTop__l40(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__801__PROF__CoreTop__l4408(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__802__PROF__CoreTop__l5136(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__814__PROF__CoreTop__l34(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__815__PROF__CoreTop__l5262(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__816__PROF__CoreTop__l1353(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__820__PROF__CoreTop__l5127(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__821__PROF__CoreTop__l2099(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__822__PROF__CoreTop__l4545(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__823__PROF__CoreTop__l4412(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__826__PROF__CoreTop__l4570(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__827__PROF__CoreTop__l4549(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCoreTop___024root___dump_triggers__ico(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCoreTop___024root___dump_triggers__act(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCoreTop___024root___dump_triggers__nba(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCoreTop___024root___ctor_var_reset(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_pc = VL_RAND_RESET_Q(64);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__IF_io_branch_io_is_branch = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__IF_io_branch_io_dnpc = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__IF_io_out_bits_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__IF_io_flush = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__IF_io_mret_flush = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__IF_io_excp_flush = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__IF_io_wb_stall = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__IF_io_ex_stall = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ID_io_in_bits_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_out_ready = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx = VL_RAND_RESET_I(12);
    vlSelf->CoreTop__DOT__EX_io_csr_rd_io_rd_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->CoreTop__DOT__rf_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__WB_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE_io_flush = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMEM_rd_id = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__MMEM_rd_resp = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMEM_wd_ready = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMEM_wd_last = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMEM_wr_id = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb = VL_RAND_RESET_I(8);
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___ICACHE_io_flush_T_1 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__head = VL_RAND_RESET_I(6);
    vlSelf->CoreTop__DOT__tail = VL_RAND_RESET_I(6);
    vlSelf->CoreTop__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__buffer_0_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_0_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_1_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_1_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_2_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_2_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_3_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_3_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_4_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_4_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_5_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_5_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_6_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_6_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_7_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_7_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_8_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_8_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_9_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_9_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_10_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_10_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_11_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_11_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_12_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_12_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_13_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_13_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_14_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_14_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_15_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_15_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_16_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_16_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_17_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_17_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_18_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_18_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_19_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_19_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_20_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_20_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_21_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_21_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_22_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_22_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_23_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_23_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_24_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_24_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_25_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_25_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_26_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_26_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_27_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_27_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_28_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_28_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_29_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_29_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_30_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_30_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__buffer_31_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__buffer_31_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT___tail_T_1 = VL_RAND_RESET_I(6);
    vlSelf->CoreTop__DOT___head_T_1 = VL_RAND_RESET_I(6);
    vlSelf->CoreTop__DOT___GEN_145 = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT___GEN_158 = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT___GEN_177 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT___GEN_190 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT___T_8 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___GEN_197 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_ertn_flush = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_excp_flush = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_csr_csr_idx = VL_RAND_RESET_I(12);
    vlSelf->CoreTop__DOT___T_13 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___T_14 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___GEN_221 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_ertn_flush = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_excp_flush = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_en = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_idx = VL_RAND_RESET_I(12);
    vlSelf->CoreTop__DOT__valid_2 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___GEN_248 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_ertn_flush = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_excp_flush = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_en = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx = VL_RAND_RESET_I(12);
    vlSelf->CoreTop__DOT__DIP_io_is_break_REG = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__DIP_io_inst_REG = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__DIP_io_is_skip_REG = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__DIP_io_pc_REG = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__DIP_io_dnpc_REG = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__IF__DOT__temp = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__IF__DOT___temp_T_10 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_144 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_159 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_174 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_189 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_209 = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_224 = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_239 = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_268 = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_283 = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_298 = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_313 = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2 = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_363 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ID__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__is_mul = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__is_divw = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_26 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_30 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_47 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(127, vlSelf->CoreTop__DOT__EX__DOT___GEN_76);
    vlSelf->CoreTop__DOT__EX__DOT___compar_result_T = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_4 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__branch_flag = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__is_branch = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__is_jump = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_2 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_4 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_hd56c994a__0 = 0;
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h37196788__0 = 0;
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0 = 0;
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0 = 0;
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_out_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier);
    VL_RAND_RESET_W(132, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
    VL_RAND_RESET_W(132, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___count_T_5 = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(132, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp);
    VL_RAND_RESET_W(133, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_flow_div_signed = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src2 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__NewReq = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aVal = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bSign = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bVal = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value = VL_RAND_RESET_I(6);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_25 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_51 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_79 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_105 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_136 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_162 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_190 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_216 = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__cntShift = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___GEN_6 = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___GEN_20 = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__DIP__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->CoreTop__DOT__DIP__DOT__IN[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM__DOT__addr_temp = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27 = VL_RAND_RESET_I(8);
    vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44 = VL_RAND_RESET_I(16);
    vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__lru[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0 = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__ICACHE__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__ICACHE__DOT__read_state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg);
    vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_10 = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_17 = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_19 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51);
    vlSelf->CoreTop__DOT__ICACHE__DOT___io_in_rdata_rep_bits_rdata_T_1 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[__Vi0]);
    }
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vi0]);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[__Vi0] = VL_RAND_RESET_Q(53);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data = VL_RAND_RESET_Q(53);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[__Vi0] = VL_RAND_RESET_Q(53);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMEM__DOT__read_state = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMEM__DOT__write_state = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMEM__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MMEM__DOT__read_count = VL_RAND_RESET_I(8);
    vlSelf->CoreTop__DOT__ARBITER__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_55 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_98 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0 = 0;
    vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0 = 0;
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask = VL_RAND_RESET_I(8);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_raddr_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_waddr_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write = VL_RAND_RESET_I(4);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_10 = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_14 = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_22 = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_24 = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_30 = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_32 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_89 = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3 = VL_RAND_RESET_I(8);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo);
    VL_RAND_RESET_W(256, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo);
    VL_RAND_RESET_W(128, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo);
    VL_RAND_RESET_W(256, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT____VdfgTmp_h9d851aea__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0[__Vi0]);
    }
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data);
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vi0]);
    }
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0[__Vi0] = VL_RAND_RESET_Q(53);
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data = VL_RAND_RESET_Q(53);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data = VL_RAND_RESET_Q(53);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1[__Vi0] = VL_RAND_RESET_Q(53);
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data = VL_RAND_RESET_Q(53);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_2 = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_8 = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_10 = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__CSR__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT__mie = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT__mip = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT___mstatus_T = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT___GEN_1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT___GEN_2 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT___mstatus_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT___GEN_8 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT___GEN_9 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT____VdfgTmp_h0abbaf32__0 = 0;
    vlSelf->CoreTop__DOT__CSR__DOT____VdfgTmp_had87db98__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__VdfgTmp_ha116befc__0 = 0;
    vlSelf->__VdfgTmp_ha248cb35__0 = 0;
    vlSelf->__VdfgTmp_h5a5a8c61__0 = 0;
    vlSelf->__Vtask_pmem_read__2__rdata = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__rf__v0 = 0;
    vlSelf->__Vdlyvval__CoreTop__DOT__rf__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__CoreTop__DOT__rf__v0 = 0;
    VL_RAND_RESET_W(66, vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier);
    vlSelf->__Vdly__CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__read_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v0 = 0;
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v0 = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v1 = 0;
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v1 = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v2 = 0;
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v2 = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v3 = 0;
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v3 = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0 = 0;
    vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0 = VL_RAND_RESET_Q(53);
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0 = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0 = 0;
    VL_RAND_RESET_W(512, vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0);
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0 = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0 = 0;
    VL_RAND_RESET_W(512, vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0);
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0 = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 0;
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0 = 0;
    vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0 = VL_RAND_RESET_Q(53);
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0 = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 0;
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 0;
    vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_count = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_addr_buffer = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__write_addr_buffer = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0 = 0;
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0__v0 = 0;
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v0 = 0;
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v0 = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v1 = 0;
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v1 = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v2 = 0;
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v2 = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v3 = 0;
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru__v3 = 0;
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0 = 0;
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1__v0 = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0 = 0;
    vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0 = VL_RAND_RESET_Q(53);
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0__v0 = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0 = 0;
    VL_RAND_RESET_W(512, vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0);
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1__v0 = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0 = 0;
    VL_RAND_RESET_W(512, vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0);
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0__v0 = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 0;
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1__v0 = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0 = 0;
    vlSelf->__Vdlyvval__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0 = VL_RAND_RESET_Q(53);
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1__v0 = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 0;
    vlSelf->__Vdlyvset__CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0__v0 = 0;
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
