// 函数: sub_1091d5c
// 地址: 0x1091d5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double x = fconvert.d(6.28318548f / float.s(arg2))
double v0_2 = cos(x)
float128 result
float128 v1_1
uint128_t v2
uint128_t v3
uint128_t v4
uint128_t v5
float128 v6
float128 v7
float128 v16
float128 v17
result, v1_1, v2, v3, v4, v5, v6, v7, v16, v17 = sin(x)
uint64_t x9 = zx.q(arg1 - 1)
int32_t lr = arg2
int32_t x28 = (arg2 + 1) s>> 1
int32_t x8_1 = x9.d s>> 1
int32_t var_7c = x28
int32_t var_b0

if (arg1 != 1)
    if (arg4 s>= 1)
        int64_t i_36 = 0
        uint64_t x9_1 = zx.q(arg4)
        
        if (arg4 u<= 7)
        label_1091e5c:
            int64_t x11_2 = i_36 << 2
            void* x8_5 = arg9 + x11_2
            int32_t* x11_3 = arg7 + x11_2
            int64_t i_23 = x9_1 - i_36
            int64_t i
            
            do
                int32_t x10_2 = *x11_3
                x11_3 = &x11_3[1]
                i = i_23
                i_23 -= 1
                *x8_5 = x10_2
                x8_5 += 4
            while (i != 1)
        else
            uint64_t x8_2 = x9_1 << 2
            
            if (arg7 + x8_2 u> arg9)
                i_36 = 0
            
            if (arg7 + x8_2 u> arg9 && arg9 + x8_2 u> arg7)
                goto label_1091e5c
            
            i_36 = x9_1 & 0xfffffff8
            void* x8_4 = arg7 + 0x10
            void* x11_1 = arg9 + 0x10
            int64_t i_25 = i_36
            int64_t i_1
            
            do
                v1_1 = *(x8_4 - 0x10)
                v2 = *x8_4
                x8_4 += 0x20
                i_1 = i_25
                i_25 -= 8
                *(x11_1 - 0x10) = v1_1
                *x11_1 = v2
                x11_1 += 0x20
            while (i_1 != 8)
            
            if (i_36 != x9_1)
                goto label_1091e5c
    
    int32_t x8_6 = lr - 1
    
    if (lr s> 1)
        int32_t x9_2 = arg3 * arg1
        int32_t x11_4 = 1
        int32_t x8_7 = x9_2
        
        do
            if (arg3 s>= 1)
                int64_t x12_1 = zx.q(x8_7) << 0x20 s>> 0x1e
                int32_t i_26 = arg3
                int32_t i_2
                
                do
                    i_2 = i_26
                    i_26 -= 1
                    *(arg8 + x12_1) = *(arg6 + x12_1)
                    x12_1 += zx.q(arg1) << 0x20 s>> 0x1e
                while (i_2 != 1)
            
            x11_4 += 1
            x8_7 += x9_2
        while (x11_4 != lr)
    
    if (x8_1 s<= arg3)
        if (lr s>= 2)
            int32_t x10_5 = arg3 * arg1
            int32_t x12_3 = 1
            int32_t x13_7 = x10_5 + 2
            int32_t x14_7 = -1
            
            do
                if (arg1 s>= 3)
                    int64_t x18_2 = sx.q(x14_7)
                    int32_t x15_2 = 2
                    int32_t x16_2 = x13_7
                    
                    do
                        if (arg3 s>= 1)
                            int64_t x8_25 = zx.q(x16_2) << 0x20 s>> 0x1e
                            int32_t i_18 = arg3
                            int32_t i_3
                            
                            do
                                void* x2_2 = arg6 + x8_25
                                v1_1.d = arg10[x18_2 + 1]
                                v2.d = *(x2_2 - 4)
                                v4.d = *x2_2
                                v3.d = arg10[x18_2 + 2]
                                void* x4_1 = arg8 + x8_25
                                i_3 = i_18
                                i_18 -= 1
                                v1_1.d = v2.d f* v1_1.d
                                v1_1.d = vfma_f32(v1_1.d, v4.d, v3.d)
                                *(x4_1 - 4) = v1_1.d
                                v2.d = arg10[x18_2 + 2]
                                v3.d = *(x2_2 - 4)
                                v4.d = *x2_2
                                v1_1.d = arg10[x18_2 + 1]
                                x8_25 += zx.q(arg1) << 0x20 s>> 0x1e
                                v2.d = v3.d f* v2.d
                                unimplemented  {fnmsub s1, s4, s1, s2}
                                *x4_1 = v1_1.d
                            while (i_3 != 1)
                        
                        x15_2 += 2
                        x16_2 += 2
                        x18_2 += 2
                    while (x15_2 s< arg1)
                
                x12_3 += 1
                x13_7 += x10_5
                x14_7 += arg1
            while (x12_3 != lr)
    else if (lr s>= 2)
        uint64_t x11_7 = zx.q(x9.d) & 6
        uint64_t x8_10 = zx.q(arg1 - 3) & 0xfffffffe
        uint64_t x0 = zx.q(((arg1 - 3) u>> 1) + 1)
        int64_t x8_12 = x8_10 + 2 - x11_7
        void* x4 = arg8 + (x8_10 << 2) + 0xc
        int32_t x10_4 = 0
        int32_t x7 = arg3 * arg1
        int32_t x18_1 = 1
        int64_t i_40 = x0 & 0xfffffffc
        int32_t x8_16 = -1
        var_b0 = x7
        
        do
            int64_t x22_1 = sx.q(x8_16)
            
            if (arg3 s>= 1)
                int32_t x23_1 = 0
                int32_t var_90
                var_90.q = &arg10[1 + sx.q(x8_16)]
                int32_t var_98
                var_98.q = x8_12 + sx.q(x10_4 * arg1 - 1)
                int64_t x8_20 = zx.q(x10_4 * arg1 - 1) << 0x20 s>> 0x1e
                int32_t x11_9 = x7
                
                do
                    if (arg1 s>= 3)
                        int64_t x14_5 = sx.q(x11_9)
                        int32_t x8_23
                        int32_t x9_16
                        
                        if (x0.d u>= 4)
                            x8_23 = var_b0 + var_b0 * x10_4 + x23_1 * arg1
                            int64_t x9_12 = zx.q(x8_23) << 0x20 s>> 0x1e
                            x9_16 = ((&arg8[1] + x9_12 u< arg10 + (x8_10 << 2) + 0xc + x8_20 ? 1
                                : 0) & (&arg10[1] + x8_20 u< x4 + x9_12 ? 1 : 0)) | ((
                                &arg8[1] u< arg6 + (x8_10 << 2) + 0xc ? 1 : 0)
                                & (&arg6[1] u< x4 ? 1 : 0))
                        
                        int32_t x1_2
                        int64_t x8_21
                        
                        if (x0.d u>= 4 && (x9_16 & 1) == 0)
                            int64_t x9_9 = zx.q(x11_9) << 0x20 s>> 0x1e
                            void* x2 = &arg8[1] + x9_9
                            int64_t i_20 = i_40
                            void* x1_1 = &arg6[1] + x9_9
                            x14_5 = x8_12 + sx.q(x8_23)
                            void* x9_11 = var_90.q
                            int64_t i_4
                            
                            do
                                v3 = *x9_11
                                v1_1 = *(x9_11 + 0x10)
                                v4 = *x1_1
                                v2 = *(x1_1 + 0x10)
                                v5.d = *x9_11
                                v6.d = *(x9_11 + 4)
                                v5:4.d = *(x9_11 + 8)
                                v6:4.d = *(x9_11 + 0xc)
                                v5:8.d = *(x9_11 + 0x10)
                                v6:8.d = *(x9_11 + 0x14)
                                v5:0xc.d = *(x9_11 + 0x18)
                                v6:0xc.d = *(x9_11 + 0x1c)
                                x9_11 += 0x20
                                v16.d = *x1_1
                                v17.d = *(x1_1 + 4)
                                v16:4.d = *(x1_1 + 8)
                                v17:4.d = *(x1_1 + 0xc)
                                v16:8.d = *(x1_1 + 0x10)
                                v17:8.d = *(x1_1 + 0x14)
                                v16:0xc.d = *(x1_1 + 0x18)
                                v17:0xc.d = *(x1_1 + 0x1c)
                                x1_1 += 0x20
                                i_4 = i_20
                                i_20 -= 4
                                float128 v1_2 = vmulq_f32(v2, v1_1, 0)
                                uint128_t v2_1 = vmulq_f32(v4, v3, 0)
                                uint128_t v3_1 = vuzp1q_s32(v2_1, v1_2)
                                v1_1 = vuzp2q_s32(v2_1, v1_2)
                                v2 = vmulq_f32(v16, v6, 0)
                                v3 = vaddq_f32(v1_1, v3_1)
                                v4 = vfmaq_f32(vnegq_f32(v2), v5, v17)
                                *x2 = v3.d
                                *(x2 + 4) = v4.d
                                *(x2 + 8) = v3:4.d
                                *(x2 + 0xc) = v4:4.d
                                *(x2 + 0x10) = v3:8.d
                                *(x2 + 0x14) = v4:8.d
                                *(x2 + 0x18) = v3:0xc.d
                                *(x2 + 0x1c) = v4:0xc.d
                                x2 += 0x20
                            while (i_4 != 4)
                            x8_21 = var_98.q
                            x1_2 = ((arg1 + 1) & 0xfffffffe) - x11_7.d
                            
                            if (i_40 != x0)
                                goto label_109208c
                        else
                            x1_2 = 2
                            x8_21 = x22_1
                        label_109208c:
                            void* x2_1 = &arg10[2 + x8_21]
                            void* x14_6 = &arg6[2 + x14_5]
                            void* x3 = &arg8[2 + x14_5]
                            
                            do
                                v1_1.d = *(x2_1 - 4)
                                v3.d = *x2_1
                                v2.d = *(x14_6 - 4)
                                v4.d = *x14_6
                                x1_2 += 2
                                v1_1.d = v2.d f* v1_1.d
                                v1_1.d = vfma_f32(v1_1.d, v4.d, v3.d)
                                *(x3 - 4) = v1_1.d
                                v1_1.d = *(x2_1 - 4)
                                v2.d = *x2_1
                                v3.d = *(x14_6 - 4)
                                v4.d = *x14_6
                                x2_1 += 8
                                x14_6 += 8
                                v2.d = v3.d f* v2.d
                                unimplemented  {fnmsub s1, s4, s1, s2}
                                *x3 = v1_1.d
                                x3 += 8
                            while (x1_2 s< arg1)
                    
                    x23_1 += 1
                    x11_9 += arg1
                while (x23_1 != arg3)
            
            lr = arg2
            x18_1 += 1
            x8_16 = x22_1.d + arg1
            x7 += var_b0
            x10_4 += 1
        while (x18_1 != lr)
    
    if (x8_1 s>= arg3)
        x28 = var_7c
        
        if (lr s>= 3)
            int32_t x9_19 = arg3 * arg1
            int64_t x10_7 = zx.q(arg1) << 0x20 s>> 0x1e
            int32_t x12_5 = 1
            int32_t x11_12 = x9_19 * x8_6
            int32_t x13_9 = x9_19
            
            do
                if (arg3 s>= 1)
                    int32_t x14_10 = 0
                    int32_t* x17_4 = arg8
                    int32_t* x18_5 = arg6
                    
                    do
                        if (arg1 s>= 3)
                            int32_t x0_2 = 2
                            int64_t x8_34 = (zx.q(x13_9) << 0x20 s>> 0x1e) + 8
                            int64_t x1_7 = (zx.q(x11_12) << 0x20 s>> 0x1e) + 4
                            
                            do
                                void* x2_5 = x17_4 + x8_34
                                void* x3_4 = x17_4 + x1_7
                                v1_1.d = *(x2_5 - 4)
                                v2.d = *x3_4
                                void* x4_4 = x18_5 + x8_34
                                void* x5_1 = x18_5 + x1_7
                                x0_2 += 2
                                v1_1.d = v2.d f+ v1_1.d
                                *(x4_4 - 4) = v1_1.d
                                v1_1.d = *x2_5
                                v2.d = *(x3_4 + 4)
                                x1_7 += 8
                                x8_34 += 8
                                v1_1.d = v1_1.d f- v2.d
                                *x5_1 = v1_1.d
                                v1_1.d = *x2_5
                                v2.d = *(x3_4 + 4)
                                v1_1.d = v2.d f+ v1_1.d
                                *x4_4 = v1_1.d
                                v1_1.d = *x3_4
                                v2.d = *(x2_5 - 4)
                                v1_1.d = v1_1.d f- v2.d
                                *(x5_1 + 4) = v1_1.d
                            while (x0_2 s< arg1)
                        
                        x14_10 += 1
                        x18_5 += x10_7
                        x17_4 += x10_7
                    while (x14_10 != arg3)
                
                x12_5 += 1
                x11_12 -= x9_19
                x13_9 += x9_19
            while (x12_5 s< x28)
    else
        x28 = var_7c
        
        if (lr s>= 3)
            int32_t x9_18 = arg3 * arg1
            int64_t x10_6 = sx.q(arg1)
            int32_t x14_9 = 2 + (arg3 - 1) * arg1
            int32_t x15_3 = 2 + (x8_6 * arg3 - 1) * arg1
            int32_t x16_3 = 1
            
            do
                if (arg1 s>= 3)
                    int32_t x17_3 = 2
                    int32_t x18_4 = x14_9
                    int32_t x0_1 = x15_3
                    
                    do
                        if (arg3 s>= 1)
                            int64_t x4_2 = (x10_6 + sx.q(x0_1)) << 2
                            int64_t x1_6 = 0
                            int32_t i_21 = arg3
                            int32_t i_5
                            
                            do
                                void* x6_1 = &arg8[x10_6 + sx.q(x18_4)] + x1_6
                                void* x7_1 = arg8 - 4 + x4_2 + x1_6
                                v1_1.d = *(x6_1 - 4)
                                v2.d = *x7_1
                                void* x22_2 = &arg6[x10_6 + sx.q(x18_4)] + x1_6
                                void* x23_2 = arg6 - 4 + x4_2 + x1_6
                                i_5 = i_21
                                i_21 -= 1
                                v1_1.d = v2.d f+ v1_1.d
                                *(x22_2 - 4) = v1_1.d
                                v1_1.d = *x6_1
                                v2.d = *(x7_1 + 4)
                                x1_6 += zx.q(arg1) << 0x20 s>> 0x1e
                                v1_1.d = v1_1.d f- v2.d
                                *x23_2 = v1_1.d
                                v1_1.d = *x6_1
                                v2.d = *(x7_1 + 4)
                                v1_1.d = v2.d f+ v1_1.d
                                *x22_2 = v1_1.d
                                v1_1.d = *x7_1
                                v2.d = *(x6_1 - 4)
                                v1_1.d = v1_1.d f- v2.d
                                *(x23_2 + 4) = v1_1.d
                            while (i_5 != 1)
                        
                        x17_3 += 2
                        x0_1 += 2
                        x18_4 += 2
                    while (x17_3 s< arg1)
                
                x16_3 += 1
                x15_3 -= x9_18
                x14_9 += x9_18
            while (x16_3 s< x28)

