// 函数: sub_6e7570
// 地址: 0x6e7570
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm5_3 = (arg1[9] - arg1[1]) * (arg1[4] - *arg1) - (arg1[8] - *arg1) * (arg1[5] - arg1[1])
float xmm4_3 = (arg2[9] - arg2[1]) * (arg2[4] - *arg2) - (arg2[8] - *arg2) * (arg2[5] - arg2[1])
uint32_t result

if ((0f <= xmm5_3 || not(xmm4_3 f> 0)) && (xmm5_3 f<= 0 || not(0 f> xmm4_3)))
    int32_t* ecx = arg1[0x12]
    result = arg2[0x12]
    
    if (ecx == result || ecx == 0 || result == 0)
        result.b = 0
        return result
    
    int32_t* ecx_1 = *sub_5af880(ecx)
    int32_t eax_1 = *ecx_1
    float xmm1_5 = ecx_1[3] f* ecx_1[2]
    double xmm0_6[0x2] = _mm_cvtepi32_pd(zx.q(eax_1)) f+ *((eax_1 u>> 0x1f << 3) + &data_893660)
    int32_t eax_3 = ecx_1[1]
    int32_t* ecx_2 = arg2[0x12]
    float xmm0_8 = _mm_cvtpd_ps(xmm0_6) * xmm1_5
    float xmm0_13 =
        _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_3)) f+ *((eax_3 u>> 0x1f << 3) + &data_893660))
        * xmm1_5
    int32_t* ecx_3 = *sub_5af880(ecx_2)
    int32_t eax_6 = *ecx_3
    float xmm2_2 = ecx_3[3] f* ecx_3[2]
    double xmm0_16[0x2] = _mm_cvtepi32_pd(zx.q(eax_6)) f+ *((eax_6 u>> 0x1f << 3) + &data_893660)
    int32_t eax_8 = ecx_3[1]
    float xmm1_7 = _mm_cvtpd_ps(xmm0_16) * xmm2_2
    xmm0_8 - xmm1_7
    float xmm3_7 =
        _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_8)) f+ *((eax_8 u>> 0x1f << 3) + &data_893660))
        * xmm2_2
    result:1.b = (xmm0_8 == xmm1_7 ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, xmm1_7) ? 1 : 0) << 2
        | (xmm0_8 < xmm1_7 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        xmm0_13 - xmm3_7
        result:1.b = (xmm0_13 == xmm3_7 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_13, xmm3_7) ? 1 : 0) << 2 | (xmm0_13 < xmm3_7 ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (not(p_4))
            result.b = 0
            return result

result.b = 1
return result
