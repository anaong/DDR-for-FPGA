// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_static__TOP(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->testbench__DOT__reset_done = 0U;
    vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__dut__DOT__count_r = 0U;
    vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__dut__DOT__count_n = 0U;
    vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP\n"); );
    // Body
    VL_WRITEF("%Ntestbench.cg with cycle_time_p          10\n",
              vlSymsp->name());
    vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtestbench___024root___eval_final__TOP(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_final__TOP\n"); );
    // Body
    VL_WRITEF("Simulation time is %t\n",64,VL_TIME_UNITED_Q(1000),
              -9);
    if (((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
         != (IData)(vlSelf->testbench__DOT__correct_count_o))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        VL_WRITEF("\033[0;31m    ______                    \033[0m\n\033[0;31m   / ____/_____________  _____\033[0m\n\033[0;31m  / __/ / ___/ ___/ __ \\/ ___/\033[0m\n\033[0;31m / /___/ /  / /  / /_/ / /    \033[0m\n\033[0;31m/_____/_/  /_/   \\____/_/     \033[0m\n\nSimulation Failed\n");
    } else {
        VL_WRITEF("\033[0;32m    ____  ___   __________\033[0m\n\033[0;32m   / __ \\/   | / ___/ ___/\033[0m\n\033[0;32m  / /_/ / /| | \\__ \\__  \033[0m\n\033[0;32m / ____/ ___ |___/ /__/ / \033[0m\n\033[0;32m/_/   /_/  |_/____/____/  \033[0m\n\nSimulation Succeeded!\n");
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___eval_triggers__stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->testbench__DOT__up_i)))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->testbench__DOT__up_i) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__count_n = 
            (0xfU & ((IData)(1U) + (IData)(vlSelf->testbench__DOT__dut__DOT__count_r)));
    } else {
        vlSelf->testbench__DOT__dut__DOT__count_n = 
            (0xfU & (IData)(vlSelf->testbench__DOT__dut__DOT__count_r));
    }
    if (((IData)(vlSelf->testbench__DOT__reset_done) 
         ^ (IData)(vlSelf->testbench__DOT____Vtogcov__reset_done))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__reset_done 
            = vlSelf->testbench__DOT__reset_done;
    }
    if (((IData)(vlSelf->testbench__DOT__up_i) ^ (IData)(vlSelf->testbench__DOT____Vtogcov__up_i))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__up_i = vlSelf->testbench__DOT__up_i;
    }
    if (((IData)(vlSelf->testbench__DOT__clk_i) ^ (IData)(vlSelf->testbench__DOT____Vtogcov__clk_i))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__clk_i = vlSelf->testbench__DOT__clk_i;
    }
    if (((IData)(vlSelf->testbench__DOT__error) ^ (IData)(vlSelf->testbench__DOT____Vtogcov__error))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__error = vlSelf->testbench__DOT__error;
    }
    if (((IData)(vlSelf->testbench__DOT__clk_i) ^ (IData)(vlSelf->testbench__DOT__cg__DOT____Vtogcov__clk_o))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__cg__DOT____Vtogcov__clk_o 
            = vlSelf->testbench__DOT__clk_i;
    }
    if (((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r) 
         ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_lo_r))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_lo_r 
            = vlSelf->testbench__DOT__rg__DOT__ctr_lo_r;
    }
    if (((0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)) 
         ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__phase_hi_r))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__phase_hi_r 
            = (0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r));
    }
    if (((IData)(vlSelf->testbench__DOT__up_i) ^ (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__up_i))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__up_i 
            = vlSelf->testbench__DOT__up_i;
    }
    vlSelf->testbench__DOT__rg__DOT__phase_lo_r = vlSelf->testbench__DOT__rg__DOT__ctr_lo_r;
    vlSelf->testbench__DOT__rg__DOT__phase_hi_r = (0xaU 
                                                   == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r));
    if ((((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
          != (IData)(vlSelf->testbench__DOT__correct_count_o)) 
         ^ (IData)(vlSelf->testbench__DOT____Vtogcov__error_counter_o))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__error_counter_o 
            = ((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
               != (IData)(vlSelf->testbench__DOT__correct_count_o));
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

VL_ATTR_COLD void Vtestbench___024root___configure_coverage(Vtestbench___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "testbench.sv", 11, 16, ".testbench", "v_toggle/testbench", "reset_done[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "testbench.sv", 11, 29, ".testbench", "v_line/testbench", "block", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "testbench.sv", 12, 16, ".testbench", "v_toggle/testbench", "up_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "testbench.sv", 13, 16, ".testbench", "v_toggle/testbench", "clk_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "testbench.sv", 14, 17, ".testbench", "v_toggle/testbench", "reset_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "testbench.sv", 15, 24, ".testbench", "v_toggle/testbench", "count_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "testbench.sv", 15, 24, ".testbench", "v_toggle/testbench", "count_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "testbench.sv", 15, 24, ".testbench", "v_toggle/testbench", "count_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "testbench.sv", 15, 24, ".testbench", "v_toggle/testbench", "count_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "testbench.sv", 17, 25, ".testbench", "v_toggle/testbench", "correct_count_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "testbench.sv", 17, 25, ".testbench", "v_toggle/testbench", "correct_count_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "testbench.sv", 17, 25, ".testbench", "v_toggle/testbench", "correct_count_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "testbench.sv", 17, 25, ".testbench", "v_toggle/testbench", "correct_count_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "testbench.sv", 18, 16, ".testbench", "v_toggle/testbench", "error_counter_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "testbench.sv", 20, 16, ".testbench", "v_toggle/testbench", "error[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "testbench.sv", 73, 5, ".testbench", "v_branch/testbench", "if", "73-74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "testbench.sv", 73, 6, ".testbench", "v_branch/testbench", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "testbench.sv", 71, 4, ".testbench", "v_line/testbench", "block", "71-72,76-77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "testbench.sv", 47, 4, ".testbench", "v_line/testbench", "block", "47,49,53,55-62,64-65,67,69,71,79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "testbench.sv", 89, 16, ".testbench", "v_branch/testbench", "if", "89-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "testbench.sv", 89, 17, ".testbench", "v_branch/testbench", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "testbench.sv", 86, 7, ".testbench", "v_line/testbench", "elsif", "86-87");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "testbench.sv", 83, 4, ".testbench", "v_line/testbench", "block", "83-84");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "testbench.sv", 97, 7, ".testbench", "v_branch/testbench", "if", "97-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "testbench.sv", 97, 8, ".testbench", "v_branch/testbench", "else", "106-113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "testbench.sv", 95, 4, ".testbench", "v_line/testbench", "block", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../provided_modules/nonsynth_clock_gen.sv", 3, 16, ".testbench.cg", "v_toggle/nonsynth_clock_gen", "clk_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../provided_modules/nonsynth_clock_gen.sv", 11, 4, ".testbench.cg", "v_line/nonsynth_clock_gen", "block", "11,13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../provided_modules/nonsynth_reset_gen.sv", 17, 34, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "clk_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../provided_modules/nonsynth_reset_gen.sv", 18, 34, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "async_reset_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../provided_modules/nonsynth_reset_gen.sv", 33, 60, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "ctr_lo_r[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../provided_modules/nonsynth_reset_gen.sv", 34, 60, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "ctr_hi_r[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../provided_modules/nonsynth_reset_gen.sv", 34, 60, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "ctr_hi_r[0][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../provided_modules/nonsynth_reset_gen.sv", 34, 60, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "ctr_hi_r[0][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../provided_modules/nonsynth_reset_gen.sv", 34, 60, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "ctr_hi_r[0][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../provided_modules/nonsynth_reset_gen.sv", 36, 33, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "phase_lo_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../provided_modules/nonsynth_reset_gen.sv", 37, 33, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "phase_hi_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../provided_modules/nonsynth_reset_gen.sv", 39, 18, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "in_phase_1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../provided_modules/nonsynth_reset_gen.sv", 40, 18, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "in_phase_2", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../provided_modules/nonsynth_reset_gen.sv", 50, 16, ".testbench.rg", "v_branch/nonsynth_reset_gen__R1", "if", "42,50,52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../provided_modules/nonsynth_reset_gen.sv", 50, 17, ".testbench.rg", "v_branch/nonsynth_reset_gen__R1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../provided_modules/nonsynth_reset_gen.sv", 48, 11, ".testbench.rg", "v_line/nonsynth_reset_gen__R1", "elsif", "42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../provided_modules/nonsynth_reset_gen.sv", 47, 9, ".testbench.rg", "v_line/nonsynth_reset_gen__R1", "block", "42,47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../provided_modules/nonsynth_reset_gen.sv", 58, 4, ".testbench.rg", "v_line/nonsynth_reset_gen__R1", "block", "58-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../provided_modules/nonsynth_reset_gen.sv", 68, 4, ".testbench.rg", "v_line/nonsynth_reset_gen__R1", "block", "68-75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "counter_up.sv", 6, 23, ".testbench.dut", "v_toggle/counter_up", "clk_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "counter_up.sv", 7, 23, ".testbench.dut", "v_toggle/counter_up", "reset_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "counter_up.sv", 8, 23, ".testbench.dut", "v_toggle/counter_up", "up_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "counter_up.sv", 9, 30, ".testbench.dut", "v_toggle/counter_up", "count_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "counter_up.sv", 9, 30, ".testbench.dut", "v_toggle/counter_up", "count_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "counter_up.sv", 9, 30, ".testbench.dut", "v_toggle/counter_up", "count_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "counter_up.sv", 9, 30, ".testbench.dut", "v_toggle/counter_up", "count_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "counter_up.sv", 12, 25, ".testbench.dut", "v_toggle/counter_up", "count_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "counter_up.sv", 12, 25, ".testbench.dut", "v_toggle/counter_up", "count_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "counter_up.sv", 12, 25, ".testbench.dut", "v_toggle/counter_up", "count_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "counter_up.sv", 12, 25, ".testbench.dut", "v_toggle/counter_up", "count_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "counter_up.sv", 12, 35, ".testbench.dut", "v_line/counter_up", "block", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "counter_up.sv", 13, 25, ".testbench.dut", "v_toggle/counter_up", "count_n[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "counter_up.sv", 13, 25, ".testbench.dut", "v_toggle/counter_up", "count_n[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "counter_up.sv", 13, 25, ".testbench.dut", "v_toggle/counter_up", "count_n[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "counter_up.sv", 13, 25, ".testbench.dut", "v_toggle/counter_up", "count_n[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "counter_up.sv", 13, 35, ".testbench.dut", "v_line/counter_up", "block", "13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "counter_up.sv", 15, 9, ".testbench.dut", "v_branch/counter_up", "if", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "counter_up.sv", 15, 10, ".testbench.dut", "v_branch/counter_up", "else", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "counter_up.sv", 14, 5, ".testbench.dut", "v_line/counter_up", "block", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "counter_up.sv", 24, 18, ".testbench.dut", "v_line/counter_up", "case", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "counter_up.sv", 25, 13, ".testbench.dut", "v_line/counter_up", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "counter_up.sv", 22, 5, ".testbench.dut", "v_line/counter_up", "block", "22-23");
}