if (arg4 s>= 1)
    int64_t i_37 = 0
    uint64_t x10_8 = zx.q(arg4)
    
    if (arg4 u< 8)
    label_1092430:
        int64_t x12_7 = i_37 << 2
        void* x8_38 = arg7 + x12_7
        void* x12_8 = arg9 + x12_7
        int64_t i_24 = x10_8 - i_37
        int64_t i_6
        
        do
            int32_t x11_14 = *x12_8
            x12_8 += 4
            i_6 = i_24
            i_24 -= 1
            *x8_38 = x11_14
            x8_38 += 4
        while (i_6 != 1)
    else
        uint64_t x8_35 = x10_8 << 2
        
        if (arg9 + x8_35 u> arg7)
            i_37 = 0
        
        if (arg9 + x8_35 u> arg7 && arg7 + x8_35 u> arg9)
            goto label_1092430
        
        i_37 = x10_8 & 0xfffffff8
        void* x8_37 = arg9 + 0x10
        void* x12_6 = arg7 + 0x10
        int64_t i_27 = i_37
        int64_t i_7
        
        do
            v1_1 = *(x8_37 - 0x10)
            v2 = *x8_37
            x8_37 += 0x20
            i_7 = i_27
            i_27 -= 8
            *(x12_6 - 0x10) = v1_1
            *x12_6 = v2
            x12_6 += 0x20
        while (i_7 != 8)
        
        if (i_37 != x10_8)
            goto label_1092430

