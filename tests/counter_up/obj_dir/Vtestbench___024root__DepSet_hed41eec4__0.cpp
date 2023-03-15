// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"

#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__0(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__1(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_initial(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial\n"); );
    // Body
    Vtestbench___024root___eval_initial__TOP(vlSelf);
    Vtestbench___024root___eval_initial__TOP__0(vlSelf);
    Vtestbench___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__clk_i 
        = vlSelf->testbench__DOT__clk_i;
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__reset_i 
        = vlSelf->testbench__DOT__reset_i;
}

void Vtestbench___024root___act_comb__TOP__0(Vtestbench___024root* vlSelf);
void Vtestbench___024root___act_sequent__TOP__0(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_act\n"); );
    // Body
    if ((vlSelf->__VactTriggered.at(1U) | vlSelf->__VactTriggered.at(3U))) {
        Vtestbench___024root___act_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        Vtestbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf);
void Vtestbench___024root___nba_sequent__TOP__1(Vtestbench___024root* vlSelf);
void Vtestbench___024root___nba_sequent__TOP__2(Vtestbench___024root* vlSelf);
void Vtestbench___024root___nba_sequent__TOP__3(Vtestbench___024root* vlSelf);
void Vtestbench___024root___nba_comb__TOP__0(Vtestbench___024root* vlSelf);
void Vtestbench___024root___nba_comb__TOP__1(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtestbench___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtestbench___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtestbench___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vtestbench___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(3U))) {
        Vtestbench___024root___nba_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        Vtestbench___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(3U))) {
        Vtestbench___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf);
void Vtestbench___024root___timing_commit(Vtestbench___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtestbench___024root___eval_triggers__act(vlSelf);
            Vtestbench___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtestbench___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("testbench.sv", 7, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtestbench___024root___timing_resume(vlSelf);
                Vtestbench___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtestbench___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("testbench.sv", 7, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtestbench___024root___eval_nba(vlSelf);
        }
    }
}

void Vtestbench___024root___timing_commit(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(1U))))) {
        vlSelf->__VtrigSched_hec42002a__0.commit("@(negedge testbench.reset_i)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(3U))))) {
        vlSelf->__VtrigSched_hef748430__0.commit("@(posedge testbench.clk_i)");
    }
}

void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VtrigSched_hec42002a__0.resume("@(negedge testbench.reset_i)");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        vlSelf->__VtrigSched_hef748430__0.resume("@(posedge testbench.clk_i)");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
