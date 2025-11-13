// 函数: sub_67a650
// 地址: 0x67a650
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t eax_2 = arg3[0x57e]

if (eax_2 == 2)
    int32_t* eax_3 = sub_67a300(eax_2, arg4, arg3, arg2)
    CookieCheckFunction(eax_3)
    return eax_3

if (eax_2 != 3)
    sub_63b870(eax_2, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x56b2, 
        "UI2GetScrollExtents")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

float var_18 = arg3[0x5b3]
int32_t xmm0_1 = arg3[0x5b4]
float var_20 = 0f
int32_t var_1c = 0
int32_t var_14 = xmm0_1
var_20.o = var_20.o
float var_30
float xmm1[0x4] = *sub_655430(&var_30, &var_20, arg3 + 0x1620, &var_30)
float xmm2_2 = _mm_shuffle_ps(xmm1, xmm1, 0xaa) f- xmm1
float xmm0_5 = _mm_shuffle_ps(xmm1, xmm1, 0xff) - _mm_shuffle_ps(xmm1, xmm1, 0x55)
var_18 = xmm2_2
float var_14_1 = xmm0_5
float eax_6
int32_t edx_2
eax_6, edx_2 = sub_657fc0(arg3)
float var_28 = eax_6
int32_t var_24 = edx_2
int32_t* eax_8 = sub_67a1c0(&var_28, &var_18, arg3, &var_28, arg2)
CookieCheckFunction(eax_8)
return eax_8