if (lr s>= 3)
    int32_t x13_10 = (arg3 - 1) * arg1
    v1_1.d = fconvert.s(v0_2)
    result.d = fconvert.s(result.q)
    int32_t x10_9 = arg3 * arg1
    int64_t x11_15 = sx.q(arg1)
    int32_t x14_12 = not.d(arg3) * arg1 + arg4 * lr
    int32_t x15_5 = 1
    
    do
        if (arg3 s>= 1)
            int64_t x8_41 = 0
            void* x16_7 = &arg8[x11_15 + sx.q(x14_12)]
            void* x18_7 = &arg8[x11_15 + sx.q(x13_10)]
            int32_t i_19 = arg3
            int32_t i_8
            
            do
                v2.d = *(x18_7 + x8_41)
                v3.d = *(x16_7 + x8_41)
                i_8 = i_19
                i_19 -= 1
                v2.d = v3.d f+ v2.d
                *(&arg6[x11_15 + sx.q(x13_10)] + x8_41) = v2.d
                v2.d = *(x16_7 + x8_41)
                v3.d = *(x18_7 + x8_41)
                v2.d = v2.d f- v3.d
                *(&arg6[x11_15 + sx.q(x14_12)] + x8_41) = v2.d
                x8_41 += zx.q(arg1) << 0x20 s>> 0x1e
            while (i_8 != 1)
        
        x15_5 += 1
        x13_10 += x10_9
        x14_12 -= x10_9
    while (x15_5 s< x28)
    
    if (lr s>= 3)
        int32_t x11_16 = arg4 << 1
        uint64_t x11_17 = zx.q(arg4)
        int32_t x16_8 = (lr - 1) * arg4
        int32_t x8_43 = (lr - 2) * arg4
        int64_t var_88
        var_88.d = neg.d(arg4)
        int64_t x9_22 = zx.q(arg4) << 0x20 s>> 0x1e
        int64_t x8_44 = (zx.q(arg4 - 1) + 1) << 2
        uint64_t x10_11 = x11_17 << 2
        int64_t x13_11 = sx.q(arg4)
        void* x9_23 = arg7 + x9_22
        void* x18_8 = arg9 + x8_44
        void* x26_1 = arg7 + x8_44
        void* x8_45 = arg9 + x10_11
        uint64_t x14_13 = zx.q(arg4) & 3
        void* x8_46 = arg7 + x10_11
        int64_t i_35 = zx.q(arg4 - 1) + 1 - x14_13
        int64_t i_39 = x11_17 & 0xfffffffc
        void* x8_47 = arg7 + ((x13_11 + x11_17) << 2)
        int64_t x8_48 = zx.q(x16_8) << 0x20 s>> 0x1e
        int64_t x17_7 = sx.q(x16_8)
        void* x8_49 = arg7 + x8_48
        int32_t x12_10 = 0
        v2.d = 0f
        v3.d = fconvert.s(1f)
        void* x8_51 = arg7 + ((x17_7 + x11_17) << 2)
        int32_t x11_18 = 1
        int32_t x9_27 = x16_8
        int32_t x10_12 = arg4
        
        do
            int64_t x8_52 = sx.q(x9_27)
            void* x9_28 = arg9 + (sx.q(x9_27) << 2)
            int64_t x9_29 = sx.q(x10_12)
            int32_t var_a8
            var_a8.q = arg9 + (sx.q(x10_12) << 2)
            uint64_t x11_19 = zx.q(x16_8 + x12_10 * var_88.d)
            v4.d = v2.d f* result.d
            v2.d = v2.d f* v1_1.d
            int64_t x13_13 = zx.q(arg4 + x12_10 * arg4) << 0x20 s>> 0x1e
            v2.d = vfma_f32(v2.d, v3.d, result.d)
            void* x22_3 = arg9 + x13_13
            unimplemented  {fnmsub s3, s3, s1, s4}
            
            if (arg4 s>= 1)
                int64_t x0_5 = x17_7
                int64_t x14_14 = x13_11
                int64_t i_41 = 0
                int64_t x10_15 = x8_52
                int64_t x17_8 = x9_29
                
                if (arg4 u<= 3)
                    goto label_10927a0
                
                int64_t x10_16 = (x11_19 & 0xffffffff) << 0x20 s>> 0x1e
                void* x5_2 = arg9 + x10_16
                void* x7_2 = x8_45 + x10_16
                void* x0_6 = x8_45 + x13_13
                var_b0.q = x11_19
                
                if (((x22_3 u< x7_2 ? 1 : 0) & (x5_2 u< x0_6 ? 1 : 0) & 1) != 0)
                    x0_5 = x17_7
                    x14_14 = x13_11
                    lr = arg2
                    x11_19 = var_b0.q
                label_1092790:
                    i_41 = 0
                    x10_15 = x8_52
                    x17_8 = x9_29
                label_10927a0:
                    void* x10_24 = arg9 + (x10_15 << 2)
                    void* x0_9 = arg7 + (x0_5 << 2)
                    void* x14_17 = arg7 + (x14_14 << 2)
                    void* x17_10 = arg9 + (x17_8 << 2)
                    void* x1_10 = arg7 + (i_41 << 2)
                    int64_t i_30 = x11_17 - i_41
                    int64_t i_9
                    
                    do
                        v4.d = *x1_10
                        x1_10 += 4
                        v5.d = *x14_17
                        x14_17 += 4
                        i_9 = i_30
                        i_30 -= 1
                        v4.d = vfma_f32(v4.d, v5.d, v3.d)
                        *x17_10 = v4.d
                        x17_10 += 4
                        v4.d = *x0_9
                        x0_9 += 4
                        v4.d = v4.d f* v2.d
                        *x10_24 = v4.d
                        x10_24 += 4
                    while (i_9 != 1)
                else
                    lr = arg2
                    x11_19 = var_b0.q
                    
                    if (((x22_3 u< x8_46 ? 1 : 0) & (x0_6 u> arg7 ? 1 : 0) & 1) != 0
                            || ((x22_3 u< x8_47 ? 1 : 0) & (x9_23 u< x0_6 ? 1 : 0) & 1) != 0
                            || ((x22_3 u< x8_51 ? 1 : 0) & (x8_49 u< x0_6 ? 1 : 0) & 1) != 0
                            || ((x5_2 u< x8_46 ? 1 : 0) & (x7_2 u> arg7 ? 1 : 0) & 1) != 0
                            || ((x5_2 u< x8_47 ? 1 : 0) & (x9_23 u< x7_2 ? 1 : 0) & 1) != 0)
                        x0_5 = x17_7
                        x14_14 = x13_11
                        goto label_1092790
                    
                    x0_5 = x17_7
                    x14_14 = x13_11
                    i_41 = 0
                    x10_15 = x8_52
                    x17_8 = x9_29
                    
                    if (((x5_2 u< x8_51 ? 1 : 0) & (x8_49 u< x7_2 ? 1 : 0) & 1) != 0)
                        goto label_10927a0
                    
                    int64_t i_28 = i_39
                    float128* x18_10 = var_a8.q
                    void* x16_11 = x9_28
                    v4 = vdupq_laneq_s32(v3, 0)
                    x10_15 = i_28 + x8_52
                    x17_8 = i_28 + x9_29
                    v5 = vdupq_laneq_s32(v2, 0)
                    void* x0_8 = arg7
                    int64_t i_10
                    
                    do
                        i_10 = i_28
                        i_28 -= 4
                        *x18_10 = vfmaq_f32(*x0_8, v4, *(x0_8 + x9_22))
                        x18_10 = &x18_10[1]
                        float128 v6_1 = *(x0_8 + x8_48)
                        x0_8 += 0x10
                        *x16_11 = vmulq_f32(v6_1, v5, 0)
                        x16_11 += 0x10
                    while (i_10 != 4)
                    i_41 = i_39
                    x0_5 = i_39 + x17_7
                    x14_14 = i_39 + x13_11
                    
                    if (i_41 != x11_17)
                        goto label_10927a0
            
            if (lr s>= 5)
                int64_t x10_25 = (x11_19 & 0xffffffff) << 0x20 s>> 0x1e
                void* x6_4 = arg9 + x10_25
                int32_t x0_10 = x11_16
                void* x1_11 = x18_8 + x10_25
                void* x11_22 = x18_8 + x13_13
                int32_t x3_6 = x8_43
                var_b0.q = i_35 + x9_29
                int32_t x5_4 = 0
                int32_t x18_11 = 2
                v4 = v2
                
                do
                    v6.d = v4.d f* v2.d
                    v4.d = v4.d f* v3.d
                    v4.d = vfma_f32(v4.d, v3.d, v2.d)
                    unimplemented  {fnmsub s5, s5, s3, s6}
                    
                    if (arg4 s>= 1)
                        int64_t x17_11 = sx.q(x0_10)
                        int64_t x10_27 = sx.q(x3_6)
                        
                        if (zx.q(arg4 - 1) + 1 u< 4)
                            goto label_1092970
                        
                        int64_t x13_18 = zx.q(x11_16 + x5_4 * arg4) << 0x20 s>> 0x1e
                        void* x7_4 = x26_1 + x13_18
                        void* x2_8 = arg7 + x13_18
                        int64_t x14_20 = zx.q(x8_43 + x5_4 * var_88.d) << 0x20 s>> 0x1e
                        void* lr_3 = x26_1 + x14_20
                        void* x28_1 = arg7 + x14_20
                        int32_t x14_24
                        int64_t x16_13
                        int64_t lr_4
                        
                        if (((((x22_3 u< x1_11 ? 1 : 0) & (x6_4 u< x11_22 ? 1 : 0))
                                | ((x22_3 u< x7_4 ? 1 : 0) & (x2_8 u< x11_22 ? 1 : 0))) & 1) != 0
                                || ((x22_3 u< lr_3 ? 1 : 0) & (x28_1 u< x11_22 ? 1 : 0) & 1) != 0
                                || ((x6_4 u< x7_4 ? 1 : 0) & (x2_8 u< x1_11 ? 1 : 0) & 1) != 0)
                            x28 = var_7c
                        label_1092970:
                            x14_24 = 0
                            x16_13 = x9_29
                            lr_4 = x8_52
                        label_109297c:
                            void* x2_11 = arg9 + (x16_13 << 2)
                            void* x16_14 = arg9 + (lr_4 << 2)
                            void* x17_12 = arg7 + (x17_11 << 2)
                            void* x10_28 = arg7 + (x10_27 << 2)
                            int32_t i_29 = arg4 - x14_24
                            int32_t i_11
                            
                            do
                                v6.d = *x17_12
                                x17_12 += 4
                                v7.d = *x2_11
                                i_11 = i_29
                                i_29 -= 1
                                v6.d = vfma_f32(v7.d, v6.d, v3.d)
                                *x2_11 = v6.d
                                x2_11 += 4
                                v6.d = *x10_28
                                x10_28 += 4
                                v7.d = *x16_14
                                v6.d = vfma_f32(v7.d, v6.d, v4.d)
                                *x16_14 = v6.d
                                x16_14 += 4
                            while (i_11 != 1)
                        else
                            x28 = var_7c
                            x14_24 = 0
                            x16_13 = x9_29
                            lr_4 = x8_52
                            
                            if (((x6_4 u< lr_3 ? 1 : 0) & (x28_1 u< x1_11 ? 1 : 0) & 1) != 0)
                                goto label_109297c
                            
                            float128* x28_3 = var_a8.q
                            int128_t* x7_6 = x9_28
                            void* x14_25 = arg7 + (sx.q(x3_6) << 2)
                            void* x2_10 = arg7 + (sx.q(x0_10) << 2)
                            x17_11 += i_35
                            x10_27 += i_35
                            v6 = vdupq_laneq_s32(v3, 0)
                            v7 = vdupq_laneq_s32(v4, 0)
                            int64_t i_31 = i_35
                            float128* lr_5 = x28_3
                            int128_t* x13_21 = x7_6
                            int64_t i_12
                            
                            do
                                v16 = *x2_10
                                x2_10 += 0x10
                                v17 = *lr_5
                                lr_5 = &lr_5[1]
                                i_12 = i_31
                                i_31 -= 4
                                *x28_3 = vfmaq_f32(v17, v6, v16)
                                v16 = *x14_25
                                x14_25 += 0x10
                                float128 v17_1 = *x13_21
                                x13_21 = &x13_21[1]
                                x28_3 = lr_5
                                *x7_6 = vfmaq_f32(v17_1, v7, v16)
                                x7_6 = x13_21
                            while (i_12 != 4)
                            lr_4 = i_35 + x8_52
                            x16_13 = var_b0.q
                            x28 = var_7c
                            x14_24 = i_35.d
                            
                            if (x14_13.d != 0)
                                goto label_109297c
                    
                    x18_11 += 1
                    x3_6 -= arg4
                    x0_10 += arg4
                    x5_4 += 1
                while (x18_11 s< x28)
            
            lr = arg2
            x10_12 = x9_29.d + arg4
            x9_27 = x8_52.d - arg4
            x11_18 += 1
            x12_10 += 1
        while (x11_18 s< x28)
        
        if (lr s>= 3)
            int32_t x9_30 = 0
            int32_t x15_7 = 1
            int32_t x16_15 = arg4
            int64_t i_38 = x11_17 & 0xfffffff8
            
            do
                if (arg4 s>= 1)
                    int64_t x17_13 = sx.q(x16_15)
                    int64_t i_42
                    
                    if (arg4 u>= 8)
                        int64_t x8_56 = zx.q(arg4 + x9_30 * arg4) << 0x20 s>> 0x1e
                        
                        if (arg7 + x10_11 + x8_56 u> arg9)
                            i_42 = 0
                        
                        if (arg7 + x10_11 + x8_56 u> arg9 && arg7 + x8_56 u< arg9 + x10_11)
                            goto label_1092aa8
                        
                        void* x8_58 = arg7 + 0x10 + (sx.q(x16_15) << 2)
                        x17_13 += i_38
                        int64_t i_33 = i_38
                        void* x0_11 = arg9 + 0x10
                        int64_t i_13
                        
                        do
                            result = *(x8_58 - 0x10)
                            v1_1 = *x8_58
                            v3 = *x0_11
                            i_13 = i_33
                            i_33 -= 8
                            x8_58 += 0x20
                            result = vaddq_f32(*(x0_11 - 0x10), result)
                            v1_1 = vaddq_f32(v3, v1_1)
                            *(x0_11 - 0x10) = result
                            *x0_11 = v1_1
                            x0_11 += 0x20
                        while (i_13 != 8)
                        i_42 = i_38
                        
                        if (i_38 != x11_17)
                            goto label_1092aa8
                    else
                        i_42 = 0
                    label_1092aa8:
                        void* x8_60 = arg7 + (x17_13 << 2)
                        void* x17_14 = arg9 + (i_42 << 2)
                        int64_t i_34 = x11_17 - i_42
                        int64_t i_14
                        
                        do
                            result.d = *x8_60
                            x8_60 += 4
                            v1_1.d = *x17_14
                            i_14 = i_34
                            i_34 -= 1
                            result.d = v1_1.d f+ result.d
                            *x17_14 = result.d
                            x17_14 += 4
                        while (i_14 != 1)
                
                x15_7 += 1
                x16_15 += arg4
                x9_30 += 1
            while (x15_7 s< x28)

