// 函数: sub_6d24b0
// 地址: 0x6d24b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = 0
void* eax = sub_6d2320(arg3, arg2)
*arg6 = 0

if (eax s>= 0)
    int32_t eax_2 = *(arg3 + 4)
    uint16_t edx = zx.w(*(eax + eax_2 + 1)) + zx.w(*(eax + eax_2)) * 0x100
    int32_t var_50
    
    if (edx s<= 0)
        int32_t ecx_91
        
        if (edx s>= 0)
            ecx_91 = 0
        label_6d2e66:
            *arg6 = edi
            return ecx_91
        
        int32_t var_4c_2 = 0
        void* esi_5 = eax + *(arg3 + 4) + 0xa
        edi = 0
        int32_t var_64_2 = 0
        
        while (true)
            int32_t i_9
            i_9.b = *(esi_5 + 2)
            char edx_6 = *(esi_5 + 1)
            int128_t xmm0_1 = data_893540
            char var_66_3 = i_9.b
            i_9.b = *(esi_5 + 3)
            esi_5 += 4
            var_50 = 0
            float var_54_2 = 0f
            float var_58_4 = 0f
            
            if ((edx_6 & 2) != 0)
                int32_t eax_88
                uint128_t xmm0_2
                
                if ((edx_6 & 1) == 0)
                    xmm0_2 = zx.o(sx.d(*esi_5))
                    eax_88 = sx.d(*(esi_5 + 1))
                    esi_5 += 2
                else
                    xmm0_2 = zx.o(sx.d(zx.w(*esi_5) * 0x100 + zx.w(*(esi_5 + 1))))
                    int16_t ecx_60 = zx.w(*(esi_5 + 2)) * 0x100 + zx.w(*(esi_5 + 3))
                    esi_5 += 4
                    eax_88 = sx.d(ecx_60)
                
                var_54_2 = _mm_cvtepi32_ps(xmm0_2)
                var_58_4 = _mm_cvtepi32_ps(zx.o(eax_88))
            
            float var_48_2
            float var_44_2
            float var_3c_2
            float xmm2_1
            float xmm3_1
            
            if ((edx_6 & 8) != 0)
                xmm3_1 = (zx.o(0)).d
                var_48_2 = 0f
                int16_t ecx_63 = zx.w(*esi_5) * 0x100 + zx.w(*(esi_5 + 1))
                esi_5 += 2
                float xmm0_8 = _mm_cvtepi32_ps(zx.o(sx.d(ecx_63))) * 6.10351562e-05f
                var_44_2 = xmm0_8
                xmm2_1 = xmm0_8
                var_3c_2 = xmm2_1
            else if ((edx_6 & 0x40) != 0)
                xmm3_1 = (zx.o(0)).d
                var_48_2 = 0f
                int16_t ecx_69 = zx.w(*(esi_5 + 2)) * 0x100
                uint16_t eax_94 = zx.w(*(esi_5 + 3))
                float xmm2_3 =
                    _mm_cvtepi32_ps(zx.o(sx.d(zx.w(*esi_5) * 0x100 + zx.w(*(esi_5 + 1)))))
                esi_5 += 4
                xmm2_1 = xmm2_3 * 6.10351562e-05f
                var_44_2 = _mm_cvtepi32_ps(zx.o(sx.d(ecx_69 + eax_94))) * 6.10351562e-05f
                var_3c_2 = xmm2_1
            else if (edx_6 s>= 0)
                xmm3_1 = xmm0_1:4.d
                xmm2_1 = xmm0_1.d
                var_44_2 = xmm0_1:0xc.d
                var_48_2 = xmm0_1:8.d
                var_3c_2 = xmm2_1
            else
                int16_t ecx_75 = zx.w(*(esi_5 + 2)) * 0x100
                uint16_t eax_98 = zx.w(*(esi_5 + 3))
                xmm2_1 = _mm_cvtepi32_ps(zx.o(sx.d(zx.w(*esi_5) * 0x100 + zx.w(*(esi_5 + 1)))))
                    * 6.10351562e-05f
                int16_t ecx_78 = zx.w(*(esi_5 + 4)) * 0x100
                uint16_t eax_100 = zx.w(*(esi_5 + 5))
                float xmm3_3 = _mm_cvtepi32_ps(zx.o(sx.d(ecx_75 + eax_98)))
                var_3c_2 = xmm2_1
                uint16_t ecx_79 = zx.w(*(esi_5 + 6))
                float xmm0_13 = _mm_cvtepi32_ps(zx.o(sx.d(ecx_78 + eax_100)))
                xmm3_1 = xmm3_3 * 6.10351562e-05f
                int16_t ecx_81 = ecx_79 * 0x100 + zx.w(*(esi_5 + 7))
                esi_5 += 8
                var_48_2 = xmm0_13 * 6.10351562e-05f
                var_44_2 = _mm_cvtepi32_ps(zx.o(sx.d(ecx_81))) * 6.10351562e-05f
            
            double xmm0_22 = _mm_cvtps_pd(xmm3_1 * xmm3_1 + xmm2_1 * xmm2_1)
            void var_68
            
            if (0 f> xmm0_22)
                _libm_sse2_sqrt_precise(arg5, arg4, var_68)
            else
                xmm0_22 = _mm_sqrt_sd(xmm0_22, xmm0_22)
            
            float xmm0_23 = fconvert.s(xmm0_22)
            double xmm0_26 = _mm_cvtps_pd(var_44_2 * var_44_2 + var_48_2 * var_48_2)
            
            if (0 f> xmm0_26)
                _libm_sse2_sqrt_precise(arg5, arg4, var_68)
            else
                xmm0_26 = _mm_sqrt_sd(xmm0_26, xmm0_26)
            
            float xmm0_27 = fconvert.s(xmm0_26)
            uint32_t eax_104 = zx.d(i_9.b)
            i_9 = sub_6d4740(eax_104, (zx.d(var_66_3) << 8) + eax_104, arg3, &var_50)
            
            if (i_9 s<= 0)
                ecx_91 = var_4c_2
            else
                int16_t* edx_10 = nullptr
                int32_t i_7 = i_9
                int32_t i
                
                do
                    int32_t ecx_83 = var_50
                    float xmm3_4 = float.s(sx.d(*(edx_10 + ecx_83 + 2)))
                    float xmm2_6 = float.s(sx.d(*(edx_10 + ecx_83)))
                    *(edx_10 + ecx_83) =
                        (int.d((xmm2_6 * var_3c_2 + xmm3_4 * var_48_2 + var_54_2) * xmm0_23)).w
                    *(edx_10 + ecx_83 + 2) =
                        (int.d((xmm2_6 * xmm3_1 + xmm3_4 * var_44_2 + var_58_4) * xmm0_27)).w
                    float xmm3_6 = float.s(sx.d(*(edx_10 + ecx_83 + 6)))
                    float xmm2_11 = float.s(sx.d(*(edx_10 + ecx_83 + 4)))
                    *(edx_10 + ecx_83 + 4) =
                        (int.d((xmm2_11 * var_3c_2 + xmm3_6 * var_48_2 + var_54_2) * xmm0_23)).w
                    *(edx_10 + ecx_83 + 6) =
                        (int.d((xmm2_11 * xmm3_1 + xmm3_6 * var_44_2 + var_58_4) * xmm0_27)).w
                    edx_10 = &edx_10[7]
                    i = i_7
                    i_7 -= 1
                while (i != 1)
                int32_t ecx_85 = i_9 + var_4c_2
                int32_t eax_116 = malloc(ecx_85 * 0xe)
                
                if (eax_116 == 0)
                    if (var_64_2 != 0)
                        free(var_64_2)
                    
                    int32_t eax_123 = var_50
                    
                    if (eax_123 != 0)
                        free(eax_123)
                    
                    break
                
                int32_t edx_11 = var_4c_2
                
                if (edx_11 s> 0)
                    memcpy(eax_116, var_64_2, edx_11 * 0xe)
                    edx_11 = var_4c_2
                
                memcpy(eax_116 + edx_11 * 0xe, var_50, i_9 * 0xe)
                
                if (var_64_2 != 0)
                    free(var_64_2)
                
                edi = eax_116
                var_64_2 = edi
                free(var_50)
                ecx_91 = ecx_85
                var_4c_2 = ecx_91
            
            if ((edx_6 & 0x20) == 0)
                goto label_6d2e66
    else
        int32_t eax_4 = sx.d(edx)
        int32_t var_60_1 = 0
        int32_t var_30_1 = 0
        void* edi_1 = *(arg3 + 4)
        void* ecx_5 = eax + (eax_4 << 1)
        int32_t eax_5 = eax_4 * 2
        void* edx_2 = edi_1 + 0xa + eax
        void* var_34_1 = edx_2
        void* esi_2 = eax_5 + 0xc + (zx.d(*(ecx_5 + edi_1 + 0xa)) << 8)
            + zx.d(*(ecx_5 + edi_1 + 0xb)) + edi_1 + eax
        int32_t i_8 = zx.d(*(eax_5 + edx_2 - 1)) + (zx.d(*(eax_5 + edx_2 - 2)) << 8) + 1
        int32_t edi_3 = malloc((eax_5 + i_8) * 0xe)
        int32_t var_64_1 = edi_3
        
        if (edi_3 != 0)
            char ecx_14 = 0
            int32_t var_2c_1 = 0
            int32_t eax_15 = eax_5 * 0xe
            int32_t var_4c_1
            int32_t var_48_1
            int32_t var_3c_1
            int32_t var_38_4
            int32_t eax_79
            int16_t ecx_50
            int32_t edx_5
            
            if (i_8 == 0)
                edx_5 = 0
                eax_79 = 0
                var_3c_1 = 0
                ecx_50 = 0
                var_38_4 = 0
                var_4c_1 = 0
                var_48_1 = 0
            else
                int32_t i_4 = i_8
                char* eax_17 = eax_15 + 0xc + edi_3
                int32_t edx_4
                edx_4.b = 0
                char* var_38_1 = eax_17
                int32_t i_1
                
                do
                    if (ecx_14 != 0)
                        ecx_14 -= 1
                    else
                        eax_17.b = *esi_2
                        edx_4.b = eax_17.b
                        edx_4.b &= 8
                        
                        if (edx_4.b != 0)
                            ecx_14 = *(esi_2 + 1)
                        
                        bool cond:1_1 = edx_4.b != 0
                        edx_4.b = eax_17.b
                        int32_t eax_18
                        eax_18.b = cond:1_1
                        esi_2 += eax_18 + 1
                        eax_17 = var_38_1
                    
                    *eax_17 = edx_4.b
                    eax_17 = &eax_17[0xe]
                    i_1 = i_4
                    i_4 -= 1
                    var_38_1 = eax_17
                while (i_1 != 1)
                void* eax_21 = eax_15 + edi_3
                void* var_38_2 = eax_21
                int32_t edi_4 = 0
                int32_t i_5 = i_8
                int32_t i_2
                
                do
                    edx_4.b = *(eax_21 + 0xc)
                    edx_4.b &= 0x10
                    
                    if ((*(eax_21 + 0xc) & 2) != 0)
                        eax_21.b = *esi_2
                        esi_2 += 1
                        uint32_t ecx_16 = zx.d(eax_21.b)
                        
                        if (edx_4.b == 0)
                            ecx_16 = neg.d(ecx_16)
                        
                        edi_4 += ecx_16
                    else if (edx_4.b == 0)
                        edi_4 += sx.d(zx.w(*esi_2) * 0x100 + zx.w(*(esi_2 + 1)))
                        esi_2 += 2
                    
                    *var_38_2 = edi_4.w
                    eax_21 = var_38_2 + 0xe
                    i_2 = i_5
                    i_5 -= 1
                    var_38_2 = eax_21
                while (i_2 != 1)
                int32_t i_6 = i_8
                void* eax_29 = var_64_1 + 2 + eax_5 * 0xe
                int32_t edi_7 = 0
                void* var_38_3 = eax_29
                int32_t i_3
                
                do
                    edx_4.b = *(eax_29 + 0xa)
                    edx_4.b &= 0x20
                    
                    if ((*(eax_29 + 0xa) & 4) != 0)
                        eax_29.b = *esi_2
                        esi_2 += 1
                        uint32_t ecx_22 = zx.d(eax_29.b)
                        
                        if (edx_4.b == 0)
                            ecx_22 = neg.d(ecx_22)
                        
                        edi_7 += ecx_22
                    else if (edx_4.b == 0)
                        edi_7 += sx.d(zx.w(*esi_2) * 0x100 + zx.w(*(esi_2 + 1)))
                        esi_2 += 2
                    
                    *var_38_3 = edi_7.w
                    eax_29 = var_38_3 + 0xe
                    i_3 = i_6
                    i_6 -= 1
                    var_38_3 = eax_29
                while (i_3 != 1)
                edi_3 = var_64_1
                edx_5 = 0
                int32_t var_54_1
                __builtin_memset(&var_54_1, 0, 0x12)
                int32_t ecx_26 = 0
                var_3c_1 = 0
                var_38_4 = 0
                void* esi_4 = edi_3 + eax_5 * 0xe
                int16_t var_44_1
                int32_t eax_36
                
                do
                    eax_36.b = *(esi_4 + 0xc)
                    char var_66_2 = eax_36.b
                    int16_t eax_37 = *esi_4
                    int16_t eax_38 = *(esi_4 + 2)
                    int32_t eax_39 = var_54_1
                    
                    if (var_2c_1 == eax_39)
                        if (eax_39 != 0)
                            edx_5 = sub_6d23e0(eax_39, edx_5, edi_3, var_60_1, var_30_1, var_44_1, 
                                ecx_26.w, var_38_4, var_3c_1, var_48_1.w, var_4c_1.w)
                        
                        int32_t eax_43 = not.d(zx.d(var_66_2)) & 1
                        var_30_1 = eax_43
                        int32_t eax_44 = sx.d(eax_37)
                        
                        if (eax_43 == 0)
                            var_44_1 = eax_44.w
                            var_50 = sx.d(eax_38)
                        else
                            bool cond:6_1 = (*(esi_4 + 0x1a) & 1) != 0
                            var_38_4 = eax_44
                            var_3c_1 = sx.d(eax_38)
                            int32_t eax_47 = sx.d(*(esi_4 + 0xe))
                            var_44_1 = eax_47.w
                            var_50 = sx.d(*(esi_4 + 0x10))
                            
                            if (cond:6_1)
                                var_54_1 += 1
                                esi_4 += 0xe
                            else
                                var_44_1 = ((eax_47 + sx.d(eax_37)) s>> 1).w
                                edi_3 = var_64_1
                                var_50 = (var_50 + sx.d(eax_38)) s>> 1
                        
                        int32_t eax_52 = edx_5 * 7
                        edx_5 += 1
                        *(edi_3 + (eax_52 << 1)) = var_44_1
                        *(edi_3 + (eax_52 << 1) + 2) = var_50.w
                        *(edi_3 + (eax_52 << 1) + 4) = 0
                        *(edi_3 + (eax_52 << 1) + 0xc) = 1
                        var_60_1 = 0
                        int32_t eax_56 = (zx.d(*var_34_1) << 8) + zx.d(*(var_34_1 + 1)) + 1
                        var_34_1 += 2
                        var_2c_1 = eax_56
                    else if ((var_66_2 & 1) != 0)
                        int32_t ecx_49 = edx_5 * 7
                        int16_t var_28_1
                        int16_t var_24_3
                        
                        if (var_60_1 == 0)
                            var_24_3 = 0
                            var_28_1 = 0
                        else
                            var_24_3 = var_4c_1.w
                            var_28_1 = var_48_1.w
                        
                        edi_3 = var_64_1
                        int32_t eax_73
                        eax_73.b = var_60_1 != 0
                        eax_73.b += 2
                        var_60_1 = 0
                        edx_5 += 1
                        *(edi_3 + (ecx_49 << 1) + 0xc) = eax_73.b
                        *(edi_3 + (ecx_49 << 1)) = eax_37
                        *(edi_3 + (ecx_49 << 1) + 2) = eax_38
                        *(edi_3 + (ecx_49 << 1) + 4) = var_28_1
                        *(edi_3 + (ecx_49 << 1) + 6) = var_24_3
                    else
                        if (var_60_1 != 0)
                            int32_t ecx_41 = edx_5 * 7
                            *(edi_3 + (ecx_41 << 1) + 0xc) = 3
                            edi_3 = var_64_1
                            *(edi_3 + (ecx_41 << 1)) = ((sx.d(eax_37) + var_48_1) s>> 1).w
                            edx_5 += 1
                            *(edi_3 + (ecx_41 << 1) + 2) = ((sx.d(eax_38) + var_4c_1) s>> 1).w
                            *(edi_3 + (ecx_41 << 1) + 4) = var_48_1.w
                            *(edi_3 + (ecx_41 << 1) + 6) = var_4c_1.w
                        
                        var_48_1 = sx.d(eax_37)
                        var_4c_1 = sx.d(eax_38)
                        var_60_1 = 1
                    
                    esi_4 += 0xe
                    ecx_26 = var_50
                    eax_36 = var_54_1 + 1
                    var_54_1 = eax_36
                while (eax_36 s< i_8)
                eax_79 = ecx_26
                ecx_50 = var_44_1
            
            int32_t eax_80 = sub_6d23e0(eax_79, edx_5, edi_3, var_60_1, var_30_1, ecx_50, eax_79.w, 
                var_38_4, var_3c_1, var_48_1.w, var_4c_1.w)
            *arg6 = edi_3
            return eax_80

return 0
