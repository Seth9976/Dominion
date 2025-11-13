// 函数: sub_75fcb0
// 地址: 0x75fcb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* i_7 = nullptr
void* i_5 = *(arg1 + 0x1058)
void* i_3 = i_5
void var_138
void var_70

if (i_5 s<= 0)
label_75fdc9:
    void var_74
    i_5 = &var_74 + i_7 * 0xc
    void* i_4 = 8 - i_7
    void* i
    
    do
        *(i_5 - 4) = 0
        i_5 += 0xc
        *(i_5 - 0xc) = 0
        *(i_5 - 8) = 0
        i = i_4
        i_4 -= 1
    while (i != 1)
else
    void* esi = &var_70
    void* i_6 = i_5
    void* edi = arg1 + 0x1d58
    void* i_1
    
    do
        float xmm0_1 = *(edi - 4)
        float xmm2_1 = *edi
        float xmm3_1 = *(edi + 4)
        *(esi - 8) = xmm0_1
        *(esi - 4) = xmm2_1
        double xmm0_6 = _mm_cvtps_pd(xmm0_1 * xmm0_1 + xmm2_1 * xmm2_1 + xmm3_1 * xmm3_1)
        
        if (0 f> xmm0_6)
            _libm_sse2_sqrt_precise(arg3, arg2.w, var_138)
        else
            xmm0_6 = _mm_sqrt_sd(xmm0_6, xmm0_6)
        
        float xmm3_2 = fconvert.s(xmm0_6)
        float xmm0_7 = (zx.o(0)).d
        xmm3_2 f- 0
        i_5:1.b = (xmm3_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_2, 0f) ? 1 : 0) << 2
            | (xmm3_2 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        float xmm1_5
        float xmm2_2
        
        if (p_2)
            xmm1_5 = xmm0_1 / xmm3_2
            xmm2_2 = xmm2_1 / xmm3_2
            xmm0_7 = xmm3_1 / xmm3_2
        else
            xmm1_5 = (zx.o(0)).d
            xmm2_2 = (zx.o(0)).d
        
        *esi = xmm0_7
        edi += 0xc
        *(esi - 4) = xmm2_2
        *(esi - 8) = xmm1_5
        esi += 0xc
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    i_7 = i_6
    
    if (i_7 s< 8)
        goto label_75fdc9

void* edi_1 = arg1
float xmm1_7 = *(edi_1 + 0x1d38)
float xmm0_9 = *(edi_1 + 0x1d30)
float xmm2_4 = *(edi_1 + 0x1d2c)
float xmm1_8 = *(edi_1 + 0x1d40)
float xmm1_9 = *(edi_1 + 0x1d20)
float xmm1_10 = *(edi_1 + 0x1d24)
float xmm4 = *(edi_1 + 0x1d34)
float xmm1_11 = *(edi_1 + 0x1d28)
float xmm1_12 = *(edi_1 + 0x1d44)
float xmm1_13 = *(edi_1 + 0x1d48)
float xmm1_14 = *(edi_1 + 0x1d4c)
double xmm0_14 = _mm_cvtps_pd(xmm0_9 * xmm0_9 + xmm2_4 * xmm2_4 + xmm4 * xmm4)

if (0 f> xmm0_14)
    _libm_sse2_sqrt_precise(arg3, arg2.w, var_138)
else
    xmm0_14 = _mm_sqrt_sd(xmm0_14, xmm0_14)

float xmm4_1 = fconvert.s(xmm0_14)
float var_128_2
float var_11c_2
float var_118_2
float var_104
float var_100_2
float var_fc_2
int64_t var_90
float eax_5

if ((*(edi_1 + 0x1068) & 4) == 0)
    xmm4_1 f- 0
    i_5:1.b = (xmm4_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_1, 0f) ? 1 : 0) << 2
        | (xmm4_1 < 0f ? 1 : 0)
    bool p_8 = unimplemented  {test ah, 0x44}
    int32_t xmm1_32
    float xmm2_10[0x4]
    float xmm3_9
    
    if (p_8)
        xmm2_10 = xmm2_4 / xmm4_1
        xmm3_9 = *(edi_1 + 0x1d30) / xmm4_1
        xmm1_32 = *(edi_1 + 0x1d34) / xmm4_1
    else
        xmm1_32 = (zx.o(0)).d
        xmm3_9 = (zx.o(0)).d
        xmm2_10 = zx.o(0)
    
    float xmm5_4 = *(edi_1 + 0x1d3c)
    float xmm4_8 = xmm5_4 f* xmm1_32 - xmm1_8 * xmm3_9
    float var_12c_1 = xmm1_32
    float xmm7_8 = xmm1_8 f* xmm2_10 - xmm1_7 f* xmm1_32
    float xmm6_8 = xmm1_7 * xmm3_9 - xmm5_4 f* xmm2_10
    double xmm0_42 = _mm_cvtps_pd(xmm7_8 * xmm7_8 + xmm4_8 * xmm4_8 + xmm6_8 * xmm6_8)
    
    if (0 f> xmm0_42)
        _libm_sse2_sqrt_precise(arg3, arg2.w, var_138)
    else
        xmm0_42 = _mm_sqrt_sd(xmm0_42, xmm0_42)
    
    float xmm0_43 = fconvert.s(xmm0_42)
    xmm0_43 f- 0
    i_5:1.b = (xmm0_43 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_43, 0f) ? 1 : 0) << 2
        | (xmm0_43 < 0f ? 1 : 0)
    bool p_10 = unimplemented  {test ah, 0x44}
    float xmm1_38[0x4]
    float xmm2_12
    int64_t xmm3_11
    
    if (p_10)
        xmm1_38 = xmm4_8 / xmm0_43
        xmm3_11 = xmm7_8 / xmm0_43
        xmm2_12 = xmm6_8 / xmm0_43
    else
        xmm2_12 = (zx.o(0)).d
        xmm3_11 = (zx.o(0)).q
        xmm1_38 = zx.o(0)
    
    int64_t xmm5_6 = xmm3_9
    int64_t xmm0_45 = _mm_unpacklo_ps(xmm1_38, xmm3_11)
    float xmm6_10 = xmm1_38[0] * var_12c_1
    eax_5 = xmm1_32
    var_90 = _mm_unpacklo_ps(xmm2_10, xmm5_6)
    var_128_2 = xmm2_12
    var_118_2 = xmm0_45:4.d
    var_100_2 = xmm2_12 f* xmm5_6 - xmm3_11.d * var_12c_1
    var_fc_2 = xmm6_10 - xmm2_12 f* xmm2_10
    var_104 = xmm3_11 f* xmm2_10 - xmm1_38 f* xmm5_6
    var_11c_2 = xmm0_45.d
