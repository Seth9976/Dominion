// 函数: sub_67e040
// 地址: 0x67e040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = sub_67ec20(arg2, arg3 + 0x54)

if (eax_2.b != 0)
    CookieCheckFunction(eax_2)
    return eax_2

float xmm4 = *(arg3 + 0xac)
void* edx_1 = arg3 + 0xa8
float xmm3 = *(arg3 + 0xbc)
float xmm2 = *edx_1

if (xmm4 + xmm3 + xmm2 <= arg4)
    int32_t eax_7 = *(arg3 + 0xa4)
    *arg3 = *(arg3 + 0x54)
    *(arg3 + 0x10) = *(arg3 + 0x64)
    *(arg3 + 0x20) = *(arg3 + 0x74)
    *(arg3 + 0x30) = *(arg3 + 0x84)
    *(arg3 + 0x40) = *(arg3 + 0x94)
    *(arg3 + 0x50) = eax_7
else
    if (sub_67ec20(arg2, arg3) != 0)
        int32_t eax_4 = *(arg3 + 0xb0)
        
        if (eax_4 != 4 && eax_4 != 2 && eax_4 != 3 && eax_4 != 0 && eax_4 != 0x17 && eax_4 != 0x14
                && eax_4 != 0x19)
            sub_63b870(eax_4, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x944, 
                "PropDynamicSet")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    
    float xmm0_5 = arg4 - xmm3
    float var_14_1
    float var_10_2
    
    if (xmm2 + xmm4 > xmm0_5 || *(arg3 + 0x9c) s> 1)
        float eax_5
        float edx_3
        eax_5, edx_3 = sub_67f440(arg3, arg4 f- *(arg3 + 0xb8))
        float eax_6
        float edx_4
        eax_6, edx_4 = sub_67f440(arg3 + 0x54, xmm0_5)
        float xmm0_8 = sub_64c3c0(arg3 + 0xa8, xmm0_5)
        var_10_2 = (eax_6 - eax_5) * xmm0_8 + eax_5
        var_14_1 = (edx_4 - edx_3) * xmm0_8 + edx_3
    else
        var_10_2 = *(arg3 + 0x54)
        var_14_1 = *(arg3 + 0x58)
    
    void var_78
    memset(&var_78, 0, 0x40)
    edx_1 = arg3 + 0xa8
    float var_7c_1 = var_14_1
    xmm3 = arg4
    int32_t var_34_1 = 0xffffffff
    int32_t var_38_1 = 1
    *arg3 = var_10_2.o
    int128_t var_70
    *(arg3 + 0x10) = var_70
    int128_t var_60
    *(arg3 + 0x20) = var_60
    int128_t var_50
    *(arg3 + 0x30) = var_50
    int128_t var_40
    *(arg3 + 0x40) = var_40
    *(arg3 + 0x50) = 0

*(arg3 + 0xb8) = xmm3
*(arg3 + 0x54) = *arg2
*(arg3 + 0x64) = *(arg2 + 0x10)
*(arg3 + 0x74) = *(arg2 + 0x20)
*(arg3 + 0x84) = *(arg2 + 0x30)
*(arg3 + 0x94) = *(arg2 + 0x40)
int32_t eax_8 = arg2[0x14]
*edx_1 = *arg5
*(arg5 + 4)
*arg5
*(arg3 + 0xa4) = eax_8
uint32_t eax_9 = arg5[1].d
*(arg3 + 0xb4) = arg4
*(arg3 + 0xbc) = arg4
*(edx_1 + 8) = eax_9
CookieCheckFunction(eax_9)
return eax_9
