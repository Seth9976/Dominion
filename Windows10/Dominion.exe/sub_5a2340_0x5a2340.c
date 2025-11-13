// 函数: sub_5a2340
// 地址: 0x5a2340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void*** esi = arg3[3]
void*** var_20 = esi
double var_10
float* result
int16_t top

if (esi != 0)
    result = arg2
else
    int32_t* eax_1 = sub_5a1410(arg2, &esi[8])
    var_20 = eax_1
    eax_1[2] = 0
    int32_t edx_2 = *(arg1 + 0x10)
    eax_1[3] = *(arg1 + 0xc)
    eax_1[4] = edx_2
    float xmm1_1 = *(arg1 + 0x14)
    eax_1[5] = xmm1_1
    float xmm0_1 = *(arg1 + 0x10)
    float xmm1_2 = xmm1_1 f+ eax_1[3]
    eax_1[6] = xmm0_1
    float xmm1_4[0x2] = xmm1_2 * 0.5f - *arg3
    float xmm0_4[0x2] = (xmm0_1 f+ eax_1[4]) * 0.5f - arg3[1]
    double var_10_1 = _mm_cvtps_pd(xmm0_4)
    long double x87_r6_1 = fconvert.t(_mm_cvtps_pd(xmm1_4))
    _CIatan2()
    var_10.d = fconvert.s(x87_r6_1)
    top = 0xffff
    float xmm0_7 = var_10.d
    
    if (not(0f <= xmm0_4))
        xmm0_7 = xmm0_7 + 6.28318548f
    
    eax_1[7] = xmm0_7
    *eax_1 = 0
    int32_t* eax_3 = sub_5a1470(arg2)
    int32_t edx_3 = var_20[4]
    eax_3[3] = var_20[3]
    eax_3[4] = edx_3
    int32_t edx_4 = var_20[6]
    eax_3[5] = var_20[5]
    eax_3[6] = edx_4
    eax_3[1] = arg3
    eax_3[2] = 0
    eax_3[9] = 0
    eax_3[8] = 0
    eax_3[7] = 0
    *eax_3 = arg2[1]
    result = arg2
    result[1] = eax_3
    var_20[1] = eax_3
    esi = var_20
    arg3[3] = esi

void** i = *esi
void** i_1 = i

