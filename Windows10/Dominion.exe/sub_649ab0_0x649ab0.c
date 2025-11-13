// 函数: sub_649ab0
// 地址: 0x649ab0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_10
char const* const ecx

if (data_147aba1 != 0)
    char const* const var_c = "Draw3DRenderItemSubmissionBegin"
    var_10 = 0xad1
    ecx = "!gDraw3DData.submittingRenderItems"
else if (data_e76b40 != 0)
    char const* const var_c_1 = "Draw3DRenderItemSubmissionBegin"
    var_10 = 0xad2
    ecx = "gDraw3DData.renderItemCount == 0"
else if (data_1476b44 == 0)
    if (data_147aba0 == 0)
        int128_t xmm1 = data_7fefb0
        data_147aba1 = 1
        data_cf6a6c = 0
        data_cf6a80 = zx.o(0)
        data_cf6aa0 = 0
        data_cf6a70 = xmm1
        data_cf6a90 = xmm1
        int32_t __saved_ebp
        int32_t result
        float xmm0
        result, xmm0 = sub_4ac580(&__saved_ebp, 3f)
        float xmm1_1 = 1f / xmm0
        data_cf6b14 = 0
        data_cf6b38 = 7
        data_cf6b3c = 0x3f800000
        int128_t xmm0_1 = data_7fefb0
        data_cf68fc.d = xmm1_1
        float xmm1_2 = xmm1_1 * -1f
        data_cf692c = xmm0_1
        data_cf68fc:4 = xmm1_2
        data_cf68fc:8 = xmm1_2
        __builtin_memset(&data_cf6b18, 0, 0x20)
        return result
    
    char const* const var_c_3 = "Draw3DRenderItemSubmissionBegin"
    var_10 = 0xad4
    ecx = "!gDraw3DData.quadGroupDrawing"
else
    char const* const var_c_2 = "Draw3DRenderItemSubmissionBegin"
    var_10 = 0xad3
    ecx = "gDraw3DData.renderQuadCount == 0"

int32_t eax
sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\Draw3d.cpp", var_10, 
    "Draw3DRenderItemSubmissionBegin")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
