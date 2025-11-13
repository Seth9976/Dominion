// 函数: sub_5a5ed0
// 地址: 0x5a5ed0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi = arg1 + 0x215fd4
void* var_24 = arg1
void* esi = arg1 + 0x10
int32_t* var_1c = edi
void* ebx = arg1 + 0x185fd0

if (*(arg1 + 0x175fcc) != 0)
    var_1c = edi
else
    sub_5a5840(esi, ebx)
    arg1 = var_24
    *(arg1 + 0x175fcc) = 1

*edi = 0
float xmm0 = *(arg1 + 0x195fd0)
xmm0 f- 0
int32_t* eax
eax:1.b = (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    uint32_t xmm6_1[0x4] = data_891390
    void* eax_1 = esi + 0x20
    *(arg1 + 0x195fd0) = 0x3c23d70a
    int32_t xmm5_1[0x4] = zx.o(0)
    int32_t xmm4_1[0x4] = zx.o(0)
    int32_t i_3 = 0x800
    int32_t i
    
    do
        int64_t xmm2_1 = *(eax_1 + 0xc)
        eax_1 += 0x60
        float xmm1_1[0x4] = *(eax_1 - 0x6c)
        float xmm3_2[0x4] = _mm_unpacklo_ps(*(eax_1 - 0x78), *(eax_1 - 0x60))
        int64_t xmm1_2 = _mm_unpacklo_ps(xmm1_1, xmm2_1)
        int64_t xmm2_2 = *(eax_1 - 0x24)
        float xmm3_3[0x4] = _mm_unpacklo_ps(xmm3_2, xmm1_2)
        int64_t xmm1_4 = _mm_unpacklo_ps(*(eax_1 - 0x3c), xmm2_2)
        float xmm0_2[0x4] = _mm_cmpeq_ps(zx.o(0), xmm3_3, 1)
        float xmm3_4[0x4] = *(eax_1 - 0x48)
        xmm5_1 = _mm_add_epi32(xmm5_1, _mm_and_ps(xmm0_2, xmm6_1))
        xmm4_1 = _mm_add_epi32(xmm4_1, 
            _mm_and_ps(
                _mm_cmpeq_ps(zx.o(0), 
                    _mm_unpacklo_ps(_mm_unpacklo_ps(xmm3_4, *(eax_1 - 0x30)), xmm1_4), 1), 
                xmm6_1))
        i = i_3
        i_3 -= 1
    while (i != 1)
    int32_t xmm4_2[0x4] = _mm_add_epi32(xmm4_1, xmm5_1)
    ebx = arg1 + 0x185fd0
    int32_t xmm4_3[0x4] = _mm_add_epi32(xmm4_2, _mm_bsrli_si128(xmm4_2, 8))
    *(arg1 + 0x195fd0) = _mm_cvtepi32_ps(zx.o(_mm_add_epi32(xmm4_3, _mm_bsrli_si128(xmm4_3, 4))))
        * 6.10351562e-05f * 0.00999999978f

int32_t* result = esi + 4
int32_t i_1 = 0
int32_t i_2 = 0
int32_t* result_1 = result

do
    int32_t edx_2 = *ebx
    
    if (edx_2 s>= 0)
        float xmm2_3 = result[-1]
        
        if (not(0.0250000004f > xmm2_3) && not(xmm2_3 > 1.97500002f))
            float xmm3_7 = *result
            
            if (not(0.0250000004f > xmm3_7) && not(xmm3_7 > 0.975000024f))
                int32_t esi_1 = edx_2 * 3
                float xmm4_5 = *(arg1 + (esi_1 << 2) + 0x10)
                
                if (not(0.0250000004f > xmm4_5) && not(xmm4_5 > 1.97500002f))
                    float xmm1_5 = *(arg1 + (esi_1 << 2) + 0x14)
                    
                    if (not(0.0250000004f > xmm1_5) && not(xmm1_5 > 0.975000024f))
                        float xmm5_2 = *(ebx - 0x10000)
                        
                        if (not(xmm5_2 f<= *(arg1 + 0x195fd0)) && not(result[1] f<= 0)
                                && not(*(arg1 + (esi_1 << 2) + 0x18) f<= 0))
                            int32_t edi_1 = *var_1c
                            float xmm0_18 = *(arg1 + (edx_2 << 2) + 0x175fd0) * 50f
                            int32_t edi_2 = edi_1 << 5
                            *var_1c = edi_1 + 1
                            int32_t xmm1_7 = _mm_min_ss(0x40800000, xmm0_18)
                            int32_t esi_2 = *ebx
                            float xmm0_19[0x2] = _mm_min_ss(0x40800000, xmm5_2 * 50f)
                            *(edi_2 + arg1 + 0x195fd4) = xmm2_3 * 1024f
                            *(edi_2 + arg1 + 0x195fd8) = xmm3_7 * 1024f
                            double xmm0_20 = _mm_cvtps_pd(xmm0_19)
                            int32_t entry_ebx
                            
                            if (0 f> xmm0_20)
                                _libm_sse2_sqrt_precise(arg3, arg2, entry_ebx)
                            else
                                xmm0_20 = _mm_sqrt_sd(xmm0_20, xmm0_20)
                            
                            *(edi_2 + var_24 + 0x195fdc) = fconvert.s(xmm0_20)
                            *(edi_2 + var_24 + 0x195fe0) = i_2
                            *(edi_2 + var_24 + 0x195fe4) = xmm4_5 * 1024f
                            *(edi_2 + var_24 + 0x195fe8) = xmm1_5 * 1024f
                            double xmm0_25 = _mm_cvtps_pd(xmm1_7)
                            
                            if (0 f> xmm0_25)
                                _libm_sse2_sqrt_precise(arg3, arg2, entry_ebx)
                            else
                                xmm0_25 = _mm_sqrt_sd(xmm0_25, xmm0_25)
                            
                            arg1 = var_24
                            result = result_1
                            *(edi_2 + arg1 + 0x195fec) = fconvert.s(xmm0_25)
                            *(edi_2 + arg1 + 0x195ff0) = esi_2
                            i_1 = i_2
    
    i_1 += 1
    result = &result[3]
    ebx += 4
    i_2 = i_1
    result_1 = result
while (i_1 s< 0x4000)

return result