int32_t* x6_5

if (arg1 s>= arg3)
    x6_5 = arg5
    
    if (arg3 s>= 1)
        int32_t x8_62 = lr * arg1
        uint64_t x14_28 = zx.q(arg1) & 7
        int64_t x9_31 = 0
        int64_t x10_31 = 0
        int64_t x11_26 = 0
        int64_t x12_26 = sx.q(arg1)
        void* x15_9 = &arg8[4]
        void* x17_16 = &x6_5[4]
        int64_t x18_13 = sx.q(x8_62)
        int64_t j_6 = x9 + 1 - x14_28
        
        do
            if (arg1 s>= 1)
                int32_t x8_63 = 0
                int64_t x2_12 = x10_31
                int64_t x3_7 = x11_26
                
                if (x9 + 1 u< 8)
                label_1092c24:
                    void* x2_16 = &x6_5[x2_12]
                    void* x3_10 = &arg8[x3_7]
                    int32_t j_5 = arg1 - x8_63
                    int32_t j
                    
                    do
                        int32_t x4_8 = *x3_10
                        x3_10 += 4
                        j = j_5
                        j_5 -= 1
                        *x2_16 = x4_8
                        x2_16 += 4
                    while (j != 1)
                else
                    int64_t x3_8 = x9_31 * x12_26
                    int64_t x2_13 = x9_31 * x18_13
                    
                    if (&x6_5[x2_13] u< &arg8[x9 + 1 + x3_8])
                        x8_63 = 0
                        x2_12 = x10_31
                        x3_7 = x11_26
                    
                    if (&x6_5[x2_13] u< &arg8[x9 + 1 + x3_8]
                            && &arg8[x3_8] u< &x6_5[x9 + 1 + x2_13])
                        goto label_1092c24
                    
                    x2_12 = x10_31 + j_6
                    x3_7 = x11_26 + j_6
                    int64_t j_4 = j_6
                    void* x4_7 = x17_16
                    void* x5_5 = x15_9
                    int64_t j_1
                    
                    do
                        result = *(x5_5 - 0x10)
                        v1_1 = *x5_5
                        x5_5 += 0x20
                        j_1 = j_4
                        j_4 -= 8
                        *(x4_7 - 0x10) = result
                        *x4_7 = v1_1
                        x4_7 += 0x20
                    while (j_1 != 8)
                    x8_63 = j_6.d
                    
                    if (x14_28.d != 0)
                        goto label_1092c24
            
            x9_31 += 1
            x11_26 += x12_26
            x10_31 += x18_13
            x15_9 += zx.q(arg1) << 0x20 s>> 0x1e
            x17_16 += zx.q(x8_62) << 0x20 s>> 0x1e
        while (x9_31.d != arg3)
