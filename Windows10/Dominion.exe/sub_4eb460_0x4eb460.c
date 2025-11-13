// 函数: sub_4eb460
// 地址: 0x4eb460
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm2 = arg3[1]
float xmm3 = *arg3
float xmm4_1 = xmm2 * xmm2
float xmm1_2 = xmm3 f* arg3[3] + arg3[2] f* xmm2
float xmm2_3 = xmm3 * xmm3 + xmm4_1
double var_18 = _mm_cvtps_pd(xmm1_2 + xmm1_2)
long double x87_r6 = fconvert.t(_mm_cvtps_pd(1f - (xmm2_3 + xmm2_3)))
_CIatan2()
double var_18_2 = fconvert.d(x87_r6)
float xmm0_6 = _mm_cvtpd_ps(zx.o(var_18_2))
float xmm2_6 = arg3[3] f* arg3[1]
*arg6 = xmm0_6 * 360f / 6.28318548f
float xmm2_7 = xmm2_6 - *arg3 f* arg3[2]
uint32_t xmm2_8[0x4] = xmm2_7 + xmm2_7
float xmm0_12 = sub_4ae0b0(xmm2_8)

if (xmm0_12 < 1f)
    double xmm0_13 = _mm_cvtps_pd(xmm2_8)
    _libm_sse2_asin_precise(arg5, arg4.w, var_18_2, xmm4_1, __return_addr)
    arg6[1] = fconvert.s(xmm0_13) * 360f / 6.28318548f
else if (9.99999975e-06f <= xmm0_12)
    arg6[1] = xmm2_8 f/ xmm0_12 * 90f
else
    arg6[1] = 1f * 90f

float xmm1_4 = arg3[2]
float xmm0_19 = arg3[3] f* xmm1_4 + *arg3 * xmm2
float xmm1_6 = xmm1_4 * xmm1_4 + xmm4_1
long double result = fconvert.t(_mm_cvtps_pd(xmm0_19 + xmm0_19))
double xmm0_22 = _mm_cvtps_pd(1f - (xmm1_6 + xmm1_6))
_CIatan2(arg5, arg4, xmm0_22, xmm4_1, xmm2)
arg6[2] = _mm_cvtpd_ps(zx.o(fconvert.d(fconvert.t(xmm0_22)))) * 360f / 6.28318548f
return result
