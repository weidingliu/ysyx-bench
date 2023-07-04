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
                VL_FATAL_MT("vsrc/CoreTop.v", 3615, "", "Settle region did not converge.");
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

void VCoreTop___024root___nba_sequent__TOP__602__PROF__CoreTop__l4631(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__603__PROF__CoreTop__l22(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__492__PROF__CoreTop__l1195(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__493__PROF__CoreTop__l1196(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__451__PROF__CoreTop__l506(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__452__PROF__CoreTop__l491(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__328__PROF__CoreTop__l651(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__329__PROF__CoreTop__l658(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__324__PROF__CoreTop__l654(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__312__PROF__CoreTop__l3296(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__313__PROF__CoreTop__l3298(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__334__PROF__CoreTop__l4632(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__462__PROF__CoreTop__l4630(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__491__PROF__CoreTop__l1259(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__327__PROF__CoreTop__l2198(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__330__PROF__CoreTop__l655(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__323__PROF__CoreTop__l1787(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__604__PROF__CoreTop__l1788(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__605__PROF__CoreTop__l1801(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__403__PROF__CoreTop__l2961(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__349__PROF__CSR_DIFF__l10(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__342__PROF__CSR_DIFF__l11(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__344__PROF__CSR_DIFF__l12(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__346__PROF__CSR_DIFF__l13(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__569__PROF__CoreTop__l375(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__336__PROF__CoreTop__l460(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__570__PROF__CoreTop__l255(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__533__PROF__CoreTop__l1198(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__319__PROF__DIP_model__l85(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__338__PROF__DIP_model__l86(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__339__PROF__DIP_model__l87(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__385__PROF__DIP_model__l88(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__320__PROF__DIP_model__l89(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__321__PROF__DIP_model__l90(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__389__PROF__DIP_model__l91(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__532__PROF__CoreTop__l1173(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__571__PROF__CoreTop__l193(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__572__PROF__CoreTop__l314(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__331__PROF__CoreTop__l657(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__446__PROF__CoreTop__l3582(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__351__PROF__DIP_model__l52(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__352__PROF__DIP_model__l53(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__353__PROF__DIP_model__l54(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__354__PROF__DIP_model__l55(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__355__PROF__DIP_model__l56(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__356__PROF__DIP_model__l57(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__357__PROF__DIP_model__l58(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__358__PROF__DIP_model__l59(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__359__PROF__DIP_model__l60(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__360__PROF__DIP_model__l61(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__361__PROF__DIP_model__l62(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__362__PROF__DIP_model__l63(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__363__PROF__DIP_model__l64(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__364__PROF__DIP_model__l65(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__365__PROF__DIP_model__l66(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__366__PROF__DIP_model__l67(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__367__PROF__DIP_model__l68(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__368__PROF__DIP_model__l69(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__369__PROF__DIP_model__l70(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__370__PROF__DIP_model__l71(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__371__PROF__DIP_model__l72(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__372__PROF__DIP_model__l73(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__373__PROF__DIP_model__l74(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__374__PROF__DIP_model__l75(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__375__PROF__DIP_model__l76(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__376__PROF__DIP_model__l77(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__377__PROF__DIP_model__l78(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__378__PROF__DIP_model__l79(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__379__PROF__DIP_model__l80(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__380__PROF__DIP_model__l81(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__381__PROF__DIP_model__l82(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__382__PROF__DIP_model__l83(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__445__PROF__SRAMTemp__l320(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__606__PROF__CoreTop__l1987(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l1989(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__325__PROF__CoreTop__l679(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__332__PROF__CoreTop__l680(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__326__PROF__CoreTop__l681(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__333__PROF__CoreTop__l682(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__496__PROF__CoreTop__l933(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__444__PROF__CoreTop__l2793(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__495__PROF__CoreTop__l873(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l887(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__536__PROF__CoreTop__l885(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__397__PROF__CoreTop__l3570(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__537__PROF__CoreTop__l1278(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__455__PROF__CoreTop__l1593(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__391__PROF__CoreTop__l1786(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__392__PROF__CoreTop__l1793(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__490__PROF__CoreTop__l2462(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__393__PROF__CoreTop__l1800(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__394__PROF__CoreTop__l1807(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__437__PROF__CoreTop__l1585(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__396__PROF__CoreTop__l1454(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__586__PROF__CoreTop__l382(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__416__PROF__CoreTop__l496(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__587__PROF__CoreTop__l270(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__588__PROF__CoreTop__l208(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__589__PROF__CoreTop__l329(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__412__PROF__CoreTop__l674(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__413__PROF__CoreTop__l667(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__489__PROF__CoreTop__l2446(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__439__PROF__DIP_model__l93(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__618__PROF__CoreTop__l1992(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__619__PROF__CoreTop__l1991(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__534__PROF__CoreTop__l872(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l1277(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__555__PROF__CoreTop__l888(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__516__PROF__CoreTop__l2462(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__463__PROF__CoreTop__l3593(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__442__PROF__CoreTop__l1475(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__599__PROF__CoreTop__l285(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__600__PROF__CoreTop__l223(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__601__PROF__CoreTop__l344(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l703(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__633__PROF__CoreTop__l2136(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__553__PROF__CoreTop__l625(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__464__PROF__CoreTop__l1526(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__465__PROF__CoreTop__l3574(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__466__PROF__CoreTop__l1987(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__467__PROF__CoreTop__l1989(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__484__PROF__CoreTop__l3595(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__616__PROF__CoreTop__l238(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__617__PROF__CoreTop__l359(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__645__PROF__CoreTop__l4639(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__485__PROF__CoreTop__l3573(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__486__PROF__CoreTop__l2795(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__487__PROF__CoreTop__l1992(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__488__PROF__CoreTop__l1991(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__500__PROF__CoreTop__l4802(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__501__PROF__CoreTop__l3567(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__502__PROF__CoreTop__l3590(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__503__PROF__CoreTop__l2742(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__504__PROF__CoreTop__l4796(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__505__PROF__CoreTop__l4799(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__506__PROF__CoreTop__l2730(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__507__PROF__CoreTop__l4806(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__508__PROF__CoreTop__l4805(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__509__PROF__CoreTop__l4804(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__510__PROF__CoreTop__l4795(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__511__PROF__CoreTop__l4798(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__631__PROF__CoreTop__l240(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__632__PROF__CoreTop__l363(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__512__PROF__CoreTop__l4803(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__513__PROF__CoreTop__l2825(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__514__PROF__CoreTop__l2916(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__515__PROF__CoreTop__l2789(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__523__PROF__CoreTop__l2731(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__524__PROF__CoreTop__l2484(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__525__PROF__CoreTop__l2890(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__526__PROF__CoreTop__l2898(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__527__PROF__CoreTop__l1790(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__528__PROF__CoreTop__l3005(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__529__PROF__CoreTop__l2984(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__530__PROF__CoreTop__l3009(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__539__PROF__CoreTop__l2485(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__540__PROF__CoreTop__l2487(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__541__PROF__SRAMTemp__l248(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__542__PROF__CoreTop__l4761(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l4791(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__544__PROF__CoreTop__l2493(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__545__PROF__CoreTop__l2495(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__546__PROF__CoreTop__l2489(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__1__PROF__SRAMTemp__l301(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__548__PROF__CoreTop__l2892(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__549__PROF__CoreTop__l2900(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__550__PROF__CoreTop__l1788(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__551__PROF__CoreTop__l1801(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__558__PROF__CoreTop__l2102(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__559__PROF__SRAMTemp__l270(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l3289(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l3583(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l3585(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l3611(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l3579(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l3293(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l2112(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l4722(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__568__PROF__CoreTop__l2896(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__574__PROF__CoreTop__l2743(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__575__PROF__CoreTop__l2763(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__576__PROF__CoreTop__l2745(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__577__PROF__CoreTop__l2737(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__578__PROF__CoreTop__l3292(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__579__PROF__CoreTop__l2740(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2757(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__581__PROF__CoreTop__l3288(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__582__PROF__CoreTop__l1580(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1558(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1566(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__585__PROF__CoreTop__l2912(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l2766(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l2767(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__593__PROF__CoreTop__l1583(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__594__PROF__CoreTop__l4115(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l1247(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__596__PROF__CoreTop__l24(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1594(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__598__PROF__CoreTop__l1787(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l4155(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__609__PROF__CoreTop__l4138(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__610__PROF__CoreTop__l4636(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l2104(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__612__PROF__CoreTop__l2095(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__613__PROF__CoreTop__l4108(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__8__PROF__CoreTop__l900(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__9__PROF__CoreTop__l898(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__620__PROF__CoreTop__l2100(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__621__PROF__CoreTop__l4119(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__10__PROF__CoreTop__l1280(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__11__PROF__CoreTop__l1125(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__12__PROF__CoreTop__l1129(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__13__PROF__CoreTop__l907(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__14__PROF__CoreTop__l1158(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__15__PROF__CoreTop__l1161(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__16__PROF__CoreTop__l902(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__17__PROF__CoreTop__l934(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__18__PROF__CoreTop__l1279(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__19__PROF__CoreTop__l1125(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__20__PROF__CoreTop__l1129(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__21__PROF__CoreTop__l1194(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__22__PROF__CoreTop__l905(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__23__PROF__CoreTop__l990(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__24__PROF__CoreTop__l1010(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__25__PROF__CoreTop__l1030(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__26__PROF__CoreTop__l1050(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__27__PROF__CoreTop__l1077(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__28__PROF__CoreTop__l1097(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__29__PROF__CoreTop__l683(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__30__PROF__CoreTop__l1142(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__31__PROF__CoreTop__l1200(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__32__PROF__CoreTop__l4641(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__33__PROF__CoreTop__l1102(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__34__PROF__CoreTop__l1101(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__35__PROF__CoreTop__l1105(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__36__PROF__CoreTop__l1099(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__37__PROF__CoreTop__l1098(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__38__PROF__CoreTop__l1107(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__39__PROF__CoreTop__l705(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__40__PROF__CoreTop__l706(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__41__PROF__CoreTop__l4637(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__42__PROF__CoreTop__l4638(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__43__PROF__CoreTop__l915(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__44__PROF__CoreTop__l918(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__45__PROF__CoreTop__l4111(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__46__PROF__CoreTop__l1075(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__47__PROF__CoreTop__l4112(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__48__PROF__CoreTop__l1260(VCoreTop___024root* vlSelf);

VL_ATTR_COLD void VCoreTop___024root___eval_stl(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VCoreTop___024root___nba_sequent__TOP__602__PROF__CoreTop__l4631(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VCoreTop___024root___nba_sequent__TOP__603__PROF__CoreTop__l22(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__492__PROF__CoreTop__l1195(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__493__PROF__CoreTop__l1196(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__451__PROF__CoreTop__l506(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__452__PROF__CoreTop__l491(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__328__PROF__CoreTop__l651(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__329__PROF__CoreTop__l658(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__324__PROF__CoreTop__l654(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__312__PROF__CoreTop__l3296(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__313__PROF__CoreTop__l3298(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__334__PROF__CoreTop__l4632(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__462__PROF__CoreTop__l4630(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__491__PROF__CoreTop__l1259(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__327__PROF__CoreTop__l2198(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__330__PROF__CoreTop__l655(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__323__PROF__CoreTop__l1787(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__604__PROF__CoreTop__l1788(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__605__PROF__CoreTop__l1801(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__403__PROF__CoreTop__l2961(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__349__PROF__CSR_DIFF__l10(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__342__PROF__CSR_DIFF__l11(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__344__PROF__CSR_DIFF__l12(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__346__PROF__CSR_DIFF__l13(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__569__PROF__CoreTop__l375(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__336__PROF__CoreTop__l460(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__570__PROF__CoreTop__l255(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__533__PROF__CoreTop__l1198(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__319__PROF__DIP_model__l85(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__338__PROF__DIP_model__l86(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__339__PROF__DIP_model__l87(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__385__PROF__DIP_model__l88(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__320__PROF__DIP_model__l89(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__321__PROF__DIP_model__l90(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__389__PROF__DIP_model__l91(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__532__PROF__CoreTop__l1173(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__571__PROF__CoreTop__l193(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__572__PROF__CoreTop__l314(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__331__PROF__CoreTop__l657(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__446__PROF__CoreTop__l3582(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__351__PROF__DIP_model__l52(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__352__PROF__DIP_model__l53(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__353__PROF__DIP_model__l54(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__354__PROF__DIP_model__l55(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__355__PROF__DIP_model__l56(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__356__PROF__DIP_model__l57(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__357__PROF__DIP_model__l58(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__358__PROF__DIP_model__l59(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__359__PROF__DIP_model__l60(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__360__PROF__DIP_model__l61(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__361__PROF__DIP_model__l62(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__362__PROF__DIP_model__l63(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__363__PROF__DIP_model__l64(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__364__PROF__DIP_model__l65(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__365__PROF__DIP_model__l66(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__366__PROF__DIP_model__l67(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__367__PROF__DIP_model__l68(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__368__PROF__DIP_model__l69(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__369__PROF__DIP_model__l70(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__370__PROF__DIP_model__l71(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__371__PROF__DIP_model__l72(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__372__PROF__DIP_model__l73(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__373__PROF__DIP_model__l74(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__374__PROF__DIP_model__l75(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__375__PROF__DIP_model__l76(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__376__PROF__DIP_model__l77(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__377__PROF__DIP_model__l78(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__378__PROF__DIP_model__l79(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__379__PROF__DIP_model__l80(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__380__PROF__DIP_model__l81(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__381__PROF__DIP_model__l82(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__382__PROF__DIP_model__l83(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__445__PROF__SRAMTemp__l320(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__606__PROF__CoreTop__l1987(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l1989(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__325__PROF__CoreTop__l679(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__332__PROF__CoreTop__l680(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__326__PROF__CoreTop__l681(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__333__PROF__CoreTop__l682(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__496__PROF__CoreTop__l933(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__444__PROF__CoreTop__l2793(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__495__PROF__CoreTop__l873(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l887(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__536__PROF__CoreTop__l885(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__397__PROF__CoreTop__l3570(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__537__PROF__CoreTop__l1278(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__455__PROF__CoreTop__l1593(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__391__PROF__CoreTop__l1786(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__392__PROF__CoreTop__l1793(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__490__PROF__CoreTop__l2462(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__393__PROF__CoreTop__l1800(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__394__PROF__CoreTop__l1807(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__437__PROF__CoreTop__l1585(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__396__PROF__CoreTop__l1454(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__586__PROF__CoreTop__l382(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__416__PROF__CoreTop__l496(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__587__PROF__CoreTop__l270(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__588__PROF__CoreTop__l208(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__589__PROF__CoreTop__l329(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__412__PROF__CoreTop__l674(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__413__PROF__CoreTop__l667(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__489__PROF__CoreTop__l2446(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__439__PROF__DIP_model__l93(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__618__PROF__CoreTop__l1992(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__619__PROF__CoreTop__l1991(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__534__PROF__CoreTop__l872(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l1277(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__555__PROF__CoreTop__l888(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__516__PROF__CoreTop__l2462(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__463__PROF__CoreTop__l3593(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__442__PROF__CoreTop__l1475(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__599__PROF__CoreTop__l285(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__600__PROF__CoreTop__l223(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__601__PROF__CoreTop__l344(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__0__PROF__CoreTop__l703(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__633__PROF__CoreTop__l2136(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__553__PROF__CoreTop__l625(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__464__PROF__CoreTop__l1526(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__465__PROF__CoreTop__l3574(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__466__PROF__CoreTop__l1987(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__467__PROF__CoreTop__l1989(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__484__PROF__CoreTop__l3595(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__616__PROF__CoreTop__l238(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__617__PROF__CoreTop__l359(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__645__PROF__CoreTop__l4639(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__485__PROF__CoreTop__l3573(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__486__PROF__CoreTop__l2795(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__487__PROF__CoreTop__l1992(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__488__PROF__CoreTop__l1991(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__500__PROF__CoreTop__l4802(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__501__PROF__CoreTop__l3567(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__502__PROF__CoreTop__l3590(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__503__PROF__CoreTop__l2742(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__504__PROF__CoreTop__l4796(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__505__PROF__CoreTop__l4799(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__506__PROF__CoreTop__l2730(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__507__PROF__CoreTop__l4806(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__508__PROF__CoreTop__l4805(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__509__PROF__CoreTop__l4804(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__510__PROF__CoreTop__l4795(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__511__PROF__CoreTop__l4798(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__631__PROF__CoreTop__l240(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__632__PROF__CoreTop__l363(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__512__PROF__CoreTop__l4803(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__513__PROF__CoreTop__l2825(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__514__PROF__CoreTop__l2916(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__515__PROF__CoreTop__l2789(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__523__PROF__CoreTop__l2731(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__524__PROF__CoreTop__l2484(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__525__PROF__CoreTop__l2890(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__526__PROF__CoreTop__l2898(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__527__PROF__CoreTop__l1790(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__528__PROF__CoreTop__l3005(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__529__PROF__CoreTop__l2984(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__530__PROF__CoreTop__l3009(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__539__PROF__CoreTop__l2485(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__540__PROF__CoreTop__l2487(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__541__PROF__SRAMTemp__l248(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__542__PROF__CoreTop__l4761(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l4791(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__544__PROF__CoreTop__l2493(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__545__PROF__CoreTop__l2495(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__546__PROF__CoreTop__l2489(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__1__PROF__SRAMTemp__l301(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__548__PROF__CoreTop__l2892(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__549__PROF__CoreTop__l2900(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__550__PROF__CoreTop__l1788(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__551__PROF__CoreTop__l1801(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__558__PROF__CoreTop__l2102(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__559__PROF__SRAMTemp__l270(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l3289(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l3583(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l3585(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l3611(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l3579(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l3293(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l2112(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l4722(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__568__PROF__CoreTop__l2896(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__574__PROF__CoreTop__l2743(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__575__PROF__CoreTop__l2763(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__576__PROF__CoreTop__l2745(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__577__PROF__CoreTop__l2737(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__578__PROF__CoreTop__l3292(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__579__PROF__CoreTop__l2740(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l2757(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__581__PROF__CoreTop__l3288(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__582__PROF__CoreTop__l1580(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1558(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1566(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__585__PROF__CoreTop__l2912(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l2766(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l2767(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__593__PROF__CoreTop__l1583(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__594__PROF__CoreTop__l4115(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l1247(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__596__PROF__CoreTop__l24(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__7__PROF__CoreTop__l1594(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__598__PROF__CoreTop__l1787(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l4155(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__609__PROF__CoreTop__l4138(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__610__PROF__CoreTop__l4636(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l2104(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__612__PROF__CoreTop__l2095(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__613__PROF__CoreTop__l4108(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__8__PROF__CoreTop__l900(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__9__PROF__CoreTop__l898(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__620__PROF__CoreTop__l2100(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__621__PROF__CoreTop__l4119(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__10__PROF__CoreTop__l1280(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__11__PROF__CoreTop__l1125(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__12__PROF__CoreTop__l1129(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__13__PROF__CoreTop__l907(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__14__PROF__CoreTop__l1158(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__15__PROF__CoreTop__l1161(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__16__PROF__CoreTop__l902(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__17__PROF__CoreTop__l934(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__18__PROF__CoreTop__l1279(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__19__PROF__CoreTop__l1125(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__20__PROF__CoreTop__l1129(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__21__PROF__CoreTop__l1194(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__22__PROF__CoreTop__l905(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__23__PROF__CoreTop__l990(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__24__PROF__CoreTop__l1010(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__25__PROF__CoreTop__l1030(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__26__PROF__CoreTop__l1050(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__27__PROF__CoreTop__l1077(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__28__PROF__CoreTop__l1097(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__29__PROF__CoreTop__l683(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__30__PROF__CoreTop__l1142(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__31__PROF__CoreTop__l1200(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__32__PROF__CoreTop__l4641(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__33__PROF__CoreTop__l1102(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__34__PROF__CoreTop__l1101(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__35__PROF__CoreTop__l1105(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__36__PROF__CoreTop__l1099(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__37__PROF__CoreTop__l1098(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__38__PROF__CoreTop__l1107(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__39__PROF__CoreTop__l705(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__40__PROF__CoreTop__l706(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__41__PROF__CoreTop__l4637(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__42__PROF__CoreTop__l4638(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__43__PROF__CoreTop__l915(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__44__PROF__CoreTop__l918(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__45__PROF__CoreTop__l4111(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__46__PROF__CoreTop__l1075(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__47__PROF__CoreTop__l4112(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__48__PROF__CoreTop__l1260(vlSelf);
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
    vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__IF_io_branch_io_dnpc = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__IF_io_flush = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen = VL_RAND_RESET_I(1);
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
    vlSelf->CoreTop__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__ID_io_in_bits_r_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType = VL_RAND_RESET_I(3);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1 = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2 = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype = VL_RAND_RESET_I(7);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst = VL_RAND_RESET_I(32);
    vlSelf->CoreTop__DOT__valid_2 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___GEN_25 = VL_RAND_RESET_I(1);
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
    vlSelf->CoreTop__DOT__valid_3 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___GEN_47 = VL_RAND_RESET_I(1);
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
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_hcef3c28f__0 = 0;
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
    VL_RAND_RESET_W(65, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_2 = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(129, vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_8);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26 = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(65, vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13);
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
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[__Vi0]);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0 = VL_RAND_RESET_I(1);
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
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0 = VL_RAND_RESET_I(5);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_2 = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_8 = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_10 = VL_RAND_RESET_I(2);
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
