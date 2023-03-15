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
    vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r = 0U;
    vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
    vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_n = 0U;
    vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hfbddf086__0;
    // Body
    VL_WRITEF("%Ntestbench.cg with cycle_time_p          10\n",
              vlSymsp->name());
    __Vtemp_hfbddf086__0[0U] = 0x2e686578U;
    __Vtemp_hfbddf086__0[1U] = 0x68617274U;
    __Vtemp_hfbddf086__0[2U] = 0x63U;
    VL_READMEM_N(true, 8, 8, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_hfbddf086__0)
                 ,  &(vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l)
                 , 0, ~0ULL);
    vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__reset_i) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__reset_i = 0U;
    }
}

VL_ATTR_COLD void Vtestbench___024root___eval_final__TOP(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_final__TOP\n"); );
    // Body
    VL_WRITEF("Simulation time is %t\n",64,VL_TIME_UNITED_Q(1000),
              -9);
    if (vlSelf->testbench__DOT__error_counter_o) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        VL_WRITEF("\033[0;31m    ______                    \033[0m\n\033[0;31m   / ____/_____________  _____\033[0m\n\033[0;31m  / __/ / ___/ ___/ __ \\/ ___/\033[0m\n\033[0;31m / /___/ /  / /  / /_/ / /    \033[0m\n\033[0;31m/_____/_/  /_/   \\____/_/     \033[0m\n\nSimulation Failed\n");
    } else {
        VL_WRITEF("\033[0;32m    ____  ___   __________\033[0m\n\033[0;32m   / __ \\/   | / ___/ ___/\033[0m\n\033[0;32m  / /_/ / /| | \\__ \\__  \033[0m\n\033[0;32m / ____/ ___ |___/ /__/ / \033[0m\n\033[0;32m/_/   /_/  |_/____/____/  \033[0m\n\nSimulation Succeeded!\n");
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->testbench__DOT__up_i) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_n 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r)));
    } else {
        vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_n 
            = (0x7fU & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r));
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
    if (((IData)(vlSelf->testbench__DOT__error_counter_o) 
         ^ (IData)(vlSelf->testbench__DOT____Vtogcov__error_counter_o))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__error_counter_o 
            = vlSelf->testbench__DOT__error_counter_o;
    }
    if (((IData)(vlSelf->testbench__DOT__error) ^ (IData)(vlSelf->testbench__DOT____Vtogcov__error))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__error = vlSelf->testbench__DOT__error;
    }
    if (((IData)(vlSelf->testbench__DOT__clk_i) ^ (IData)(vlSelf->testbench__DOT__cg__DOT____Vtogcov__clk_o))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__cg__DOT____Vtogcov__clk_o 
            = vlSelf->testbench__DOT__clk_i;
    }
    if (((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r) 
         ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_lo_r))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_lo_r 
            = vlSelf->testbench__DOT__rg__DOT__ctr_lo_r;
    }
    if (((0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)) 
         ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__phase_hi_r))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__phase_hi_r 
            = (0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r));
    }
    if (((IData)(vlSelf->testbench__DOT__up_i) ^ (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__next_i))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__next_i 
            = vlSelf->testbench__DOT__up_i;
    }
    vlSelf->testbench__DOT__rg__DOT__phase_lo_r = vlSelf->testbench__DOT__rg__DOT__ctr_lo_r;
    vlSelf->testbench__DOT__rg__DOT__phase_hi_r = (0xaU 
                                                   == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r));
    if ((1U & ((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r) 
               ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r 
            = ((0xeU & (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)) 
               | (1U & (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)));
    }
    if ((2U & ((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r) 
               ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r 
            = ((0xdU & (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)) 
               | (2U & (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)));
    }
    if ((4U & ((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r) 
               ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r 
            = ((0xbU & (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)) 
               | (4U & (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)));
    }
    if ((8U & ((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r) 
               ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r 
            = ((7U & (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)) 
               | (8U & (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)));
    }
    if ((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r) 
               ^ (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w)))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w 
            = ((0x7eU & (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w)) 
               | (1U & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r)));
    }
    if ((2U & ((IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r) 
               ^ (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w)))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w 
            = ((0x7dU & (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w)) 
               | (2U & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r)));
    }
    if ((4U & ((IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r) 
               ^ (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w)))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w 
            = ((0x7bU & (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w)) 
               | (4U & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r)));
    }
    if ((8U & ((IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r) 
               ^ (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w)))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w 
            = ((0x77U & (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w)) 
               | (8U & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r)));
    }
    if ((0x10U & ((IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r) 
                  ^ (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w)))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w 
            = ((0x6fU & (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w)) 
               | (0x10U & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r)));
    }
    if ((0x20U & ((IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r) 
                  ^ (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w)))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w 
            = ((0x5fU & (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w)) 
               | (0x20U & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r)));
    }
    if ((0x40U & ((IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r) 
                  ^ (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w)))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w 
            = ((0x3fU & (IData)(vlSelf->testbench__DOT__dut__DOT____Vtogcov__rd_addr_w)) 
               | (0x40U & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r)));
    }
    if ((1U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xfeU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (1U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((2U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xfdU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (2U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((4U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xfbU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (4U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((8U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xf7U & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (8U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((0x10U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
                  ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xefU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (0x10U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((0x20U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
                  ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xdfU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (0x20U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((0x40U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
                  ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xbfU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (0x40U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((0x80U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
                  ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0x7fU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (0x80U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    vlSelf->testbench__DOT__reset_i = ((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r) 
                                       ^ (0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)));
    if ((1U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [0U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [0U]))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[0U] 
            = ((0xfeU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [0U]) | (1U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [0U]));
    }
    if ((2U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [0U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [0U]))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[0U] 
            = ((0xfdU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [0U]) | (2U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [0U]));
    }
    if ((4U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [0U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [0U]))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[0U] 
            = ((0xfbU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [0U]) | (4U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [0U]));
    }
    if ((8U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [0U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [0U]))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[0U] 
            = ((0xf7U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [0U]) | (8U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [0U]));
    }
    if ((0x10U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [0U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [0U]))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[0U] 
            = ((0xefU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [0U]) | (0x10U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [0U]));
    }
    if ((0x20U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [0U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [0U]))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[0U] 
            = ((0xdfU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [0U]) | (0x20U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [0U]));
    }
    if ((0x40U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [0U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [0U]))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[0U] 
            = ((0xbfU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [0U]) | (0x40U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [0U]));
    }
    if ((0x80U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [0U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [0U]))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[0U] 
            = ((0x7fU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [0U]) | (0x80U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [0U]));
    }
    if ((1U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [1U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [1U]))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[1U] 
            = ((0xfeU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [1U]) | (1U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [1U]));
    }
    if ((2U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [1U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [1U]))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[1U] 
            = ((0xfdU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [1U]) | (2U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [1U]));
    }
    if ((4U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [1U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [1U]))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[1U] 
            = ((0xfbU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [1U]) | (4U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [1U]));
    }
    if ((8U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [1U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [1U]))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[1U] 
            = ((0xf7U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [1U]) | (8U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [1U]));
    }
    if ((0x10U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [1U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [1U]))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[1U] 
            = ((0xefU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [1U]) | (0x10U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [1U]));
    }
    if ((0x20U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [1U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [1U]))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[1U] 
            = ((0xdfU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [1U]) | (0x20U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [1U]));
    }
    if ((0x40U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [1U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [1U]))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[1U] 
            = ((0xbfU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [1U]) | (0x40U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [1U]));
    }
    if ((0x80U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [1U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [1U]))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[1U] 
            = ((0x7fU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [1U]) | (0x80U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [1U]));
    }
    if ((1U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [2U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [2U]))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[2U] 
            = ((0xfeU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [2U]) | (1U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [2U]));
    }
    if ((2U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [2U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [2U]))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[2U] 
            = ((0xfdU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [2U]) | (2U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [2U]));
    }
    if ((4U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [2U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [2U]))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[2U] 
            = ((0xfbU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [2U]) | (4U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [2U]));
    }
    if ((8U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [2U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [2U]))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[2U] 
            = ((0xf7U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [2U]) | (8U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [2U]));
    }
    if ((0x10U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [2U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [2U]))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[2U] 
            = ((0xefU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [2U]) | (0x10U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [2U]));
    }
    if ((0x20U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [2U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [2U]))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[2U] 
            = ((0xdfU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [2U]) | (0x20U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [2U]));
    }
    if ((0x40U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [2U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [2U]))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[2U] 
            = ((0xbfU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [2U]) | (0x40U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [2U]));
    }
    if ((0x80U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [2U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [2U]))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[2U] 
            = ((0x7fU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [2U]) | (0x80U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [2U]));
    }
    if ((1U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [3U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [3U]))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[3U] 
            = ((0xfeU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [3U]) | (1U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [3U]));
    }
    if ((2U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [3U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [3U]))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[3U] 
            = ((0xfdU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [3U]) | (2U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [3U]));
    }
    if ((4U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [3U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [3U]))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[3U] 
            = ((0xfbU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [3U]) | (4U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [3U]));
    }
    if ((8U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [3U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [3U]))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[3U] 
            = ((0xf7U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [3U]) | (8U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [3U]));
    }
    if ((0x10U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [3U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [3U]))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[3U] 
            = ((0xefU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [3U]) | (0x10U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [3U]));
    }
    if ((0x20U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [3U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [3U]))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[3U] 
            = ((0xdfU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [3U]) | (0x20U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [3U]));
    }
    if ((0x40U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [3U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [3U]))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[3U] 
            = ((0xbfU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [3U]) | (0x40U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [3U]));
    }
    if ((0x80U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [3U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [3U]))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[3U] 
            = ((0x7fU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [3U]) | (0x80U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [3U]));
    }
    if ((1U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [4U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [4U]))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[4U] 
            = ((0xfeU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [4U]) | (1U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [4U]));
    }
    if ((2U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [4U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [4U]))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[4U] 
            = ((0xfdU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [4U]) | (2U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [4U]));
    }
    if ((4U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [4U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [4U]))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[4U] 
            = ((0xfbU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [4U]) | (4U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [4U]));
    }
    if ((8U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [4U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [4U]))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[4U] 
            = ((0xf7U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [4U]) | (8U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [4U]));
    }
    if ((0x10U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [4U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [4U]))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[4U] 
            = ((0xefU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [4U]) | (0x10U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [4U]));
    }
    if ((0x20U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [4U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [4U]))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[4U] 
            = ((0xdfU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [4U]) | (0x20U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [4U]));
    }
    if ((0x40U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [4U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [4U]))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[4U] 
            = ((0xbfU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [4U]) | (0x40U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [4U]));
    }
    if ((0x80U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [4U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [4U]))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[4U] 
            = ((0x7fU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [4U]) | (0x80U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [4U]));
    }
    if ((1U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [5U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [5U]))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[5U] 
            = ((0xfeU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [5U]) | (1U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [5U]));
    }
    if ((2U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [5U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [5U]))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[5U] 
            = ((0xfdU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [5U]) | (2U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [5U]));
    }
    if ((4U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [5U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [5U]))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[5U] 
            = ((0xfbU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [5U]) | (4U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [5U]));
    }
    if ((8U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [5U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [5U]))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[5U] 
            = ((0xf7U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [5U]) | (8U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [5U]));
    }
    if ((0x10U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [5U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [5U]))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[5U] 
            = ((0xefU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [5U]) | (0x10U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [5U]));
    }
    if ((0x20U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [5U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [5U]))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[5U] 
            = ((0xdfU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [5U]) | (0x20U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [5U]));
    }
    if ((0x40U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [5U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [5U]))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[5U] 
            = ((0xbfU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [5U]) | (0x40U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [5U]));
    }
    if ((0x80U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [5U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [5U]))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[5U] 
            = ((0x7fU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [5U]) | (0x80U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [5U]));
    }
    if ((1U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [6U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [6U]))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[6U] 
            = ((0xfeU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [6U]) | (1U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [6U]));
    }
    if ((2U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [6U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [6U]))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[6U] 
            = ((0xfdU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [6U]) | (2U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [6U]));
    }
    if ((4U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [6U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [6U]))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[6U] 
            = ((0xfbU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [6U]) | (4U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [6U]));
    }
    if ((8U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [6U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [6U]))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[6U] 
            = ((0xf7U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [6U]) | (8U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [6U]));
    }
    if ((0x10U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [6U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [6U]))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[6U] 
            = ((0xefU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [6U]) | (0x10U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [6U]));
    }
    if ((0x20U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [6U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [6U]))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[6U] 
            = ((0xdfU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [6U]) | (0x20U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [6U]));
    }
    if ((0x40U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [6U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [6U]))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[6U] 
            = ((0xbfU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [6U]) | (0x40U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [6U]));
    }
    if ((0x80U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [6U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [6U]))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[6U] 
            = ((0x7fU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [6U]) | (0x80U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [6U]));
    }
    if ((1U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [7U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [7U]))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[7U] 
            = ((0xfeU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [7U]) | (1U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [7U]));
    }
    if ((2U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [7U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [7U]))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[7U] 
            = ((0xfdU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [7U]) | (2U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [7U]));
    }
    if ((4U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [7U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [7U]))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[7U] 
            = ((0xfbU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [7U]) | (4U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [7U]));
    }
    if ((8U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
               [7U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
               [7U]))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[7U] 
            = ((0xf7U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [7U]) | (8U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [7U]));
    }
    if ((0x10U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [7U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [7U]))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[7U] 
            = ((0xefU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [7U]) | (0x10U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [7U]));
    }
    if ((0x20U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [7U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [7U]))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[7U] 
            = ((0xdfU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [7U]) | (0x20U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [7U]));
    }
    if ((0x40U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [7U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [7U]))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[7U] 
            = ((0xbfU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [7U]) | (0x40U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [7U]));
    }
    if ((0x80U & (vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                  [7U] ^ vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                  [7U]))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l[7U] 
            = ((0x7fU & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT____Vtogcov__mem_l
                [7U]) | (0x80U & vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
                         [7U]));
    }
    vlSelf->testbench__DOT__count_o = vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l
        [(7U & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r))];
    if (((IData)(vlSelf->testbench__DOT__reset_i) ^ (IData)(vlSelf->testbench__DOT____Vtogcov__reset_i))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__reset_i 
            = vlSelf->testbench__DOT__reset_i;
    }
    if (((IData)(vlSelf->testbench__DOT__reset_i) ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__async_reset_o))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__async_reset_o 
            = vlSelf->testbench__DOT__reset_i;
    }
    if ((1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_n) 
               ^ (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n)))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n 
            = ((0x7eU & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n)) 
               | (1U & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_n)));
    }
    if ((2U & ((IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_n) 
               ^ (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n)))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n 
            = ((0x7dU & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n)) 
               | (2U & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_n)));
    }
    if ((4U & ((IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_n) 
               ^ (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n)))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n 
            = ((0x7bU & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n)) 
               | (4U & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_n)));
    }
    if ((8U & ((IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_n) 
               ^ (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n)))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n 
            = ((0x77U & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n)) 
               | (8U & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_n)));
    }
    if ((0x10U & ((IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_n) 
                  ^ (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n)))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n 
            = ((0x6fU & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n)) 
               | (0x10U & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_n)));
    }
    if ((0x20U & ((IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_n) 
                  ^ (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n)))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n 
            = ((0x5fU & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n)) 
               | (0x20U & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_n)));
    }
    if ((0x40U & ((IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_n) 
                  ^ (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n)))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n 
            = ((0x3fU & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT____Vtogcov__count_n)) 
               | (0x40U & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_n)));
    }
    if ((1U & ((IData)(vlSelf->testbench__DOT__count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__count_o 
            = ((0xfeU & (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)) 
               | (1U & (IData)(vlSelf->testbench__DOT__count_o)));
    }
    if ((2U & ((IData)(vlSelf->testbench__DOT__count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__count_o 
            = ((0xfdU & (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)) 
               | (2U & (IData)(vlSelf->testbench__DOT__count_o)));
    }
    if ((4U & ((IData)(vlSelf->testbench__DOT__count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__count_o 
            = ((0xfbU & (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)) 
               | (4U & (IData)(vlSelf->testbench__DOT__count_o)));
    }
    if ((8U & ((IData)(vlSelf->testbench__DOT__count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__count_o 
            = ((0xf7U & (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)) 
               | (8U & (IData)(vlSelf->testbench__DOT__count_o)));
    }
    if ((0x10U & ((IData)(vlSelf->testbench__DOT__count_o) 
                  ^ (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__count_o 
            = ((0xefU & (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)) 
               | (0x10U & (IData)(vlSelf->testbench__DOT__count_o)));
    }
    if ((0x20U & ((IData)(vlSelf->testbench__DOT__count_o) 
                  ^ (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__count_o 
            = ((0xdfU & (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)) 
               | (0x20U & (IData)(vlSelf->testbench__DOT__count_o)));
    }
    if ((0x40U & ((IData)(vlSelf->testbench__DOT__count_o) 
                  ^ (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__count_o 
            = ((0xbfU & (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)) 
               | (0x40U & (IData)(vlSelf->testbench__DOT__count_o)));
    }
    if ((0x80U & ((IData)(vlSelf->testbench__DOT__count_o) 
                  ^ (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__count_o 
            = ((0x7fU & (IData)(vlSelf->testbench__DOT____Vtogcov__count_o)) 
               | (0x80U & (IData)(vlSelf->testbench__DOT__count_o)));
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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "testbench.sv", 15, 25, ".testbench", "v_toggle/testbench", "count_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "testbench.sv", 15, 25, ".testbench", "v_toggle/testbench", "count_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "testbench.sv", 15, 25, ".testbench", "v_toggle/testbench", "count_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "testbench.sv", 15, 25, ".testbench", "v_toggle/testbench", "count_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "testbench.sv", 15, 25, ".testbench", "v_toggle/testbench", "count_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "testbench.sv", 15, 25, ".testbench", "v_toggle/testbench", "count_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "testbench.sv", 15, 25, ".testbench", "v_toggle/testbench", "count_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "testbench.sv", 15, 25, ".testbench", "v_toggle/testbench", "count_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "testbench.sv", 16, 25, ".testbench", "v_toggle/testbench", "correct_count_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "testbench.sv", 16, 25, ".testbench", "v_toggle/testbench", "correct_count_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "testbench.sv", 16, 25, ".testbench", "v_toggle/testbench", "correct_count_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "testbench.sv", 16, 25, ".testbench", "v_toggle/testbench", "correct_count_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "testbench.sv", 16, 25, ".testbench", "v_toggle/testbench", "correct_count_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "testbench.sv", 16, 25, ".testbench", "v_toggle/testbench", "correct_count_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "testbench.sv", 16, 25, ".testbench", "v_toggle/testbench", "correct_count_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "testbench.sv", 16, 25, ".testbench", "v_toggle/testbench", "correct_count_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "testbench.sv", 17, 17, ".testbench", "v_toggle/testbench", "error_counter_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "testbench.sv", 19, 16, ".testbench", "v_toggle/testbench", "error[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "testbench.sv", 72, 8, ".testbench", "v_branch/testbench", "if", "72-74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "testbench.sv", 72, 9, ".testbench", "v_branch/testbench", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "testbench.sv", 70, 4, ".testbench", "v_line/testbench", "block", "70-71,76-77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "testbench.sv", 46, 4, ".testbench", "v_line/testbench", "block", "46,48,52,54-61,63-64,66,68,70,79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "testbench.sv", 88, 16, ".testbench", "v_branch/testbench", "if", "88-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "testbench.sv", 88, 17, ".testbench", "v_branch/testbench", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "testbench.sv", 85, 7, ".testbench", "v_line/testbench", "elsif", "85-87");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "testbench.sv", 83, 4, ".testbench", "v_line/testbench", "block", "83-84");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "testbench.sv", 96, 7, ".testbench", "v_branch/testbench", "if", "96-103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "testbench.sv", 96, 8, ".testbench", "v_branch/testbench", "else", "105-112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "testbench.sv", 94, 4, ".testbench", "v_line/testbench", "block", "94-95");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../provided_modules/nonsynth_clock_gen.sv", 3, 16, ".testbench.cg", "v_toggle/nonsynth_clock_gen", "clk_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../provided_modules/nonsynth_clock_gen.sv", 11, 4, ".testbench.cg", "v_line/nonsynth_clock_gen", "block", "11,13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../provided_modules/nonsynth_reset_gen.sv", 17, 34, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "clk_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../provided_modules/nonsynth_reset_gen.sv", 18, 34, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "async_reset_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../provided_modules/nonsynth_reset_gen.sv", 33, 60, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "ctr_lo_r[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../provided_modules/nonsynth_reset_gen.sv", 34, 60, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "ctr_hi_r[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../provided_modules/nonsynth_reset_gen.sv", 34, 60, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "ctr_hi_r[0][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../provided_modules/nonsynth_reset_gen.sv", 34, 60, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "ctr_hi_r[0][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../provided_modules/nonsynth_reset_gen.sv", 34, 60, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "ctr_hi_r[0][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../provided_modules/nonsynth_reset_gen.sv", 36, 33, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "phase_lo_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../provided_modules/nonsynth_reset_gen.sv", 37, 33, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "phase_hi_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../provided_modules/nonsynth_reset_gen.sv", 39, 18, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "in_phase_1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../provided_modules/nonsynth_reset_gen.sv", 40, 18, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "in_phase_2", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../provided_modules/nonsynth_reset_gen.sv", 50, 16, ".testbench.rg", "v_branch/nonsynth_reset_gen__R1", "if", "42,50,52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../provided_modules/nonsynth_reset_gen.sv", 50, 17, ".testbench.rg", "v_branch/nonsynth_reset_gen__R1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../provided_modules/nonsynth_reset_gen.sv", 48, 11, ".testbench.rg", "v_line/nonsynth_reset_gen__R1", "elsif", "42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../provided_modules/nonsynth_reset_gen.sv", 47, 9, ".testbench.rg", "v_line/nonsynth_reset_gen__R1", "block", "42,47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../provided_modules/nonsynth_reset_gen.sv", 58, 4, ".testbench.rg", "v_line/nonsynth_reset_gen__R1", "block", "58-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../provided_modules/nonsynth_reset_gen.sv", 68, 4, ".testbench.rg", "v_line/nonsynth_reset_gen__R1", "block", "68-75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "chart.sv", 5, 23, ".testbench.dut", "v_toggle/chart", "clk_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "chart.sv", 6, 23, ".testbench.dut", "v_toggle/chart", "next_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "chart.sv", 7, 23, ".testbench.dut", "v_toggle/chart", "arrows_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "chart.sv", 7, 23, ".testbench.dut", "v_toggle/chart", "arrows_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "chart.sv", 7, 23, ".testbench.dut", "v_toggle/chart", "arrows_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "chart.sv", 7, 23, ".testbench.dut", "v_toggle/chart", "arrows_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "chart.sv", 8, 23, ".testbench.dut", "v_toggle/chart", "timing_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "chart.sv", 8, 23, ".testbench.dut", "v_toggle/chart", "timing_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "chart.sv", 8, 23, ".testbench.dut", "v_toggle/chart", "timing_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "chart.sv", 8, 23, ".testbench.dut", "v_toggle/chart", "timing_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "chart.sv", 11, 16, ".testbench.dut", "v_toggle/chart", "rd_addr_w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "chart.sv", 11, 16, ".testbench.dut", "v_toggle/chart", "rd_addr_w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "chart.sv", 11, 16, ".testbench.dut", "v_toggle/chart", "rd_addr_w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "chart.sv", 11, 16, ".testbench.dut", "v_toggle/chart", "rd_addr_w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "chart.sv", 11, 16, ".testbench.dut", "v_toggle/chart", "rd_addr_w[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "chart.sv", 11, 16, ".testbench.dut", "v_toggle/chart", "rd_addr_w[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "chart.sv", 11, 16, ".testbench.dut", "v_toggle/chart", "rd_addr_w[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "counter_up.sv", 6, 23, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "clk_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "counter_up.sv", 7, 23, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "reset_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "counter_up.sv", 8, 23, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "up_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "counter_up.sv", 9, 30, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "counter_up.sv", 9, 30, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "counter_up.sv", 9, 30, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "counter_up.sv", 9, 30, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "counter_up.sv", 9, 30, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "counter_up.sv", 9, 30, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "counter_up.sv", 9, 30, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "counter_up.sv", 12, 25, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "counter_up.sv", 12, 25, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "counter_up.sv", 12, 25, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "counter_up.sv", 12, 25, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "counter_up.sv", 12, 25, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "counter_up.sv", 12, 25, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_r[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "counter_up.sv", 12, 25, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_r[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "counter_up.sv", 12, 35, ".testbench.dut.counter_up_chart", "v_line/counter_up__W7", "block", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "counter_up.sv", 13, 25, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_n[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "counter_up.sv", 13, 25, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_n[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "counter_up.sv", 13, 25, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_n[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "counter_up.sv", 13, 25, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_n[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "counter_up.sv", 13, 25, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_n[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "counter_up.sv", 13, 25, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_n[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "counter_up.sv", 13, 25, ".testbench.dut.counter_up_chart", "v_toggle/counter_up__W7", "count_n[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "counter_up.sv", 13, 35, ".testbench.dut.counter_up_chart", "v_line/counter_up__W7", "block", "13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "counter_up.sv", 15, 9, ".testbench.dut.counter_up_chart", "v_branch/counter_up__W7", "if", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "counter_up.sv", 15, 10, ".testbench.dut.counter_up_chart", "v_branch/counter_up__W7", "else", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "counter_up.sv", 14, 5, ".testbench.dut.counter_up_chart", "v_line/counter_up__W7", "block", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "counter_up.sv", 24, 18, ".testbench.dut.counter_up_chart", "v_line/counter_up__W7", "case", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "counter_up.sv", 25, 13, ".testbench.dut.counter_up_chart", "v_line/counter_up__W7", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "counter_up.sv", 22, 5, ".testbench.dut.counter_up_chart", "v_line/counter_up__W7", "block", "22-23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "rom.sv", 7, 37, ".testbench.dut.rom_inst", "v_toggle/rom", "rd_addr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "rom.sv", 7, 37, ".testbench.dut.rom_inst", "v_toggle/rom", "rd_addr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "rom.sv", 7, 37, ".testbench.dut.rom_inst", "v_toggle/rom", "rd_addr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "rom.sv", 8, 26, ".testbench.dut.rom_inst", "v_toggle/rom", "rd_data_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "rom.sv", 8, 26, ".testbench.dut.rom_inst", "v_toggle/rom", "rd_data_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "rom.sv", 8, 26, ".testbench.dut.rom_inst", "v_toggle/rom", "rd_data_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "rom.sv", 8, 26, ".testbench.dut.rom_inst", "v_toggle/rom", "rd_data_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "rom.sv", 8, 26, ".testbench.dut.rom_inst", "v_toggle/rom", "rd_data_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "rom.sv", 8, 26, ".testbench.dut.rom_inst", "v_toggle/rom", "rd_data_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "rom.sv", 8, 26, ".testbench.dut.rom_inst", "v_toggle/rom", "rd_data_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "rom.sv", 8, 26, ".testbench.dut.rom_inst", "v_toggle/rom", "rd_data_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[0][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[0][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[0][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[0][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[0][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[0][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[0][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[1][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[1][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[1][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[1][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[1][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[1][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[1][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[1][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[2][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[2][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[2][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[2][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[2][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[2][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[2][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[2][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[3][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[3][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[3][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[3][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[3][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[3][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[3][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[3][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[4][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[4][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[4][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[4][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[4][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[4][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[4][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[4][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[5][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[5][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[5][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[5][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[5][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[5][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[5][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[5][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[6][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[6][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[6][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[6][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[6][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[6][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[6][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[6][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[7][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[7][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[7][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[7][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[7][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[7][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[7][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "rom.sv", 11, 22, ".testbench.dut.rom_inst", "v_toggle/rom", "mem_l[7][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "rom.sv", 14, 3, ".testbench.dut.rom_inst", "v_line/rom", "block", "14-15");
}