else
    x6_5 = arg5
    
    if (arg1 s>= 1)
        int64_t i_15 = 0
        int32_t* x13_23 = arg8
        int32_t* x14_27 = x6_5
        
        do
            if (arg3 s>= 1)
                int32_t j_3 = arg3
                int32_t* x15_8 = x13_23
                int32_t* x16_16 = x14_27
                int32_t j_2
                
                do
                    int32_t x17_15 = *x15_8
                    j_2 = j_3
                    j_3 -= 1
                    x15_8 += zx.q(arg1) << 0x20 s>> 0x1e
                    *x16_16 = x17_15
                    x16_16 += zx.q(lr * arg1) << 0x20 s>> 0x1e
                while (j_2 != 1)
            
            i_15 += 1
            x14_27 = &x14_27[1]
            x13_23 = &x13_23[1]
        while (i_15 != zx.q(arg1))

int32_t x9_32 = arg1 << 1

if (lr s>= 3)
    int32_t x10_32 = arg3 * arg1
    int32_t x15_10 = x10_32 * (lr - 1)
    int32_t x13_26 = 1
    int32_t x14_29 = x9_32
    int32_t x8_66 = x10_32
    
    do
        int64_t x8_67 = sx.q(x8_66)
        int64_t x15_11 = sx.q(x15_10)
        
        if (arg3 s>= 1)
            void* x16_18 = &x6_5[sx.q(x14_29)]
            int32_t i_32 = arg3
            int32_t* x18_14 = arg8
            int32_t i_16
            
            do
                i_16 = i_32
                i_32 -= 1
                *(x16_18 - 4) = x18_14[x8_67]
                int32_t x0_14 = x18_14[x15_11]
                x18_14 += zx.q(arg1) << 0x20 s>> 0x1e
                *x16_18 = x0_14
                x16_18 += zx.q(lr * arg1) << 0x20 s>> 0x1e
            while (i_16 != 1)
        
        x13_26 += 1
        x15_10 = x15_11.d - x10_32
        x8_66 = x8_67.d + x10_32
        x14_29 += x9_32
    while (x13_26 s< x28)

