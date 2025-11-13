// 函数: sub_6d0bc0
// 地址: 0x6d0bc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = sub_6d1370(arg3)
int32_t* ecx = *eax_2

if (ecx[1] != 0x20)
    sub_63b870(eax_2, &data_801800, "ptr->assetType == ASSET_TYPE_FAB", 
        "C:\x\ax2017\Engine\FabDef.cpp", 0xeb, "FabDefGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

float var_a0[0xa]
float* eax_5 = sub_6cd460(&var_a0, eax_2, arg2 * 0xe0 + *sub_5af880(ecx), &var_a0)
int128_t var_50 = *eax_5
int128_t var_40 = *(eax_5 + 0x10)
int64_t var_30 = *(eax_5 + 0x20)
float var_78[0xa]
float* eax_7 = sub_6db9e0(&var_78, eax_2 + 0x3c, &var_50, &var_78)
*arg4 = *eax_7
arg4[1] = *(eax_7 + 0x10)
arg4[2].q = *(eax_7 + 0x20)
CookieCheckFunction(arg4)
return arg4
