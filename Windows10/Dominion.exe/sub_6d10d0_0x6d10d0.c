// 函数: sub_6d10d0
// 地址: 0x6d10d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg3[1] != 0x20)
    int32_t __saved_ebp
    sub_63b870(__security_cookie ^ &__saved_ebp, &data_801800, "ptr->assetType == ASSET_TYPE_FAB", 
        "C:\x\ax2017\Engine\FabDef.cpp", 0xeb, "FabDefGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

float var_7c[0xa]
float* eax_4 = sub_6cd460(&var_7c, 0x87efe8, arg5 * 0xe0 + *sub_5af880(arg3), &var_7c)
float var_54 = 1f
int128_t xmm0 = *(eax_4 + 0x10)
uint128_t xmm1 = *eax_4
int64_t xmm0_1 = *(eax_4 + 0x20)
uint128_t var_34 = xmm1
int64_t var_14 = xmm0_1
int64_t var_40 = xmm1
int32_t var_38 = _mm_bsrli_si128(xmm1, 8)
int128_t var_28
int128_t var_50 = var_28
sub_4eb600(eax_4, &var_54, &var_34:8, &data_bf21e8)
int128_t var_2c
*arg4 = var_2c
arg4[1] = xmm0
CookieCheckFunction(arg4)
return arg4
