// 函数: sub_675c90
// 地址: 0x675c90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint32_t result = __security_cookie ^ &__saved_ebp
uint32_t result_1 = result
int32_t ecx = data_c28c58

if (ecx s> 1)
    int32_t esi_1 = 0
    float xmm0_1 = *(data_147abe8 + 0x2c)
    int128_t xmm0_2 = data_7ff530
    int128_t var_80_1
    __builtin_memset(&var_80_1, 0, 0x20)
    int128_t var_40 = xmm0_2
    int32_t var_90_1 = xmm0_2.d
    float var_54_1
    float var_50_1
    float xmm2_2
    float xmm3_1
    float xmm4_1
    float xmm5_1
    int128_t var_70
    
    if (ecx s<= 0)
        xmm5_1 = var_70:4.d
        xmm4_1 = var_70.d
        xmm3_1 = var_70:0xc.d
        xmm2_2 = var_70:8.d
        var_54_1 = xmm5_1
        var_50_1 = xmm4_1
    else
        float var_5c_1 = var_70:0xc.d
        float var_58_1 = var_70:8.d
        var_54_1 = var_70:4.d
        var_50_1 = var_70.d
        
        do
            int128_t var_30
            float* eax_3 = sub_64c550(sub_665600((&data_c27c58)[esi_1]) + 0x14, xmm0_1, &var_30)
            
            if (esi_1 != 0)
                xmm2_2 = var_58_1
                xmm4_1 = var_50_1
                
                if (not(xmm2_2 < xmm4_1))
                    xmm3_1 = var_5c_1
                    xmm5_1 = var_54_1
                
                if (xmm2_2 < xmm4_1 || xmm3_1 < xmm5_1)
                    sub_63b870(eax_3, &data_801800, "RectIsNormalized(r0)", 
                        "C:\x\ax2017\Engine\Rect.cpp", 0xdb, "RectUnion")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                float xmm1_1 = var_30.d
                
                if (not(xmm1_1 > xmm4_1))
                    xmm4_1 = xmm1_1
                
                float xmm0_8 = var_30:8.d
                var_50_1 = xmm4_1
                
                if (xmm2_2 <= xmm0_8)
                    xmm2_2 = xmm0_8
                    var_58_1 = xmm0_8
                else
                    var_58_1 = xmm2_2
                
                float xmm0_9 = var_30:4.d
                
                if (not(xmm0_9 > xmm5_1))
                    xmm5_1 = xmm0_9
                
                float xmm0_10 = var_30:0xc.d
                var_54_1 = xmm5_1
                
                if (xmm3_1 <= xmm0_10)
                    xmm3_1 = xmm0_10
                    var_5c_1 = xmm0_10
                else
                    var_5c_1 = xmm3_1
                
                int32_t xmm0_11 = var_40.d
                
                if (esi_1 != 1)
                    if (not(xmm0_11 f<= xmm1_1))
                        var_90_1 = var_80_1.d
                        int128_t xmm0_15 = var_30
                        var_80_1 = xmm0_15
                        var_40 = xmm0_15
                    else if (not(var_90_1 f<= xmm1_1))
                        var_90_1 = var_30.d
                else if (xmm0_11 f<= xmm1_1)
                    var_90_1 = var_30.d
                else
                    var_90_1 = var_80_1.d
                    int128_t xmm0_13 = var_30
                    var_80_1 = xmm0_13
                    var_40 = xmm0_13
            else
                int128_t xmm0_7 = var_30
                xmm3_1 = xmm0_7:0xc.d
                xmm2_2 = xmm0_7:8.d
                xmm5_1 = xmm0_7:4.d
                xmm4_1 = xmm0_7.d
                var_80_1 = xmm0_7
                var_40 = xmm0_7
                var_5c_1 = xmm3_1
                var_58_1 = xmm2_2
                var_54_1 = xmm5_1
                var_50_1 = xmm4_1
            
            ecx = data_c28c58
            esi_1 += 1
        while (esi_1 s< ecx)
    float xmm1_3 = var_90_1 f- var_40:8.d
    int32_t i = 0
    float xmm2_5 =
        (xmm2_2 - xmm4_1 - _mm_cvtepi32_ps(zx.o(ecx - 1)) * xmm1_3) / _mm_cvtepi32_ps(zx.o(ecx))
    
    if (ecx s> 0)
        do
            void* eax_5 = sub_665600((&data_c27c58)[i])
            float xmm3_4 = _mm_cvtepi32_ps(zx.o(i))
            float xmm2_8 = (xmm2_5 + xmm1_3) * xmm3_4 + var_50_1
            float xmm3_6 = xmm3_4 * 0f + var_54_1
            var_80_1.d = xmm2_8
            var_80_1:4.d = xmm3_6
            var_80_1:8.d = xmm2_8 + xmm2_5 + 0f
            var_80_1:0xc.d = xmm3_6 + 0f + xmm3_1 - xmm5_1
            var_40 = var_80_1
            sub_667c30(eax_5, 0x76, eax_5, &var_40)
            i += 1
        while (i s< data_c28c58)
    
    ecx.b = 1
    result = sub_665770(ecx)

CookieCheckFunction(result)
return result
