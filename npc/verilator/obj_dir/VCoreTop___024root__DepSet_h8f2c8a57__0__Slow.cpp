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
                VL_FATAL_MT("vsrc/CoreTop.v", 3612, "", "Settle region did not converge.");
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

void VCoreTop___024root___nba_sequent__TOP__645__PROF__CoreTop__l4793(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__764__PROF__CoreTop__l4227(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__731__PROF__CoreTop__l4226(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__589__PROF__CoreTop__l22(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__559__PROF__CoreTop__l1202(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l1203(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__507__PROF__CoreTop__l510(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__508__PROF__CoreTop__l495(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__383__PROF__CoreTop__l655(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__384__PROF__CoreTop__l660(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__375__PROF__CoreTop__l658(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__363__PROF__CoreTop__l3293(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__364__PROF__CoreTop__l3295(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__378__PROF__CoreTop__l4794(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__505__PROF__CoreTop__l4792(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__502__PROF__CoreTop__l1607(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__382__PROF__CoreTop__l2195(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__385__PROF__CoreTop__l659(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__376__PROF__CoreTop__l1784(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__590__PROF__CoreTop__l1785(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l1798(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__454__PROF__CoreTop__l2958(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__448__PROF__CSR_DIFF__l10(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__432__PROF__CSR_DIFF__l11(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__434__PROF__CSR_DIFF__l12(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__436__PROF__CSR_DIFF__l13(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__392__PROF__CoreTop__l464(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l1205(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__371__PROF__DIP_model__l85(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__445__PROF__DIP_model__l86(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__446__PROF__DIP_model__l87(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__389__PROF__DIP_model__l88(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__372__PROF__DIP_model__l89(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__373__PROF__DIP_model__l90(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__394__PROF__DIP_model__l91(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__386__PROF__CoreTop__l667(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__612__PROF__CoreTop__l1180(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__765__PROF__CoreTop__l4160(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__545__PROF__CoreTop__l4812(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__766__PROF__CoreTop__l4161(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__732__PROF__CoreTop__l4272(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__499__PROF__CoreTop__l3579(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__400__PROF__DIP_model__l52(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__401__PROF__DIP_model__l53(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__402__PROF__DIP_model__l54(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__403__PROF__DIP_model__l55(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__404__PROF__DIP_model__l56(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__405__PROF__DIP_model__l57(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__406__PROF__DIP_model__l58(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__407__PROF__DIP_model__l59(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__408__PROF__DIP_model__l60(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__409__PROF__DIP_model__l61(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__410__PROF__DIP_model__l62(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__411__PROF__DIP_model__l63(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__412__PROF__DIP_model__l64(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__413__PROF__DIP_model__l65(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__414__PROF__DIP_model__l66(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__415__PROF__DIP_model__l67(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__416__PROF__DIP_model__l68(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__417__PROF__DIP_model__l69(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__418__PROF__DIP_model__l70(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__419__PROF__DIP_model__l71(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__420__PROF__DIP_model__l72(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__421__PROF__DIP_model__l73(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__422__PROF__DIP_model__l74(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__423__PROF__DIP_model__l75(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__424__PROF__DIP_model__l76(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__425__PROF__DIP_model__l77(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__426__PROF__DIP_model__l78(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__427__PROF__DIP_model__l79(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__428__PROF__DIP_model__l80(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__429__PROF__DIP_model__l81(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__430__PROF__DIP_model__l82(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__431__PROF__DIP_model__l83(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__498__PROF__SRAMTemp__l320(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l1986(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__593__PROF__CoreTop__l1984(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__438__PROF__CoreTop__l1783(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__439__PROF__CoreTop__l1790(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__380__PROF__CoreTop__l681(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__387__PROF__CoreTop__l682(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__381__PROF__CoreTop__l683(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__388__PROF__CoreTop__l684(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__497__PROF__CoreTop__l2790(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__566__PROF__CoreTop__l940(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l873(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__733__PROF__CoreTop__l4242(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__609__PROF__CoreTop__l887(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__610__PROF__CoreTop__l885(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__444__PROF__CoreTop__l3567(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__396__PROF__CoreTop__l1797(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__440__PROF__CoreTop__l1804(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l1292(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__544__PROF__CoreTop__l2459(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__514__PROF__CoreTop__l907(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__613__PROF__CoreTop__l905(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__473__PROF__CoreTop__l1599(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__443__PROF__CoreTop__l1468(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__474__PROF__CoreTop__l500(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__469__PROF__CoreTop__l676(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l705(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__777__PROF__CoreTop__l2099(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__779__PROF__CoreTop__l2091(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__752__PROF__CoreTop__l4285(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l2443(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__491__PROF__DIP_model__l93(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__616__PROF__CoreTop__l1989(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__617__PROF__CoreTop__l1988(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l872(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__574__PROF__CoreTop__l1226(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__753__PROF__CoreTop__l4255(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__630__PROF__CoreTop__l1291(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__631__PROF__CoreTop__l888(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__570__PROF__CoreTop__l2459(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__632__PROF__CoreTop__l1132(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__633__PROF__CoreTop__l1136(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__634__PROF__CoreTop__l914(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__635__PROF__CoreTop__l909(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__636__PROF__CoreTop__l941(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__637__PROF__CoreTop__l1165(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__638__PROF__CoreTop__l1168(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__506__PROF__CoreTop__l3590(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__490__PROF__CoreTop__l1489(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__788__PROF__CoreTop__l2092(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__706__PROF__CoreTop__l2131(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__629__PROF__CoreTop__l629(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__763__PROF__CoreTop__l4806(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__719__PROF__CoreTop__l1293(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__720__PROF__CoreTop__l1294(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__721__PROF__CoreTop__l1132(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__722__PROF__CoreTop__l1136(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__723__PROF__CoreTop__l912(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__724__PROF__CoreTop__l997(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__725__PROF__CoreTop__l1017(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__726__PROF__CoreTop__l1037(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__727__PROF__CoreTop__l1057(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__728__PROF__CoreTop__l1084(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__729__PROF__CoreTop__l1104(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__730__PROF__CoreTop__l1201(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__515__PROF__CoreTop__l1540(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__516__PROF__CoreTop__l3571(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__517__PROF__CoreTop__l1984(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__518__PROF__CoreTop__l1986(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__527__PROF__CoreTop__l3592(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__754__PROF__CoreTop__l4800(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__735__PROF__CoreTop__l4801(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__771__PROF__CoreTop__l379(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__772__PROF__CoreTop__l259(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__773__PROF__CoreTop__l197(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__774__PROF__CoreTop__l318(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__775__PROF__CoreTop__l426(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__776__PROF__CoreTop__l426(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__742__PROF__CoreTop__l685(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__743__PROF__CoreTop__l1149(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__744__PROF__CoreTop__l1109(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__745__PROF__CoreTop__l1108(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__746__PROF__CoreTop__l1112(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__747__PROF__CoreTop__l1106(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__748__PROF__CoreTop__l1105(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__749__PROF__CoreTop__l1114(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__750__PROF__CoreTop__l1207(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__751__PROF__CoreTop__l1225(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__534__PROF__CoreTop__l3570(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l2792(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__536__PROF__CoreTop__l1989(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__537__PROF__CoreTop__l1988(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__546__PROF__CoreTop__l4956(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__547__PROF__CoreTop__l3564(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__548__PROF__CoreTop__l3587(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__549__PROF__CoreTop__l2739(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__550__PROF__CoreTop__l4950(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__551__PROF__CoreTop__l4953(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__552__PROF__CoreTop__l2727(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__553__PROF__CoreTop__l4960(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l4959(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__555__PROF__CoreTop__l4958(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__556__PROF__CoreTop__l4949(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__557__PROF__CoreTop__l4952(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__783__PROF__CoreTop__l386(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__784__PROF__CoreTop__l274(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__785__PROF__CoreTop__l212(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__786__PROF__CoreTop__l333(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__758__PROF__CoreTop__l707(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__759__PROF__CoreTop__l708(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__760__PROF__CoreTop__l4799(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__762__PROF__CoreTop__l1228(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l4957(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l2822(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l2913(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l2786(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__571__PROF__CoreTop__l2728(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__572__PROF__CoreTop__l2481(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__792__PROF__CoreTop__l289(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__793__PROF__CoreTop__l227(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__794__PROF__CoreTop__l348(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__767__PROF__CoreTop__l922(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__768__PROF__CoreTop__l925(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__770__PROF__CoreTop__l1231(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__575__PROF__CoreTop__l2887(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__576__PROF__CoreTop__l2895(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__577__PROF__CoreTop__l1787(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__578__PROF__CoreTop__l3002(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__579__PROF__CoreTop__l2981(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__580__PROF__CoreTop__l3006(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__594__PROF__CoreTop__l2482(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l2484(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__789__PROF__CoreTop__l2095(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__596__PROF__SRAMTemp__l248(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__597__PROF__CoreTop__l4915(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__598__PROF__CoreTop__l4945(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__599__PROF__CoreTop__l2490(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__1__PROF__SRAMTemp__l301(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__601__PROF__CoreTop__l2492(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__602__PROF__CoreTop__l2486(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__796__PROF__CoreTop__l242(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__797__PROF__CoreTop__l363(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__780__PROF__CoreTop__l1082(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__603__PROF__CoreTop__l2889(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__604__PROF__CoreTop__l2897(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__605__PROF__CoreTop__l1785(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__606__PROF__CoreTop__l1798(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__618__PROF__CoreTop__l2097(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__619__PROF__SRAMTemp__l270(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__620__PROF__CoreTop__l3286(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__621__PROF__CoreTop__l3580(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l2107(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l4884(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__624__PROF__CoreTop__l3582(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__625__PROF__CoreTop__l3608(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__626__PROF__CoreTop__l3576(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__627__PROF__CoreTop__l3290(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__798__PROF__CoreTop__l244(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__799__PROF__CoreTop__l367(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__790__PROF__CoreTop__l1274(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__628__PROF__CoreTop__l2893(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__707__PROF__CoreTop__l2740(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__708__PROF__CoreTop__l2760(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1572(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1580(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__711__PROF__CoreTop__l2742(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__712__PROF__CoreTop__l2734(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__713__PROF__CoreTop__l3289(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__714__PROF__CoreTop__l2737(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2754(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__716__PROF__CoreTop__l3285(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__717__PROF__CoreTop__l1594(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__718__PROF__CoreTop__l2909(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__736__PROF__CoreTop__l2763(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__737__PROF__CoreTop__l2764(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1608(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__739__PROF__CoreTop__l1597(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__782__PROF__CoreTop__l4290(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__787__PROF__CoreTop__l4157(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__740__PROF__CoreTop__l1260(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__741__PROF__CoreTop__l1784(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__756__PROF__CoreTop__l4328(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__791__PROF__CoreTop__l4311(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__795__PROF__CoreTop__l4294(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__761__PROF__CoreTop__l4797(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__757__PROF__CoreTop__l4798(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__769__PROF__CoreTop__l4803(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__778__PROF__CoreTop__l24(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__781__PROF__CoreTop__l29(VCoreTop___024root* vlSelf);

VL_ATTR_COLD void VCoreTop___024root___eval_stl(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VCoreTop___024root___nba_sequent__TOP__645__PROF__CoreTop__l4793(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VCoreTop___024root___nba_sequent__TOP__764__PROF__CoreTop__l4227(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__731__PROF__CoreTop__l4226(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__589__PROF__CoreTop__l22(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__559__PROF__CoreTop__l1202(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l1203(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__507__PROF__CoreTop__l510(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__508__PROF__CoreTop__l495(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__383__PROF__CoreTop__l655(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__384__PROF__CoreTop__l660(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__375__PROF__CoreTop__l658(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__363__PROF__CoreTop__l3293(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__364__PROF__CoreTop__l3295(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__378__PROF__CoreTop__l4794(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__505__PROF__CoreTop__l4792(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__502__PROF__CoreTop__l1607(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__382__PROF__CoreTop__l2195(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__385__PROF__CoreTop__l659(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__376__PROF__CoreTop__l1784(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__590__PROF__CoreTop__l1785(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l1798(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__454__PROF__CoreTop__l2958(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__448__PROF__CSR_DIFF__l10(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__432__PROF__CSR_DIFF__l11(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__434__PROF__CSR_DIFF__l12(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__436__PROF__CSR_DIFF__l13(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__392__PROF__CoreTop__l464(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l1205(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__371__PROF__DIP_model__l85(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__445__PROF__DIP_model__l86(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__446__PROF__DIP_model__l87(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__389__PROF__DIP_model__l88(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__372__PROF__DIP_model__l89(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__373__PROF__DIP_model__l90(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__394__PROF__DIP_model__l91(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__386__PROF__CoreTop__l667(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__612__PROF__CoreTop__l1180(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__765__PROF__CoreTop__l4160(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__545__PROF__CoreTop__l4812(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__766__PROF__CoreTop__l4161(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__732__PROF__CoreTop__l4272(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__499__PROF__CoreTop__l3579(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__400__PROF__DIP_model__l52(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__401__PROF__DIP_model__l53(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__402__PROF__DIP_model__l54(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__403__PROF__DIP_model__l55(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__404__PROF__DIP_model__l56(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__405__PROF__DIP_model__l57(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__406__PROF__DIP_model__l58(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__407__PROF__DIP_model__l59(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__408__PROF__DIP_model__l60(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__409__PROF__DIP_model__l61(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__410__PROF__DIP_model__l62(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__411__PROF__DIP_model__l63(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__412__PROF__DIP_model__l64(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__413__PROF__DIP_model__l65(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__414__PROF__DIP_model__l66(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__415__PROF__DIP_model__l67(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__416__PROF__DIP_model__l68(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__417__PROF__DIP_model__l69(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__418__PROF__DIP_model__l70(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__419__PROF__DIP_model__l71(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__420__PROF__DIP_model__l72(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__421__PROF__DIP_model__l73(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__422__PROF__DIP_model__l74(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__423__PROF__DIP_model__l75(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__424__PROF__DIP_model__l76(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__425__PROF__DIP_model__l77(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__426__PROF__DIP_model__l78(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__427__PROF__DIP_model__l79(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__428__PROF__DIP_model__l80(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__429__PROF__DIP_model__l81(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__430__PROF__DIP_model__l82(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__431__PROF__DIP_model__l83(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__498__PROF__SRAMTemp__l320(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l1986(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__593__PROF__CoreTop__l1984(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__438__PROF__CoreTop__l1783(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__439__PROF__CoreTop__l1790(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__380__PROF__CoreTop__l681(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__387__PROF__CoreTop__l682(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__381__PROF__CoreTop__l683(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__388__PROF__CoreTop__l684(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__497__PROF__CoreTop__l2790(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__566__PROF__CoreTop__l940(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l873(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__733__PROF__CoreTop__l4242(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__609__PROF__CoreTop__l887(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__610__PROF__CoreTop__l885(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__444__PROF__CoreTop__l3567(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__396__PROF__CoreTop__l1797(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__440__PROF__CoreTop__l1804(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l1292(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__544__PROF__CoreTop__l2459(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__514__PROF__CoreTop__l907(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__613__PROF__CoreTop__l905(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__473__PROF__CoreTop__l1599(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__443__PROF__CoreTop__l1468(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__474__PROF__CoreTop__l500(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__469__PROF__CoreTop__l676(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l705(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__777__PROF__CoreTop__l2099(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__779__PROF__CoreTop__l2091(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__752__PROF__CoreTop__l4285(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l2443(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__491__PROF__DIP_model__l93(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__616__PROF__CoreTop__l1989(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__617__PROF__CoreTop__l1988(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l872(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__574__PROF__CoreTop__l1226(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__753__PROF__CoreTop__l4255(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__630__PROF__CoreTop__l1291(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__631__PROF__CoreTop__l888(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__570__PROF__CoreTop__l2459(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__632__PROF__CoreTop__l1132(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__633__PROF__CoreTop__l1136(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__634__PROF__CoreTop__l914(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__635__PROF__CoreTop__l909(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__636__PROF__CoreTop__l941(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__637__PROF__CoreTop__l1165(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__638__PROF__CoreTop__l1168(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__506__PROF__CoreTop__l3590(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__490__PROF__CoreTop__l1489(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__788__PROF__CoreTop__l2092(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__706__PROF__CoreTop__l2131(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__629__PROF__CoreTop__l629(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__763__PROF__CoreTop__l4806(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__719__PROF__CoreTop__l1293(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__720__PROF__CoreTop__l1294(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__721__PROF__CoreTop__l1132(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__722__PROF__CoreTop__l1136(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__723__PROF__CoreTop__l912(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__724__PROF__CoreTop__l997(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__725__PROF__CoreTop__l1017(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__726__PROF__CoreTop__l1037(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__727__PROF__CoreTop__l1057(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__728__PROF__CoreTop__l1084(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__729__PROF__CoreTop__l1104(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__730__PROF__CoreTop__l1201(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__515__PROF__CoreTop__l1540(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__516__PROF__CoreTop__l3571(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__517__PROF__CoreTop__l1984(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__518__PROF__CoreTop__l1986(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__527__PROF__CoreTop__l3592(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__754__PROF__CoreTop__l4800(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__735__PROF__CoreTop__l4801(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__771__PROF__CoreTop__l379(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__772__PROF__CoreTop__l259(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__773__PROF__CoreTop__l197(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__774__PROF__CoreTop__l318(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__775__PROF__CoreTop__l426(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__776__PROF__CoreTop__l426(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__742__PROF__CoreTop__l685(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__743__PROF__CoreTop__l1149(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__744__PROF__CoreTop__l1109(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__745__PROF__CoreTop__l1108(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__746__PROF__CoreTop__l1112(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__747__PROF__CoreTop__l1106(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__748__PROF__CoreTop__l1105(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__749__PROF__CoreTop__l1114(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__750__PROF__CoreTop__l1207(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__751__PROF__CoreTop__l1225(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__534__PROF__CoreTop__l3570(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l2792(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__536__PROF__CoreTop__l1989(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__537__PROF__CoreTop__l1988(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__546__PROF__CoreTop__l4956(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__547__PROF__CoreTop__l3564(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__548__PROF__CoreTop__l3587(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__549__PROF__CoreTop__l2739(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__550__PROF__CoreTop__l4950(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__551__PROF__CoreTop__l4953(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__552__PROF__CoreTop__l2727(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__553__PROF__CoreTop__l4960(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l4959(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__555__PROF__CoreTop__l4958(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__556__PROF__CoreTop__l4949(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__557__PROF__CoreTop__l4952(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__783__PROF__CoreTop__l386(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__784__PROF__CoreTop__l274(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__785__PROF__CoreTop__l212(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__786__PROF__CoreTop__l333(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__758__PROF__CoreTop__l707(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__759__PROF__CoreTop__l708(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__760__PROF__CoreTop__l4799(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__762__PROF__CoreTop__l1228(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l4957(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l2822(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l2913(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l2786(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__571__PROF__CoreTop__l2728(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__572__PROF__CoreTop__l2481(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__792__PROF__CoreTop__l289(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__793__PROF__CoreTop__l227(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__794__PROF__CoreTop__l348(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__767__PROF__CoreTop__l922(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__768__PROF__CoreTop__l925(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__770__PROF__CoreTop__l1231(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__575__PROF__CoreTop__l2887(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__576__PROF__CoreTop__l2895(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__577__PROF__CoreTop__l1787(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__578__PROF__CoreTop__l3002(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__579__PROF__CoreTop__l2981(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__580__PROF__CoreTop__l3006(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__594__PROF__CoreTop__l2482(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l2484(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__789__PROF__CoreTop__l2095(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__596__PROF__SRAMTemp__l248(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__597__PROF__CoreTop__l4915(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__598__PROF__CoreTop__l4945(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__599__PROF__CoreTop__l2490(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__1__PROF__SRAMTemp__l301(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__601__PROF__CoreTop__l2492(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__602__PROF__CoreTop__l2486(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__796__PROF__CoreTop__l242(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__797__PROF__CoreTop__l363(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__780__PROF__CoreTop__l1082(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__603__PROF__CoreTop__l2889(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__604__PROF__CoreTop__l2897(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__605__PROF__CoreTop__l1785(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__606__PROF__CoreTop__l1798(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__618__PROF__CoreTop__l2097(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__619__PROF__SRAMTemp__l270(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__620__PROF__CoreTop__l3286(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__621__PROF__CoreTop__l3580(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l2107(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l4884(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__624__PROF__CoreTop__l3582(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__625__PROF__CoreTop__l3608(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__626__PROF__CoreTop__l3576(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__627__PROF__CoreTop__l3290(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__798__PROF__CoreTop__l244(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__799__PROF__CoreTop__l367(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__790__PROF__CoreTop__l1274(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__628__PROF__CoreTop__l2893(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__707__PROF__CoreTop__l2740(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__708__PROF__CoreTop__l2760(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1572(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1580(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__711__PROF__CoreTop__l2742(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__712__PROF__CoreTop__l2734(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__713__PROF__CoreTop__l3289(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__714__PROF__CoreTop__l2737(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2754(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__716__PROF__CoreTop__l3285(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__717__PROF__CoreTop__l1594(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__718__PROF__CoreTop__l2909(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__736__PROF__CoreTop__l2763(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__737__PROF__CoreTop__l2764(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1608(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__739__PROF__CoreTop__l1597(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__782__PROF__CoreTop__l4290(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__787__PROF__CoreTop__l4157(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__740__PROF__CoreTop__l1260(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__741__PROF__CoreTop__l1784(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__756__PROF__CoreTop__l4328(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__791__PROF__CoreTop__l4311(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__795__PROF__CoreTop__l4294(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__761__PROF__CoreTop__l4797(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__757__PROF__CoreTop__l4798(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__769__PROF__CoreTop__l4803(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__778__PROF__CoreTop__l24(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__781__PROF__CoreTop__l29(vlSelf);
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
    vlSelf->CoreTop__DOT__ID_io_in_bits_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->CoreTop__DOT__rf_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata = VL_RAND_RESET_Q(64);
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
    vlSelf->CoreTop__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___GEN_197 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___GEN_216 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__valid_2 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___GEN_238 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__DIP_io_is_break_REG = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__DIP_io_inst_REG = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__DIP_io_is_skip_REG = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__DIP_io_pc_REG = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__DIP_io_dnpc_REG = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__IF__DOT__temp = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__IF__DOT___temp_T_3 = VL_RAND_RESET_Q(64);
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
    vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__is_mul = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT___is_divw_T_2 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__is_divw = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__mie = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__mip = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_26 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_30 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_57 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___T_39 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_60 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_80 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_100 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_120 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_145 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_147 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_167 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_168 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_169 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_171 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_172 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_177 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___GEN_181 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(127, vlSelf->CoreTop__DOT__EX__DOT___GEN_202);
    vlSelf->CoreTop__DOT__EX__DOT___compar_result_T = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_4 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__branch_flag = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT___T_92 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___T_112 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__csr_data = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__is_branch = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__is_jump = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_2 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT___io_out_valid_T_11 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h37196788__0 = 0;
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0 = 0;
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_out_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier);
    VL_RAND_RESET_W(132, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand);
    VL_RAND_RESET_W(132, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___count_T_5 = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(132, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp);
    VL_RAND_RESET_W(133, vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19);
    VL_RAND_RESET_W(128, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___wrap_value_T_1 = VL_RAND_RESET_I(6);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__s = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_2 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(65, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div);
    VL_RAND_RESET_W(129, vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_7);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_12 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_15 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_17 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_25 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(65, vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12);
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
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_6 = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_9 = VL_RAND_RESET_I(3);
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
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vi0]);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[__Vi0] = VL_RAND_RESET_Q(53);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data = VL_RAND_RESET_Q(53);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[__Vi0] = VL_RAND_RESET_Q(53);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0 = VL_RAND_RESET_I(5);
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
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1[__Vi0]);
    }
    VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0 = VL_RAND_RESET_I(1);
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
    vlSelf->__VdfgTmp_ha116befc__0 = 0;
    vlSelf->__VdfgTmp_ha248cb35__0 = 0;
    vlSelf->__VdfgTmp_h5a5a8c61__0 = 0;
    vlSelf->__Vtask_pmem_read__3__rdata = 0;
    vlSelf->__Vdlyvdim0__CoreTop__DOT__rf__v0 = 0;
    vlSelf->__Vdlyvval__CoreTop__DOT__rf__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__CoreTop__DOT__rf__v0 = 0;
    VL_RAND_RESET_W(66, vlSelf->__Vdly__CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier);
    vlSelf->__Vdly__CoreTop__DOT__EX__DOT__div__DOT__state = VL_RAND_RESET_I(2);
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
