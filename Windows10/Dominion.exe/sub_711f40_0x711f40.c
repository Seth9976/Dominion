// 函数: sub_711f40
// 地址: 0x711f40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t ecx

if (arg9 != 0)
    ecx = arg7
    *(ecx + (arg8 << 2)) = 0

arg5 - 1f
arg1:1.b = (arg5 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg5, 1f) ? 1 : 0) << 2 | (arg5 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    int32_t var_4c = ecx
    return (**(arg2 + 4))(arg2, arg4, 0, arg3, 0, 0, 0x3f800000, arg6, 0)

int32_t* edx = *(arg2 + 0x10)
void* eax_4 = *(arg4 + 8)
int32_t* edi = *(eax_4 + (*(arg2 + 0x14) << 2))

if (edi[0x1b] != 0)
    double xmm5_1 = 16384.499999999996
    float var_14_1
    float xmm0_2
    float xmm4_1
    
    if (*edx <= arg3)
        if (arg6 != 0)
            xmm0_2 = edi[7]
        else
            eax_4 = *edi
            xmm0_2 = *(eax_4 + 0x18)
        
        int32_t ecx_2 = *(arg2 + 0xc)
        var_14_1 = xmm0_2
        
        if (arg3 f< edx[ecx_2 - 2])
            int32_t eax_11 = sub_714a40(eax_4, ecx_2, *(arg2 + 0x10), arg3, 2)
            int32_t ecx_4 = *(arg2 + 0x10)
            float* edx_2 = ecx_4 + (eax_11 << 2)
            int32_t edx_3 = *(arg2 + 8)
            int32_t ecx_5 = (eax_11 s>> 1) * 0x13
            float xmm0_5 = *(edx_3 + (ecx_5 << 2) - 0x4c)
            float xmm1_1 =
                1f - (arg3 f- *(ecx_4 + (eax_11 << 2))) / (*(ecx_4 + (eax_11 << 2) - 8) - *edx_2)
            float xmm3
            
            if (0 f<= xmm1_1)
                xmm3 = _mm_min_ss(0x3f800000, xmm1_1)
            else
                xmm3 = (zx.o(0)).d
            
            xmm0_5 f- 0
            int32_t eax_12
            eax_12:1.b = (xmm0_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, 0f) ? 1 : 0) << 2
                | (xmm0_5 < 0f ? 1 : 0)
            bool p_3 = unimplemented  {test ah, 0x44}
            
            if (p_3)
                xmm0_5 - 1f
                eax_12:1.b = (xmm0_5 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, 1f) ? 1 : 0) << 2
                    | (xmm0_5 < 1f ? 1 : 0)
                bool p_5 = unimplemented  {test ah, 0x44}
                
                if (p_5)
                    int32_t ecx_6 = ecx_5 - 0x12
                    float xmm4_3 = (zx.o(0)).d
                    int32_t esi_1 = ecx_6
                    
                    if (ecx_6 s>= ecx_5)
                    label_712121:
                        xmm3 = (xmm3 - xmm4_3) * (1f f- *(edx_3 + (ecx_6 << 2) - 4))
                            / (1f - xmm4_3) f+ *(edx_3 + (ecx_6 << 2) - 4)
                    else
                        while (true)
                            xmm4_3 = *(edx_3 + (ecx_6 << 2))
                            
                            if (xmm4_3 >= xmm3)
                                float xmm1_9
                                float xmm5_2
                                
                                if (ecx_6 != esi_1)
                                    xmm1_9 = *(edx_3 + (ecx_6 << 2) - 8)
                                    xmm5_2 = *(edx_3 + (ecx_6 << 2) - 4)
                                else
                                    xmm1_9 = (zx.o(0)).d
                                    xmm5_2 = (zx.o(0)).d
                                
                                xmm3 = (xmm3 - xmm1_9) * (*(edx_3 + (ecx_6 << 2) + 4) - xmm5_2)
                                    / (xmm4_3 - xmm1_9) + xmm5_2
                                xmm5_1 = 16384.499999999996
                                break
                            
                            ecx_6 += 2
                            
                            if (ecx_6 s>= ecx_5)
                                goto label_712121
                else
                    xmm3 = (zx.o(0)).d
            
            float xmm4_5 = edx_2[1] - edx_2[-1]
            float xmm4_9 = (xmm4_5 - _mm_cvtepi32_ps(zx.o((0x4000
                - int.d(xmm5_1 - _mm_cvtps_pd(xmm4_5 / 360f))) * 0x168))) * xmm3
                + edx_2[-1] f+ *(*edi + 0x18)
            xmm4_1 = xmm4_9 - _mm_cvtepi32_ps(zx.o((0x4000
                - int.d(xmm5_1 - _mm_cvtps_pd(xmm4_9 / 360f))) * 0x168))
            xmm0_2 = var_14_1
        else
            xmm4_1 = edx[ecx_2 - 1] f+ *(*edi + 0x18)
        
        goto label_7121a3
    
    if (arg6 == 0)
        int32_t eax_9 = *(*edi + 0x18)
        edi[7] = eax_9
        return eax_9
    
    eax_4 = arg6 - 1
    
    if (arg6 == 1)
        xmm0_2 = edi[7]
        var_14_1 = xmm0_2
        xmm4_1 = *(*edi + 0x18)
    label_7121a3:
        float xmm4_10 = xmm4_1 - xmm0_2
        uint32_t xmm4_11[0x4] = xmm4_10 -
            _mm_cvtepi32_ps(zx.o((0x4000 - int.d(xmm5_1 - _mm_cvtps_pd(xmm4_10 / 360f))) * 0x168))
        xmm4_11 f- 0
        int32_t eax_20
        eax_20:1.b = (xmm4_11 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_11, 0f) ? 1 : 0) << 2
            | (xmm4_11 f< 0f ? 1 : 0)
        bool p_7 = unimplemented  {test ah, 0x44}
        int32_t eax_21
        float xmm1_8
        
        if (p_7)
            int32_t var_1c_2
            uint32_t xmm3_7[0x4]
            uint32_t xmm5_3[0x4]
            
            if (arg9 == 0)
                xmm3_7 = *(arg7 + (arg8 << 2))
                xmm5_3 = *(arg7 + (arg8 << 2) + 4)
                var_1c_2 = xmm3_7
            else
                xmm3_7 = zx.o(0)
                var_1c_2 = 0
                xmm5_3 = xmm4_11
            
            float xmm1_10 = -1f
            int32_t eax_23
            eax_23.b = xmm4_11 f> 0
            int32_t eax_24
            eax_24.b = xmm3_7 f>= 0
            int32_t var_20_1 = eax_24
            float xmm7_1
            
            if (not(0f f<= xmm5_3))
                xmm7_1 = -1f
            else if (xmm5_3 f<= 0)
                xmm7_1 = (zx.o(0)).d
            else
                xmm7_1 = 1f
            
            float xmm0_25
            
            if (not(0 f<= xmm4_11))
                xmm0_25 = -1f
            else if (xmm4_11 f<= 0)
                xmm0_25 = (zx.o(0)).d
            else
                xmm0_25 = 1f
            
            xmm7_1 - xmm0_25
            eax_24:1.b = (xmm7_1 == xmm0_25 ? 1 : 0) << 6
                | (is_unordered.d(xmm7_1, xmm0_25) ? 1 : 0) << 2 | (xmm7_1 < xmm0_25 ? 1 : 0)
            bool p_9 = unimplemented  {test ah, 0x44}
            int32_t xmm5_4
            
            if (p_9)
                xmm5_4 = _mm_and_ps(xmm5_3, 0x7fffffff)
            
            if (not(p_9) || 90f f< xmm5_4)
                float xmm0_39 = xmm3_7[0] f+ xmm4_11
                double var_38_1 = fconvert.d(xmm3_7)
                _CIfmod()
                xmm1_8 = xmm0_39 - _mm_cvtpd_ps(zx.o(fconvert.d(fconvert.t(360.0))))
                
                if (var_20_1 != eax_23)
                    int32_t xmm0_43 = (zx.o(0)).d
                    
                    if (not(0 f<= var_1c_2))
                        xmm0_43 = 0xbf800000
                    else if (not(var_1c_2 f<= 0))
                        xmm0_43 = 0x3f800000
                    
                    xmm1_8 = xmm1_8 + xmm0_43 f* 360f
            else
                if (not(_mm_and_ps(xmm3_7, 0x7fffffff) f<= 180f))
                    if (not(0 f> xmm3_7))
                        if (xmm3_7 f<= 0)
                            xmm1_10 = (zx.o(0)).d
                        else
                            xmm1_10 = 1f
                    
                    xmm3_7 = xmm3_7 f+ xmm1_10 * 360f
                
                float xmm0_29 = xmm4_11[0] f+ xmm3_7
                double var_28_1 = fconvert.d(xmm3_7)
                _CIfmod()
                xmm1_8 = xmm0_29 - _mm_cvtpd_ps(zx.o(fconvert.d(fconvert.t(360.0))))
            
            eax_21 = arg7
            xmm5_1 = 16384.499999999996
            *(eax_21 + (arg8 << 2)) = xmm1_8
        else
            eax_21 = arg7
            xmm1_8 = *(eax_21 + (arg8 << 2))
        
        *(eax_21 + (arg8 << 2) + 4) = xmm4_11
        float xmm1_14 = xmm1_8 * arg5 + var_14_1
        eax_4 = (0x4000 - int.d(xmm5_1 - _mm_cvtps_pd(xmm1_14 / 360f))) * 0x168
        edi[7] = xmm1_14 - _mm_cvtepi32_ps(zx.o(eax_4))

return eax_4
