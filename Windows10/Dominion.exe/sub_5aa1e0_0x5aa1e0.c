// 函数: sub_5aa1e0
// 地址: 0x5aa1e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
int32_t* edi = arg1
int32_t* var_c = edi
int32_t var_20 = data_8d2fcc
void* esi = &edi[4]
float xmm1 = 0.0625f / sub_4ac580(ebp, 16384f)
int32_t* i_1 = 0xeffc0
void* eax_1 = 0xfffffff0 - edi
void* var_10 = esi
int32_t* ebx = esi
int32_t* i

for (i = 0xeffc0; i s< 0xfffc0; )
    if (not(0 f>= ebx[2]))
        int32_t xmm0_1 = *ebx
        
        if (not(0.0250000004f f> xmm0_1) && not(xmm0_1 f> 1.97500002f))
            int32_t xmm1_1 = ebx[1]
            
            if (not(0.0250000004f f> xmm1_1) && not(xmm1_1 f> 0.975000024f))
                int32_t var_3c = xmm0_1
                int32_t var_38_1 = xmm1_1
                
                if (sub_5a11b0(i, &var_3c, arg2, 0.00999999978f, 5) == 0)
                    int32_t edx_1 = 0
                    void* eax_4 = eax_1 + ebx
                    int32_t xmm5_1 = (zx.o(0)).d
                    int32_t xmm6_1 = (zx.o(0)).d
                    int64_t xmm0_2 = *(eax_4 + esi)
                    void* ecx_1 = esi + ((*(i_1 + esi) + 0x3fff0) << 2)
                    int32_t j = *ecx_1
                    
                    while (j != 0xffffffff)
                        int32_t eax_9 = j * 3
                        ecx_1 += 4
                        int64_t xmm0_3 = *(esi + (eax_9 << 2))
                        edx_1 += 1
                        float xmm1_3 = xmm0_3:4.d f- xmm0_2:4.d
                        float xmm2_2 = xmm0_3.d f- xmm0_2.d
                        float xmm0_5 = *(esi + (eax_9 << 2) + 8) - *(eax_4 + esi + 8)
                        j = *ecx_1
                        float xmm0_6 = 1f / (xmm1_3 * xmm1_3 + xmm2_2 * xmm2_2)
                        xmm5_1 = xmm5_1 f+ xmm2_2 * xmm0_5 * xmm0_6
                        xmm6_1 = xmm6_1 f+ xmm1_3 * xmm0_5 * xmm0_6
                    
                    float xmm1_6 = 1f / _mm_cvtepi32_ps(zx.o(edx_1))
                    uint32_t xmm5_2[0x4] = xmm5_1 f* xmm1_6
                    float var_14_1 = xmm5_2
                    
                    if (not(0.200000003f f> sub_4ae0b0(xmm5_2)))
                        int32_t edi_1 = *edi
                        int32_t esi_2 = var_c[1]
                        int32_t eax_11
                        int32_t edx_2
                        eax_11, edx_2 = __allmul(edi_1, esi_2, 0x4c957f2d, 0x5851f42d)
                        double xmm0_12 = _mm_cvtps_pd(var_14_1)
                        int32_t var_30_1 = 0
                        bool c_1 = eax_11 + var_c[2] u< eax_11
                        *var_c = eax_11 + var_c[2]
                        var_c[1] = adc.d(edx_2, var_c[3], c_1)
                        int32_t edi_3 = (edi_1 u>> 0x1b | esi_2 << 5) ^ esi_2 u>> 0xd
                        uint32_t esi_3 = esi_2 u>> 0x1b
                        int32_t entry_ebx
                        _libm_sse2_atan_precise(arg4, arg3, entry_ebx)
                        float xmm1_7 = fconvert.s(xmm0_12)
                        int32_t* ecx_9
                        float xmm0_15
                        ecx_9, xmm0_15 = sub_4ea090(ebp, xmm6_1 f* xmm1_6 / 100f)
                        var_20:3.b = 0xff
                        float xmm4_5 = xmm0_15 * (1f - xmm1_7 * xmm1_7 * 0.200000003f) * ((((
                            edi_3 << ((neg.d(esi_3)).b & 0x1f) | edi_3 u>> esi_3.b) & 0x7fffff)
                            | 0x3f800000) - 1f + 1f) * xmm1
                        uint32_t xmm2_7[0x4] = var_14_1 * xmm4_5
                        
                        if (sub_4ae0b0(xmm2_7) f<= xmm1 + xmm1)
                            float xmm1_23 = *ebx
                            float xmm0_37 = ebx[1]
                            float xmm5_9 = (xmm1_23 - xmm4_5) * 1024f
                            float xmm1_25 = (xmm1_23 + xmm4_5) * 1024f
                            float xmm3_10 = (xmm0_37 f+ xmm2_7) * 1024f
                            float var_5c = xmm5_9
                            float xmm5_10 = xmm5_9 * 0.0009765625f
                            float xmm0_39 = (xmm0_37 f- xmm2_7) * 1024f
                            float var_58_1 = xmm3_10
                            float var_54 = xmm1_25
                            float var_50_1 = xmm0_39
                            float xmm3_11 = xmm3_10 * 0.0009765625f
                            
                            if (not(0.0250000004f > xmm5_10) && not(xmm5_10 > 1.97500002f)
                                    && not(0.0250000004f > xmm3_11) && not(xmm3_11 > 0.975000024f))
                                float xmm1_26 = xmm1_25 * 0.0009765625f
                                float xmm0_40 = xmm0_39 * 0.0009765625f
                                
                                if (not(0.0250000004f > xmm1_26) && not(xmm1_26 > 1.97500002f)
                                        && not(0.0250000004f > xmm0_40)
                                        && not(xmm0_40 > 0.975000024f))
                                    int32_t var_88_2 = data_171ecd8
                                    int32_t* var_90_3 = ecx_9
                                    sub_5a93d0(&var_20, &var_54, &var_5c, ecx_9, &var_20, 
                                        0x3e8ccccd, data_171d8e0)
                            
                            edi = var_c
                        else
                            float xmm0_23 = sub_4d5cb0(sub_4ae0b0(xmm2_7 f/ xmm1))
                            float xmm0_24
                            
                            if (0 f<= xmm0_23)
                                xmm0_24 = xmm0_23 + 0.5f
                            else
                                xmm0_24 = xmm0_23 - 0.5f
                            
                            int32_t j_2 = int.d(xmm0_24)
                            float xmm1_15 = xmm4_5 / _mm_cvtepi32_ps(zx.o(j_2))
                            
                            if (j_2 s<= 1)
                                if (j_2 s> 0)
                                    goto label_5aa4f6
                                
                                edi = var_c
                            else
                                j_2 = 1
                            label_5aa4f6:
                                edi = var_c
                                float xmm0_28 = var_14_1 * xmm1_15
                                int32_t j_1
                                
                                do
                                    float xmm0_30 = sub_5a3580(edi, (zx.o(0)).d, 1f) * xmm1
                                    int32_t* ecx_12
                                    float xmm0_31
                                    ecx_12, xmm0_31 = sub_5a3580(edi, (zx.o(0)).d, 1f)
                                    float xmm1_19 = xmm0_30 f+ *ebx
                                    float xmm0_33 = xmm0_31 * xmm1 f+ ebx[1]
                                    float xmm5_5 = (xmm1_19 - xmm1_15) * 1024f
                                    float xmm1_21 = (xmm1_19 + xmm1_15) * 1024f
                                    float xmm3_6 = (xmm0_33 + xmm0_28) * 1024f
                                    float var_4c = xmm5_5
                                    float xmm5_6 = xmm5_5 * 0.0009765625f
                                    float xmm0_35 = (xmm0_33 - xmm0_28) * 1024f
                                    float var_48_1 = xmm3_6
                                    float var_44 = xmm1_21
                                    float var_40_1 = xmm0_35
                                    float xmm3_7 = xmm3_6 * 0.0009765625f
                                    
                                    if (not(0.0250000004f > xmm5_6) && not(xmm5_6 > 1.97500002f)
                                            && not(0.0250000004f > xmm3_7)
                                            && not(xmm3_7 > 0.975000024f))
                                        float xmm1_22 = xmm1_21 * 0.0009765625f
                                        float xmm0_36 = xmm0_35 * 0.0009765625f
                                        
                                        if (not(0.0250000004f > xmm1_22)
                                                && not(xmm1_22 > 1.97500002f)
                                                && not(0.0250000004f > xmm0_36)
                                                && not(xmm0_36 > 0.975000024f))
                                            int32_t var_88_1 = data_171ecd8
                                            int32_t* var_90_2 = ecx_12
                                            sub_5a93d0(&var_20, &var_44, &var_4c, ecx_12, &var_20, 
                                                0x3e8ccccd, data_171d8e0)
                                    
                                    j_1 = j_2
                                    j_2 -= 1
                                while (j_1 != 1)
                        
                        esi = var_10
                
                i = i_1
    
    i = &i[2]
    ebx = &ebx[6]
    i_1 = i

return i
