// 函数: sub_7558f0
// 地址: 0x7558f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = arg1[3]
float xmm0 = arg1[7]
float xmm7 = arg1[4]
float xmm5 = arg1[5]
float xmm3[0x2] = *(ecx + 0x5c)
float xmm4 = *(ecx + 0x54)
float xmm2[0x2] = *(ecx + 0x50)
float xmm6 = arg1[6]
float xmm0_1 = *(ecx + 0x60)
void* var_38 = ecx
float var_3c = xmm7
float var_48 = xmm5
float var_6c = xmm6
int32_t var_44 = xmm2
int32_t var_40 = xmm3
float xmm0_4

if (xmm0_1 f* xmm2 - xmm3[0] * xmm4 f<= 0)
    xmm0_4 = -0.0174532924f
else
    xmm0_4 = 0.0174532924f

double* result = *arg1
int32_t i = 0
int32_t i_1 = 0
float xmm1_4 = xmm0_4 * result[5].d
float xmm0_5 = xmm0_4 f* *(result + 0x3c)

if (arg1[1] s> 0)
    double xmm0_8 = _mm_cvtps_pd(xmm3[0] f* xmm3 + xmm2[0] f* xmm2)
    double xmm0_11 = _mm_cvtps_pd(xmm0_1 * xmm0_1 + xmm4 * xmm4)
    
    do
        void* esi = *(arg1[2] + (i << 2))
        int32_t edx = 0
        xmm7 f- 0
        result:1.b = (xmm7 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7, 0f) ? 1 : 0) << 2
            | (xmm7 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        float var_64
        double var_58
        int32_t entry_ebx
        int16_t top
        
        if (p_2)
            float xmm0_12 = *(esi + 0x50)
            float xmm0_13 = *(esi + 0x54)
            int64_t var_58_1 = _mm_cvtps_pd(xmm3)
            unimplemented  {fld st0, qword [esp+0x20]}
            int64_t var_58_2 = _mm_cvtps_pd(xmm2)
            unimplemented  {fld st0, qword [esp+0x20]}
            _CIatan2()
            var_58 = fconvert.d(unimplemented  {fstp qword [esp+0x20], st0})
            unimplemented  {fstp qword [esp+0x20], st0}
            top -= 1
            float xmm0_18 = _mm_cvtpd_ps(zx.o(var_58)) + xmm1_4
            
            if (not(xmm0_18 <= 3.14159274f))
                xmm0_18 = xmm0_18 - 6.28318548f
            else if (not(-3.14159274f <= xmm0_18))
                xmm0_18 = xmm0_18 + 6.28318548f
            
            float xmm0_19[0x2] = xmm0_18 * var_3c
            var_58.d = xmm0_19
            double xmm0_20 = _mm_cvtps_pd(xmm0_19)
            _libm_sse2_cos_precise(arg3, arg2.w, entry_ebx)
            var_64 = fconvert.s(xmm0_20)
            double xmm0_22 = _mm_cvtps_pd(var_58.d)
            _libm_sse2_sin_precise()
            float xmm2_1 = fconvert.s(xmm0_22)
            ecx = var_38
            edx = 1
            xmm5 = var_48
            xmm6 = var_6c
            float xmm0_26 = xmm2_1 f* *(esi + 0x60)
            *(esi + 0x50) = var_64 * xmm0_12 - xmm2_1 f* *(esi + 0x5c)
            *(esi + 0x54) = var_64 * xmm0_13 - xmm0_26
            float xmm3_3 = var_64 f* *(esi + 0x60) + xmm2_1 * xmm0_13
            *(esi + 0x5c) = var_64 f* *(esi + 0x5c) + xmm2_1 * xmm0_12
            *(esi + 0x60) = xmm3_3
        
        xmm5 f- 0
        result:1.b = (xmm5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5, 0f) ? 1 : 0) << 2
            | (xmm5 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            result = *arg1
            edx = 1
            float xmm1_21 = *(result + 0x2c)
            float xmm2_3 = result[6].d
            float xmm2_8 = (xmm2_3 f* *(ecx + 0x54) + xmm1_21 f* *(ecx + 0x50) f+ *(ecx + 0x58))
                * xmm5 f+ *(esi + 0x58)
            *(esi + 0x64) = (xmm2_3 f* *(ecx + 0x60) + xmm1_21 f* *(ecx + 0x5c) f+ *(ecx + 0x64))
                * xmm5 f+ *(esi + 0x64)
            *(esi + 0x58) = xmm2_8
        
        if (not(xmm6 f<= 0))
            double xmm0_31 = xmm0_8
            
            if (0 f> xmm0_31)
                _libm_sse2_sqrt_precise(arg3, arg2.w, entry_ebx)
            else
                xmm0_31 = _mm_sqrt_sd(xmm0_31, xmm0_31)
            
            float xmm1_27 = (fconvert.s(xmm0_31) - 1f f+ *(*arg1 + 0x34)) * var_6c + 1f
            float xmm0_33 = xmm1_27 f* *(esi + 0x50)
            *(esi + 0x5c) = xmm1_27 f* *(esi + 0x5c)
            *(esi + 0x50) = xmm0_33
            double xmm0_34 = xmm0_11
            
            if (0 f> xmm0_34)
                _libm_sse2_sqrt_precise(arg3, arg2.w, entry_ebx)
            else
                xmm0_34 = _mm_sqrt_sd(xmm0_34, xmm0_34)
            
            result = *arg1
            edx = 1
            float xmm1_33 = (fconvert.s(xmm0_34) - 1f + result[7].d) * var_6c + 1f
            float xmm0_36 = xmm1_33 f* *(esi + 0x54)
            *(esi + 0x60) = xmm1_33 f* *(esi + 0x60)
            *(esi + 0x54) = xmm0_36
        
        if (not(xmm0 f<= 0))
            float var_28
            var_28.q = _mm_cvtps_pd(xmm0_1)
            unimplemented  {fld st0, qword [esp+0x50]}
            var_28.q = _mm_cvtps_pd(xmm4)
            unimplemented  {fld st0, qword [esp+0x50]}
            _CIatan2(arg3, arg2, entry_ebx, var_6c, xmm4, var_64, xmm0_1, xmm0, var_58)
            int64_t xmm0_43 = _mm_cvtps_pd(var_40)
            var_28.q = fconvert.d(unimplemented  {fstp qword [esp+0x50], st0})
            unimplemented  {fstp qword [esp+0x50], st0}
            float var_30
            var_30.q = xmm0_43
            unimplemented  {fld st0, qword [esp+0x48]}
            var_30.q = _mm_cvtps_pd(var_44)
            unimplemented  {fld st0, qword [esp+0x48]}
            _CIatan2()
            var_30.q = fconvert.d(unimplemented  {fstp qword [esp+0x48], st0})
            unimplemented  {fstp qword [esp+0x48], st0}
            float xmm0_47 = _mm_cvtpd_ps(zx.o(var_30.q))
            float xmm1_37 = _mm_cvtpd_ps(zx.o(var_28.q)) - xmm0_47
            var_64 = xmm1_37
            
            if (not(xmm1_37 <= 3.14159274f))
                var_64 = xmm1_37 - 6.28318548f
            else if (not(-3.14159274f <= xmm1_37))
                var_64 = xmm1_37 + 6.28318548f
            
            float xmm1_39 = *(esi + 0x60)
            float xmm0_48 = *(esi + 0x54)
            double xmm0_50 = _mm_cvtps_pd(xmm1_39 * xmm1_39 + xmm0_48 * xmm0_48)
            
            if (0 f> xmm0_50)
                _libm_sse2_sqrt_precise()
            else
                xmm0_50 = _mm_sqrt_sd(xmm0_50, xmm0_50)
            
            var_58.d = fconvert.s(xmm0_50)
            var_28.q = _mm_cvtps_pd(*(esi + 0x60))
            unimplemented  {fld st0, qword [esp+0x50]}
            var_28.q = _mm_cvtps_pd(*(esi + 0x54))
            unimplemented  {fld st0, qword [esp+0x50]}
            _CIatan2()
            var_28.q = fconvert.d(unimplemented  {fstp qword [esp+0x50], st0})
            unimplemented  {fstp qword [esp+0x50], st0}
            top -= 3
            double xmm0_59 =
                _mm_cvtps_pd(_mm_cvtpd_ps(zx.o(var_28.q)) + (var_64 - 1.57079637f + xmm0_5) * xmm0)
            var_28.q = xmm0_59
            _libm_sse2_cos_precise()
            *(esi + 0x54) = fconvert.s(xmm0_59) f* var_58.d
            result = _libm_sse2_sin_precise()
            *(esi + 0x60) = fconvert.s(var_28.q) f* var_58.d
            *(esi + 0x4c) = 0
        else if (edx != 0)
            *(esi + 0x4c) = 0
        
        xmm5 = var_48
        i = i_1 + 1
        xmm6 = var_6c
        xmm2 = var_44
        xmm3 = var_40
        xmm7 = var_3c
        ecx = var_38
        i_1 = i
    while (i s< arg1[1])

return result
