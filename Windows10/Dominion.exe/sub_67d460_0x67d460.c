// 函数: sub_67d460
// 地址: 0x67d460
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm1_1 = arg2 f- *(arg1 + 0x11c)

if (not(*(arg1 + 0x10c) f+ *(arg1 + 0x108) > xmm1_1) && *(arg1 + 0xfc) s<= 1)
    *arg3 = *(arg1 + 0x84)
    return arg3

float var_30[0x4]
int128_t* eax_2
int32_t edx
int32_t edx_1
eax_2, edx_1 = sub_67f110(&var_30, edx, arg1, arg2 f- *(arg1 + 0x118), &var_30)
var_30 = *eax_2
float var_20[0x4] = *sub_67f110(&var_20, edx_1, arg1 + 0x84, xmm1_1, &var_20)
float xmm0_5 = sub_64c3c0(arg1 + 0x108, xmm1_1)
float xmm3[0x4] = var_20
float xmm4[0x4] = var_30
float xmm1_4 = xmm3[0] f- xmm4
float xmm0_7 = _mm_shuffle_ps(xmm4, xmm4, 0xaa)
var_20[0] = xmm1_4 * xmm0_5 f+ xmm4
float xmm1_11 = (_mm_shuffle_ps(xmm3, xmm3, 0xaa) - xmm0_7) * xmm0_5 + xmm0_7
float xmm0_9 = _mm_shuffle_ps(xmm4, xmm4, 0x55)
float xmm4_1 = _mm_shuffle_ps(xmm4, xmm4, 0xff)
var_20[2] = xmm1_11
float xmm1_13 = _mm_shuffle_ps(xmm3, xmm3, 0x55)
float xmm3_4 = (_mm_shuffle_ps(xmm3, xmm3, 0xff) - xmm4_1) * xmm0_5 + xmm4_1
var_20[1] = (xmm1_13 - xmm0_9) * xmm0_5 + xmm0_9
var_20[3] = xmm3_4
*arg3 = var_20
return arg3
