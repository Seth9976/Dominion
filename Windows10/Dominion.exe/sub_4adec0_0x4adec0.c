// 函数: sub_4adec0
// 地址: 0x4adec0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float xmm2_3 = (arg2[6] f- arg3[6]) * arg4 + arg3[6]
float xmm1_3 = (arg2[7] f- arg3[7]) * arg4 + arg3[7]
arg5[5] = (arg2[5] f- arg3[5]) * arg4 + arg3[5]
arg5[6] = xmm2_3
arg5[7] = xmm1_3
float xmm2_4[0x4] = *(arg2 + 4)
float xmm7 = arg3[4]
float xmm1_5 = arg3[1] f* xmm2_4
float xmm0_7 = (*arg2 - *arg3) * arg4 + *arg3
float xmm3_1 = _mm_shuffle_ps(xmm2_4, xmm2_4, 0xff)
float xmm4_1 = _mm_shuffle_ps(xmm2_4, xmm2_4, 0x55)
float xmm5_1 = _mm_shuffle_ps(xmm2_4, xmm2_4, 0xaa)
*arg5 = xmm0_7

if (not(0 f<= xmm1_5 + xmm7 * xmm3_1 + arg3[2] * xmm4_1 + arg3[3] * xmm5_1))
    int128_t var_30
    var_30:0xc.d = xmm3_1 * -1f
    var_30.d = xmm2_4 f* -1f
    var_30:4.d = xmm4_1 * -1f
    var_30:8.d = xmm5_1 * -1f
    xmm3_1 = var_30:0xc.d
    xmm5_1 = var_30:8.d
    xmm4_1 = var_30:4.d
    xmm2_4 = var_30.d

float xmm2_8 = (xmm2_4 f- arg3[1]) * arg4 + arg3[1]
float xmm4_5 = (xmm4_1 - arg3[2]) * arg4 + arg3[2]
int128_t xmm3_5 = (xmm3_1 - xmm7) * arg4 + xmm7
float xmm5_5 = (xmm5_1 - arg3[3]) * arg4 + arg3[3]
int32_t __saved_ebp
float xmm0_20 = sub_4ac580(&__saved_ebp, 
    xmm2_8 * xmm2_8 + xmm3_5.d f* xmm3_5 + xmm4_5 * xmm4_5 + xmm5_5 * xmm5_5)
int128_t var_30_2
var_30_2:0xc.d = xmm3_5.d / xmm0_20
var_30_2.d = xmm2_8 / xmm0_20
var_30_2:4.d = xmm4_5 / xmm0_20
var_30_2:8.d = xmm5_5 / xmm0_20
*(arg5 + 4) = var_30_2
CookieCheckFunction(arg5)
return arg5
