// 函数: sub_710240
// 地址: 0x710240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax
eax.b = data_19e276c == 0
void* edi = arg3[1]
void* ecx = arg3[2]
float xmm4_1 = _mm_cvtepi32_ps(zx.o((eax << 1) + 0xffffffff))
float xmm0 = *(edi + 0x4c)
float xmm4_2 = xmm4_1 f* *(edi + 0x50)
arg3[0x13] = 1
arg3[0xf] = arg9
arg3[0xc] = arg6
arg3[0x10] = arg10
arg3[0xd] = arg7
arg3[0xe] = arg8
arg3[0x11] = arg11
arg3[0x12] = arg12
void var_40

if (ecx == 0)
    double xmm0_7 = fconvert.d((arg8 + arg11) * 0.0174532924f)
    _libm_sse2_cos_precise(arg5, arg4.w, var_40)
    arg3[0x14] = fconvert.s(xmm0_7) * arg9 * xmm0
    float xmm0_14[0x2] = (arg8 + 90f + arg12) * 0.0174532924f
    double xmm0_15 = _mm_cvtps_pd(xmm0_14)
    _libm_sse2_cos_precise()
    arg3[0x15] = fconvert.s(xmm0_15) * arg10 * xmm0
    _libm_sse2_sin_precise()
    arg3[0x17] = fconvert.s(xmm0_7) * arg9 * xmm4_2
    double xmm0_17 = _mm_cvtps_pd(xmm0_14)
    double* eax_2 = _libm_sse2_sin_precise()
    arg3[0x18] = fconvert.s(xmm0_17) * arg10 * xmm4_2
    arg3[0x16] = xmm0 * arg6 f+ *(edi + 0x54)
    arg3[0x19] = xmm4_2 * arg7 f+ *(edi + 0x58)
    return eax_2

float xmm6[0x2] = *(ecx + 0x50)
float xmm7[0x2] = *(ecx + 0x54)
double* eax_3 = *arg3
float xmm5[0x2] = *(ecx + 0x5c)
float xmm2[0x2] = *(ecx + 0x60)
float var_2c = xmm6
float var_24 = xmm7
float xmm0_27 = xmm2[0] * arg7
float var_28 = xmm5
float var_30 = xmm2
arg3[0x16] = xmm6[0] * arg6 + xmm7[0] * arg7 f+ *(ecx + 0x58)
arg3[0x19] = xmm5[0] * arg6 + xmm0_27 f+ *(ecx + 0x64)
int32_t edi_1 = *(eax_3 + 0x2c)
float xmm1_40
float xmm2_13
float xmm3_6
float xmm4_6
float xmm5_4

