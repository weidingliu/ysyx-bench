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
                VL_FATAL_MT("vsrc/CoreTop.v", 3488, "", "Settle region did not converge.");
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

void VCoreTop___024root___nba_sequent__TOP__632__PROF__CoreTop__l4731(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__746__PROF__CoreTop__l4133(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__711__PROF__CoreTop__l4132(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__584__PROF__CoreTop__l22(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__501__PROF__CoreTop__l510(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__502__PROF__CoreTop__l495(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__384__PROF__CoreTop__l655(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__385__PROF__CoreTop__l660(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__372__PROF__CoreTop__l658(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__363__PROF__CoreTop__l3010(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__364__PROF__CoreTop__l3012(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__378__PROF__CoreTop__l4732(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__503__PROF__CoreTop__l4730(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__514__PROF__CoreTop__l1312(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__383__PROF__CoreTop__l1912(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__386__PROF__CoreTop__l659(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__376__PROF__CoreTop__l1501(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__585__PROF__CoreTop__l1502(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__586__PROF__CoreTop__l1515(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__454__PROF__CoreTop__l2675(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__437__PROF__CSR_DIFF__l10(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__382__PROF__CSR_DIFF__l11(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__439__PROF__CSR_DIFF__l12(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__438__PROF__CSR_DIFF__l13(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__390__PROF__CoreTop__l464(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__371__PROF__DIP_model__l85(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__447__PROF__DIP_model__l86(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__448__PROF__DIP_model__l87(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__392__PROF__DIP_model__l88(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__373__PROF__DIP_model__l89(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__374__PROF__DIP_model__l90(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__395__PROF__DIP_model__l91(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__387__PROF__CoreTop__l667(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__600__PROF__CoreTop__l1034(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__747__PROF__CoreTop__l4066(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__541__PROF__CoreTop__l4750(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__748__PROF__CoreTop__l4067(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__712__PROF__CoreTop__l4178(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__496__PROF__CoreTop__l3296(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__401__PROF__DIP_model__l52(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__402__PROF__DIP_model__l53(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__403__PROF__DIP_model__l54(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__404__PROF__DIP_model__l55(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__405__PROF__DIP_model__l56(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__406__PROF__DIP_model__l57(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__407__PROF__DIP_model__l58(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__408__PROF__DIP_model__l59(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__409__PROF__DIP_model__l60(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__410__PROF__DIP_model__l61(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__411__PROF__DIP_model__l62(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__412__PROF__DIP_model__l63(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__413__PROF__DIP_model__l64(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__414__PROF__DIP_model__l65(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__415__PROF__DIP_model__l66(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__416__PROF__DIP_model__l67(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__417__PROF__DIP_model__l68(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__418__PROF__DIP_model__l69(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__419__PROF__DIP_model__l70(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__420__PROF__DIP_model__l71(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__421__PROF__DIP_model__l72(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__422__PROF__DIP_model__l73(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__423__PROF__DIP_model__l74(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__424__PROF__DIP_model__l75(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__425__PROF__DIP_model__l76(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__426__PROF__DIP_model__l77(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__427__PROF__DIP_model__l78(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__428__PROF__DIP_model__l79(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__429__PROF__DIP_model__l80(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__430__PROF__DIP_model__l81(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__431__PROF__DIP_model__l82(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__432__PROF__DIP_model__l83(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__495__PROF__SRAMTemp__l320(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__589__PROF__CoreTop__l1114(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__587__PROF__CoreTop__l1703(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__588__PROF__CoreTop__l1701(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__504__PROF__CoreTop__l1361(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__434__PROF__CoreTop__l1500(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__435__PROF__CoreTop__l1507(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__380__PROF__CoreTop__l681(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__388__PROF__CoreTop__l682(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__381__PROF__CoreTop__l683(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__389__PROF__CoreTop__l684(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__494__PROF__CoreTop__l2507(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__546__PROF__CoreTop__l858(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__713__PROF__CoreTop__l4148(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l872(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l870(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__444__PROF__CoreTop__l3284(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__397__PROF__CoreTop__l1514(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__436__PROF__CoreTop__l1521(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__593__PROF__CoreTop__l1126(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__540__PROF__CoreTop__l2176(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__601__PROF__CoreTop__l884(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__509__PROF__CoreTop__l886(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__515__PROF__CoreTop__l1304(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__443__PROF__CoreTop__l1173(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__471__PROF__CoreTop__l500(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__469__PROF__CoreTop__l676(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l705(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__762__PROF__CoreTop__l1816(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__763__PROF__CoreTop__l1808(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__732__PROF__CoreTop__l4191(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__539__PROF__CoreTop__l2160(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__490__PROF__DIP_model__l93(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__606__PROF__CoreTop__l4769(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__604__PROF__CoreTop__l1706(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__605__PROF__CoreTop__l1705(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__523__PROF__CoreTop__l3368(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__524__PROF__CoreTop__l3370(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__590__PROF__CoreTop__l857(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__556__PROF__CoreTop__l1063(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__733__PROF__CoreTop__l4161(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l1125(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__609__PROF__CoreTop__l873(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l2176(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__620__PROF__CoreTop__l986(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__621__PROF__CoreTop__l990(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__622__PROF__CoreTop__l893(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__623__PROF__CoreTop__l888(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__624__PROF__CoreTop__l1019(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__625__PROF__CoreTop__l1022(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l3307(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__487__PROF__CoreTop__l1194(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__773__PROF__CoreTop__l1809(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__693__PROF__CoreTop__l1848(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__542__PROF__CoreTop__l3370(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l3371(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__544__PROF__CoreTop__l3372(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l629(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__745__PROF__CoreTop__l4744(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__694__PROF__CoreTop__l1127(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__695__PROF__CoreTop__l1128(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__707__PROF__CoreTop__l986(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__708__PROF__CoreTop__l990(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__709__PROF__CoreTop__l891(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__710__PROF__CoreTop__l1052(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__510__PROF__CoreTop__l1245(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__511__PROF__CoreTop__l3288(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__512__PROF__CoreTop__l1701(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__513__PROF__CoreTop__l1703(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__551__PROF__CoreTop__l3309(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__734__PROF__CoreTop__l4738(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__715__PROF__CoreTop__l4739(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__756__PROF__CoreTop__l379(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__757__PROF__CoreTop__l259(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__758__PROF__CoreTop__l197(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__759__PROF__CoreTop__l318(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__760__PROF__CoreTop__l426(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__761__PROF__CoreTop__l426(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__716__PROF__CoreTop__l685(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__729__PROF__CoreTop__l1003(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__730__PROF__CoreTop__l1054(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__731__PROF__CoreTop__l1062(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__531__PROF__CoreTop__l3287(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__532__PROF__CoreTop__l2509(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__533__PROF__CoreTop__l1706(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__534__PROF__CoreTop__l1705(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l4901(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l3281(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__566__PROF__CoreTop__l3304(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__567__PROF__CoreTop__l2456(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__568__PROF__CoreTop__l4895(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__569__PROF__CoreTop__l4898(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__570__PROF__CoreTop__l2444(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__571__PROF__CoreTop__l4905(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__572__PROF__CoreTop__l4904(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__573__PROF__CoreTop__l4903(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__575__PROF__CoreTop__l4894(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__576__PROF__CoreTop__l4897(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__768__PROF__CoreTop__l386(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__769__PROF__CoreTop__l274(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__770__PROF__CoreTop__l212(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__771__PROF__CoreTop__l333(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__736__PROF__CoreTop__l707(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__737__PROF__CoreTop__l708(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__743__PROF__CoreTop__l4737(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__744__PROF__CoreTop__l1065(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__574__PROF__CoreTop__l4902(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__548__PROF__CoreTop__l2539(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__549__PROF__CoreTop__l2630(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__550__PROF__CoreTop__l2503(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__598__PROF__CoreTop__l2445(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__599__PROF__CoreTop__l2198(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__777__PROF__CoreTop__l289(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__778__PROF__CoreTop__l227(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__779__PROF__CoreTop__l348(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__749__PROF__CoreTop__l901(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__750__PROF__CoreTop__l904(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__755__PROF__CoreTop__l1070(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__558__PROF__CoreTop__l2604(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__559__PROF__CoreTop__l2612(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l1504(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l2719(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l2698(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l2723(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l2199(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__612__PROF__CoreTop__l2201(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__774__PROF__CoreTop__l1812(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__613__PROF__SRAMTemp__l248(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__614__PROF__CoreTop__l4860(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__615__PROF__CoreTop__l4890(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__616__PROF__CoreTop__l2207(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__1__PROF__SRAMTemp__l301(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__618__PROF__CoreTop__l2209(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__619__PROF__CoreTop__l2203(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__781__PROF__CoreTop__l242(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__782__PROF__CoreTop__l363(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__764__PROF__CoreTop__l951(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__594__PROF__CoreTop__l2606(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l2614(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__596__PROF__CoreTop__l1502(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__597__PROF__CoreTop__l1515(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__697__PROF__CoreTop__l1814(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__698__PROF__SRAMTemp__l270(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__699__PROF__CoreTop__l3003(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__700__PROF__CoreTop__l3297(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l1824(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l4826(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__703__PROF__CoreTop__l3299(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__704__PROF__CoreTop__l3325(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__705__PROF__CoreTop__l3293(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__706__PROF__CoreTop__l3007(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__783__PROF__CoreTop__l244(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__784__PROF__CoreTop__l367(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__775__PROF__CoreTop__l1107(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__610__PROF__CoreTop__l2610(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__718__PROF__CoreTop__l2457(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__719__PROF__CoreTop__l2477(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1277(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1285(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__722__PROF__CoreTop__l2459(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__723__PROF__CoreTop__l2451(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__724__PROF__CoreTop__l3006(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__725__PROF__CoreTop__l2454(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2471(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__727__PROF__CoreTop__l3002(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__728__PROF__CoreTop__l1299(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__696__PROF__CoreTop__l2626(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__738__PROF__CoreTop__l2480(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__739__PROF__CoreTop__l2481(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1313(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__741__PROF__CoreTop__l1302(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__767__PROF__CoreTop__l4196(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__772__PROF__CoreTop__l4063(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__742__PROF__CoreTop__l1093(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__717__PROF__CoreTop__l1501(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__751__PROF__CoreTop__l4237(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__776__PROF__CoreTop__l4217(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__780__PROF__CoreTop__l4200(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__752__PROF__CoreTop__l4735(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__753__PROF__CoreTop__l4736(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__754__PROF__CoreTop__l4741(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__765__PROF__CoreTop__l24(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__766__PROF__CoreTop__l29(VCoreTop___024root* vlSelf);

VL_ATTR_COLD void VCoreTop___024root___eval_stl(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VCoreTop___024root___nba_sequent__TOP__632__PROF__CoreTop__l4731(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VCoreTop___024root___nba_sequent__TOP__746__PROF__CoreTop__l4133(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__711__PROF__CoreTop__l4132(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__584__PROF__CoreTop__l22(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__501__PROF__CoreTop__l510(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__502__PROF__CoreTop__l495(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__384__PROF__CoreTop__l655(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__385__PROF__CoreTop__l660(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__372__PROF__CoreTop__l658(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__363__PROF__CoreTop__l3010(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__364__PROF__CoreTop__l3012(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__378__PROF__CoreTop__l4732(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__503__PROF__CoreTop__l4730(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__514__PROF__CoreTop__l1312(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__383__PROF__CoreTop__l1912(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__386__PROF__CoreTop__l659(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__376__PROF__CoreTop__l1501(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__585__PROF__CoreTop__l1502(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__586__PROF__CoreTop__l1515(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__454__PROF__CoreTop__l2675(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__437__PROF__CSR_DIFF__l10(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__382__PROF__CSR_DIFF__l11(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__439__PROF__CSR_DIFF__l12(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__438__PROF__CSR_DIFF__l13(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__390__PROF__CoreTop__l464(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__371__PROF__DIP_model__l85(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__447__PROF__DIP_model__l86(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__448__PROF__DIP_model__l87(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__392__PROF__DIP_model__l88(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__373__PROF__DIP_model__l89(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__374__PROF__DIP_model__l90(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__395__PROF__DIP_model__l91(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__387__PROF__CoreTop__l667(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__600__PROF__CoreTop__l1034(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__747__PROF__CoreTop__l4066(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__541__PROF__CoreTop__l4750(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__748__PROF__CoreTop__l4067(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__712__PROF__CoreTop__l4178(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__496__PROF__CoreTop__l3296(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__401__PROF__DIP_model__l52(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__402__PROF__DIP_model__l53(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__403__PROF__DIP_model__l54(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__404__PROF__DIP_model__l55(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__405__PROF__DIP_model__l56(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__406__PROF__DIP_model__l57(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__407__PROF__DIP_model__l58(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__408__PROF__DIP_model__l59(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__409__PROF__DIP_model__l60(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__410__PROF__DIP_model__l61(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__411__PROF__DIP_model__l62(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__412__PROF__DIP_model__l63(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__413__PROF__DIP_model__l64(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__414__PROF__DIP_model__l65(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__415__PROF__DIP_model__l66(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__416__PROF__DIP_model__l67(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__417__PROF__DIP_model__l68(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__418__PROF__DIP_model__l69(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__419__PROF__DIP_model__l70(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__420__PROF__DIP_model__l71(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__421__PROF__DIP_model__l72(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__422__PROF__DIP_model__l73(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__423__PROF__DIP_model__l74(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__424__PROF__DIP_model__l75(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__425__PROF__DIP_model__l76(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__426__PROF__DIP_model__l77(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__427__PROF__DIP_model__l78(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__428__PROF__DIP_model__l79(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__429__PROF__DIP_model__l80(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__430__PROF__DIP_model__l81(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__431__PROF__DIP_model__l82(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__432__PROF__DIP_model__l83(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__495__PROF__SRAMTemp__l320(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__589__PROF__CoreTop__l1114(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__587__PROF__CoreTop__l1703(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__588__PROF__CoreTop__l1701(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__504__PROF__CoreTop__l1361(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__434__PROF__CoreTop__l1500(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__435__PROF__CoreTop__l1507(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__380__PROF__CoreTop__l681(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__388__PROF__CoreTop__l682(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__381__PROF__CoreTop__l683(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__389__PROF__CoreTop__l684(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__494__PROF__CoreTop__l2507(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__546__PROF__CoreTop__l858(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__713__PROF__CoreTop__l4148(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l872(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l870(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__444__PROF__CoreTop__l3284(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__397__PROF__CoreTop__l1514(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__436__PROF__CoreTop__l1521(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__593__PROF__CoreTop__l1126(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__540__PROF__CoreTop__l2176(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__601__PROF__CoreTop__l884(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__509__PROF__CoreTop__l886(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__515__PROF__CoreTop__l1304(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__443__PROF__CoreTop__l1173(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__471__PROF__CoreTop__l500(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__469__PROF__CoreTop__l676(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l705(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__762__PROF__CoreTop__l1816(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__763__PROF__CoreTop__l1808(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__732__PROF__CoreTop__l4191(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__539__PROF__CoreTop__l2160(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__490__PROF__DIP_model__l93(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__606__PROF__CoreTop__l4769(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__604__PROF__CoreTop__l1706(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__605__PROF__CoreTop__l1705(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__523__PROF__CoreTop__l3368(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__524__PROF__CoreTop__l3370(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__590__PROF__CoreTop__l857(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__556__PROF__CoreTop__l1063(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__733__PROF__CoreTop__l4161(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l1125(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__609__PROF__CoreTop__l873(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l2176(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__620__PROF__CoreTop__l986(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__621__PROF__CoreTop__l990(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__622__PROF__CoreTop__l893(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__623__PROF__CoreTop__l888(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__624__PROF__CoreTop__l1019(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__625__PROF__CoreTop__l1022(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l3307(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__487__PROF__CoreTop__l1194(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__773__PROF__CoreTop__l1809(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__693__PROF__CoreTop__l1848(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__542__PROF__CoreTop__l3370(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l3371(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__544__PROF__CoreTop__l3372(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l629(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__745__PROF__CoreTop__l4744(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__694__PROF__CoreTop__l1127(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__695__PROF__CoreTop__l1128(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__707__PROF__CoreTop__l986(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__708__PROF__CoreTop__l990(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__709__PROF__CoreTop__l891(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__710__PROF__CoreTop__l1052(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__510__PROF__CoreTop__l1245(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__511__PROF__CoreTop__l3288(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__512__PROF__CoreTop__l1701(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__513__PROF__CoreTop__l1703(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__551__PROF__CoreTop__l3309(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__734__PROF__CoreTop__l4738(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__715__PROF__CoreTop__l4739(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__756__PROF__CoreTop__l379(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__757__PROF__CoreTop__l259(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__758__PROF__CoreTop__l197(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__759__PROF__CoreTop__l318(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__760__PROF__CoreTop__l426(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__761__PROF__CoreTop__l426(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__716__PROF__CoreTop__l685(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__729__PROF__CoreTop__l1003(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__730__PROF__CoreTop__l1054(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__731__PROF__CoreTop__l1062(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__531__PROF__CoreTop__l3287(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__532__PROF__CoreTop__l2509(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__533__PROF__CoreTop__l1706(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__534__PROF__CoreTop__l1705(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l4901(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l3281(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__566__PROF__CoreTop__l3304(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__567__PROF__CoreTop__l2456(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__568__PROF__CoreTop__l4895(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__569__PROF__CoreTop__l4898(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__570__PROF__CoreTop__l2444(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__571__PROF__CoreTop__l4905(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__572__PROF__CoreTop__l4904(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__573__PROF__CoreTop__l4903(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__575__PROF__CoreTop__l4894(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__576__PROF__CoreTop__l4897(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__768__PROF__CoreTop__l386(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__769__PROF__CoreTop__l274(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__770__PROF__CoreTop__l212(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__771__PROF__CoreTop__l333(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__736__PROF__CoreTop__l707(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__737__PROF__CoreTop__l708(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__743__PROF__CoreTop__l4737(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__744__PROF__CoreTop__l1065(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__574__PROF__CoreTop__l4902(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__548__PROF__CoreTop__l2539(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__549__PROF__CoreTop__l2630(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__550__PROF__CoreTop__l2503(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__598__PROF__CoreTop__l2445(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__599__PROF__CoreTop__l2198(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__777__PROF__CoreTop__l289(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__778__PROF__CoreTop__l227(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__779__PROF__CoreTop__l348(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__749__PROF__CoreTop__l901(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__750__PROF__CoreTop__l904(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__755__PROF__CoreTop__l1070(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__558__PROF__CoreTop__l2604(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__559__PROF__CoreTop__l2612(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l1504(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l2719(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l2698(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l2723(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l2199(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__612__PROF__CoreTop__l2201(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__774__PROF__CoreTop__l1812(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__613__PROF__SRAMTemp__l248(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__614__PROF__CoreTop__l4860(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__615__PROF__CoreTop__l4890(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__616__PROF__CoreTop__l2207(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__1__PROF__SRAMTemp__l301(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__618__PROF__CoreTop__l2209(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__619__PROF__CoreTop__l2203(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__781__PROF__CoreTop__l242(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__782__PROF__CoreTop__l363(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__764__PROF__CoreTop__l951(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__594__PROF__CoreTop__l2606(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l2614(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__596__PROF__CoreTop__l1502(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__597__PROF__CoreTop__l1515(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__697__PROF__CoreTop__l1814(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__698__PROF__SRAMTemp__l270(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__699__PROF__CoreTop__l3003(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__700__PROF__CoreTop__l3297(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l1824(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l4826(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__703__PROF__CoreTop__l3299(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__704__PROF__CoreTop__l3325(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__705__PROF__CoreTop__l3293(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__706__PROF__CoreTop__l3007(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__783__PROF__CoreTop__l244(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__784__PROF__CoreTop__l367(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__775__PROF__CoreTop__l1107(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__610__PROF__CoreTop__l2610(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__718__PROF__CoreTop__l2457(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__719__PROF__CoreTop__l2477(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1277(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1285(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__722__PROF__CoreTop__l2459(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__723__PROF__CoreTop__l2451(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__724__PROF__CoreTop__l3006(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__725__PROF__CoreTop__l2454(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2471(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__727__PROF__CoreTop__l3002(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__728__PROF__CoreTop__l1299(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__696__PROF__CoreTop__l2626(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__738__PROF__CoreTop__l2480(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__739__PROF__CoreTop__l2481(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1313(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__741__PROF__CoreTop__l1302(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__767__PROF__CoreTop__l4196(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__772__PROF__CoreTop__l4063(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__742__PROF__CoreTop__l1093(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__717__PROF__CoreTop__l1501(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__751__PROF__CoreTop__l4237(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__776__PROF__CoreTop__l4217(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__780__PROF__CoreTop__l4200(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__752__PROF__CoreTop__l4735(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__753__PROF__CoreTop__l4736(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__754__PROF__CoreTop__l4741(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__765__PROF__CoreTop__l24(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__766__PROF__CoreTop__l29(vlSelf);
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
    vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx = VL_RAND_RESET_I(12);
    vlSelf->CoreTop__DOT__EX_io_csr_rd_io_rd_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->CoreTop__DOT__rf_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en = VL_RAND_RESET_I(1);
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
    vlSelf->CoreTop__DOT___GEN_218 = VL_RAND_RESET_I(1);
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
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_en = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_idx = VL_RAND_RESET_I(12);
    vlSelf->CoreTop__DOT__valid_2 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___GEN_245 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen = VL_RAND_RESET_I(1);
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
    vlSelf->CoreTop__DOT__EX__DOT___io_out_valid_T_11 = VL_RAND_RESET_I(1);
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
    vlSelf->CoreTop__DOT__CSR__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT__mie = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT__mip = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT___GEN_3 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT___GEN_4 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__CSR__DOT___GEN_5 = VL_RAND_RESET_Q(64);
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
