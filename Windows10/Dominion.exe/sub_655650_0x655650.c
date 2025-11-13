// 函数: sub_655650
// 地址: 0x655650
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm2[0x4] = *(arg3 + 0x1554)
int32_t xmm6 = *(arg3 + 0x16cc)
int32_t xmm7 = *(arg3 + 0x16d0)
float xmm3 = *(arg3 + 0x1428)
int32_t var_10 = 0
int32_t var_c = xmm6
int32_t var_8 = xmm7
*arg4 = 0.o
float xmm4_2 = xmm3 f* xmm2 f+ *arg4
float xmm5_1 = xmm3 * _mm_shuffle_ps(xmm2, xmm2, 0x55)
float xmm1_1 = xmm3 * _mm_shuffle_ps(xmm2, xmm2, 0xaa)
float xmm0_5 = *(arg4 + 8)
float xmm5_2 = xmm5_1 f+ *(arg4 + 4)
float xmm2_1 = _mm_shuffle_ps(xmm2, xmm2, 0xff)
float xmm0_6 = xmm0_5 - xmm1_1
float xmm1_2 = *(arg4 + 0xc)
*arg4 = xmm4_2
float xmm1_3 = xmm1_2 - xmm3 * xmm2_1
*(arg4 + 4) = xmm5_2
*(arg4 + 8) = xmm0_6
*(arg4 + 0xc) = xmm1_3

if (xmm4_2 >= xmm0_6 || not(xmm5_2 < xmm1_3))
    int32_t var_10_1 = 0
    int32_t var_c_1 = xmm6
    int32_t var_8_1 = xmm7
    *arg4 = 0.o

return arg4