switch (edi_1)
    case 0
        double xmm0_31 = fconvert.d((arg8 + arg11) * 0.0174532924f)
        _libm_sse2_cos_precise(arg5, arg4.w, var_40)
        float xmm0_33 = fconvert.s(xmm0_31) * arg9
        float xmm0_37[0x2] = (arg8 + 90f + arg12) * 0.0174532924f
        double xmm0_38 = _mm_cvtps_pd(xmm0_37)
        _libm_sse2_cos_precise()
        float xmm0_40 = fconvert.s(xmm0_38) * arg10
        _libm_sse2_sin_precise()
        float xmm0_43 = fconvert.s(xmm0_31) * arg9
        double xmm0_44 = _mm_cvtps_pd(xmm0_37)
        double* eax_4 = _libm_sse2_sin_precise()
        float xmm3_1 = fconvert.s(xmm0_44) * arg10
        arg3[0x14] = xmm0_43 * var_24 + xmm0_33 * var_2c
        arg3[0x17] = xmm0_43 * var_30 + xmm0_33 * var_28
        arg3[0x15] = xmm3_1 * var_24 + xmm0_40 * var_2c
        arg3[0x18] = xmm3_1 * var_30 + xmm0_40 * var_28
        return eax_4
    case 1
        double xmm0_52 = fconvert.d((arg8 + arg11) * 0.0174532924f)
        _libm_sse2_cos_precise(arg5, arg4.w, var_40)
        arg3[0x14] = fconvert.s(xmm0_52) * arg9
        float xmm0_58[0x2] = (arg8 + 90f + arg12) * 0.0174532924f
        double xmm0_59 = _mm_cvtps_pd(xmm0_58)
        _libm_sse2_cos_precise()
        arg3[0x15] = fconvert.s(xmm0_59) * arg10
        _libm_sse2_sin_precise()
        arg3[0x17] = fconvert.s(xmm0_52) * arg9
        double xmm0_61 = _mm_cvtps_pd(xmm0_58)
        eax_3 = _libm_sse2_sin_precise()
        arg3[0x18] = fconvert.s(xmm0_61) * arg10
    case 2
        float xmm1_33 = xmm5[0] f* xmm5 + xmm6[0] f* xmm6
        float xmm2_11
        
        if (xmm1_33 <= 9.99999975e-05f)
            var_2c = 0f
            var_28 = 0f
            double var_18_7 = _mm_cvtps_pd(xmm2)
            long double x87_r6_2 = fconvert.t(_mm_cvtps_pd(xmm7))
            _CIatan2(arg5, arg4)
            xmm2_11 = 90f - _mm_cvtpd_ps(zx.o(fconvert.d(x87_r6_2))) * 57.2957764f
        else
            float xmm2_7 =
                __andps_xmmxud_memxud(xmm2 f* xmm6 - xmm5[0] f* xmm7, data_8937a0.o) / xmm1_33
            var_30 = xmm2_7 f* xmm6
            var_24 = xmm2_7 f* xmm5
            double var_18_4 = _mm_cvtps_pd(xmm5)
            long double x87_r6_1 = fconvert.t(_mm_cvtps_pd(xmm6))
            _CIatan2(arg5, arg4)
            xmm2_11 = _mm_cvtpd_ps(zx.o(fconvert.d(x87_r6_1))) * 57.2957764f
        
        double xmm0_81 = _mm_cvtps_pd((arg8 + arg11 - xmm2_11) * 0.0174532924f)
        _libm_sse2_cos_precise(arg5, arg4.w, var_40)
        float xmm0_83 = fconvert.s(xmm0_81) * arg9
        float xmm0_88[0x2] = (arg8 + arg12 - xmm2_11 + 90f) * 0.0174532924f
        double xmm0_89 = _mm_cvtps_pd(xmm0_88)
        _libm_sse2_cos_precise()
        double var_18_6
        var_18_6.d = fconvert.s(xmm0_89) * arg10
        _libm_sse2_sin_precise()
        float xmm0_94 = fconvert.s(xmm0_81) * arg9
        double xmm0_95 = _mm_cvtps_pd(xmm0_88)
        eax_3 = _libm_sse2_sin_precise()
        float xmm4_5 = var_18_6.d
        xmm5_4 = xmm0_83 * var_28
        xmm2_13 = xmm0_94 * var_30
        float xmm3_5 = fconvert.s(xmm0_95) * arg10
        xmm3_6 = xmm3_5 * var_30
        arg3[0x14] = xmm0_83 * var_2c - xmm0_94 * var_24
        xmm4_6 = xmm4_5 * var_28
        xmm1_40 = xmm4_5 * var_2c - xmm3_5 * var_24
    label_710aa7:
        arg3[0x15] = xmm1_40
        arg3[0x18] = xmm3_6 + xmm4_6
        arg3[0x17] = xmm2_13 + xmm5_4
    case 3, 4
        float xmm3_7 = arg8 * 0.0174532924f
        _libm_sse2_cos_precise(arg5, arg4.w, var_40)
        float xmm0_101 = fconvert.s(fconvert.d(xmm3_7))
        double xmm0_102 = _mm_cvtps_pd(xmm3_7)
        _libm_sse2_sin_precise()
        float xmm2_14 = fconvert.s(xmm0_102)
        float xmm3_11 = (xmm2_14 * var_24 + xmm0_101 * var_2c) / xmm0
        float xmm2_17 = (xmm2_14 * var_30 + xmm0_101 * var_28) / xmm4_2
        double xmm0_107 = _mm_cvtps_pd(xmm2_17 * xmm2_17 + xmm3_11 * xmm3_11)
        
        if (0 f> xmm0_107)
            _libm_sse2_sqrt_precise()
        else
            xmm0_107 = _mm_sqrt_sd(xmm0_107, xmm0_107)
        
        float xmm2_18 = fconvert.s(xmm0_107)
        
        if (not(xmm2_18 <= 9.99999975e-06f))
            xmm2_18 = 1f / xmm2_18
        
        float xmm2_19 = xmm2_18 * xmm2_17
        float xmm3_13 = xmm2_18 * xmm3_11
        double xmm0_111 = _mm_cvtps_pd(xmm2_19 * xmm2_19 + xmm3_13 * xmm3_13)
        
        if (0 f> xmm0_111)
            _libm_sse2_sqrt_precise()
        else
            xmm0_111 = _mm_sqrt_sd(xmm0_111, xmm0_111)
        
        float xmm2_20 = fconvert.s(xmm0_111)
        float var_1c_5 = xmm2_20
        
        if (edi_1 == 3)
            int32_t edx
            edx.b = 0 f> var_30 * var_2c - var_28 * var_24
            int32_t ecx_1
            ecx_1.b = 0 f> xmm4_2
            int32_t eax_5
            eax_5.b = 0 f> xmm0
            
            if (edx != (ecx_1 ^ eax_5))
                var_1c_5 = xmm2_20 ^ (data_8937c0.o).d
        
        double var_10_2 = _mm_cvtps_pd(xmm2_19)
        long double x87_r6_3 = fconvert.t(_mm_cvtps_pd(xmm3_13))
        _CIatan2()
        double xmm0_121 = _mm_cvtps_pd(_mm_cvtpd_ps(zx.o(fconvert.d(x87_r6_3))) + 1.57079637f)
        _libm_sse2_cos_precise()
        float xmm0_123 = fconvert.s(xmm0_121) * var_1c_5
        _libm_sse2_sin_precise()
        float xmm0_126 = fconvert.s(xmm0_121) * var_1c_5
        float xmm0_128[0x2] = arg11 * 0.0174532924f
        double xmm0_129 = _mm_cvtps_pd(xmm0_128)
        _libm_sse2_cos_precise()
        float xmm0_131 = fconvert.s(xmm0_129) * arg9
        float xmm0_134[0x2] = (arg12 + 90f) * 0.0174532924f
        double xmm0_135 = _mm_cvtps_pd(xmm0_134)
        _libm_sse2_cos_precise()
        float xmm0_137 = fconvert.s(xmm0_135) * arg10
        double xmm0_138 = _mm_cvtps_pd(xmm0_128)
        _libm_sse2_sin_precise()
        float xmm0_140 = fconvert.s(xmm0_138) * arg9
        double xmm0_141 = _mm_cvtps_pd(xmm0_134)
        eax_3 = _libm_sse2_sin_precise()
        xmm2_13 = xmm0_140 * xmm0_126
        xmm5_4 = xmm0_131 * xmm2_19
        float xmm3_15 = fconvert.s(xmm0_141) * arg10
        xmm4_6 = xmm0_137 * xmm2_19
        arg3[0x14] = xmm0_140 * xmm0_123 + xmm0_131 * xmm3_13
        xmm3_6 = xmm3_15 * xmm0_126
        xmm1_40 = xmm3_15 * xmm0_123 + xmm0_137 * xmm3_13
        goto label_710aa7

float xmm0_147 = xmm0 f* arg3[0x14]
arg3[0x15] = xmm0 f* arg3[0x15]
arg3[0x14] = xmm0_147
float xmm4_8 = xmm4_2 f* arg3[0x18]
arg3[0x17] = xmm4_2 f* arg3[0x17]
arg3[0x18] = xmm4_8
return eax_3
