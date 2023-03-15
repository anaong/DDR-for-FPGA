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
        bufp->chgBit(oldp+0,(vlSelf->testbench__DOT__up_i));
        bufp->chgBit(oldp+1,(vlSelf->testbench__DOT__reset_i));
        bufp->chgBit(oldp+2,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
        bufp->chgCData(oldp+3,(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r),4);
        bufp->chgBit(oldp+4,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
        bufp->chgBit(oldp+5,((0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r))));
    }
    bufp->chgBit(oldp+6,(vlSelf->testbench__DOT__reset_done));
    bufp->chgBit(oldp+7,(vlSelf->testbench__DOT__clk_i));
    bufp->chgCData(oldp+8,(vlSelf->testbench__DOT__dut__DOT__count_r),4);
    bufp->chgCData(oldp+9,(vlSelf->testbench__DOT__correct_count_o),4);
    bufp->chgBit(oldp+10,(((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
                           != (IData)(vlSelf->testbench__DOT__correct_count_o))));
    bufp->chgIData(oldp+11,(vlSelf->testbench__DOT__itervar),32);
    bufp->chgCData(oldp+12,(vlSelf->testbench__DOT__dut__DOT__count_n),4);
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
}
