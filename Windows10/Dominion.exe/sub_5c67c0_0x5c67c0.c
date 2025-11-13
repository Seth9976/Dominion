// 函数: sub_5c67c0
// 地址: 0x5c67c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(arg6)
float xmm0[0x4] = arg7
int32_t var_68 = (eax_4 + (edx & 3)) & 0xfffffffc
int32_t eax_8
int32_t edx_2
edx_2:eax_8 = sx.q(arg4)
int32_t esi = arg5
int32_t ecx_1 = ((edx_2 & 3) + eax_8) & 0xfffffffc
int32_t eax_11
int32_t edx_4
edx_4:eax_11 = sx.q(arg4 - ecx_1)
int32_t ecx_2 = ecx_1 + ((eax_11 + (edx_4 & 3)) s>> 2 << 2)
int32_t eax_16
int32_t edx_6
edx_6:eax_16 = sx.q(arg4 - ecx_2)
int32_t edi_2 = esi & 0xfffffff8
int32_t var_5c = edi_2
int32_t edx_8 = ecx_2 + ((eax_16 + (edx_6 & 3)) s>> 2 << 2)
int32_t result = 0
int32_t var_80 = edx_8
int32_t result_2 = 0

if (ecx_1 s> 0)
    float (* edx_9)[0x4] = arg2
    int32_t i = var_68
    float (* var_60_1)[0x4] = edx_9
    
    do
        if (i s> 0)
            int32_t edi_3 = 2
            float xmm5_2[0x4] = _mm_shuffle_ps(xmm0, xmm0, 0)
            float var_d0_1[0x4] = xmm5_2
            int32_t var_70_1 = 2
            float (* var_58_1)[0x4] = arg3
            
            do
                int128_t* ecx_5 = edx_9
                float xmm3_1[0x4] = zx.o(0)
                float xmm0_1[0x4] = zx.o(0)
                float var_120_1[0x4]
                __builtin_memset(&var_120_1, 0, 0x40)
                float xmm1_1[0x4] = zx.o(0)
                float xmm2_1[0x4] = zx.o(0)
                int32_t eax_22 = arg1[1]
                float xmm6_1[0x4] = zx.o(0)
                float xmm7_1[0x4] = zx.o(0)
                int32_t edx_11 = *arg1
                float xmm4_1[0x4] = zx.o(0)
                float var_150_1[0x4]
                __builtin_memset(&var_150_1, 0, 0x20)
                int32_t edi_6 = (edi_3 - 2) * eax_22 + result_2
                float var_c0_1[0x4]
                __builtin_memset(&var_c0_1, 0, 0x20)
                int32_t esi_3 = (var_70_1 - 1) * eax_22 + result_2
                int32_t esi_6 = eax_22 * var_70_1 + result_2
                int32_t var_64_2 = (var_70_1 + 1) * eax_22 + result_2
                int128_t* edi_10 = var_58_1
                esi = arg5
                
                if (var_5c s> 0)
                    int32_t j_2 = ((var_5c - 1) u>> 3) + 1
                    esi = arg5
                    float var_110_1[0x4]
                    float var_100_1[0x4]
                    float var_f0_1[0x4]
                    int32_t j
                    
                    do
                        float xmm4_2[0x4] = *ecx_5
                        uint32_t xmm0_2[0x4] = *edi_10
                        float xmm5_3[0x4] = ecx_5[1]
                        uint32_t xmm1_2[0x4] = _mm_shuffle_epi32(xmm0_2, 0)
                        uint32_t var_50_1[0x4] = xmm1_2
                        float xmm6_3[0x4] = _mm_mul_ps(xmm4_2, xmm1_2)
                        uint32_t xmm2_2[0x4] = _mm_shuffle_epi32(xmm0_2, 0x55)
                        float xmm1_4[0x4] = _mm_mul_ps(xmm4_2, xmm2_2)
                        uint32_t xmm3_2[0x4] = _mm_shuffle_epi32(xmm0_2, 0xaa)
                        uint32_t xmm0_3[0x4] = _mm_shuffle_epi32(xmm0_2, 0xff)
                        uint32_t var_20_1[0x4] = xmm0_3
                        uint32_t var_40_1[0x4] = xmm2_2
                        float xmm1_6[0x4] = _mm_mul_ps(xmm4_2, xmm3_2)
                        float xmm4_3[0x4] = _mm_mul_ps(xmm4_2, xmm0_3)
                        uint32_t xmm0_4[0x4] = edi_10[1]
                        uint32_t xmm1_7[0x4] = _mm_shuffle_epi32(xmm0_4, 0)
                        uint32_t var_50_2[0x4] = xmm1_7
                        uint32_t xmm2_3[0x4] = _mm_shuffle_epi32(xmm0_4, 0x55)
                        float xmm4_5[0x4] = _mm_mul_ps(xmm5_3, xmm1_7)
                        float xmm1_9[0x4] = _mm_mul_ps(xmm5_3, xmm2_3)
                        uint32_t var_30_1[0x4] = xmm3_2
                        uint32_t xmm3_3[0x4] = _mm_shuffle_epi32(xmm0_4, 0xaa)
                        uint32_t xmm0_5[0x4] = _mm_shuffle_epi32(xmm0_4, 0xff)
                        uint32_t var_20_2[0x4] = xmm0_5
                        float xmm1_11[0x4] = _mm_mul_ps(xmm5_3, xmm3_3)
                        float xmm5_4[0x4] = _mm_mul_ps(xmm5_3, xmm0_5)
                        uint32_t xmm0_6[0x4] = edi_10[2]
                        float xmm5_5[0x4] = ecx_5[2]
                        uint32_t xmm1_12[0x4] = _mm_shuffle_epi32(xmm0_6, 0)
                        uint32_t var_50_3[0x4] = xmm1_12
                        uint32_t var_40_2[0x4] = xmm2_3
                        float xmm4_7[0x4] = _mm_mul_ps(xmm5_5, xmm1_12)
                        float xmm2_4[0x4] = _mm_shuffle_epi32(xmm0_6, 0x55)
                        float xmm1_14[0x4] = _mm_mul_ps(xmm5_5, xmm2_4)
                        uint32_t var_30_2[0x4] = xmm3_3
                        float xmm3_4[0x4] = _mm_shuffle_epi32(xmm0_6, 0xaa)
                        uint32_t xmm0_7[0x4] = _mm_shuffle_epi32(xmm0_6, 0xff)
                        float xmm1_16[0x4] = _mm_mul_ps(xmm5_5, xmm3_4)
                        float xmm5_6[0x4] = _mm_mul_ps(xmm5_5, xmm0_7)
                        uint32_t var_20_3[0x4] = xmm0_7
                        uint32_t xmm0_8[0x4] = edi_10[3]
                        float xmm5_7[0x4] = ecx_5[3]
                        uint32_t xmm1_17[0x4] = _mm_shuffle_epi32(xmm0_8, 0)
                        uint32_t var_50_4[0x4] = xmm1_17
                        float xmm4_9[0x4] = _mm_mul_ps(xmm5_7, xmm1_17)
                        float var_40_3[0x4] = xmm2_4
                        uint32_t xmm2_5[0x4] = _mm_shuffle_epi32(xmm0_8, 0x55)
                        float xmm1_19[0x4] = _mm_mul_ps(xmm5_7, xmm2_5)
                        float var_30_3[0x4] = xmm3_4
                        uint32_t xmm3_5[0x4] = _mm_shuffle_epi32(xmm0_8, 0xaa)
                        uint32_t xmm0_9[0x4] = _mm_shuffle_epi32(xmm0_8, 0xff)
                        uint32_t var_40_4[0x4] = xmm2_5
                        uint32_t var_30_4[0x4] = xmm3_5
                        uint32_t var_20_4[0x4] = xmm0_9
                        float xmm2_6[0x4] = ecx_5[4]
                        float xmm5_8[0x4] = _mm_mul_ps(xmm5_7, xmm0_9)
                        uint32_t xmm0_10[0x4] = edi_10[4]
                        uint32_t xmm4_10[0x4] = _mm_shuffle_epi32(xmm0_10, 0xaa)
                        float xmm1_21[0x4] = _mm_mul_ps(xmm5_7, xmm3_5)
                        uint32_t xmm3_6[0x4] = _mm_shuffle_epi32(xmm0_10, 0x55)
                        uint32_t var_40_5[0x4] = xmm3_6
                        float xmm3_7[0x4] = _mm_mul_ps(xmm3_6, xmm2_6)
                        uint32_t xmm1_22[0x4] = _mm_shuffle_epi32(xmm0_10, 0)
                        uint32_t xmm0_11[0x4] = _mm_shuffle_epi32(xmm0_10, 0xff)
                        uint32_t var_20_5[0x4] = xmm0_11
                        float xmm0_12[0x4] = _mm_mul_ps(xmm0_11, xmm2_6)
                        uint32_t var_30_5[0x4] = xmm4_10
                        float xmm4_11[0x4] = _mm_mul_ps(xmm4_10, xmm2_6)
                        float xmm2_7[0x4] = ecx_5[5]
                        uint32_t xmm0_13[0x4] = edi_10[5]
                        float xmm6_5[0x4] = _mm_mul_ps(xmm2_6, xmm1_22)
                        uint32_t xmm3_8[0x4] = _mm_shuffle_epi32(xmm0_13, 0x55)
                        uint32_t xmm4_12[0x4] = _mm_shuffle_epi32(xmm0_13, 0xaa)
                        uint32_t var_50_5[0x4] = xmm1_22
                        uint32_t xmm1_23[0x4] = _mm_shuffle_epi32(xmm0_13, 0)
                        uint32_t xmm0_14[0x4] = _mm_shuffle_epi32(xmm0_13, 0xff)
                        uint32_t var_20_6[0x4] = xmm0_14
                        float xmm0_15[0x4] = _mm_mul_ps(xmm0_14, xmm2_7)
                        uint32_t var_40_6[0x4] = xmm3_8
                        uint32_t var_30_6[0x4] = xmm4_12
                        float xmm3_9[0x4] = _mm_mul_ps(xmm3_8, xmm2_7)
                        uint32_t xmm0_16[0x4] = edi_10[6]
                        float xmm4_13[0x4] = _mm_mul_ps(xmm4_12, xmm2_7)
                        uint32_t xmm2_8[0x4] = _mm_shuffle_epi32(xmm0_16, 0x55)
                        uint32_t var_50_6[0x4] = xmm1_23
                        float xmm3_10[0x4] = _mm_shuffle_epi32(xmm0_16, 0xaa)
                        uint32_t xmm4_14[0x4] = _mm_shuffle_epi32(xmm0_16, 0xff)
                        float xmm7_3[0x4] = _mm_mul_ps(xmm2_7, xmm1_23)
                        float xmm1_24[0x4] = _mm_shuffle_epi32(xmm0_16, 0)
                        float xmm0_18[0x4] = __addps_xmmps_memps(xmm6_3, var_f0_1)
                        float xmm5_9[0x4] = ecx_5[6]
                        uint32_t var_40_7[0x4] = xmm2_8
                        float xmm2_9[0x4] = _mm_mul_ps(xmm2_8, xmm5_9)
                        float xmm0_19[0x4] = __addps_xmmps_memps(xmm0_18, xmm4_7)
                        float var_30_7[0x4] = xmm3_10
                        float xmm3_11[0x4] = _mm_mul_ps(xmm3_10, xmm5_9)
                        float xmm0_20[0x4] = _mm_add_ps(xmm0_19, xmm6_5)
                        uint32_t var_20_7[0x4] = xmm4_14
                        float xmm4_15[0x4] = _mm_mul_ps(xmm4_14, xmm5_9)
                        float var_50_7[0x4] = xmm1_24
                        var_f0_1 = _mm_add_ps(xmm0_20, _mm_mul_ps(xmm5_9, xmm1_24))
                        var_100_1 = _mm_add_ps(
                            __addps_xmmps_memps(
                                __addps_xmmps_memps(__addps_xmmps_memps(xmm1_4, var_100_1), 
                                    xmm1_14), 
                                xmm3_7), 
                            xmm2_9)
                        var_110_1 = _mm_add_ps(
                            __addps_xmmps_memps(
                                __addps_xmmps_memps(__addps_xmmps_memps(xmm1_6, var_110_1), 
                                    xmm1_16), 
                                xmm4_11), 
                            xmm3_11)
                        float xmm0_37[0x4] = _mm_add_ps(
                            __addps_xmmps_memps(
                                __addps_xmmps_memps(__addps_xmmps_memps(xmm4_3, var_120_1), 
                                    xmm5_6), 
                                xmm0_12), 
                            xmm4_15)
                        float xmm5_10[0x4] = ecx_5[7]
                        ecx_5 -= 0xffffff80
                        float xmm6_9[0x4] = __addps_xmmps_memps(xmm4_5, var_150_1)
                        var_120_1 = xmm0_37
                        uint32_t xmm0_38[0x4] = edi_10[7]
                        edi_10 -= 0xffffff80
                        j = j_2
                        j_2 -= 1
                        uint32_t xmm2_10[0x4] = _mm_shuffle_epi32(xmm0_38, 0x55)
                        float xmm6_10[0x4] = __addps_xmmps_memps(xmm6_9, xmm4_9)
                        float xmm3_12[0x4] = _mm_shuffle_epi32(xmm0_38, 0xaa)
                        float xmm4_16[0x4] = _mm_shuffle_epi32(xmm0_38, 0xff)
                        float xmm0_40[0x4] = _mm_mul_ps(xmm5_10, _mm_shuffle_epi32(xmm0_38, 0))
                        float xmm6_11[0x4] = _mm_add_ps(xmm6_10, xmm7_3)
                        float xmm3_13[0x4] = _mm_mul_ps(xmm3_12, xmm5_10)
                        float xmm2_11[0x4] = _mm_mul_ps(xmm2_10, xmm5_10)
                        xmm6_1 = _mm_add_ps(xmm6_11, xmm0_40)
                        float xmm4_17[0x4] = _mm_mul_ps(xmm4_16, xmm5_10)
                        float var_140_1[0x4]
                        float xmm7_5[0x4] = __addps_xmmps_memps(xmm1_9, var_140_1)
                        float var_b0_1[0x4]
                        float xmm0_42[0x4] = __addps_xmmps_memps(xmm1_11, var_b0_1)
                        var_150_1 = xmm6_1
                        float xmm7_6[0x4] = __addps_xmmps_memps(xmm7_5, xmm1_19)
                        float xmm0_43[0x4] = __addps_xmmps_memps(xmm0_42, xmm1_21)
                        float xmm7_7[0x4] = __addps_xmmps_memps(xmm7_6, xmm3_9)
                        float xmm0_44[0x4] = __addps_xmmps_memps(xmm0_43, xmm4_13)
                        xmm7_1 = _mm_add_ps(xmm7_7, xmm2_11)
                        xmm3_1 = _mm_add_ps(xmm3_13, xmm0_44)
                        var_140_1 = xmm7_1
                        var_b0_1 = xmm3_1
                        xmm4_1 = _mm_add_ps(xmm4_17, 
                            __addps_xmmps_memps(
                                __addps_xmmps_memps(__addps_xmmps_memps(xmm5_4, var_c0_1), xmm5_8), 
                                xmm0_15))
                        var_c0_1 = xmm4_1
                    while (j != 1)
                    xmm5_2 = var_d0_1
                    xmm0_1 = var_f0_1
                    xmm1_1 = var_100_1
                    xmm2_1 = var_110_1
                
                float xmm3_16[0x4] = _mm_add_ps(xmm3_1, xmm2_1)
                float xmm6_12[0x4] = _mm_add_ps(xmm6_1, xmm0_1)
                float xmm7_8[0x4] = _mm_add_ps(xmm7_1, xmm1_1)
                float xmm4_18[0x4] = __addps_xmmps_memps(xmm4_1, var_120_1)
                float var_b0_2[0x4] = xmm3_16
                float var_c0_2[0x4] = xmm4_18
                
                if (var_5c s< esi)
                    uint32_t (* edi_11)[0x4] = edi_10 - ecx_5
                    int32_t j_3 = esi - var_5c
                    int32_t j_1
                    
                    do
                        uint32_t xmm0_49[0x4] = *(edi_11 + ecx_5)
                        float xmm5_11[0x4] = *ecx_5
                        ecx_5 = &ecx_5[1]
                        float xmm3_14[0x4] = _mm_shuffle_epi32(xmm0_49, 0xaa)
                        float xmm4_19[0x4] = _mm_shuffle_epi32(xmm0_49, 0xff)
                        float xmm3_15[0x4] = _mm_mul_ps(xmm3_14, xmm5_11)
                        float xmm4_20[0x4] = _mm_mul_ps(xmm4_19, xmm5_11)
                        uint32_t xmm2_12[0x4] = _mm_shuffle_epi32(xmm0_49, 0x55)
                        float xmm0_51[0x4] = _mm_mul_ps(xmm5_11, _mm_shuffle_epi32(xmm0_49, 0))
                        float xmm2_13[0x4] = _mm_mul_ps(xmm2_12, xmm5_11)
                        xmm3_16 = __addps_xmmps_memps(xmm3_15, var_b0_2)
                        xmm6_12 = _mm_add_ps(xmm6_12, xmm0_51)
                        xmm4_18 = __addps_xmmps_memps(xmm4_20, var_c0_2)
                        xmm7_8 = _mm_add_ps(xmm7_8, xmm2_13)
                        var_b0_2 = xmm3_16
                        var_c0_2 = xmm4_18
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
                    xmm5_2 = var_d0_1
                
                float xmm2_15[0x4] = _mm_mul_ps(xmm5_2, xmm7_8)
                float xmm0_52[0x4] = *(edx_11 + (esi_3 << 2))
                edi_3 = var_70_1 + 4
                float xmm1_28[0x4] = _mm_mul_ps(xmm5_2, xmm6_12)
                var_70_1 = edi_3
                float xmm2_16[0x4] = _mm_add_ps(xmm2_15, xmm0_52)
                *(edx_11 + (edi_6 << 2)) = _mm_add_ps(xmm1_28, *(edx_11 + (edi_6 << 2)))
                *(edx_11 + (esi_3 << 2)) = xmm2_16
                float xmm1_31[0x4] = _mm_mul_ps(xmm5_2, xmm3_16)
                float xmm2_19[0x4] =
                    _mm_add_ps(_mm_mul_ps(xmm5_2, xmm4_18), *(edx_11 + (var_64_2 << 2)))
                *(edx_11 + (esi_6 << 2)) = _mm_add_ps(xmm1_31, *(edx_11 + (esi_6 << 2)))
                var_58_1 = &var_58_1[esi]
                *(edx_11 + (var_64_2 << 2)) = xmm2_19
                i = var_68
                edx_9 = var_60_1
            while (edi_3 - 2 s< i)
            
            xmm0 = arg7
            edi_2 = var_5c
            result = result_2
        
        int32_t i_7 = i
        
        if (i s< arg6)
            float xmm4_22[0x4] = _mm_shuffle_ps(xmm0, xmm0, 0)
            float (* var_70_2)[0x4] = &(*arg3)[i * esi]
            int32_t i_14
            
            do
                float (* eax_34)[0x4] = edx_9
                float xmm3_17[0x4] = zx.o(0)
                int32_t ecx_10 = *arg1
                int32_t edx_14 = arg1[1] * i_7 + result_2
                float (* ecx_11)[0x4] = var_70_2
                
                if (edi_2 s> 0)
                    int32_t i_9 = ((edi_2 - 1) u>> 3) + 1
                    int32_t i_1
                    
                    do
                        float xmm0_56[0x4] = *ecx_11
                        float xmm1_33[0x4] = eax_34[1]
                        float xmm2_21[0x4] =
                            _mm_mul_ps(*eax_34, _mm_shuffle_ps(xmm0_56, xmm0_56, 0))
                        float xmm0_58[0x4] = (*ecx_11)[1]
                        float xmm1_34[0x4] =
                            _mm_mul_ps(xmm1_33, _mm_shuffle_ps(xmm0_58, xmm0_58, 0))
                        float xmm0_60[0x4] = (*ecx_11)[2]
                        float xmm3_18[0x4] = _mm_add_ps(xmm3_17, xmm2_21)
                        float xmm0_61[0x4] = _mm_shuffle_ps(xmm0_60, xmm0_60, 0)
                        float xmm3_19[0x4] = _mm_add_ps(xmm3_18, xmm1_34)
                        float xmm1_36[0x4] = _mm_mul_ps(eax_34[2], xmm0_61)
                        float xmm0_62[0x4] = (*ecx_11)[3]
                        float xmm0_63[0x4] = _mm_shuffle_ps(xmm0_62, xmm0_62, 0)
                        float xmm3_20[0x4] = _mm_add_ps(xmm3_19, xmm1_36)
                        float xmm1_38[0x4] = _mm_mul_ps(eax_34[3], xmm0_63)
                        float xmm0_64[0x4] = ecx_11[1][0]
                        float xmm0_65[0x4] = _mm_shuffle_ps(xmm0_64, xmm0_64, 0)
                        float xmm3_21[0x4] = _mm_add_ps(xmm3_20, xmm1_38)
                        float xmm1_40[0x4] = _mm_mul_ps(eax_34[4], xmm0_65)
                        float xmm0_66[0x4] = (*ecx_11)[5]
                        float xmm0_67[0x4] = _mm_shuffle_ps(xmm0_66, xmm0_66, 0)
                        float xmm3_22[0x4] = _mm_add_ps(xmm3_21, xmm1_40)
                        float xmm1_42[0x4] = _mm_mul_ps(eax_34[5], xmm0_67)
                        float xmm0_68[0x4] = (*ecx_11)[6]
                        float xmm0_69[0x4] = _mm_shuffle_ps(xmm0_68, xmm0_68, 0)
                        float xmm3_23[0x4] = _mm_add_ps(xmm3_22, xmm1_42)
                        float xmm1_44[0x4] = _mm_mul_ps(eax_34[6], xmm0_69)
                        float xmm0_70[0x4] = (*ecx_11)[7]
                        ecx_11 = &ecx_11[2]
                        float xmm0_71[0x4] = _mm_shuffle_ps(xmm0_70, xmm0_70, 0)
                        float xmm3_24[0x4] = _mm_add_ps(xmm3_23, xmm1_44)
                        float xmm1_45[0x4] = eax_34[7]
                        eax_34 -= 0xffffff80
                        xmm3_17 = _mm_add_ps(xmm3_24, _mm_mul_ps(xmm1_45, xmm0_71))
                        i_1 = i_9
                        i_9 -= 1
                    while (i_1 != 1)
                
                if (edi_2 s< esi)
                    int32_t i_10 = esi - edi_2
                    int32_t i_2
                    
                    do
                        float xmm1_47[0x4] = *eax_34
                        eax_34 = &eax_34[1]
                        float xmm0_72[0x4] = *ecx_11
                        ecx_11 = &(*ecx_11)[1]
                        xmm3_17 = _mm_add_ps(xmm3_17, 
                            _mm_mul_ps(xmm1_47, _mm_shuffle_ps(xmm0_72, xmm0_72, 0)))
                        i_2 = i_10
                        i_10 -= 1
                    while (i_2 != 1)
                
                edx_9 = var_60_1
                *(ecx_10 + (edx_14 << 2)) =
                    _mm_add_ps(_mm_mul_ps(xmm4_22, xmm3_17), *(ecx_10 + (edx_14 << 2)))
                var_70_2 = &(*var_70_2)[esi]
                i_14 = i_7 + 1
                i_7 = i_14
            while (i_14 s< arg6)
            result = result_2
            i = var_68
        
        edx_9 = &edx_9[esi]
        result += 4
        xmm0 = arg7
        result_2 = result
        var_60_1 = edx_9
    while (result s< ecx_1)
    
    edx_8 = var_80