else
    xmm4_1 f- 0
    i_5:1.b = (xmm4_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_1, 0f) ? 1 : 0) << 2
        | (xmm4_1 < 0f ? 1 : 0)
    bool p_4 = unimplemented  {test ah, 0x44}
    float xmm1_19
    float xmm2_5[0x4]
    float xmm3_3
    
    if (p_4)
        xmm2_5 = xmm2_4 / xmm4_1
        xmm3_3 = *(edi_1 + 0x1d30) / xmm4_1
        xmm1_19 = *(edi_1 + 0x1d34) / xmm4_1
    else
        xmm1_19 = (zx.o(0)).d
        xmm3_3 = (zx.o(0)).d
        xmm2_5 = zx.o(0)
    
    float xmm4_2 = *(edi_1 + 0x1d3c)
    float xmm7_2 = xmm4_2 * xmm1_19 - xmm1_8 * xmm3_3
    float xmm6_2 = xmm1_8 f* xmm2_5 - xmm1_7 * xmm1_19
    float xmm5_2 = xmm1_7 * xmm3_3 - xmm4_2 f* xmm2_5
    double xmm0_23 = _mm_cvtps_pd(xmm6_2 * xmm6_2 + xmm7_2 * xmm7_2 + xmm5_2 * xmm5_2)
    
    if (0 f> xmm0_23)
        _libm_sse2_sqrt_precise(arg3, arg2.w, var_138)
    else
        xmm0_23 = _mm_sqrt_sd(xmm0_23, xmm0_23)
    
    float xmm0_24 = fconvert.s(xmm0_23)
    xmm0_24 f- 0
    i_5:1.b = (xmm0_24 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_24, 0f) ? 1 : 0) << 2
        | (xmm0_24 < 0f ? 1 : 0)
    bool p_6 = unimplemented  {test ah, 0x44}
    float xmm1_25
    float xmm6_3
    float xmm7_3
    
    if (p_6)
        xmm1_25 = xmm7_2 / xmm0_24
        xmm7_3 = xmm6_2 / xmm0_24
        xmm6_3 = xmm5_2 / xmm0_24
    else
        xmm6_3 = (zx.o(0)).d
        xmm7_3 = (zx.o(0)).d
        xmm1_25 = (zx.o(0)).d
    
    int64_t xmm5_3 = xmm3_3
    var_90 = _mm_unpacklo_ps(xmm2_5, xmm5_3)
    int64_t xmm3_8 =
        _mm_unpacklo_ps(xmm6_3 f* xmm5_3 - xmm7_3 * xmm1_19, xmm1_25 * xmm1_19 - xmm6_3 f* xmm2_5)
    var_118_2 = xmm7_3 ^ 0x80000000
    var_128_2 = xmm6_3 ^ 0x80000000
    eax_5 = xmm1_19
    var_104 = xmm7_3 f* xmm2_5 - xmm1_25 f* xmm5_3
    var_fc_2 = xmm3_8:4.d
    var_11c_2 = xmm1_25 ^ 0x80000000
    var_100_2 = xmm3_8.d

