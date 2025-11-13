// 函数: sub_6e7c30
// 地址: 0x6e7c30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_10
int32_t eax_1 = sub_6e69b0(&var_10, arg3[4], arg3[3], arg3[1], &var_10)

if (*(arg3 + 0x8d) != 0)
    int32_t var_8_1 = 0

int32_t* ecx_1 = *arg3

if (ecx_1[1] != 0x18)
    sub_63b870(eax_1, &data_801800, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
        "C:\x\ax2017\Engine\AssetUtils.cpp", 0x2ed, "FlanimGetDef")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* eax_2 = sub_5af880(ecx_1)
sub_6e7830(eax_2, arg2, eax_2, &var_10, arg4)
int32_t result = arg3[0x1d]

if (result s<= 0)
    if (arg3[0x23].b == 0)
        return result
    
    return sub_6e7a50(arg4, arg2 * 0x68 + arg3[0x1a], 1f)

float* edx_5 = arg2 * 0x68 + arg3[0x1a]

if (arg3[0x23].b == 0)
    return sub_6e7a50(arg4, edx_5, 
        _mm_cvtepi32_ps(zx.o(result)) / _mm_cvtepi32_ps(zx.o(arg3[0x1c])))

return sub_6e7a50(arg4, edx_5, 1f)
