// 函数: sub_109365c
// 地址: 0x109365c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x24 = arg7
double x = fconvert.d(6.28318548f / float.s(arg2))
int32_t i = arg3
double v0_2 = cos(x)
float128 result
float128 v1_1
float128 v2
float128 v3
float128 v4
float128 v5
float128 v6
float128 v7
float128 v16
float128 v17
result, v1_1, v2, v3, v4, v5, v6, v7, v16, v17 = sin(x)
uint64_t x9 = zx.q(arg1 - 1)

if (arg1 s>= i)
    if (i s>= 1)
        int32_t x2 = arg2 * arg1
        uint64_t x15_2 = zx.q(arg1) & 7
        int64_t x10_1 = 0
        int64_t x11_2 = 0
        int64_t x12_3 = 0
        int64_t x13_2 = sx.q(arg1)
        void* x16_2 = &arg8[4]
        void* x18_3 = &arg5[4]
        int64_t x0_1 = sx.q(x2)
        int64_t j_7 = x9 + 1 - x15_2
        
        do
            if (arg1 s>= 1)
                int32_t x5 = 0
                int64_t x3 = x11_2
                int64_t x4 = x12_3
                
                if (x9 + 1 u< 8)
                label_1093818:
                    void* x4_3 = &arg8[x4]
                    int32_t j_5 = arg1 - x5
                    void* x3_4 = &arg5[x3]
                    int32_t j
                    
                    do
                        int32_t x6_5 = *x3_4
                        x3_4 += 4
                        j = j_5
                        j_5 -= 1
                        *x4_3 = x6_5
                        x4_3 += 4
                    while (j != 1)
                else
                    int64_t x4_1 = x10_1 * x0_1
                    int64_t x3_1 = x10_1 * x13_2
                    
                    if (&arg8[x3_1] u< &arg5[x9 + 1 + x4_1])
                        x5 = 0
                        x3 = x11_2
                        x4 = x12_3
                    
                    if (&arg8[x3_1] u< &arg5[x9 + 1 + x4_1] && &arg5[x4_1] u< &arg8[x9 + 1 + x3_1])
                        goto label_1093818
                    
                    x3 = x11_2 + j_7
                    x4 = x12_3 + j_7
                    int64_t j_4 = j_7
                    void* x6_3 = x18_3
                    void* x7_1 = x16_2
                    int64_t j_1
                    
                    do
                        v1_1 = *(x6_3 - 0x10)
                        v2 = *x6_3
                        j_1 = j_4
                        j_4 -= 8
                        x6_3 += 0x20
                        *(x7_1 - 0x10) = v1_1
                        *x7_1 = v2
                        x7_1 += 0x20
                    while (j_1 != 8)
                    x5 = j_7.d
                    
                    if (x15_2.d != 0)
                        goto label_1093818
            
            x10_1 += 1
            x12_3 += x13_2
            x11_2 += x0_1
            x16_2 += zx.q(arg1) << 0x20 s>> 0x1e
            x18_3 += zx.q(x2) << 0x20 s>> 0x1e
        while (x10_1.d != i)
else if (arg1 s>= 1)
    int32_t* x15_1 = arg5
    int64_t i_1 = 0
    int32_t* x14_1 = arg8
    
    do
        if (i s>= 1)
            int32_t x16_1 = i
            int32_t* x17_1 = x14_1
            int32_t* x18_1 = x15_1
            int32_t j_2
            
            do
                int32_t x0 = *x18_1
                x18_1 += zx.q(arg2 * arg1) << 0x20 s>> 0x1e
                j_2 = x16_1
                x16_1 -= 1
                *x17_1 = x0
                x17_1 += zx.q(arg1) << 0x20 s>> 0x1e
            while (j_2 != 1)
        
        i_1 += 1
        x15_1 = &x15_1[1]
        x14_1 = &x14_1[1]
    while (i_1 != zx.q(arg1))

int32_t x10_2 = (arg2 + 1) s>> 1
uint64_t lr = zx.q(arg1 << 1)

if (arg2 s>= 3)
    int32_t x11_3 = i * arg1
    int64_t x13_3 = (lr & 0xffffffff) << 0x20 s>> 0x1e
    int32_t x8_2 = x11_3 * (arg2 - 1)
    void* x14_4 = arg5 + x13_3
    int32_t x16_3 = 1
    int32_t x17_3 = x11_3
    
    do
        int64_t x8_3 = sx.q(x8_2)
        int64_t x17_4 = sx.q(x17_3)
        
        if (i s>= 1)
            int32_t i_29 = i
            void* x0_2 = x14_4
            int32_t* x1 = arg8
            int32_t i_2
            
            do
                v1_1.d = *(x0_2 - 4)
                i_2 = i_29
                i_29 -= 1
                v1_1.d = v1_1.d f+ v1_1.d
                x1[x17_4] = v1_1.d
                v1_1.d = *x0_2
                x0_2 += zx.q(arg2 * arg1) << 0x20 s>> 0x1e
                v1_1.d = v1_1.d f+ v1_1.d
                x1[x8_3] = v1_1.d
                x1 += zx.q(arg1) << 0x20 s>> 0x1e
            while (i_2 != 1)
        
        x16_3 += 1
        x17_3 = x17_4.d + x11_3
        x8_2 = x8_3.d - x11_3
        x14_4 += x13_3
    while (x16_3 s< x10_2)

