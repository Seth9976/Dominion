// 函数: sub_5aa760
// 地址: 0x5aa760
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t result = arg5
int32_t i = 0
char* result_1 = result

if (*(arg3 + 0xeffbc) s> 0)
    void* esi_1 = arg3 + 0x8ffdc
    
    do
        uint32_t result_3 = 0
        int32_t eax_4 = *(esi_1 - 4) * 3
        int32_t eax_6 = *esi_1 * 3
        int32_t eax_8 = *(esi_1 - 8) * 3
        
        if (0f f> *(arg3 + (eax_8 << 2) + 8))
            result_3 = 1
        
        uint32_t result_2 = result_3 + 1
        
        if (0f f<= *(arg3 + (eax_4 << 2) + 8))
            result_2 = result_3
        
        result = result_2 + 1
        
        if (0f f<= *(arg3 + (eax_6 << 2) + 8))
            result = result_2
        
        if (result != 0)
            int64_t xmm0_1 = *(arg3 + (eax_8 << 2))
            float xmm5_1 = xmm0_1.d
            float xmm6_1 = xmm0_1:4.d
            int64_t xmm0_2 = *(arg3 + (eax_4 << 2))
            void* eax_12 = data_147abe4
            int64_t xmm0_3 = *(arg3 + (eax_6 << 2))
            float xmm3_1 = xmm0_2.d
            float xmm4_1 = xmm0_3.d
            float xmm2_1 = xmm0_2:4.d
            float var_24_1 = xmm6_1
            float var_1c_1 = xmm2_1
            float var_28 = xmm5_1 * 0.5f
            float var_20_1 = xmm3_1 * 0.5f
            float xmm0_9 = xmm4_1 * 0.5f
            float xmm1_1 = xmm0_3:4.d
            float var_14_1 = xmm1_1
            float var_18_1 = xmm0_9
            float var_10_1 = xmm0_9
            float var_c_1 = xmm1_1
            float var_48 = xmm5_1 * 1024f f+ *(eax_12 + 0x20)
            float xmm4_2 = xmm4_1 * 1024f
            float var_44_1 = xmm6_1 * 1024f f+ *(eax_12 + 0x24)
            float xmm1_2 = xmm1_1 * 1024f
            float var_40_1 = xmm3_1 * 1024f f+ *(eax_12 + 0x20)
            float var_3c_1 = xmm2_1 * 1024f f+ *(eax_12 + 0x24)
            float var_38_1 = xmm4_2 f+ *(eax_12 + 0x20)
            float var_34_1 = xmm1_2 f+ *(eax_12 + 0x24)
            float var_30_1 = xmm4_2 f+ *(eax_12 + 0x20)
            float var_2c_1 = xmm1_2 f+ *(eax_12 + 0x24)
            result = sub_6867a0(eax_12, &var_28, &var_48, arg2, 0, arg4, result_1)
        
        i += 1
        esi_1 += 0xc
    while (i s< *(arg3 + 0xeffbc))

CookieCheckFunction(result)
return result
