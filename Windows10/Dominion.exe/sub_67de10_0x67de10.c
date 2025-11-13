// 函数: sub_67de10
// 地址: 0x67de10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char eax = sub_67eba0(arg2, arg3 + 0x3c)

if (eax != 0)
    return eax

float xmm4 = *(arg3 + 0x7c)
void* edx_1 = arg3 + 0x78
float xmm3 = *(arg3 + 0x8c)
float xmm1 = *edx_1

if (xmm4 + xmm3 + xmm1 <= arg4)
    int32_t eax_3 = *(arg3 + 0x74)
    *arg3 = *(arg3 + 0x3c)
    *(arg3 + 0x10) = *(arg3 + 0x4c)
    *(arg3 + 0x20) = *(arg3 + 0x5c)
    *(arg3 + 0x30) = *(arg3 + 0x6c)
    *(arg3 + 0x38) = eax_3
else
    if (sub_67eba0(arg2, arg3) != 0)
        int32_t eax_2 = *(arg3 + 0x80)
        
        if (eax_2 != 4 && eax_2 != 2 && eax_2 != 3 && eax_2 != 0 && eax_2 != 0x17 && eax_2 != 0x14
                && eax_2 != 0x19)
            sub_63b870(eax_2, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x944, 
                "PropDynamicSet")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    
    float xmm0_5 = arg4 - xmm3
    float xmm3_1
    
    if (xmm1 + xmm4 > xmm0_5 || *(arg3 + 0x6c) s> 1)
        float xmm0_6 = sub_67f6b0(arg3, arg4 f- *(arg3 + 0x88))
        float xmm0_7 = sub_67f6b0(arg3 + 0x3c, xmm0_5)
        xmm3_1 = sub_64c3c0(arg3 + 0x78, xmm0_5) * (xmm0_7 - xmm0_6) + xmm0_6
    else
        xmm3_1 = *(arg3 + 0x3c)
    
    edx_1 = arg3 + 0x78
    xmm3 = arg4
    int64_t var_54
    __builtin_memset(&var_54, 0, 0x2c)
    int32_t var_24_1 = 0xffffffff
    *arg3 = xmm3_1.o
    int64_t var_4c
    *(arg3 + 0x10) = var_4c:4.o
    int64_t var_3c
    *(arg3 + 0x20) = var_3c:4.o
    *(arg3 + 0x30) = 1.q
    *(arg3 + 0x38) = 0

*(arg3 + 0x88) = xmm3
*(arg3 + 0x3c) = *arg2
*(arg3 + 0x4c) = *(arg2 + 0x10)
*(arg3 + 0x5c) = *(arg2 + 0x20)
*(arg3 + 0x6c) = *(arg2 + 0x30)
int32_t eax_4 = arg2[0xe]
*edx_1 = *arg5
*(arg5 + 4)
*arg5
*(arg3 + 0x74) = eax_4
int32_t eax_5 = arg5[1].d
*(arg3 + 0x84) = arg4
*(arg3 + 0x8c) = arg4
*(edx_1 + 8) = eax_5
return eax_5
