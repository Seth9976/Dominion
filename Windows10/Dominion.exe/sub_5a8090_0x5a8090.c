// 函数: sub_5a8090
// 地址: 0x5a8090
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t i = 0
int128_t* esi_1 = arg6 + 4
int32_t result = 0
int32_t i_1 = 0
float* ecx = arg3 + 8
int32_t result_1 = 0
float* var_1c = ecx

do
    bool cond:0_1 = 0.100000001f >= *ecx
    float xmm0_1 = ecx[-2]
    float xmm1_1 = ecx[-1]
    float var_30 = xmm0_1
    float var_2c_1 = xmm1_1
    
    if (not(cond:0_1) && not(0.0250000004f > xmm0_1) && not(xmm0_1 > 1.97500002f)
            && not(0.0250000004f > xmm1_1) && not(xmm1_1 > 0.975000024f))
        int32_t eax = sub_5a11b0(i, &var_30, arg5, 0.0199999996f, 0)
        
        if (eax.b != 0)
            i = i_1
            result = result_1
            ecx = var_1c
        else
            i = i_1
            
            if (sub_5a11b0(eax, &var_30, arg5, 0.075000003f, 2) != 0)
                result = result_1
                ecx = var_1c
            else
                *(esi_1 - 4) = i
                int32_t eax_2 = 1
                float xmm0_3 = *arg2 - xmm0_1
                float xmm2_2 = arg2[1] f- xmm1_1
                int128_t xmm2_5 = (xmm2_2 * xmm2_2 + xmm0_3 * xmm0_3) ^ 0x80000000
                *esi_1 = xmm2_5
                
                if (arg4 s> 1)
                    int128_t xmm3_1 = xmm2_5
                    
                    do
                        xmm2_5 = xmm3_1
                        float xmm0_6 = arg2[eax_2 * 2] f- xmm0_1
                        float xmm1_3 = arg2[eax_2 * 2 + 1] f- xmm1_1
                        int128_t xmm1_6 = (xmm1_3 * xmm1_3 + xmm0_6 * xmm0_6) ^ 0x80000000
                        
                        if (not(xmm1_6 f<= xmm3_1))
                            *esi_1 = xmm1_6
                            xmm2_5 = xmm1_6
                        
                        eax_2 += 1
                        xmm3_1 = xmm2_5
                    while (eax_2 s< arg4)
                
                float xmm0_8 = 1f - xmm0_1
                ecx = var_1c
                float xmm1_7 = 0.5f - xmm1_1
                float xmm1_10 = xmm1_7 * xmm1_7 + xmm0_8 * xmm0_8 f+ xmm2_5
                *esi_1 = xmm1_10
                result = result_1 + 1
                i = i_1
                result_1 = result
                *esi_1 = (sub_4ae0b0(*ecx - 0.5f) ^ 0x80000000) * 0.25f + xmm1_10
                esi_1 += 8
    
    i += 1
    ecx = &ecx[3]
    i_1 = i
    var_1c = ecx
while (i s< 0x4000)

return result
