// 函数: sub_5c7590
// 地址: 0x5c7590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t edi = arg2
int32_t var_78 = edi
float xmm7[0x4] = arg7
float xmm0_1[0x4] = _mm_shuffle_ps(xmm7, xmm7, 0)
int32_t ecx = *arg4
void* result = arg4[1]
void* result_1 = result
int32_t var_5c
int32_t var_2c
int32_t ecx_6
int32_t esi

if (edi s>= 0x80)
    ecx_6 = (sbb.d(arg3 - 3, arg3 - 3, result << 2 u< 0x7d00) & 0xc) + 4
    esi = 0
    var_5c = ecx_6
    var_2c = 0
label_5c7c77:
    
    do
        int32_t edx_1 = esi + ecx_6
        
        if (edi s< edx_1)
            edx_1 = edi
        
        int32_t i = 0
        int32_t var_44_1 = edx_1
        int32_t i_6 = 0
        
        if (arg3 - 0x1f s> 0)
            void* ecx_10 = arg6 + 0x20
            void* var_30_1 = ecx_10
            
            do
                float xmm1_3[0x4] = zx.o(0)
                float xmm2_1[0x4] = zx.o(0)
                float var_b0_1[0x4]
                __builtin_memset(&var_b0_1, 0, 0x20)
                float xmm3_1[0x4] = zx.o(0)
                float xmm4_1[0x4] = zx.o(0)
                float xmm5_1[0x4] = zx.o(0)
                float xmm6_1[0x4] = zx.o(0)
                float xmm7_1[0x4] = zx.o(0)
                
                if (esi s< edx_1)
                    int32_t ecx_12 = arg5[1]
                    int128_t* ecx_14 = *arg5 + ((ecx_12 * esi) << 2)
                    int32_t j_1 = edx_1 - esi
                    void* eax_10 = ecx + 0x20 + ((result_1 * esi + i) << 2)
                    i = i_6
                    float var_a0_1[0x4]
                    int32_t j
                    
                    do
                        float xmm1_1[0x4] = *ecx_14
                        float xmm0_2[0x4] = *(eax_10 - 0x20)
                        ecx_14 += ecx_12 << 2
                        float xmm1_2[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0)
                        xmm2_1 = _mm_add_ps(xmm2_1, _mm_mul_ps(xmm0_2, xmm1_2))
                        xmm3_1 = _mm_add_ps(xmm3_1, _mm_mul_ps(*(eax_10 - 0x10), xmm1_2))
                        xmm4_1 = _mm_add_ps(xmm4_1, _mm_mul_ps(*eax_10, xmm1_2))
                        xmm5_1 = _mm_add_ps(xmm5_1, _mm_mul_ps(*(eax_10 + 0x10), xmm1_2))
                        xmm6_1 = _mm_add_ps(xmm6_1, _mm_mul_ps(*(eax_10 + 0x20), xmm1_2))
                        xmm7_1 = _mm_add_ps(xmm7_1, _mm_mul_ps(*(eax_10 + 0x30), xmm1_2))
                        var_a0_1 =
                            __addps_xmmps_memps(_mm_mul_ps(*(eax_10 + 0x40), xmm1_2), var_a0_1)
                        float xmm0_17[0x4] = *(eax_10 + 0x50)
                        eax_10 += result_1 << 2
                        j = j_1
                        j_1 -= 1
                        var_b0_1 = __addps_xmmps_memps(_mm_mul_ps(xmm0_17, xmm1_2), var_b0_1)
                    while (j != 1)
                    xmm1_3 = var_a0_1
                    ecx_10 = var_30_1
                
                i += 0x20
                i_6 = i
                *(ecx_10 - 0x20) = _mm_add_ps(__mulps_xmmps_memps(xmm2_1, xmm0_1), *(ecx_10 - 0x20))
                float xmm0_21[0x4] = *(ecx_10 - 0x10)
                float xmm3_2[0x4] = _mm_mul_ps(xmm3_1, xmm0_1)
                float xmm4_2[0x4] = _mm_mul_ps(xmm4_1, xmm0_1)
                float xmm5_2[0x4] = _mm_mul_ps(xmm5_1, xmm0_1)
                float xmm3_3[0x4] = _mm_add_ps(xmm3_2, xmm0_21)
                float xmm6_2[0x4] = _mm_mul_ps(xmm6_1, xmm0_1)
                float xmm7_2[0x4] = _mm_mul_ps(xmm7_1, xmm0_1)
                float xmm1_4[0x4] = _mm_mul_ps(xmm1_3, xmm0_1)
                *(ecx_10 - 0x10) = xmm3_3
                *ecx_10 = _mm_add_ps(xmm4_2, *ecx_10)
                *(ecx_10 + 0x10) = _mm_add_ps(xmm5_2, *(ecx_10 + 0x10))
                *(ecx_10 + 0x20) = _mm_add_ps(xmm6_2, *(ecx_10 + 0x20))
                *(ecx_10 + 0x30) = _mm_add_ps(xmm7_2, *(ecx_10 + 0x30))
                *(ecx_10 + 0x40) = _mm_add_ps(xmm1_4, *(ecx_10 + 0x40))
                *(ecx_10 + 0x50) = _mm_add_ps(_mm_mul_ps(var_b0_1, xmm0_1), *(ecx_10 + 0x50))
                ecx_10 -= 0xffffff80
                var_30_1 = ecx_10
            while (i s< arg3 - 0x1f)
            
            xmm7 = arg7
        
        float xmm6_4[0x4]
        
        if (i s>= arg3 - 0xf)
            xmm6_4 = xmm0_1
            result = arg6
        else
            float xmm2_5[0x4] = zx.o(0)
            float xmm3_4[0x4] = zx.o(0)
            float xmm4_4[0x4] = zx.o(0)
            float xmm5_4[0x4] = zx.o(0)
            
            if (esi s< edx_1)
                int32_t ecx_15 = arg5[1]
                int128_t* ecx_17 = *arg5 + ((ecx_15 * esi) << 2)
                int32_t i_7 = edx_1 - esi
                void* eax_20 = ecx + 0x20 + ((result_1 * esi + i) << 2)
                i = i_6
                int32_t i_1
                
                do
                    float xmm1_9[0x4] = *ecx_17
                    float xmm0_28[0x4] = *(eax_20 - 0x20)
                    ecx_17 += ecx_15 << 2
                    float xmm1_10[0x4] = _mm_shuffle_ps(xmm1_9, xmm1_9, 0)
                    xmm2_5 = _mm_add_ps(xmm2_5, _mm_mul_ps(xmm0_28, xmm1_10))
                    xmm3_4 = _mm_add_ps(xmm3_4, _mm_mul_ps(*(eax_20 - 0x10), xmm1_10))
                    xmm4_4 = _mm_add_ps(xmm4_4, _mm_mul_ps(*eax_20, xmm1_10))
                    float xmm0_34[0x4] = *(eax_20 + 0x10)
                    eax_20 += result_1 << 2
                    i_1 = i_7
                    i_7 -= 1
                    xmm5_4 = _mm_add_ps(xmm5_4, _mm_mul_ps(xmm0_34, xmm1_10))
                while (i_1 != 1)
            
            result = arg6
            xmm6_4 = xmm0_1
            float xmm2_6[0x4] = _mm_mul_ps(xmm2_5, xmm6_4)
            float xmm0_36[0x4] = *(result + (i << 2))
            float xmm3_5[0x4] = _mm_mul_ps(xmm3_4, xmm6_4)
            float xmm2_7[0x4] = _mm_add_ps(xmm2_6, xmm0_36)
            float xmm4_5[0x4] = _mm_mul_ps(xmm4_4, xmm6_4)
            float xmm5_5[0x4] = _mm_mul_ps(xmm5_4, xmm6_4)
            *(result + (i << 2)) = xmm2_7
            *(result + (i << 2) + 0x10) = _mm_add_ps(xmm3_5, *(result + (i << 2) + 0x10))
            *(result + (i << 2) + 0x20) = _mm_add_ps(xmm4_5, *(result + (i << 2) + 0x20))
            *(result + (i << 2) + 0x30) = _mm_add_ps(xmm5_5, *(result + (i << 2) + 0x30))
            i += 0x10
            i_6 = i
        
        if (i s< arg3 - 0xb)
            float xmm2_8[0x4] = zx.o(0)
            float xmm3_7[0x4] = zx.o(0)
            float xmm4_7[0x4] = zx.o(0)
            
            if (esi s< edx_1)
                int32_t ecx_18 = arg5[1]
                int128_t* ecx_20 = *arg5 + ((ecx_18 * esi) << 2)
                int32_t i_8 = edx_1 - esi
                void* eax_30 = ecx + 0x20 + ((result_1 * esi + i) << 2)
                i = i_6
                int32_t i_2
                
                do
                    float xmm1_11[0x4] = *ecx_20
                    float xmm0_40[0x4] = *(eax_30 - 0x20)
                    ecx_20 += ecx_18 << 2
                    float xmm1_12[0x4] = _mm_shuffle_ps(xmm1_11, xmm1_11, 0)
                    xmm2_8 = _mm_add_ps(xmm2_8, _mm_mul_ps(xmm0_40, xmm1_12))
                    xmm3_7 = _mm_add_ps(xmm3_7, _mm_mul_ps(*(eax_30 - 0x10), xmm1_12))
                    float xmm0_44[0x4] = *eax_30
                    eax_30 += result_1 << 2
                    i_2 = i_8
                    i_8 -= 1
                    xmm4_7 = _mm_add_ps(xmm4_7, _mm_mul_ps(xmm0_44, xmm1_12))
                while (i_2 != 1)
                result = arg6
            
            float xmm0_46[0x4] = *(result + (i << 2))
            float xmm2_9[0x4] = _mm_mul_ps(xmm2_8, xmm6_4)
            float xmm3_8[0x4] = _mm_mul_ps(xmm3_7, xmm6_4)
            float xmm4_8[0x4] = _mm_mul_ps(xmm4_7, xmm6_4)
            *(result + (i << 2)) = _mm_add_ps(xmm2_9, xmm0_46)
            *(result + (i << 2) + 0x10) = _mm_add_ps(xmm3_8, *(result + (i << 2) + 0x10))
            *(result + (i << 2) + 0x20) = _mm_add_ps(xmm4_8, *(result + (i << 2) + 0x20))
            i += 0xc
            i_6 = i
        
        if (i s< arg3 - 7)
            float xmm2_11[0x4] = zx.o(0)
            float xmm3_10[0x4] = zx.o(0)
            
            if (esi s< edx_1)
                int32_t ecx_21 = arg5[1]
                int128_t* ecx_23 = *arg5 + ((ecx_21 * esi) << 2)
                int32_t i_9 = edx_1 - esi
                int128_t* eax_40 = ecx + ((result_1 * esi + i) << 2)
                i = i_6
                int32_t i_3
                
                do
                    float xmm1_13[0x4] = *ecx_23
                    float xmm0_49[0x4] = *eax_40
                    ecx_23 += ecx_21 << 2
                    float xmm1_14[0x4] = _mm_shuffle_ps(xmm1_13, xmm1_13, 0)
                    xmm2_11 = _mm_add_ps(xmm2_11, _mm_mul_ps(xmm0_49, xmm1_14))
                    float xmm0_51[0x4] = eax_40[1]
                    eax_40 += result_1 << 2
                    i_3 = i_9
                    i_9 -= 1
                    xmm3_10 = _mm_add_ps(xmm3_10, _mm_mul_ps(xmm0_51, xmm1_14))
                while (i_3 != 1)
                result = arg6
            
            float xmm0_53[0x4] = *(result + (i << 2))
            float xmm2_12[0x4] = _mm_mul_ps(xmm2_11, xmm6_4)
            float xmm3_11[0x4] = _mm_mul_ps(xmm3_10, xmm6_4)
            *(result + (i << 2)) = _mm_add_ps(xmm2_12, xmm0_53)
            *(result + (i << 2) + 0x10) = _mm_add_ps(xmm3_11, *(result + (i << 2) + 0x10))
            i += 8
            i_6 = i
        
        if (i s< arg3 - 3)
            float xmm2_14[0x4] = zx.o(0)
            
            if (esi s< edx_1)
                int32_t ecx_24 = arg5[1]
                float (* ecx_26)[0x4] = *arg5 + ((ecx_24 * esi) << 2)
                int32_t i_10 = edx_1 - esi
                float (* eax_50)[0x4] = ecx + ((result_1 * esi + i) << 2)
                i = i_6
                int32_t i_4
                
                do
                    float xmm1_15[0x4] = *eax_50
                    eax_50 = &(*eax_50)[result_1]
                    float xmm0_55[0x4] = *ecx_26
                    ecx_26 = &(*ecx_26)[ecx_24]
                    i_4 = i_10
                    i_10 -= 1
                    xmm2_14 = _mm_add_ps(xmm2_14, 
                        _mm_mul_ps(xmm1_15, _mm_shuffle_ps(xmm0_55, xmm0_55, 0)))
                while (i_4 != 1)
                result = arg6
            
            *(result + (i << 2)) = _mm_add_ps(_mm_mul_ps(xmm2_14, xmm6_4), *(result + (i << 2)))
            i += 4
            i_6 = i
        
        int32_t ecx_27 = arg3
        
        while (i s< ecx_27)
            int32_t var_14_6 = esi
            float xmm2_17 = (zx.o(0)).d
            
            if (esi s< edx_1)
                int32_t ecx_28 = *arg5
                int32_t var_34_1 = ecx_28
                
                if (edx_1 - esi s< 4)
                    var_34_1 = ecx_28
                label_5c7bfe:
                    int32_t eax_88 = arg5[1]
                    float* ecx_39 = var_34_1 + ((eax_88 * var_14_6) << 2)
                    int32_t i_11 = edx_1 - var_14_6
                    float* eax_93 = ecx + ((var_14_6 * result_1 + i) << 2)
                    esi = var_2c
                    int32_t i_5
                    
                    do
                        float xmm0_65 = *eax_93 * *ecx_39
                        eax_93 = &eax_93[result_1]
                        ecx_39 = &ecx_39[eax_88]
                        xmm2_17 = xmm2_17 + xmm0_65
                        i_5 = i_11
                        i_11 -= 1
                    while (i_5 != 1)
                    edx_1 = var_44_1
                else
                    int32_t ecx_29 = arg5[1]
                    void* var_20_6 = var_34_1 + ((ecx_29 * (esi + 2)) << 2)
                    int32_t* var_30_2 = var_34_1 + (((var_2c + 1) * ecx_29) << 2)
                    int32_t* var_38_1 = ecx + ((result_1 * var_2c + i_6) << 2)
                    void* var_58_1 = ecx + (((esi + 3) * result_1 + i_6) << 2)
                    float* var_40_1 = ecx + (((esi + 2) * result_1 + i_6) << 2)
                    int32_t* edi_11 = var_34_1 + ((ecx_29 * (esi + 3)) << 2)
                    float* eax_82 = ecx + (((var_2c + 1) * result_1 + i_6) << 2)
                    float* var_3c_1 = eax_82
                    int32_t var_24_6 = ((var_44_1 - var_2c - 4) u>> 2) + 1
                    float* esi_5 = var_34_1 + ((ecx_29 * esi) << 2)
                    var_14_6 = var_2c + ((((var_44_1 - var_2c - 4) u>> 2) + 1) << 2)
                    
                    while (true)
                        int32_t* edx_12 = var_38_1
                        var_38_1 = &var_38_1[result_1 * 4]
                        var_3c_1 = &var_3c_1[result_1 * 4]
                        float* edx_14 = var_20_6
                        float* eax_83 = var_40_1
                        var_40_1 = &var_40_1[result_1 * 4]
                        float* eax_84 = var_58_1
                        float xmm2_20 =
                            xmm2_17 + *edx_12 * *esi_5 + *var_30_2 * *eax_82 + *edx_14 * *eax_83
                        float xmm0_63 = *edi_11 * *eax_84
                        var_58_1 = &eax_84[result_1 * 4]
                        esi_5 = &esi_5[ecx_29 * 4]
                        var_30_2 = &var_30_2[ecx_29 * 4]
                        edi_11 = &edi_11[ecx_29 * 4]
                        var_20_6 = &edx_14[ecx_29 * 4]
                        int32_t temp5_1 = var_24_6
                        var_24_6 -= 1
                        xmm2_17 = xmm2_20 + xmm0_63
                        
                        if (temp5_1 == 1)
                            break
                        
                        eax_82 = var_3c_1
                    
                    edx_1 = var_44_1
                    i = i_6
                    esi = var_2c
                    
                    if (var_14_6 s< edx_1)
                        goto label_5c7bfe
                
                ecx_27 = arg3
                result = arg6
            
            *(result + (i << 2)) = xmm2_17 f* xmm7 f+ *(result + (i << 2))
            i += 1
            i_6 = i
        
        ecx_6 = var_5c
        esi += ecx_6
        edi = var_78
        var_2c = esi
    while (esi s< edi)
else
    esi = 0
    ecx_6 = edi
    var_5c = ecx_6
    var_2c = 0
    
    if (edi s> 0)
        goto label_5c7c77
return result
