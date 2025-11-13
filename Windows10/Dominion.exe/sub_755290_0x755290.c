// 函数: sub_755290
// 地址: 0x755290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = arg1[3]
float xmm0 = arg1[7]
float xmm2 = arg1[4]
float xmm6 = arg1[5]
float xmm7[0x2] = *(ecx + 0x5c)
float xmm4 = *(ecx + 0x54)
float xmm3[0x2] = *(ecx + 0x50)
float xmm5 = arg1[6]
float xmm0_1 = *(ecx + 0x60)
void* var_30 = ecx
float var_3c = xmm2
float var_40 = xmm6
float var_68 = xmm5
int32_t var_38 = xmm3
int32_t var_34 = xmm7
float xmm0_4

if (xmm0_1 f* xmm3 - xmm7[0] * xmm4 f<= 0)
    xmm0_4 = -0.0174532924f
else
    xmm0_4 = 0.0174532924f

double* result = *arg1
int32_t i = 0
int32_t i_1 = 0
float xmm1_4 = xmm0_4 * result[5].d
float xmm0_5 = xmm0_4 f* *(result + 0x3c)

if (arg1[1] s> 0)
    double xmm0_8 = _mm_cvtps_pd(xmm7[0] f* xmm7 + xmm3[0] f* xmm3)
    double xmm0_11 = _mm_cvtps_pd(xmm0_1 * xmm0_1 + xmm4 * xmm4)
    
    do
        void* esi = *(arg1[2] + (i << 2))
        int32_t edx = 0
        xmm2 f- 0
        result:1.b = (xmm2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2, 0f) ? 1 : 0) << 2
            | (xmm2 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        float var_6c
        double var_58
        double var_50
        int32_t entry_ebx
        int16_t top
        
        if (p_2)
            var_6c = *(esi + 0x50)
            float xmm0_13 = *(esi + 0x54)
            int64_t var_50_1 = _mm_cvtps_pd(xmm7)
            unimplemented  {fld st0, qword [esp+0x28]}
            int64_t var_50_2 = _mm_cvtps_pd(xmm3)
            unimplemented  {fld st0, qword [esp+0x28]}
            _CIatan2()
            int64_t xmm0_17 = _mm_cvtps_pd(*(esi + 0x5c))
            var_58 = fconvert.d(unimplemented  {fstp qword [esp+0x20], st0})
            unimplemented  {fstp qword [esp+0x20], st0}
            int64_t var_50_3 = xmm0_17
            unimplemented  {fld st0, qword [esp+0x28]}
            int64_t var_50_4 = _mm_cvtps_pd(var_6c)
            unimplemented  {fld st0, qword [esp+0x28]}
            _CIatan2()
            var_50 = fconvert.d(unimplemented  {fstp qword [esp+0x28], st0})
            unimplemented  {fstp qword [esp+0x28], st0}
            top -= 2
            float xmm1_14 = _mm_cvtpd_ps(zx.o(var_58)) - _mm_cvtpd_ps(zx.o(var_50)) + xmm1_4
            
            if (not(xmm1_14 <= 3.14159274f))
                xmm1_14 = xmm1_14 - 6.28318548f
            else if (not(-3.14159274f <= xmm1_14))
                xmm1_14 = xmm1_14 + 6.28318548f
            
            float xmm1_15[0x2] = xmm1_14 * var_3c
            double xmm0_22 = _mm_cvtps_pd(xmm1_15)
            var_50.d = xmm1_15
            _libm_sse2_cos_precise(arg3, arg2.w, entry_ebx)
            var_58.d = fconvert.s(xmm0_22)
            double xmm0_24 = _mm_cvtps_pd(var_50.d)
            _libm_sse2_sin_precise()
            float xmm3_1 = var_58.d
            float xmm2_1 = fconvert.s(xmm0_24)
            ecx = var_30
            edx = 1
            xmm5 = var_68
            xmm6 = var_40
            float xmm0_28 = xmm2_1 f* *(esi + 0x60)
            *(esi + 0x50) = xmm3_1 * var_6c - xmm2_1 f* *(esi + 0x5c)
            *(esi + 0x54) = xmm3_1 * xmm0_13 - xmm0_28
            float xmm3_3 = xmm3_1 f* *(esi + 0x60) + xmm2_1 * xmm0_13
            *(esi + 0x5c) = xmm3_1 f* *(esi + 0x5c) + xmm2_1 * var_6c
            *(esi + 0x60) = xmm3_3
        
        xmm6 f- 0
        result:1.b = (xmm6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm6, 0f) ? 1 : 0) << 2
            | (xmm6 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            result = *arg1
            edx = 1
            float xmm1_26 = *(result + 0x2c)
            float xmm2_3 = result[6].d
            float xmm2_9 = (xmm2_3 f* *(ecx + 0x54)
                + xmm1_26 f* *(ecx + 0x50) f+ *(ecx + 0x58) f- *(esi + 0x58)) * xmm6 f+ *(esi + 0x58)
            *(esi + 0x64) = (xmm1_26 f* *(ecx + 0x5c)
                + xmm2_3 f* *(ecx + 0x60) f+ *(ecx + 0x64) f- *(esi + 0x64)) * xmm6 f+ *(esi + 0x64)
            *(esi + 0x58) = xmm2_9
        
        if (not(xmm5 f<= 0))
            float xmm0_33 = *(esi + 0x5c)
            float xmm2_10 = *(esi + 0x50)
            var_58.d = xmm0_33
            var_50.d = xmm2_10
            double xmm0_36 = _mm_cvtps_pd(xmm0_33 * xmm0_33 + xmm2_10 * xmm2_10)
            
            if (0 f> xmm0_36)
                result = _libm_sse2_sqrt_precise(arg3, arg2.w, entry_ebx)
            else
                xmm0_36 = _mm_sqrt_sd(xmm0_36, xmm0_36)
            
            float xmm1_31 = fconvert.s(xmm0_36)
            
            if (not(xmm1_31 <= 9.99999975e-06f))
                double xmm0_37 = xmm0_8
                
                if (0 f> xmm0_37)
                    _libm_sse2_sqrt_precise(arg3, arg2.w, entry_ebx)
                else
                    xmm0_37 = _mm_sqrt_sd(xmm0_37, xmm0_37)
                
                result = *arg1
                xmm1_31 = ((fconvert.s(xmm0_37) - xmm1_31 f+ *(result + 0x34)) * var_68 + xmm1_31)
                    / xmm1_31
            
            float xmm2_11 = *(esi + 0x54)
            float xmm0_45 = var_50.d * xmm1_31
            var_50.d = xmm2_11
            *(esi + 0x50) = xmm0_45
            *(esi + 0x5c) = var_58.d * xmm1_31
            float xmm0_48 = *(esi + 0x60)
            var_58.d = xmm0_48
            double xmm0_51 = _mm_cvtps_pd(xmm0_48 * xmm0_48 + xmm2_11 * xmm2_11)
            
            if (0 f> xmm0_51)
                result = _libm_sse2_sqrt_precise(arg3, arg2.w, entry_ebx)
            else
                xmm0_51 = _mm_sqrt_sd(xmm0_51, xmm0_51)
            
            float xmm1_36 = fconvert.s(xmm0_51)
            
            if (not(xmm1_36 <= 9.99999975e-06f))
                double xmm0_52 = xmm0_11
                
                if (0 f> xmm0_52)
                    _libm_sse2_sqrt_precise(arg3, arg2.w, entry_ebx)
                else
                    xmm0_52 = _mm_sqrt_sd(xmm0_52, xmm0_52)
                
                result = *arg1
                xmm1_36 =
                    ((fconvert.s(xmm0_52) - xmm1_36 + result[7].d) * var_68 + xmm1_36) / xmm1_36
            
            edx = 1
            *(esi + 0x54) = var_50.d * xmm1_36
            *(esi + 0x60) = var_58.d * xmm1_36
        
        if (not(xmm0 f<= 0))
            float var_28
            var_28.q = _mm_cvtps_pd(*(esi + 0x60))
            unimplemented  {fld st0, qword [esp+0x50]}
            var_28.q = _mm_cvtps_pd(*(esi + 0x54))
            unimplemented  {fld st0, qword [esp+0x50]}
            _CIatan2(arg3, arg2, entry_ebx, var_6c, var_68, xmm4, xmm0_1, xmm0, var_58, var_50)
            int64_t xmm0_69 = _mm_cvtps_pd(xmm0_1)
            var_58.d = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
            unimplemented  {fstp dword [esp+0x20], st0}
            var_28.q = xmm0_69
            unimplemented  {fld st0, qword [esp+0x50]}
            var_28.q = _mm_cvtps_pd(xmm4)
            unimplemented  {fld st0, qword [esp+0x50]}
            _CIatan2()
            int64_t xmm0_73 = _mm_cvtps_pd(var_34)
            var_50 = fconvert.d(unimplemented  {fstp qword [esp+0x28], st0})
            unimplemented  {fstp qword [esp+0x28], st0}
            var_28.q = xmm0_73
            unimplemented  {fld st0, qword [esp+0x50]}
            var_28.q = _mm_cvtps_pd(var_38)
            unimplemented  {fld st0, qword [esp+0x50]}
            _CIatan2()
            var_28.q = fconvert.d(unimplemented  {fstp qword [esp+0x50], st0})
            unimplemented  {fstp qword [esp+0x50], st0}
            float xmm0_77 = _mm_cvtpd_ps(zx.o(var_28.q))
            float xmm1_40 = _mm_cvtpd_ps(zx.o(var_50)) - xmm0_77
            var_28.q = _mm_cvtps_pd(*(esi + 0x5c))
            unimplemented  {fld st0, qword [esp+0x50]}
            var_28.q = _mm_cvtps_pd(*(esi + 0x50))
            unimplemented  {fld st0, qword [esp+0x50]}
            _CIatan2()
            var_28.q = fconvert.d(unimplemented  {fstp qword [esp+0x50], st0})
            unimplemented  {fstp qword [esp+0x50], st0}
            top -= 4
            float xmm1_44 = xmm1_40 - (var_58.d - _mm_cvtpd_ps(zx.o(var_28.q)))
            float xmm0_84 = *(esi + 0x60)
            float xmm1_45 = *(esi + 0x54)
            double xmm0_87 = _mm_cvtps_pd(xmm0_84 * xmm0_84 + xmm1_45 * xmm1_45)
            
            if (0 f> xmm0_87)
                _libm_sse2_sqrt_precise()
            else
                xmm0_87 = _mm_sqrt_sd(xmm0_87, xmm0_87)
            
            var_50.d = fconvert.s(xmm0_87)
            float xmm0_89 = xmm1_44
            
            if (not(xmm0_89 <= 3.14159274f))
                xmm0_89 = xmm0_89 - 6.28318548f
            else if (not(-3.14159274f <= xmm0_89))
                xmm0_89 = xmm0_89 + 6.28318548f
            
            float xmm0_92[0x2] = (xmm0_89 + xmm0_5) * xmm0 f+ var_58.d
            var_6c = xmm0_92
            double xmm0_93 = _mm_cvtps_pd(xmm0_92)
            _libm_sse2_cos_precise()
            *(esi + 0x54) = fconvert.s(xmm0_93) f* var_50.d
            double xmm0_94 = _mm_cvtps_pd(var_6c)
            result = _libm_sse2_sin_precise()
            *(esi + 0x60) = fconvert.s(xmm0_94) f* var_50.d
            *(esi + 0x4c) = 0
        else if (edx != 0)
            *(esi + 0x4c) = 0
        
        xmm5 = var_68
        i = i_1 + 1
        xmm6 = var_40
        xmm2 = var_3c
        xmm3 = var_38
        xmm7 = var_34
        ecx = var_30
        i_1 = i
    while (i s< arg1[1])

return result