if (edx_8 s< arg4)
    int32_t ecx_14 = var_68
    int32_t* edi_13 = arg1
    int32_t result_1 = 0
    
    if (ecx_14 s> 0)
        int32_t eax_38
        int32_t edx_18
        edx_18:eax_38 = sx.q(esi)
        float xmm0_75[0x4] = _mm_shuffle_ps(xmm0, xmm0, 0)
        float (* edx_20)[0x4] = arg3
        int32_t eax_40 = (eax_38 + (edx_18 & 3)) & 0xfffffffc
        float (* var_58_2)[0x4] = edx_20
        
        do
            void* ecx_16 = &(*arg2)[var_80 * esi]
            int32_t var_64_3 = var_80
            void* var_84_2 = ecx_16
            int32_t edx_29
            
            do
                float (* eax_47)[0x4] = ecx_16
                float (* ecx_17)[0x4] = edx_20
                float xmm4_23[0x4] = zx.o(0)
                int32_t edx_21 = 0
                float xmm3_25[0x4] = zx.o(0)
                float xmm5_12[0x4] = zx.o(0)
                float xmm2_22[0x4] = zx.o(0)
                int32_t var_5c_1 = 0
                
                if (eax_40 s> 0)
                    int32_t i_11 = ((eax_40 - 1) u>> 2) + 1
                    var_5c_1 = i_11 << 2
                    edi_13 = arg1
                    int32_t i_3
                    
                    do
                        float xmm0_76[0x4] = *eax_47
                        float xmm1_53[0x4] =
                            _mm_mul_ps(*ecx_17, _mm_shuffle_ps(xmm0_76, xmm0_76, 0))
                        float xmm0_78[0x4] = (*eax_47)[1]
                        float xmm0_79[0x4] = _mm_shuffle_ps(xmm0_78, xmm0_78, 0)
                        xmm4_23 = _mm_add_ps(xmm4_23, xmm1_53)
                        float xmm1_55[0x4] = _mm_mul_ps(ecx_17[1], xmm0_79)
                        float xmm0_80[0x4] = (*eax_47)[2]
                        float xmm0_81[0x4] = _mm_shuffle_ps(xmm0_80, xmm0_80, 0)
                        xmm3_25 = _mm_add_ps(xmm3_25, xmm1_55)
                        float xmm1_57[0x4] = _mm_mul_ps(ecx_17[2], xmm0_81)
                        float xmm0_82[0x4] = (*eax_47)[3]
                        eax_47 = &eax_47[1]
                        float xmm0_83[0x4] = _mm_shuffle_ps(xmm0_82, xmm0_82, 0)
                        xmm5_12 = _mm_add_ps(xmm5_12, xmm1_57)
                        float xmm1_58[0x4] = ecx_17[3]
                        ecx_17 = &ecx_17[4]
                        xmm2_22 = _mm_add_ps(xmm2_22, _mm_mul_ps(xmm1_58, xmm0_83))
                        i_3 = i_11
                        i_11 -= 1
                    while (i_3 != 1)
                    edx_21 = var_5c_1
                
                float xmm2_24[0x4] =
                    _mm_add_ps(_mm_add_ps(xmm2_22, xmm5_12), _mm_add_ps(xmm3_25, xmm4_23))
                float var_d0_2[0x4] = xmm2_24
                
                if (edx_21 s< esi)
                    int32_t i_12 = esi - var_5c_1
                    float xmm1_62[0x4]
                    int32_t i_4
                    
                    do
                        float xmm1_60[0x4] = *ecx_17
                        ecx_17 = &ecx_17[1]
                        float xmm0_84[0x4] = *eax_47
                        eax_47 = &(*eax_47)[1]
                        xmm1_62 = _mm_add_ps(
                            _mm_mul_ps(xmm1_60, _mm_shuffle_ps(xmm0_84, xmm0_84, 0)), xmm2_24)
                        xmm2_24 = xmm1_62
                        i_4 = i_12
                        i_12 -= 1
                    while (i_4 != 1)
                    var_d0_2 = xmm1_62
                
                int32_t edx_26 = edi_13[1]
                float var_290[0x4] = _mm_add_ps(
                    sub_5b0c90(*edi_13 + ((edx_26 * result_1 + var_64_3) << 2), edx_26), 
                    __mulps_xmmps_memps(var_d0_2, xmm0_75))
                int32_t ecx_22 = edi_13[1]
                int32_t eax_49 = *edi_13
                sub_5b0cb0(eax_49, &var_290, eax_49 + ((ecx_22 * result_1 + var_64_3) << 2), ecx_22)
                edx_29 = var_64_3 + 1
                ecx_16 = var_84_2 + (esi << 2)
                var_64_3 = edx_29
                var_84_2 = ecx_16
                edx_20 = var_58_2
            while (edx_29 s< arg4)
            edx_20 = &edx_20[esi]
            result = result_1 + 4
            ecx_14 = var_68
            result_1 = result
            var_58_2 = edx_20
        while (result s< ecx_14)
        
        edx_8 = var_80
    
    if (ecx_14 s< arg6)
        void* edx_31 = &(*arg2)[edx_8 * esi]
        int32_t eax_54 = esi << 2
        void* var_78_4 = edx_31
        void* ecx_28 = &(*arg3)[ecx_14 * esi]
        void* var_54 = ecx_28
        
        do
            int32_t var_6c_2 = var_80
            void* var_5c_2 = edx_31
            bool cond:2_1
            
            do
                int32_t eax_60 = 0
                int32_t var_74_1 = 0
                float xmm2_25 = (zx.o(0)).d
                
                if (esi s>= 4)
                    void* ecx_29 = edx_31 + 0xc
                    int32_t* eax_59 = var_54 + 4
                    int32_t i_13 = ((esi - 4) u>> 2) + 1
                    var_74_1 = i_13 << 2
                    esi = arg5
                    int32_t i_5
                    
                    do
                        float xmm2_28 = xmm2_25 + eax_59[-1] f* *(ecx_29 - 0xc)
                            + *(eax_59 + edx_31 - var_54) f* *eax_59 + eax_59[1] f* *(ecx_29 - 4)
                        float xmm0_93 = eax_59[2] f* *ecx_29
                        eax_59 = &eax_59[4]
                        ecx_29 += 0x10
                        xmm2_25 = xmm2_28 + xmm0_93
                        i_5 = i_13
                        i_13 -= 1
                    while (i_5 != 1)
                    edi_13 = arg1
                    edx_31 = var_5c_2
                    eax_60 = var_74_1
                    ecx_28 = var_54
                
                if (eax_60 s< esi)
                    float* eax_61 = ecx_28 + (eax_60 << 2)
                    int32_t i_8 = esi - var_74_1
                    int32_t i_6
                    
                    do
                        float xmm0_95 = *(edx_31 - ecx_28 + eax_61) * *eax_61
                        eax_61 = &eax_61[1]
                        xmm2_25 = xmm2_25 + xmm0_95
                        i_6 = i_8
                        i_8 -= 1
                    while (i_6 != 1)
                    edx_31 = var_5c_2
                
                int32_t esi_11 = *edi_13
                edx_31 += eax_54
                int32_t eax_64 = edi_13[1] * var_68 + var_6c_2
                var_5c_2 = edx_31
                cond:2_1 = var_6c_2 + 1 s< arg4
                var_6c_2 += 1
                ecx_28 = var_54
                *(esi_11 + (eax_64 << 2)) = xmm2_25 * arg7 f+ *(esi_11 + (eax_64 << 2))
                esi = arg5
            while (cond:2_1)
            result = var_68 + 1
            ecx_28 += esi << 2
            edx_31 = var_78_4
            var_68 = result
            var_54 = ecx_28
        while (result s< arg6)

return result
