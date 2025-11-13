// 函数: sub_6d4a60
// 地址: 0x6d4a60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm0 = arg6
float xmm6_1 = xmm0 + 1f
int32_t edi = arg2
int32_t esi = arg3
void** i = arg5
int32_t var_1c = edi
int32_t var_20 = esi
float var_c = xmm6_1

if (i == 0)
    return 

int32_t ecx = arg4

do
    float xmm4_1 = i[2]
    float xmm7_1 = i[1]
    xmm4_1 f- 0
    float var_8_1 = xmm7_1
    arg1:1.b = (xmm4_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_1, 0f) ? 1 : 0) << 2
        | (xmm4_1 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        float xmm2_22 = i[5]
        int128_t xmm3_12 = xmm4_1 + xmm7_1
        float var_14_1 = xmm2_22
        int128_t xmm7_7 = i[3]
        int32_t var_10_1 = xmm7_7
        arg5 = xmm3_12
        int128_t xmm1_32
        int128_t xmm4_7
        
        if (xmm2_22 <= xmm0)
            xmm4_7 = var_8_1
            xmm2_22 = xmm0
            xmm1_32 = xmm4_7
            var_14_1 = xmm0
        else
            xmm4_7 = var_8_1
            xmm1_32 = (xmm2_22 - xmm0) * xmm4_1 f+ xmm4_7
        
        float xmm5_4 = i[6]
        
        if (xmm6_1 <= xmm5_4)
            xmm5_4 = xmm6_1
        else
            xmm3_12 = (xmm5_4 - xmm0) * xmm4_1 f+ xmm4_7
        
        int32_t xmm4_9
        
        if (not(xmm1_32 f< 0) && not(xmm3_12 f< 0))
            xmm4_9 = _mm_cvtepi32_ps(zx.o(ecx))
        
        if (xmm1_32 f< 0 || xmm3_12 f< 0 || xmm4_9 f<= xmm1_32 || xmm4_9 f<= xmm3_12)
            int32_t ecx_5 = 0
            
            if (arg4 s<= 0)
                ecx = arg4
            else
                int32_t edi_2 = 1
                
                do
                    float xmm3_22 = float.s(ecx_5)
                    float xmm1_47 = xmm3_22 - var_8_1
                    float xmm2_29 = float.s(edi_2)
                    float xmm1_49 = xmm2_29 - var_8_1
                    float xmm4_20 = xmm1_47 / xmm4_1 + xmm0
                    float xmm5_14 = xmm1_49 / xmm4_1 + xmm0
                    float xmm3_26
                    float xmm4_21
                    
                    if (not(xmm3_22 <= var_8_1) && not(arg5 <= xmm2_29))
                        xmm0 - xmm4_20
                        float xmm1_51 = var_8_1
                        float var_14_2 = xmm0
                        float var_10_2 = xmm3_22
                        float xmm7_11 = xmm4_20
                        arg1:1.b = (xmm0 == xmm4_20 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0, xmm4_20) ? 1 : 0) << 2
                            | (xmm0 < xmm4_20 ? 1 : 0)
                        bool p_10 = unimplemented  {test ah, 0x44}
                        
                        if (p_10 && not(xmm0 f> i[6]))
                            xmm6_1 = var_c
                            
                            if (not(i[5] f> xmm4_20))
                                xmm6_1 = var_c
                                
                                if (not(i[5] f<= xmm0))
                                    xmm1_51 = (i[5] f- xmm0) * xmm1_47 / (xmm4_20 - arg6) + var_8_1
                                    var_14_2 = i[5]
                                
                                float xmm0_78 = i[6]
                                
                                if (not(xmm4_20 <= xmm0_78))
                                    var_10_2 = (xmm0_78 - xmm4_20) * (xmm3_22 - xmm1_51)
                                        / (xmm4_20 - var_14_2) + xmm3_22
                                    xmm7_11 = i[6]
                                
                                int32_t xmm0_84 = _mm_cvtepi32_ps(zx.o(ecx_5))
                                int32_t xmm0_86
                                
                                if (not(xmm0_84 f< xmm1_51))
                                    xmm0_86 = _mm_cvtepi32_ps(zx.o(ecx_5))
                                
                                if (xmm0_84 f< xmm1_51 || xmm0_86 f< var_10_2)
                                    float xmm0_88 = _mm_cvtepi32_ps(zx.o(ecx_5 + 1))
                                    
                                    if (xmm1_51 < xmm0_88 || not(var_10_2 >= xmm0_88))
                                        float xmm6_6 = var_10_2 - float.s(ecx_5)
                                        float var_10_3 = xmm6_6
                                        xmm6_1 = var_c
                                        *(esi + (ecx_5 << 2)) = (1f
                                            - (xmm1_51 - float.s(ecx_5) + xmm6_6) * 0.5f)
                                            * (xmm7_11 - var_14_2) f* i[4] f+ *(esi + (ecx_5 << 2))
                                else
                                    *(esi + (ecx_5 << 2)) =
                                        (xmm7_11 - var_14_2) f* i[4] f+ *(esi + (ecx_5 << 2))
                        
                        xmm4_20 - xmm5_14
                        float xmm1_59 = xmm2_29
                        float xmm7_22 = xmm5_14
                        float var_28_4 = xmm1_59
                        arg1:1.b = (xmm4_20 == xmm5_14 ? 1 : 0) << 6
                            | (is_unordered.d(xmm4_20, xmm5_14) ? 1 : 0) << 2
                            | (xmm4_20 < xmm5_14 ? 1 : 0)
                        bool p_12 = unimplemented  {test ah, 0x44}
                        
                        if (p_12 && not(xmm4_20 f> i[6]))
                            float xmm0_95 = i[5]
                            
                            if (not(xmm0_95 > xmm5_14))
                                if (not(xmm0_95 <= xmm4_20))
                                    float xmm1_62 = (xmm0_95 - xmm4_20) * (xmm2_29 - xmm3_22)
                                    float xmm0_99 = xmm5_14 - xmm4_20
                                    xmm4_20 = i[5]
                                    xmm3_22 = xmm3_22 + xmm1_62 / xmm0_99
                                    xmm1_59 = xmm2_29
                                
                                float xmm0_100 = i[6]
                                
                                if (not(xmm5_14 <= xmm0_100))
                                    xmm7_22 = i[6]
                                    xmm1_59 = (xmm0_100 - xmm5_14) * (xmm2_29 - xmm3_22)
                                        / (xmm5_14 - xmm4_20) + xmm2_29
                                
                                int32_t xmm0_106 = _mm_cvtepi32_ps(zx.o(ecx_5))
                                int32_t xmm0_108
                                
                                if (not(xmm0_106 f< xmm3_22))
                                    xmm0_108 = _mm_cvtepi32_ps(zx.o(ecx_5))
                                
                                if (xmm0_106 f< xmm3_22 || xmm0_108 f< xmm1_59)
                                    int32_t xmm0_110 = _mm_cvtepi32_ps(zx.o(ecx_5 + 1))
                                    
                                    if (xmm3_22 f< xmm0_110 || not(xmm1_59 f>= xmm0_110))
                                        *(esi + (ecx_5 << 2)) = (1f
                                            - (xmm3_22 - float.s(ecx_5) + xmm1_59 - float.s(ecx_5))
                                            * 0.5f) * (xmm7_22 - xmm4_20) f* i[4] f+
                                            *(esi + (ecx_5 << 2))
                                else
                                    *(esi + (ecx_5 << 2)) =
                                        (xmm7_22 - xmm4_20) f* i[4] f+ *(esi + (ecx_5 << 2))
                        
                        xmm4_21 = xmm6_1
                        xmm5_14 - xmm6_1
                        xmm3_26 = arg5
                        arg1:1.b = (xmm5_14 == xmm6_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm5_14, xmm6_1) ? 1 : 0) << 2
                            | (xmm5_14 < xmm6_1 ? 1 : 0)
                        bool p_14 = unimplemented  {test ah, 0x44}
                        
                        if (p_14)
                            float xmm1_69 = i[6]
                            
                            if (not(xmm5_14 > xmm1_69))
                                float xmm7_28 = i[5]
                                
                                if (not(xmm7_28 > xmm6_1))
                                    if (not(xmm7_28 <= xmm5_14))
                                        float xmm1_72 = (xmm7_28 - xmm5_14) * (arg5 - xmm2_29)
                                        float xmm0_119 = xmm6_1 - xmm5_14
                                        xmm5_14 = xmm7_28
                                        xmm2_29 = xmm2_29 + xmm1_72 / xmm0_119
                                    
                                    if (not(xmm6_1 <= xmm1_69))
                                        xmm4_21 = xmm1_69
                                        xmm3_26 = (arg5 - xmm2_29) * (xmm1_69 - xmm6_1)
                                            / (xmm6_1 - xmm5_14) + arg5
                                    
                                    if (_mm_cvtepi32_ps(zx.o(ecx_5)) f< xmm2_29)
                                    label_6d5490:
                                        int32_t xmm0_129 = _mm_cvtepi32_ps(zx.o(ecx_5 + 1))
                                        
                                        if (xmm2_29 f< xmm0_129 || not(xmm3_26 f>= xmm0_129))
                                            *(esi + (ecx_5 << 2)) = (1f - (xmm2_29 - float.s(ecx_5)
                                                + xmm3_26 - float.s(ecx_5)) * 0.5f)
                                                * (xmm4_21 - xmm5_14) f* i[4] f+
                                                *(esi + (ecx_5 << 2))
                                    else
                                        if (_mm_cvtepi32_ps(zx.o(ecx_5)) f< xmm3_26)
                                            goto label_6d5490
                                        
                                        *(esi + (ecx_5 << 2)) =
                                            (xmm4_21 - xmm5_14) f* i[4] f+ *(esi + (ecx_5 << 2))
                    else
                        float xmm2_36
                        float xmm5_15
                        
                        if (not(xmm3_22 <= arg5) && not(var_8_1 <= xmm2_29))
                            xmm0 - xmm5_14
                            float xmm1_74 = var_8_1
                            float var_14_3 = xmm0
                            float var_10_4 = xmm2_29
                            float xmm7_29 = xmm5_14
                            arg1:1.b = (xmm0 == xmm5_14 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0, xmm5_14) ? 1 : 0) << 2
                                | (xmm0 < xmm5_14 ? 1 : 0)
                            bool p_16 = unimplemented  {test ah, 0x44}
                            
                            if (p_16 && not(xmm0 f> i[6]))
                                xmm6_1 = var_c
                                
                                if (not(i[5] f> xmm5_14))
                                    xmm6_1 = var_c
                                    
                                    if (not(i[5] f<= xmm0))
                                        xmm1_74 =
                                            (i[5] f- xmm0) * xmm1_49 / (xmm5_14 - arg6) + var_8_1
                                        var_14_3 = i[5]
                                    
                                    float xmm0_137 = i[6]
                                    
                                    if (not(xmm5_14 <= xmm0_137))
                                        var_10_4 = (xmm0_137 - xmm5_14) * (xmm2_29 - xmm1_74)
                                            / (xmm5_14 - var_14_3) + xmm2_29
                                        xmm7_29 = i[6]
                                    
                                    int32_t xmm0_143 = _mm_cvtepi32_ps(zx.o(ecx_5))
                                    int32_t xmm0_145
                                    
                                    if (not(xmm0_143 f< xmm1_74))
                                        xmm0_145 = _mm_cvtepi32_ps(zx.o(ecx_5))
                                    
                                    if (xmm0_143 f< xmm1_74 || xmm0_145 f< var_10_4)
                                        float xmm0_147 = _mm_cvtepi32_ps(zx.o(ecx_5 + 1))
                                        
                                        if (xmm1_74 < xmm0_147 || not(var_10_4 >= xmm0_147))
                                            float xmm6_10 = var_10_4 - float.s(ecx_5)
                                            float var_10_5 = xmm6_10
                                            xmm6_1 = var_c
                                            *(esi + (ecx_5 << 2)) = (1f
                                                - (xmm1_74 - float.s(ecx_5) + xmm6_10) * 0.5f)
                                                * (xmm7_29 - var_14_3) f* i[4] f+
                                                *(esi + (ecx_5 << 2))
                                    else
                                        *(esi + (ecx_5 << 2)) =
                                            (xmm7_29 - var_14_3) f* i[4] f+ *(esi + (ecx_5 << 2))
                            
                            xmm5_14 - xmm4_20
                            float xmm1_82 = xmm3_22
                            float xmm7_40 = xmm4_20
                            float var_28_7 = xmm1_82
                            arg1:1.b = (xmm5_14 == xmm4_20 ? 1 : 0) << 6
                                | (is_unordered.d(xmm5_14, xmm4_20) ? 1 : 0) << 2
                                | (xmm5_14 < xmm4_20 ? 1 : 0)
                            bool p_18 = unimplemented  {test ah, 0x44}
                            
                            if (p_18 && not(xmm5_14 f> i[6]))
                                float xmm0_154 = i[5]
                                
                                if (not(xmm0_154 > xmm4_20))
                                    if (not(xmm0_154 <= xmm5_14))
                                        float xmm1_85 = (xmm0_154 - xmm5_14) * (xmm3_22 - xmm2_29)
                                        float xmm0_158 = xmm4_20 - xmm5_14
                                        xmm5_14 = i[5]
                                        xmm2_29 = xmm2_29 + xmm1_85 / xmm0_158
                                        xmm1_82 = xmm3_22
                                    
                                    float xmm0_159 = i[6]
                                    
                                    if (not(xmm4_20 <= xmm0_159))
                                        xmm7_40 = i[6]
                                        xmm1_82 = (xmm0_159 - xmm4_20) * (xmm3_22 - xmm2_29)
                                            / (xmm4_20 - xmm5_14) + xmm3_22
                                    
                                    int32_t xmm0_165 = _mm_cvtepi32_ps(zx.o(ecx_5))
                                    int32_t xmm0_167
                                    
                                    if (not(xmm0_165 f< xmm2_29))
                                        xmm0_167 = _mm_cvtepi32_ps(zx.o(ecx_5))
                                    
                                    if (xmm0_165 f< xmm2_29 || xmm0_167 f< xmm1_82)
                                        int32_t xmm0_169 = _mm_cvtepi32_ps(zx.o(ecx_5 + 1))
                                        
                                        if (xmm2_29 f< xmm0_169 || not(xmm1_82 f>= xmm0_169))
                                            *(esi + (ecx_5 << 2)) = (1f - (xmm2_29 - float.s(ecx_5)
                                                + xmm1_82 - float.s(ecx_5)) * 0.5f)
                                                * (xmm7_40 - xmm5_14) f* i[4] f+
                                                *(esi + (ecx_5 << 2))
                                    else
                                        *(esi + (ecx_5 << 2)) =
                                            (xmm7_40 - xmm5_14) f* i[4] f+ *(esi + (ecx_5 << 2))
                            
                            xmm5_15 = xmm6_1
                            xmm4_20 - xmm6_1
                            xmm2_36 = arg5
                            arg1:1.b = (xmm4_20 == xmm6_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm4_20, xmm6_1) ? 1 : 0) << 2
                                | (xmm4_20 < xmm6_1 ? 1 : 0)
                            bool p_20 = unimplemented  {test ah, 0x44}
                            
                            if (p_20)
                                float xmm1_92 = i[6]
                                
                                if (not(xmm4_20 > xmm1_92))
                                    float xmm7_46 = i[5]
                                    
                                    if (not(xmm7_46 > xmm6_1))
                                        if (not(xmm7_46 <= xmm4_20))
                                            float xmm1_95 = (xmm7_46 - xmm4_20) * (arg5 - xmm3_22)
                                            float xmm0_178 = xmm6_1 - xmm4_20
                                            xmm4_20 = xmm7_46
                                            xmm3_22 = xmm3_22 + xmm1_95 / xmm0_178
                                        
                                        if (not(xmm6_1 <= xmm1_92))
                                            xmm5_15 = xmm1_92
                                            xmm2_36 = (arg5 - xmm3_22) * (xmm1_92 - xmm6_1)
                                                / (xmm6_1 - xmm4_20) + arg5
                                        
                                        if (_mm_cvtepi32_ps(zx.o(ecx_5)) f< xmm3_22)
                                            goto label_6d5819
                                        
                                        if (_mm_cvtepi32_ps(zx.o(ecx_5)) f< xmm2_36)
                                            goto label_6d5819
                                        
                                        *(esi + (ecx_5 << 2)) =
                                            (xmm5_15 - xmm4_20) f* i[4] f+ *(esi + (ecx_5 << 2))
                        else if (not(xmm3_22 <= var_8_1) && not(arg5 <= xmm3_22))
                            xmm0 - xmm4_20
                            float xmm1_97 = var_8_1
                            float var_14_4 = xmm0
                            float xmm5_21 = xmm3_22
                            float xmm2_42 = xmm4_20
                            arg1:1.b = (xmm0 == xmm4_20 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0, xmm4_20) ? 1 : 0) << 2
                                | (xmm0 < xmm4_20 ? 1 : 0)
                            bool p_22 = unimplemented  {test ah, 0x44}
                            
                            if (p_22 && not(xmm0 f> i[6]))
                                float xmm7_47 = i[5]
                                
                                if (not(xmm7_47 > xmm4_20))
                                    if (not(xmm7_47 <= xmm0))
                                        var_14_4 = xmm7_47
                                        xmm1_97 = (xmm7_47 - xmm0) * (xmm3_22 - var_8_1)
                                            / (xmm4_20 - arg6) + var_8_1
                                    
                                    float xmm7_48 = i[6]
                                    
                                    if (not(xmm4_20 <= xmm7_48))
                                        xmm2_42 = xmm7_48
                                        xmm5_21 = (xmm3_22 - xmm1_97) * (xmm7_48 - xmm4_20)
                                            / (xmm4_20 - var_14_4) + xmm3_22
                                    
                                    int32_t xmm0_201 = _mm_cvtepi32_ps(zx.o(ecx_5))
                                    int32_t xmm0_203
                                    
                                    if (not(xmm0_201 f< xmm1_97))
                                        xmm0_203 = _mm_cvtepi32_ps(zx.o(ecx_5))
                                    
                                    if (xmm0_201 f< xmm1_97 || xmm0_203 f< xmm5_21)
                                        int32_t xmm0_205 = _mm_cvtepi32_ps(zx.o(ecx_5 + 1))
                                        
                                        if (xmm1_97 f< xmm0_205 || not(xmm5_21 f>= xmm0_205))
                                            *(esi + (ecx_5 << 2)) = (1f - (xmm1_97 - float.s(ecx_5)
                                                + xmm5_21 - float.s(ecx_5)) * 0.5f)
                                                * (xmm2_42 - var_14_4) f* i[4] f+
                                                *(esi + (ecx_5 << 2))
                                    else
                                        *(esi + (ecx_5 << 2)) =
                                            (xmm2_42 - var_14_4) f* i[4] f+ *(esi + (ecx_5 << 2))
                            
                            float xmm0_214 = arg5
                            xmm5_15 = xmm6_1
                            xmm4_20 - xmm6_1
                            xmm2_36 = xmm0_214
                            arg1:1.b = (xmm4_20 == xmm6_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm4_20, xmm6_1) ? 1 : 0) << 2
                                | (xmm4_20 < xmm6_1 ? 1 : 0)
                            bool p_24 = unimplemented  {test ah, 0x44}
                            
                            if (p_24)
                                float xmm1_105 = i[6]
                                
                                if (not(xmm4_20 > xmm1_105))
                                    float xmm7_49 = i[5]
                                    
                                    if (not(xmm7_49 > xmm6_1))
                                        if (not(xmm7_49 <= xmm4_20))
                                            float xmm1_108 =
                                                (xmm7_49 - xmm4_20) * (xmm0_214 - xmm3_22)
                                            float xmm0_213 = xmm6_1 - xmm4_20
                                            xmm4_20 = xmm7_49
                                            xmm0_214 = arg5
                                            xmm3_22 = xmm3_22 + xmm1_108 / xmm0_213
                                        
                                        if (not(xmm6_1 <= xmm1_105))
                                            xmm5_15 = xmm1_105
                                            xmm2_36 = (xmm0_214 - xmm3_22) * (xmm1_105 - xmm6_1)
                                                / (xmm6_1 - xmm4_20) + arg5
                                        
                                        if (_mm_cvtepi32_ps(zx.o(ecx_5)) f< xmm3_22)
                                        label_6d5819:
                                            int32_t xmm0_188 = _mm_cvtepi32_ps(zx.o(ecx_5 + 1))
                                            
                                            if (xmm3_22 f< xmm0_188 || not(xmm2_36 f>= xmm0_188))
                                                *(esi + (ecx_5 << 2)) = (1f - (xmm3_22
                                                    - float.s(ecx_5) + xmm2_36 - float.s(ecx_5))
                                                    * 0.5f) * (xmm5_15 - xmm4_20) f* i[4] f+
                                                    *(esi + (ecx_5 << 2))
                                        else
                                            if (_mm_cvtepi32_ps(zx.o(ecx_5)) f< xmm2_36)
                                                goto label_6d5819
                                            
                                            *(esi + (ecx_5 << 2)) =
                                                (xmm5_15 - xmm4_20) f* i[4] f+ *(esi + (ecx_5 << 2))
                        else if (not(xmm3_22 <= arg5) && not(var_8_1 <= xmm3_22))
                            xmm0 - xmm4_20
                            float xmm1_110 = var_8_1
                            float var_14_5 = xmm0
                            float xmm5_30 = xmm3_22
                            float xmm2_52 = xmm4_20
                            arg1:1.b = (xmm0 == xmm4_20 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0, xmm4_20) ? 1 : 0) << 2
                                | (xmm0 < xmm4_20 ? 1 : 0)
                            bool p_26 = unimplemented  {test ah, 0x44}
                            
                            if (p_26 && not(xmm0 f> i[6]))
                                float xmm7_50 = i[5]
                                
                                if (not(xmm7_50 > xmm4_20))
                                    if (not(xmm7_50 <= xmm0))
                                        var_14_5 = xmm7_50
                                        xmm1_110 = (xmm7_50 - xmm0) * (xmm3_22 - var_8_1)
                                            / (xmm4_20 - arg6) + var_8_1
                                    
                                    float xmm7_51 = i[6]
                                    
                                    if (not(xmm4_20 <= xmm7_51))
                                        xmm2_52 = xmm7_51
                                        xmm5_30 = (xmm3_22 - xmm1_110) * (xmm7_51 - xmm4_20)
                                            / (xmm4_20 - var_14_5) + xmm3_22
                                    
                                    int32_t xmm0_232 = _mm_cvtepi32_ps(zx.o(ecx_5))
                                    int32_t xmm0_234
                                    
                                    if (not(xmm0_232 f< xmm1_110))
                                        xmm0_234 = _mm_cvtepi32_ps(zx.o(ecx_5))
                                    
                                    if (xmm0_232 f< xmm1_110 || xmm0_234 f< xmm5_30)
                                        int32_t xmm0_236 = _mm_cvtepi32_ps(zx.o(ecx_5 + 1))
                                        
                                        if (xmm1_110 f< xmm0_236 || not(xmm5_30 f>= xmm0_236))
                                            *(esi + (ecx_5 << 2)) = (1f - (xmm1_110 - float.s(ecx_5)
                                                + xmm5_30 - float.s(ecx_5)) * 0.5f)
                                                * (xmm2_52 - var_14_5) f* i[4] f+
                                                *(esi + (ecx_5 << 2))
                                    else
                                        *(esi + (ecx_5 << 2)) =
                                            (xmm2_52 - var_14_5) f* i[4] f+ *(esi + (ecx_5 << 2))
                            
                            float xmm0_245 = arg5
                            xmm5_15 = xmm6_1
                            xmm4_20 - xmm6_1
                            xmm2_36 = xmm0_245
                            arg1:1.b = (xmm4_20 == xmm6_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm4_20, xmm6_1) ? 1 : 0) << 2
                                | (xmm4_20 < xmm6_1 ? 1 : 0)
                            bool p_28 = unimplemented  {test ah, 0x44}
                            
                            if (p_28)
                                float xmm1_118 = i[6]
                                
                                if (not(xmm4_20 > xmm1_118))
                                    float xmm7_52 = i[5]
                                    
                                    if (not(xmm7_52 > xmm6_1))
                                        if (not(xmm7_52 <= xmm4_20))
                                            float xmm1_121 =
                                                (xmm7_52 - xmm4_20) * (xmm0_245 - xmm3_22)
                                            float xmm0_244 = xmm6_1 - xmm4_20
                                            xmm4_20 = xmm7_52
                                            xmm0_245 = arg5
                                            xmm3_22 = xmm3_22 + xmm1_121 / xmm0_244
                                        
                                        if (not(xmm6_1 <= xmm1_118))
                                            xmm5_15 = xmm1_118
                                            xmm2_36 = (xmm0_245 - xmm3_22) * (xmm1_118 - xmm6_1)
                                                / (xmm6_1 - xmm4_20) + arg5
                                        
                                        if (_mm_cvtepi32_ps(zx.o(ecx_5)) f< xmm3_22)
                                            goto label_6d5819
                                        
                                        if (_mm_cvtepi32_ps(zx.o(ecx_5)) f< xmm2_36)
                                            goto label_6d5819
                                        
                                        *(esi + (ecx_5 << 2)) =
                                            (xmm5_15 - xmm4_20) f* i[4] f+ *(esi + (ecx_5 << 2))
                        else if (not(xmm2_29 <= var_8_1) && not(arg5 <= xmm2_29))
                            xmm0 - xmm5_14
                            float xmm1_123 = var_8_1
                            float var_14_6 = xmm0
                            float xmm4_27 = xmm2_29
                            float xmm3_35 = xmm5_14
                            arg1:1.b = (xmm0 == xmm5_14 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0, xmm5_14) ? 1 : 0) << 2
                                | (xmm0 < xmm5_14 ? 1 : 0)
                            bool p_30 = unimplemented  {test ah, 0x44}
                            
                            if (p_30 && not(xmm0 f> i[6]))
                                float xmm7_53 = i[5]
                                
                                if (not(xmm7_53 > xmm5_14))
                                    if (not(xmm7_53 <= xmm0))
                                        var_14_6 = xmm7_53
                                        xmm1_123 = (xmm7_53 - xmm0) * (xmm2_29 - var_8_1)
                                            / (xmm5_14 - arg6) + var_8_1
                                    
                                    float xmm7_54 = i[6]
                                    
                                    if (not(xmm5_14 <= xmm7_54))
                                        xmm3_35 = xmm7_54
                                        xmm4_27 = (xmm2_29 - xmm1_123) * (xmm7_54 - xmm5_14)
                                            / (xmm5_14 - var_14_6) + xmm2_29
                                    
                                    int32_t xmm0_263 = _mm_cvtepi32_ps(zx.o(ecx_5))
                                    int32_t xmm0_265
                                    
                                    if (not(xmm0_263 f< xmm1_123))
                                        xmm0_265 = _mm_cvtepi32_ps(zx.o(ecx_5))
                                    
                                    if (xmm0_263 f< xmm1_123 || xmm0_265 f< xmm4_27)
                                        int32_t xmm0_267 = _mm_cvtepi32_ps(zx.o(ecx_5 + 1))
                                        
                                        if (xmm1_123 f< xmm0_267 || not(xmm4_27 f>= xmm0_267))
                                            *(esi + (ecx_5 << 2)) = (1f - (xmm1_123 - float.s(ecx_5)
                                                + xmm4_27 - float.s(ecx_5)) * 0.5f)
                                                * (xmm3_35 - var_14_6) f* i[4] f+
                                                *(esi + (ecx_5 << 2))
                                    else
                                        *(esi + (ecx_5 << 2)) =
                                            (xmm3_35 - var_14_6) f* i[4] f+ *(esi + (ecx_5 << 2))
                            
                            float xmm0_276 = arg5
                            xmm4_21 = xmm6_1
                            xmm5_14 - xmm6_1
                            xmm3_26 = xmm0_276
                            arg1:1.b = (xmm5_14 == xmm6_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm5_14, xmm6_1) ? 1 : 0) << 2
                                | (xmm5_14 < xmm6_1 ? 1 : 0)
                            bool p_32 = unimplemented  {test ah, 0x44}
                            
                            if (p_32)
                                float xmm1_131 = i[6]
                                
                                if (not(xmm5_14 > xmm1_131))
                                    float xmm7_55 = i[5]
                                    
                                    if (not(xmm7_55 > xmm6_1))
                                        if (not(xmm7_55 <= xmm5_14))
                                            float xmm1_134 =
                                                (xmm7_55 - xmm5_14) * (xmm0_276 - xmm2_29)
                                            float xmm0_275 = xmm6_1 - xmm5_14
                                            xmm5_14 = xmm7_55
                                            xmm0_276 = arg5
                                            xmm2_29 = xmm2_29 + xmm1_134 / xmm0_275
                                        
                                        if (not(xmm6_1 <= xmm1_131))
                                            xmm4_21 = xmm1_131
                                            xmm3_26 = (xmm0_276 - xmm2_29) * (xmm1_131 - xmm6_1)
                                                / (xmm6_1 - xmm5_14) + arg5
                                        
                                        if (_mm_cvtepi32_ps(zx.o(ecx_5)) f< xmm2_29)
                                            goto label_6d5490
                                        
                                        if (_mm_cvtepi32_ps(zx.o(ecx_5)) f< xmm3_26)
                                            goto label_6d5490
                                        
                                        *(esi + (ecx_5 << 2)) =
                                            (xmm4_21 - xmm5_14) f* i[4] f+ *(esi + (ecx_5 << 2))
                        else if (xmm2_29 <= arg5 || var_8_1 <= xmm2_29)
                            float xmm2_62 = arg5
                            float xmm1_149 = var_8_1
                            xmm0 - xmm6_1
                            float xmm7_59 = xmm0
                            float xmm3_55 = xmm6_1
                            arg1:1.b = (xmm0 == xmm6_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0, xmm6_1) ? 1 : 0) << 2
                                | (xmm0 < xmm6_1 ? 1 : 0)
                            bool p_38 = unimplemented  {test ah, 0x44}
                            
                            if (p_38)
                                float xmm5_39 = i[6]
                                
                                if (not(xmm0 > xmm5_39))
                                    float xmm4_45 = i[5]
                                    
                                    if (not(xmm4_45 > xmm6_1))
                                        if (not(xmm4_45 <= xmm0))
                                            xmm7_59 = xmm4_45
                                            xmm1_149 = (xmm4_45 - xmm0) * (xmm2_62 - var_8_1)
                                                / (xmm6_1 - arg6) + var_8_1
                                        
                                        if (not(xmm6_1 <= xmm5_39))
                                            xmm3_55 = xmm5_39
                                            xmm2_62 = (arg5 - xmm1_149) * (xmm5_39 - xmm6_1)
                                                / (xmm6_1 - xmm7_59) + arg5
                                        
                                        int32_t xmm0_325 = _mm_cvtepi32_ps(zx.o(ecx_5))
                                        int32_t xmm0_327
                                        
                                        if (not(xmm0_325 f< xmm1_149))
                                            xmm0_327 = _mm_cvtepi32_ps(zx.o(ecx_5))
                                        
                                        if (xmm0_325 f< xmm1_149 || xmm0_327 f< xmm2_62)
                                            int32_t xmm0_329 = _mm_cvtepi32_ps(zx.o(ecx_5 + 1))
                                            
                                            if (xmm1_149 f< xmm0_329 || not(xmm2_62 f>= xmm0_329))
                                                *(esi + (ecx_5 << 2)) = (1f - (xmm1_149
                                                    - float.s(ecx_5) + xmm2_62 - float.s(ecx_5))
                                                    * 0.5f) * (xmm3_55 - xmm7_59) f* i[4] f+
                                                    *(esi + (ecx_5 << 2))
                                        else
                                            *(esi + (ecx_5 << 2)) =
                                                (xmm3_55 - xmm7_59) f* i[4] f+ *(esi + (ecx_5 << 2))
                        else
                            xmm0 - xmm5_14
                            float xmm1_136 = var_8_1
                            float var_14_7 = xmm0
                            float xmm4_36 = xmm2_29
                            float xmm3_45 = xmm5_14
                            arg1:1.b = (xmm0 == xmm5_14 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0, xmm5_14) ? 1 : 0) << 2
                                | (xmm0 < xmm5_14 ? 1 : 0)
                            bool p_34 = unimplemented  {test ah, 0x44}
                            
                            if (p_34 && not(xmm0 f> i[6]))
                                float xmm7_56 = i[5]
                                
                                if (not(xmm7_56 > xmm5_14))
                                    if (not(xmm7_56 <= xmm0))
                                        var_14_7 = xmm7_56
                                        xmm1_136 = (xmm7_56 - xmm0) * (xmm2_29 - var_8_1)
                                            / (xmm5_14 - arg6) + var_8_1
                                    
                                    float xmm7_57 = i[6]
                                    
                                    if (not(xmm5_14 <= xmm7_57))
                                        xmm3_45 = xmm7_57
                                        xmm4_36 = (xmm2_29 - xmm1_136) * (xmm7_57 - xmm5_14)
                                            / (xmm5_14 - var_14_7) + xmm2_29
                                    
                                    int32_t xmm0_294 = _mm_cvtepi32_ps(zx.o(ecx_5))
                                    int32_t xmm0_296
                                    
                                    if (not(xmm0_294 f< xmm1_136))
                                        xmm0_296 = _mm_cvtepi32_ps(zx.o(ecx_5))
                                    
                                    if (xmm0_294 f< xmm1_136 || xmm0_296 f< xmm4_36)
                                        int32_t xmm0_298 = _mm_cvtepi32_ps(zx.o(ecx_5 + 1))
                                        
                                        if (xmm1_136 f< xmm0_298 || not(xmm4_36 f>= xmm0_298))
                                            *(esi + (ecx_5 << 2)) = (1f - (xmm1_136 - float.s(ecx_5)
                                                + xmm4_36 - float.s(ecx_5)) * 0.5f)
                                                * (xmm3_45 - var_14_7) f* i[4] f+
                                                *(esi + (ecx_5 << 2))
                                    else
                                        *(esi + (ecx_5 << 2)) =
                                            (xmm3_45 - var_14_7) f* i[4] f+ *(esi + (ecx_5 << 2))
                            
                            float xmm0_307 = arg5
                            xmm4_21 = xmm6_1
                            xmm5_14 - xmm6_1
                            xmm3_26 = xmm0_307
                            arg1:1.b = (xmm5_14 == xmm6_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm5_14, xmm6_1) ? 1 : 0) << 2
                                | (xmm5_14 < xmm6_1 ? 1 : 0)
                            bool p_36 = unimplemented  {test ah, 0x44}
                            
                            if (p_36)
                                float xmm1_144 = i[6]
                                
                                if (not(xmm5_14 > xmm1_144))
                                    float xmm7_58 = i[5]
                                    
                                    if (not(xmm7_58 > xmm6_1))
                                        if (not(xmm7_58 <= xmm5_14))
                                            float xmm1_147 =
                                                (xmm7_58 - xmm5_14) * (xmm0_307 - xmm2_29)
                                            float xmm0_306 = xmm6_1 - xmm5_14
                                            xmm5_14 = xmm7_58
                                            xmm0_307 = arg5
                                            xmm2_29 = xmm2_29 + xmm1_147 / xmm0_306
                                        
                                        if (not(xmm6_1 <= xmm1_144))
                                            xmm4_21 = xmm1_144
                                            xmm3_26 = (xmm0_307 - xmm2_29) * (xmm1_144 - xmm6_1)
                                                / (xmm6_1 - xmm5_14) + arg5
                                        
                                        if (_mm_cvtepi32_ps(zx.o(ecx_5)) f< xmm2_29)
                                            goto label_6d5490
                                        
                                        if (_mm_cvtepi32_ps(zx.o(ecx_5)) f< xmm3_26)
                                            goto label_6d5490
                                        
                                        *(esi + (ecx_5 << 2)) =
                                            (xmm4_21 - xmm5_14) f* i[4] f+ *(esi + (ecx_5 << 2))
                    xmm0 = arg6
                    ecx_5 += 1
                    edi_2 += 1
                while (ecx_5 s< arg4)
                
                edi = var_1c
                xmm0 = arg6
                ecx = arg4
        else
            int32_t ecx_3 = int.d(xmm1_32)
            
            if (ecx_3 != int.d(xmm3_12))
                if (not(xmm1_32 f<= xmm3_12))
                    xmm7_7 ^= data_8937c0.o
                    var_10_1 = xmm7_7
                    var_8_1 = arg5
                    float xmm0_46 = xmm6_1 - (xmm2_22 - xmm0)
                    xmm2_22 = xmm6_1 - (xmm5_4 - arg6)
                    xmm5_4 = xmm0_46
                    int128_t xmm0_47 = xmm3_12
                    xmm3_12 = xmm1_32
                    var_14_1 = xmm2_22
                    xmm1_32 = xmm0_47
                    xmm0 = arg6
                
                int32_t eax = int.d(xmm1_32)
                int32_t edi_1 = int.d(xmm3_12)
                int32_t ecx_4 = eax + 1
                float xmm4_14 = (float.s(ecx_4) - var_8_1) f* xmm7_7 + xmm0
                float xmm0_48 = i[4]
                float xmm4_16 = (xmm4_14 - xmm2_22) * xmm0_48
                float xmm1_38 = xmm0_48 f* xmm7_7
                *(esi + (eax << 2)) =
                    (1f - (xmm1_32 f- float.s(eax) + 1f) * 0.5f) * xmm4_16 f+ *(esi + (eax << 2))
                
                if (ecx_4 s< edi_1)
                    float xmm7_9 = xmm1_38 * 0.5f
                    
                    if (edi_1 - ecx_4 s>= 4)
                        float* esi_1 = esi + 8 + (ecx_4 << 2)
                        int32_t j_1 = ((edi_1 - ecx_4 - 4) u>> 2) + 1
                        ecx_4 += j_1 << 2
                        int32_t j
                        
                        do
                            float xmm2_26 = xmm1_38 + xmm4_16
                            float xmm1_40 = xmm1_38 + xmm2_26
                            esi_1[-2] = xmm7_9 + xmm4_16 + esi_1[-2]
                            float xmm2_28 = xmm1_38 + xmm1_40
                            xmm4_16 = xmm1_38 + xmm2_28
                            esi_1[-1] = xmm7_9 + xmm2_26 + esi_1[-1]
                            *esi_1 = xmm7_9 + xmm1_40 + *esi_1
                            esi_1[1] = xmm7_9 + xmm2_28 + esi_1[1]
                            esi_1 = &esi_1[4]
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        xmm6_1 = var_c
                        xmm2_22 = var_14_1
                        esi = var_20
                    
                    while (ecx_4 s< edi_1)
                        *(esi + (ecx_4 << 2)) = xmm7_9 + xmm4_16 f+ *(esi + (ecx_4 << 2))
                        ecx_4 += 1
                        xmm4_16 = xmm4_16 + xmm1_38
                    
                    xmm7_7 = var_10_1
                
                float xmm1_45 = (xmm5_4 - (float.s(edi_1 - eax - 1) f* xmm7_7 + xmm4_14))
                    * (1f - (xmm3_12 f- float.s(edi_1) + 0f) * 0.5f) * xmm0_48
                    + xmm4_16 f+ *(esi + (edi_1 << 2))
                *(esi + (edi_1 << 2)) = xmm1_45
                *(var_1c + (edi_1 << 2)) = (xmm5_4 - xmm2_22) * xmm0_48 f+ *(var_1c + (edi_1 << 2))
                edi = var_1c
            else
                float xmm5_5 = xmm5_4 - xmm2_22
                float xmm0_40 = float.s(ecx_3)
                *(esi + (ecx_3 << 2)) =
                    (1f - (xmm3_12 f- xmm0_40 + xmm1_32 f- xmm0_40) * 0.5f) f* i[4] * xmm5_5 f+
                    *(esi + (ecx_3 << 2))
                *(edi + (ecx_3 << 2)) = xmm5_5 f* i[4] f+ *(edi + (ecx_3 << 2))
            
            xmm0 = arg6
            ecx = arg4
    else
        xmm0 = arg6
        
        if (not(_mm_cvtepi32_ps(zx.o(ecx)) <= xmm7_1))
            float xmm2_1 = xmm7_1
            
            if (xmm7_1 < 0f)
                xmm0 - xmm6_1
                float xmm5_3 = xmm0
                float xmm1_19 = xmm6_1
                arg1:1.b = (xmm0 == xmm6_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0, xmm6_1) ? 1 : 0) << 2 | (xmm0 < xmm6_1 ? 1 : 0)
                bool p_8 = unimplemented  {test ah, 0x44}
                
                if (p_8)
                    float xmm4_6 = i[6]
                    
                    if (not(xmm0 > xmm4_6))
                        float xmm3_10 = i[5]
                        
                        if (not(xmm3_10 > xmm6_1))
                            if (not(xmm3_10 <= xmm0))
                                xmm5_3 = xmm3_10
                                xmm2_1 =
                                    (xmm3_10 - xmm0) * (xmm7_1 - xmm7_1) / (xmm6_1 - arg6) + xmm7_1
                            
                            if (not(xmm6_1 <= xmm4_6))
                                xmm7_1 = xmm7_1
                                    + (xmm7_1 - xmm2_1) * (xmm4_6 - xmm6_1) / (xmm6_1 - xmm5_3)
                                xmm1_19 = xmm4_6
                            
                            if (not(0 f< xmm2_1) && not(0 f< xmm7_1))
                                *(edi - 4) = (xmm1_19 - xmm5_3) f* i[4] f+ *(edi - 4)
                                xmm0 = arg6
                            else if (xmm2_1 < 1f || not(xmm7_1 >= 1f))
                                *(edi - 4) = (1f - (xmm2_1 - 0f + xmm7_1 - 0f) * 0.5f)
                                    * (xmm1_19 - xmm5_3) f* i[4] f+ *(edi - 4)
                                xmm0 = arg6
                            else
                                xmm0 = arg6
            else
                xmm0 - xmm6_1
                int32_t ecx_1 = int.d(xmm7_1)
                float xmm7_2 = xmm0
                float xmm1_1 = xmm2_1
                arg1:1.b = (xmm0 == xmm6_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0, xmm6_1) ? 1 : 0) << 2 | (xmm0 < xmm6_1 ? 1 : 0)
                float xmm3_1 = xmm6_1
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    float xmm5_1 = i[6]
                    
                    if (not(xmm0 > xmm5_1))
                        float xmm4_2 = i[5]
                        
                        if (not(xmm4_2 > xmm6_1))
                            if (not(xmm4_2 <= xmm0))
                                xmm2_1 =
                                    (xmm4_2 - xmm0) * (xmm1_1 - xmm1_1) / (xmm6_1 - arg6) + xmm1_1
                                xmm7_2 = xmm4_2
                            
                            if (not(xmm6_1 <= xmm5_1))
                                xmm3_1 = xmm5_1
                                xmm1_1 = (var_8_1 - xmm2_1) * (xmm5_1 - xmm6_1) / (xmm6_1 - xmm7_2)
                                    + var_8_1
                            
                            float xmm0_12 = _mm_cvtepi32_ps(zx.o(ecx_1))
                            
                            if (xmm0_12 < xmm2_1 || xmm0_12 < xmm1_1)
                                int32_t xmm4_4 = _mm_cvtepi32_ps(zx.o(ecx_1 + 1))
                                
                                if (xmm2_1 f< xmm4_4 || not(xmm1_1 f>= xmm4_4))
                                    *(esi + (ecx_1 << 2)) = (1f
                                        - (xmm1_1 - xmm0_12 + xmm2_1 - xmm0_12) * 0.5f)
                                        * (xmm3_1 - xmm7_2) f* i[4] f+ *(esi + (ecx_1 << 2))
                            else
                                *(esi + (ecx_1 << 2)) =
                                    (xmm3_1 - xmm7_2) f* i[4] f+ *(esi + (ecx_1 << 2))
                            
                            xmm0 = arg6
                
                float xmm7_4 = var_8_1
                xmm0 - xmm6_1
                float xmm2_7 = xmm7_4
                float xmm5_2 = xmm0
                float xmm1_9 = xmm6_1
                arg1:1.b = (xmm0 == xmm6_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0, xmm6_1) ? 1 : 0) << 2 | (xmm0 < xmm6_1 ? 1 : 0)
                bool p_6 = unimplemented  {test ah, 0x44}
                
                if (not(p_6))
                    ecx = arg4
                else
                    float xmm4_5 = i[6]
                    
                    if (xmm0 > xmm4_5)
                        ecx = arg4
                    else
                        float xmm3_7 = i[5]
                        
                        if (xmm3_7 > xmm6_1)
                            ecx = arg4
                        else
                            if (not(xmm3_7 <= xmm0))
                                xmm5_2 = xmm3_7
                                xmm2_7 =
                                    (xmm3_7 - xmm0) * (xmm7_4 - xmm7_4) / (xmm6_1 - arg6) + xmm7_4
                            
                            if (not(xmm6_1 <= xmm4_5))
                                xmm7_4 = xmm7_4
                                    + (xmm7_4 - xmm2_7) * (xmm4_5 - xmm6_1) / (xmm6_1 - xmm5_2)
                                xmm1_9 = xmm4_5
                            
                            float xmm0_25 = _mm_cvtepi32_ps(zx.o(ecx_1 + 1))
                            
                            if (xmm0_25 < xmm2_7 || xmm0_25 < xmm7_4)
                                int32_t xmm3_9 = _mm_cvtepi32_ps(zx.o(ecx_1 + 2))
                                
                                if (xmm2_7 f< xmm3_9 || not(xmm7_4 f>= xmm3_9))
                                    *(edi + ((ecx_1 + 1) << 2) - 4) = (1f
                                        - (xmm2_7 - xmm0_25 + xmm7_4 - xmm0_25) * 0.5f)
                                        * (xmm1_9 - xmm5_2) f* i[4] f+
                                        *(edi + ((ecx_1 + 1) << 2) - 4)
                            else
                                *(edi + ((ecx_1 + 1) << 2) - 4) =
                                    (xmm1_9 - xmm5_2) f* i[4] f+ *(edi + ((ecx_1 + 1) << 2) - 4)
                            
                            xmm0 = arg6
                            ecx = arg4
    
    i = *i
while (i != 0)
