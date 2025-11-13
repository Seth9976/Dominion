// 函数: sub_6e8f30
// 地址: 0x6e8f30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
int32_t eax_2 = arg2[1].d
int32_t var_90 = 0x3f800000
int128_t var_8c = *(arg2 + 0xc)
int64_t var_7c = *arg2
int32_t var_74 = eax_2
int128_t var_40 = var_90.o
int128_t var_30 = var_8c
void var_b0
int128_t* eax_4 = sub_639a10(&var_b0, arg2, &var_40, &var_b0)
float xmm6[0x4] = *eax_4
int32_t xmm1 = (eax_4[1]).d
float xmm0_5 = xmm6[0] * *arg3
float xmm3_1 = _mm_shuffle_ps(xmm6, xmm6, 0xaa)
float xmm0_7 = xmm6[0] * arg3[1]
float xmm5_1 = xmm3_1 * xmm3_1
float xmm0_9 = xmm6[0] * arg3[2]
float xmm0_11 = xmm1 f* xmm1
float xmm1_2 = _mm_shuffle_ps(xmm6, xmm6, 0x55)
float xmm6_1 = _mm_shuffle_ps(xmm6, xmm6, 0xff)
float xmm7_1 = xmm6_1 f* eax_4[1].d
float xmm0_13 = xmm3_1 * xmm1_2
float xmm2_1 = xmm1_2 * xmm1_2
float xmm1_4 = xmm0_13 - xmm7_1
float xmm4_1 = xmm6_1 * xmm6_1
float xmm7_3 = xmm6_1 * xmm1_2
float xmm6_2 = xmm6_1 * xmm3_1
float xmm1_8 = xmm2_1 + xmm0_11 - xmm5_1 - xmm4_1
float xmm1_10 = xmm3_1 f* eax_4[1].d
float xmm7_4 = xmm7_3 + xmm1_10
float xmm7_6 = xmm7_1 + xmm0_13
float xmm7_8 = xmm0_11 - xmm2_1
float xmm2_3 = xmm1_2 f* eax_4[1].d
float xmm0_16 = xmm7_8 + xmm5_1 - xmm4_1
float xmm0_18 = xmm6_2 - xmm2_3
float xmm2_4 = xmm2_3 + xmm6_2
float xmm0_20 = xmm7_3 - xmm1_10
float xmm3_2 = arg3[5]
float xmm6_3[0x4] = eax_4[1]
float xmm3_3 = xmm3_2 + xmm3_2
float xmm7_10 = xmm7_8 - xmm5_1 + xmm4_1
float xmm4_2 = arg3[4]
float xmm2_5 = arg3[3]
float xmm7_12 = xmm4_2 + xmm4_2
float xmm5_3 = xmm2_5 + xmm2_5
var_8c:4.d = (xmm0_7 + xmm0_7) * xmm1_4 + xmm1_8 * xmm0_5 + (xmm0_9 + xmm0_9) * xmm7_4
    + _mm_shuffle_ps(xmm6_3, xmm6_3, 0x55)
var_8c:8.d = (xmm0_5 + xmm0_5) * xmm7_6 + xmm0_16 * xmm0_7 + (xmm0_9 + xmm0_9) * xmm0_18
    + _mm_shuffle_ps(xmm6_3, xmm6_3, 0xaa)
var_8c:0xc.d =
    (xmm0_7 + xmm0_7) * xmm2_4 + (xmm0_5 + xmm0_5) * xmm0_20 + xmm7_10 * xmm0_9 f+ *(eax_4 + 0x1c)
var_7c.d = xmm2_5 * xmm1_8 + xmm7_12 * xmm1_4 + xmm3_3 * xmm7_4
var_7c:4.d = xmm5_3 * xmm7_6 + xmm4_2 * xmm0_16 + xmm3_3 * xmm0_18
float xmm4_5 = *(arg2 + 0x1c) * 0.5f
float xmm2_10 = arg2[4].d f* 0.5f
float xmm3_6 = *(arg2 + 0x24) * 0.5f
float var_74_1 = xmm5_3 * xmm0_20 + xmm7_12 * xmm2_4 + arg3[5] * xmm7_10
var_40:8.d = 0f - xmm4_5
float var_30_2 = xmm4_5 + 0f
var_40:0xc.d = 0f - xmm2_10
var_30_2 = xmm2_10 + 0f
var_30_2 = 0f - xmm3_6
var_30_2 = xmm3_6 + 0f
int32_t* result = sub_6e9290(eax_4, &var_40:8, &var_8c:4, arg4)
CookieCheckFunction(result)
return result
