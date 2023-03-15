// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtestbench__Syms.h"


void Vtestbench___024root__trace_chg_sub_0(Vtestbench___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtestbench___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_top_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtestbench___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtestbench___024root__trace_chg_sub_0(Vtestbench___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l[0]),8);
        bufp->chgCData(oldp+1,(vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l[1]),8);
        bufp->chgCData(oldp+2,(vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l[2]),8);
        bufp->chgCData(oldp+3,(vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l[3]),8);
        bufp->chgCData(oldp+4,(vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l[4]),8);
        bufp->chgCData(oldp+5,(vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l[5]),8);
        bufp->chgCData(oldp+6,(vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l[6]),8);
        bufp->chgCData(oldp+7,(vlSelf->testbench__DOT__dut__DOT__rom_inst__DOT__mem_l[7]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+8,(vlSelf->testbench__DOT__up_i));
        bufp->chgBit(oldp+9,(vlSelf->testbench__DOT__reset_i));
        bufp->chgBit(oldp+10,(vlSelf->testbench__DOT__error_counter_o));
        bufp->chgBit(oldp+11,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
        bufp->chgCData(oldp+12,(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r),4);
        bufp->chgBit(oldp+13,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
        bufp->chgBit(oldp+14,((0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+15,(vlSelf->testbench__DOT__count_o),8);
        bufp->chgCData(oldp+16,((0xfU & ((IData)(vlSelf->testbench__DOT__count_o) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+17,((0xfU & (IData)(vlSelf->testbench__DOT__count_o))),4);
        bufp->chgCData(oldp+18,(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r),7);
        bufp->chgCData(oldp+19,((7U & (IData)(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_r))),3);
    }
    bufp->chgBit(oldp+20,(vlSelf->testbench__DOT__reset_done));
    bufp->chgBit(oldp+21,(vlSelf->testbench__DOT__clk_i));
    bufp->chgCData(oldp+22,(vlSelf->testbench__DOT__correct_count_o),8);
    bufp->chgIData(oldp+23,(vlSelf->testbench__DOT__itervar),32);
    bufp->chgCData(oldp+24,(vlSelf->testbench__DOT__dut__DOT__counter_up_chart__DOT__count_n),7);
}

void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_cleanup\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
