// 函数: sub_5be710
// 地址: 0x5be710
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
uint32_t xmm2[0x4] = data_8937a0.o
float xmm3[0x4] = data_893780
float xmm5_1[0x4] = _mm_max_ps(data_893280, arg1)
uint32_t xmm4[0x4] = data_8937d0
uint32_t xmm0_1[0x4] = _mm_and_ps(xmm2, xmm5_1)
float xmm3_1[0x4] = _mm_mul_ps(xmm3, xmm5_1)
float xmm0_2[0x4] = __cmpps_xmmps_memps_immb(xmm0_1, data_893280, 1)
uint32_t xmm3_3[0x4] = _mm_or_ps(_mm_and_ps(xmm3_1, xmm0_2), _mm_andnot_ps(xmm0_2, xmm5_1))
uint32_t xmm2_1[0x4] = _mm_and_ps(xmm2, xmm3_3)
uint32_t xmm4_2[0x4] = __orps_xmmxud_memxud(_mm_and_ps(xmm4, xmm3_3), data_8934e0)
uint32_t xmm2_2[0x4] = _mm_srli_epi32(xmm2_1, 0x17)
float xmm3_4[0x4] = data_893430
float xmm0_4[0x4] = _mm_cvtepi32_ps(xmm2_2)
uint32_t xmm2_5[0x4] =
    _mm_or_ps(_mm_cmpeq_ps(data_8936b0, xmm0_4, 0), _mm_cmpeq_ps(zx.o(0), xmm5_1, 0))
uint32_t xmm1_1[0x4] = _mm_andnot_ps(xmm2_5, xmm4_2)
uint32_t xmm0_7[0x4] = _mm_and_ps(xmm2_5, xmm5_1)
float xmm5_2[0x4] = data_893790
uint32_t xmm1_2[0x4] = _mm_or_ps(xmm1_1, xmm0_7)
float xmm0_9[0x4] = __cmpps_xmmps_memps_immb(xmm1_2, data_893520, 1)
float xmm5_3[0x4] = _mm_cmpeq_ps(xmm5_2, arg1, 0)
float xmm4_4[0x4] = _mm_and_ps(xmm0_9, xmm1_2)
float xmm1_3[0x4] = __subps_xmmps_memps(xmm1_2, data_8935b0)
float xmm0_10[0x4] = _mm_cmpeq_ps(zx.o(0), arg1, 0)
float xmm4_5[0x4] = _mm_add_ps(xmm4_4, xmm1_3)
float xmm0_11[0x4] = data_893820
float xmm3_5[0x4] = _mm_mul_ps(xmm3_4, xmm4_5)
float xmm0_12[0x4] = _mm_mul_ps(xmm0_11, xmm4_5)
float xmm2_7[0x4] = _mm_mul_ps(xmm4_5, xmm4_5)
float xmm3_6[0x4] = __addps_xmmps_memps(xmm3_5, data_893810)
float xmm0_13[0x4] = __addps_xmmps_memps(xmm0_12, data_893450)
float xmm1_5[0x4] = _mm_mul_ps(xmm2_7, xmm4_5)
float xmm3_7[0x4] = _mm_mul_ps(xmm3_6, xmm4_5)
float xmm0_14[0x4] = _mm_mul_ps(xmm0_13, xmm4_5)
float xmm3_8[0x4] = __addps_xmmps_memps(xmm3_7, data_893440)
float xmm0_15[0x4] = __addps_xmmps_memps(xmm0_14, data_893830)
float xmm3_10[0x4] = _mm_add_ps(_mm_mul_ps(xmm3_8, xmm1_5), xmm0_15)
float xmm0_17[0x4] = _mm_mul_ps(data_893470, xmm4_5)
float xmm3_12[0x4] = _mm_add_ps(_mm_mul_ps(xmm3_10, xmm1_5), 
    __addps_xmmps_memps(_mm_mul_ps(__addps_xmmps_memps(xmm0_17, data_893840), xmm4_5), data_893490))
float xmm0_22[0x4] = _mm_mul_ps(data_893850, xmm2_7)
float xmm3_14[0x4] = _mm_add_ps(_mm_mul_ps(xmm3_12, xmm1_5), xmm0_22)
float xmm0_26[0x4] = __addps_xmmps_memps(
    _mm_or_ps(_mm_and_ps(data_8938b0, xmm0_2), __andnps_xmmxud_memxud(xmm0_2, data_8938a0)), xmm0_4)
float xmm3_15[0x4] = _mm_add_ps(xmm3_14, xmm4_5)
uint32_t xmm5_4[0x4] = __andps_xmmxud_memxud(xmm5_3, data_893790)
float xmm1_8[0x4] =
    _mm_sub_ps(_mm_andnot_ps(xmm2_5, xmm0_26), __andps_xmmxud_memxud(xmm0_9, data_8935b0))
float xmm0_29[0x4] = __cmpps_xmmps_memps_immb(zx.o(0), arg1, 6)
uint32_t xmm6_3[0x4] = _mm_or_ps(
    _mm_or_ps(_mm_andnot_ps(xmm5_3, _mm_add_ps(xmm3_15, __mulps_xmmps_memps(xmm1_8, data_893510))), 
        xmm5_4), 
    xmm0_29)
_mm_or_ps(__andps_xmmxud_memxud(data_893920, xmm0_10), _mm_andnot_ps(xmm0_10, xmm6_3))
