// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vprocessor_tb__Syms.h"


VL_ATTR_COLD void Vprocessor_tb___024root__trace_init_sub__TOP__0(Vprocessor_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_init_sub__TOP__0\n"); );
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("processor_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"top_pcF0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"top_PCPlus4F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+558,0,"top_InstrF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"top_pcF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"top_StallF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"top_InstrD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"top_pcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"top_ImmExtD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"top_PCPlus4D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"top_Read1D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+560,0,"top_Read2D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+561,0,"top_regfile_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+562,0,"top_regfile_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"top_LSTypeD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+42,0,"top_JumplrD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"top_RegWriteD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"top_MemWriteD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"top_JumpD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"top_BranchD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"top_ALUSrcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"top_ALUControlD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+49,0,"top_ResultSrcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"top_ImmSrcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+51,0,"top_opD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+52,0,"top_funct3D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+53,0,"top_funct7Db5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"top_funct12D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+36,0,"top_StallD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"top_FlushD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"top_Rs1D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"top_Rs2D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+58,0,"top_RdD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+59,0,"top_Read1E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"top_Read2E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"top_pcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"top_ImmExtE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"top_PCPlus4E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"top_PCTargetE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"top_SrcAE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"top_SrcBE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"top_ALUResultE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"top_WriteDataE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"top_RegWriteE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"top_MemWriteE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"top_ALUSrcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"top_ResultSrcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+73,0,"top_ALUControlE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+74,0,"top_ResultSrcEb0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"top_PCSrcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+76,0,"top_BranchE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"top_JumpE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"top_FlagE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+79,0,"top_FlushE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"top_ForwardAE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"top_ForwardBE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"top_Rs1E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+83,0,"top_Rs2E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+84,0,"top_RdE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+85,0,"top_PCPlus4M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"top_ResultSrcM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+555,0,"top_ReadDataM_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"top_ReadDataM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+556,0,"top_WriteDataM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"top_ALUResultM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"top_MemWriteM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"top_RegWriteM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"top_RdM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+91,0,"top_ResultSrcW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+92,0,"top_ALUResultW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"top_ReadDataW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"top_PCPlus4W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"top_ResultW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+96,0,"top_RegWriteW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"top_RdW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+564,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"Ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"Ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+566,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+567,0,"fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+568,0,"exp_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+569,0,"exp_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+570,0,"test_passed_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+564,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+556,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+561,0,"top_regfile_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+562,0,"top_regfile_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"top_pcF0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"top_PCPlus4F",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"top_InstrD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"top_pcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"top_ImmExtD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"top_PCPlus4D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"top_Read1D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+560,0,"top_Read2D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"top_RdD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+41,0,"top_LSTypeD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+42,0,"top_JumplrD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"top_Read1E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"top_Read2E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"top_pcE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"top_ImmExtE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"top_PCPlus4E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"top_PCTargetE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"top_SrcAE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"top_SrcBE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"top_ALUResultE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"top_WriteDataE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"top_RegWriteE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"top_MemWriteE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"top_ALUSrcE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"top_ResultSrcE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+73,0,"top_ALUControlE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+85,0,"top_PCPlus4M",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"top_ResultSrcM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+555,0,"top_ReadDataM_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"top_ResultSrcW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+92,0,"top_ALUResultW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"top_ReadDataW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"top_PCPlus4W",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"top_ResultW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"top_RegWriteD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"top_MemWriteD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"top_JumpD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"top_BranchD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"top_ALUSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"top_ALUControlD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+49,0,"top_ResultSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"top_ImmSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+51,0,"top_opD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+52,0,"top_funct3D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+53,0,"top_funct7Db5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"top_funct12D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+74,0,"top_ResultSrcEb0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"top_PCSrcE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+76,0,"top_BranchE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"top_JumpE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"top_FlagE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+36,0,"top_StallF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"top_StallD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"top_FlushD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"top_Rs1D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"top_Rs2D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+79,0,"top_FlushE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"top_ForwardAE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"top_ForwardBE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"top_Rs1E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+83,0,"top_Rs2E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+84,0,"top_RdE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+89,0,"top_RegWriteM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"top_RdM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+97,0,"top_RdW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+96,0,"top_RegWriteW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+564,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"Ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"Ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+558,0,"top_InstrF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"top_pcF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"top_ReadDataM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"top_MemWriteM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"top_ALUResultM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+556,0,"top_WriteDataM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"RegWriteD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"MemWriteD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"JumpD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"JumplrD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"BranchD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"ALUSrcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"ALUControlD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+49,0,"ResultSrcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"ImmSrcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,0,"LSTypeD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+51,0,"opD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+52,0,"funct3D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,12);
    tracep->declBit(c+53,0,"funct7Db5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"funct12D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+74,0,"ResultSrcEb0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"PCSrcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+77,0,"JumpE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"JumplrE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"BranchE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"FlagE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+101,0,"funct3E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+36,0,"StallF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"StallD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"FlushD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"Rs1D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"Rs2D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+79,0,"FlushE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"ForwardAE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"ForwardBE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"Rs1E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+83,0,"Rs2E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+84,0,"RdE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+89,0,"RegWriteM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"RdM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+96,0,"RegWriteW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"RdW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+558,0,"InstrF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"pcF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+557,0,"ReadDataM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"ALUResultM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+556,0,"WriteDataM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"MemWriteM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"opD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+52,0,"funct3D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+53,0,"funct7Db5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"funct12D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+76,0,"BranchE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"JumpE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"JumplrE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"funct3E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+78,0,"FlagE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+43,0,"RegWriteD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"MemWriteD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"JumpD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"JumplrD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"BranchD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"ALUSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"ALUControlD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+49,0,"ResultSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"ImmSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,0,"LSTypeD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+75,0,"PCSrcE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+98,0,"Ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"Ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("ad", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+103,0,"opDb5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"funct3D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+53,0,"funct7Db5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"ALUOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+48,0,"ALUControlD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+104,0,"RtypeSub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bru", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+101,0,"funct3E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+76,0,"BranchE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"JumpE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"JumplrE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"FlagE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+75,0,"PCSrcE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+105,0,"cond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"Ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"Carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"Neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"Zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("eu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"opD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+54,0,"funct12D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+98,0,"Ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"Ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("lsu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+52,0,"funct3D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,0,"LSTypeD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("md", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"opD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+43,0,"RegWriteD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"JumpD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"JumplrD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"BranchD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"MemWriteD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"ALUSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"ResultSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"ImmSrcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+102,0,"ALUOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+110,0,"controls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+561,0,"top_regfile_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+562,0,"top_regfile_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"top_pcF0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"top_PCPlus4F",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"top_InstrD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"top_pcD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"top_ImmExtD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"top_PCPlus4D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"top_Read1D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+560,0,"top_Read2D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"top_RdD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+59,0,"top_Read1E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"top_Read2E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"top_pcE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"top_ImmExtE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"top_PCPlus4E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"top_PCTargetE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"top_SrcAE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"top_SrcBE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"top_ALUResultE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"top_WriteDataE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"top_RegWriteE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"top_MemWriteE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"top_ALUSrcE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"top_ResultSrcE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+73,0,"top_ALUControlE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+85,0,"top_PCPlus4M",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"top_ResultSrcM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+555,0,"top_ReadDataM_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"top_ResultSrcW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+92,0,"top_ALUResultW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"top_ReadDataW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"top_PCPlus4W",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"top_ResultW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+564,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"RegWriteD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"MemWriteD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"JumpD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"JumplrD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"BranchD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"ALUSrcD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"ALUControlD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+49,0,"ResultSrcD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"ImmSrcD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,0,"LSTypeD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+51,0,"opD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+52,0,"funct3D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,12);
    tracep->declBit(c+53,0,"funct7Db5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"funct12D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+75,0,"PCSrcE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+77,0,"JumpE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"JumplrE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"BranchE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"funct3E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+78,0,"FlagE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+36,0,"StallF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"StallD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"FlushD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"Rs1D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"Rs2D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+79,0,"FlushE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"ForwardAE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"ForwardBE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"Rs1E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+83,0,"Rs2E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+84,0,"RdE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+74,0,"ResultSrcEb0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"RegWriteM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"RdM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+96,0,"RegWriteW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"RdW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+558,0,"InstrF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"pcF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+557,0,"ReadDataM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"ALUResultM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+556,0,"WriteDataM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"MemWriteM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"pcF0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"PCPlus4F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"InstrD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"pcD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"ImmExtD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"PCPlus4D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"Read1D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+560,0,"Read2D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"RdD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+59,0,"Read1E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"Read2E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"pcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"ImmExtE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"PCPlus4E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"PCTargetE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"SrcAE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"SrcBE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"ALUResultE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"WriteDataE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"RegWriteE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"MemWriteE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"ALUSrcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"ResultSrcE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+73,0,"ALUControlE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+111,0,"LSTypeE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+85,0,"PCPlus4M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"PCTargetM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"ResultSrcM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+113,0,"LSTypeM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+114,0,"tmp_WriteDataM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+555,0,"ReadDataM_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"ResultSrcW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+92,0,"ALUResultW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"ReadDataW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"PCPlus4W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"PCTargetW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"ResultW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,0,"PCplus4cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"PCplusbranchcout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+65,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"ALUControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+67,0,"rslt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+118,0,"isAddSub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"Ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"Carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"Neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"Zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"src_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("entry", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+122+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+138,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("a1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+140,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+153,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+157,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+161,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+165,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+169,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+173,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+177,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+181,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+185,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+189,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+193,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+197,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+201,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+205,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+209,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+213,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+217,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+221,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+225,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+229,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+233,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+237,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+241,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+244,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+248,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+252,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+256,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+260,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+264,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("and1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+138,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+270,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,0,"d4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"d5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+274,0,"d6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+275,0,"d7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+276,0,"d8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+277,0,"d9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+278,0,"d10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"d11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"d12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+281,0,"d13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+282,0,"d14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"d15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+67,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("or1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("sll1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+274,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"shift1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,0,"shift2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"shift3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"shift4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+274,0,"shift5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("sra1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+276,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,0,"shift1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"shift2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+291,0,"shift3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"shift4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+276,0,"shift5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("srl1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+275,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,0,"shift1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,0,"shift2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"shift3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"shift4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+275,0,"shift5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("xor1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Dreg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+575,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+564,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+571,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declArray(c+298,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->popPrefix();
    tracep->pushPrefix("Ereg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+576,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+564,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+548,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 194,0);
    tracep->declArray(c+301,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 194,0);
    tracep->popPrefix();
    tracep->pushPrefix("Freg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+564,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Mreg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+579,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+564,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+308,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 141,0);
    tracep->declArray(c+313,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 141,0);
    tracep->popPrefix();
    tracep->pushPrefix("PCmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+580,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+33,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("PCplus4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+581,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+578,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+318,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("a1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+319,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+320,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+324,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+327,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+330,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+333,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+336,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+339,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+342,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+345,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+348,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+351,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+352,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+355,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+358,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+364,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+367,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+370,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+373,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+376,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+379,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+382,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+384,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+387,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+390,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+392,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+395,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+396,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+398,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+401,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+404,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+407,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PCplusbranch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+578,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+117,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+409,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("a1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+410,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+414,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+419,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+423,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+427,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+431,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+435,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+439,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+443,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+447,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+451,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+452,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+455,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+459,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+463,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+465,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+467,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+468,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+471,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+475,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+476,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+478,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+479,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+478,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+483,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+487,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+491,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+495,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+499,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+503,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+507,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+511,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+514,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+522,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+526,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+530,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("a9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+534,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Wreg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+564,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+543,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 135,0);
    tracep->declArray(c+537,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 135,0);
    tracep->popPrefix();
    tracep->pushPrefix("ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+542,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,7);
    tracep->declBus(c+50,0,"immsrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,0,"immext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mrwu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+557,0,"ReadDataM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"tmp_WriteDataM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"LSTypeM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+555,0,"ReadDataM_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+556,0,"WriteDataM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+561,0,"top_regfile_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+562,0,"top_regfile_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+564,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"i_rd_addr_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"i_rd_addr_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+97,0,"i_wr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+96,0,"i_wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"i_wr_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"o_rd_dat_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+560,0,"o_rd_dat_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("REGFILE", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+96,0,"we3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"a1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"a2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+97,0,"a3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+95,0,"wd3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+560,0,"rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rsltmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+95,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("srcAmux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+580,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("srcBmux1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+580,0,"d3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+68,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("srcBmux2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("hu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+56,0,"Rs1D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"Rs2D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+82,0,"Rs1E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+83,0,"Rs2E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+84,0,"RdE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+90,0,"RdM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+97,0,"RdW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+74,0,"ResultSrcEb0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"RegWriteM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"RegWriteW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"PCSrcE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+36,0,"StallF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"StallD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"FlushD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"FlushE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"ForwardAE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"ForwardBE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+36,0,"lwStallD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("im", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+558,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vprocessor_tb___024root__trace_init_top(Vprocessor_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_init_top\n"); );
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vprocessor_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vprocessor_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vprocessor_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vprocessor_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vprocessor_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vprocessor_tb___024root__trace_register(Vprocessor_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_register\n"); );
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vprocessor_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vprocessor_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vprocessor_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vprocessor_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vprocessor_tb___024root__trace_const_0_sub_0(Vprocessor_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vprocessor_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_const_0\n"); );
    // Init
    Vprocessor_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprocessor_tb___024root*>(voidSelf);
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vprocessor_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vprocessor_tb___024root__trace_const_0_sub_0(Vprocessor_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_const_0_sub_0\n"); );
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+574,(0x20U),32);
    bufp->fullIData(oldp+575,(0x60U),32);
    bufp->fullIData(oldp+576,(0xc3U),32);
    bufp->fullBit(oldp+577,(1U));
    bufp->fullBit(oldp+578,(0U));
    bufp->fullIData(oldp+579,(0x8eU),32);
    bufp->fullIData(oldp+580,(0U),32);
    bufp->fullIData(oldp+581,(4U),32);
    bufp->fullIData(oldp+582,(0x88U),32);
}

VL_ATTR_COLD void Vprocessor_tb___024root__trace_full_0_sub_0(Vprocessor_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vprocessor_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_full_0\n"); );
    // Init
    Vprocessor_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprocessor_tb___024root*>(voidSelf);
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vprocessor_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vprocessor_tb___024root__trace_full_0_sub_0(Vprocessor_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_full_0_sub_0\n"); );
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<7>/*223:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__REGFILE[31]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__pcF0),32);
    bufp->fullIData(oldp+34,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCPlus4F),32);
    bufp->fullIData(oldp+35,(vlSelfRef.processor_tb__DOT__dut__DOT__pcF),32);
    bufp->fullBit(oldp+36,(vlSelfRef.processor_tb__DOT__dut__DOT__StallF));
    bufp->fullIData(oldp+37,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[1U]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ImmExtD),32);
    bufp->fullIData(oldp+40,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[0U]),32);
    bufp->fullCData(oldp+41,(vlSelfRef.processor_tb__DOT__dut__DOT__LSTypeD),5);
    bufp->fullBit(oldp+42,((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls))));
    bufp->fullBit(oldp+43,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 0xcU))));
    bufp->fullBit(oldp+44,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 7U))));
    bufp->fullBit(oldp+45,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 1U))));
    bufp->fullBit(oldp+46,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 4U))));
    bufp->fullBit(oldp+47,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                  >> 8U))));
    bufp->fullCData(oldp+48,(vlSelfRef.processor_tb__DOT__dut__DOT__ALUControlD),4);
    bufp->fullCData(oldp+49,((3U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                    >> 5U))),2);
    bufp->fullCData(oldp+50,((7U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                    >> 9U))),3);
    bufp->fullCData(oldp+51,((0x7fU & vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U])),7);
    bufp->fullCData(oldp+52,((7U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+53,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                  >> 0x1eU))));
    bufp->fullSData(oldp+54,((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                              >> 0x14U)),12);
    bufp->fullBit(oldp+55,((0U != (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__PCSrcE))));
    bufp->fullCData(oldp+56,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+57,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+58,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                       >> 7U))),5);
    bufp->fullIData(oldp+59,(((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                               << 0x11U) | (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
                                            >> 0xfU))),32);
    bufp->fullIData(oldp+60,(((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[4U] 
                               << 0x11U) | (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                            >> 0xfU))),32);
    bufp->fullIData(oldp+61,(((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                               << 0x11U) | (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                            >> 0xfU))),32);
    bufp->fullIData(oldp+62,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[0U]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCTargetE),32);
    bufp->fullIData(oldp+65,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE),32);
    bufp->fullIData(oldp+66,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcBE),32);
    bufp->fullIData(oldp+67,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALUResultE),32);
    bufp->fullIData(oldp+68,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__WriteDataE),32);
    bufp->fullBit(oldp+69,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[6U] 
                                  >> 2U))));
    bufp->fullBit(oldp+70,((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                            >> 0x1fU)));
    bufp->fullBit(oldp+71,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                  >> 0x17U))));
    bufp->fullCData(oldp+72,((3U & vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[6U])),2);
    bufp->fullCData(oldp+73,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                      >> 0x18U))),4);
    bufp->fullBit(oldp+74,((1U & vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[6U])));
    bufp->fullCData(oldp+75,(vlSelfRef.processor_tb__DOT__dut__DOT__PCSrcE),2);
    bufp->fullBit(oldp+76,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                  >> 0x1cU))));
    bufp->fullBit(oldp+77,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+78,(((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__Ovf) 
                                << 3U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__bru__DOT__Carry) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__Neg) 
                                << 1U) | (0xffffffffU 
                                          == (~ vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALUResultE))))),4);
    bufp->fullBit(oldp+79,(vlSelfRef.processor_tb__DOT__dut__DOT__FlushE));
    bufp->fullCData(oldp+80,(vlSelfRef.processor_tb__DOT__dut__DOT__ForwardAE),2);
    bufp->fullCData(oldp+81,(vlSelfRef.processor_tb__DOT__dut__DOT__ForwardBE),2);
    bufp->fullCData(oldp+82,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                       >> 0xaU))),5);
    bufp->fullCData(oldp+83,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                       >> 5U))),5);
    bufp->fullCData(oldp+84,((0x1fU & vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U])),5);
    bufp->fullIData(oldp+85,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[1U]),32);
    bufp->fullCData(oldp+86,((3U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                    >> 0xbU))),2);
    bufp->fullIData(oldp+87,(((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                               << 0x1bU) | (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                            >> 5U))),32);
    bufp->fullBit(oldp+88,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                  >> 0xaU))));
    bufp->fullBit(oldp+89,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                  >> 0xdU))));
    bufp->fullCData(oldp+90,((0x1fU & vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[2U])),5);
    bufp->fullCData(oldp+91,((3U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Wreg__q[4U] 
                                    >> 5U))),2);
    bufp->fullIData(oldp+92,(((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Wreg__q[4U] 
                               << 0x1bU) | (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                                            >> 5U))),32);
    bufp->fullIData(oldp+93,(((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Wreg__q[3U] 
                               << 0x1bU) | (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Wreg__q[2U] 
                                            >> 5U))),32);
    bufp->fullIData(oldp+94,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Wreg__q[1U]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ResultW),32);
    bufp->fullBit(oldp+96,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Wreg__q[4U] 
                                  >> 7U))));
    bufp->fullCData(oldp+97,((0x1fU & vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Wreg__q[2U])),5);
    bufp->fullBit(oldp+98,((IData)((0x73U == (0xfff0007fU 
                                              & vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U])))));
    bufp->fullBit(oldp+99,((IData)((0x100073U == (0xfff0007fU 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U])))));
    bufp->fullBit(oldp+100,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                   >> 0x1dU))));
    bufp->fullCData(oldp+101,((7U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                     >> 0x14U))),3);
    bufp->fullCData(oldp+102,((3U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+103,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                   >> 5U))));
    bufp->fullBit(oldp+104,((IData)((0x40000020U == 
                                     (0x40000020U & 
                                      vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U])))));
    bufp->fullBit(oldp+105,(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__bru__DOT__cond));
    bufp->fullBit(oldp+106,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__Ovf));
    bufp->fullBit(oldp+107,(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__bru__DOT__Carry));
    bufp->fullBit(oldp+108,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__Neg));
    bufp->fullBit(oldp+109,((0xffffffffU == (~ vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALUResultE))));
    bufp->fullSData(oldp+110,(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls),13);
    bufp->fullCData(oldp+111,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                        >> 0xfU))),5);
    bufp->fullIData(oldp+112,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[0U]),32);
    bufp->fullCData(oldp+113,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                        >> 5U))),5);
    bufp->fullIData(oldp+114,(((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                << 0x1bU) | (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+115,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Wreg__q[0U]),32);
    bufp->fullBit(oldp+116,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                             & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                >> 0x1fU))));
    bufp->fullBit(oldp+117,((1U & (((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                     >> 0xeU) & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                                 >> 0x1fU)) 
                                   | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0))))));
    bufp->fullBit(oldp+118,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__isAddSub));
    bufp->fullIData(oldp+119,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b),32);
    bufp->fullIData(oldp+120,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__sum),32);
    bufp->fullBit(oldp+121,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout) 
                                   ^ (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                      >> 0x18U)))));
    bufp->fullIData(oldp+122,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry[0]),32);
    bufp->fullIData(oldp+123,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry[1]),32);
    bufp->fullIData(oldp+124,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry[2]),32);
    bufp->fullIData(oldp+125,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry[3]),32);
    bufp->fullIData(oldp+126,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry[4]),32);
    bufp->fullIData(oldp+127,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry[5]),32);
    bufp->fullIData(oldp+128,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry[6]),32);
    bufp->fullIData(oldp+129,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry[7]),32);
    bufp->fullIData(oldp+130,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry[8]),32);
    bufp->fullIData(oldp+131,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry[9]),32);
    bufp->fullIData(oldp+132,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry[10]),32);
    bufp->fullIData(oldp+133,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry[11]),32);
    bufp->fullIData(oldp+134,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry[12]),32);
    bufp->fullIData(oldp+135,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry[13]),32);
    bufp->fullIData(oldp+136,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry[14]),32);
    bufp->fullIData(oldp+137,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry[15]),32);
    bufp->fullBit(oldp+138,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                   >> 0x18U))));
    bufp->fullIData(oldp+139,((((((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout) 
                                    << 0x1fU) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout) 
                                                 << 0x1eU)) 
                                  | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout) 
                                      << 0x1dU) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout) 
                                                   << 0x1cU))) 
                                 | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout) 
                                      << 0x1bU) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout) 
                                                   << 0x1aU)) 
                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout) 
                                        << 0x19U) | 
                                       ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout) 
                                        << 0x18U)))) 
                                | (((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout) 
                                      << 0x17U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout) 
                                                   << 0x16U)) 
                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout) 
                                        << 0x15U) | 
                                       ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout) 
                                        << 0x14U))) 
                                   | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout) 
                                        << 0x13U) | 
                                       ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout) 
                                        << 0x12U)) 
                                      | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout) 
                                          << 0x11U) 
                                         | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout) 
                                            << 0x10U))))) 
                               | ((((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout) 
                                      << 0xfU) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout) 
                                                  << 0xeU)) 
                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout) 
                                        << 0xdU) | 
                                       ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout) 
                                        << 0xcU))) 
                                   | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout) 
                                        << 0xbU) | 
                                       ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout) 
                                        << 0xaU)) | 
                                      (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout) 
                                        << 9U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout) 
                                                  << 8U)))) 
                                  | (((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout) 
                                        << 7U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout) 
                                                  << 6U)) 
                                      | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout) 
                                          << 4U))) 
                                     | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout) 
                                          << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__))))))),32);
    bufp->fullBit(oldp+140,((1U & vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE)));
    bufp->fullBit(oldp+141,((1U & vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b)));
    bufp->fullBit(oldp+142,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a1__DOT____VdfgRegularize_h53fb3b80_0_0) 
                                   ^ (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+143,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__));
    bufp->fullBit(oldp+144,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 9U))));
    bufp->fullBit(oldp+145,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 9U))));
    bufp->fullBit(oldp+146,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout));
    bufp->fullBit(oldp+147,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a9__cout))));
    bufp->fullBit(oldp+148,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout));
    bufp->fullBit(oldp+149,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0xaU))));
    bufp->fullBit(oldp+150,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+151,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a10__cout))));
    bufp->fullBit(oldp+152,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout));
    bufp->fullBit(oldp+153,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0xbU))));
    bufp->fullBit(oldp+154,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+155,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a11__cout))));
    bufp->fullBit(oldp+156,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout));
    bufp->fullBit(oldp+157,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0xcU))));
    bufp->fullBit(oldp+158,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+159,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a12__cout))));
    bufp->fullBit(oldp+160,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout));
    bufp->fullBit(oldp+161,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0xdU))));
    bufp->fullBit(oldp+162,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+163,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a13__cout))));
    bufp->fullBit(oldp+164,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout));
    bufp->fullBit(oldp+165,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0xeU))));
    bufp->fullBit(oldp+166,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+167,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a14__cout))));
    bufp->fullBit(oldp+168,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout));
    bufp->fullBit(oldp+169,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0xfU))));
    bufp->fullBit(oldp+170,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+171,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a15__cout))));
    bufp->fullBit(oldp+172,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout));
    bufp->fullBit(oldp+173,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0x10U))));
    bufp->fullBit(oldp+174,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+175,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a16__cout))));
    bufp->fullBit(oldp+176,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout));
    bufp->fullBit(oldp+177,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0x11U))));
    bufp->fullBit(oldp+178,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+179,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a17__cout))));
    bufp->fullBit(oldp+180,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout));
    bufp->fullBit(oldp+181,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0x12U))));
    bufp->fullBit(oldp+182,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+183,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a18__cout))));
    bufp->fullBit(oldp+184,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout));
    bufp->fullBit(oldp+185,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 1U))));
    bufp->fullBit(oldp+186,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 1U))));
    bufp->fullBit(oldp+187,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__carry__BRA__0__KET__))));
    bufp->fullBit(oldp+188,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout));
    bufp->fullBit(oldp+189,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0x13U))));
    bufp->fullBit(oldp+190,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+191,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a19__cout))));
    bufp->fullBit(oldp+192,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout));
    bufp->fullBit(oldp+193,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0x14U))));
    bufp->fullBit(oldp+194,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+195,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a20__cout))));
    bufp->fullBit(oldp+196,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout));
    bufp->fullBit(oldp+197,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0x15U))));
    bufp->fullBit(oldp+198,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+199,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a21__cout))));
    bufp->fullBit(oldp+200,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout));
    bufp->fullBit(oldp+201,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0x16U))));
    bufp->fullBit(oldp+202,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+203,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a22__cout))));
    bufp->fullBit(oldp+204,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout));
    bufp->fullBit(oldp+205,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0x17U))));
    bufp->fullBit(oldp+206,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+207,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a23__cout))));
    bufp->fullBit(oldp+208,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout));
    bufp->fullBit(oldp+209,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0x18U))));
    bufp->fullBit(oldp+210,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+211,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a24__cout))));
    bufp->fullBit(oldp+212,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout));
    bufp->fullBit(oldp+213,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0x19U))));
    bufp->fullBit(oldp+214,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+215,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a25__cout))));
    bufp->fullBit(oldp+216,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout));
    bufp->fullBit(oldp+217,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+218,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+219,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a26__cout))));
    bufp->fullBit(oldp+220,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout));
    bufp->fullBit(oldp+221,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+222,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+223,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a27__cout))));
    bufp->fullBit(oldp+224,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout));
    bufp->fullBit(oldp+225,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+226,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+227,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a28__cout))));
    bufp->fullBit(oldp+228,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout));
    bufp->fullBit(oldp+229,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 2U))));
    bufp->fullBit(oldp+230,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 2U))));
    bufp->fullBit(oldp+231,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a2__cout))));
    bufp->fullBit(oldp+232,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout));
    bufp->fullBit(oldp+233,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+234,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+235,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a29__cout))));
    bufp->fullBit(oldp+236,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout));
    bufp->fullBit(oldp+237,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+238,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+239,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a30__cout))));
    bufp->fullBit(oldp+240,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a31__cout));
    bufp->fullBit(oldp+241,((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                             >> 0x1fU)));
    bufp->fullBit(oldp+242,((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+243,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a32__cout));
    bufp->fullBit(oldp+244,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 3U))));
    bufp->fullBit(oldp+245,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 3U))));
    bufp->fullBit(oldp+246,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a3__cout))));
    bufp->fullBit(oldp+247,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout));
    bufp->fullBit(oldp+248,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 4U))));
    bufp->fullBit(oldp+249,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 4U))));
    bufp->fullBit(oldp+250,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a4__cout))));
    bufp->fullBit(oldp+251,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout));
    bufp->fullBit(oldp+252,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 5U))));
    bufp->fullBit(oldp+253,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 5U))));
    bufp->fullBit(oldp+254,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a5__cout))));
    bufp->fullBit(oldp+255,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout));
    bufp->fullBit(oldp+256,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 6U))));
    bufp->fullBit(oldp+257,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 6U))));
    bufp->fullBit(oldp+258,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a6__cout))));
    bufp->fullBit(oldp+259,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout));
    bufp->fullBit(oldp+260,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 7U))));
    bufp->fullBit(oldp+261,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 7U))));
    bufp->fullBit(oldp+262,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a7__cout))));
    bufp->fullBit(oldp+263,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout));
    bufp->fullBit(oldp+264,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcAE 
                                   >> 8U))));
    bufp->fullBit(oldp+265,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__src_b 
                                   >> 8U))));
    bufp->fullBit(oldp+266,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__add1__DOT____Vcellout__a8__cout))));
    bufp->fullIData(oldp+267,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT____Vcellout__and1__y),32);
    bufp->fullIData(oldp+268,((~ vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcBE)),32);
    bufp->fullIData(oldp+269,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry
                              [0U]),32);
    bufp->fullIData(oldp+270,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry
                              [1U]),32);
    bufp->fullIData(oldp+271,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT____Vcellout__or1__y),32);
    bufp->fullIData(oldp+272,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT____Vcellout__xor1__y),32);
    bufp->fullIData(oldp+273,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry
                              [5U]),32);
    bufp->fullIData(oldp+274,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift5),32);
    bufp->fullIData(oldp+275,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift5),32);
    bufp->fullIData(oldp+276,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift5),32);
    bufp->fullIData(oldp+277,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry
                              [9U]),32);
    bufp->fullIData(oldp+278,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry
                              [0xaU]),32);
    bufp->fullIData(oldp+279,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry
                              [0xbU]),32);
    bufp->fullIData(oldp+280,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry
                              [0xcU]),32);
    bufp->fullIData(oldp+281,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry
                              [0xdU]),32);
    bufp->fullIData(oldp+282,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry
                              [0xeU]),32);
    bufp->fullIData(oldp+283,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__entry
                              [0xfU]),32);
    bufp->fullCData(oldp+284,((0x1fU & vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__SrcBE)),5);
    bufp->fullIData(oldp+285,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift1),32);
    bufp->fullIData(oldp+286,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift2),32);
    bufp->fullIData(oldp+287,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift3),32);
    bufp->fullIData(oldp+288,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__sll1__DOT__shift4),32);
    bufp->fullIData(oldp+289,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift1),32);
    bufp->fullIData(oldp+290,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift2),32);
    bufp->fullIData(oldp+291,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift3),32);
    bufp->fullIData(oldp+292,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__sra1__DOT__shift4),32);
    bufp->fullIData(oldp+293,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift1),32);
    bufp->fullIData(oldp+294,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift2),32);
    bufp->fullIData(oldp+295,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift3),32);
    bufp->fullIData(oldp+296,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALU__DOT__srl1__DOT__shift4),32);
    bufp->fullBit(oldp+297,((1U & (~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__StallF)))));
    bufp->fullWData(oldp+298,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q),96);
    bufp->fullWData(oldp+301,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q),195);
    __Vtemp_3[0U] = (IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[0U])) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCTargetE))));
    __Vtemp_3[1U] = (IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[0U])) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCTargetE))) 
                             >> 0x20U));
    __Vtemp_3[2U] = (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALUResultE)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__WriteDataE)))) 
                      << 5U) | (0x1fU & vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U]));
    __Vtemp_3[3U] = (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALUResultE)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__WriteDataE)))) 
                      >> 0x1bU) | ((IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALUResultE)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__WriteDataE))) 
                                            >> 0x20U)) 
                                   << 5U));
    __Vtemp_3[4U] = ((0xffffffe0U & ((0x3c00U & ((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[6U] 
                                                  << 0xbU) 
                                                 | (0x400U 
                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                       >> 0x15U)))) 
                                     | (0x3e0U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[5U] 
                                                  >> 0xaU)))) 
                     | ((IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ALUResultE)) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__WriteDataE))) 
                                 >> 0x20U)) >> 0x1bU));
    bufp->fullWData(oldp+308,(__Vtemp_3),142);
    bufp->fullWData(oldp+313,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q),142);
    bufp->fullIData(oldp+318,(((((((0x80000000U & (
                                                   ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                                    << 0x1fU) 
                                                   & vlSelfRef.processor_tb__DOT__dut__DOT__pcF)) 
                                   | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout) 
                                      << 0x1eU)) | 
                                  (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout) 
                                    << 0x1dU) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout) 
                                                 << 0x1cU))) 
                                 | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout) 
                                      << 0x1bU) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout) 
                                                   << 0x1aU)) 
                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout) 
                                        << 0x19U) | 
                                       ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout) 
                                        << 0x18U)))) 
                                | (((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout) 
                                      << 0x17U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout) 
                                                   << 0x16U)) 
                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout) 
                                        << 0x15U) | 
                                       ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout) 
                                        << 0x14U))) 
                                   | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout) 
                                        << 0x13U) | 
                                       ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout) 
                                        << 0x12U)) 
                                      | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout) 
                                          << 0x11U) 
                                         | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout) 
                                            << 0x10U))))) 
                               | ((((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout) 
                                      << 0xfU) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout) 
                                                  << 0xeU)) 
                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout) 
                                        << 0xdU) | 
                                       ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout) 
                                        << 0xcU))) 
                                   | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout) 
                                        << 0xbU) | 
                                       ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout) 
                                        << 0xaU)) | 
                                      (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout) 
                                        << 9U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout) 
                                                  << 8U)))) 
                                  | (((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout) 
                                        << 7U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout) 
                                                  << 6U)) 
                                      | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout) 
                                          << 4U))) 
                                     | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout) 
                                         << 3U) | (4U 
                                                   & vlSelfRef.processor_tb__DOT__dut__DOT__pcF)))))),32);
    bufp->fullBit(oldp+319,((1U & vlSelfRef.processor_tb__DOT__dut__DOT__pcF)));
    bufp->fullBit(oldp+320,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 9U))));
    bufp->fullBit(oldp+321,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout));
    bufp->fullBit(oldp+322,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 9U) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a9__cout)))));
    bufp->fullBit(oldp+323,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout));
    bufp->fullBit(oldp+324,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0xaU))));
    bufp->fullBit(oldp+325,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0xaU) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a10__cout)))));
    bufp->fullBit(oldp+326,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout));
    bufp->fullBit(oldp+327,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0xbU))));
    bufp->fullBit(oldp+328,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0xbU) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a11__cout)))));
    bufp->fullBit(oldp+329,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout));
    bufp->fullBit(oldp+330,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0xcU))));
    bufp->fullBit(oldp+331,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0xcU) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a12__cout)))));
    bufp->fullBit(oldp+332,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout));
    bufp->fullBit(oldp+333,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0xdU))));
    bufp->fullBit(oldp+334,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0xdU) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a13__cout)))));
    bufp->fullBit(oldp+335,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout));
    bufp->fullBit(oldp+336,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0xeU))));
    bufp->fullBit(oldp+337,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0xeU) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a14__cout)))));
    bufp->fullBit(oldp+338,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout));
    bufp->fullBit(oldp+339,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0xfU))));
    bufp->fullBit(oldp+340,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0xfU) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a15__cout)))));
    bufp->fullBit(oldp+341,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout));
    bufp->fullBit(oldp+342,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0x10U))));
    bufp->fullBit(oldp+343,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0x10U) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a16__cout)))));
    bufp->fullBit(oldp+344,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout));
    bufp->fullBit(oldp+345,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0x11U))));
    bufp->fullBit(oldp+346,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0x11U) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a17__cout)))));
    bufp->fullBit(oldp+347,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout));
    bufp->fullBit(oldp+348,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0x12U))));
    bufp->fullBit(oldp+349,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0x12U) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a18__cout)))));
    bufp->fullBit(oldp+350,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout));
    bufp->fullBit(oldp+351,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 1U))));
    bufp->fullBit(oldp+352,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0x13U))));
    bufp->fullBit(oldp+353,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0x13U) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a19__cout)))));
    bufp->fullBit(oldp+354,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout));
    bufp->fullBit(oldp+355,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0x14U))));
    bufp->fullBit(oldp+356,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0x14U) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a20__cout)))));
    bufp->fullBit(oldp+357,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout));
    bufp->fullBit(oldp+358,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0x15U))));
    bufp->fullBit(oldp+359,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0x15U) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a21__cout)))));
    bufp->fullBit(oldp+360,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout));
    bufp->fullBit(oldp+361,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0x16U))));
    bufp->fullBit(oldp+362,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0x16U) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a22__cout)))));
    bufp->fullBit(oldp+363,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout));
    bufp->fullBit(oldp+364,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0x17U))));
    bufp->fullBit(oldp+365,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0x17U) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a23__cout)))));
    bufp->fullBit(oldp+366,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout));
    bufp->fullBit(oldp+367,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0x18U))));
    bufp->fullBit(oldp+368,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0x18U) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a24__cout)))));
    bufp->fullBit(oldp+369,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout));
    bufp->fullBit(oldp+370,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0x19U))));
    bufp->fullBit(oldp+371,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0x19U) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a25__cout)))));
    bufp->fullBit(oldp+372,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout));
    bufp->fullBit(oldp+373,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+374,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0x1aU) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a26__cout)))));
    bufp->fullBit(oldp+375,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout));
    bufp->fullBit(oldp+376,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+377,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0x1bU) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a27__cout)))));
    bufp->fullBit(oldp+378,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout));
    bufp->fullBit(oldp+379,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+380,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0x1cU) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a28__cout)))));
    bufp->fullBit(oldp+381,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout));
    bufp->fullBit(oldp+382,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 2U))));
    bufp->fullBit(oldp+383,((1U & (~ (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                      >> 2U)))));
    bufp->fullBit(oldp+384,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+385,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0x1dU) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a29__cout)))));
    bufp->fullBit(oldp+386,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout));
    bufp->fullBit(oldp+387,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+388,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 0x1eU) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a30__cout)))));
    bufp->fullBit(oldp+389,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout));
    bufp->fullBit(oldp+390,((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                             >> 0x1fU)));
    bufp->fullBit(oldp+391,(((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                              >> 0x1fU) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a31__cout))));
    bufp->fullBit(oldp+392,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 3U))));
    bufp->fullBit(oldp+393,((1U & VL_REDXOR_4((0xcU 
                                               & vlSelfRef.processor_tb__DOT__dut__DOT__pcF)))));
    bufp->fullBit(oldp+394,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout));
    bufp->fullBit(oldp+395,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 4U))));
    bufp->fullBit(oldp+396,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 4U) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a4__cout)))));
    bufp->fullBit(oldp+397,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout));
    bufp->fullBit(oldp+398,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 5U))));
    bufp->fullBit(oldp+399,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 5U) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a5__cout)))));
    bufp->fullBit(oldp+400,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout));
    bufp->fullBit(oldp+401,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 6U))));
    bufp->fullBit(oldp+402,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 6U) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a6__cout)))));
    bufp->fullBit(oldp+403,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout));
    bufp->fullBit(oldp+404,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 7U))));
    bufp->fullBit(oldp+405,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 7U) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a7__cout)))));
    bufp->fullBit(oldp+406,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout));
    bufp->fullBit(oldp+407,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                   >> 8U))));
    bufp->fullBit(oldp+408,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                    >> 8U) ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplus4__DOT____Vcellout__a8__cout)))));
    bufp->fullIData(oldp+409,(((((((0x80000000U & (
                                                   (0x80000000U 
                                                    & ((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                                        << 0x11U) 
                                                       & vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U])) 
                                                   | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0)) 
                                                      << 0x1fU))) 
                                   | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout) 
                                      << 0x1eU)) | 
                                  (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout) 
                                    << 0x1dU) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout) 
                                                 << 0x1cU))) 
                                 | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout) 
                                      << 0x1bU) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout) 
                                                   << 0x1aU)) 
                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout) 
                                        << 0x19U) | 
                                       ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout) 
                                        << 0x18U)))) 
                                | (((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout) 
                                      << 0x17U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout) 
                                                   << 0x16U)) 
                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout) 
                                        << 0x15U) | 
                                       ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout) 
                                        << 0x14U))) 
                                   | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout) 
                                        << 0x13U) | 
                                       ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout) 
                                        << 0x12U)) 
                                      | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout) 
                                          << 0x11U) 
                                         | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout) 
                                            << 0x10U))))) 
                               | ((((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout) 
                                      << 0xfU) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout) 
                                                  << 0xeU)) 
                                    | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout) 
                                        << 0xdU) | 
                                       ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout) 
                                        << 0xcU))) 
                                   | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout) 
                                        << 0xbU) | 
                                       ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout) 
                                        << 0xaU)) | 
                                      (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout) 
                                        << 9U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout) 
                                                  << 8U)))) 
                                  | (((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout) 
                                        << 7U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout) 
                                                  << 6U)) 
                                      | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout) 
                                          << 4U))) 
                                     | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout) 
                                          << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__))))))),32);
    bufp->fullBit(oldp+410,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+411,((1U & vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U])));
    bufp->fullBit(oldp+412,((1U & ((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                    >> 0xfU) ^ vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U]))));
    bufp->fullBit(oldp+413,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__));
    bufp->fullBit(oldp+414,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+415,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 9U))));
    bufp->fullBit(oldp+416,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout));
    bufp->fullBit(oldp+417,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a10__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a9__cout))));
    bufp->fullBit(oldp+418,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout));
    bufp->fullBit(oldp+419,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+420,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+421,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a11__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a10__cout))));
    bufp->fullBit(oldp+422,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout));
    bufp->fullBit(oldp+423,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+424,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+425,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a12__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a11__cout))));
    bufp->fullBit(oldp+426,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout));
    bufp->fullBit(oldp+427,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+428,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+429,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a13__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a12__cout))));
    bufp->fullBit(oldp+430,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout));
    bufp->fullBit(oldp+431,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+432,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+433,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a14__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a13__cout))));
    bufp->fullBit(oldp+434,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout));
    bufp->fullBit(oldp+435,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+436,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+437,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a15__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a14__cout))));
    bufp->fullBit(oldp+438,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout));
    bufp->fullBit(oldp+439,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+440,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+441,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a16__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a15__cout))));
    bufp->fullBit(oldp+442,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout));
    bufp->fullBit(oldp+443,((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+444,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+445,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a17__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a16__cout))));
    bufp->fullBit(oldp+446,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout));
    bufp->fullBit(oldp+447,((1U & vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U])));
    bufp->fullBit(oldp+448,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+449,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a18__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a17__cout))));
    bufp->fullBit(oldp+450,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout));
    bufp->fullBit(oldp+451,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 1U))));
    bufp->fullBit(oldp+452,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+453,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a19__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a18__cout))));
    bufp->fullBit(oldp+454,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout));
    bufp->fullBit(oldp+455,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+456,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 1U))));
    bufp->fullBit(oldp+457,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a2__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__carry__BRA__0__KET__))));
    bufp->fullBit(oldp+458,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout));
    bufp->fullBit(oldp+459,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 2U))));
    bufp->fullBit(oldp+460,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+461,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a20__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a19__cout))));
    bufp->fullBit(oldp+462,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout));
    bufp->fullBit(oldp+463,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 3U))));
    bufp->fullBit(oldp+464,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+465,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a21__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a20__cout))));
    bufp->fullBit(oldp+466,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout));
    bufp->fullBit(oldp+467,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 4U))));
    bufp->fullBit(oldp+468,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+469,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a22__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a21__cout))));
    bufp->fullBit(oldp+470,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout));
    bufp->fullBit(oldp+471,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 5U))));
    bufp->fullBit(oldp+472,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+473,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a23__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a22__cout))));
    bufp->fullBit(oldp+474,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout));
    bufp->fullBit(oldp+475,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 6U))));
    bufp->fullBit(oldp+476,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+477,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a24__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a23__cout))));
    bufp->fullBit(oldp+478,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout));
    bufp->fullBit(oldp+479,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 7U))));
    bufp->fullBit(oldp+480,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+481,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a25__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a24__cout))));
    bufp->fullBit(oldp+482,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout));
    bufp->fullBit(oldp+483,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 8U))));
    bufp->fullBit(oldp+484,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+485,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a26__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a25__cout))));
    bufp->fullBit(oldp+486,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout));
    bufp->fullBit(oldp+487,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 9U))));
    bufp->fullBit(oldp+488,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+489,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a27__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a26__cout))));
    bufp->fullBit(oldp+490,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout));
    bufp->fullBit(oldp+491,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+492,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+493,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a28__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a27__cout))));
    bufp->fullBit(oldp+494,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout));
    bufp->fullBit(oldp+495,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+496,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+497,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a29__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a28__cout))));
    bufp->fullBit(oldp+498,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout));
    bufp->fullBit(oldp+499,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+500,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 2U))));
    bufp->fullBit(oldp+501,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a3__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a2__cout))));
    bufp->fullBit(oldp+502,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout));
    bufp->fullBit(oldp+503,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+504,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+505,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a30__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a29__cout))));
    bufp->fullBit(oldp+506,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout));
    bufp->fullBit(oldp+507,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+508,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+509,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a31__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a30__cout))));
    bufp->fullBit(oldp+510,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout));
    bufp->fullBit(oldp+511,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[3U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+512,((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+513,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a32__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a31__cout))));
    bufp->fullBit(oldp+514,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+515,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 3U))));
    bufp->fullBit(oldp+516,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a4__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a3__cout))));
    bufp->fullBit(oldp+517,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout));
    bufp->fullBit(oldp+518,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+519,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 4U))));
    bufp->fullBit(oldp+520,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a5__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a4__cout))));
    bufp->fullBit(oldp+521,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout));
    bufp->fullBit(oldp+522,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+523,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 5U))));
    bufp->fullBit(oldp+524,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a6__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a5__cout))));
    bufp->fullBit(oldp+525,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout));
    bufp->fullBit(oldp+526,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+527,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 6U))));
    bufp->fullBit(oldp+528,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a7__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a6__cout))));
    bufp->fullBit(oldp+529,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout));
    bufp->fullBit(oldp+530,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+531,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 7U))));
    bufp->fullBit(oldp+532,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a8__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a7__cout))));
    bufp->fullBit(oldp+533,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout));
    bufp->fullBit(oldp+534,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[2U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+535,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Ereg__q[1U] 
                                   >> 8U))));
    bufp->fullBit(oldp+536,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT__a9__DOT____VdfgRegularize_h53fb3b80_0_0) 
                             ^ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCplusbranch__DOT____Vcellout__a8__cout))));
    bufp->fullWData(oldp+537,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Wreg__q),136);
    bufp->fullIData(oldp+542,((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                               >> 7U)),25);
    __Vtemp_8[0U] = vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[0U];
    __Vtemp_8[1U] = vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[1U];
    __Vtemp_8[2U] = (((IData)((((QData)((IData)(((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                                  << 0x1bU) 
                                                 | (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                    >> 5U)))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ReadDataM_sel)))) 
                      << 5U) | (0x1fU & vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[2U]));
    __Vtemp_8[3U] = (((IData)((((QData)((IData)(((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                                  << 0x1bU) 
                                                 | (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                    >> 5U)))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ReadDataM_sel)))) 
                      >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                              ((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                                                << 0x1bU) 
                                                               | (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                                  >> 5U)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ReadDataM_sel))) 
                                            >> 0x20U)) 
                                   << 5U));
    __Vtemp_8[4U] = ((0xe0U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                               >> 6U)) | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[4U] 
                                                                       << 0x1bU) 
                                                                      | (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                                                         >> 5U)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ReadDataM_sel))) 
                                                   >> 0x20U)) 
                                          >> 0x1bU));
    bufp->fullWData(oldp+543,(__Vtemp_8),136);
    __Vtemp_10[2U] = (((IData)((((QData)((IData)(((
                                                   (0x100U 
                                                    & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                                       << 1U)) 
                                                   | ((0xc0U 
                                                       & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                                          << 6U)) 
                                                      | (0x20U 
                                                         & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                                            << 1U)))) 
                                                  | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALUControlD) 
                                                      << 1U) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                                           >> 8U)))))) 
                                 << 0x28U) | (((QData)((IData)(
                                                               (7U 
                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                   >> 0xcU)))) 
                                               << 0x25U) 
                                              | (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSTypeD)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__rd1)))))) 
                       << 0xfU) | ((IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__rd2)) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[1U]))) 
                                            >> 0x20U)) 
                                   >> 0x11U));
    __Vtemp_10[3U] = (((IData)((((QData)((IData)(((
                                                   (0x100U 
                                                    & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                                       << 1U)) 
                                                   | ((0xc0U 
                                                       & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                                          << 6U)) 
                                                      | (0x20U 
                                                         & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                                            << 1U)))) 
                                                  | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALUControlD) 
                                                      << 1U) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                                           >> 8U)))))) 
                                 << 0x28U) | (((QData)((IData)(
                                                               (7U 
                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                   >> 0xcU)))) 
                                               << 0x25U) 
                                              | (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSTypeD)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__rd1)))))) 
                       >> 0x11U) | ((IData)(((((QData)((IData)(
                                                               (((0x100U 
                                                                  & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                                                     << 1U)) 
                                                                 | ((0xc0U 
                                                                     & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                                                        << 6U)) 
                                                                    | (0x20U 
                                                                       & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                                                          << 1U)))) 
                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALUControlD) 
                                                                    << 1U) 
                                                                   | (1U 
                                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                                                         >> 8U)))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (7U 
                                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                                      >> 0xcU)))) 
                                                  << 0x25U) 
                                                 | (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSTypeD)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__rd1))))) 
                                             >> 0x20U)) 
                                    << 0xfU));
    __Vtemp_13[0U] = vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[0U];
    __Vtemp_13[1U] = vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ImmExtD;
    __Vtemp_13[2U] = (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__rd2)) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[1U])))) 
                       << 0xfU) | ((0x7c00U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                               >> 5U)) 
                                   | ((0x3e0U & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                 >> 0xfU)) 
                                      | (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[2U] 
                                                  >> 7U)))));
    __Vtemp_13[3U] = (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__rd2)) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[1U])))) 
                       >> 0x11U) | ((IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__rd2)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Dreg__q[1U]))) 
                                             >> 0x20U)) 
                                    << 0xfU));
    __Vtemp_13[4U] = __Vtemp_10[2U];
    __Vtemp_13[5U] = __Vtemp_10[3U];
    __Vtemp_13[6U] = ((4U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                             >> 0xaU)) | (3U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ctrl__DOT__md__DOT__controls) 
                                                >> 5U)));
    bufp->fullWData(oldp+548,(__Vtemp_13),195);
    bufp->fullIData(oldp+555,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__ReadDataM_sel),32);
    bufp->fullIData(oldp+556,(vlSelfRef.processor_tb__DOT__dut__DOT__WriteDataM),32);
    bufp->fullIData(oldp+557,(vlSelfRef.processor_tb__DOT__dut__DOT__ReadDataM),32);
    bufp->fullIData(oldp+558,(vlSelfRef.processor_tb__DOT__im__DOT__IMEM
                              [(0xffU & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                         >> 2U))]),32);
    bufp->fullIData(oldp+559,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__rd1),32);
    bufp->fullIData(oldp+560,(vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__rf__DOT__rd2),32);
    bufp->fullCData(oldp+561,(vlSelfRef.processor_tb__DOT__top_regfile_addr),5);
    bufp->fullIData(oldp+562,(vlSelfRef.processor_tb__DOT__top_regfile_data),32);
    bufp->fullIData(oldp+563,(vlSelfRef.processor_tb__DOT__dm__DOT__RAM
                              [(0x3fU & (vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT____Vcellout__Mreg__q[3U] 
                                         >> 7U))]),32);
    bufp->fullBit(oldp+564,(vlSelfRef.processor_tb__DOT__clk));
    bufp->fullBit(oldp+565,(vlSelfRef.processor_tb__DOT__rst));
    bufp->fullIData(oldp+566,(vlSelfRef.processor_tb__DOT__cycle_count),32);
    bufp->fullIData(oldp+567,(vlSelfRef.processor_tb__DOT__fd),32);
    bufp->fullIData(oldp+568,(vlSelfRef.processor_tb__DOT__exp_addr),32);
    bufp->fullIData(oldp+569,(vlSelfRef.processor_tb__DOT__exp_dat),32);
    bufp->fullBit(oldp+570,(vlSelfRef.processor_tb__DOT__test_passed_flag));
    __Vtemp_14[0U] = vlSelfRef.processor_tb__DOT__dut__DOT__dp__DOT__PCPlus4F;
    __Vtemp_14[1U] = (IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__im__DOT__IMEM
                                               [(0xffU 
                                                 & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                                    >> 2U))])) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__pcF))));
    __Vtemp_14[2U] = (IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__im__DOT__IMEM
                                                [(0xffU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__pcF 
                                                     >> 2U))])) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__pcF))) 
                              >> 0x20U));
    bufp->fullWData(oldp+571,(__Vtemp_14),96);
}
