// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h9849538a__0;
    // Body
    __Vtemp_h9849538a__0[0U] = 0x2e667374U;
    __Vtemp_h9849538a__0[1U] = 0x61746f72U;
    __Vtemp_h9849538a__0[2U] = 0x6572696cU;
    __Vtemp_h9849538a__0[3U] = 0x76U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_h9849538a__0));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("\n///////////////////////////////////////\n***************************************\nTESTING TESTING TESTING TESTING TESTING\n***************************************\n///////////////////////////////////////\n\nBEGIN TEST\n");
    vlSelf->testbench__DOT__itervar = 0U;
    vlSelf->testbench__DOT__correct_count_o = 0U;
    co_await vlSelf->__VtrigSched_hec42002a__0.trigger(
                                                       "@(negedge testbench.reset_i)", 
                                                       "testbench.sv", 
                                                       67);
    vlSelf->testbench__DOT__reset_done = 1U;
    co_await vlSelf->__VtrigSched_hef748430__0.trigger(
                                                       "@(posedge testbench.clk_i)", 
                                                       "testbench.sv", 
                                                       72);
    if (vlSelf->testbench__DOT__up_i) {
        vlSelf->testbench__DOT__correct_count_o = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->testbench__DOT__correct_count_o)));
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
    }
    VL_WRITEF("At Posedge           0: correct_count_o = %b, reset_i = %b \n",
              4,vlSelf->testbench__DOT__correct_count_o,
              1,(IData)(vlSelf->testbench__DOT__reset_i));
    vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__itervar = 1U;
    co_await vlSelf->__VtrigSched_hef748430__0.trigger(
                                                       "@(posedge testbench.clk_i)", 
                                                       "testbench.sv", 
                                                       72);
    if (vlSelf->testbench__DOT__up_i) {
        vlSelf->testbench__DOT__correct_count_o = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->testbench__DOT__correct_count_o)));
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
    }
    VL_WRITEF("At Posedge           1: correct_count_o = %b, reset_i = %b \n",
              4,vlSelf->testbench__DOT__correct_count_o,
              1,(IData)(vlSelf->testbench__DOT__reset_i));
    vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__itervar = 2U;
    co_await vlSelf->__VtrigSched_hef748430__0.trigger(
                                                       "@(posedge testbench.clk_i)", 
                                                       "testbench.sv", 
                                                       72);
    if (vlSelf->testbench__DOT__up_i) {
        vlSelf->testbench__DOT__correct_count_o = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->testbench__DOT__correct_count_o)));
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
    }
    VL_WRITEF("At Posedge           2: correct_count_o = %b, reset_i = %b \n",
              4,vlSelf->testbench__DOT__correct_count_o,
              1,(IData)(vlSelf->testbench__DOT__reset_i));
    vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__itervar = 3U;
    co_await vlSelf->__VtrigSched_hef748430__0.trigger(
                                                       "@(posedge testbench.clk_i)", 
                                                       "testbench.sv", 
                                                       72);
    if (vlSelf->testbench__DOT__up_i) {
        vlSelf->testbench__DOT__correct_count_o = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->testbench__DOT__correct_count_o)));
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
    }
    VL_WRITEF("At Posedge           3: correct_count_o = %b, reset_i = %b \n",
              4,vlSelf->testbench__DOT__correct_count_o,
              1,(IData)(vlSelf->testbench__DOT__reset_i));
    vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__itervar = 4U;
    co_await vlSelf->__VtrigSched_hef748430__0.trigger(
                                                       "@(posedge testbench.clk_i)", 
                                                       "testbench.sv", 
                                                       72);
    if (vlSelf->testbench__DOT__up_i) {
        vlSelf->testbench__DOT__correct_count_o = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->testbench__DOT__correct_count_o)));
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
    }
    VL_WRITEF("At Posedge           4: correct_count_o = %b, reset_i = %b \n",
              4,vlSelf->testbench__DOT__correct_count_o,
              1,(IData)(vlSelf->testbench__DOT__reset_i));
    vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__itervar = 5U;
    co_await vlSelf->__VtrigSched_hef748430__0.trigger(
                                                       "@(posedge testbench.clk_i)", 
                                                       "testbench.sv", 
                                                       72);
    if (vlSelf->testbench__DOT__up_i) {
        vlSelf->testbench__DOT__correct_count_o = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->testbench__DOT__correct_count_o)));
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
    }
    VL_WRITEF("At Posedge           5: correct_count_o = %b, reset_i = %b \n",
              4,vlSelf->testbench__DOT__correct_count_o,
              1,(IData)(vlSelf->testbench__DOT__reset_i));
    vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__itervar = 6U;
    co_await vlSelf->__VtrigSched_hef748430__0.trigger(
                                                       "@(posedge testbench.clk_i)", 
                                                       "testbench.sv", 
                                                       72);
    if (vlSelf->testbench__DOT__up_i) {
        vlSelf->testbench__DOT__correct_count_o = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->testbench__DOT__correct_count_o)));
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
    }
    VL_WRITEF("At Posedge           6: correct_count_o = %b, reset_i = %b \n",
              4,vlSelf->testbench__DOT__correct_count_o,
              1,(IData)(vlSelf->testbench__DOT__reset_i));
    vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__itervar = 7U;
    co_await vlSelf->__VtrigSched_hef748430__0.trigger(
                                                       "@(posedge testbench.clk_i)", 
                                                       "testbench.sv", 
                                                       72);
    if (vlSelf->testbench__DOT__up_i) {
        vlSelf->testbench__DOT__correct_count_o = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->testbench__DOT__correct_count_o)));
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
    }
    VL_WRITEF("At Posedge           7: correct_count_o = %b, reset_i = %b \n",
              4,vlSelf->testbench__DOT__correct_count_o,
              1,(IData)(vlSelf->testbench__DOT__reset_i));
    vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__itervar = 8U;
    co_await vlSelf->__VtrigSched_hef748430__0.trigger(
                                                       "@(posedge testbench.clk_i)", 
                                                       "testbench.sv", 
                                                       72);
    if (vlSelf->testbench__DOT__up_i) {
        vlSelf->testbench__DOT__correct_count_o = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->testbench__DOT__correct_count_o)));
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
    }
    VL_WRITEF("At Posedge           8: correct_count_o = %b, reset_i = %b \n",
              4,vlSelf->testbench__DOT__correct_count_o,
              1,(IData)(vlSelf->testbench__DOT__reset_i));
    vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__itervar = 9U;
    co_await vlSelf->__VtrigSched_hef748430__0.trigger(
                                                       "@(posedge testbench.clk_i)", 
                                                       "testbench.sv", 
                                                       72);
    if (vlSelf->testbench__DOT__up_i) {
        vlSelf->testbench__DOT__correct_count_o = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->testbench__DOT__correct_count_o)));
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
    }
    VL_WRITEF("At Posedge           9: correct_count_o = %b, reset_i = %b \n",
              4,vlSelf->testbench__DOT__correct_count_o,
              1,(IData)(vlSelf->testbench__DOT__reset_i));
    vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__itervar = 0xaU;
    co_await vlSelf->__VtrigSched_hef748430__0.trigger(
                                                       "@(posedge testbench.clk_i)", 
                                                       "testbench.sv", 
                                                       72);
    if (vlSelf->testbench__DOT__up_i) {
        vlSelf->testbench__DOT__correct_count_o = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->testbench__DOT__correct_count_o)));
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
    }
    VL_WRITEF("At Posedge          10: correct_count_o = %b, reset_i = %b \n",
              4,vlSelf->testbench__DOT__correct_count_o,
              1,(IData)(vlSelf->testbench__DOT__reset_i));
    vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__itervar = 0xbU;
    co_await vlSelf->__VtrigSched_hef748430__0.trigger(
                                                       "@(posedge testbench.clk_i)", 
                                                       "testbench.sv", 
                                                       72);
    if (vlSelf->testbench__DOT__up_i) {
        vlSelf->testbench__DOT__correct_count_o = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->testbench__DOT__correct_count_o)));
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
    }
    VL_WRITEF("At Posedge          11: correct_count_o = %b, reset_i = %b \n",
              4,vlSelf->testbench__DOT__correct_count_o,
              1,(IData)(vlSelf->testbench__DOT__reset_i));
    vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__itervar = 0xcU;
    co_await vlSelf->__VtrigSched_hef748430__0.trigger(
                                                       "@(posedge testbench.clk_i)", 
                                                       "testbench.sv", 
                                                       72);
    if (vlSelf->testbench__DOT__up_i) {
        vlSelf->testbench__DOT__correct_count_o = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->testbench__DOT__correct_count_o)));
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
    }
    VL_WRITEF("At Posedge          12: correct_count_o = %b, reset_i = %b \n",
              4,vlSelf->testbench__DOT__correct_count_o,
              1,(IData)(vlSelf->testbench__DOT__reset_i));
    vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__itervar = 0xdU;
    co_await vlSelf->__VtrigSched_hef748430__0.trigger(
                                                       "@(posedge testbench.clk_i)", 
                                                       "testbench.sv", 
                                                       72);
    if (vlSelf->testbench__DOT__up_i) {
        vlSelf->testbench__DOT__correct_count_o = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->testbench__DOT__correct_count_o)));
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
    }
    VL_WRITEF("At Posedge          13: correct_count_o = %b, reset_i = %b \n",
              4,vlSelf->testbench__DOT__correct_count_o,
              1,(IData)(vlSelf->testbench__DOT__reset_i));
    vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__itervar = 0xeU;
    co_await vlSelf->__VtrigSched_hef748430__0.trigger(
                                                       "@(posedge testbench.clk_i)", 
                                                       "testbench.sv", 
                                                       72);
    if (vlSelf->testbench__DOT__up_i) {
        vlSelf->testbench__DOT__correct_count_o = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->testbench__DOT__correct_count_o)));
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
    }
    VL_WRITEF("At Posedge          14: correct_count_o = %b, reset_i = %b \n",
              4,vlSelf->testbench__DOT__correct_count_o,
              1,(IData)(vlSelf->testbench__DOT__reset_i));
    vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__itervar = 0xfU;
    co_await vlSelf->__VtrigSched_hef748430__0.trigger(
                                                       "@(posedge testbench.clk_i)", 
                                                       "testbench.sv", 
                                                       72);
    if (vlSelf->testbench__DOT__up_i) {
        vlSelf->testbench__DOT__correct_count_o = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->testbench__DOT__correct_count_o)));
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
    }
    VL_WRITEF("At Posedge          15: correct_count_o = %b, reset_i = %b \n",
              4,vlSelf->testbench__DOT__correct_count_o,
              1,(IData)(vlSelf->testbench__DOT__reset_i));
    vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__itervar = 0x10U;
    VL_FINISH_MT("testbench.sv", 79, "");
    vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388U, 
                                           "../provided_modules/nonsynth_clock_gen.sv", 
                                           11);
        vlSelf->testbench__DOT__clk_i = (1U & (~ (IData)(vlSelf->testbench__DOT__clk_i)));
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((~ (IData)(vlSelf->testbench__DOT__clk_i)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__testbench__DOT__clk_i));
    vlSelf->__VactTriggered.at(1U) = ((~ (IData)(vlSelf->testbench__DOT__reset_i)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__testbench__DOT__reset_i));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->testbench__DOT__reset_i) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__testbench__DOT__reset_i)));
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->testbench__DOT__clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__testbench__DOT__clk_i)));
    vlSelf->__VactTriggered.at(4U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__clk_i 
        = vlSelf->testbench__DOT__clk_i;
    vlSelf->__Vtrigrprev__TOP__testbench__DOT__reset_i 
        = vlSelf->testbench__DOT__reset_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtestbench___024root___act_comb__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_comb__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->testbench__DOT__reset_done) 
         ^ (IData)(vlSelf->testbench__DOT____Vtogcov__reset_done))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__reset_done 
            = vlSelf->testbench__DOT__reset_done;
    }
    if ((((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
          != (IData)(vlSelf->testbench__DOT__correct_count_o)) 
         ^ (IData)(vlSelf->testbench__DOT____Vtogcov__error_counter_o))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__error_counter_o 
            = ((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
               != (IData)(vlSelf->testbench__DOT__correct_count_o));
    }
    if ((1U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xeU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (1U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((2U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xdU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (2U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((4U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xbU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (4U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((8U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((7U & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (8U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
}

VL_INLINE_OPT void Vtestbench___024root___act_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->testbench__DOT__clk_i) ^ (IData)(vlSelf->testbench__DOT____Vtogcov__clk_i))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__clk_i = vlSelf->testbench__DOT__clk_i;
    }
    if (((IData)(vlSelf->testbench__DOT__clk_i) ^ (IData)(vlSelf->testbench__DOT__cg__DOT____Vtogcov__clk_o))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__cg__DOT____Vtogcov__clk_o 
            = vlSelf->testbench__DOT__clk_i;
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__testbench__DOT__rg__DOT__ctr_lo_r;
    __Vdly__testbench__DOT__rg__DOT__ctr_lo_r = 0;
    // Body
    vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
    }
    __Vdly__testbench__DOT__rg__DOT__ctr_lo_r = vlSelf->testbench__DOT__rg__DOT__ctr_lo_r;
    if ((1U & (~ (((IData)(vlSelf->testbench__DOT__reset_done) 
                   & (~ (IData)(vlSelf->testbench__DOT__reset_i))) 
                  & ((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
                     != (IData)(vlSelf->testbench__DOT__correct_count_o)))))) {
        if ((1U & (~ ((IData)(vlSelf->testbench__DOT__reset_i) 
                      & ((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
                         != (IData)(vlSelf->testbench__DOT__correct_count_o)))))) {
            vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        }
        if (((IData)(vlSelf->testbench__DOT__reset_i) 
             & ((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
                != (IData)(vlSelf->testbench__DOT__correct_count_o)))) {
            vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->testbench__DOT__rg__DOT__ctr_lo_r) {
        if ((0xaU != (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r))) {
            vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r))) {
            vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->testbench__DOT__reset_done) 
                      & (~ (IData)(vlSelf->testbench__DOT__reset_i))) 
                     & ((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
                        != (IData)(vlSelf->testbench__DOT__correct_count_o))))) {
        VL_WRITEF("\033[0;31mError!\033[0m: count_o should be %b, got %b\n",
                  4,vlSelf->testbench__DOT__correct_count_o,
                  4,(IData)(vlSelf->testbench__DOT__dut__DOT__count_r));
    } else if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__reset_i) 
                            & ((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
                               != (IData)(vlSelf->testbench__DOT__correct_count_o))))) {
        VL_WRITEF("\033[0;31mError!\033[0m: count_o should be %b during reset, got %b\n",
                  4,vlSelf->testbench__DOT__correct_count_o,
                  4,(IData)(vlSelf->testbench__DOT__dut__DOT__count_r));
    }
    if (vlSelf->testbench__DOT__rg__DOT__ctr_lo_r) {
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__rg__DOT__phase_hi_r)))) {
            vlSelf->testbench__DOT__rg__DOT__ctr_hi_r 
                = (0xfU & ((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r) 
                           + (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r)));
        }
    }
    if ((((IData)(vlSelf->testbench__DOT__reset_done) 
          & (~ (IData)(vlSelf->testbench__DOT__reset_i))) 
         & ((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
            != (IData)(vlSelf->testbench__DOT__correct_count_o)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelf->testbench__DOT__up_i = 1U;
    if ((1U & (~ (IData)(vlSelf->testbench__DOT__rg__DOT__phase_lo_r)))) {
        __Vdly__testbench__DOT__rg__DOT__ctr_lo_r = 
            (1U & ((IData)(1U) + (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r)));
    }
    vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSelf->testbench__DOT____Vtogcov__up_i)))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__up_i = vlSelf->testbench__DOT__up_i;
    }
    if (((IData)(vlSelf->testbench__DOT__up_i) ^ (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__up_i))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__up_i 
            = vlSelf->testbench__DOT__up_i;
    }
    vlSelf->testbench__DOT__rg__DOT__ctr_lo_r = __Vdly__testbench__DOT__rg__DOT__ctr_lo_r;
    if (((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r) 
         ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_lo_r))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_lo_r 
            = vlSelf->testbench__DOT__rg__DOT__ctr_lo_r;
    }
    vlSelf->testbench__DOT__rg__DOT__phase_lo_r = vlSelf->testbench__DOT__rg__DOT__ctr_lo_r;
    if (((0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)) 
         ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__phase_hi_r))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__phase_hi_r 
            = (0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r));
    }
    vlSelf->testbench__DOT__rg__DOT__phase_hi_r = (0xaU 
                                                   == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r));
    if ((1U & ((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r) 
               ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r 
            = ((0xeU & (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)) 
               | (1U & (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)));
    }
    if ((2U & ((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r) 
               ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r 
            = ((0xdU & (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)) 
               | (2U & (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)));
    }
    if ((4U & ((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r) 
               ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r 
            = ((0xbU & (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)) 
               | (4U & (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)));
    }
    if ((8U & ((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r) 
               ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r 
            = ((7U & (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)) 
               | (8U & (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)));
    }
    vlSelf->testbench__DOT__reset_i = ((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r) 
                                       ^ (0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)));
    if (((IData)(vlSelf->testbench__DOT__reset_i) ^ (IData)(vlSelf->testbench__DOT____Vtogcov__reset_i))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__reset_i 
            = vlSelf->testbench__DOT__reset_i;
    }
    if (((IData)(vlSelf->testbench__DOT__reset_i) ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__async_reset_o))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__async_reset_o 
            = vlSelf->testbench__DOT__reset_i;
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__1\n"); );
    // Body
    VL_WRITEF("__________ ___________  _______________________________\n\\______   \\\\_   _____/ /   _____/\\_   _____/\\__    ___/\n |       _/ |    __)_  \\_____  \\  |    __)_   |    |   \n |    |   \\ |        \\ /        \\ |        \\  |    |  1->0 time = %10#\n |____|_  //_______  //_______  //_______  /  |____|   \n ASYNC  \\/         \\/         \\/         \\/            \n",
              32,(IData)(VL_TIME_UNITED_Q(1000)));
    vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__2(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__2\n"); );
    // Body
    VL_WRITEF("__________ ___________  _______________________________\n\\______   \\\\_   _____/ /   _____/\\_   _____/\\__    ___/\n |       _/ |    __)_  \\_____  \\  |    __)_   |    |   \n |    |   \\ |        \\ /        \\ |        \\  |    |  0->1 time = %10#\n |____|_  //_______  //_______  //_______  /  |____|   \n ASYNC  \\/         \\/         \\/         \\/            \n",
              32,(IData)(VL_TIME_UNITED_Q(1000)));
    vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__3(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->testbench__DOT__reset_i) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__count_r = 0U;
    } else {
        vlSelf->testbench__DOT__dut__DOT__count_r = vlSelf->testbench__DOT__dut__DOT__count_n;
    }
    if ((1U & (~ (IData)(vlSelf->testbench__DOT__reset_i)))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__count_o 
            = ((0xeU & (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)) 
               | (1U & (IData)(vlSelf->testbench__DOT__dut__DOT__count_r)));
    }
    if ((2U & ((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__count_o 
            = ((0xdU & (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)) 
               | (2U & (IData)(vlSelf->testbench__DOT__dut__DOT__count_r)));
    }
    if ((4U & ((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__count_o 
            = ((0xbU & (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)) 
               | (4U & (IData)(vlSelf->testbench__DOT__dut__DOT__count_r)));
    }
    if ((8U & ((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__count_o 
            = ((7U & (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)) 
               | (8U & (IData)(vlSelf->testbench__DOT__dut__DOT__count_r)));
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->testbench__DOT__reset_done) 
         ^ (IData)(vlSelf->testbench__DOT____Vtogcov__reset_done))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__reset_done 
            = vlSelf->testbench__DOT__reset_done;
    }
    if ((1U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xeU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (1U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((2U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xdU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (2U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((4U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xbU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (4U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((8U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((7U & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (8U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
          != (IData)(vlSelf->testbench__DOT__correct_count_o)) 
         ^ (IData)(vlSelf->testbench__DOT____Vtogcov__error_counter_o))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__error_counter_o 
            = ((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
               != (IData)(vlSelf->testbench__DOT__correct_count_o));
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->testbench__DOT__dut__DOT__count_n = (0xfU 
                                                 & ((IData)(vlSelf->testbench__DOT__up_i)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->testbench__DOT__dut__DOT__count_r))
                                                     : (IData)(vlSelf->testbench__DOT__dut__DOT__count_r)));
    if ((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__count_n) 
               ^ (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__count_n)))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__count_n 
            = ((0xeU & (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__count_n)) 
               | (1U & (IData)(vlSelf->testbench__DOT__dut__DOT__count_n)));
    }
    if ((2U & ((IData)(vlSelf->testbench__DOT__dut__DOT__count_n) 
               ^ (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__count_n)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__count_n 
            = ((0xdU & (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__count_n)) 
               | (2U & (IData)(vlSelf->testbench__DOT__dut__DOT__count_n)));
    }
    if ((4U & ((IData)(vlSelf->testbench__DOT__dut__DOT__count_n) 
               ^ (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__count_n)))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__count_n 
            = ((0xbU & (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__count_n)) 
               | (4U & (IData)(vlSelf->testbench__DOT__dut__DOT__count_n)));
    }
    if ((8U & ((IData)(vlSelf->testbench__DOT__dut__DOT__count_n) 
               ^ (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__count_n)))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__count_n 
            = ((7U & (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__count_n)) 
               | (8U & (IData)(vlSelf->testbench__DOT__dut__DOT__count_n)));
    }
}
