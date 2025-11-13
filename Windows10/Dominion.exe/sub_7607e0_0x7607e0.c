// 函数: sub_7607e0
// 地址: 0x7607e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

double xmm1 = arg1[3]

if (*(arg1 + 0x2c) == 2)
    if (not(xmm1 <= arg4))
        arg1[3] = arg4
        xmm1 = arg4
    
    double xmm0_3 = (arg4 - xmm1) f* arg1[4]
    _libm_sse2_sin_precise(arg3, arg2, __return_addr)
    float xmm2_1[0x2] = arg1[1].d
    arg4:4.d = fconvert.s(xmm0_3 * _mm_cvtps_pd(xmm2_1) + _mm_cvtps_pd(xmm2_1 f+ *arg1))
    return fconvert.t(arg4:4.d)

if (not(xmm1 <= arg4))
    float xmm2_3 = arg1[5].d
    float xmm1_4 = xmm2_3 f- *arg1
    *arg1 = xmm2_3
    arg1[3] = arg4
    double xmm1_7 = _mm_cvtps_pd(1f - xmm1_4 f/ arg1[1].d) f* arg1[2]
    float xmm0_9 = *(arg1 + 4) - xmm2_3
    arg1[2] = xmm1_7
    arg1[1].d = xmm0_9
    arg1[4] = xmm1_7 + arg4
    xmm1 = arg4

if (not(arg4 f<= arg1[4]))
    long double result = fconvert.t(*(arg1 + 4))
    *(arg1 + 0x2c) = 0xffffffff
    return result

double xmm0_11 = _mm_cvtps_pd(arg1[1].d)
int32_t xmm0_14 = _mm_cvtpd_ps((arg4 - xmm1) f/ arg1[2] * xmm0_11 + _mm_cvtps_pd(*arg1))
arg4:4.d = xmm0_14
arg1[5].d = xmm0_14
return fconvert.t(arg4:4.d)