if (i == 0)
    int32_t* eax_7 = sub_5a1410(result, 0x20)
    int32_t* var_18_2 = eax_7
    eax_7[2] = 0
    int32_t edx_6 = esi[6]
    eax_7[3] = esi[5]
    int32_t* ecx_9 = eax_7
    ecx_9[4] = edx_6
    float xmm3_1 = esi[5]
    float xmm2_1 = arg2[0x1c]
    bool p_2
    
    if (not(xmm2_1 <= xmm3_1))
        float xmm0_8 = esi[6]
        float temp0_1 = arg2[0x1b]
        xmm0_8 - temp0_1
        eax_7:1.b = (xmm0_8 == temp0_1 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_8, temp0_1) ? 1 : 0) << 2 | (xmm0_8 < temp0_1 ? 1 : 0)
        p_2 = unimplemented  {test ah, 0x44}
    
    if (xmm2_1 <= xmm3_1 || p_2)
        float xmm1_5 = arg2[0x1a]
        bool p_4
        
        if (not(xmm3_1 <= xmm1_5))
            float xmm0_9 = esi[6]
            float temp1_1 = arg2[0x1d]
            xmm0_9 - temp1_1
            eax_7:1.b = (xmm0_9 == temp1_1 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_9, temp1_1) ? 1 : 0) << 2 | (xmm0_9 < temp1_1 ? 1 : 0)
            p_4 = unimplemented  {test ah, 0x44}
        
        if (xmm3_1 <= xmm1_5 || p_4)
            int32_t xmm4_1 = esi[6]
            
            if (xmm4_1 f<= arg2[0x1b])
            label_5a2512:
                
                if (not(arg2[0x1d] f<= xmm4_1))
                    xmm3_1 - xmm2_1
                    eax_7:1.b = (xmm3_1 == xmm2_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm3_1, xmm2_1) ? 1 : 0) << 2 | (xmm3_1 < xmm2_1 ? 1 : 0)
                    bool p_8 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_8))
                        ecx_9[5] = xmm2_1
                        ecx_9[6] = arg2[0x1d]
            else
                xmm3_1 - xmm1_5
                eax_7:1.b = (xmm3_1 == xmm1_5 ? 1 : 0) << 6
                    | (is_unordered.d(xmm3_1, xmm1_5) ? 1 : 0) << 2 | (xmm3_1 < xmm1_5 ? 1 : 0)
                bool p_6 = unimplemented  {test ah, 0x44}
                
                if (p_6)
                    goto label_5a2512
                
                ecx_9[5] = xmm1_5
                ecx_9[6] = arg2[0x1b]
        else
            ecx_9[5] = xmm1_5
            ecx_9[6] = arg2[0x1d]
    else
        ecx_9[5] = xmm2_1
        ecx_9[6] = arg2[0x1b]
    
    float xmm0_14[0x2] = (ecx_9[6] f+ ecx_9[4]) * 0.5f - arg3[1]
    int64_t var_10_2 = _mm_cvtps_pd(xmm0_14)
    unimplemented  {fld st0, qword [esp+0x18]}
    var_10 = _mm_cvtps_pd((ecx_9[3] f+ ecx_9[5]) * 0.5f - *arg3)
    unimplemented  {fld st0, qword [esp+0x18]}
    _CIatan2()
    var_10.d = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
    unimplemented  {fstp dword [esp+0x18], st0}
    top -= 1
    float xmm0_21 = var_10.d
    
    if (not(0f <= xmm0_14))
        xmm0_21 = xmm0_21 + 6.28318548f
    
    var_18_2[7] = xmm0_21
    int32_t* eax_10 = sub_5a1470(arg2)
    int32_t edx_9 = var_18_2[4]
    eax_10[3] = var_18_2[3]
    eax_10[4] = edx_9
    int32_t edx_10 = var_18_2[6]
    eax_10[5] = var_18_2[5]
    eax_10[6] = edx_10
    eax_10[1] = arg3
    eax_10[2] = 0
    eax_10[9] = 0
    eax_10[8] = 0
    eax_10[7] = 0
    *eax_10 = arg2[1]
    arg2[1] = eax_10
    int32_t* ecx_14 = var_20
    var_18_2[1] = eax_10
    esi = var_18_2
    var_20 = esi
    *var_18_2 = *ecx_14
    result = arg3
    *ecx_14 = var_18_2
    i = result[3]
    i_1 = i

