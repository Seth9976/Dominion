// 函数: sub_6d6bf0
// 地址: 0x6d6bf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm0_1 = arg8 - arg6
float var_34 = arg6
float xmm2_1 = arg12 - arg10
float var_38 = arg7
float xmm0_3 = arg9 - arg7
float xmm1_2 = arg10 - arg8
float xmm2_3 = arg13 - arg11
float xmm0_5 = arg11 - arg9
float xmm2_5 = arg12 - var_34
float xmm2_7 = arg13 - arg7
double xmm0_8 = _mm_cvtps_pd(xmm0_5 * xmm0_5 + xmm1_2 * xmm1_2)
int32_t entry_ebx

if (0 f> xmm0_8)
    _libm_sse2_sqrt_precise(arg5, arg4.w, entry_ebx)
else
    xmm0_8 = _mm_sqrt_sd(xmm0_8, xmm0_8)

double xmm0_12 = _mm_cvtps_pd(xmm0_3 * xmm0_3 + xmm0_1 * xmm0_1)

if (0 f> xmm0_12)
    _libm_sse2_sqrt_precise(arg5, arg4.w, entry_ebx)
else
    xmm0_12 = _mm_sqrt_sd(xmm0_12, xmm0_12)

double xmm0_16 = _mm_cvtps_pd(xmm2_3 * xmm2_3 + xmm2_1 * xmm2_1)

if (0 f> xmm0_16)
    _libm_sse2_sqrt_precise(arg5, arg4.w, entry_ebx)
else
    xmm0_16 = _mm_sqrt_sd(xmm0_16, xmm0_16)

float xmm0_17 = _mm_cvtpd_ps(xmm0_8 + xmm0_12 + xmm0_16)
double xmm0_21 = _mm_cvtps_pd(xmm2_7 * xmm2_7 + xmm2_5 * xmm2_5)

if (0 f> xmm0_21)
    _libm_sse2_sqrt_precise(arg5, arg4.w, entry_ebx)
else
    xmm0_21 = _mm_sqrt_sd(xmm0_21, xmm0_21)

int32_t ebx = arg15
float xmm0_22 = fconvert.s(xmm0_21)
float xmm1_16 = xmm0_17 * xmm0_17 - xmm0_22 * xmm0_22

if (ebx s> 0x10)
    return 

while (not(xmm1_16 f<= arg14))
    ebx += 1
    float xmm0_26 = (arg8 + arg10) * 0.5f
    float xmm7_3 = (arg10 + arg12) * 0.5f
    float xmm1_19 = (arg9 + arg11) * 0.5f
    float xmm4_3 = (var_38 + arg9) * 0.5f
    float xmm5_3 = (var_34 + arg8) * 0.5f
    arg11 = (arg11 + arg13) * 0.5f
    arg10 = xmm7_3
    float xmm2_13 = (xmm1_19 + xmm4_3) * 0.5f
    float xmm7_5 = (xmm7_3 + xmm0_26) * 0.5f
    float xmm0_29 = (arg11 + xmm1_19) * 0.5f
    float xmm3_2 = (xmm0_26 + xmm5_3) * 0.5f
    arg9 = xmm0_29
    arg8 = xmm7_5
    float xmm0_31 = (xmm0_29 + xmm2_13) * 0.5f
    float xmm1_22 = (xmm7_5 + xmm3_2) * 0.5f
    sub_6d6bf0(xmm5_3, xmm4_3, xmm3_2, xmm2_13, xmm1_22, xmm0_31, arg14, ebx, arg5, arg4, entry_ebx)
    float xmm2_16 = arg12 - arg10
    float xmm0_33 = arg8 - xmm1_22
    float xmm1_24 = arg10 - arg8
    float xmm2_18 = arg13 - arg11
    float xmm0_35 = arg9 - xmm0_31
    var_38 = xmm0_31
    var_34 = xmm1_22
    float xmm0_37 = arg11 - arg9
    double var_10_1
    var_10_1.d = arg12 - xmm1_22
    float xmm2_22 = arg13 - xmm0_31
    int64_t xmm0_40 = _mm_cvtps_pd(xmm0_37 * xmm0_37 + xmm1_24 * xmm1_24)
    
    if (0 f> xmm0_40)
        _libm_sse2_sqrt_precise()
    else
        xmm0_40 = _mm_sqrt_sd(xmm0_40, xmm0_40)
    
    float var_30_1
    var_30_1.q = xmm0_40
    double xmm0_44 = _mm_cvtps_pd(xmm0_35 * xmm0_35 + xmm0_33 * xmm0_33)
    
    if (0 f> xmm0_44)
        _libm_sse2_sqrt_precise()
    else
        xmm0_44 = _mm_sqrt_sd(xmm0_44, xmm0_44)
    
    var_30_1.q = var_30_1.q + xmm0_44
    double xmm0_48 = _mm_cvtps_pd(xmm2_18 * xmm2_18 + xmm2_16 * xmm2_16)
    
    if (0 f> xmm0_48)
        _libm_sse2_sqrt_precise()
    else
        xmm0_48 = _mm_sqrt_sd(xmm0_48, xmm0_48)
    
    float xmm0_49 = _mm_cvtpd_ps(var_30_1.q + xmm0_48)
    float xmm1_34 = var_10_1.d
    double xmm0_53 = _mm_cvtps_pd(xmm2_22 * xmm2_22 + xmm1_34 * xmm1_34)
    
    if (0 f> xmm0_53)
        _libm_sse2_sqrt_precise()
    else
        xmm0_53 = _mm_sqrt_sd(xmm0_53, xmm0_53)
    
    float xmm0_54 = fconvert.s(xmm0_53)
    xmm1_16 = xmm0_49 * xmm0_49 - xmm0_54 * xmm0_54
    
    if (ebx s> 0x10)
        return 

int32_t eax_1 = *arg2

if (arg3 != 0)
    *(arg3 + (eax_1 << 3)) = arg12
    *(arg3 + (eax_1 << 3) + 4) = arg13

*arg2 = eax_1 + 1
