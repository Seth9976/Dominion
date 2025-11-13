// 函数: sub_67e2e0
// 地址: 0x67e2e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = sub_67eba0(arg2, arg3 + 0x3c)

if (eax_2.b != 0)
    CookieCheckFunction(eax_2)
    return eax_2

float xmm2 = *(arg3 + 0x8c)
int32_t eax_7

if (xmm2 f+ *(arg3 + 0x7c) f+ *(arg3 + 0x78) <= arg4)
    eax_7 = *(arg3 + 0x74)
    *arg3 = *(arg3 + 0x3c)
    *(arg3 + 0x10) = *(arg3 + 0x4c)
    *(arg3 + 0x20) = *(arg3 + 0x5c)
    *(arg3 + 0x30) = *(arg3 + 0x6c)
else
    if (sub_67eba0(arg2, arg3) != 0)
        int32_t eax_4 = *(arg3 + 0x80)
        
        if (eax_4 != 4 && eax_4 != 2 && eax_4 != 3 && eax_4 != 0 && eax_4 != 0x17 && eax_4 != 0x14
                && eax_4 != 0x19)
            sub_63b870(eax_4, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x944, 
                "PropDynamicSet")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    
    void var_54
    void var_10
    int32_t* eax_6 = sub_67db20(&var_54, *sub_67d3c0(arg3, arg4, &var_10))
    int128_t xmm1_1 = *(eax_6 + 0x10)
    int128_t xmm2_2 = *(eax_6 + 0x20)
    int64_t xmm3 = *(eax_6 + 0x30)
    eax_7 = eax_6[0xe]
    *arg3 = *eax_6
    *(arg3 + 0x10) = xmm1_1
    *(arg3 + 0x20) = xmm2_2
    *(arg3 + 0x30) = xmm3
    xmm2 = arg4

*(arg3 + 0x38) = eax_7
*(arg3 + 0x88) = xmm2
*(arg3 + 0x3c) = *arg2
*(arg3 + 0x4c) = *(arg2 + 0x10)
*(arg3 + 0x5c) = *(arg2 + 0x20)
*(arg3 + 0x6c) = *(arg2 + 0x30)
int32_t eax_8 = arg2[0xe]
*(arg3 + 0x78) = *arg5
*(arg5 + 4)
*arg5
*(arg3 + 0x74) = eax_8
uint32_t eax_9 = arg5[1].d
*(arg3 + 0x80) = eax_9
*(arg3 + 0x84) = arg4
*(arg3 + 0x8c) = arg4
CookieCheckFunction(eax_9)
return eax_9
