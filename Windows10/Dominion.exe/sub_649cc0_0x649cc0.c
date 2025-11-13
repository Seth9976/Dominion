// 函数: sub_649cc0
// 地址: 0x649cc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8
char const* const ecx

if (data_147aba1 != 0)
    if (data_147aba0 == 0)
        data_147aba0 = 1
        data_147aba4.q = *arg1
        int32_t result = arg1[1].d
        data_147abac = result
        return result
    
    char const* const var_4_1 = "Draw3DQuadGroupStart"
    var_8 = 0xb19
    ecx = "!gDraw3DData.quadGroupDrawing"
else
    char const* const var_4 = "Draw3DQuadGroupStart"
    var_8 = 0xb18
    ecx = "gDraw3DData.submittingRenderItems"

int32_t eax
sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\Draw3d.cpp", var_8, "Draw3DQuadGroupStart")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