int32_t x8_5 = x9.d s>> 1
int32_t i_16 = i
void* var_90 = x24
int32_t x26_1

if (arg1 == 1)
label_1093b64:
    x26_1 = arg2
    
    if (x26_1 s>= 3)
        int32_t x9_4 = arg4 << 1
        uint64_t x13_7 = zx.q(arg4)
        int32_t* var_88
        var_88.d = neg.d(arg4)
        int64_t x16_8 = zx.q(arg4) << 0x20 s>> 0x1e
        int32_t x8_17 = (x26_1 - 2) * arg4
        int64_t x15_8 = sx.q(arg4)
        uint64_t x8_18 = x13_7 << 2
        void* x9_6 = arg9 + x16_8
        int32_t x12_7 = x26_1 - 1
        void* x1_3 = x24 + x8_18
        void* x8_19 = arg9 + x8_18
        int32_t x18_6 = x12_7 * arg4
        int64_t i_33 = x13_7 & 0xfffffffc
        void* x8_20 = arg9 + ((x15_8 + x13_7) << 2)
        int64_t x8_21 = zx.q(x18_6) << 0x20 s>> 0x1e
        int64_t x0_5 = sx.q(x18_6)
        int64_t x12_8 = (zx.q(arg4 - 1) + 1) << 2
        void* x8_22 = arg9 + x8_21
        void* x9_9 = x24 + x12_8
        uint64_t x17_8 = zx.q(arg4) & 3
        void* x9_10 = arg9 + x12_8
        void* x8_24 = arg9 + ((x0_5 + x13_7) << 2)
        int32_t x14_7 = 0
        v1_1.d = fconvert.s(v0_2)
        result.d = fconvert.s(result.q)
        v2.d = 0f
        v3.d = fconvert.s(1f)
        int64_t i_34 = zx.q(arg4 - 1) + 1 - x17_8
        int32_t x13_8 = 1
        int32_t x8_25 = arg4
        int32_t x12_10 = x18_6
        
        do
            int64_t x7_4 = sx.q(x12_10)
            void* x12_12 = x24 + (sx.q(x12_10) << 2)
            int64_t x27_2 = sx.q(x8_25)
            void* x8_26 = x24 + (sx.q(x8_25) << 2)
            v4.d = v2.d f* result.d
            v2.d = v2.d f* v1_1.d
            int64_t x8_28 = zx.q(arg4 + x14_7 * arg4) << 0x20 s>> 0x1e
            uint64_t x2_4 = zx.q(x18_6 + x14_7 * var_88.d)
            v2.d = vfma_f32(v2.d, v3.d, result.d)
            void* x5_4 = x24 + x8_28
            unimplemented  {fnmsub s3, s3, s1, s4}
            
            if (arg4 s>= 1)
                int64_t x0_6 = x0_5
                int64_t x17_9 = x15_8
                int64_t i_35 = 0
                int64_t x12_11 = x27_2
                int64_t x15_9 = x7_4
                
                if (arg4 u< 4)
                    goto label_1093cec
                
                int64_t x12_17 = (x2_4 & 0xffffffff) << 0x20 s>> 0x1e
                void* x21_1 = x1_3 + x12_17
                void* x14_9 = x1_3 + x8_28
                void* x4_7 = x24 + x12_17
                
                if (((x5_4 u< x21_1 ? 1 : 0) & (x4_7 u< x14_9 ? 1 : 0) & 1) != 0)
                    x0_6 = x0_5
                    x17_9 = x15_8
                    i_35 = 0
                    x12_11 = x27_2
                    x15_9 = x7_4
                label_1093cec:
                    int32_t* x12_14 = x24 + (x12_11 << 2)
                    int32_t* x15_10 = x24 + (x15_9 << 2)
                    void* x18_7 = arg9 + (i_35 << 2)
                    int64_t i_25 = x13_7 - i_35
                    void* x17_10 = arg9 + (x17_9 << 2)
                    void* x0_7 = arg9 + (x0_6 << 2)
                    int64_t i_3
                    
                    do
                        v4.d = *x18_7
                        x18_7 += 4
                        v5.d = *x17_10
                        x17_10 += 4
                        i_3 = i_25
                        i_25 -= 1
                        v4.d = vfma_f32(v4.d, v5.d, v3.d)
                        *x12_14 = v4.d
                        x12_14 = &x12_14[1]
                        v4.d = *x0_7
                        x0_7 += 4
                        v4.d = v4.d f* v2.d
                        *x15_10 = v4.d
                        x15_10 = &x15_10[1]
                    while (i_3 != 1)
                else
                    if (((x5_4 u< x8_19 ? 1 : 0) & (x14_9 u> arg9 ? 1 : 0) & 1) != 0
                            || ((x5_4 u< x8_20 ? 1 : 0) & (x9_6 u< x14_9 ? 1 : 0) & 1) != 0
                            || ((x5_4 u< x8_24 ? 1 : 0) & (x8_22 u< x14_9 ? 1 : 0) & 1) != 0
                            || ((x4_7 u< x8_19 ? 1 : 0) & (x21_1 u> arg9 ? 1 : 0) & 1) != 0
                            || ((x4_7 u< x8_20 ? 1 : 0) & (x9_6 u< x21_1 ? 1 : 0) & 1) != 0)
                        x0_6 = x0_5
                        x17_9 = x15_8
                        i_35 = 0
                        x12_11 = x27_2
                        x15_9 = x7_4
                        goto label_1093cec
                    
                    x0_6 = x0_5
                    x17_9 = x15_8
                    i_35 = 0
                    x12_11 = x27_2
                    x15_9 = x7_4
                    
                    if (((x4_7 u< x8_24 ? 1 : 0) & (x8_22 u< x21_1 ? 1 : 0) & 1) != 0)
                        goto label_1093cec
                    
                    int64_t i_26 = i_33
                    void* x17_12 = x8_26
                    void* x18_10 = x12_12
                    v4 = vdupq_laneq_s32(v3, 0)
                    x12_11 = i_26 + x27_2
                    x15_9 = i_26 + x7_4
                    v5 = vdupq_laneq_s32(v2, 0)
                    int128_t* x0_11 = arg9
                    int64_t i_4
                    
                    do
                        i_4 = i_26
                        i_26 -= 4
                        *x17_12 = vfmaq_f32(*x0_11, v4, *(x0_11 + x16_8))
                        x17_12 += 0x10
                        float128 v6_1 = *(x0_11 + x8_21)
                        x0_11 = &x0_11[1]
                        *x18_10 = vmulq_f32(v6_1, v5, 0)
                        x18_10 += 0x10
                    while (i_4 != 4)
                    i_35 = i_33
                    x0_6 = i_33 + x0_5
                    x17_9 = i_33 + x15_8
                    
                    if (i_35 != x13_7)
                        goto label_1093cec
            
            if (x26_1 s>= 5)
                int64_t x12_15 = (x2_4 & 0xffffffff) << 0x20 s>> 0x1e
                void* x6_8 = x24 + x12_15
                int32_t x4_6 = x9_4
                void* x15_11 = x9_9 + x8_28
                void* x1_4 = x9_9 + x12_15
                int32_t x18_8 = x8_17
                int32_t x22_3 = 0
                int32_t x8_32 = 2
                v4 = v2
                
                do
                    v6.d = v4.d f* v2.d
                    v4.d = v4.d f* v3.d
                    v4.d = vfma_f32(v4.d, v3.d, v2.d)
                    unimplemented  {fnmsub s5, s5, s3, s6}
                    
                    if (arg4 s>= 1)
                        int64_t x28_4 = sx.q(x4_6)
                        int64_t x16_10 = sx.q(x18_8)
                        
                        if (zx.q(arg4 - 1) + 1 u< 4)
                            goto label_1093efc
                        
                        int64_t x12_27 = zx.q(x9_4 + x22_3 * arg4) << 0x20 s>> 0x1e
                        void* x2_7 = x9_10 + x12_27
                        int64_t x13_15 = zx.q(x8_17 + x22_3 * var_88.d) << 0x20 s>> 0x1e
                        void* x17_13 = arg9 + x12_27
                        void* x24_2 = x9_10 + x13_15
                        void* x21_3 = arg9 + x13_15
                        int32_t x2_9
                        int64_t x13_12
                        int64_t x26_5
                        
                        if (((((x5_4 u< x1_4 ? 1 : 0) & (x6_8 u< x15_11 ? 1 : 0))
                                | ((x5_4 u< x2_7 ? 1 : 0) & (x17_13 u< x15_11 ? 1 : 0))) & 1) != 0)
                            x24 = var_90
                        label_1093efc:
                            x2_9 = 0
                            x13_12 = x27_2
                            x26_5 = x7_4
                        label_1094014:
                            int32_t* x17_16 = x24 + (x13_12 << 2)
                            int32_t* x13_19 = x24 + (x26_5 << 2)
                            void* x28_5 = arg9 + (x28_4 << 2)
                            void* x16_11 = arg9 + (x16_10 << 2)
                            int32_t i_19 = arg4 - x2_9
                            int32_t i_5
                            
                            do
                                v6.d = *x28_5
                                x28_5 += 4
                                v7.d = *x17_16
                                i_5 = i_19
                                i_19 -= 1
                                v6.d = vfma_f32(v7.d, v6.d, v3.d)
                                *x17_16 = v6.d
                                x17_16 = &x17_16[1]
                                v6.d = *x16_11
                                x16_11 += 4
                                v7.d = *x13_19
                                v6.d = vfma_f32(v7.d, v6.d, v4.d)
                                *x13_19 = v6.d
                                x13_19 = &x13_19[1]
                            while (i_5 != 1)
                        else
                            x24 = var_90
                            
                            if (((x5_4 u< x24_2 ? 1 : 0) & (x21_3 u< x15_11 ? 1 : 0) & 1) != 0
                                    || ((x6_8 u< x2_7 ? 1 : 0) & (x17_13 u< x1_4 ? 1 : 0) & 1)
                                    != 0)
                                goto label_1093efc
                            
                            x2_9 = 0
                            x13_12 = x27_2
                            x26_5 = x7_4
                            
                            if (((x6_8 u< x24_2 ? 1 : 0) & (x21_3 u< x1_4 ? 1 : 0) & 1) != 0)
                                goto label_1094014
                            
                            void* x14_16 = x8_26
                            void* x12_33 = x12_12
                            void* x2_10 = arg9 + (sx.q(x18_8) << 2)
                            void* x17_15 = arg9 + (sx.q(x4_6) << 2)
                            x28_4 += i_34
                            x16_10 += i_34
                            v6 = vdupq_laneq_s32(v3, 0)
                            v7 = vdupq_laneq_s32(v4, 0)
                            int64_t i_22 = i_34
                            void* x21_5 = x14_16
                            void* x26_7 = x12_33
                            int64_t i_6
                            
                            do
                                v16 = *x17_15
                                x17_15 += 0x10
                                v17 = *x21_5
                                x21_5 += 0x10
                                i_6 = i_22
                                i_22 -= 4
                                *x14_16 = vfmaq_f32(v17, v6, v16)
                                v16 = *x2_10
                                x2_10 += 0x10
                                float128 v17_1 = *x26_7
                                x26_7 += 0x10
                                x14_16 = x21_5
                                *x12_33 = vfmaq_f32(v17_1, v7, v16)
                                x12_33 = x26_7
                            while (i_6 != 4)
                            x13_12 = i_34 + x27_2
                            x26_5 = i_34 + x7_4
                            x2_9 = i_34.d
                            
                            if (x17_8.d != 0)
                                goto label_1094014
                    
                    x8_32 += 1
                    x18_8 -= arg4
                    x4_6 += arg4
                    x22_3 += 1
                while (x8_32 s< x10_2)
            
            x26_1 = arg2
            x12_10 = x7_4.d - arg4
            x8_25 = x27_2.d + arg4
            x13_8 += 1
            x14_7 += 1
        while (x13_8 s< x10_2)
        
        i = i_16
        
        if (x26_1 s>= 3)
            int32_t x8_33 = 0
            int32_t x13_21 = 1
            int32_t x14_18 = arg4
            void* x9_11 = arg9 + (x13_7 << 2)
            int64_t i_32 = x13_7 & 0xfffffff8
            
            do
                if (arg4 s>= 1)
                    int64_t x15_15 = sx.q(x14_18)
                    int64_t i_36
                    
                    if (arg4 u>= 8)
                        int64_t x16_13 = zx.q(arg4 + x8_33 * arg4) << 0x20 s>> 0x1e
                        
                        if (x9_11 + x16_13 u> arg9)
                            i_36 = 0
                        
                        if (x9_11 + x16_13 u> arg9 && arg9 + x16_13 u< x9_11)
                            goto label_1094130
                        
                        x15_15 += i_32
                        int64_t i_27 = i_32
                        int128_t* x18_11 = arg9
                        int64_t i_7
                        
                        do
                            void* x0_12 = x18_11 + (zx.q(x14_18) << 0x20 s>> 0x1e)
                            v1_1 = x18_11[1]
                            v3 = *(x0_12 + 0x10)
                            i_7 = i_27
                            i_27 -= 8
                            result = vaddq_f32(*x18_11, *x0_12)
                            v1_1 = vaddq_f32(v1_1, v3)
                            *x18_11 = result
                            x18_11[1] = v1_1
                            x18_11 = &x18_11[2]
                        while (i_7 != 8)
                        i_36 = i_32
                        
                        if (i_32 != x13_7)
                            goto label_1094130
                    else
                        i_36 = 0
                    label_1094130:
                        void* x15_16 = arg9 + (x15_15 << 2)
                        void* x16_17 = arg9 + (i_36 << 2)
                        int64_t i_28 = x13_7 - i_36
                        int64_t i_8
                        
                        do
                            result.d = *x15_16
                            x15_16 += 4
                            v1_1.d = *x16_17
                            i_8 = i_28
                            i_28 -= 1
                            result.d = v1_1.d f+ result.d
                            *x16_17 = result.d
                            x16_17 += 4
                        while (i_8 != 1)
                
                x13_21 += 1
                x14_18 += arg4
                x8_33 += 1
            while (x13_21 s< x10_2)
            
            if (x26_1 s>= 3)
                int32_t x8_34 = i * arg1
                int32_t x13_22 = 1
                int32_t x12_37 = x8_34 * x12_7
                int32_t x14_19 = x8_34
                
                do
                    if (i s>= 1)
                        int64_t x17_18 = zx.q(x12_37) << 0x20 s>> 0x1e
                        int64_t x0_13 = zx.q(x14_19) << 0x20 s>> 0x1e
                        int64_t x15_17 = 0
                        int32_t* x16_18 = arg6 + x17_18
                        int32_t* x18_13 = arg6 + x0_13
                        int32_t i_18 = i
                        int32_t i_9
                        
                        do
                            result.d = *(x18_13 + x15_17)
                            v1_1.d = *(x16_18 + x15_17)
                            i_9 = i_18
                            i_18 -= 1
                            result.d = result.d f- v1_1.d
                            *(arg8 + x0_13 + x15_17) = result.d
                            result.d = *(x18_13 + x15_17)
                            v1_1.d = *(x16_18 + x15_17)
                            result.d = v1_1.d f+ result.d
                            *(arg8 + x17_18 + x15_17) = result.d
                            x15_17 += zx.q(arg1) << 0x20 s>> 0x1e
                        while (i_9 != 1)
                    
                    x13_22 += 1
                    x14_19 += x8_34
                    x12_37 -= x8_34
                while (x13_22 s< x10_2)
    
    if (arg1 != 1)
        goto label_1094200
