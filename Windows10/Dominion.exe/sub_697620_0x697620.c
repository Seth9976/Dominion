// 函数: sub_697620
// 地址: 0x697620
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float var_18[0x4]
float* eax_1 = sub_697400(arg2, arg3 + 0x10, arg2, &var_18, arg3 + 0x20)

if (arg5 != 0)
    *arg4 = *eax_1
    return arg4

float xmm5[0x4] = *eax_1
float xmm4_1 = _mm_shuffle_ps(xmm5, xmm5, 0xaa)
float xmm2_1 = _mm_shuffle_ps(xmm5, xmm5, 0xff)
float xmm4_2 = xmm4_1 f- xmm5
float xmm0_2 = _mm_shuffle_ps(xmm5, xmm5, 0x55)
float xmm2_2 = xmm2_1 - xmm0_2
float xmm2_3 = xmm2_2 f* *(arg3 + 0xa4)
float xmm3_2 = xmm4_2 f* *(arg3 + 0xa0) f+ xmm5
float xmm1_2 = xmm2_2 f* *(arg3 + 0x9c) + xmm0_2
*arg4 = xmm4_2 f* *(arg3 + 0x98) f+ xmm5
*(arg4 + 4) = xmm1_2
*(arg4 + 8) = xmm3_2
*(arg4 + 0xc) = xmm2_3 + xmm0_2
return arg4