uint32_t result = 0
uint32_t result_1 = 0

if (arg5 s> 0)
    do
        float var_130_2 = 1f
        int32_t var_12c_2 = 0x3f800000
        int32_t eax_7 = *(arg4 + (result << 2)) * 0x68
        int32_t* ecx_1 = *(edi_1 + 0x1db4 + eax_7 + 0x2c)
        void* esi_2 = edi_1 + 0x1db4 + eax_7
        int16_t top
        
        if (ecx_1 != 0)
            (**ecx_1)(edi_1, esi_2, *(esi_2 + 0x34))
            float var_12c_3 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
            unimplemented  {fstp dword [esp+0x14], st0}
            top += 1
            var_130_2 = var_12c_3
        
        float xmm1_41 = *(esi_2 + 0xc)
        float xmm0_54 = *esi_2
        float xmm2_15 = *(esi_2 + 4)
        float xmm3_15 = *(esi_2 + 8)
        float xmm1_42 = *(esi_2 + 0x10)
        float xmm1_43 = *(esi_2 + 0x14)
        float var_108_1 = xmm0_54
        float var_120_1 = xmm2_15
        float var_114 = xmm3_15
        
        if ((*(esi_2 + 0x60) & 0x10) == 0)
            xmm2_15 = xmm2_15 - xmm1_10
            xmm0_54 = xmm0_54 - xmm1_9
            xmm3_15 = xmm3_15 - xmm1_11
            var_120_1 = xmm2_15
            var_108_1 = xmm0_54
            var_114 = xmm3_15
        
        double xmm0_59 = _mm_cvtps_pd(xmm0_54 * xmm0_54 + xmm2_15 * xmm2_15 + xmm3_15 * xmm3_15)
        
        if (0 f> xmm0_59)
            _libm_sse2_sqrt_precise(arg3, arg2.w, var_138)
        else
            xmm0_59 = _mm_sqrt_sd(xmm0_59, xmm0_59)
        
        int32_t* ecx_2 = *(esi_2 + 0x30)
        float xmm0_60 = fconvert.s(xmm0_59)
        
        if (ecx_2 == 0)
            int32_t eax_13 = *(esi_2 + 0x24)
            
            if (eax_13 == 1)
                float xmm2_18 = *(esi_2 + 0x18)
                var_130_2 = xmm2_18 / (
                    (_mm_min_ss(*(esi_2 + 0x1c), _mm_max_ss(xmm0_60, xmm2_18)) - xmm2_18) f*
                    *(esi_2 + 0x20) + xmm2_18) * var_130_2
            else if (eax_13 == 2)
                float xmm3_16 = *(esi_2 + 0x18)
                float xmm2_16 = *(esi_2 + 0x1c)
                var_130_2 = (1f - (_mm_min_ss(xmm2_16, _mm_max_ss(xmm0_60, xmm3_16)) - xmm3_16) f*
                    *(esi_2 + 0x20) / (xmm2_16 - xmm3_16)) * var_130_2
            else if (eax_13 == 3)
                int32_t xmm0_65 = __maxss_xmmss_memss(xmm0_60, *(esi_2 + 0x18))
                double xmm0_66 =
                    _mm_cvtps_pd(_mm_min_ss(*(esi_2 + 0x1c), xmm0_65) f/ *(esi_2 + 0x18))
                *(esi_2 + 0x20) ^ (data_8937c0.o).d
                _libm_sse2_pow_precise(arg3, arg2)
                var_130_2 = fconvert.s(xmm0_66) * var_130_2
        else
            (**ecx_2)(xmm0_60, *(esi_2 + 0x18), *(esi_2 + 0x1c), *(esi_2 + 0x20))
            unimplemented  {fmul st0, dword [esp+0x14]}
            float var_12c_4 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
            unimplemented  {fstp dword [esp+0x14], st0}
            top += 1
            var_130_2 = var_12c_4
        
        xmm0_60 f- 0
        uint32_t eax_12
        eax_12:1.b = (xmm0_60 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_60, 0f) ? 1 : 0) << 2
            | (xmm0_60 < 0f ? 1 : 0)
        bool p_12 = unimplemented  {test ah, 0x44}
        float xmm1_66
        
        if (p_12)
            float xmm4_9 = *(edi_1 + 0x1d50)
            float xmm2_21 = *(esi_2 + 0x28)
            float xmm3_18 = xmm4_9 / xmm2_21
            xmm1_66 = (xmm4_9 - _mm_min_ss(xmm3_18, 
                (var_108_1 * xmm1_12 + var_120_1 * xmm1_13 + var_114 * xmm1_14) / xmm0_60) * xmm2_21)
                / (xmm4_9 - _mm_min_ss(xmm3_18, 
                (xmm1_42 * var_120_1 + var_108_1 * xmm1_41 + xmm1_43 * var_114) / xmm0_60)
                * xmm2_21)
        else
            xmm1_66 = 1f
        
        *(esi_2 + 0x38) = xmm1_66
        float xmm4_14 = var_11c_2 * var_108_1 + var_118_2 * var_120_1 + var_128_2 * var_114
        float xmm3_24 = var_100_2 * var_108_1 + var_fc_2 * var_120_1 + var_104 * var_114
        float xmm2_25 = var_90.d * var_108_1 + var_90:4.d * var_120_1 + eax_5 * var_114
        double xmm0_103 = _mm_cvtps_pd(xmm3_24 * xmm3_24 + xmm4_14 * xmm4_14 + xmm2_25 * xmm2_25)
        
        if (0 f> xmm0_103)
            _libm_sse2_sqrt_precise(arg3, arg2.w, var_138)
        else
            xmm0_103 = _mm_sqrt_sd(xmm0_103, xmm0_103)
        
        float xmm1_78 = fconvert.s(xmm0_103)
        xmm1_78 f- 0
        eax_12:1.b = (xmm1_78 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_78, 0f) ? 1 : 0) << 2
            | (xmm1_78 < 0f ? 1 : 0)
        bool p_14 = unimplemented  {test ah, 0x44}
        float var_120_3
        float xmm2_26
        float xmm7_13
        
        if (p_14)
            xmm2_26 = xmm4_14 / xmm1_78
            var_120_3 = xmm3_24 / xmm1_78
            xmm7_13 = xmm2_25 / xmm1_78
        else
            xmm7_13 = (zx.o(0)).d
            var_120_3 = 0f
            xmm2_26 = (zx.o(0)).d
        
        int32_t i_2 = 0
        float var_124_3 = xmm2_26
        float xmm0_110
        
        if (*(edi_1 + 0x1058) s<= 0)
            xmm0_110 = var_130_2
            __builtin_memset(esi_2 + ((i_2 + 0x10) << 2), 0, (8 - i_2) << 2)
        else
            void* edi_2 = esi_2 + 0x40
            float* ecx_3 = &var_70
            
            do
                float xmm1_79 = ecx_3[-2]
                float xmm3_25 = ecx_3[-1]
                float xmm5_12 = *ecx_3
                xmm1_79 f- 0
                eax_12:1.b = (xmm1_79 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm1_79, 0f) ? 1 : 0) << 2 | (xmm1_79 < 0f ? 1 : 0)
                float xmm2_32 =
                    (xmm2_26 * xmm1_79 + var_120_3 * xmm3_25 + xmm7_13 * xmm5_12 + 1f) * 0.5f
                bool p_16 = unimplemented  {test ah, 0x44}
                
                if (not(p_16))
                    xmm3_25 f- 0
                    eax_12:1.b = (xmm3_25 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm3_25, 0f) ? 1 : 0) << 2 | (xmm3_25 < 0f ? 1 : 0)
                    bool p_18 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_18))
                        xmm5_12 f- 0
                        eax_12:1.b = (xmm5_12 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm5_12, 0f) ? 1 : 0) << 2 | (xmm5_12 < 0f ? 1 : 0)
                        bool p_20 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_20))
                            xmm2_32 = 1f
                
                xmm0_110 = var_130_2
                i_2 += 1
                ecx_3 = &ecx_3[3]
                *edi_2 = xmm2_32 * xmm0_110
                edi_2 += 4
                xmm2_26 = var_124_3
            while (i_2 s< *(arg1 + 0x1058))
            
            if (i_2 s< 8)
                __builtin_memset(esi_2 + ((i_2 + 0x10) << 2), 0, (8 - i_2) << 2)
        
        edi_1 = arg1
        result = result_1 + 1
        *(esi_2 + 0x3c) = xmm0_110
        result_1 = result
    while (result s< arg5)

CookieCheckFunction(result)
return result
