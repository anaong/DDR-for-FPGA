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
    tracep->declBus(c+21,"width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+21,"iterations_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+15,"reset_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+22,"up_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+16,"clk_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+9,"reset_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+17,"rd_data_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+18,"rd_addr_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+19,"correct_count_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,"error_counter_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+23,"error",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+20,"itervar",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->pushNamePrefix("cg ");
    tracep->declBus(c+24,"cycle_time_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+16,"clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+25,"width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+25,"depth_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+26,"filename_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 71,0);
    tracep->declBus(c+18,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+17,"rd_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"mem_l",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rg ");
    tracep->declBus(c+29,"num_clocks_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+29,"reset_cycles_lo_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+24,"reset_cycles_hi_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+16,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBit(c+9,"async_reset_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+11,"ctr_lo_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 0,0);
    tracep->declBus(c+12,"ctr_hi_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 3,0);
    tracep->declBus(c+13,"phase_lo_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 0,0);
    tracep->declBus(c+14,"phase_hi_r",-1, FST_VD_IMPLICIT,FST_VT_SV_BIT, false,-1, 0,0);
    tracep->declBit(c+13,"in_phase_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"in_phase_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp_hfbddf086__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->testbench__DOT__dut__DOT__mem_l[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->testbench__DOT__dut__DOT__mem_l[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->testbench__DOT__dut__DOT__mem_l[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->testbench__DOT__dut__DOT__mem_l[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->testbench__DOT__dut__DOT__mem_l[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->testbench__DOT__dut__DOT__mem_l[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->testbench__DOT__dut__DOT__mem_l[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->testbench__DOT__dut__DOT__mem_l[7]),8);
    bufp->fullBit(oldp+9,(vlSelf->testbench__DOT__reset_i));
    bufp->fullBit(oldp+10,(vlSelf->testbench__DOT__error_counter_o));
    bufp->fullBit(oldp+11,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
    bufp->fullCData(oldp+12,(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r),4);
    bufp->fullBit(oldp+13,(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r));
    bufp->fullBit(oldp+14,((0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r))));
    bufp->fullBit(oldp+15,(vlSelf->testbench__DOT__reset_done));
    bufp->fullBit(oldp+16,(vlSelf->testbench__DOT__clk_i));
    bufp->fullCData(oldp+17,(vlSelf->testbench__DOT__rd_data_o),8);
    bufp->fullCData(oldp+18,(vlSelf->testbench__DOT__rd_addr_i),3);
    bufp->fullCData(oldp+19,(vlSelf->testbench__DOT__correct_count_o),8);
    bufp->fullIData(oldp+20,(vlSelf->testbench__DOT__itervar),32);
    bufp->fullIData(oldp+21,(8U),32);
    bufp->fullBit(oldp+22,(vlSelf->testbench__DOT__up_i));
    bufp->fullBit(oldp+23,(vlSelf->testbench__DOT__error));
    bufp->fullIData(oldp+24,(0xaU),32);
    bufp->fullIData(oldp+25,(8U),32);
    __Vtemp_hfbddf086__0[0U] = 0x2e686578U;
    __Vtemp_hfbddf086__0[1U] = 0x68617274U;
    __Vtemp_hfbddf086__0[2U] = 0x63U;
    bufp->fullWData(oldp+26,(__Vtemp_hfbddf086__0),72);
    bufp->fullIData(oldp+29,(1U),32);
}
