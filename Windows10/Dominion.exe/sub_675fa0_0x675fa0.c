// 函数: sub_675fa0
// 地址: 0x675fa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint32_t result = __security_cookie ^ &__saved_ebp
uint32_t result_1 = result

if (data_c28c58 != 0)
    float xmm0_1 = *(data_147abe8 + 0x2c)
    int128_t var_30
    int128_t* eax_2
    int32_t ecx_1
    eax_2, ecx_1 = sub_675bb0(&var_30)
    int32_t i = 0
    int128_t var_50 = *eax_2
    
    if (data_c28c58 s> 0)
        float xmm1_3 = (var_50.d f+ var_50:8.d) * 0.5f
        float xmm1_6 = (var_50:4.d f+ var_50:0xc.d) * 0.5f
        
        do
            void* eax_3 = sub_665600((&data_c27c58)[i])
            sub_64c550(eax_3 + 0x14, xmm0_1, &var_50)
            float var_80[0x4]
            float* eax_4 = sub_64c550(eax_3 + 0x14, xmm0_1, &var_80)
            float xmm2_4 = xmm1_3 - (eax_4[2] + *eax_4) * 0.5f
            float xmm1_11 = xmm1_6 - (eax_4[3] + eax_4[1]) * 0.5f
            float xmm5_2 = xmm2_4 f+ var_50.d
            float xmm4_2 = xmm1_11 f+ var_50:4.d
            float xmm0_7
            
            if (0f <= xmm5_2)
                xmm0_7 = xmm5_2 + 0.5f
            else
                xmm0_7 = xmm5_2 - 0.5f
            
            float xmm0_9
            
            if (0f <= xmm4_2)
                xmm0_9 = xmm4_2 + 0.5f
            else
                xmm0_9 = xmm4_2 - 0.5f
            
            float xmm2_6 = xmm2_4 f+ var_50:8.d - xmm5_2
            float xmm1_13 = xmm1_11 f+ var_50:0xc.d - xmm4_2
            float xmm7_2 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_9)))
            float xmm2_7
            
            if (0f <= xmm2_6)
                xmm2_7 = xmm2_6 + 0.5f
            else
                xmm2_7 = xmm2_6 - 0.5f
            
            float xmm2_9 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_7)))
            float xmm1_14
            
            if (0f <= xmm1_13)
                xmm1_14 = xmm1_13 + 0.5f
            else
                xmm1_14 = xmm1_13 - 0.5f
            
            float xmm1_16 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_7)))
            float var_6c_1 = xmm7_2
            float var_68_1 = xmm2_9 + xmm1_16
            float var_64_1 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_14))) + xmm7_2
            var_30 = xmm1_16.o
            sub_667c30(&var_30, 0x76, eax_3, &var_30)
            i += 1
        while (i s< data_c28c58)
    
    ecx_1.b = 1
    result = sub_665770(ecx_1)

CookieCheckFunction(result)
return result
