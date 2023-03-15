// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtestbench__Syms.h"


VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("testbench ");
    tracep->declBus(c+14,"width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+15,"iterations_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+7,"reset_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+1,"up_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+8,"clk_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+2,"reset_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+9,"count_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+10,"correct_count_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,"error_counter_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+16,"error",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+12,"itervar",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->pushNamePrefix("cg ");
    tracep->declBus(c+17,"cycle_time_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+8,"clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+14,"WIDTH_P",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+18,"RESET_VAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+8,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+2,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+1,"up_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+9,"count_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+9,"count_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,"count_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rg ");
    tracep->declBus(c+19,"num_clocks_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+19,"reset_cycles_lo_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+17,"reset_cycles_hi_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+8,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBit(c+2,"async_reset_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"ctr_lo_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 0,0);
    tracep->declBus(c+4,"ctr_hi_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 3,0);
    tracep->declBus(c+5,"phase_lo_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 0,0);
    tracep->declBus(c+6,"phase_hi_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 0,0);
    tracep->declBit(c+5,"in_phase_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"in_phase_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_top(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_top\n"); );
    // Body
    Vtestbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtestbench___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtestbench___024root__trace_register(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtestbench___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtestbench___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtestbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_sub_0(Vtestbench___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtestbench___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_top_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtestbench___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_sub_0(Vtestbench___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->testbench__DOT__up_i));
    bufp->fullBit(oldp+2,(vlSelf->testbench__DOT__reset_i));
    bufp->fullBit(oldp+3,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
    bufp->fullCData(oldp+4,(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r),4);
    bufp->fullBit(oldp+5,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
    bufp->fullBit(oldp+6,((0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r))));
    bufp->fullBit(oldp+7,(vlSelf->testbench__DOT__reset_done));
    bufp->fullBit(oldp+8,(vlSelf->testbench__DOT__clk_i));
    bufp->fullCData(oldp+9,(vlSelf->testbench__DOT__dut__DOT__count_r),4);
    bufp->fullCData(oldp+10,(vlSelf->testbench__DOT__correct_count_o),4);
    bufp->fullBit(oldp+11,(((IData)(vlSelf->testbench__DOT__dut__DOT__count_r) 
                            != (IData)(vlSelf->testbench__DOT__correct_count_o))));
    bufp->fullIData(oldp+12,(vlSelf->testbench__DOT__itervar),32);
    bufp->fullCData(oldp+13,(vlSelf->testbench__DOT__dut__DOT__count_n),4);
    bufp->fullIData(oldp+14,(4U),32);
    bufp->fullIData(oldp+15,(0x10U),32);
    bufp->fullBit(oldp+16,(vlSelf->testbench__DOT__error));
    bufp->fullIData(oldp+17,(0xaU),32);
    bufp->fullIData(oldp+18,(0U),32);
    bufp->fullIData(oldp+19,(1U),32);
}