else
    if (x8_5 s< i)
        x26_1 = arg2
        
        if (x26_1 s< 3)
            goto label_1094200
        
        int32_t var_94_1 = lr.d - 2
        int32_t x13_4 = i * arg1
        int32_t x12_5 = lr.d + 2
        int32_t x17_6 = 2 + x13_4 * (x26_1 - 1)
        int32_t x18_4 = x13_4 + 2
        int32_t x1_1 = 1
        int32_t var_a0
        var_a0.q = lr
        
        do
            if (arg1 s>= 3)
                int32_t x6_6 = var_94_1
                int32_t x2_2 = 2
                int32_t x3_5 = x18_4
                int32_t x4_4 = x17_6
                int32_t x5_2 = x12_5
                
                do
                    if (i s>= 1)
                        int32_t i_30 = i_16
                        int64_t x7_2 = 0
                        int64_t x22_1 = 0
                        int32_t i_10
                        
                        do
                            void* x13_5 = arg5 - 4 + (sx.q(x5_2) << 2) + x7_2
                            void* x26_2 = &arg5[sx.q(x6_6)] + x7_2
                            v1_1.d = *x13_5
                            v2.d = *(x26_2 - 4)
                            void* x24_1 = arg8 - 4 + (sx.q(x3_5) << 2) + x22_1
                            void* x9_2 = arg8 - 4 + (sx.q(x4_4) << 2) + x22_1
                            i_10 = i_30
                            i_30 -= 1
                            v1_1.d = v2.d f+ v1_1.d
                            *x24_1 = v1_1.d
                            v1_1.d = *x13_5
                            v2.d = *(x26_2 - 4)
                            x22_1 += zx.q(arg1) << 0x20 s>> 0x1e
                            x7_2 += zx.q(x26_1 * arg1) << 0x20 s>> 0x1e
                            v1_1.d = v1_1.d f- v2.d
                            *x9_2 = v1_1.d
                            v1_1.d = *(x13_5 + 4)
                            v2.d = *x26_2
                            v1_1.d = v1_1.d f- v2.d
                            *(x24_1 + 4) = v1_1.d
                            v1_1.d = *(x13_5 + 4)
                            v2.d = *x26_2
                            v1_1.d = v2.d f+ v1_1.d
                            *(x9_2 + 4) = v1_1.d
                        while (i_10 != 1)
                    
                    i = i_16
                    x2_2 += 2
                    x6_6 -= 2
                    x5_2 += 2
                    x4_4 += 2
                    x3_5 += 2
                while (x2_2 s< arg1)
            
            x24 = var_90
            x1_1 += 1
            x12_5 += var_a0
            var_94_1 += var_a0
            x17_6 -= x13_4
            x18_4 += x13_4
        while (x1_1 s< x10_2)
        
        goto label_1093b64
    
    x26_1 = arg2
    
    if (x26_1 s>= 3)
        int32_t x9_3 = i * arg1
        int64_t x13_6 = zx.q(arg1) << 0x20 s>> 0x1e
        int32_t x16_6 = x9_3 * (x26_1 - 1)
        int64_t x17_7 = zx.q(x26_1 * arg1) << 0x20 s>> 0x1e
        int32_t x18_5 = 1
        int32_t x0_4 = x9_3
        int32_t x1_2 = lr.d
        
        do
            if (i s>= 1)
                int64_t x8_15 = zx.q(x1_2) << 0x20 s>> 0x1e
                int32_t x2_3 = 0
                void* x3_6 = &arg8[2 + sx.q(x0_4)]
                void* x4_5 = &arg8[2 + sx.q(x16_6)]
                void* x5_3 = arg5 - 0xc + x8_15
                void* x6_7 = &arg5[2] + x8_15
                
                do
                    if (arg1 s>= 3)
                        int32_t x7_3 = 2
                        void* x22_2 = x6_7
                        void* x26_3 = x4_5
                        void* x27_1 = x5_3
                        void* x28_2 = x3_6
                        
                        do
                            v1_1.d = *(x22_2 - 4)
                            v2.d = *x27_1
                            x7_3 += 2
                            v1_1.d = v2.d f+ v1_1.d
                            *(x28_2 - 4) = v1_1.d
                            v1_1.d = *(x22_2 - 4)
                            v2.d = *x27_1
                            v1_1.d = v1_1.d f- v2.d
                            *(x26_3 - 4) = v1_1.d
                            v1_1.d = *x22_2
                            v2.d = *(x27_1 + 4)
                            v1_1.d = v1_1.d f- v2.d
                            *x28_2 = v1_1.d
                            x28_2 += 8
                            v1_1.d = *x22_2
                            x22_2 += 8
                            v2.d = *(x27_1 + 4)
                            x27_1 -= 8
                            v1_1.d = v2.d f+ v1_1.d
                            *x26_3 = v1_1.d
                            x26_3 += 8
                        while (x7_3 s< arg1)
                    
                    i = i_16
                    x2_3 += 1
                    x3_6 += x13_6
                    x5_3 += x17_7
                    x4_5 += x13_6
                    x6_7 += x17_7
                while (x2_3 != i)
            
            x18_5 += 1
            x1_2 += lr.d
            x16_6 -= x9_3
            x0_4 += x9_3
        while (x18_5 s< x10_2)
        
        goto label_1093b64
    
