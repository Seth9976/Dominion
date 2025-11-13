// 函数: sub_6dc2d0
// 地址: 0x6dc2d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void var_60
int128_t* ecx
int32_t edx
int128_t* eax_3 = sub_6dc9a0(&var_60, edx, ecx, &var_60)
float xmm2[0x4] = *eax_3
int32_t eax_4 = *(eax_3 + 0x18)
int64_t xmm0 = eax_3[1].q
float xmm4_1 = _mm_shuffle_ps(xmm2, xmm2, 0x55)
float xmm3_1 = _mm_shuffle_ps(xmm2, xmm2, 0xaa)
float xmm1_1 = xmm4_1 * 2f
float xmm1_2 = xmm1_1 * xmm4_1
float xmm5_2 = _mm_shuffle_ps(xmm2, xmm2, 0xff) * 2f
float xmm1_5 = xmm3_1 * 2f * xmm3_1
float xmm1_7 = xmm2[0] * 2f
float xmm5_3 = xmm5_2 * xmm4_1
float xmm2_2 = xmm5_2 * xmm3_1
float xmm6_1 = xmm1_7 * xmm4_1
float xmm7_1 = xmm1_7 * xmm3_1
float xmm4_2 = 1f - xmm1_7 f* *eax_3
float xmm1_10 = xmm1_1 * xmm3_1
float xmm3_3 = xmm5_2 f* *eax_3
*arg1 = 1f - xmm1_2 - xmm1_5
*(arg1 + 4) = xmm6_1 - xmm2_2
*(arg1 + 8) = xmm5_3 + xmm7_1
*(arg1 + 0xc) = xmm0.d
*(arg1 + 0x10) = xmm2_2 + xmm6_1
*(arg1 + 0x14) = xmm4_2 - xmm1_5
*(arg1 + 0x18) = xmm1_10 - xmm3_3
*(arg1 + 0x1c) = xmm0:4.d
*(arg1 + 0x20) = xmm7_1 - xmm5_3
*(arg1 + 0x24) = xmm3_3 + xmm1_10
*(arg1 + 0x28) = xmm4_2 - xmm1_2
*(arg1 + 0x2c) = eax_4
*(arg1 + 0x30) = 0
*(arg1 + 0x34) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x3c) = 0x3f800000
CookieCheckFunction(arg1)
return arg1
