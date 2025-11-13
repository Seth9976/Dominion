// 函数: sub_7564e0
// 地址: 0x7564e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

arg11 - 0f
int32_t* esi = arg2
double* var_44 = arg3[2]
double* eax
eax:1.b =
    (arg11 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg11, 0f) ? 1 : 0) << 2 | (arg11 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float var_54
float xmm0_1
float xmm1_1
float xmm2
float xmm3
float xmm4
float xmm5

if (p_1)
    if (arg3[0x13] == 0)
        sub_710b10(arg3, esi)
    
    if (esi[0x13] == 0)
        sub_710b10(esi, esi)
    
    int128_t xmm0_2 = arg3[0xf]
    int128_t xmm1_2 = arg3[0x10]
    float xmm5_1 = xmm0_2.d
    float xmm3_1 = esi[0xf]
    int128_t xmm4_1 = xmm1_2
    float var_40_1 = xmm1_2
    int32_t xmm6_1 = xmm4_1.d
    float var_58_1 = xmm0_2
    float var_38_1 = xmm0_2
    float var_50_1 = xmm3_1
    
    if (not(0f f<= xmm0_2))
        xmm0_2 ^= 0x80000000
        var_58_1 = xmm0_2
    
    0 f- xmm5_1
    int32_t edx = 0xb4
    int32_t ecx_1 = 0xb4
    
    if (0f <= xmm5_1)
        ecx_1 = 0
    
    int32_t eax_1
    eax_1.b = 0f <= xmm5_1
    
    if (not(0f f<= xmm4_1))
        xmm4_1 ^= 0x80000000
        var_40_1 = xmm4_1
    
    void* ecx_3 = neg.d((eax_1 << 1) + 0xffffffff)
    
    if (0 f<= xmm6_1)
        ecx_3 = (eax_1 << 1) + 0xffffffff
    
    void* var_18_1 = ecx_3
    
    if (not(0f <= xmm3_1))
        var_50_1 = xmm3_1 ^ 0x80000000
    
    float xmm5_2 = esi[0xc]
    
    if (0f <= xmm3_1)
        edx = 0
    
    int32_t eax_3
    eax_3.b = 9.99999975e-05f f>= __andps_xmmxud_memxud(xmm0_2.d f- xmm4_1, data_8937a0.o)
    float xmm2_2
    float xmm3_4
    
    if (eax_3 != 0)
        float xmm1_6 = esi[0xd]
        xmm3_4 = xmm1_6 f* arg3[0x15] + xmm5_2 f* arg3[0x14]
        var_54 = xmm1_6
        xmm2_2 = xmm1_6 f* arg3[0x18] + xmm5_2 f* arg3[0x17]
    else
        var_54 = 0f
        xmm3_4 = xmm5_2 f* arg3[0x14]
        xmm2_2 = xmm5_2 f* arg3[0x17]
    
    float xmm2_6 = xmm2_2 f+ arg3[0x19] f- *(var_44 + 0x64)
    float xmm3_8 = xmm3_4 f+ arg3[0x16] - var_44[0xb].d
    float xmm4_2 = 1f / (var_44[0xc].d * var_44[0xa].d - *(var_44 + 0x5c) f* *(var_44 + 0x54))
    float xmm2_10 = (xmm2_6 * var_44[0xa].d - xmm3_8 f* *(var_44 + 0x5c)) * xmm4_2 f- arg3[0xd]
    float xmm1_14 = (xmm3_8 * var_44[0xc].d - xmm2_6 f* *(var_44 + 0x54)) * xmm4_2 f- arg3[0xc]
    double xmm0_11 = _mm_cvtps_pd(xmm2_10 * xmm2_10 + xmm1_14 * xmm1_14)
    void var_68
    
    if (0 f> xmm0_11)
        ecx_3 = _libm_sse2_sqrt_precise(arg5, arg4.w, var_68)
    else
        xmm0_11 = _mm_sqrt_sd(xmm0_11, xmm0_11)
    
    void* eax_5 = *esi
    float xmm6_2[0x2] = fconvert.s(xmm0_11)
    float xmm0_13 = var_50_1 f* *(eax_5 + 0xc)
    float var_60_1 = xmm6_2
    
    if (0.0001 <= _mm_cvtps_pd(xmm6_2))
        float xmm1_19 = arg7 f- *(var_44 + 0x64)
        float xmm4_4 = arg6 - var_44[0xb].d
        float xmm3_14[0x2] =
            (xmm4_4 * var_44[0xc].d - xmm1_19 f* *(var_44 + 0x54)) * xmm4_2 f- arg3[0xc]
        float xmm1_23[0x2] =
            (xmm1_19 * var_44[0xa].d - xmm4_4 f* *(var_44 + 0x5c)) * xmm4_2 f- arg3[0xd]
        float var_44_1 = xmm3_14
        float var_64_1 = xmm1_23
        float xmm4_8[0x2] = xmm1_23[0] f* xmm1_23 + xmm3_14[0] f* xmm3_14
        arg10 - 0f
        float var_48_1 = xmm4_8
        double* eax_6
        eax_6:1.b = (arg10 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg10, 0f) ? 1 : 0) << 2
            | (arg10 < 0f ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        float xmm5_3
        
        if (not(p_3))
            xmm5_3 = xmm0_13
        else
            float xmm2_18 = (var_50_1 + 1f) * var_58_1 * 0.5f * arg10
            double xmm0_21 = _mm_cvtps_pd(xmm4_8)
            
            if (0 f> xmm0_21)
                _libm_sse2_sqrt_precise(arg5, arg4.w, var_68)
            else
                xmm0_21 = _mm_sqrt_sd(xmm0_21, xmm0_21)
            
            xmm5_3 = xmm0_13
            xmm6_2 = var_60_1
            float xmm0_22 = fconvert.s(xmm0_21)
            float xmm4_12 = xmm0_22 f- xmm6_2 - xmm5_3 * var_58_1 + xmm2_18
            
            if (xmm4_12 <= 0f)
                xmm1_23 = var_64_1
                xmm3_14 = var_44_1
                xmm4_8 = var_48_1
            else
                float xmm2_20 = _mm_min_ss(0x3f800000, xmm4_12 / (xmm2_18 + xmm2_18)) - 1f
                float xmm4_14 = (xmm4_12 - (1f - xmm2_20 * xmm2_20) * xmm2_18) / xmm0_22
                xmm1_23 = var_64_1 - xmm4_14 * var_64_1
                xmm3_14 = var_44_1 - xmm4_14 * var_44_1
                var_64_1 = xmm1_23
                var_44_1 = xmm3_14
                xmm4_8 = xmm1_23[0] f* xmm1_23 + xmm3_14[0] f* xmm3_14
                var_48_1 = xmm4_8
        
        float xmm2_23 = xmm5_3 * var_58_1
        float xmm5_5 = xmm6_2[0] f* xmm6_2
        float xmm0_34 = xmm2_23 * xmm2_23
        float var_5c_2
        float var_44_2
        
        if (eax_3 == 0)
            float xmm4_22 = xmm0_13 * var_40_1
            float xmm0_52 = xmm4_22 * xmm4_22
            double var_20_3 = _mm_cvtps_pd(xmm1_23)
            long double x87_r6_2 = fconvert.t(_mm_cvtps_pd(xmm3_14))
            _CIatan2(arg5, arg4)
            float xmm3_17 = var_60_1
            float var_3c_1 = fconvert.s(x87_r6_2)
            float xmm1_46 = xmm5_5 * xmm0_52 + xmm0_34 * var_48_1 - xmm0_52 * xmm0_34
            float xmm4_24 = xmm0_52 - xmm0_34
            float xmm0_61 = xmm0_52 * -2f * xmm3_17
            float xmm2_29[0x2] = xmm0_61 * xmm0_61 - xmm4_24 * 4f * xmm1_46
            float xmm0_65 = (zx.o(0)).d
            
            if (xmm2_29 f< 0)
                goto label_756ce4
            
            double xmm0_66 = _mm_cvtps_pd(xmm2_29)
            
            if (0 f> xmm0_66)
                _libm_sse2_sqrt_precise()
            else
                xmm0_66 = _mm_sqrt_sd(xmm0_66, xmm0_66)
            
            int128_t xmm1_47 = fconvert.s(xmm0_66)
            
            if (not(0 f<= xmm0_61))
                xmm1_47 ^= 0x80000000
            
            float xmm1_50 = ((xmm1_47 f+ xmm0_61) ^ 0x80000000) * 0.5f
            uint32_t xmm2_32[0x4] = xmm1_50 / xmm4_24
            uint32_t xmm5_9[0x4] = xmm1_46 / xmm1_50
            float var_64_3 = xmm2_32
            int32_t xmm1_52 = _mm_and_ps(xmm2_32, 0x7fffffff)
            
            if (not(_mm_and_ps(xmm5_9, 0x7fffffff) f> xmm1_52))
                xmm2_32 = xmm5_9
                var_64_3 = xmm5_9
            
            float xmm1_54 = xmm2_32[0] f* xmm2_32
            float xmm0_85
            
            if (var_48_1 < xmm1_54)
                xmm3_17 = var_60_1
                xmm0_65 = (zx.o(0)).d
            label_756ce4:
                float xmm7_2 = (zx.o(0)).d
                float xmm5_11[0x2] = xmm3_17 + xmm2_23
                float var_5c_4 = 3.14159274f
                float var_64_4 = 0f
                float xmm4_26[0x2] = xmm3_17 - xmm2_23
                double var_20_4
                var_20_4.d = 0
                int32_t var_58_4 = xmm4_26
                float xmm2_34 = xmm4_26[0] f* xmm4_26
                float xmm1_62 = (xmm2_23 ^ 0x80000000) * xmm3_17 / (xmm0_34 - xmm0_52)
                float xmm2_36 = xmm5_11[0] f* xmm5_11
                float xmm6_3
                
                if (xmm1_62 < -1f)
                    xmm6_3 = xmm2_34
                else if (1f < xmm1_62)
                    xmm4_26 = var_58_4
                    xmm6_3 = xmm2_34
                else
                    _libm_sse2_acos_precise()
                    float xmm0_87 = fconvert.s(fconvert.d(xmm1_62))
                    _libm_sse2_cos_precise()
                    double xmm0_92 = _mm_cvtps_pd(xmm0_87)
                    _libm_sse2_sin_precise()
                    float xmm3_20[0x2] = fconvert.s(fconvert.d(xmm0_87)) * xmm2_23 + var_60_1
                    xmm6_3 = xmm2_34
                    xmm7_2 = fconvert.s(xmm0_92) * xmm4_22
                    float xmm1_66 = xmm7_2 * xmm7_2 + xmm3_20[0] f* xmm3_20
                    
                    if (xmm6_3 <= xmm1_66)
                        xmm4_26 = var_58_4
                        xmm0_65 = (zx.o(0)).d
                    else
                        var_5c_4 = xmm0_87
                        xmm6_3 = xmm1_66
                        xmm4_26 = xmm3_20
                        xmm0_65 = xmm7_2
                    
                    if (xmm1_66 <= xmm2_36)
                        xmm7_2 = var_20_4.d
                    else
                        var_64_4 = xmm0_87
                        xmm2_36 = xmm1_66
                        xmm5_11 = xmm3_20
                
                float xmm1_68 = _mm_cvtepi32_ps(zx.o(arg8))
                float xmm0_100
                float xmm1_70
                
                if ((xmm2_36 + xmm6_3) * 0.5f < var_48_1)
                    double var_20_13 = _mm_cvtps_pd(xmm7_2 * xmm1_68)
                    long double x87_r5_4 = fconvert.t(_mm_cvtps_pd(xmm5_11))
                    _CIatan2()
                    xmm1_70 = var_3c_1 - _mm_cvtpd_ps(zx.o(fconvert.d(x87_r5_4)))
                    xmm0_100 = var_64_4
                else
                    double var_20_10 = _mm_cvtps_pd(xmm0_65 * xmm1_68)
                    long double x87_r5_3 = fconvert.t(_mm_cvtps_pd(xmm4_26))
                    _CIatan2()
                    xmm1_70 = var_3c_1 - _mm_cvtpd_ps(zx.o(fconvert.d(x87_r5_3)))
                    xmm0_100 = var_5c_4
                
                var_44_2 = xmm1_70
                xmm0_85 = xmm0_100 * float.s(arg8)
            else
                double xmm0_71 = _mm_cvtps_pd(var_48_1 - xmm1_54)
                
                if (0 f> xmm0_71)
                    _libm_sse2_sqrt_precise()
                else
                    xmm0_71 = _mm_sqrt_sd(xmm0_71, xmm0_71)
                
                float xmm1_56[0x2] = fconvert.s(xmm0_71) * float.s(arg8)
                double var_20_5 = _mm_cvtps_pd(xmm1_56)
                long double x87_r5_1 = fconvert.t(_mm_cvtps_pd(var_64_3))
                _CIatan2()
                var_44_2 = var_3c_1 - _mm_cvtpd_ps(zx.o(fconvert.d(x87_r5_1)))
                double var_20_8 = _mm_cvtps_pd(xmm1_56 / var_40_1)
                long double x87_r4_1 = fconvert.t(_mm_cvtps_pd((var_64_3 - var_60_1) / var_58_1))
                _CIatan2()
                xmm0_85 = fconvert.s(x87_r4_1)
            
            var_5c_2 = xmm0_85
        else
            float xmm1_30[0x2] = (xmm4_8[0] - xmm5_5 - xmm0_34) / ((xmm6_2[0] f+ xmm6_2) * xmm2_23)
            float var_58_2 = xmm1_30
            
            if (not(-1f f<= xmm1_30))
                xmm1_30 = 0xbf800000
                var_58_2 = -1f
            else if (not(xmm1_30 f<= 1f))
                xmm1_30 = 0x3f800000
                var_58_2 = 1f
                
                if (arg9 != 0)
                    double xmm0_38 = _mm_cvtps_pd(xmm4_8)
                    
                    if (0 f> xmm0_38)
                        _libm_sse2_sqrt_precise(arg5, arg4.w, var_68)
                    else
                        xmm0_38 = _mm_sqrt_sd(xmm0_38, xmm0_38)
                    
                    var_38_1 =
                        ((fconvert.s(xmm0_38) / (xmm2_23 + var_60_1) - 1f) * arg11 + 1f) * var_38_1
                    xmm1_30 = 0x3f800000
            
            double xmm0_41 = _mm_cvtps_pd(xmm1_30)
            _libm_sse2_acos_precise(arg5, arg4.w, var_68, var_60_1, xmm2_23)
            float xmm1_38[0x2] = fconvert.s(xmm0_41) * float.s(arg8)
            var_5c_2 = xmm1_38
            float xmm0_45 = var_58_2 * xmm2_23 + var_60_1
            double xmm0_46 = _mm_cvtps_pd(xmm1_38)
            _libm_sse2_sin_precise()
            float xmm2_25 = fconvert.s(xmm0_46) * xmm2_23
            double var_20_1 = _mm_cvtps_pd(var_64_1 * xmm0_45 - var_44_1 * xmm2_25)
            long double x87_r6_1 = fconvert.t(_mm_cvtps_pd(var_64_1 * xmm2_25 + var_44_1 * xmm0_45))
            _CIatan2()
            var_44_2 = fconvert.s(x87_r6_1)
        
        float xmm0_105 = float.s(var_18_1)
        var_18_1.q = _mm_cvtps_pd(var_54)
        unimplemented  {fld st0, qword [esp+0x58]}
        var_18_1.q = _mm_cvtps_pd(xmm5_2)
        unimplemented  {fld st0, qword [esp+0x58]}
        int32_t eax_7
        int32_t edx_1
        eax_7, edx_1 = _CIatan2(arg5, arg4)
        var_18_1.q = fconvert.d(unimplemented  {fstp qword [esp+0x58], st0})
        unimplemented  {fstp qword [esp+0x58], st0}
        float xmm0_112 = _mm_cvtpd_ps(zx.o(var_18_1.q)) * xmm0_105
        float xmm1_77 = (var_44_2 - xmm0_112) * 57.2957764f + float.s(ecx_1) f- arg3[0xe]
        
        if (not(xmm1_77 <= 180f))
            xmm1_77 = xmm1_77 - 360f
        else if (not(-180f <= xmm1_77))
            xmm1_77 = xmm1_77 + 360f
        
        eax, arg2 = sub_710240(eax_7, edx_1, arg3, esi, arg3, arg3[0xc], arg3[0xd], 
            xmm1_77 * arg11 f+ arg3[7], var_38_1, arg3[0x10], 0f, 0f)
        xmm2 = esi[0x11]
        float xmm4_27 = esi[0xe]
        float xmm1_87 = ((xmm0_112 + var_5c_2) * 57.2957764f - xmm2) * xmm0_105
            + _mm_cvtepi32_ps(zx.o(edx)) - xmm4_27
        
        if (not(xmm1_87 <= 180f))
            xmm1_87 = xmm1_87 - 360f
        else if (not(-180f <= xmm1_87))
            xmm1_87 = xmm1_87 + 360f
        
        xmm1_1 = xmm1_87 * arg11 + xmm4_27
    else
        void* var_74_1 = ecx_3
        int80_t st0_1
        st0_1, eax, arg2 = sub_756270(eax_5, 0, arg3, esi.w, arg3, arg6, arg7, arg9, 0, arg11)
        xmm2 = esi[0x11]
        xmm1_1 = (zx.o(0)).d
    
    xmm5 = esi[0x12]
    xmm4 = esi[0x10]
    xmm3 = esi[0xf]
    xmm0_1 = xmm5_2
else
    xmm0_1 = esi[5]
    xmm3 = esi[8]
    xmm4 = esi[9]
    xmm2 = esi[0xa]
    xmm5 = esi[0xb]
    var_54 = esi[6]
    xmm1_1 = esi[7]

return sub_710240(eax, arg2, esi, esi, arg3, xmm0_1, var_54, xmm1_1, xmm3, xmm4, xmm2, xmm5)
