// 函数: sub_731ef0
// 地址: 0x731ef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ebx = *(arg3 + 0x2c)
int32_t edx = arg3[6].d
*arg4 = 0
int64_t xmm0_1 = *arg3
arg4[1].d = 0
float eax_2 = arg3[1].d
float xmm6 = xmm0_1:4.d
float xmm2 = xmm0_1.d
float* ecx_3 = (zx.d(ebx.b) << 6) + arg2
float xmm6_1 = xmm6 * ecx_3[9]
float xmm5_1 = xmm6 * ecx_3[5]
float xmm4_2 = xmm6 * ecx_3[1] + xmm2 * *ecx_3
float xmm0_5 = eax_2 * ecx_3[2]
float xmm3_2 = _mm_cvtepi32_ps(zx.o(edx.b)) / 255f
int64_t xmm0_10 = *arg3
float xmm4_6 = (xmm4_2 + xmm0_5 + ecx_3[3]) * xmm3_2 f+ *arg4
float xmm7 = xmm0_10:4.d
float xmm2_2 = xmm0_10.d
float xmm5_6 = (xmm5_1 + xmm2 * ecx_3[4] + eax_2 * ecx_3[6] + ecx_3[7]) * xmm3_2 f+ *(arg4 + 4)
float xmm6_6 = (xmm6_1 + xmm2 * ecx_3[8] + eax_2 * ecx_3[0xa] + ecx_3[0xb]) * xmm3_2 f+ arg4[1].d
float eax_7 = arg3[1].d
float* ecx_6 = (zx.d((ebx u>> 8).b) << 6) + arg2
float xmm6_8 = xmm7 * ecx_6[1]
float xmm0_12 = xmm2_2 * *ecx_6
float xmm3_5 = _mm_cvtepi32_ps(zx.o((edx u>> 8).b)) / 255f
float xmm6_13 = (xmm6_8 + xmm0_12 + eax_7 * ecx_6[2] + ecx_6[3]) * xmm3_5 + xmm4_6
int64_t xmm0_19 = *arg3
float xmm2_4 = xmm0_19.d
float eax_13 = arg3[1].d
float xmm4_12 = (xmm7 * ecx_6[5] + xmm2_2 * ecx_6[4] + eax_7 * ecx_6[6] + ecx_6[7]) * xmm3_5
float xmm7_6 =
    (xmm7 * ecx_6[9] + xmm2_2 * ecx_6[8] + eax_7 * ecx_6[0xa] + ecx_6[0xb]) * xmm3_5 + xmm6_6
float* ecx_9 = (zx.d((ebx u>> 0x10).b) << 6) + arg2
float xmm3_7 = _mm_cvtepi32_ps(zx.o((edx u>> 0x10).b))
float eax_17 = arg3[1].d
float* ebx_3 = (ebx u>> 0x18 << 6) + arg2
float xmm5_7 = xmm0_19:4.d
float xmm3_8 = xmm3_7 / 255f
float xmm7_13 =
    (xmm5_7 * ecx_9[1] + xmm2_4 * *ecx_9 + eax_13 * ecx_9[2] + ecx_9[3]) * xmm3_8 + xmm6_13
int64_t xmm0_28 = *arg3
float xmm6_20 = (xmm5_7 * ecx_9[5] + xmm2_4 * ecx_9[4] + eax_13 * ecx_9[6] + ecx_9[7]) * xmm3_8
    + xmm4_12 + xmm5_6
float xmm5_13 =
    (xmm5_7 * ecx_9[9] + xmm2_4 * ecx_9[8] + eax_13 * ecx_9[0xa] + ecx_9[0xb]) * xmm3_8 + xmm7_6
float xmm4_14 = xmm0_28:4.d
float xmm3_9 = xmm0_28.d
float xmm1_7 = xmm4_14 * ebx_3[1]
float xmm0_30 = xmm3_9 * *ebx_3
float xmm5_16 = _mm_cvtepi32_ps(zx.o(edx u>> 0x18)) / 255f
float xmm0_34 = xmm3_9 * ebx_3[4]
float xmm3_10 = xmm3_9 * ebx_3[8]
*arg4 = (xmm1_7 + xmm0_30 + eax_17 * ebx_3[2] + ebx_3[3]) * xmm5_16 + xmm7_13
float xmm4_20 =
    (xmm4_14 * ebx_3[9] + xmm3_10 + eax_17 * ebx_3[0xa] + ebx_3[0xb]) * xmm5_16 + xmm5_13
*(arg4 + 4) = (xmm4_14 * ebx_3[5] + xmm0_34 + eax_17 * ebx_3[6] + ebx_3[7]) * xmm5_16 + xmm6_20
arg4[1].d = xmm4_20
CookieCheckFunction(arg4)
return arg4