if (arg1 != 1)
    if (x8_1 s>= arg3)
        if (lr s>= 3)
            int32_t x11_29 = arg3 * arg1
            int64_t x10_34 = sx.q(arg1)
            int64_t x15_13 = zx.q(arg1) << 0x20 s>> 0x1e
            int32_t x16_20 = x11_29 * (lr - 1)
            int64_t x17_19 = zx.q(lr * arg1) << 0x20 s>> 0x1e
            int32_t x18_17 = 1
            int32_t x0_16 = arg1
            int32_t x1_14 = x9_32
            int32_t x2_18 = x11_29
            
            do
                if (arg3 s>= 1)
                    int32_t x3_12 = 0
                    void* x4_10 = &x6_5[2 + sx.q(x1_14)]
                    void* x5_7 = &arg8[2 + sx.q(x2_18)]
                    void* x6_7 = x6_5 - 0xc + ((x10_34 + sx.q(x0_16)) << 2)
                    void* x7_8 = &arg8[2 + sx.q(x16_20)]
                    
                    do
                        if (arg1 s>= 3)
                            void* x21_1 = x7_8
                            void* x22_5 = x5_7
                            void* x23_6 = x4_10
                            void* x24_2 = x6_7
                            int64_t x25_2 = 2
                            
                            do
                                result.d = *(x22_5 - 4)
                                v1_1.d = *(x21_1 - 4)
                                x25_2 += 2
                                result.d = v1_1.d f+ result.d
                                *(x23_6 - 4) = result.d
                                result.d = *(x22_5 - 4)
                                v1_1.d = *(x21_1 - 4)
                                result.d = result.d f- v1_1.d
                                *x24_2 = result.d
                                result.d = *x22_5
                                v1_1.d = *x21_1
                                result.d = v1_1.d f+ result.d
                                *x23_6 = result.d
                                x23_6 += 8
                                result.d = *x21_1
                                x21_1 += 8
                                v1_1.d = *x22_5
                                x22_5 += 8
                                result.d = result.d f- v1_1.d
                                *(x24_2 + 4) = result.d
                                x24_2 -= 8
                            while (x25_2 s< x10_34)
                        
                        x3_12 += 1
                        x6_7 += x17_19
                        x4_10 += x17_19
                        x5_7 += x15_13
                        x7_8 += x15_13
                    while (x3_12 != arg3)
                
                x18_17 += 1
                x16_20 -= x11_29
                x2_18 += x11_29
                x1_14 += x9_32
                x0_16 += x9_32
            while (x18_17 s< x28)
    else if (lr s>= 3)
        int32_t x10_33 = arg3 * arg1
        int32_t x11_28 = x9_32 + 2
        int32_t x12_29 = x9_32 - 2
        int32_t x16_19 = 2 + x10_33 * (lr - 1)
        int32_t x17_17 = x10_33 + 2
        int32_t x0_15 = 1
        
        do
            if (arg1 s>= 3)
                int32_t x1_13 = 2
                int32_t x2_17 = x12_29
                int32_t x3_11 = x11_28
                int32_t x4_9 = x17_17
                int32_t x5_6 = x16_19
                
                do
                    if (arg3 s>= 1)
                        int64_t x6_6 = 0
                        int64_t x7_7 = 0
                        int32_t i_22 = arg3
                        int32_t i_17
                        
                        do
                            void* x26_2 = arg8 - 4 + (sx.q(x4_9) << 2) + x6_6
                            void* x27_1 = &arg8[sx.q(x5_6)] + x6_6
                            result.d = *x26_2
                            v1_1.d = *(x27_1 - 4)
                            int32_t* x28_4 = x6_5 - 4 + (sx.q(x3_11) << 2) + x7_7
                            int32_t* lr_6 = x6_5 - 4 + (sx.q(x2_17) << 2) + x7_7
                            i_17 = i_22
                            i_22 -= 1
                            result.d = v1_1.d f+ result.d
                            *x28_4 = result.d
                            result.d = *x26_2
                            v1_1.d = *(x27_1 - 4)
                            x7_7 += zx.q(lr * arg1) << 0x20 s>> 0x1e
                            x6_6 += zx.q(arg1) << 0x20 s>> 0x1e
                            result.d = result.d f- v1_1.d
                            *lr_6 = result.d
                            result.d = *(x26_2 + 4)
                            v1_1.d = *x27_1
                            result.d = v1_1.d f+ result.d
                            x28_4[1] = result.d
                            result.d = *x27_1
                            v1_1.d = *(x26_2 + 4)
                            result.d = result.d f- v1_1.d
                            lr_6[1] = result.d
                        while (i_17 != 1)
                    
                    x1_13 += 2
                    x5_6 += 2
                    x4_9 += 2
                    x3_11 += 2
                    x2_17 -= 2
                while (x1_13 s< arg1)
            
            x0_15 += 1
            x16_19 -= x10_33
            x17_17 += x10_33
            x11_28 += x9_32
            x12_29 += x9_32
        while (x0_15 s< var_7c)

return result