if (esi != 0)
    while (i != 0)
        do
            float xmm1_6 = esi[5]
            int32_t ecx_15 = 0
            float temp2_1 = *(arg1 + 0xc)
            xmm1_6 - temp2_1
            result:1.b = (xmm1_6 == temp2_1 ? 1 : 0) << 6
                | (is_unordered.d(xmm1_6, temp2_1) ? 1 : 0) << 2 | (xmm1_6 < temp2_1 ? 1 : 0)
            bool p_10 = unimplemented  {test ah, 0x44}
            
            if (p_10)
                float temp3_1 = *(arg1 + 0x14)
                xmm1_6 - temp3_1
                result:1.b = (xmm1_6 == temp3_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm1_6, temp3_1) ? 1 : 0) << 2 | (xmm1_6 < temp3_1 ? 1 : 0)
                bool p_12 = unimplemented  {test ah, 0x44}
                
                if (not(p_12))
                    ecx_15 = 2
            else
                ecx_15 = 1
            
            float xmm0_22 = esi[6]
            float temp4_1 = *(arg1 + 0x10)
            xmm0_22 - temp4_1
            result:1.b = (xmm0_22 == temp4_1 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_22, temp4_1) ? 1 : 0) << 2 | (xmm0_22 < temp4_1 ? 1 : 0)
            bool p_14 = unimplemented  {test ah, 0x44}
            
            if (p_14)
                float temp5_1 = *(arg1 + 0x18)
                xmm0_22 - temp5_1
                result:1.b = (xmm0_22 == temp5_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_22, temp5_1) ? 1 : 0) << 2 | (xmm0_22 < temp5_1 ? 1 : 0)
                bool p_16 = unimplemented  {test ah, 0x44}
                
                if (not(p_16))
                    ecx_15 |= 8
            else
                ecx_15 |= 4
            
            if (ecx_15 != 0)
                float xmm2_2 = i[4]
                int32_t eax_15
                eax_15.b = 1.1920929e-07f f> _mm_and_ps(xmm0_22 - xmm2_2, 0x7fffffff)
                
                if (eax_15 != 0)
                    result.b = 1.1920929e-07f f> _mm_and_ps(xmm1_6 f- i[3], 0x7fffffff)
                
                if (eax_15 == 0 || result == 0)
                    int32_t edx_12 = 0
                    float xmm0_25 = i_1[3]
                    float temp6_1 = *(arg1 + 0xc)
                    xmm0_25 - temp6_1
                    result:1.b = (xmm0_25 == temp6_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_25, temp6_1) ? 1 : 0) << 2
                        | (xmm0_25 < temp6_1 ? 1 : 0)
                    bool p_18 = unimplemented  {test ah, 0x44}
                    
                    if (p_18)
                        float temp7_1 = *(arg1 + 0x14)
                        xmm0_25 - temp7_1
                        result:1.b = (xmm0_25 == temp7_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_25, temp7_1) ? 1 : 0) << 2
                            | (xmm0_25 < temp7_1 ? 1 : 0)
                        bool p_20 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_20))
                            edx_12 = 2
                    else
                        edx_12 = 1
                    
                    float temp8_1 = *(arg1 + 0x10)
                    xmm2_2 - temp8_1
                    result:1.b = (xmm2_2 == temp8_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm2_2, temp8_1) ? 1 : 0) << 2
                        | (xmm2_2 < temp8_1 ? 1 : 0)
                    bool p_22 = unimplemented  {test ah, 0x44}
                    
                    if (p_22)
                        float temp9_1 = *(arg1 + 0x18)
                        xmm2_2 - temp9_1
                        result:1.b = (xmm2_2 == temp9_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm2_2, temp9_1) ? 1 : 0) << 2
                            | (xmm2_2 < temp9_1 ? 1 : 0)
                        bool p_24 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_24))
                            edx_12 |= 8
                    else
                        edx_12 |= 4
                    
                    int32_t* esi_4
                    
                    if ((ecx_15 & edx_12) != 0)
                        void* eax_24 = sub_5a1410(arg2, 0x20)
                        var_10.d = eax_24
                        *(eax_24 + 8) = 0
                        int32_t edx_18 = esi[6]
                        *(eax_24 + 0xc) = esi[5]
                        *(eax_24 + 0x10) = edx_18
                        int32_t eax_25 = i_1[3]
                        *(eax_24 + 0x18) = i_1[4]
                        float xmm0_42 = *(eax_24 + 0x18) f+ *(eax_24 + 0x10)
                        *(eax_24 + 0x14) = eax_25
                        float xmm0_44[0x2] = xmm0_42 * 0.5f - arg3[1]
                        i_1.q = _mm_cvtps_pd(xmm0_44)
                        unimplemented  {fld st0, qword [esp+0x10]}
                        i_1.q = _mm_cvtps_pd((*(eax_24 + 0x14) f+ *(eax_24 + 0xc)) * 0.5f - *arg3)
                        unimplemented  {fld st0, qword [esp+0x10]}
                        _CIatan2()
                        float var_18_5 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                        unimplemented  {fstp dword [esp+0x10], st0}
                        top -= 1
                        float xmm0_51 = var_18_5
                        
                        if (not(0f <= xmm0_44))
                            xmm0_51 = xmm0_51 + 6.28318548f
                        
                        *(eax_24 + 0x1c) = xmm0_51
                        esi_4 = sub_5a1470(arg2)
                        void* eax_28 = var_10.d
                        int32_t edx_19 = *(eax_28 + 0x10)
                        esi_4[3] = *(eax_28 + 0xc)
                        esi_4[4] = edx_19
                        int32_t edx_20 = *(eax_28 + 0x18)
                        esi_4[5] = *(eax_28 + 0x14)
                        esi_4[6] = edx_20
                        esi_4[1] = arg3
                        esi_4[2] = 0
                        esi_4[9] = 0
                        esi_4[8] = 0
                        esi_4[7] = 0
                        *esi_4 = arg2[1]
                        arg2[1] = esi_4
                    label_5a2a03:
                        void** ecx_33 = var_10.d
                        ecx_33[1] = esi_4
                        esi = var_20
                        result = *esi
                        *ecx_33 = result
                        *esi = ecx_33
                    else if (edx_12 != 0)
                        float var_1c_2
                        float var_18_3
                        int32_t eax_16
                        int32_t eax_18
                        void* ecx_16
                        void* edx_13
                        
                        if (ecx_15 != 9)
                            if (ecx_15 == 0xa)
                                eax_16 = ecx_15 - 6
                                goto label_5a2742
                            
                            if (ecx_15 == 5)
                                eax_16 = ecx_15 - 3
                                goto label_5a2742
                            
                            if (ecx_15 == 6)
                                eax_16 = 3
                                goto label_5a2742
                            
                            eax_18 = 0
                            
                            if (ecx_15 == 8)
                                var_1c_2 = *(arg1 + 0xc)
                                var_18_3 = *(arg1 + 0x18)
                            else if (ecx_15 == 1)
                                edx_13 = arg1 + 0xc
                                var_1c_2 = *edx_13
                                var_18_3 = *(edx_13 + 4)
                            else if (ecx_15 != 4)
                                if (ecx_15 != 2)
                                    goto label_5a2743
                                
                                ecx_16 = arg1 + 0x14
                                var_1c_2 = *ecx_16
                                var_18_3 = *(ecx_16 + 4)
                            else
                                var_1c_2 = *(arg1 + 0x14)
                                var_18_3 = *(arg1 + 0x10)
                        else
                            eax_16 = ecx_15 - 8
                        label_5a2742:
                            eax_18 = (eax_16 & 3) + 1
                        label_5a2743:
                            ecx_16 = arg1 + 0x14
                            edx_13 = arg1 + 0xc
                            
                            if (eax_18 == 1)
                                var_1c_2 = *edx_13
                                var_18_3 = *(ecx_16 + 4)
                            else if (eax_18 == 4)
                                var_1c_2 = *ecx_16
                                var_18_3 = *(ecx_16 + 4)
                            else if (eax_18 == 2)
                                var_1c_2 = *edx_13
                                var_18_3 = *(edx_13 + 4)
                            else if (eax_18 != 3)
                                var_1c_2 = -3.40282347e+38f
                                var_18_3 = -3.40282347e+38f
                            else
                                var_1c_2 = *ecx_16
                                var_18_3 = *(edx_13 + 4)
                        void* eax_19 = sub_5a1410(arg2, 0x20)
                        var_10.d = eax_19
                        *(eax_19 + 8) = 0
                        int32_t ecx_18 = esi[5]
                        int32_t edx_14 = esi[6]
                        *(eax_19 + 0x18) = var_18_3
                        *(eax_19 + 0x10) = edx_14
                        float xmm0_35 = var_18_3 f+ *(eax_19 + 0x10)
                        *(eax_19 + 0xc) = ecx_18
                        *(eax_19 + 0x14) = var_1c_2
                        float xmm0_37[0x2] = xmm0_35 * 0.5f - arg3[1]
                        float xmm1_12[0x2] = (var_1c_2 f+ *(eax_19 + 0xc)) * 0.5f - *arg3
                        var_18_3.q = _mm_cvtps_pd(xmm0_37)
                        unimplemented  {fld st0, qword [esp+0x10]}
                        var_18_3.q = _mm_cvtps_pd(xmm1_12)
                        unimplemented  {fld st0, qword [esp+0x10]}
                        _CIatan2()
                        float var_18_4 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                        unimplemented  {fstp dword [esp+0x10], st0}
                        top -= 1
                        float xmm0_40 = var_18_4
                        
                        if (not(0f <= xmm0_37))
                            xmm0_40 = xmm0_40 + 6.28318548f
                        
                        *(var_10.d + 0x1c) = xmm0_40
                        esi_4 = sub_5a1470(arg2)
                        void* eax_21 = var_10.d
                        int32_t edx_15 = *(eax_21 + 0x10)
                        esi_4[3] = *(eax_21 + 0xc)
                        esi_4[4] = edx_15
                        int32_t edx_16 = *(eax_21 + 0x18)
                        esi_4[5] = *(eax_21 + 0x14)
                        esi_4[6] = edx_16
                        esi_4[1] = arg3
                        esi_4[2] = 0
                        esi_4[9] = 0
                        esi_4[8] = 0
                        esi_4[7] = 0
                        *esi_4 = arg2[1]
                        arg2[1] = esi_4
                        goto label_5a2a03
            
            esi = *esi
            var_20 = esi
            
            if (esi == 0)
                return result
            
            i = *esi
            i_1 = i
        while (i != 0)
        
        result = arg3
        i = result[3]
        i_1 = i

return result
