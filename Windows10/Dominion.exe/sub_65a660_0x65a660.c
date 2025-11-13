// 函数: sub_65a660
// 地址: 0x65a660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* eax_3 = *(arg3 + 0x13a4)
int32_t* var_ec = eax_3

if (eax_3 != 0)
    int32_t* eax_4 = sub_64cc90(arg3)
    eax_3 = sub_6dd1e0(eax_4, eax_4, &data_8cae70, data_17774f4, 0x110)
    
    if (eax_3 != 0)
        int32_t ecx = eax_3[2]
        int32_t esi = 0
        
        if (ecx s> 0)
            float eax_5 = *eax_3
            char* ecx_1 = *(arg2 + 0x15e0)
            float var_f8 = eax_5
            char* var_f4_1 = ecx_1
            int32_t* edi_1 = eax_5 i+ 8
            
            while (true)
                char* const eax_6 = &data_801800
                
                if (ecx_1 != 0)
                    eax_6 = ecx_1
                
                char* ecx_2 = *edi_1
                
                while (true)
                    char edx_1 = *ecx_2
                    char temp0_1 = *eax_6
                    bool c_1 = edx_1 u< temp0_1
                    
                    if (edx_1 == temp0_1)
                        if (edx_1 == 0)
                            eax_3 = nullptr
                            break
                        
                        edx_1 = ecx_2[1]
                        char temp1_1 = eax_6[1]
                        c_1 = edx_1 u< temp1_1
                        
                        if (edx_1 == temp1_1)
                            ecx_2 = &ecx_2[2]
                            eax_6 = &eax_6[2]
                            
                            if (edx_1 != 0)
                                continue
                            
                            eax_3 = nullptr
                            break
                    
                    eax_3 = sbb.d(eax_6, eax_6, c_1) | 1
                    break
                
                if (eax_3 == 0)
                    int32_t esi_1 = esi * 2
                    int32_t var_88
                    int32_t* var_104_1 = &var_88
                    
                    if (sub_6a8d00(&var_88, *(var_f8 i+ (esi_1 << 3)), esi_1, edi_1, var_ec).b == 0)
                        break
                    
                    float xmm2 = *(arg2 + 0x16cc)
                    float xmm3 = *(arg2 + 0x16d0)
                    float var_70
                    float var_6c
                    float xmm1_2 = _mm_max_ss(xmm2 / var_70, xmm3 / var_6c)
                    xmm1_2 - 0f
                    float var_f0_2 = xmm1_2
                    void* eax_9
                    eax_9:1.b = (xmm1_2 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm1_2, 0f) ? 1 : 0) << 2 | (xmm1_2 < 0f ? 1 : 0)
                    bool p_1 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_1))
                        var_f0_2 = 1f
                    
                    if (*(arg3 + 0x13fc) != 9)
                        var_f0_2 = 1f
                    
                    float var_7c
                    double xmm0_4 = _mm_cvtps_pd((1f - var_7c) * 0.5f)
                    
                    if (0 f> xmm0_4)
                        _libm_sse2_sqrt_precise(arg5, arg4, var_f8)
                    else
                        xmm0_4 = _mm_sqrt_sd(xmm0_4, xmm0_4)
                    
                    var_f8 = fconvert.s(xmm0_4)
                    double xmm0_9 = _mm_cvtps_pd((var_7c + 1f) * 0.5f)
                    
                    if (0 f> xmm0_9)
                        _libm_sse2_sqrt_precise(arg5, arg4, var_f8)
                    else
                        xmm0_9 = _mm_sqrt_sd(xmm0_9, xmm0_9)
                    
                    float xmm0_10 = fconvert.s(xmm0_9)
                    float var_f4_2 = xmm0_10
                    float var_80
                    
                    if (not(0f <= var_80))
                        var_f4_2 = xmm0_10 ^ (data_8937c0.o).d
                    
                    float xmm3_2 = *(arg3 + 0x1630)
                    float xmm7 = *(arg3 + 0x1624)
                    float xmm5 = *(arg3 + 0x1628)
                    float xmm6 = *(arg3 + 0x162c)
                    float xmm4_1 = var_f8 * 0f
                    int32_t var_c4 = 0
                    float xmm0_13 = xmm5 * xmm4_1
                    float xmm2_3 = xmm7 * xmm4_1
                    float xmm2_5 = xmm3_2 * xmm4_1
                    float xmm3_4 = xmm6 * xmm4_1
                    float var_a4 = xmm3_2 * var_f4_2 - xmm2_3 - xmm0_13 - xmm6 * var_f8
                    float var_ac = xmm5 * var_f4_2 + xmm2_5 + xmm7 * var_f8 - xmm3_4
                    float xmm0_20 = *(arg3 + 0x1630) * var_f8 + xmm6 * var_f4_2
                    float var_b0 = xmm7 * var_f4_2 + xmm2_5 + xmm3_4 - xmm5 * var_f8
                    float var_a8 = xmm0_20 + xmm0_13 - xmm2_3
                    float var_78
                    float var_e0 = var_78 / var_f0_2
                    int32_t var_cc = var_88
                    int32_t var_84
                    int32_t var_c8 = var_84
                    var_b0.o = var_e0.o
                    int128_t var_a0 = var_b0.o
                    int128_t xmm0_30 = data_800248
                    var_e0 = 1f
                    int32_t var_c4_1 = 0x80000000
                    int32_t var_cc_1 = (xmm2 * 0.5f) ^ (data_8937c0.o).d
                    int32_t var_c8_1 = (xmm3 * 0.5f) ^ (data_8937c0.o).d
                    int128_t var_40 = var_e0.o
                    int128_t var_30 = xmm0_30
                    sub_4eb600(&var_b0, &var_40, &var_e0, &var_b0)
                    int32_t eax_12 = memset(&arg6[2], 0, 0xb0)
                    *arg6 = var_e0.o
                    arg6[1] = xmm0_30
                    
                    if (not(10000f f<= *(arg6 + 0x14)))
                        int128_t var_68
                        *(arg6 + 0x54) = var_68
                        uint32_t var_48
                        *(arg6 + 0x78) = var_48
                        uint32_t eax_13
                        eax_13.b = 1
                        *(arg6 + 0xcc) = 0
                        int128_t var_58
                        *(arg6 + 0x64) = var_58
                        CookieCheckFunction(eax_13)
                        return eax_13
                    
                    sub_63b870(eax_12, &data_801800, "bindingInfo.transform.t.x < 10000.0f", 
                        "C:\x\ax2017\Engine\UI2.cpp", 0x2228, "HasSpineSlotBinding")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                ecx_1 = var_f4_1
                esi += 1
                edi_1 = &edi_1[4]
                
                if (esi s>= ecx)
                    break

eax_3.b = 0
CookieCheckFunction(eax_3)
return eax_3
