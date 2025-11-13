// 函数: vorbis_synthesis_blockin
// 地址: 0x1080578
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 0)
    void* x17_1 = *(arg1 + 8)
    void* x8_1 = *(arg1 + 0x88)
    uint64_t x3_1 = zx.q(*(arg1 + 0x24))
    int32_t x9_1 = *(arg1 + 0x28)
    int64_t* x15_1 = *(x17_1 + 0x30)
    uint64_t x8_2 = zx.q(x15_1[0x2d2].d)
    
    if (x3_1.d s<= x9_1 || x9_1 == 0xffffffff)
        int64_t x8_3 = *(arg1 + 0x40)
        int64_t x11_1 = *(arg1 + 0x60)
        *(arg1 + 0x38) = x8_3
        int64_t x24_1 = arg2[7]
        *(arg1 + 0x40) = x24_1
        *(arg1 + 0x48) = -1
        int64_t x11_2
        int64_t x10_1
        
        if (x11_1 == -1)
            x10_1 = arg2[0xc]
        label_1080618:
            *(arg1 + 0x58) = -1
            *(x8_1 + 0xe0) = -1
            x11_2 = x10_1
        else
            x10_1 = arg2[0xc]
            x11_2 = x11_1 + 1
            
            if (x11_2 != x10_1)
                goto label_1080618
        *(arg1 + 0x60) = x11_2
        
        if (*arg2 != 0)
            int64_t x12_2 = x15_1[x24_1]
            int64_t x11_3 = *x15_1
            int64_t x10_3 = x15_1[1]
            *(arg1 + 0x68) += *(arg2 + 0x98)
            uint64_t x13_2 = zx.q(x8_2.d + 1)
            int64_t x4_1 = x10_3 s>> x13_2
            int64_t x10_4 = *(arg1 + 0x50)
            *(arg1 + 0x78) += *(arg2 + 0xa8)
            uint64_t x16_1
            
            if (x10_4 == 0)
                x16_1 = zx.q(x4_1.d)
            else
                x16_1 = 0
            
            if (x10_4 == 0)
                x3_1 = 0
            else
                x3_1 = zx.q(x4_1.d)
            
            if (*(x17_1 + 4) s>= 1)
                int64_t x9_2 = x12_2 s>> x13_2
                int64_t x7_1 = x11_3 s>> x13_2
                int64_t x27_1 = x4_1 & 0xffffffff
                uint64_t x10_5
                
                if (x4_1.d s< 0)
                    x10_5 = zx.q(x4_1.d + 1)
                else
                    x10_5 = zx.q(x4_1.d)
                
                int64_t x15_2 = sx.q(x16_1.d)
                int64_t x23_1 = (x16_1 & 0xffffffff) << 0x20 s>> 0x1e
                int64_t x22_1 = x7_1 & 0xffffffff
                int32_t x11_4 = x10_5.d s>> 1
                int64_t x25_1 = (x10_5 & 0xfffffffe) << 0x20 s>> 0x21
                uint64_t x10_6
                
                if (x7_1.d s< 0)
                    x10_6 = zx.q(x7_1.d + 1)
                else
                    x10_6 = zx.q(x7_1.d)
                
                int64_t x20_1
                
                x20_1 = x7_1.d s> 0 ? x22_1 : 0
                
                int32_t x16_3 = x10_6.d s>> 1
                int64_t x10_7 = (x10_6 & 0xfffffffe) << 0x20 s>> 0x21
                int64_t x18_1 = x20_1 + x25_1
                int64_t x21_1 = neg.q(x10_7)
                int64_t x13_4 = x15_2 + x25_1
                int64_t x1_1 = zx.q(x11_4) << 0x20 s>> 0x1e
                int32_t i_4 = x11_4 + x16_3
                int32_t i_8
                
                if (i_4 s> x20_1.d + 1)
                    i_8 = i_4
                else
                    i_8 = x20_1.d + 1
                
                int64_t x16_4 = zx.q(x16_3) << 0x20 s>> 0x1e
                uint64_t x11_7 = zx.q(i_8 - (x20_1.d + 1))
                int32_t x12_6 = (x7_1.d - 1 - (x22_1 - 1).d s> x7_1.d - 1 ? 1 : 0)
                    | ((x22_1 - 1) u>> 0x20 != 0 ? 1 : 0)
                int64_t x15_3 = x20_1 + x15_2
                int64_t x11_8 = x4_1 & 7
                int64_t i_14 = x27_1 - x11_8
                uint64_t x9_12 = zx.q(x11_7.d + 1) & 7
                int64_t x10_9 = sx.q(x3_1.d)
                int64_t x23_2 = x9_2 & 0xffffffff
                int64_t x12_8 = sx.q(x9_2.d)
                int32_t var_88_1
                var_88_1.q = x10_9
                int64_t x14_10 = x9_2 & 7
                int64_t x10_12 = x22_1 + x15_2
                int64_t x16_8 = x7_1 & 7
                int64_t x10_13 = x23_2 - x14_10
                int64_t i_7 = x22_1 - x16_8
                int64_t x10_15 = sx.q(x7_1.d - 1) + 1 - x22_1
                int64_t i_12 = x11_7 + 1 - x9_12
                int64_t x28_1 = 0
                int32_t var_a0_1 = x7_1.d
                int32_t* x8_8
                void* x9_15
                float128 v0_3
                float128 v1_1
                
                if (x8_3 == 0)
                label_1080c2c:
                    int32_t* x0_9
                    uint128_t v2_5
                    float128 v3_3
                    float128 v4_3
                    uint128_t v5_3
                    float128 v6_3
                    x0_9, v0_3, v1_1, v2_5, v3_3, v4_3, v5_3, v6_3 =
                        _vorbis_window_get(zx.q(*(x8_1 + 8) - x8_2.d))
                    x9_15 = (*(arg1 + 0x10))[x28_1]
                    x8_8 = (*arg2)[x28_1]
                    void* x10_35 = x9_15 + (x15_2 << 2)
                    
                    if (x24_1 == 0)
                        if (var_a0_1 s< 1)
                            goto label_1080fcc
                        
                        int64_t i_15 = 0
                        
                        if ((((x22_1 u< 8 ? 1 : 0) | x12_6) & 1) == 0)
                            void* x14_21 = x9_15 + (x10_12 << 2)
                            
                            if (((x10_35 u< &x8_8[x22_1] ? 1 : 0) & (x8_8 u< x14_21 ? 1 : 0) & 1)
                                    != 0 || ((x10_35 u< &x0_9[x22_1] ? 1 : 0) & (x0_9 u< x14_21 ? 1 : 0)
                                    & 1) != 0)
                                i_15 = 0
                            else
                                i_15 = 0
                                
                                if (((x10_35 u< &x0_9[sx.q(x7_1.d - 1) + 1] ? 1 : 0)
                                        & (&x0_9[x10_15] u< x14_21 ? 1 : 0) & 1) == 0)
                                    int32_t x12_53 = x7_1.d - 1
                                    int64_t i = i_7
                                    int64_t x14_23 = 0x10
                                    float128* x11_44 = x9_15 + x23_1
                                    
                                    do
                                        void* x16_20 = &x0_9[sx.q(x12_53)]
                                        void* x15_12 = x11_44 + x14_23
                                        v5_3 = *(x15_12 - 0x10)
                                        v2_5 = *(x16_20 - 0x1c)
                                        int128_t* x16_21 = x8_8 + x14_23
                                        uint128_t v1_9 = vrev64q_s32(*(x16_20 - 0xc))
                                        v0_3 = *(x11_44 + x14_23)
                                        v3_3 = x16_21[-1]
                                        v4_3 = *x16_21
                                        void* x16_22 = x0_9 + x14_23
                                        float128 v1_11 = vmulq_f32(vextq_s8(v1_9, v1_9, 8), v5_3, 0)
                                        v6_3 = *(x16_22 - 0x10)
                                        v5_3 = *x16_22
                                        uint128_t v2_7 = vrev64q_s32(v2_5)
                                        float128 v0_7 = vmulq_f32(vextq_s8(v2_7, v2_7, 8), v0_3, 0)
                                        v1_1 = vfmaq_f32(v1_11, v3_3, v6_3)
                                        v0_3 = vfmaq_f32(v0_7, v4_3, v5_3)
                                        i -= 8
                                        *(x15_12 - 0x10) = v1_1
                                        *(x11_44 + x14_23) = v0_3
                                        x14_23 += 0x20
                                        x12_53 -= 8
                                    while (i != 0)
                                    
                                    i_15 = i_7
                                    
                                    if (x16_8 == 0)
                                        goto label_1080fcc
                        
                        int32_t x12_67 = x7_1.d - 1 - i_15.d
                        
                        do
                            int64_t x13_35 = i_15 << 2
                            v0_3.d = x0_9[sx.q(x12_67)]
                            v1_1.d = *(x10_35 + x13_35)
                            v2_5.d = x8_8[i_15]
                            v3_3.d = x0_9[i_15]
                            i_15 += 1
                            v0_3.d = v0_3.d f* v1_1.d
                            v0_3.d = vfma_f32(v0_3.d, v3_3.d, v2_5.d)
                            x12_67 -= 1
                            *(x10_35 + x13_35) = v0_3.d
                        while (x22_1 != i_15)
                        
                        goto label_1080fcc
                    
                    void* x11_35 = &x8_8[x25_1 + x21_1]
                    int32_t x12_45
                    
                    if (var_a0_1 s< 1)
                        x12_45 = 0
                    label_1080e90:
                        
                        if (x12_45 s>= i_4)
                            goto label_1080fcc
                    else
                        int64_t i_16 = 0
                        
                        if ((((x22_1 u< 8 ? 1 : 0) | x12_6) & 1) == 0)
                            void* x15_8 = x9_15 + (x10_12 << 2)
                            
                            if (((x10_35 u< &x8_8[x22_1 + x25_1 - x10_7] ? 1 : 0)
                                    & (x11_35 u< x15_8 ? 1 : 0) & 1) != 0 || ((x10_35 u< &x0_9[x22_1] ? 1
                                    : 0) & (x0_9 u< x15_8 ? 1 : 0) & 1) != 0)
                                i_16 = 0
                            else
                                i_16 = 0
                                
                                if (((x10_35 u< &x0_9[sx.q(x7_1.d - 1) + 1] ? 1 : 0)
                                        & (&x0_9[x10_15] u< x15_8 ? 1 : 0) & 1) == 0)
                                    int32_t x15_10 = x7_1.d - 1
                                    int64_t i_1 = i_7
                                    void* x14_20 = &x0_9[4]
                                    void* x12_44 = x9_15 + ((x15_2 + 4) << 2)
                                    void* x13_21 = &x8_8[x25_1 + 4 - x10_7]
                                    
                                    do
                                        void* x17_7 = &x0_9[sx.q(x15_10)]
                                        v5_3 = *(x17_7 - 0x1c)
                                        v0_3 = *(x12_44 - 0x10)
                                        v1_1 = *x12_44
                                        v3_3 = *(x13_21 - 0x10)
                                        v4_3 = *x13_21
                                        uint128_t v2_6 = vrev64q_s32(*(x17_7 - 0xc))
                                        uint128_t v5_4 = vrev64q_s32(v5_3)
                                        v2_5 = vextq_s8(v2_6, v2_6, 8)
                                        v5_3 = vextq_s8(v5_4, v5_4, 8)
                                        float128 v0_6 = vmulq_f32(v2_5, v0_3, 0)
                                        float128 v1_8 = vmulq_f32(v5_3, v1_1, 0)
                                        v5_3 = *x14_20
                                        i_1 -= 8
                                        x15_10 -= 8
                                        x13_21 += 0x20
                                        v0_3 = vfmaq_f32(v0_6, v3_3, *(x14_20 - 0x10))
                                        v1_1 = vfmaq_f32(v1_8, v4_3, v5_3)
                                        *(x12_44 - 0x10) = v0_3
                                        *x12_44 = v1_1
                                        x12_44 += 0x20
                                        x14_20 += 0x20
                                    while (i_1 != 0)
                                    
                                    i_16 = i_7
                                    x12_45 = var_a0_1
                                    
                                    if (x16_8 == 0)
                                        goto label_1080e90
                        
                        int32_t x12_56 = x7_1.d - 1 - i_16.d
                        void* x14_25 = &x8_8[x25_1 - x10_7 + i_16]
                        int64_t i_11 = x22_1 - i_16
                        void* x13_28 = &x0_9[i_16]
                        void* x15_14 = x9_15 + (x15_2 << 2) + (i_16 << 2)
                        int64_t i_2
                        
                        do
                            v0_3.d = *x15_14
                            v1_1.d = x0_9[sx.q(x12_56)]
                            v2_5.d = *x14_25
                            x14_25 += 4
                            v3_3.d = *x13_28
                            x13_28 += 4
                            i_2 = i_11
                            i_11 -= 1
                            v0_3.d = v1_1.d f* v0_3.d
                            x12_56 -= 1
                            v0_3.d = vfma_f32(v0_3.d, v3_3.d, v2_5.d)
                            *x15_14 = v0_3.d
                            x15_14 += 4
                        while (i_2 != 1)
                        
                        if (var_a0_1 s>= i_4)
                            goto label_1080fcc
                    int64_t x12_59 = x20_1
                    
                    if (x11_7 + 1 u> 7)
                        if (x9_15 + (x15_3 << 2) u< &x8_8[x18_1 + x11_7 + 1 - x10_7])
                            x12_59 = x20_1
                        
                        if (x9_15 + (x15_3 << 2) u>= &x8_8[x18_1 + x11_7 + 1 - x10_7]
                                || &x8_8[x18_1 - x10_7] u>= x9_15 + ((x15_3 + x11_7 + 1) << 2))
                            int64_t i_10 = i_12
                            int64_t x14_26 = x1_1 + (x20_1 << 2) - x16_4
                            float128* x12_65 = x9_15 + ((x15_3 + 4) << 2)
                            int64_t i_3
                            
                            do
                                void* x15_15 = x8_8 + x14_26
                                v1_1 = *(x15_15 + 0x10)
                                i_3 = i_10
                                i_10 -= 8
                                x14_26 += 0x20
                                x12_65[-1] = *x15_15
                                *x12_65 = v1_1
                                x12_65 = &x12_65[2]
                            while (i_3 != 8)
                            x12_59 = x20_1 + i_12
                            
                            if (x9_12.d == 0)
                                goto label_1080fcc
                    
                    do
                        int64_t x13_34 = x12_59 << 2
                        x12_59 += 1
                        *(x10_35 + x13_34) = *(x11_35 + x13_34)
                    while (i_4 s> x12_59.d)
                    
                    goto label_1080fcc
                
                while (true)
                    if (x24_1 == 0)
                        int128_t* x0_7
                        float128 v2_3
                        float128 v3_2
                        float128 v4_2
                        float128 v5_2
                        float128 v6_2
                        x0_7, v0_3, v1_1, v2_3, v3_2, v4_2, v5_2, v6_2 =
                            _vorbis_window_get(zx.q(*(x8_1 + 8) - x8_2.d))
                        x9_15 = (*(arg1 + 0x10))[x28_1]
                        x8_8 = (*arg2)[x28_1]
                        
                        if (var_a0_1 s>= 1)
                            int64_t i_13 = 0
                            
                            if ((((x22_1 u< 8 ? 1 : 0) | x12_6) & 1) != 0)
                                goto label_1080be4
                            
                            void* x13_12 = x9_15 + ((x13_4 + x22_1 - x10_7) << 2)
                            void* x16_14 = x9_15 + (x15_2 << 2) + (x25_1 << 2) + (x21_1 << 2)
                            
                            if (((x16_14 u< &x8_8[x22_1] ? 1 : 0) & (x8_8 u< x13_12 ? 1 : 0) & 1)
                                    != 0 || ((x16_14 u< x0_7 + (x22_1 << 2) ? 1 : 0)
                                    & (x0_7 u< x13_12 ? 1 : 0) & 1) != 0)
                                i_13 = 0
                            label_1080be4:
                                int32_t x11_31 = x7_1.d - 1 - i_13.d
                                void* x12_31 = x9_15 + ((x13_4 - x10_7) << 2) + (i_13 << 2)
                                
                                do
                                    v0_3.d = *x12_31
                                    v1_1.d = *(x0_7 + (sx.q(x11_31) << 2))
                                    v2_3.d = x8_8[i_13]
                                    v3_2.d = *(x0_7 + (i_13 << 2))
                                    v0_3.d = v1_1.d f* v0_3.d
                                    i_13 += 1
                                    v0_3.d = vfma_f32(v0_3.d, v3_2.d, v2_3.d)
                                    *x12_31 = v0_3.d
                                    x12_31 += 4
                                    x11_31 -= 1
                                while (x22_1 != i_13)
                            else
                                i_13 = 0
                                
                                if (((x16_14 u< x0_7 + ((sx.q(x7_1.d - 1) + 1) << 2) ? 1 : 0)
                                        & (x0_7 + (x10_15 << 2) u< x13_12 ? 1 : 0) & 1) != 0)
                                    goto label_1080be4
                                
                                int32_t x13_14 = x7_1.d - 1
                                int64_t i_5 = i_7
                                int64_t x10_32 = 0
                                void* x11_28 = x9_15 + x23_1 + x1_1 + 0x10 - x16_4
                                
                                do
                                    void* x16_15 = x0_7 + (sx.q(x13_14) << 2)
                                    void* x15_7 = x11_28 + x10_32
                                    v4_2 = *(x15_7 - 0x10)
                                    v2_3 = *(x16_15 - 0x1c)
                                    uint128_t v1_5 = vrev64q_s32(*(x16_15 - 0xc))
                                    v0_3 = *(x11_28 + x10_32)
                                    void* x16_16 = x8_8 + x10_32
                                    uint128_t v1_6 = vextq_s8(v1_5, v1_5, 8)
                                    v3_2 = *(x0_7 + x10_32)
                                    v5_2 = *(&x0_7[1] + x10_32)
                                    float128 v1_7 = vmulq_f32(v1_6, v4_2, 0)
                                    v4_2 = *x16_16
                                    v6_2 = *(x16_16 + 0x10)
                                    uint128_t v2_4 = vrev64q_s32(v2_3)
                                    float128 v0_5 = vmulq_f32(vextq_s8(v2_4, v2_4, 8), v0_3, 0)
                                    v1_1 = vfmaq_f32(v1_7, v4_2, v3_2)
                                    v0_3 = vfmaq_f32(v0_5, v6_2, v5_2)
                                    i_5 -= 8
                                    *(x15_7 - 0x10) = v1_1
                                    *(x11_28 + x10_32) = v0_3
                                    x10_32 += 0x20
                                    x13_14 -= 8
                                while (i_5 != 0)
                                
                                i_13 = i_7
                                
                                if (x16_8 != 0)
                                    goto label_1080be4
                    else
                        int32_t* x0_5
                        float128 v2_1
                        float128 v3_1
                        float128 v4_1
                        float128 v5_1
                        float128 v6_1
                        x0_5, v0_3, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1 =
                            _vorbis_window_get(zx.q(*(x8_1 + 0xc) - x8_2.d))
                        x9_15 = (*(arg1 + 0x10))[x28_1]
                        x8_8 = (*arg2)[x28_1]
                        
                        if (x4_1.d s>= 1)
                            int64_t i_17 = 0
                            void* x10_22 = x9_15 + (x15_2 << 2)
                            
                            if ((((x27_1 u< 8 ? 1 : 0)
                                    | (x4_1.d - 1 - (x27_1 - 1).d s> x4_1.d - 1 ? 1 : 0)
                                    | ((x27_1 - 1) u>> 0x20 != 0 ? 1 : 0)) & 1) != 0)
                                goto label_1080b98
                            
                            void* x14_11 = x9_15 + ((x27_1 + x15_2) << 2)
                            
                            if (((x10_22 u< &x8_8[x27_1] ? 1 : 0) & (x8_8 u< x14_11 ? 1 : 0) & 1)
                                    != 0 || ((x10_22 u< &x0_5[x27_1] ? 1 : 0) & (x0_5 u< x14_11 ? 1 : 0)
                                    & 1) != 0)
                                i_17 = 0
                            label_1080b98:
                                uint64_t x12_28 = zx.q(x4_1.d - 1 - i_17.d) << 0x20
                                
                                do
                                    int64_t x13_15 = i_17 << 2
                                    v0_3.d = *(x10_22 + x13_15)
                                    v1_1.d = *(x0_5 + (x12_28 s>> 0x1e))
                                    v2_1.d = x8_8[i_17]
                                    v3_1.d = x0_5[i_17]
                                    i_17 += 1
                                    v0_3.d = v1_1.d f* v0_3.d
                                    v0_3.d = vfma_f32(v0_3.d, v3_1.d, v2_1.d)
                                    x12_28 += -0x100000000
                                    *(x10_22 + x13_15) = v0_3.d
                                while (x27_1 != i_17)
                            else
                                i_17 = 0
                                
                                if (((x10_22 u< &x0_5[sx.q(x4_1.d - 1) + 1] ? 1 : 0)
                                        & (&x0_5[sx.q(x4_1.d - 1) + 1 - x27_1] u< x14_11 ? 1 : 0)
                                        & 1) != 0)
                                    goto label_1080b98
                                
                                int64_t i_9 = i_14
                                int64_t x13_11 = -0x100000000 + (x4_1 << 0x20)
                                int64_t x14_13 = 0x10
                                void* x11_18 = x9_15 + x23_1
                                int64_t i_6
                                
                                do
                                    void* x16_10 = x0_5 + (x13_11 s>> 0x1e)
                                    void* x15_5 = x11_18 + x14_13
                                    v5_1 = *(x15_5 - 0x10)
                                    v2_1 = *(x16_10 - 0x1c)
                                    void* x16_11 = x8_8 + x14_13
                                    uint128_t v1_2 = vrev64q_s32(*(x16_10 - 0xc))
                                    v0_3 = *(x11_18 + x14_13)
                                    v3_1 = *(x16_11 - 0x10)
                                    v4_1 = *x16_11
                                    int128_t* x16_12 = x0_5 + x14_13
                                    float128 v1_4 = vmulq_f32(vextq_s8(v1_2, v1_2, 8), v5_1, 0)
                                    v6_1 = x16_12[-1]
                                    v5_1 = *x16_12
                                    uint128_t v2_2 = vrev64q_s32(v2_1)
                                    float128 v0_4 = vmulq_f32(vextq_s8(v2_2, v2_2, 8), v0_3, 0)
                                    v1_1 = vfmaq_f32(v1_4, v3_1, v6_1)
                                    v0_3 = vfmaq_f32(v0_4, v4_1, v5_1)
                                    i_6 = i_9
                                    i_9 -= 8
                                    *(x15_5 - 0x10) = v1_1
                                    *(x11_18 + x14_13) = v0_3
                                    x14_13 += 0x20
                                    x13_11 += -0x800000000
                                while (i_6 != 8)
                                i_17 = i_14
                                
                                if (x11_8 != 0)
                                    goto label_1080b98
                    
                label_1080fcc:
                    
                    if (x9_2.d s>= 1)
                        int64_t x10_37 = 0
                        
                        if (x23_2 u< 8)
                        label_1081054:
                            int32_t* x8_15 = x9_15 + (var_88_1.q << 2) + (x10_37 << 2)
                            void* x9_19 = &x8_8[x12_8 + x10_37]
                            int64_t x10_44 = x23_2 - x10_37
                        label_1081068:
                            int32_t x11_54 = *x9_19
                            x9_19 += 4
                            int64_t temp2_1 = x10_44
                            x10_44 -= 1
                            *x8_15 = x11_54
                            x8_15 = &x8_15[1]
                            
                            if (temp2_1 != 1)
                                goto label_1081068
                        else
                            if (x9_15 + (var_88_1.q << 2) u< &x8_8[x12_8 + x23_2])
                                x10_37 = 0
                            
                            if (x9_15 + (var_88_1.q << 2) u< &x8_8[x12_8 + x23_2]
                                    && &x8_8[x12_8] u< x9_15 + ((x23_2 + x10_9) << 2))
                                goto label_1081054
                            
                            int64_t x12_68 = x10_13
                            void* x10_43 = &x8_8[x12_8 + 4]
                            void* x11_50 = x9_15 + ((x10_9 + 4) << 2)
                        label_1081024:
                            v0_3 = *(x10_43 - 0x10)
                            v1_1 = *x10_43
                            x10_43 += 0x20
                            int64_t temp4_1 = x12_68
                            x12_68 -= 8
                            *(x11_50 - 0x10) = v0_3
                            *x11_50 = v1_1
                            x11_50 += 0x20
                            
                            if (temp4_1 != 8)
                                goto label_1081024
                            
                            x10_37 = x10_13
                            
                            if (x14_10 != 0)
                                goto label_1081054
                    
                    x28_1 += 1
                    
                    if (x28_1 s>= sx.q(*(x17_1 + 4)))
                        x10_4 = *(arg1 + 0x50)
                        x9_1 = *(arg1 + 0x28)
                        break
                    
                    x24_1 = *(arg1 + 0x40)
                    
                    if (*(arg1 + 0x38) == 0)
                        goto label_1080c2c
            
            int64_t x8_18
            
            if (x10_4 == 0)
                x8_18 = sx.q(x4_1.d)
            else
                x8_18 = 0
            
            *(arg1 + 0x50) = x8_18
            
            if (x9_1 == 0xffffffff)
                *(arg1 + 0x28) = x3_1.d
                x9_1 = x3_1.d
            else
                int64_t x8_19 = *(arg1 + 0x38)
                int64_t x9_20 = *(arg1 + 0x40)
                *(arg1 + 0x28) = x16_1.d
                int64_t x8_20 = x15_1[x8_19]
                int64_t x9_21 = x15_1[x9_20]
                int64_t x8_21
                
                if (x8_20 s< 0)
                    x8_21 = x8_20 + 3
                else
                    x8_21 = x8_20
                
                int64_t x9_22
                
                if (x9_21 s< 0)
                    x9_22 = x9_21 + 3
                else
                    x9_22 = x9_21
                
                x3_1 = zx.q(x16_1.d + (((x9_22 s>> 2) + (x8_21 s>> 2)) s>> x8_2).d)
                x9_1 = x16_1.d
            
            *(arg1 + 0x24) = x3_1.d
        
        int64_t x8_25 = *(x8_1 + 0xe0)
        int64_t x8_27
        
        if (x8_25 == -1)
            x8_27 = 0
        else
            int64_t x10_48 = x15_1[*(arg1 + 0x38)]
            int64_t x11_56 = x15_1[*(arg1 + 0x40)]
            int64_t x10_49
            
            if (x10_48 s< 0)
                x10_49 = x10_48 + 3
            else
                x10_49 = x10_48
            
            int64_t x11_57
            
            if (x11_56 s< 0)
                x11_57 = x11_56 + 3
            else
                x11_57 = x11_56
            
            x8_27 = x8_25 + (x10_49 s>> 2) + (x11_57 s>> 2)
        
        *(x8_1 + 0xe0) = x8_27
        int64_t x10_51 = *(arg1 + 0x58)
        
        if (x10_51 == -1)
            int64_t x10_54 = arg2[0xb]
            
            if (x10_54 == -1)
            label_108123c:
                
                if (arg2[0xa].d == 0)
                    return 0
            else
                int64_t x8_34 = x8_27 - x10_54
                *(arg1 + 0x58) = x10_54
                
                if (x8_27 s<= x10_54)
                    goto label_108123c
                
                int64_t x8_35 = x8_34 & not.q(x8_34 s>> 0x3f)
                
                if (arg2[0xa].d != 0)
                    int64_t x9_34 = sx.q((x3_1.d - x9_1) << x8_2.d)
                    int64_t x8_36
                    
                    x8_36 = x8_35 s> x9_34 ? x9_34 : x8_35
                    
                    *(arg1 + 0x24) = x3_1.d - (x8_36 s>> x8_2).d
                    goto label_108123c
                
                int32_t x8_41 = x9_1 + (x8_35 u>> x8_2).d
                int32_t x8_42
                
                if (x8_41 s> x3_1.d)
                    x8_42 = x3_1.d
                else
                    x8_42 = x8_41
                
                *(arg1 + 0x28) = x8_42
                
                if (arg2[0xa].d == 0)
                    return 0
        else
            int64_t x8_29 = x15_1[*(arg1 + 0x38)]
            int64_t x11_59 = x15_1[*(arg1 + 0x40)]
            int64_t x8_30
            
            if (x8_29 s< 0)
                x8_30 = x8_29 + 3
            else
                x8_30 = x8_29
            
            int64_t x11_60
            
            if (x11_59 s< 0)
                x11_60 = x11_59 + 3
            else
                x11_60 = x11_59
            
            int64_t x10_52 = x10_51 + (x8_30 s>> 2) + (x11_60 s>> 2)
            *(arg1 + 0x58) = x10_52
            int64_t x8_32 = arg2[0xb]
            
            if (x8_32 == -1 || x10_52 == x8_32)
                goto label_108123c
            
            if (x10_52 s> x8_32)
                int64_t x10_53 = x10_52 - x8_32
                
                if (x10_52 != x8_32 && arg2[0xa].d != 0)
                    int64_t x9_27 = sx.q((x3_1.d - x9_1) << x8_2.d)
                    int64_t x9_28
                    
                    x9_28 = x10_53 s> x9_27 ? x9_27 : x10_53
                    
                    *(arg1 + 0x24) = x3_1.d - ((x9_28 & not.q(x9_28 s>> 0x3f)) u>> x8_2).d
            
            *(arg1 + 0x58) = x8_32
            
            if (arg2[0xa].d == 0)
                return 0
        
        *(arg1 + 0x30) = 1
        return 0

return 0xffffff7d
