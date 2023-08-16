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
                VL_FATAL_MT("vsrc/CoreTop.v", 3443, "", "Settle region did not converge.");
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

void VCoreTop___024root___nba_sequent__TOP__623__PROF__CoreTop__l4766(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__736__PROF__CoreTop__l4129(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__701__PROF__CoreTop__l4128(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__583__PROF__CoreTop__l32(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__503__PROF__CoreTop__l534(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__504__PROF__CoreTop__l519(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__373__PROF__CoreTop__l2946(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__374__PROF__CoreTop__l2948(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__436__PROF__CoreTop__l3311(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__437__PROF__CoreTop__l3308(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__384__PROF__CoreTop__l4767(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__505__PROF__CoreTop__l4765(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__514__PROF__CoreTop__l1236(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__446__PROF__CoreTop__l1848(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__386__PROF__div__l43(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__387__PROF__CoreTop__l1437(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__584__PROF__CoreTop__l1438(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__585__PROF__CoreTop__l1451(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__453__PROF__CoreTop__l2611(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__686__PROF__CSR_DIFF__l10(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__435__PROF__CSR_DIFF__l11(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__438__PROF__CSR_DIFF__l12(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__687__PROF__CSR_DIFF__l13(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__390__PROF__CoreTop__l488(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__382__PROF__DIP_model__l85(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__450__PROF__DIP_model__l86(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__451__PROF__DIP_model__l87(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__392__PROF__DIP_model__l88(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__441__PROF__DIP_model__l89(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__442__PROF__DIP_model__l90(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__395__PROF__DIP_model__l91(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__597__PROF__CoreTop__l947(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__737__PROF__CoreTop__l4062(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__538__PROF__CoreTop__l4791(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__547__PROF__CoreTop__l4777(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__738__PROF__CoreTop__l4063(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__702__PROF__CoreTop__l4174(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__548__PROF__CoreTop__l4778(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__496__PROF__CoreTop__l3232(VCoreTop___024root* vlSelf);
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
void VCoreTop___024root___nba_sequent__TOP__777__PROF__CoreTop__l1031(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__604__PROF__CoreTop__l1295(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__586__PROF__CoreTop__l1637(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__587__PROF__CoreTop__l1639(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__397__PROF__CoreTop__l1436(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__398__PROF__CoreTop__l1443(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__780__PROF__CoreTop__l785(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__781__PROF__CoreTop__l783(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__494__PROF__CoreTop__l2443(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__550__PROF__CoreTop__l4781(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__703__PROF__CoreTop__l4144(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__782__PROF__CoreTop__l698(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__540__PROF__CoreTop__l771(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__447__PROF__CoreTop__l3220(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__434__PROF__CoreTop__l1450(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__440__PROF__CoreTop__l1457(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__536__PROF__CoreTop__l2112(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__509__PROF__CoreTop__l799(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__743__PROF__CoreTop__l797(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__515__PROF__CoreTop__l1226(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__445__PROF__CoreTop__l1095(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__474__PROF__CoreTop__l524(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__753__PROF__CoreTop__l1752(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__754__PROF__CoreTop__l1744(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__722__PROF__CoreTop__l4187(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__581__PROF__CoreTop__l3309(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__685__PROF__CoreTop__l3310(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__582__PROF__CoreTop__l4213(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l2096(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__491__PROF__DIP_model__l93(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__785__PROF__CoreTop__l4813(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__726__PROF__CoreTop__l3313(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__727__PROF__CoreTop__l3315(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__600__PROF__CoreTop__l1642(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__601__PROF__CoreTop__l1641(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__790__PROF__CoreTop__l786(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__588__PROF__CoreTop__l1283(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__723__PROF__CoreTop__l4157(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__789__PROF__CoreTop__l695(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__778__PROF__CoreTop__l770(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l976(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__546__PROF__CoreTop__l2112(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__755__PROF__CoreTop__l899(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__756__PROF__CoreTop__l903(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__757__PROF__CoreTop__l806(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__758__PROF__CoreTop__l801(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__759__PROF__CoreTop__l932(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__760__PROF__CoreTop__l935(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__532__PROF__CoreTop__l3243(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__488__PROF__CoreTop__l1116(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__767__PROF__CoreTop__l1745(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__739__PROF__CoreTop__l3316(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__740__PROF__CoreTop__l3317(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__684__PROF__CoreTop__l1784(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__796__PROF__CoreTop__l697(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__797__PROF__CoreTop__l696(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__735__PROF__CoreTop__l4785(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__786__PROF__CoreTop__l653(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__769__PROF__CoreTop__l899(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__770__PROF__CoreTop__l903(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__771__PROF__CoreTop__l804(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__779__PROF__CoreTop__l965(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__510__PROF__CoreTop__l1167(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__511__PROF__CoreTop__l3224(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__512__PROF__CoreTop__l1637(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__513__PROF__CoreTop__l1639(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__544__PROF__CoreTop__l3245(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__724__PROF__CoreTop__l4773(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__705__PROF__CoreTop__l4774(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__800__PROF__div__l121(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__801__PROF__div__l120(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__747__PROF__CoreTop__l399(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__748__PROF__CoreTop__l279(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__749__PROF__CoreTop__l338(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__750__PROF__CoreTop__l447(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__751__PROF__CoreTop__l447(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__752__PROF__CoreTop__l217(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__776__PROF__CoreTop__l916(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__787__PROF__CoreTop__l967(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__788__PROF__CoreTop__l975(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__528__PROF__CoreTop__l3223(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__529__PROF__CoreTop__l2445(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__530__PROF__CoreTop__l1642(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__531__PROF__CoreTop__l1641(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l4950(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l3217(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l3240(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l2392(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l4944(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__566__PROF__CoreTop__l4947(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__567__PROF__CoreTop__l2380(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__568__PROF__CoreTop__l4954(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__569__PROF__CoreTop__l4953(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__570__PROF__CoreTop__l4952(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__572__PROF__CoreTop__l4943(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__573__PROF__CoreTop__l4946(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__803__PROF__CoreTop__l817(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__804__PROF__CoreTop__l814(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__763__PROF__CoreTop__l406(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__764__PROF__CoreTop__l294(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__765__PROF__CoreTop__l353(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__766__PROF__CoreTop__l232(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__793__PROF__CoreTop__l4772(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__795__PROF__CoreTop__l978(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__571__PROF__CoreTop__l4951(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__541__PROF__CoreTop__l2475(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__542__PROF__CoreTop__l2566(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l2439(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l2381(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__596__PROF__CoreTop__l2134(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__808__PROF__CoreTop__l864(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__773__PROF__CoreTop__l309(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__774__PROF__CoreTop__l368(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__775__PROF__CoreTop__l247(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__555__PROF__CoreTop__l2540(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__556__PROF__CoreTop__l2548(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__557__PROF__CoreTop__l1440(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__558__PROF__CoreTop__l2655(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__559__PROF__CoreTop__l2634(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l2659(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l2135(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__609__PROF__CoreTop__l2137(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__768__PROF__CoreTop__l1748(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__610__PROF__SRAMTemp__l248(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l4909(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__612__PROF__CoreTop__l4939(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__613__PROF__CoreTop__l2143(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__0__PROF__SRAMTemp__l301(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__615__PROF__CoreTop__l2145(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__616__PROF__CoreTop__l2139(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__812__PROF__CoreTop__l1024(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__783__PROF__CoreTop__l383(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__784__PROF__CoreTop__l262(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l2542(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l2550(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__593__PROF__CoreTop__l1438(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__594__PROF__CoreTop__l1451(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__691__PROF__CoreTop__l1750(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__692__PROF__SRAMTemp__l270(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__693__PROF__CoreTop__l2939(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__694__PROF__CoreTop__l3233(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__1__PROF__CoreTop__l1760(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l4872(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__697__PROF__CoreTop__l3235(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__698__PROF__CoreTop__l3261(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__699__PROF__CoreTop__l3229(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__700__PROF__CoreTop__l2943(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__791__PROF__CoreTop__l387(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__792__PROF__CoreTop__l264(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l2546(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__711__PROF__CoreTop__l2393(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__712__PROF__CoreTop__l2413(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l1199(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1207(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__715__PROF__CoreTop__l2395(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__716__PROF__CoreTop__l2387(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__717__PROF__CoreTop__l2942(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__718__PROF__CoreTop__l2390(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l2407(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__720__PROF__CoreTop__l2938(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__721__PROF__CoreTop__l1221(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__798__PROF__CoreTop__l446(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__690__PROF__CoreTop__l2562(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__730__PROF__CoreTop__l2416(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__731__PROF__CoreTop__l2417(VCoreTop___024root* vlSelf);
void VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1237(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__733__PROF__CoreTop__l4212(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__734__PROF__CoreTop__l4811(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__710__PROF__CoreTop__l1437(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__745__PROF__CoreTop__l4239(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__746__PROF__CoreTop__l1008(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__799__PROF__CoreTop__l979(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__794__PROF__CoreTop__l4770(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__762__PROF__CoreTop__l4771(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__802__PROF__CoreTop__l4776(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__805__PROF__CoreTop__l40(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__806__PROF__CoreTop__l4057(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__807__PROF__CoreTop__l4782(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__809__PROF__CoreTop__l4058(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__810__PROF__CoreTop__l34(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__811__PROF__CoreTop__l1005(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__813__PROF__CoreTop__l4192(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__814__PROF__CoreTop__l4056(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__815__PROF__CoreTop__l4217(VCoreTop___024root* vlSelf);
void VCoreTop___024root___nba_sequent__TOP__816__PROF__CoreTop__l4196(VCoreTop___024root* vlSelf);

VL_ATTR_COLD void VCoreTop___024root___eval_stl(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VCoreTop___024root___nba_sequent__TOP__623__PROF__CoreTop__l4766(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VCoreTop___024root___nba_sequent__TOP__736__PROF__CoreTop__l4129(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__701__PROF__CoreTop__l4128(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__583__PROF__CoreTop__l32(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__503__PROF__CoreTop__l534(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__504__PROF__CoreTop__l519(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__373__PROF__CoreTop__l2946(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__374__PROF__CoreTop__l2948(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__436__PROF__CoreTop__l3311(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__437__PROF__CoreTop__l3308(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__384__PROF__CoreTop__l4767(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__505__PROF__CoreTop__l4765(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__514__PROF__CoreTop__l1236(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__446__PROF__CoreTop__l1848(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__386__PROF__div__l43(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__387__PROF__CoreTop__l1437(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__584__PROF__CoreTop__l1438(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__585__PROF__CoreTop__l1451(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__453__PROF__CoreTop__l2611(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__686__PROF__CSR_DIFF__l10(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__435__PROF__CSR_DIFF__l11(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__438__PROF__CSR_DIFF__l12(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__687__PROF__CSR_DIFF__l13(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__390__PROF__CoreTop__l488(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__382__PROF__DIP_model__l85(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__450__PROF__DIP_model__l86(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__451__PROF__DIP_model__l87(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__392__PROF__DIP_model__l88(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__441__PROF__DIP_model__l89(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__442__PROF__DIP_model__l90(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__395__PROF__DIP_model__l91(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__597__PROF__CoreTop__l947(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__737__PROF__CoreTop__l4062(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__538__PROF__CoreTop__l4791(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__547__PROF__CoreTop__l4777(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__738__PROF__CoreTop__l4063(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__702__PROF__CoreTop__l4174(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__548__PROF__CoreTop__l4778(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__496__PROF__CoreTop__l3232(vlSelf);
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
        VCoreTop___024root___nba_sequent__TOP__777__PROF__CoreTop__l1031(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__604__PROF__CoreTop__l1295(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__586__PROF__CoreTop__l1637(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__587__PROF__CoreTop__l1639(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__397__PROF__CoreTop__l1436(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__398__PROF__CoreTop__l1443(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__780__PROF__CoreTop__l785(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__781__PROF__CoreTop__l783(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__494__PROF__CoreTop__l2443(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__550__PROF__CoreTop__l4781(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__703__PROF__CoreTop__l4144(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__782__PROF__CoreTop__l698(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__540__PROF__CoreTop__l771(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__447__PROF__CoreTop__l3220(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__434__PROF__CoreTop__l1450(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__440__PROF__CoreTop__l1457(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__536__PROF__CoreTop__l2112(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__509__PROF__CoreTop__l799(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__743__PROF__CoreTop__l797(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__515__PROF__CoreTop__l1226(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__445__PROF__CoreTop__l1095(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__474__PROF__CoreTop__l524(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__753__PROF__CoreTop__l1752(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__754__PROF__CoreTop__l1744(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__722__PROF__CoreTop__l4187(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__581__PROF__CoreTop__l3309(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__685__PROF__CoreTop__l3310(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__582__PROF__CoreTop__l4213(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__535__PROF__CoreTop__l2096(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__491__PROF__DIP_model__l93(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__785__PROF__CoreTop__l4813(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__726__PROF__CoreTop__l3313(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__727__PROF__CoreTop__l3315(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__600__PROF__CoreTop__l1642(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__601__PROF__CoreTop__l1641(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__790__PROF__CoreTop__l786(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__588__PROF__CoreTop__l1283(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__723__PROF__CoreTop__l4157(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__789__PROF__CoreTop__l695(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__778__PROF__CoreTop__l770(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__554__PROF__CoreTop__l976(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__546__PROF__CoreTop__l2112(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__755__PROF__CoreTop__l899(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__756__PROF__CoreTop__l903(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__757__PROF__CoreTop__l806(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__758__PROF__CoreTop__l801(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__759__PROF__CoreTop__l932(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__760__PROF__CoreTop__l935(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__532__PROF__CoreTop__l3243(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__488__PROF__CoreTop__l1116(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__767__PROF__CoreTop__l1745(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__739__PROF__CoreTop__l3316(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__740__PROF__CoreTop__l3317(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__684__PROF__CoreTop__l1784(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__796__PROF__CoreTop__l697(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__797__PROF__CoreTop__l696(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__735__PROF__CoreTop__l4785(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__786__PROF__CoreTop__l653(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__769__PROF__CoreTop__l899(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__770__PROF__CoreTop__l903(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__771__PROF__CoreTop__l804(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__779__PROF__CoreTop__l965(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__510__PROF__CoreTop__l1167(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__511__PROF__CoreTop__l3224(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__512__PROF__CoreTop__l1637(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__513__PROF__CoreTop__l1639(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__544__PROF__CoreTop__l3245(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__724__PROF__CoreTop__l4773(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__705__PROF__CoreTop__l4774(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__800__PROF__div__l121(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__801__PROF__div__l120(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__747__PROF__CoreTop__l399(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__748__PROF__CoreTop__l279(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__749__PROF__CoreTop__l338(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__750__PROF__CoreTop__l447(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__751__PROF__CoreTop__l447(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__752__PROF__CoreTop__l217(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__776__PROF__CoreTop__l916(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__787__PROF__CoreTop__l967(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__788__PROF__CoreTop__l975(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__528__PROF__CoreTop__l3223(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__529__PROF__CoreTop__l2445(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__530__PROF__CoreTop__l1642(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__531__PROF__CoreTop__l1641(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__561__PROF__CoreTop__l4950(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__562__PROF__CoreTop__l3217(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__563__PROF__CoreTop__l3240(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__564__PROF__CoreTop__l2392(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__565__PROF__CoreTop__l4944(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__566__PROF__CoreTop__l4947(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__567__PROF__CoreTop__l2380(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__568__PROF__CoreTop__l4954(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__569__PROF__CoreTop__l4953(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__570__PROF__CoreTop__l4952(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__572__PROF__CoreTop__l4943(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__573__PROF__CoreTop__l4946(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__803__PROF__CoreTop__l817(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__804__PROF__CoreTop__l814(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__763__PROF__CoreTop__l406(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__764__PROF__CoreTop__l294(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__765__PROF__CoreTop__l353(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__766__PROF__CoreTop__l232(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__793__PROF__CoreTop__l4772(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__795__PROF__CoreTop__l978(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__571__PROF__CoreTop__l4951(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__541__PROF__CoreTop__l2475(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__542__PROF__CoreTop__l2566(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__543__PROF__CoreTop__l2439(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__595__PROF__CoreTop__l2381(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__596__PROF__CoreTop__l2134(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__808__PROF__CoreTop__l864(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__773__PROF__CoreTop__l309(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__774__PROF__CoreTop__l368(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__775__PROF__CoreTop__l247(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__555__PROF__CoreTop__l2540(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__556__PROF__CoreTop__l2548(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__557__PROF__CoreTop__l1440(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__558__PROF__CoreTop__l2655(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__559__PROF__CoreTop__l2634(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__560__PROF__CoreTop__l2659(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__608__PROF__CoreTop__l2135(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__609__PROF__CoreTop__l2137(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__768__PROF__CoreTop__l1748(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__610__PROF__SRAMTemp__l248(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__611__PROF__CoreTop__l4909(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__612__PROF__CoreTop__l4939(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__613__PROF__CoreTop__l2143(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__0__PROF__SRAMTemp__l301(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__615__PROF__CoreTop__l2145(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__616__PROF__CoreTop__l2139(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__812__PROF__CoreTop__l1024(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__783__PROF__CoreTop__l383(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__784__PROF__CoreTop__l262(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__591__PROF__CoreTop__l2542(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__592__PROF__CoreTop__l2550(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__593__PROF__CoreTop__l1438(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__594__PROF__CoreTop__l1451(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__691__PROF__CoreTop__l1750(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__692__PROF__SRAMTemp__l270(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__693__PROF__CoreTop__l2939(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__694__PROF__CoreTop__l3233(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__1__PROF__CoreTop__l1760(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__3__PROF__CoreTop__l4872(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__697__PROF__CoreTop__l3235(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__698__PROF__CoreTop__l3261(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__699__PROF__CoreTop__l3229(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__700__PROF__CoreTop__l2943(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__791__PROF__CoreTop__l387(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__792__PROF__CoreTop__l264(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__607__PROF__CoreTop__l2546(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__711__PROF__CoreTop__l2393(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__712__PROF__CoreTop__l2413(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__4__PROF__CoreTop__l1199(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__5__PROF__CoreTop__l1207(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__715__PROF__CoreTop__l2395(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__716__PROF__CoreTop__l2387(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__717__PROF__CoreTop__l2942(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__718__PROF__CoreTop__l2390(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__2__PROF__CoreTop__l2407(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__720__PROF__CoreTop__l2938(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__721__PROF__CoreTop__l1221(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__798__PROF__CoreTop__l446(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__690__PROF__CoreTop__l2562(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__730__PROF__CoreTop__l2416(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__731__PROF__CoreTop__l2417(vlSelf);
        VCoreTop___024root___ico_sequent__TOP__6__PROF__CoreTop__l1237(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__733__PROF__CoreTop__l4212(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__734__PROF__CoreTop__l4811(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__710__PROF__CoreTop__l1437(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__745__PROF__CoreTop__l4239(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__746__PROF__CoreTop__l1008(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__799__PROF__CoreTop__l979(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__794__PROF__CoreTop__l4770(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__762__PROF__CoreTop__l4771(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__802__PROF__CoreTop__l4776(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__805__PROF__CoreTop__l40(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__806__PROF__CoreTop__l4057(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__807__PROF__CoreTop__l4782(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__809__PROF__CoreTop__l4058(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__810__PROF__CoreTop__l34(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__811__PROF__CoreTop__l1005(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__813__PROF__CoreTop__l4192(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__814__PROF__CoreTop__l4056(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__815__PROF__CoreTop__l4217(vlSelf);
        VCoreTop___024root___nba_sequent__TOP__816__PROF__CoreTop__l4196(vlSelf);
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
    vlSelf->CoreTop__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT___T_4 = VL_RAND_RESET_I(1);
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
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_in_valid = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_in_a = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_in_b = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_div_signed = VL_RAND_RESET_I(1);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_quotient = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_remainder = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__dividend);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__divisor = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__S = VL_RAND_RESET_Q(64);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__count = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(65, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__res_div);
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
    vlSelf->__Vdly__CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__count = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(128, vlSelf->__Vdly__CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__dividend);
    vlSelf->__Vdly__CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__S = VL_RAND_RESET_Q(64);
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
