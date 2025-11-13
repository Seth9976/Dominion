// 函数: sub_69c1a0
// 地址: 0x69c1a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_28
int32_t var_24
char const* const var_20
char* ecx

if (arg3 != 0)
    arg1 = zx.d(arg3.w)
    
    if (arg1 u>= data_caf264)
    label_69c22f:
        var_20 = "DataArray<struct UIState>::DataArrayGet"
        var_24 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
        var_28 = "C:\x\ax2017\Engine\DataArray.h"
    else
        int32_t ecx_1 = arg1 * 0x438
        arg1 = data_caf260
        
        if (*(ecx_1 + arg1 + 0x434) != arg3)
            goto label_69c22f
        
        int32_t* ecx_2 = *(ecx_1 + arg1 + 4)
        
        if (ecx_2[1] == 0x1e)
            void* edx_1 = arg2 * 0x178 + *sub_5af880(ecx_2)
            float var_14[0x4]
            *arg4 = *sub_697400(&var_14, edx_1 + 0x10, arg5, &var_14, edx_1 + 0x20)
            return arg4
        
        var_20 = "UIDefGet"
        var_24 = 0x127
        var_28 = "C:\x\ax2017\Engine\UIDef.cpp"
        ecx = "ptr->assetType == ASSET_TYPE_UI"
else
    var_20 = "DataArray<struct UIState>::DataArrayGet"
    var_24 = 0x6c
    ecx = "id != DATAID_NULL"
    var_28 = "C:\x\ax2017\Engine\DataArray.h"

sub_63b870(arg1, &data_801800, ecx, var_28, var_24, var_20)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
