// 函数: sub_75a8d0
// 地址: 0x75a8d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
uint32_t j_2 = (arg4 + 3) u>> 2
double xmm0_2[0x2] = _mm_cvtepi32_pd(zx.q(arg4)) f+ *((arg4 u>> 0x1f << 3) + &data_893660)
uint32_t j_3 = j_2
bool cond:0 = (*(arg1 + 0x1068) & 1) == 0
float xmm5_2 = (arg6 - arg5) / _mm_cvtpd_ps(xmm0_2)
void* i
float var_60

if (cond:0)
    float xmm4_2[0x4] = *(arg1 + 0x1070)
    float* var_70_1 = &var_60
    int32_t ecx_2 = 0
    var_60 = arg5
    int32_t edx_2 = 0
    float xmm1_7 = arg5 + xmm5_2
    float xmm2_4[0x4] = _mm_shuffle_ps(0xbf800000, 0xbf800000, 0)
    var_70_1[1] = xmm5_2 + arg5
    float xmm3_4[0x4] = _mm_shuffle_ps(0x3f800000, 0x3f800000, 0)
    float xmm4_3[0x4] = _mm_shuffle_ps(xmm4_2, xmm4_2, 0)
    void* i_2 = nullptr
    var_70_1[2] = xmm5_2 + xmm1_7
    float xmm5_5[0x4] = xmm5_2 * 4f
    var_70_1[3] = xmm1_7 + xmm5_2 + xmm5_2
    i = arg1
    float xmm5_6[0x4] = _mm_shuffle_ps(xmm5_5, xmm5_5, 0)
    
    if (*(i + 0x1058) u> 0)
        do
            float xmm1_10[0x4] = *var_70_1
            
            if (j_2 != 0)
                uint32_t j
                
                do
                    float xmm0_28[0x4] = *(*arg2 + (ecx_2 << 2))
                    ecx_2 += 4
                    float xmm0_29[0x4] = _mm_mul_ps(xmm0_28, xmm1_10)
                    xmm1_10 = _mm_add_ps(xmm1_10, xmm5_6)
                    *(*arg3 + (edx_2 << 2)) =
                        _mm_mul_ps(_mm_min_ps(_mm_max_ps(xmm0_29, xmm2_4), xmm3_4), xmm4_3)
                    edx_2 += 4
                    j = j_2
                    j_2 -= 1
                while (j != 1)
            
            i = i_2 + 1
            i_2 = i
            j_2 = j_3
        while (i u< *(arg1 + 0x1058))
else
    int32_t ecx_1 = 0
    float xmm0_4[0x4] = _mm_shuffle_ps(0x3f5eb852, 0x3f5eb852, 0)
    float xmm0_5[0x4] = _mm_shuffle_ps(0xbdcccccd, 0xbdcccccd, 0)
    float xmm0_6[0x4] = _mm_shuffle_ps(0xbf7c7d56, 0xbf7c7d56, 0)
    float xmm0_7[0x4] = _mm_shuffle_ps(0x3f7c7d56, 0x3f7c7d56, 0)
    float xmm0_8[0x4] = *(arg1 + 0x1070)
    int32_t edx_1 = 0
    float xmm0_9[0x4] = _mm_shuffle_ps(xmm0_8, xmm0_8, 0)
    int32_t* var_70 = &var_60
    var_60 = arg5
    float xmm1_1 = arg5 + xmm5_2
    float xmm6_1[0x4] = _mm_shuffle_ps(0xbfd33333, 0xbfd33333, 0)
    float xmm7_1[0x4] = _mm_shuffle_ps(0x3fd33333, 0x3fd33333, 0)
    var_70[1] = xmm5_2 + arg5
    void* i_1 = nullptr
    var_70[2] = xmm5_2 + xmm1_1
    float xmm5_3[0x4] = xmm5_2 * 4f
    var_70[3] = xmm1_1 + xmm5_2 + xmm5_2
    i = arg1
    float xmm5_4[0x4] = _mm_shuffle_ps(xmm5_3, xmm5_3, 0)
    
    if (*(i + 0x1058) u> 0)
        do
            float xmm4_1[0x4] = *var_70
            
            if (j_2 != 0)
                uint32_t j_1
                
                do
                    float xmm3_1[0x4] = *(*arg2 + (ecx_1 << 2))
                    ecx_1 += 4
                    float xmm3_2[0x4] = _mm_mul_ps(xmm3_1, xmm4_1)
                    xmm4_1 = _mm_add_ps(xmm4_1, xmm5_4)
                    int32_t eax_11 = *arg3
                    float xmm0_15[0x4] = _mm_mul_ps(xmm3_2, xmm3_2)
                    uint32_t xmm1_5[0x4] = _mm_cmpeq_ps(xmm6_1, xmm3_2, 1)
                    float xmm0_16[0x4] = _mm_mul_ps(xmm0_15, xmm3_2)
                    float xmm3_3[0x4] = __mulps_xmmps_memps(xmm3_2, xmm0_4)
                    uint32_t xmm2_2[0x4] = _mm_cmpeq_ps(xmm3_2, xmm7_1, 1)
                    *(eax_11 + (edx_1 << 2)) = __mulps_xmmps_memps(
                        _mm_add_ps(
                            _mm_and_ps(
                                _mm_add_ps(
                                    _mm_and_ps(
                                        _mm_add_ps(__mulps_xmmps_memps(xmm0_16, xmm0_5), xmm3_3), 
                                        xmm1_5), 
                                    __andnps_xmmxud_memxud(xmm1_5, xmm0_6)), 
                                xmm2_2), 
                            __andnps_xmmxud_memxud(xmm2_2, xmm0_7)), 
                        xmm0_9)
                    edx_1 += 4
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
            
            i = i_1 + 1
            i_1 = i
            j_2 = j_3
        while (i u< *(arg1 + 0x1058))
CookieCheckFunction(i)
return i