label_1094200:
    
    if (x8_5 s>= i)
        if (x26_1 s>= 3)
            int32_t x8_37 = i * arg1
            int64_t x9_14 = zx.q(arg1) << 0x20 s>> 0x1e
            int32_t x12_40 = x8_37 * (x26_1 - 1)
            int32_t x13_24 = 1
            int32_t x14_22 = x8_37
            
            do
                if (i s>= 1)
                    int32_t x15_19 = 0
                    int32_t* x18_15 = arg8
                    int32_t* x0_16 = arg6
                    
                    do
                        if (arg1 s>= 3)
                            int32_t x1_8 = 2
                            int64_t x2_12 = (zx.q(x14_22) << 0x20 s>> 0x1e) + 8
                            int64_t x3_9 = (zx.q(x12_40) << 0x20 s>> 0x1e) + 4
                            
                            do
                                void* x4_11 = x0_16 + x2_12
                                void* x5_7 = x0_16 + x3_9
                                result.d = *(x4_11 - 4)
                                v1_1.d = *(x5_7 + 4)
                                void* x6_11 = x18_15 + x2_12
                                void* x7_6 = x18_15 + x3_9
                                x1_8 += 2
                                result.d = result.d f- v1_1.d
                                *(x6_11 - 4) = result.d
                                result.d = *(x4_11 - 4)
                                v1_1.d = *(x5_7 + 4)
                                x3_9 += 8
                                x2_12 += 8
                                result.d = v1_1.d f+ result.d
                                *x7_6 = result.d
                                result.d = *x4_11
                                v1_1.d = *x5_7
                                result.d = v1_1.d f+ result.d
                                *x6_11 = result.d
                                result.d = *x4_11
                                v1_1.d = *x5_7
                                result.d = result.d f- v1_1.d
                                *(x7_6 + 4) = result.d
                            while (x1_8 s< arg1)
                        
                        x15_19 += 1
                        x0_16 += x9_14
                        x18_15 += x9_14
                    while (x15_19 != i)
                
                x13_24 += 1
                x12_40 -= x8_37
                x14_22 += x8_37
            while (x13_24 s< x10_2)
    else if (x26_1 s>= 3)
        int32_t x8_36 = i * arg1
        int32_t x14_21 = 2 + x8_36 * (x26_1 - 1)
        int32_t x15_18 = x8_36 + 2
        int32_t x16_19 = 1
        
        do
            if (arg1 s>= 3)
                int32_t x17_20 = 2
                int32_t x18_14 = x15_18
                int32_t x0_15 = x14_21
                
                do
                    if (i s>= 1)
                        int64_t x5_5 = zx.q(x0_15) << 0x20 s>> 0x1e
                        int64_t x4_9 = zx.q(x18_14) << 0x20 s>> 0x1e
                        int64_t x1_7 = 0
                        int32_t i_20 = i
                        int32_t i_11
                        
                        do
                            void* x7_5 = arg6 - 4 + x4_9 + x1_7
                            void* x21_6 = arg6 + x5_5 + x1_7
                            result.d = *x7_5
                            v1_1.d = *x21_6
                            void* x22_5 = arg8 - 4 + x4_9 + x1_7
                            void* x24_3 = arg8 + x5_5 + x1_7
                            i_11 = i_20
                            i_20 -= 1
                            result.d = result.d f- v1_1.d
                            *x22_5 = result.d
                            result.d = *x7_5
                            v1_1.d = *x21_6
                            x1_7 += zx.q(arg1) << 0x20 s>> 0x1e
                            result.d = v1_1.d f+ result.d
                            *(x24_3 - 4) = result.d
                            result.d = *(x7_5 + 4)
                            v1_1.d = *(x21_6 - 4)
                            result.d = v1_1.d f+ result.d
                            *(x22_5 + 4) = result.d
                            result.d = *(x7_5 + 4)
                            v1_1.d = *(x21_6 - 4)
                            result.d = result.d f- v1_1.d
                            *x24_3 = result.d
                        while (i_11 != 1)
                    
                    x17_20 += 2
                    x0_15 += 2
                    x18_14 += 2
                while (x17_20 s< arg1)
            
            x24 = var_90
            x16_19 += 1
            x14_21 -= x8_36
            x15_18 += x8_36
        while (x16_19 s< x10_2)
    
    if (arg4 s>= 1)
        int64_t i_31 = 0
        uint64_t x8_38 = zx.q(arg4)
        
        if (arg4 u<= 7)
        label_1094444:
            int64_t x12_42 = i_31 << 2
            void* x10_5 = x24 + x12_42
            void* x11_5 = arg9 + x12_42
            int64_t i_21 = x8_38 - i_31
            int64_t i_12
            
            do
                int32_t x9_17 = *x11_5
                x11_5 += 4
                i_12 = i_21
                i_21 -= 1
                *x10_5 = x9_17
                x10_5 += 4
            while (i_12 != 1)
        else
            uint64_t x9_15 = x8_38 << 2
            
            if (arg9 + x9_15 u> x24)
                i_31 = 0
            
            if (arg9 + x9_15 u> x24 && x24 + x9_15 u> arg9)
                goto label_1094444
            
            i_31 = x8_38 & 0xfffffff8
            void* x10_4 = &arg9[1]
            void* x12_41 = x24 + 0x10
            int64_t i_23 = i_31
            int64_t i_13
            
            do
                result = *(x10_4 - 0x10)
                v1_1 = *x10_4
                x10_4 += 0x20
                i_13 = i_23
                i_23 -= 8
                *(x12_41 - 0x10) = result
                *x12_41 = v1_1
                x12_41 += 0x20
            while (i_13 != 8)
            
            if (i_31 != x8_38)
                goto label_1094444
    
    if (x26_1 s> 1)
        int32_t x8_39 = i * arg1
        int32_t x10_6 = 1
        int32_t x11_6 = x8_39
        
        do
            if (i s>= 1)
                int64_t x12_43 = zx.q(x11_6) << 0x20 s>> 0x1e
                int32_t i_24 = i
                int32_t i_14
                
                do
                    i_14 = i_24
                    i_24 -= 1
                    *(arg6 + x12_43) = *(arg8 + x12_43)
                    x12_43 += zx.q(arg1) << 0x20 s>> 0x1e
                while (i_14 != 1)
            
            x10_6 += 1
            x11_6 += x8_39
        while (x10_6 != x26_1)
    
    if (x8_5 s<= i)
        if (x26_1 s>= 2)
            int32_t x8_42 = i * arg1
            int32_t x10_8 = 1
            int32_t x11_25 = x8_42 + 2
            int32_t x13_27 = -1
            
            do
                if (arg1 s>= 3)
                    int64_t x18_17 = sx.q(x13_27)
                    int32_t x14_29 = 2
                    int32_t x15_22 = x11_25
                    
                    do
                        if (i s>= 1)
                            int64_t x17_24 = zx.q(x15_22) << 0x20 s>> 0x1e
                            int32_t i_17 = i
                            int32_t i_15
                            
                            do
                                void* x2_20 = arg8 + x17_24
                                v1_1.d = arg10[x18_17 + 2]
                                v3.d = *(x2_20 - 4)
                                v2.d = *x2_20
                                result.d = arg10[x18_17 + 1]
                                void* x4_16 = arg6 + x17_24
                                i_15 = i_17
                                i_17 -= 1
                                v1_1.d = v2.d f* v1_1.d
                                unimplemented  {fnmsub s0, s3, s0, s1}
                                *(x4_16 - 4) = result.d
                                result.d = arg10[x18_17 + 1]
                                v3.d = *(x2_20 - 4)
                                v1_1.d = *x2_20
                                v2.d = arg10[x18_17 + 2]
                                x17_24 += zx.q(arg1) << 0x20 s>> 0x1e
                                result.d = v1_1.d f* result.d
                                result.d = vfma_f32(result.d, v3.d, v2.d)
                                *x4_16 = result.d
                            while (i_15 != 1)
                        
                        x14_29 += 2
                        x15_22 += 2
                        x18_17 += 2
                    while (x14_29 s< arg1)
                
                x10_8 += 1
                x11_25 += x8_42
                x13_27 += arg1
            while (x10_8 != x26_1)
    else if (x26_1 s>= 2)
        uint64_t x9_20 = zx.q(arg1 - 3) & 0xfffffffe
        uint64_t x11_9 = zx.q(arg1 - 1) & 6
        int32_t x1_9 = i * arg1
        uint64_t x0_18 = zx.q(((arg1 - 3) u>> 1) + 1)
        int32_t x8_41 = 0
        int64_t x10_7 = sx.q(arg1)
        int64_t x13_26 = zx.q(arg1) << 0x20 s>> 0x1e
        int32_t x18_16 = 1
        int32_t var_d0
        var_d0.q = x9_20 + 2 - x11_9
        int64_t j_8 = x0_18 & 0xfffffffc
        int32_t x9_23 = -1
        int32_t x6_12 = x1_9
        
        do
            int64_t x7_7 = sx.q(x9_23)
            
            if (i s>= 1)
                int64_t x2_14 = var_d0.q
                int64_t x9_25 = zx.q(x6_12) << 0x20 s>> 0x1e
                void* x25_1 = &arg8[1] + x9_25
                int32_t x12_47 = x1_9 + x1_9 * x8_41
                int64_t x22_6 = 0
                void* x26_8 = &arg6[1] + x9_25
                int64_t x11_12 = sx.q(x12_47)
                int64_t x9_27 = zx.q(x8_41 * arg1 - 1) << 0x20 s>> 0x1e
                int64_t x1_13 = sx.q(x6_12)
                
                do
                    if (arg1 s>= 3)
                        int32_t x2_18
                        int64_t x4_14
                        int64_t x11_18
                        
                        if (x0_18.d u>= 4)
                            int64_t x9_28 = x22_6 * x10_7
                            void* x4_12 = &arg6[x11_12 + 1 + x9_28]
                            void* x21_7 = &arg6[x9_20 + 3 + x11_12 + x9_28]
                            x2_18 = 2
                            
                            if (((x4_12 u< &arg10[x9_20 + 3] + x9_27 ? 1 : 0)
                                    & (&arg10[1] + x9_27 u< x21_7 ? 1 : 0) & 1) != 0)
                                i = i_16
                                goto label_10946a8
                            
                            i = i_16
                            x4_14 = x1_13
                            x11_18 = x7_7
                            
                            if (((x4_12 u< &arg8[x9_20 + 3 + x11_12 + x9_28] ? 1 : 0)
                                    & (&arg8[x11_12 + 1 + x9_28] u< x21_7 ? 1 : 0) & 1) != 0)
                                goto label_10946b0
                            
                            int128_t* x24_5 = &arg10[1 + sx.q(x9_23)]
                            void* x2_19 = x26_8
                            x4_14 = x2_14 + sx.q(x12_47) + x9_28
                            int64_t j_6 = j_8
                            void* x11_20 = x25_1
                            int64_t j_3
                            
                            do
                                result = *x24_5
                                v1_1 = x24_5[1]
                                v3 = *x11_20
                                v2 = *(x11_20 + 0x10)
                                v4.d = *x24_5
                                v5.d = *(x24_5 + 4)
                                v4:4.d = *(x24_5 + 8)
                                v5:4.d = *(x24_5 + 0xc)
                                v4:8.d = x24_5[1].d
                                v5:8.d = *(x24_5 + 0x14)
                                v4:0xc.d = *(x24_5 + 0x18)
                                v5:0xc.d = *(x24_5 + 0x1c)
                                x24_5 = &x24_5[2]
                                v6.d = *x11_20
                                v7.d = *(x11_20 + 4)
                                v6:4.d = *(x11_20 + 8)
                                v7:4.d = *(x11_20 + 0xc)
                                v6:8.d = *(x11_20 + 0x10)
                                v7:8.d = *(x11_20 + 0x14)
                                v6:0xc.d = *(x11_20 + 0x18)
                                v7:0xc.d = *(x11_20 + 0x1c)
                                x11_20 += 0x20
                                j_3 = j_6
                                j_6 -= 4
                                float128 v1_2 = vmulq_f32(v2, v1_1, 0)
                                float128 v0_4 = vmulq_f32(v3, result, 0)
                                result = vsubq_f32(vuzp1q_s32(v0_4, v1_2), vuzp2q_s32(v0_4, v1_2))
                                v1_1 = vfmaq_f32(vmulq_f32(v7, v4, 0), v5, v6)
                                *x2_19 = result.d
                                *(x2_19 + 4) = v1_1.d
                                *(x2_19 + 8) = result:4.d
                                *(x2_19 + 0xc) = v1_1:4.d
                                *(x2_19 + 0x10) = result:8.d
                                *(x2_19 + 0x14) = v1_1:8.d
                                *(x2_19 + 0x18) = result:0xc.d
                                *(x2_19 + 0x1c) = v1_1:0xc.d
                                x2_19 += 0x20
                            while (j_3 != 4)
                            x2_18 = ((arg1 + 1) & 0xfffffffe) - x11_9.d
                            x11_18 = x2_14 + sx.q(x8_41 * arg1 - 1)
                            
                            if (j_8 != x0_18)
                                goto label_10946b0
                        else
                            x2_18 = 2
                        label_10946a8:
                            x4_14 = x1_13
                            x11_18 = x7_7
                        label_10946b0:
                            void* x9_29 = &arg10[2 + x11_18]
                            void* x4_15 = &arg8[2 + x4_14]
                            void* x11_22 = &arg6[2 + x4_14]
                            
                            do
                                result.d = *(x9_29 - 4)
                                v1_1.d = *x9_29
                                v3.d = *(x4_15 - 4)
                                v2.d = *x4_15
                                x2_18 += 2
                                v1_1.d = v2.d f* v1_1.d
                                unimplemented  {fnmsub s0, s3, s0, s1}
                                *(x11_22 - 4) = result.d
                                result.d = *(x9_29 - 4)
                                v2.d = *x9_29
                                v3.d = *(x4_15 - 4)
                                v1_1.d = *x4_15
                                x9_29 += 8
                                x4_15 += 8
                                result.d = v1_1.d f* result.d
                                result.d = vfma_f32(result.d, v3.d, v2.d)
                                *x11_22 = result.d
                                x11_22 += 8
                            while (x2_18 s< arg1)
                    
                    x22_6 += 1
                    x1_13 += x10_7
                    x25_1 += x13_26
                    x26_8 += x13_26
                while (x22_6.d != i)
            
            x18_16 += 1
            x9_23 = x7_7.d + arg1
            x8_41 += 1
            x6_12 += x1_9
        while (x18_16 != arg2)
return result
