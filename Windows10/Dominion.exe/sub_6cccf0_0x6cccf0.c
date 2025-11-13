// 函数: sub_6cccf0
// 地址: 0x6cccf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_147aba1 != 0)
    int32_t eax
    sub_63b870(eax, &data_801800, "!gDraw3DData.submittingRenderItems", 
        "C:\x\ax2017\Engine\VR.cpp", 0x190, "VRDraw")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

(*(*data_147b070 + 0xa8))(0)
void* esi = data_147abe8

if (esi != 0)
    esi = *(esi + 0x1c) u>> 0xe & 1

if ((*(*data_147d1b0 + 0x18))() != 0)
    data_147d2b0 = 1
    sub_6cc190()
    (*(*data_147b070 + 0x98))()
    sub_6cc4b0(0, esi)
    sub_6cc600()
    
    if (esi != 1)
        sub_6cc4b0(1, esi)
        sub_6cc600()
    
    int32_t* ecx_3 = data_147b070
    data_147d2b0 = 0
    (*(*ecx_3 + 0x9c))()

(*(*data_147b070 + 0xac))(0)
(*(*data_147b070 + 0xa8))(1)
int32_t var_c
int32_t var_8
int32_t edx_3

if (*(data_cf65b8 + 0x1c) == 0 || data_ccf6e6 == 0)
    int32_t eax_12 = data_147d1d4
    edx_3 = *data_147d1b0
    
    if (esi != 1)
        var_8 = *((eax_12 << 2) + &data_147d1c0)
        var_c = *((eax_12 << 2) + &data_147d1bc)
    else
        int32_t eax_13 = *((eax_12 << 2) + &data_147d1bc)
        var_8 = eax_13
        var_c = eax_13
else
    int32_t eax_10 = data_147d1d4
    edx_3 = *data_147d1b0
    
    if (esi != 1)
        var_8 = *((eax_10 << 2) + &data_147d1b8)
        var_c = *((eax_10 << 2) + &data_147d1b4)
    else
        int32_t eax_11 = *((eax_10 << 2) + &data_147d1b4)
        var_8 = eax_11
        var_c = eax_11

(*(edx_3 + 0x1c))(&data_147d218, var_c, var_8)
(*(*data_147b070 + 0xac))(1)
int32_t eax_16 = data_147d1d4 + 1
data_147d1d4 = eax_16

if (eax_16 == 1)
    data_147d1d4 = 0

return sub_6e1520(0) __tailcall
