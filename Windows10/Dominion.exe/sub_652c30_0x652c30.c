// 函数: sub_652c30
// 地址: 0x652c30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* edx = arg3
char* ecx = arg4
float result = 0f
bool cond:0 = *arg7 s< 0x3e8
void* var_860 = edx
char* var_818 = ecx
float result_1 = 0f
int32_t var_880_1
char const* const ecx_1

if (cond:0)
    int32_t i = 0
    int32_t var_810[0x100]
    int32_t var_410[0x101]
    
    if (*arg7 s> 0)
        float xmm6_1 = arg10
        int32_t ebx_1 = 0
        
        do
            int32_t* ecx_2 = arg7[2]
            int32_t eax_5 = *(ecx_2 + ebx_1)
            
            if (eax_5 == 0x76)
                int32_t* eax_9 = *(ecx_2 + ebx_1 + 8)
                int32_t var_82c_1 = 0
                int32_t var_824_1 = 0xffffffff
                float xmm1_1 = *(arg6 + 0x3c)
                float xmm3_1 = *(arg6 + 0x78)
                float xmm0_2 = xmm1_1 f+ *(arg6 + 0xb4)
                float xmm2_2 = xmm3_1 f+ *(arg6 + 0xf0)
                float xmm4_4 = (*eax_9 - xmm1_1) * xmm6_1 + xmm1_1
                float xmm5_4 = (eax_9[1] f- xmm3_1) * xmm6_1 + xmm3_1
                float xmm3_4 = (eax_9[3] f- xmm2_2) * xmm6_1
                float xmm1_5 = (eax_9[2] f- xmm0_2) * xmm6_1 + xmm0_2
                int64_t var_854
                __builtin_memset(&var_854, 0, 0x2c)
                *(arg6 + 0x3c) = xmm4_4.o
                int64_t var_84c
                *(arg6 + 0x4c) = var_84c:4.o
                int64_t var_83c
                *(arg6 + 0x5c) = var_83c:4.o
                *(arg6 + 0x6c) = 1.q
                int64_t var_854_1
                __builtin_memset(&var_854_1, 0, 0x2c)
                int32_t var_824_2 = 0xffffffff
                *(arg6 + 0x78) = xmm5_4.o
                *(arg6 + 0x74) = 0
                int64_t var_84c_1
                *(arg6 + 0x88) = var_84c_1:4.o
                int64_t var_83c_1
                *(arg6 + 0x98) = var_83c_1:4.o
                *(arg6 + 0xa8) = 1.q
                int64_t var_854_2
                __builtin_memset(&var_854_2, 0, 0x2c)
                int32_t var_824_3 = 0xffffffff
                *(arg6 + 0xb4) = (xmm1_5 - xmm4_4).o
                *(arg6 + 0xb0) = 0
                int64_t var_84c_2
                *(arg6 + 0xc4) = var_84c_2:4.o
                int64_t var_83c_2
                *(arg6 + 0xd4) = var_83c_2:4.o
                *(arg6 + 0xe4) = 1.q
                int64_t var_854_3
                __builtin_memset(&var_854_3, 0, 0x2c)
                int32_t var_824_4 = 0xffffffff
                *(arg6 + 0xf0) = (xmm3_4 + xmm2_2 - xmm5_4).o
                *(arg6 + 0xec) = 0
                int64_t var_84c_3
                *(arg6 + 0x100) = var_84c_3:4.o
                int64_t var_83c_3
                *(arg6 + 0x110) = var_83c_3:4.o
                *(arg6 + 0x120) = 1.q
                *(arg6 + 0x128) = 0
            else
                result = eax_5 - 0x80
                
                if (eax_5 == 0x80)
                    char const* const var_87c_1 = "UI2MergeAttribMapFractional"
                    var_880_1 = 0x15dc
                    goto label_653070
                
                sub_650190(&result_1, i, arg7, edx, arg2, arg8, &result_1, &var_810, &var_410, 
                    var_818, arg5, edx + 0xc14, arg9, 0)
                int16_t top = top + 1
                xmm6_1 = arg10
                edx = var_860
            
            i += 1
            ebx_1 += 0x10
        while (i s< *arg7)
        
        result = result_1
        ecx = var_818
    
    int32_t esi_1 = 0
    
    if (result s<= 0)
    label_653051:
        CookieCheckFunction(result)
        return result
    
    while (true)
        float xmm0_19 = var_410[esi_1]
        xmm0_19 - 1f
        result:1.b = (xmm0_19 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_19, 1f) ? 1 : 0) << 2
            | (xmm0_19 < 1f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            char const* const var_87c_2 = "UI2MergeAttribMapFractional"
            var_880_1 = 0x15ec
            break
        
        result = sub_6530a0(result, arg2, var_860, ecx, arg5, var_810[esi_1], arg8, nullptr, 0)
        ecx = var_818
        esi_1 += 1
        
        if (esi_1 s>= result_1)
            goto label_653051
    
label_653070:
    ecx_1 = "Halt"
else
    char const* const var_87c = "UI2MergeAttribMapFractional"
    var_880_1 = 0x15c5
    ecx_1 = "attribMap.attributeCount < 1000"

sub_63b870(result, &data_801800, ecx_1, "C:\x\ax2017\Engine\UI2.cpp", var_880_1, 
    "UI2MergeAttribMapFractional")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
