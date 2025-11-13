// 函数: sub_5bc5f0
// 地址: 0x5bc5f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm5_3[0x4] = *arg1
float xmm4[0x4] = data_893880
float xmm2[0x4] = data_8937f0
float xmm0_1[0x4] = _mm_min_ps(data_893630, xmm5_3)
float xmm1[0x4] = data_893330
float xmm4_1[0x4] = _mm_max_ps(xmm4, xmm0_1)
uint32_t xmm5[0x4] = __andps_xmmxud_memxud(xmm5_3, data_8937a0.o)
float xmm3_1[0x4] = _mm_mul_ps(xmm4_1, xmm4_1)
float xmm5_1[0x4] = __cmpps_xmmps_memps_immb(xmm5, data_893380, 1)
float xmm2_1[0x4] = _mm_mul_ps(xmm2, xmm3_1)
float xmm1_1[0x4] = _mm_mul_ps(xmm1, xmm3_1)
uint32_t xmm5_2[0x4] = _mm_and_ps(xmm5_1, xmm4_1)
float xmm2_2[0x4] = __addps_xmmps_memps(xmm2_1, (*"~3a*~3a*~3a*~3a*A")[0].o)
float xmm1_2[0x4] = __addps_xmmps_memps(xmm1_1, data_893350)
float xmm2_3[0x4] = _mm_mul_ps(xmm2_2, xmm3_1)
float xmm1_3[0x4] = _mm_mul_ps(xmm1_2, xmm3_1)
float xmm2_4[0x4] = __addps_xmmps_memps(xmm2_3, data_893800)
float xmm1_4[0x4] = __addps_xmmps_memps(xmm1_3, data_8933b0)
float xmm2_5[0x4] = _mm_mul_ps(xmm2_4, xmm3_1)
float xmm1_5[0x4] = _mm_mul_ps(xmm1_4, xmm3_1)
float xmm2_6[0x4] = __addps_xmmps_memps(xmm2_5, (*"A")[0].o)
float xmm1_6[0x4] = __addps_xmmps_memps(xmm1_5, data_8933d0)
_mm_or_ps(
    _mm_andnot_ps(xmm5_1, 
        _mm_div_ps(
            _mm_mul_ps(
                __addps_xmmps_memps(
                    _mm_mul_ps(
                        __addps_xmmps_memps(
                            _mm_mul_ps(
                                __addps_xmmps_memps(_mm_mul_ps(xmm2_6, xmm3_1), 
                                    *"JCy7JCy7JCy7JCy7"), 
                                xmm3_1), 
                            data_893390), 
                        xmm3_1), 
                    data_8933c0), 
                xmm4_1), 
            xmm1_6)), 
    xmm5_2)
