// 函数: sub_5bc480
// 地址: 0x5bc480
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
float xmm6[0x4] = data_893890
float xmm1_1[0x4] = _mm_min_ps(data_893680, arg1)
float xmm5[0x4] = data_8935f0
float xmm2[0x4] = data_893770
float xmm6_1[0x4] = _mm_max_ps(xmm6, xmm1_1)
float xmm5_1[0x4] = _mm_mul_ps(xmm5, xmm6_1)
float xmm7[0x4] = data_893860
float xmm5_2[0x4] = __addps_xmmps_memps(xmm5_1, data_8934e0)
uint32_t xmm4_1[0x4] = __andps_xmmxud_memxud(xmm5_2, data_8937a0.o)
float xmm1_3[0x4] = _mm_cmpeq_ps(xmm5_2, zx.o(0), 1)
float xmm0[0x4] = data_893370
float xmm3_1[0x4] = _mm_add_ps(xmm4_1, xmm2)
float xmm4_2[0x4] = _mm_cmpeq_ps(xmm4_1, xmm2, 1)
uint32_t xmm3_2[0x4] = _mm_sub_ps(xmm3_1, xmm2)
uint32_t xmm2_4[0x4] =
    _mm_or_ps(_mm_and_ps(data_8937c0.o ^ xmm3_2, xmm1_3), _mm_andnot_ps(xmm1_3, xmm3_2))
float xmm3_3[0x4] = *"giP9giP9giP9giP9"
uint32_t xmm2_5[0x4] = _mm_and_ps(xmm2_4, xmm4_2)
int128_t xmm1_5 = data_8937c0.o
float xmm2_6[0x4] = _mm_or_ps(xmm2_5, _mm_andnot_ps(xmm4_2, xmm5_2))
float xmm2_7[0x4] =
    _mm_sub_ps(xmm2_6, __andps_xmmxud_memxud(_mm_cmpeq_ps(xmm5_2, xmm2_6, 1), data_8935b0))
float xmm0_1[0x4] = _mm_mul_ps(xmm0, xmm2_7)
float xmm7_3[0x4] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(xmm7, xmm2_7), xmm6_1), xmm0_1)
float xmm0_2[0x4] = data_8936d0
float xmm1_7[0x4] = _mm_max_ps(xmm1_5 ^ xmm0_2, xmm2_7)
float xmm3_4[0x4] = _mm_mul_ps(xmm3_3, xmm7_3)
float xmm0_3[0x4] = _mm_min_ps(xmm0_2, xmm1_7)
float xmm3_5[0x4] = __addps_xmmps_memps(xmm3_4, data_8933a0)
int32_t xmm5_5[0x4] = _mm_cvttps_epi32(xmm0_3)
float xmm3_6[0x4] = _mm_mul_ps(xmm3_5, xmm7_3)
float xmm4_5[0x4] = _mm_mul_ps(xmm7_3, xmm7_3)
int32_t xmm2_9[0x4] = _mm_srai_epi32(xmm5_5, 2)
float xmm3_7[0x4] = __addps_xmmps_memps(xmm3_6, data_8933e0)
int32_t xmm5_6[0x4] = _mm_sub_epi32(xmm5_5, xmm2_9)
int32_t xmm1_9[0x4] = __paddd_xmmdq_memdq(xmm2_9, data_891970)
float xmm0_5[0x4] = _mm_mul_ps(xmm4_5, xmm7_3)
int32_t xmm5_7[0x4] = _mm_sub_epi32(xmm5_6, xmm2_9)
uint32_t xmm1_10[0x4] = _mm_slli_epi32(xmm1_9, 0x17)
uint32_t xmm5_10[0x4] =
    _mm_slli_epi32(__paddd_xmmdq_memdq(_mm_sub_epi32(xmm5_7, xmm2_9), data_891970), 0x17)
float xmm3_9[0x4] = _mm_add_ps(_mm_mul_ps(xmm3_7, xmm0_5), 
    __addps_xmmps_memps(
        _mm_mul_ps(__addps_xmmps_memps(_mm_mul_ps(data_893410, xmm7_3), data_893460), xmm7_3), 
        data_8934e0))
float xmm0_12[0x4] = _mm_add_ps(data_8935b0, xmm7_3)
_mm_max_ps(arg1, 
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_mul_ps(_mm_mul_ps(_mm_add_ps(_mm_mul_ps(xmm3_9, xmm4_5), xmm0_12), xmm1_10), 
                xmm1_10), 
            xmm1_10), 
        xmm5_10))
