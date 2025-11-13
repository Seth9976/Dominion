// 函数: sub_6b7ae0
// 地址: 0x6b7ae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t xmm0 = arg3[7]
int32_t xmm1 = arg3[0xb]
arg6[5] = arg3[3]
arg6[6] = xmm0
arg6[7] = xmm1
float xmm1_1 = *arg3
float xmm0_1 = arg3[1]
float xmm0_3 = arg3[2]
double xmm0_5 = _mm_cvtps_pd(xmm1_1 * xmm1_1 + xmm0_1 * xmm0_1 + xmm0_3 * xmm0_3)
void var_48

if (0 f> xmm0_5)
    arg2 = _libm_sse2_sqrt_precise(arg5, arg4, var_48)
else
    xmm0_5 = _mm_sqrt_sd(xmm0_5, xmm0_5)
float xmm0_6 = fconvert.s(xmm0_5)
float xmm6 = *arg3
float xmm5 = 1f / xmm0_6
float xmm7 = arg3[2]
*arg6 = xmm0_6
float xmm4_1 = xmm5 f* arg3[4]
float xmm3_1 = xmm5 f* arg3[5]
float xmm2_1 = xmm5 f* arg3[6]
float xmm1_6 = xmm5 f* arg3[8]
float xmm0_8 = arg3[1] f* xmm5
float xmm0_10 = xmm5 f* arg3[9]
float xmm5_1 = xmm5 f* arg3[0xa]
float var_30 = xmm6 * xmm5
float var_2c = xmm0_8
float var_28 = xmm7 * xmm5
float var_24 = xmm4_1
float var_20 = xmm3_1
float var_1c = xmm2_1
float var_18 = xmm1_6
float var_14 = xmm0_10
float var_10 = xmm5_1
float var_40[0x4]
*(arg6 + 4) = *sub_4ac5b0(&var_40, arg2, &var_30, arg3, &var_40)
CookieCheckFunction(arg6)
return arg6
