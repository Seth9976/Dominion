// 函数: sub_672340
// 地址: 0x672340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_1c8
struct _EXCEPTION_REGISTRATION_RECORD** eax_1 = __security_cookie ^ &var_1c8
struct _EXCEPTION_REGISTRATION_RECORD** var_14 = eax_1
char const* const var_1dc
int32_t var_1d8
char const* const var_1d4
char* ecx_36

if (data_147aba1 != 0)
    int32_t ecx_1 = data_cadde4
    data_cf6a6c = 1
    int128_t var_40
    int32_t* eax_3
    int32_t edx
    int32_t edx_1
    eax_3, edx_1 = sub_666a40(&var_40, edx, ecx_1, &var_40)
    void* var_1c0 = 0x7fffffff
    int128_t var_80 = *eax_3
    float var_60
    var_40 = *sub_668650(&var_60, edx_1, &var_80, &var_60)
    float xmm0_3[0x4] = *sub_668650(&var_40, sub_682f00(&var_40, &var_1c0), &var_80, &var_40)
    float var_70 = xmm0_3
    float xmm2_2 = _mm_shuffle_ps(xmm0_3, xmm0_3, 0x55)
    float xmm3_2 = _mm_shuffle_ps(xmm0_3, xmm0_3, 0xff)
    float xmm4_1 = xmm0_3[0]
    float xmm0_4 = _mm_shuffle_ps(xmm0_3, xmm0_3, 0xaa)
    float xmm4_2 = xmm4_1 + 1f
    float var_48_1 = xmm0_4
    float xmm1_2 = xmm0_4 - 1f
    float var_6c_1 = xmm2_2
    float var_4c_1 = xmm2_2
    float var_15c_1 = xmm2_2
    float var_68_1 = xmm4_2
    float var_64_1 = xmm3_2
    float var_50 = xmm1_2
    float var_44_1 = xmm3_2
    float var_160 = xmm4_2
    float var_158_1 = xmm1_2
    float var_154_1 = xmm2_2 + 1f
    float var_24 = xmm4_2
    sub_682f00(&var_70, &data_7e43e4)
    sub_682f00(&var_50, &data_7e43e4)
    sub_682f00(&var_160, &data_7e43e4)
    eax_1 = sub_682f00(&var_24, &data_7e43e4)
    int32_t ecx_9 = data_c27c24
    
    if (ecx_9 != 0)
        eax_1 = sub_664d00(sub_64e7a0(ecx_9))
    
    if (data_147aba1 == 0)
    label_6737d1:
        var_1d4 = "Draw3DLayer"
        var_1d8 = 0x32c
        var_1dc = "C:\x\ax2017\Engine\Draw3d.cpp"
        ecx_36 = "gDraw3DData.submittingRenderItems"
    else
        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = data_cf6b14
        eax_1 = data_c28c58
        data_cf6b14 = 0x75300000
        float var_1b0
        float var_1a0
        int128_t var_190
        int128_t var_180
        int128_t var_170
        float var_150
        float var_140
        float var_130
        float var_120[0x4]
        float var_100[0x4]
        float var_5c
        float var_58
        float var_54
        bool cond:1_1
        
        if (eax_1 s<= 0)
            cond:1_1 = data_c27c18 == 0
        else
            int32_t temp0_1 = data_c27c18
            cond:1_1 = temp0_1 == 0
            
            if (temp0_1 s> 0)
                int32_t i = 0
                
                if (eax_1 s> 0)
                    do
                        void* eax_9
                        int32_t edx_4
                        eax_9, edx_4 = sub_665600((&data_c27c58)[i])
                        var_1c0 = eax_9 + 0x1620
                        void* eax_10
                        
                        if (i == 0)
                            var_1c0 = eax_9 + 0x1620
                        else
                            sub_67d460(eax_9 + 0x554, *(data_147abe8 + 0x2c), &var_24)
                            int32_t* ecx_13 = var_1c0
                            float xmm1_4 = *(eax_9 + 0x16cc) - 0f
                            float xmm2_6 = *(eax_9 + 0x16d0) - 0f
                            var_48_1 = xmm1_4 * xmm1_2 + 0f
                            var_50 = xmm1_4 * var_24 + 0f
                            var_4c_1 = xmm2_6 * (xmm3_2 - 1f) + 0f
                            var_44_1 = xmm2_6 * xmm3_2 + 0f
                            float var_b0[0x4]
                            float* eax_13 = sub_655430(&var_b0, &var_50, ecx_13, &var_b0)
                            var_50.o = *eax_13
                            float xmm0_14[0x4] = *eax_13
                            var_160 = xmm0_14
                            float xmm2_10 = _mm_shuffle_ps(xmm0_14, xmm0_14, 0x55)
                            float xmm3_4 = _mm_shuffle_ps(xmm0_14, xmm0_14, 0xff)
                            float xmm4_3 = xmm0_14[0]
                            float xmm0_15 = _mm_shuffle_ps(xmm0_14, xmm0_14, 0xaa)
                            float xmm4_4 = xmm4_3 + 1f
                            float var_148_1 = xmm0_15
                            float xmm1_8 = xmm0_15 - 1f
                            float var_15c_2 = xmm2_10
                            float var_14c_1 = xmm2_10
                            float var_13c_1 = xmm2_10
                            float var_158_2 = xmm4_4
                            float var_154_2 = xmm3_4
                            var_150 = xmm1_8
                            float var_144_1 = xmm3_4
                            var_140 = xmm4_4
                            float var_138_1 = xmm1_8
                            float var_134_1 = xmm2_10 + 1f
                            var_130 = xmm4_4
                            float var_12c_1 = xmm3_4 - 1f
                            float var_128_1 = xmm1_8
                            float var_124_1 = xmm3_4
                            sub_682f00(&var_160, &data_7dc5cc)
                            sub_682f00(&var_150, &data_7dc5cc)
                            sub_682f00(&var_140, &data_7dc5cc)
                            eax_10, edx_4 = sub_682f00(&var_130, &data_7dc5cc)
                        
                        float xmm0_18 = *(eax_9 + 0x1554)
                        xmm0_18 f- 0
                        eax_10:1.b = (xmm0_18 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_18, 0f) ? 1 : 0) << 2 | (xmm0_18 < 0f ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (p_2)
                        label_672782:
                            void var_a0
                            int128_t* eax_15 = sub_655650(&var_a0, edx_4, eax_9, &var_a0)
                            void* ecx_19 = var_1c0
                            var_40 = *eax_15
                            float var_90[0x4]
                            float* eax_17 = sub_655430(&var_90, &var_40, ecx_19, &var_90)
                            var_40 = *eax_17
                            float xmm0_24[0x4] = *eax_17
                            var_120[0] = xmm0_24
                            float xmm2_13 = _mm_shuffle_ps(xmm0_24, xmm0_24, 0x55)
                            float xmm3_6 = _mm_shuffle_ps(xmm0_24, xmm0_24, 0xff)
                            float xmm4_5 = xmm0_24[0]
                            float xmm0_25 = _mm_shuffle_ps(xmm0_24, xmm0_24, 0xaa)
                            float xmm4_6 = xmm4_5 + 1f
                            var_190:8.d = xmm0_25
                            float xmm1_10 = xmm0_25 - 1f
                            var_120[1] = xmm2_13
                            var_190:4.d = xmm2_13
                            var_180:4.d = xmm2_13
                            var_120[2] = xmm4_6
                            var_120[3] = xmm3_6
                            var_190.d = xmm1_10
                            var_190:0xc.d = xmm3_6
                            var_180.d = xmm4_6
                            var_180:8.d = xmm1_10
                            var_180:0xc.d = xmm2_13 + 1f
                            var_170.d = xmm4_6
                            var_170:4.d = xmm3_6 - 1f
                            var_170:8.d = xmm1_10
                            var_170:0xc.d = xmm3_6
                            sub_682f00(&var_120, &data_7dac94)
                            sub_682f00(&var_190, &data_7dac94)
                            sub_682f00(&var_180, &data_7dac94)
                            sub_682f00(&var_170, &data_7dac94)
                        else
                            float xmm0_19 = *(eax_9 + 0x1558)
                            xmm0_19 f- 0
                            eax_10:1.b = (xmm0_19 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_19, 0f) ? 1 : 0) << 2
                                | (xmm0_19 < 0f ? 1 : 0)
                            bool p_4 = unimplemented  {test ah, 0x44}
                            
                            if (p_4)
                                goto label_672782
                            
                            float xmm0_20 = *(eax_9 + 0x155c)
                            xmm0_20 f- 0
                            eax_10:1.b = (xmm0_20 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_20, 0f) ? 1 : 0) << 2
                                | (xmm0_20 < 0f ? 1 : 0)
                            bool p_6 = unimplemented  {test ah, 0x44}
                            
                            if (p_6)
                                goto label_672782
                            
                            float xmm0_21 = *(eax_9 + 0x1560)
                            xmm0_21 f- 0
                            eax_10:1.b = (xmm0_21 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_21, 0f) ? 1 : 0) << 2
                                | (xmm0_21 < 0f ? 1 : 0)
                            bool p_8 = unimplemented  {test ah, 0x44}
                            
                            if (p_8)
                                goto label_672782
                        
                        float xmm0_28 = *(eax_9 + 0x157c)
                        xmm0_28 f- 0
                        eax_10:1.b = (xmm0_28 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_28, 0f) ? 1 : 0) << 2 | (xmm0_28 < 0f ? 1 : 0)
                        bool p_10 = unimplemented  {test ah, 0x44}
                        
                        if (p_10)
                        label_6728e3:
                            float xmm2_15[0x4] = *(eax_9 + 0x157c)
                            float xmm0_32 = *(eax_9 + 0x1428)
                            float xmm7_1 = *(eax_9 + 0x16cc)
                            float xmm6_1 = *(eax_9 + 0x16d0)
                            float xmm5_3 = xmm2_15[0] * xmm0_32 + 0f
                            float xmm4_10 =
                                _mm_shuffle_ps(xmm2_15, xmm2_15, 0xaa) * xmm0_32 + xmm7_1
                            float xmm3_10 = _mm_shuffle_ps(xmm2_15, xmm2_15, 0x55) * xmm0_32 + 0f
                            float xmm2_18 =
                                _mm_shuffle_ps(xmm2_15, xmm2_15, 0xff) * xmm0_32 + xmm6_1
                            
                            if (xmm5_3 >= xmm4_10 || not(xmm3_10 < xmm2_18))
                                xmm2_18 = xmm6_1
                                xmm4_10 = xmm7_1
                                xmm3_10 = (zx.o(0)).d
                                xmm5_3 = (zx.o(0)).d
                            
                            var_70 = xmm5_3
                            float var_6c_2 = xmm3_10
                            float var_68_2 = xmm4_10
                            float var_64_2 = xmm2_18
                            float* eax_19 = sub_655430(&var_100, &var_70, eax_9 + 0x1620, &var_100)
                            var_70.o = *eax_19
                            float xmm0_34[0x4] = *eax_19
                            var_1b0 = xmm0_34
                            float xmm2_20 = _mm_shuffle_ps(xmm0_34, xmm0_34, 0x55)
                            float xmm3_12 = _mm_shuffle_ps(xmm0_34, xmm0_34, 0xff)
                            float xmm4_11 = xmm0_34[0]
                            float xmm0_35 = _mm_shuffle_ps(xmm0_34, xmm0_34, 0xaa)
                            float xmm4_12 = xmm4_11 + 1f
                            float var_198_1 = xmm0_35
                            float xmm1_12 = xmm0_35 - 1f
                            float var_1ac_1 = xmm2_20
                            float var_19c_1 = xmm2_20
                            float var_5c_1 = xmm2_20
                            float var_1a8_1 = xmm4_12
                            float var_1a4_1 = xmm3_12
                            var_1a0 = xmm1_12
                            float var_194_1 = xmm3_12
                            var_60 = xmm4_12
                            float var_58_1 = xmm1_12
                            float var_54_1 = xmm2_20 + 1f
                            var_80.d = xmm4_12
                            var_80:4.d = xmm3_12 - 1f
                            var_80:8.d = xmm1_12
                            var_80:0xc.d = xmm3_12
                            sub_682f00(&var_1b0, &data_7dc5cc)
                            sub_682f00(&var_1a0, &data_7dc5cc)
                            sub_682f00(&var_60, &data_7dc5cc)
                            sub_682f00(&var_80, &data_7dc5cc)
                        else
                            float xmm0_29 = *(eax_9 + 0x1580)
                            xmm0_29 f- 0
                            eax_10:1.b = (xmm0_29 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_29, 0f) ? 1 : 0) << 2
                                | (xmm0_29 < 0f ? 1 : 0)
                            bool p_12 = unimplemented  {test ah, 0x44}
                            
                            if (p_12)
                                goto label_6728e3
                            
                            float xmm0_30 = *(eax_9 + 0x1584)
                            xmm0_30 f- 0
                            eax_10:1.b = (xmm0_30 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_30, 0f) ? 1 : 0) << 2
                                | (xmm0_30 < 0f ? 1 : 0)
                            bool p_14 = unimplemented  {test ah, 0x44}
                            
                            if (p_14)
                                goto label_6728e3
                            
                            float xmm0_31 = *(eax_9 + 0x1588)
                            xmm0_31 f- 0
                            eax_10:1.b = (xmm0_31 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_31, 0f) ? 1 : 0) << 2
                                | (xmm0_31 < 0f ? 1 : 0)
                            bool p_16 = unimplemented  {test ah, 0x44}
                            
                            if (p_16)
                                goto label_6728e3
                        
                        i += 1
                    while (i s< data_c28c58)
                
                void* eax_20 = sub_665600(data_c27c58)
                void* edx_8 = data_147abe8
                var_1c0 = 0xff62cbf6
                sub_67d460(eax_20 + 0x554, *(edx_8 + 0x2c), &var_80)
                float xmm1_14 = *(eax_20 + 0x16cc) - 0f
                float xmm2_24 = *(eax_20 + 0x16d0) - 0f
                float var_68_3 = xmm1_14 f* var_80:8.d + 0f
                var_70 = xmm1_14 f* var_80.d + 0f
                float var_6c_3 = xmm2_24 f* var_80:4.d + 0f
                float var_64_3 = xmm2_24 f* var_80:0xc.d + 0f
                float* eax_22 = sub_655430(&var_100, &var_70, eax_20 + 0x1620, &var_100)
                var_70.o = *eax_22
                float xmm0_45[0x4] = *eax_22
                var_80.d = xmm0_45
                float xmm2_28 = _mm_shuffle_ps(xmm0_45, xmm0_45, 0x55)
                float xmm3_14 = _mm_shuffle_ps(xmm0_45, xmm0_45, 0xff)
                float xmm4_13 = xmm0_45[0]
                float xmm0_46 = _mm_shuffle_ps(xmm0_45, xmm0_45, 0xaa)
                float xmm4_14 = xmm4_13 + 1f
                var_58 = xmm0_46
                float xmm1_18 = xmm0_46 - 1f
                var_80:4.d = xmm2_28
                var_5c = xmm2_28
                float var_19c_2 = xmm2_28
                var_80:8.d = xmm4_14
                var_80:0xc.d = xmm3_14
                var_60 = xmm1_18
                var_54 = xmm3_14
                var_1a0 = xmm4_14
                float var_198_2 = xmm1_18
                float var_194_2 = xmm2_28 + 1f
                var_1b0 = xmm4_14
                float var_1ac_2 = xmm3_14 - 1f
                float var_1a8_2 = xmm1_18
                float var_1a4_2 = xmm3_14
                sub_682f00(&var_80, &var_1c0)
                sub_682f00(&var_60, &var_1c0)
                sub_682f00(&var_1a0, &var_1c0)
                sub_682f00(&var_1b0, &var_1c0)
                eax_1 = data_c28c58
                cond:1_1 = data_c27c18 == 0
        
        if (cond:1_1)
        label_673792:
            
            if (data_147aba1 == 0)
                goto label_6737d1
            
            int32_t ecx_60 = data_c27c44
            struct _EXCEPTION_REGISTRATION_RECORD** result = result_1
            data_cf6b14 = result
            
            if (ecx_60 != 0)
                result = sub_664d00(sub_64e7a0(ecx_60))
            
            CookieCheckFunction(result)
            return result
        
        if (data_c28c62 == 0)
            goto label_672f71
        
        eax_1 = GetKeyState(0x11)
        int128_t var_f0
        
        if (eax_1.w s>= 0)
        label_672f9f:
            
            if (data_c28c58 == 1)
                void* eax_28 = sub_665600(data_c27c58)
                sub_67d460(eax_28 + 0x554, *(data_147abe8 + 0x2c), &var_80)
                float xmm1_23 = *(eax_28 + 0x16cc) - 0f
                float xmm2_37 = *(eax_28 + 0x16d0) - 0f
                float var_68_4 = xmm1_23 f* var_80:8.d + 0f
                var_70 = xmm1_23 f* var_80.d + 0f
                float var_6c_4 = xmm2_37 f* var_80:4.d + 0f
                float var_64_4 = xmm2_37 f* var_80:0xc.d + 0f
                float (* eax_30)[0x4] = sub_655430(&var_100, &var_70, eax_28 + 0x1620, &var_100)
                int32_t i_1 = 0
                float xmm1_26[0x4] = *eax_30
                float xmm0_63[0x4] = *eax_30
                var_120 = xmm1_26
                var_70.o = xmm0_63
                __builtin_memcpy(&var_f0, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x"
                "00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00"
                "00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00"
                "80\x3f", 
                    0x40)
                float xmm2_41 = _mm_shuffle_ps(xmm1_26, xmm1_26, 0xaa)
                float xmm3_23 = _mm_shuffle_ps(xmm1_26, xmm1_26, 0xff)
                int128_t xmm2_42 = xmm2_41 f- xmm1_26
                float xmm4_20[0x4] = _mm_shuffle_ps(xmm1_26, xmm1_26, 0x55)
                int128_t xmm3_24 = xmm3_23 f- xmm4_20
                var_130.o = xmm2_42
                var_150.o = xmm4_20
                var_140.o = xmm3_24
                
                do
                    float xmm3_26 = xmm3_24 f* *(&var_f0:4 + (i_1 << 3)) f+ xmm4_20
                    float xmm5_11 = xmm2_42.d f* *(&var_f0 + (i_1 << 3)) f+ xmm1_26
                    float xmm3_27 = xmm3_26 - 4f
                    float xmm4_22 = xmm3_26 + 4f
                    float xmm5_12 = xmm5_11 - 4f
                    float xmm2_44 = xmm5_11 + 4f
                    var_80:4.d = xmm3_27
                    float var_5c_3 = xmm3_27
                    var_80.d = xmm5_12
                    float xmm5_13 = xmm5_12 + 2f
                    float var_19c_4 = xmm3_27
                    float xmm1_28 = xmm2_44 - 2f
                    var_80:0xc.d = xmm4_22
                    float var_58_3 = xmm2_44
                    float var_54_3 = xmm4_22
                    var_80:8.d = xmm5_13
                    var_40 = var_80
                    var_60 = xmm1_28
                    var_170 = var_60.o
                    var_1a0 = xmm5_13
                    float var_198_4 = xmm1_28
                    float var_194_4 = xmm3_27 + 2f
                    var_180 = var_1a0.o
                    var_1b0 = xmm5_13
                    float var_1a8_4 = xmm1_28
                    float var_1a4_4 = xmm4_22
                    float var_1ac_4 = xmm4_22 - 2f
                    var_190 = var_1b0.o
                    sub_682f00(&var_40, &data_7e5d1c)
                    sub_682f00(&var_170, &data_7e5d1c)
                    sub_682f00(&var_180, &data_7e5d1c)
                    eax_1 = sub_682f00(&var_190, &data_7e5d1c)
                    i_1 += 1
                    xmm1_26 = var_120
                    xmm2_42 = var_130.o
                    xmm3_24 = var_140.o
                    xmm4_20 = var_150.o
                while (i_1 s< 8)
                
                goto label_673792
            
            var_1d4 = "UI2EditorDraw"
            var_1d8 = 0x49f2
            var_1dc = "C:\x\ax2017\Engine\UI2.cpp"
            ecx_36 = "gUI2Editor.s.activeSetCount == 1"
        else
            eax_1 = data_cf65b4
            
            if (eax_1[6].b == 0)
                goto label_672f9f
            
            eax_1 = GetFocus()
            
            if (eax_1 != data_147b084 && eax_1 != 0)
                goto label_672f9f
            
            if (data_c28c62 == 0)
            label_672f6c:
                eax_1 = data_c28c58
            label_672f71:
                
                if (data_c28c60 == 0)
                    goto label_673792
                
                if (eax_1 s> 0)
                    eax_1 = sub_665600(data_c27c58)
                    
                    if (eax_1[0x5ac] == 0)
                        sub_67d460(&eax_1[0x155], *(data_147abe8 + 0x2c), &var_80)
                        float xmm1_30 = eax_1[0x5b3] f- 0f
                        float xmm2_47 = eax_1[0x5b4] f- 0f
                        float var_68_5 = xmm1_30 f* var_80:8.d + 0f
                        var_70 = xmm1_30 f* var_80.d + 0f
                        float var_6c_5 = xmm2_47 f* var_80:4.d + 0f
                        float var_64_5 = xmm2_47 f* var_80:0xc.d + 0f
                        float* eax_33 = sub_655430(&var_100, &var_70, &eax_1[0x588], &var_100)
                        int32_t edi_1 = 1
                        var_70.o = *eax_33
                        var_50.o = *eax_33
                        void* var_1bc_1
                        float var_1b4_1
                        float xmm1_38
                        float xmm2_55
                        void* xmm3_30
                        float xmm4_23
                        
                        if (data_c28c58 s<= 1)
                            xmm2_55 = var_4c_1
                            xmm3_30 = var_50
                            xmm4_23 = var_44_1
                            xmm1_38 = var_48_1
                            var_1b4_1 = xmm2_55
                            var_1bc_1 = xmm3_30
                        label_6735d4:
                            float xmm1_39 = xmm1_38 f- xmm3_30
                            float xmm4_24 = xmm4_23 - xmm2_55
                            __builtin_memcpy(&var_f0, 
                                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x"
                            "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00"
                            "3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
                            "00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                                0x40)
                            int32_t i_2 = 0
                            float var_1b8_2 = xmm1_39
                            var_1c0 = xmm4_24
                            
                            do
                                float xmm5_17 = xmm1_39 f* *(&var_f0 + (i_2 << 3)) f+ xmm3_30
                                float xmm3_33 = xmm4_24 f* *(&var_f0:4 + (i_2 << 3)) + xmm2_55
                                float xmm5_18 = xmm5_17 - 4f
                                float xmm2_57 = xmm5_17 + 4f
                                float xmm3_34 = xmm3_33 - 4f
                                float xmm4_26 = xmm3_33 + 4f
                                var_80.d = xmm5_18
                                float xmm5_19 = xmm5_18 + 2f
                                float var_58_4 = xmm2_57
                                float xmm1_41 = xmm2_57 - 2f
                                var_80:4.d = xmm3_34
                                float var_5c_4 = xmm3_34
                                float var_19c_5 = xmm3_34
                                var_80:8.d = xmm5_19
                                var_80:0xc.d = xmm4_26
                                var_40 = var_80
                                var_60 = xmm1_41
                                float var_54_4 = xmm4_26
                                var_170 = var_60.o
                                var_1a0 = xmm5_19
                                float var_198_5 = xmm1_41
                                float var_194_5 = xmm3_34 + 2f
                                var_180 = var_1a0.o
                                var_1b0 = xmm5_19
                                float var_1a8_5 = xmm1_41
                                float var_1a4_5 = xmm4_26
                                float var_1ac_5 = xmm4_26 - 2f
                                var_190 = var_1b0.o
                                sub_682f00(&var_40, &data_7e5d1c)
                                sub_682f00(&var_170, &data_7e5d1c)
                                sub_682f00(&var_180, &data_7e5d1c)
                                eax_1 = sub_682f00(&var_190, &data_7e5d1c)
                                xmm1_39 = var_1b8_2
                                i_2 += 1
                                xmm2_55 = var_1b4_1
                                xmm3_30 = var_1bc_1
                                xmm4_24 = var_1c0
                            while (i_2 s< 8)
                            
                            goto label_673792
                        
                        var_1c0 = var_44_1
                        float var_1b8_1 = var_48_1
                        var_1b4_1 = var_4c_1
                        var_1bc_1 = var_50
                        
                        while (true)
                            void* eax_34 = sub_665600((&data_c27c58)[edi_1])
                            sub_67d460(eax_34 + 0x554, *(data_147abe8 + 0x2c), &var_80)
                            float xmm1_34 = *(eax_34 + 0x16cc) - 0f
                            float xmm2_52 = *(eax_34 + 0x16d0) - 0f
                            float var_68_6 = xmm1_34 f* var_80:8.d + 0f
                            var_70 = xmm1_34 f* var_80.d + 0f
                            float var_6c_6 = xmm2_52 f* var_80:4.d + 0f
                            float var_64_6 = xmm2_52 f* var_80:0xc.d + 0f
                            eax_1 = sub_655430(&var_100, &var_70, eax_34 + 0x1620, &var_100)
                            var_70.o = *eax_1
                            var_60.o = *eax_1
                            
                            if (not(var_1b8_1 f< var_1bc_1))
                                xmm2_55 = var_1b4_1
                                xmm4_23 = var_1c0
                                
                                if (not(xmm4_23 < xmm2_55))
                                    void* xmm0_90 = var_60
                                    
                                    if (not(xmm0_90 f<= var_1bc_1))
                                        xmm0_90 = var_1bc_1
                                    
                                    float xmm5_14 = var_58
                                    xmm3_30 = xmm0_90
                                    var_1c0 = xmm0_90
                                    void* xmm6_2 = xmm0_90
                                    
                                    if (var_1b8_1 <= xmm5_14)
                                        var_1bc_1 = xmm0_90
                                    else
                                        var_1bc_1 = xmm3_30
                                        xmm5_14 = var_1b8_1
                                    
                                    xmm1_38 = xmm5_14
                                    var_1b8_1 = xmm5_14
                                    
                                    if (var_5c <= xmm2_55)
                                        xmm3_30 = var_1c0
                                        xmm2_55 = var_5c
                                        var_1b8_1 = xmm1_38
                                        xmm6_2 = xmm0_90
                                        var_1bc_1 = xmm3_30
                                    
                                    var_1b4_1 = xmm2_55
                                    
                                    if (not(xmm4_23 > var_54))
                                        xmm1_38 = xmm5_14
                                        var_1b4_1 = xmm2_55
                                        xmm3_30 = xmm6_2
                                        var_1b8_1 = xmm1_38
                                        xmm4_23 = var_54
                                        var_1bc_1 = xmm3_30
                                    
                                    edi_1 += 1
                                    var_1c0 = xmm4_23
                                    
                                    if (edi_1 s>= data_c28c58)
                                        goto label_6735d4
                                    
                                    continue
                            
                            var_1d4 = "RectUnion"
                            var_1d8 = 0xdb
                            var_1dc = "C:\x\ax2017\Engine\Rect.cpp"
                            ecx_36 = "RectIsNormalized(r0)"
                            break
                    else
                        var_1d4 = "UI2EditorDraw"
                        var_1d8 = 0x4a28
                        var_1dc = "C:\x\ax2017\Engine\UI2.cpp"
                        ecx_36 = "el0.worldInfo.index == 0"
                else
                    var_1d4 = "UI2EditorDraw"
                    var_1d8 = 0x4a26
                    var_1dc = "C:\x\ax2017\Engine\UI2.cpp"
                    ecx_36 = "gUI2Editor.s.activeSetCount > 0"
            else
                if (GetKeyState(0x11) s>= 0 || *(data_cf65b4 + 0x18) == 0)
                    goto label_672f6c
                
                eax_1 = GetFocus()
                
                if (eax_1 != data_147b084 && eax_1 != 0)
                    goto label_672f6c
                
                if (data_c28c58 == 1)
                    void* eax_25 = sub_665600(data_c27c58)
                    var_80.d = 0
                    var_80:4.d = 0
                    var_80:8.d = *(eax_25 + 0x16cc)
                    var_80:0xc.d = *(eax_25 + 0x16d0)
                    float* eax_27 = sub_655430(&var_100, &var_80, eax_25 + 0x1620, &var_100)
                    int32_t i_3 = 0
                    __builtin_memcpy(&var_f0, 
                        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x"
                    "00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80"
                    "3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80"
                    "3f\x00\x00\x80\x3f", 
                        0x40)
                    float xmm1_19[0x4] = *eax_27
                    var_120 = xmm1_19
                    float xmm2_31 = _mm_shuffle_ps(xmm1_19, xmm1_19, 0xaa)
                    float xmm3_16 = _mm_shuffle_ps(xmm1_19, xmm1_19, 0xff)
                    int128_t xmm2_32 = xmm2_31 f- xmm1_19
                    float xmm4_16[0x4] = _mm_shuffle_ps(xmm1_19, xmm1_19, 0x55)
                    int128_t xmm3_17 = xmm3_16 f- xmm4_16
                    var_130.o = xmm2_32
                    var_150.o = xmm4_16
                    var_140.o = xmm3_17
                    
                    do
                        float xmm3_19 = xmm3_17 f* *(&var_f0:4 + (i_3 << 3)) f+ xmm4_16
                        float xmm5_6 = xmm2_32.d f* *(&var_f0 + (i_3 << 3)) f+ xmm1_19
                        float xmm3_20 = xmm3_19 - 4f
                        float xmm4_18 = xmm3_19 + 4f
                        float xmm5_7 = xmm5_6 - 4f
                        float xmm2_34 = xmm5_6 + 4f
                        var_80:4.d = xmm3_20
                        float var_5c_2 = xmm3_20
                        var_80.d = xmm5_7
                        float xmm5_8 = xmm5_7 + 2f
                        float var_19c_3 = xmm3_20
                        float xmm1_21 = xmm2_34 - 2f
                        var_80:0xc.d = xmm4_18
                        float var_58_2 = xmm2_34
                        float var_54_2 = xmm4_18
                        var_80:8.d = xmm5_8
                        var_40 = var_80
                        var_60 = xmm1_21
                        var_170 = var_60.o
                        var_1a0 = xmm5_8
                        float var_198_3 = xmm1_21
                        float var_194_3 = xmm3_20 + 2f
                        var_180 = var_1a0.o
                        var_1b0 = xmm5_8
                        float var_1a8_3 = xmm1_21
                        float var_1a4_3 = xmm4_18
                        float var_1ac_3 = xmm4_18 - 2f
                        var_190 = var_1b0.o
                        sub_682f00(&var_40, &data_7e5d1c)
                        sub_682f00(&var_170, &data_7e5d1c)
                        sub_682f00(&var_180, &data_7e5d1c)
                        eax_1 = sub_682f00(&var_190, &data_7e5d1c)
                        xmm1_19 = var_120
                        i_3 += 1
                        xmm2_32 = var_130.o
                        xmm3_17 = var_140.o
                        xmm4_16 = var_150.o
                    while (i_3 s< 8)
                    
                    goto label_673792
                
                var_1d4 = "UI2EditorDraw"
                var_1d8 = 0x4a0c
                var_1dc = "C:\x\ax2017\Engine\UI2.cpp"
                ecx_36 = "gUI2Editor.s.activeSetCount == 1"
else
    var_1d4 = "Draw3DSetSortOverride"
    var_1d8 = 0x2fc
    var_1dc = "C:\x\ax2017\Engine\Draw3d.cpp"
    ecx_36 = "gDraw3DData.submittingRenderItems"

sub_63b870(eax_1, &data_801800, ecx_36, var_1dc, var_1d8, var_1d4)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
