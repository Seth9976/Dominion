// 函数: sub_7532e0
// 地址: 0x7532e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm1 = arg1[6]
int32_t i_3 = arg1[1]
int32_t i_4 = i_3
int32_t i_2 = i_3
float xmm2 = arg1[7]
int32_t eax
eax.b = xmm1 > 0f
float result_3 = *(arg1[3] + 0x1c)
void* eax_2 = *arg1
int32_t ecx = *(eax_2 + 0x1c)
int32_t var_3c = ecx
int32_t edx
edx.b = ecx == 2
int32_t edx_1 = *(eax_2 + 0x20)
int32_t var_54 = edx_1
float eax_3
eax_3.b = edx_1 == 0

if (edx_1 != 0)
    i_4 = i_3 + 1

int32_t eax_5 = arg1[2]
int32_t* result
result.b = xmm2 > 0f

if (result != 0 || eax != result)
    result = result_3
    
    if (result != 0 && result[1] == 4)
        if (arg1[8] != i_4)
            int32_t eax_6 = arg1[9]
            
            if (eax_6 != 0)
                free(eax_6)
            
            int32_t ecx_1 = data_147ded8
            int32_t _Size = i_4 << 2
            int32_t eax_7
            
            if (ecx_1 == 0)
                eax_7 = malloc(_Size)
            else
                eax_7 = ecx_1(_Size, 
                    "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\PathConstraint.c", 0x63)
            
            edx_1 = var_54
            ecx = var_3c
            arg1[9] = eax_7
            arg1[8] = i_4
        
        int32_t* eax_8 = arg1[9]
        void** ebx = nullptr
        *eax_8 = 0
        float xmm0_1 = arg1[5]
        
        if (edx_1 == 2)
            if (arg1[0x10] != i_2)
                int32_t eax_10 = arg1[0x11]
                
                if (eax_10 != 0)
                    free(eax_10)
                
                int32_t ecx_5 = data_147ded8
                int32_t _Size_1 = i_2 << 2
                int32_t eax_11
                
                if (ecx_5 == 0)
                    eax_11 = malloc(_Size_1)
                else
                    eax_11 = ecx_5(_Size_1, 
                        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\PathConstraint.c", 0x6e)
                
                edx_1 = var_54
                arg1[0x11] = eax_11
                arg1[0x10] = i_2
            
            ebx = arg1[0x11]
            goto label_753484
        
        int32_t entry_ebx
        
        if (ecx != 2)
        label_753484:
            int32_t i = 0
            int32_t eax_13 = *(eax_2 + 0x1c)
            
            if (i_4 - 1 s> 0)
                do
                    int32_t* ecx_6 = *(eax_5 + (i << 2))
                    float xmm2_1 = *(*ecx_6 + 0xc)
                    float xmm0_2
                    
                    if (not(9.99999975e-06f <= xmm2_1))
                        if (edx_1 == 2)
                            ebx[i] = 0
                        
                        xmm0_2 = (zx.o(0)).d
                    else if (var_3c != 2)
                        float xmm0_9 = xmm2_1 f* ecx_6[0x17]
                        float xmm1_2 = xmm2_1 f* ecx_6[0x14]
                        double xmm0_12 = _mm_cvtps_pd(xmm0_9 * xmm0_9 + xmm1_2 * xmm1_2)
                        
                        if (0 f> xmm0_12)
                            _libm_sse2_sqrt_precise(arg3, arg2.w, entry_ebx)
                        else
                            xmm0_12 = _mm_sqrt_sd(xmm0_12, xmm0_12)
                        
                        edx_1 = var_54
                        float xmm2_5 = fconvert.s(xmm0_12)
                        
                        if (edx_1 == 2)
                            ebx[i] = xmm2_5
                        
                        float xmm0_14
                        
                        if (eax_13 != 0)
                            xmm0_14 = xmm0_1
                        else
                            xmm0_14 = xmm2_1 + xmm0_1
                        
                        xmm0_2 = xmm0_14 * xmm2_5 / xmm2_1
                    else
                        if (edx_1 == 2)
                            float xmm0_4 = xmm2_1 f* ecx_6[0x14]
                            float xmm2_2 = xmm2_1 f* ecx_6[0x17]
                            double xmm0_6 = _mm_cvtps_pd(xmm2_2 * xmm2_2 + xmm0_4 * xmm0_4)
                            
                            if (0 f> xmm0_6)
                                _libm_sse2_sqrt_precise(arg3, arg2.w, entry_ebx)
                            else
                                xmm0_6 = _mm_sqrt_sd(xmm0_6, xmm0_6)
                            
                            edx_1 = var_54
                            ebx[i] = fconvert.s(xmm0_6)
                        
                        xmm0_2 = xmm0_1
                    
                    i += 1
                    eax_8[i] = xmm0_2
                while (i s< i_4 - 1)
        else
            int32_t ecx_4
            int32_t edi_3
            
            if (i_4 s> 1)
                edi_3, ecx_4 = __memfill_u32(&eax_8[1], xmm0_1, ((i_4 << 2) + 0xfffffffc) u>> 2)
        
        int32_t eax_18
        eax_18.b = *(eax_2 + 0x18) == 1
        int32_t* edx_3 = sub_753c50(eax_18, result_3, arg1, i_4, arg1, i_4, eax_3, eax_18, edx)
        float xmm2_6 = *(*arg1 + 0x24)
        float xmm5_1 = *edx_3
        float xmm4_1 = edx_3[1]
        xmm2_6 f- 0
        float var_2c_1 = xmm2_6
        int32_t* eax_19
        eax_19:1.b = (xmm2_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_6, 0f) ? 1 : 0) << 2
            | (xmm2_6 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        int32_t* result_2
        int32_t ecx_10
        
        if (p_2)
            result_2 = nullptr
            result = *(arg1[3] + 4)
            float xmm0_18
            
            if (result[0x18] f* result[0x14] - result[0x17] f* result[0x15] f<= 0)
                xmm0_18 = -0.0174532924f
            else
                xmm0_18 = 0.0174532924f
            
            ecx_10 = var_54
            var_2c_1 = xmm2_6 * xmm0_18
        else
            ecx_10 = var_54
            result.b = ecx_10 == 1
            result_2 = result
        
        if (i_2 s> 0)
            void* edi_5 = &edx_3[2]
            result = &eax_8[1]
            void* edx_5 = eax_5 - ebx
            int32_t* result_1 = result
            void* var_44_1 = edx_5
            int32_t i_1
            
            do
                void** esi = *(ebx + edx_5)
                esi[0x16] = (xmm5_1 f- esi[0x16]) * xmm2 f+ esi[0x16]
                esi[0x19] = (xmm4_1 f- esi[0x19]) * xmm2 f+ esi[0x19]
                float xmm1_8 = *(edi_5 + 4)
                float xmm3_1 = *(edi_5 + 8)
                float xmm2_9[0x2] = xmm1_8 - xmm5_1
                float var_38_2 = xmm1_8
                float xmm3_2[0x2] = xmm3_1 - xmm4_1
                float var_34_1 = xmm2_9
                float var_24_1 = xmm3_2
                
                if (ecx_10 == 2)
                    float xmm0_27 = *ebx
                    xmm0_27 f- 0
                    result:1.b = (xmm0_27 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_27, 0f) ? 1 : 0) << 2 | (xmm0_27 < 0f ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (p_4)
                        double xmm0_30 = _mm_cvtps_pd(xmm3_2[0] f* xmm3_2 + xmm2_9[0] f* xmm2_9)
                        
                        if (0 f> xmm0_30)
                            _libm_sse2_sqrt_precise(arg3, arg2.w, entry_ebx)
                        else
                            xmm0_30 = _mm_sqrt_sd(xmm0_30, xmm0_30)
                        
                        xmm2_9 = var_34_1
                        ecx_10 = var_54
                        xmm3_2 = var_24_1
                        float xmm1_16 = (fconvert.s(xmm0_30) f/ *ebx - 1f) * xmm1 + 1f
                        float xmm0_32 = xmm1_16 f* esi[0x14]
                        esi[0x17] = xmm1_16 f* esi[0x17]
                        xmm1_8 = var_38_2
                        esi[0x14] = xmm0_32
                    
                    result = result_1
                
                xmm5_1 = xmm1_8
                xmm4_1 = xmm3_1
                float var_1c_2 = xmm5_1
                float var_50_2 = xmm4_1
                
                if (eax != 0)
                    float xmm0_33 = esi[0x14]
                    float xmm0_34 = esi[0x15]
                    float var_18
                    float xmm1_18
                    int16_t top
                    
                    if (ecx_10 != 0)
                        float xmm0_35 = *result
                        xmm0_35 f- 0
                        result:1.b = (xmm0_35 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_35, 0f) ? 1 : 0) << 2 | (xmm0_35 < 0f ? 1 : 0)
                        bool p_6 = unimplemented  {test ah, 0x44}
                        
                        if (p_6)
                            var_18.q = _mm_cvtps_pd(xmm3_2)
                            unimplemented  {fld st0, qword [esp+0x50]}
                            var_18.q = _mm_cvtps_pd(xmm2_9)
                            unimplemented  {fld st0, qword [esp+0x50]}
                            _CIatan2(arg3, arg2, entry_ebx)
                            var_18 = fconvert.s(unimplemented  {fstp dword [esp+0x50], st0})
                            unimplemented  {fstp dword [esp+0x50], st0}
                            top -= 1
                            xmm1_18 = var_18
                        else
                            xmm1_18 = *(edi_5 + 0xc)
                    else
                        xmm1_18 = *edi_5
                    
                    var_18.q = _mm_cvtps_pd(esi[0x17])
                    unimplemented  {fld st0, qword [esp+0x50]}
                    var_18.q = _mm_cvtps_pd(xmm0_33)
                    unimplemented  {fld st0, qword [esp+0x50]}
                    _CIatan2(arg3, arg2, entry_ebx)
                    var_18.q = fconvert.d(unimplemented  {fstp qword [esp+0x50], st0})
                    unimplemented  {fstp qword [esp+0x50], st0}
                    top -= 1
                    float xmm0_45[0x2] =
                        xmm1_18 - (_mm_cvtpd_ps(zx.o(var_18.q)) - var_2c_1 * 0.0174532924f)
                    float var_58_3 = xmm0_45
                    float xmm0_51
                    float xmm7_1
                    
                    if (result_2 == 0)
                        xmm7_1 = xmm1
                        xmm0_51 = xmm0_45 f+ var_2c_1
                    else
                        double xmm0_46 = _mm_cvtps_pd(xmm0_45)
                        _libm_sse2_cos_precise()
                        float xmm0_47 = fconvert.s(xmm0_46)
                        double xmm0_48 = _mm_cvtps_pd(var_58_3)
                        _libm_sse2_sin_precise()
                        void* eax_22 = *esi
                        xmm7_1 = xmm1
                        float xmm2_11 = fconvert.s(xmm0_48)
                        xmm0_51 = var_58_3
                        var_50_2 = ((xmm0_47 f* esi[0x17] + xmm2_11 * xmm0_33) f* *(eax_22 + 0xc)
                            - var_24_1) * xmm7_1 + xmm3_1
                        var_1c_2 = ((xmm0_47 * xmm0_33 - xmm2_11 f* esi[0x17]) f* *(eax_22 + 0xc)
                            - var_34_1) * xmm7_1 + var_38_2
                    
                    if (not(xmm0_51 <= 3.14159274f))
                        xmm0_51 = xmm0_51 - 6.28318548f
                    else if (not(-3.14159274f <= xmm0_51))
                        xmm0_51 = xmm0_51 + 6.28318548f
                    
                    float xmm0_52[0x2] = xmm0_51 * xmm7_1
                    double xmm0_53 = _mm_cvtps_pd(xmm0_52)
                    _libm_sse2_cos_precise()
                    float xmm0_54 = fconvert.s(xmm0_53)
                    double xmm0_55 = _mm_cvtps_pd(xmm0_52)
                    _libm_sse2_sin_precise()
                    float xmm2_13 = fconvert.s(xmm0_55)
                    result = result_1
                    xmm4_1 = var_50_2
                    xmm5_1 = var_1c_2
                    float xmm0_59 = xmm2_13 f* esi[0x18]
                    esi[0x14] = xmm0_54 * xmm0_33 - xmm2_13 f* esi[0x17]
                    esi[0x15] = xmm0_54 * xmm0_34 - xmm0_59
                    float xmm3_12 = xmm0_54 f* esi[0x18] + xmm2_13 * xmm0_34
                    esi[0x17] = xmm0_54 f* esi[0x17] + xmm2_13 * xmm0_33
                    esi[0x18] = xmm3_12
                
                ecx_10 = var_54
                result = &result[1]
                edx_5 = var_44_1
                ebx = &ebx[1]
                edi_5 += 0xc
                esi[0x13] = 0xffffffff
                i_1 = i_2
                i_2 -= 1
                result_1 = result
            while (i_1 != 1)

return result
