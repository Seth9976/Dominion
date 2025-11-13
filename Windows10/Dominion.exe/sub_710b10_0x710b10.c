// 函数: sub_710b10
// 地址: 0x710b10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = *(arg1 + 8)
*(arg1 + 0x4c) = 1
void var_34

if (eax == 0)
    int32_t eax_1 = *(arg1 + 0x58)
    int64_t xmm0_1 = _mm_cvtps_pd(*(arg1 + 0x5c))
    *(arg1 + 0x30) = eax_1
    *(arg1 + 0x34) = *(arg1 + 0x64)
    int32_t var_10
    var_10.q = xmm0_1
    var_10.q = _mm_cvtps_pd(*(arg1 + 0x50))
    _CIatan2()
    float xmm1 = *(arg1 + 0x50)
    var_10.q = fconvert.d(fconvert.t(var_10.q))
    *(arg1 + 0x38) = _mm_cvtpd_ps(zx.o(var_10.q)) * 57.2957764f
    float xmm0_7 = *(arg1 + 0x5c)
    double xmm0_9 = _mm_cvtps_pd(xmm1 * xmm1 + xmm0_7 * xmm0_7)
    int32_t var_30
    
    if (0 f> xmm0_9)
        _libm_sse2_sqrt_precise(arg2, var_34, var_30)
    else
        xmm0_9 = _mm_sqrt_sd(xmm0_9, xmm0_9)
    
    float xmm1_3 = *(arg1 + 0x60)
    *(arg1 + 0x3c) = fconvert.s(xmm0_9)
    float xmm0_11 = *(arg1 + 0x54)
    double xmm0_13 = _mm_cvtps_pd(xmm1_3 * xmm1_3 + xmm0_11 * xmm0_11)
    
    if (0 f> xmm0_13)
        _libm_sse2_sqrt_precise(arg2, var_34, var_30)
    else
        xmm0_13 = _mm_sqrt_sd(xmm0_13, xmm0_13)
    
    float xmm5 = *(arg1 + 0x50)
    float xmm3 = *(arg1 + 0x54)
    float xmm5_1 = xmm5 f* *(arg1 + 0x60)
    *(arg1 + 0x44) = 0
    float xmm3_1 = xmm3 f* *(arg1 + 0x5c)
    *(arg1 + 0x40) = fconvert.s(xmm0_13)
    var_10.q = _mm_cvtps_pd(xmm5 * xmm3 + *(arg1 + 0x60) f* *(arg1 + 0x5c))
    var_10.q = _mm_cvtps_pd(xmm5_1 - xmm3_1)
    int32_t eax_3 = _CIatan2(arg2)
    var_10.q = fconvert.d(fconvert.t(var_10.q))
    *(arg1 + 0x48) = _mm_cvtpd_ps(zx.o(var_10.q)) * 57.2957764f
    return eax_3

float xmm7 = *(eax + 0x60)
float xmm2 = *(eax + 0x50)
float xmm0_22 = *(eax + 0x5c)
float xmm0_25 = *(arg1 + 0x58) f- *(eax + 0x58)
float xmm3_2 = 1f / (xmm7 * xmm2 - xmm0_22 f* *(eax + 0x54))
float xmm0_27 = *(arg1 + 0x64) f- *(eax + 0x64)
float xmm6_1 = xmm3_2 * xmm2
float xmm2_2 = xmm3_2 f* *(eax + 0x54)
float xmm3_3 = *(arg1 + 0x50)
float xmm4_1 = xmm3_2 * xmm7
float xmm5_4 = xmm3_2 * xmm0_22
float xmm1_14 = xmm3_3 * xmm4_1 - *(arg1 + 0x5c) * xmm2_2
float xmm1_15 = *(arg1 + 0x54)
float xmm4_2 = *(arg1 + 0x60)
float xmm2_4 = xmm1_15 * xmm4_1 - xmm4_2 * xmm2_2
float xmm4_4 = xmm4_2 * xmm6_1 - xmm1_15 * xmm5_4
float xmm0_36 = *(arg1 + 0x5c) * xmm6_1 - xmm3_3 * xmm5_4
float xmm0_38 = xmm0_27 f* *(eax + 0x54)
*(arg1 + 0x44) = 0
*(arg1 + 0x30) = xmm0_25 * xmm7 * xmm3_2 - xmm0_38 * xmm3_2
*(arg1 + 0x34) = xmm0_27 * xmm2 * xmm3_2 - xmm0_25 * xmm0_22 * xmm3_2
double xmm0_42 = _mm_cvtps_pd(xmm0_36 * xmm0_36 + xmm1_14 * xmm1_14)

if (0 f> xmm0_42)
    _libm_sse2_sqrt_precise(arg2, var_34, xmm2_4)
else
    xmm0_42 = _mm_sqrt_sd(xmm0_42, xmm0_42)

float xmm6_2 = fconvert.s(xmm0_42)
*(arg1 + 0x3c) = xmm6_2
float var_10_1

if (not(xmm6_2 <= 9.99999975e-05f))
    float xmm1_26[0x2] = xmm4_4 * xmm1_14 - xmm0_36 * xmm2_4
    *(arg1 + 0x40) = xmm1_26[0] / xmm6_2
    var_10_1.q = _mm_cvtps_pd(xmm4_4 * xmm0_36 + xmm2_4 * xmm1_14)
    var_10_1.q = _mm_cvtps_pd(xmm1_26)
    _CIatan2(arg2)
    var_10_1.q = fconvert.d(fconvert.t(var_10_1.q))
    *(arg1 + 0x48) = _mm_cvtpd_ps(zx.o(var_10_1.q)) * 57.2957764f
    var_10_1.q = _mm_cvtps_pd(xmm0_36)
    var_10_1.q = _mm_cvtps_pd(xmm1_14)
    int32_t eax_4 = _CIatan2()
    var_10_1.q = fconvert.d(fconvert.t(var_10_1.q))
    *(arg1 + 0x38) = _mm_cvtpd_ps(zx.o(var_10_1.q)) * 57.2957764f
    return eax_4

*(arg1 + 0x3c) = 0
double xmm0_61 = _mm_cvtps_pd(xmm4_4 * xmm4_4 + xmm2_4 * xmm2_4)

if (0 f> xmm0_61)
    _libm_sse2_sqrt_precise(arg2, var_34, xmm2_4)
else
    xmm0_61 = _mm_sqrt_sd(xmm0_61, xmm0_61)

*(arg1 + 0x48) = 0
*(arg1 + 0x40) = fconvert.s(xmm0_61)
var_10_1.q = _mm_cvtps_pd(xmm4_4)
var_10_1.q = _mm_cvtps_pd(xmm2_4)
int32_t eax_5 = _CIatan2(arg2)
var_10_1.q = fconvert.d(fconvert.t(var_10_1.q))
*(arg1 + 0x38) = 90f - _mm_cvtpd_ps(zx.o(var_10_1.q)) * 57.2957764f
return eax_5
