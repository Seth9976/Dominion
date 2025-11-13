// 函数: sub_655720
// 地址: 0x655720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float xmm2[0x4] = *(arg3 + 0x157c)
float xmm4 = *(arg3 + 0x1428)
float xmm6 = *(arg3 + 0x16cc)
float xmm7 = *(arg3 + 0x16d0)
float xmm5_2 = xmm4 * _mm_shuffle_ps(xmm2, xmm2, 0x55) + 0f
float xmm0_3 = _mm_shuffle_ps(xmm2, xmm2, 0xaa)
float xmm3_2 = xmm4 f* xmm2 + 0f
float xmm4_1 = xmm4 * _mm_shuffle_ps(xmm2, xmm2, 0xff)
float xmm1_2 = xmm4 * xmm0_3 + xmm6
float var_20 = xmm3_2
float var_1c = xmm5_2
float xmm4_2 = xmm4_1 + xmm7
float var_18 = xmm1_2
float var_14 = xmm4_2

if (xmm3_2 >= xmm1_2 || not(xmm5_2 < xmm4_2))
    var_20 = 0f
    int32_t var_1c_1 = 0
    float var_18_1 = xmm6
    float var_14_1 = xmm7

var_20.o = var_20.o
float var_30[0x4]
*arg4 = *sub_655430(&var_30, &var_20, arg3 + 0x1620, &var_30)
CookieCheckFunction(arg4)
return arg4
