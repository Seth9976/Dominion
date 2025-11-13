// 函数: sub_67e490
// 地址: 0x67e490
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char eax = sub_67eba0(arg2, arg3 + 0x3c)

if (eax != 0)
    return eax

float xmm2 = *(arg3 + 0x8c)
int32_t eax_5

if (xmm2 f+ *(arg3 + 0x7c) f+ *(arg3 + 0x78) <= arg4)
    eax_5 = *(arg3 + 0x74)
    *arg3 = *(arg3 + 0x3c)
    arg3[1] = *(arg3 + 0x4c)
    arg3[2] = *(arg3 + 0x5c)
    arg3[3].q = *(arg3 + 0x6c)
else
    if (sub_67eba0(arg2, arg3) != 0)
        int32_t eax_2 = arg3[8].d
        
        if (eax_2 != 4 && eax_2 != 2 && eax_2 != 3 && eax_2 != 0 && eax_2 != 0x17 && eax_2 != 0x14
                && eax_2 != 0x19)
            sub_63b870(eax_2, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x944, 
                "PropDynamicSet")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    
    int32_t eax_3
    int32_t edx_2
    eax_3, edx_2 = sub_67d310(arg3, arg4)
    void var_4c
    int32_t* eax_4 = sub_67dc00(eax_3, edx_2, eax_3, &var_4c)
    int128_t xmm1_1 = *(eax_4 + 0x10)
    int128_t xmm2_1 = *(eax_4 + 0x20)
    int64_t xmm3 = *(eax_4 + 0x30)
    eax_5 = eax_4[0xe]
    *arg3 = *eax_4
    arg3[1] = xmm1_1
    arg3[2] = xmm2_1
    arg3[3].q = xmm3
    xmm2 = arg4

*(arg3 + 0x38) = eax_5
*(arg3 + 0x88) = xmm2
*(arg3 + 0x3c) = *arg2
*(arg3 + 0x4c) = *(arg2 + 0x10)
*(arg3 + 0x5c) = *(arg2 + 0x20)
*(arg3 + 0x6c) = *(arg2 + 0x30)
int32_t eax_6 = arg2[0xe]
*(arg3 + 0x78) = *arg5
*(arg5 + 4)
*arg5
*(arg3 + 0x74) = eax_6
int32_t eax_7 = arg5[1].d
arg3[8].d = eax_7
*(arg3 + 0x84) = arg4
*(arg3 + 0x8c) = arg4
return eax_7
