// 函数: sub_67aa30
// 地址: 0x67aa30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = *(arg4 + 0xc)

if (eax_2 != 6)
    if (eax_2 == 5)
        *(arg2 + 0x1388) = 0
        data_c23be4 = 0
        CookieCheckFunction(eax_2)
        return eax_2
    
    data_c23be4 = *(arg2 + 0x18c8)
    *(arg2 + 0x1388) = 2
    uint32_t eax_12 = *(arg4 + 0x10)
    *(arg2 + 0x1384) = *(arg4 + 0x14)
    *(arg2 + 0x1380) = eax_12
    CookieCheckFunction(eax_12)
    return eax_12

float xmm0_1 = *(arg4 + 0x10) f- *(arg2 + 0x1380)
int32_t eax_3 = arg3[0x57e]
float xmm0_3 = *(arg4 + 0x14) f- *(arg2 + 0x1384)
float xmm0_4 = arg3[0x5b4]
float var_14
float xmm6_2

if (eax_3 != 2)
    if (eax_3 != 3)
        sub_63b870(eax_3, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x57b5, 
            "UI2TableScroll")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    float eax_8
    float edx
    eax_8, edx = sub_657fc0(arg3)
    xmm6_2 = edx
    var_14 = eax_8
else
    int32_t var_b4_1 = 0
    void var_80
    void var_2c
    void var_1c
    int128_t* eax_5 = sub_656980(&var_80, 0, arg3, &var_80, &var_2c, &var_1c)
    int32_t var_c4_1 = 0
    int128_t var_50 = *eax_5
    int96_t xmm0_6 = (eax_5[1]).12
    int128_t* eax_7 = sub_656980(&var_50, 1, arg3, &var_50, &var_2c, &var_1c)
    int128_t var_a0_1 = *eax_7
    xmm6_2 = (*(eax_7 + 0x18) f- xmm0_6:8.d) * _mm_cvtepi32_ps(zx.o(arg3[0x530]))

float xmm2 = *(arg2 + 0x16cc)
int32_t eax_9 = *(arg4 + 0x10)
*(arg2 + 0x1384) = *(arg4 + 0x14)
*(arg2 + 0x1380) = eax_9
float xmm3_2 = xmm0_4 - xmm2 - (xmm2 + 0f)
float xmm2_2 = _mm_max_ss(xmm2, xmm0_4 / xmm6_2 * xmm3_2) * 0.5f
float xmm0_16 = xmm2_2 + 0f
float xmm5 = 1f f/ *(arg2 + 0x1620)
float xmm1_5 = (xmm2_2 + 1f - xmm0_16) / (xmm3_2 - xmm2_2 - xmm0_16) * (xmm6_2 - xmm0_4 - 0f) + 0f
var_14 = xmm0_1 * xmm1_5 * xmm5
float var_10_2 = xmm0_3 * xmm1_5 * xmm5
uint32_t eax_10 = sub_67a8a0(arg3, &var_14)
CookieCheckFunction(eax_10)
return eax_10
