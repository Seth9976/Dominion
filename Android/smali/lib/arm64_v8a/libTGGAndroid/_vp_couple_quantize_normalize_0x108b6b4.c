// 函数: _vp_couple_quantize_normalize
// 地址: 0x108b6b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t __saved_x28_1
int64_t __saved_x28 = __saved_x28_1
int64_t __saved_x27_1
int64_t __saved_x27 = __saved_x27_1
int64_t __saved_x26_1
int64_t __saved_x26 = __saved_x26_1
int64_t __saved_x25_1
int64_t __saved_x25 = __saved_x25_1
int64_t __saved_x24_1
int64_t __saved_x24 = __saved_x24_1
int64_t __saved_x23_1
int64_t __saved_x23 = __saved_x23_1
int64_t __saved_x22_1
int64_t __saved_x22 = __saved_x22_1
int64_t __saved_x21_1
int64_t __saved_x21 = __saved_x21_1
int64_t __saved_x20_1
int64_t __saved_x20 = __saved_x20_1
int64_t __saved_x19_1
int64_t __saved_x19 = __saved_x19_1
int64_t __saved_fp_1
int64_t __saved_fp = __saved_fp_1
int64_t __saved_lr_1
int64_t __saved_lr = __saved_lr_1
uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
int32_t* x8_2 = *(arg3 + 8)
int64_t x2 = sx.q(*arg3)
uint64_t x3

if (x8_2[0x7d] == 0)
    x3 = 0x10
else
    x3 = zx.q(x8_2[0x7f])

int64_t x12 = (arg1 & 0xffffffff) << 0x20 s>> 0x1e
void* x13 = arg2 + x12
int64_t x10_3 = sx.q(*(arg2 + sx.q(*x8_2) * 0x3c + x12 + 0x84))
int64_t x9_2 = sx.q(*(x13 + 0xfc))
int64_t x10_4 = sx.q(*(x13 + 0x138))
int64_t x11_2 = ((zx.q(arg9) << 0x20 s>> 0x1d) + 0xf) & 0xfffffffffffffff0
void var_1e0
void* lr = &var_1e0 - x11_2
void* x4 = lr - x11_2
void* x5 = x4 - x11_2
void* x19 = x5 - x11_2
int64_t x11_3 = zx.q(arg9) << 0x20 s>> 0x1e
void* x26 = x19 - ((x11_3 + 0xf) & 0xfffffffffffffff0)
int64_t x12_6 = zx.q(x3.d * arg9) << 0x20 s>> 0x1e
int64_t x15 = (x12_6 + 0xf) & 0xfffffffffffffff0
void* const x11_6

if (x2.d s> 0x3e8)
    x11_6 = &data_871fa8
else
    x11_6 = &data_871f60

void* x12_9 = x26 - x15
void* x13_2 = x12_9 - x15
*lr = x12_9
void* x14_1 = x13_2 - x15
*x4 = x13_2
void* x15_1 = x14_1 - x15
*x5 = x14_1
*x19 = x15_1

if (arg9 s> 1)
    int64_t x16_1 = (x3 & 0xffffffff) << 0x20 s>> 0x1e
    *(lr + 8) = x12_9 + x16_1
    *(x4 + 8) = x13_2 + x16_1
    *(x5 + 8) = x14_1 + x16_1
    *(x19 + 8) = x15_1 + x16_1
    
    if (arg9 != 2)
        int64_t x14_3 = sx.q(x3.d)
        int64_t x13_4 = x14_3 << 3
        int64_t i = 2
        
        do
            int64_t x1 = i << 3
            i += 1
            int64_t x16_3 = *lr + x13_4
            int64_t x17_3 = *x4 + x13_4
            int64_t x18_2 = *x5 + x13_4
            arg1 = *x19 + x13_4
            x13_4 += x14_3 << 2
            *(lr + x1) = x16_3
            *(x4 + x1) = x17_3
            *(x5 + x1) = x18_2
            *(x19 + x1) = arg1
        while (zx.q(arg9) != i)

int32_t x12_18

if (x2.d s< 1)
    x12_18 = *(arg4 + 0x484)
    
    if (x12_18 s>= 1)
    label_108c1f4:
        int64_t i_1 = 0
        
        do
            void* x10_21 = arg4 + (i_1 << 2)
            int64_t x11_21 = sx.q(*(x10_21 + 0x488))
            
            if (*(arg7 + (x11_21 << 2)) != 0 || *(arg7 + (sx.q(*(x10_21 + 0x888)) << 2)) != 0)
                *(arg7 + (x11_21 << 2)) = 1
                *(arg7 + (sx.q(*(x10_21 + 0x888)) << 2)) = 1
                x12_18 = *(arg4 + 0x484)
            
            i_1 += 1
        while (i_1 s< sx.q(x12_18))
else
    uint128_t v0
    v0.q = *(&data_871f60 + (x9_2 << 3))
    int64_t x8_3 = *x19
    uint128_t v1
    v1.q = *(x11_6 + (x10_4 << 3))
    data_71c5f0
    int64_t x10_5 = sx.q(x3.d)
    int128_t var_170
    __builtin_memcpy(&var_170, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x"
    "00\x03\x00\x00\x00\x00\x00\x00\x00", 
        0x20)
    int64_t var_138_1 = 4
    int64_t var_1b0_1 = arg7
    int64_t var_1b8_1 = x2
    uint64_t var_1c0_1 = x3
    int64_t x28 = 0
    int128_t v2
    v2.d = 0x2edbe6ff
    v2:4.d = 0x2edbe6ff
    v2:8.d = 0x2edbe6ff
    v2:0xc.d = 0x2edbe6ff
    uint128_t v3_1 = vdupq_laneq_s64(v0, 0)
    uint128_t v4_1 = vdupq_laneq_s64(v1, 0)
    int64_t var_190_1 = x10_5
    int64_t var_150_1 = 0
    int64_t var_100_1 = v1.q
    int64_t var_f0_1 = v0.q
    
    do
        int64_t x8_7 = x2 - x28
        int32_t x27
        
        if (x8_7 s< x10_5)
            x27 = x8_7.d
        else
            x27 = x3.d
        
        memcpy(x26, arg7, x11_3)
        uint128_t v0_1
        uint128_t v1_1
        int128_t v2_1
        float128 v4_2
        int128_t v7_1
        uint128_t v16_1
        uint128_t v17_1
        uint128_t v18_1
        arg1, v0_1, v1_1, v2_1, v4_2, v7_1, v16_1, v17_1, v18_1 = memset(x8_3, 0, x12_6)
        v2_1 = v2
        void* lr_1 = lr
        void* x7 = x5
        void* x6 = x4
        v0_1.q = 0
        v0_1:8.q = 0
        
        if (arg9 s>= 1)
            int64_t x22 = sx.q(x27)
            uint64_t x19_1 = zx.q(x27)
            int64_t x11_7 = var_150_1 * var_190_1
            int64_t x25 = x10_3 - x28
            int64_t j_7 = x22 & 0xfffffffffffffff8
            int64_t j_8 = x19_1 & 0xfffffffc
            int64_t i_2 = 0
            v18_1.q = x25
            v18_1:8.q = x25
            int64_t j_9 = x22 & 0xfffffffffffffffc
            uint128_t var_e0_1 = v18_1
            
            do
                int64_t x9_4 = arg6[i_2]
                int64_t x8_16 = x9_4 + (x28 << 2)
                
                if (*(x26 + (i_2 << 2)) != 0)
                    int32_t* x4_1 = *(x7 + (i_2 << 3))
                    v7_1.d = 1
                    v7_1:4.d = 1
                    v7_1:8.d = 1
                    v7_1:0xc.d = 1
                    int32_t* x2_4
                    int32_t* x3_1
                    
                    if (x27 s< 1)
                    label_108be90:
                        int64_t x9_9 = i_2 << 3
                        x2_4 = *(lr_1 + x9_9)
                        x3_1 = *(x6 + x9_9)
                    else
                        int64_t x10_16 = 0
                        
                        do
                            int64_t x11_14 = x10_16 << 2
                            x10_16 += 1
                            x4_1[x10_16] =
                                *(&data_871ff0 + (sx.q(*(x9_4 + (x28 << 2) + x11_14)) << 2))
                        while (x10_16 s< x22)
                        
                        if (x27 s< 1)
                            goto label_108be90
                        
                        int64_t x10_17 = i_2 << 3
                        int64_t x9_7 = arg5[i_2]
                        int128_t* x11_16 = *(x19 + x10_17)
                        int64_t j_11 = 0
                        
                        if (x27 u>= 4)
                            v0_1 = var_170
                            int64_t j_5 = j_8
                            int128_t var_160
                            v1_1 = var_160
                            int128_t* x12_16 = x9_7 + (x28 << 2)
                            int128_t* x14_13 = x11_16
                            int32_t* x15_8 = x4_1
                            int64_t j
                            
                            do
                                uint128_t v2_2 = vcgtq_s64(v18_1, v0_1)
                                uint128_t v3_2 = vcgtq_s64(v18_1, v1_1)
                                uint128_t v2_3 = vbslq_s8(v2_2, v3_1, v4_1)
                                uint128_t v3_3 = vbslq_s8(v3_2, v3_1, v4_1)
                                float128 v2_5 = vcvt_high_f32_f64(vcvt_f32_f64(v2_3, v2_3), v3_3)
                                v3_3 = *x12_16
                                x12_16 = &x12_16[1]
                                v4_2 = *x15_8
                                x15_8 = &x15_8[4]
                                j = j_5
                                j_5 -= 4
                                uint128_t v2_6 = vcleq_f32(vdivq_f32(vabsq_f32(v3_3), v4_2), v2_5)
                                v4_2.q = 4
                                v4_2:8.q = 4
                                v1_1 += v4_2
                                *x14_13 = v2_6 & v7_1
                                x14_13 = &x14_13[1]
                                v0_1 += v4_2
                            while (j != 4)
                            j_11 = j_8
                        
                        if (x27 u< 4 || j_11 != x19_1)
                            do
                                int64_t x14_14 = j_11 << 2
                                v0_1.d = (x9_7 + (x28 << 2))[j_11]
                                v1_1.d = x4_1[j_11]
                                
                                if (j_11 s< x25)
                                    v2_1.q = var_f0_1
                                else
                                    v2_1.q = var_100_1
                                
                                v0_1.d = fabs(v0_1.d)
                                v2_1.d = fconvert.s(v2_1.q)
                                v0_1.d = v0_1.d f/ v1_1.d
                                j_11 += 1
                                *(x11_16 + x14_14) = v0_1.d f>= v2_1.d ? 1 : 0
                            while (x19_1 != j_11)
                        
                        if (x27 s<= 0)
                            goto label_108be90
                        
                        x2_4 = *(lr_1 + x10_17)
                        x3_1 = *(x6 + x10_17)
                        int64_t j_10 = 0
                        
                        if (x27 u< 4)
                            goto label_108be44
                        
                        void* x18_5 = &x3_1[x22]
                        void* x13_5 = &x2_4[x22]
                        int64_t x0_3 = x9_7 + (x11_7 << 2)
                        void* x1_3 = &x4_1[x22]
                        int64_t x17_7 = x9_7 + ((x11_7 + x22) << 2)
                        
                        if (((x2_4 u< x18_5 ? 1 : 0) & (x3_1 u< x13_5 ? 1 : 0) & 1) != 0
                                || ((x2_4 u< x1_3 ? 1 : 0) & (x4_1 u< x13_5 ? 1 : 0) & 1) != 0
                                || ((x2_4 u< x17_7 ? 1 : 0) & (x0_3 u< x13_5 ? 1 : 0) & 1) != 0
                                || ((x3_1 u< x1_3 ? 1 : 0) & (x4_1 u< x18_5 ? 1 : 0) & 1) != 0
                                || ((x3_1 u< x17_7 ? 1 : 0) & (x0_3 u< x18_5 ? 1 : 0) & 1) != 0)
                            j_10 = 0
                        label_108be44:
                            int32_t* x9_8 = x9_7 + (x28 << 2)
                            
                            do
                                v0_1.d = x9_8[j_10]
                                v0_1.d = v0_1.d f* v0_1.d
                                x2_4[j_10] = v0_1.d
                                x3_1[j_10] = v0_1.d
                                v0_1.d = x9_8[j_10]
                                
                                if (not(v0_1.d f>= 0f))
                                    v0_1.d = x2_4[j_10]
                                    v0_1.d = fneg(v0_1.d)
                                    x2_4[j_10] = v0_1.d
                                
                                v0_1.d = x4_1[j_10]
                                j_10 += 1
                                v0_1.d = v0_1.d f* v0_1.d
                                x4_1[j_10] = v0_1.d
                            while (j_10 s< x22)
                        else
                            j_10 = 0
                            
                            if (((x4_1 u< x17_7 ? 1 : 0) & (x0_3 u< x1_3 ? 1 : 0) & 1) != 0)
                                goto label_108be44
                            
                            int64_t j_4 = j_9
                            int64_t x10_14 = 0
                            int128_t* x11_13 = x9_7 + (x28 << 2)
                            int64_t j_1
                            
                            do
                                v0_1 = *(x11_13 + x10_14)
                                float128 v0_2 = vmulq_f32(v0_1, v0_1, 0)
                                *(x2_4 + x10_14) = v0_2
                                *(x3_1 + x10_14) = v0_2
                                float128 v0_4 = vmovn_s32(vcltzq_f32(*(x11_13 + x10_14), 0))
                                
                                if ((zx.d(v0_4.w) & 1) != 0)
                                    v1_1.d = *(x2_4 + x10_14)
                                    v1_1.d = fneg(v1_1.d)
                                    *(x2_4 + x10_14) = v1_1.d
                                    
                                    if ((zx.d(v0_4:2.w) & 1) != 0)
                                        goto label_108bc7c
                                    
                                    goto label_108bc54
                                
                                if ((zx.d(v0_4:2.w) & 1) != 0)
                                label_108bc7c:
                                    void* x13_13 = x2_4 + x10_14
                                    v1_1.d = *(x13_13 + 4)
                                    v1_1.d = fneg(v1_1.d)
                                    *(x13_13 + 4) = v1_1.d
                                    
                                    if ((zx.d(v0_4:4.w) & 1) != 0)
                                        goto label_108bc58
                                    
                                    goto label_108bc98
                                
                            label_108bc54:
                                
                                if ((zx.d(v0_4:4.w) & 1) == 0)
                                label_108bc98:
                                    
                                    if ((zx.d(v0_4:6.w) & 1) != 0)
                                    label_108bc9c:
                                        void* x13_16 = x2_4 + x10_14
                                        v0_4.d = *(x13_16 + 0xc)
                                        v0_4.d = fneg(v0_4.d)
                                        *(x13_16 + 0xc) = v0_4.d
                                else
                                label_108bc58:
                                    void* x13_10 = x2_4 + x10_14
                                    v1_1.d = *(x13_10 + 8)
                                    v1_1.d = fneg(v1_1.d)
                                    *(x13_10 + 8) = v1_1.d
                                    
                                    if ((zx.d(v0_4:6.w) & 1) != 0)
                                        goto label_108bc9c
                                
                                v0_4 = *(x4_1 + x10_14)
                                j_1 = j_4
                                j_4 -= 4
                                *(x4_1 + x10_14) = vmulq_f32(v0_4, v0_4, 0)
                                x10_14 += 0x10
                            while (j_1 != 4)
                            j_10 = j_9
                            
                            if (j_10 != x22)
                                goto label_108be44
                    
                    *(x15_1 - 0x10) = x8_16
                    v0_1, arg1, v1_1, v2_1, v4_2, v7_1, v16_1, v17_1, v18_1 =
                        sub_108c278(arg3, x10_3, x2_4, x3_1, x4_1, 0, zx.q(x28.d), zx.q(x27))
                    lr_1 = lr
                    x7 = x5
                    x6 = x4
                    v18_1 = var_e0_1
                    v2_1 = v2
                    v0_1.q = 0
                    v0_1:8.q = 0
                else if (x27 s>= 1)
                    int64_t x13_18 = i_2 << 3
                    int32_t* x10_18 = *(x7 + x13_18)
                    int32_t* x11_18 = *(lr_1 + x13_18)
                    int32_t* x12_17 = *(x6 + x13_18)
                    int32_t* x13_19 = *(x19 + x13_18)
                    int64_t j_12 = 0
                    
                    if (x27 u<= 7)
                        goto label_108bf20
                    
                    void* x18_3 = &x11_18[x22]
                    void* x15_4 = &x10_18[x22]
                    arg1 = &x12_17[x22]
                    
                    if (((x10_18 u< x18_3 ? 1 : 0) & (x11_18 u< x15_4 ? 1 : 0) & 1) != 0
                            || ((x10_18 u< arg1 ? 1 : 0) & (x12_17 u< x15_4 ? 1 : 0) & 1) != 0
                            || ((x11_18 u< arg1 ? 1 : 0) & (x12_17 u< x18_3 ? 1 : 0) & 1) != 0)
                        j_12 = 0
                    label_108bf20:
                        
                        do
                            j_12 += 1
                            x10_18[j_12] = 0x2edbe6ff
                            x11_18[j_12] = 0
                            x12_17[j_12] = 0
                            x13_19[j_12] = 0
                            (x9_4 + (x28 << 2))[j_12] = 0
                        while (j_12 s< x22)
                    else
                        j_12 = 0
                        
                        if (((x13_19 u< x9_4 + ((x22 + var_150_1 * var_190_1) << 2) ? 1 : 0)
                                & (x8_16 u< &x13_19[x22] ? 1 : 0) & 1) != 0)
                            goto label_108bf20
                        
                        int64_t j_6 = j_7
                        void* x8_14 = &x10_18[4]
                        void* x14_11 = x9_4 + (var_138_1 << 2)
                        void* x15_6 = &x11_18[4]
                        void* x16_6 = &x13_19[4]
                        void* x17_6 = &x12_17[4]
                        int64_t j_2
                        
                        do
                            *(x8_14 - 0x10) = v2_1
                            *x8_14 = v2_1
                            *(x15_6 - 0x10) = zx.o(0)
                            *x15_6 = zx.o(0)
                            *(x17_6 - 0x10) = zx.o(0)
                            *x17_6 = zx.o(0)
                            *(x16_6 - 0x10) = zx.o(0)
                            *x16_6 = zx.o(0)
                            *(x14_11 - 0x10) = zx.o(0)
                            *x14_11 = zx.o(0)
                            j_2 = j_6
                            j_6 -= 8
                            x8_14 += 0x20
                            x14_11 += 0x20
                            x15_6 += 0x20
                            x16_6 += 0x20
                            x17_6 += 0x20
                        while (j_2 != 8)
                        j_12 = j_7
                        
                        if (j_12 != x22)
                            goto label_108bf20
                
                i_2 += 1
            while (i_2 != zx.q(arg9))
        
        x12_18 = *(arg4 + 0x484)
        
        if (x12_18 s>= 1)
            int64_t i_3 = 0
            
            do
                void* x8_23 = arg4 + (i_3 << 2)
                int64_t x13_20 = sx.q(*(x8_23 + 0x488))
                int64_t x14_16 = sx.q(*(x8_23 + 0x888))
                int64_t x11_19 = x13_20 << 3
                int64_t x17_9 = x14_16 << 3
                void* x15_10 = arg6[x13_20]
                void* x16_8 = arg6[x14_16]
                int32_t* x2_5 = *(lr_1 + x11_19)
                int32_t* x8_25 = *(lr_1 + x17_9)
                int32_t* x3_2 = *(x6 + x11_19)
                int32_t* x9_11 = *(x6 + x17_9)
                int32_t* x4_2 = *(x7 + x11_19)
                int32_t* x10_19 = *(x7 + x17_9)
                int32_t* x5_3 = *(x19 + x11_19)
                int32_t* x11_20 = *(x19 + x17_9)
                
                if (*(x26 + (x13_20 << 2)) != 0 || *(x26 + (x14_16 << 2)) != 0)
                    *(x26 + (x14_16 << 2)) = 1
                    *(x26 + (x13_20 << 2)) = 1
                    
                    if (x27 s>= 1)
                        int64_t x17_11 = x28 << 2
                        int64_t j_3 = 0
                        int32_t* x14_17 = x16_8 + x17_11
                        int32_t* x15_11 = x15_10 + x17_11
                        int32_t* x16_9 = x8_25
                        
                        do
                            if (j_3 s< sx.q(arg8) - x28)
                                if (x5_3[j_3] != 0 || x11_20[j_3] != 0)
                                    v0_1.d = x2_5[j_3]
                                    v1_1.d = x8_25[j_3]
                                    v0_1.d = fabs(v0_1.d)
                                    v1_1.d = fabs(v1_1.d)
                                    v0_1.d = v1_1.d f+ v0_1.d
                                    x2_5[j_3] = v0_1.d
                                    v0_1.d = x3_2[j_3]
                                    v1_1.d = x9_11[j_3]
                                    v0_1.d = v1_1.d f+ v0_1.d
                                    x3_2[j_3] = v0_1.d
                                    x11_20[j_3] = 1
                                    x5_3[j_3] = 1
                                    int32_t x0_6 = x15_11[j_3]
                                    int32_t x18_8 = x14_17[j_3]
                                    int32_t x1_5
                                    
                                    if (x0_6 s< 0)
                                        x1_5 = neg.d(x0_6)
                                    else
                                        x1_5 = x0_6
                                    
                                    int32_t x6_2
                                    
                                    if (x18_8 s< 0)
                                        x6_2 = neg.d(x18_8)
                                    else
                                        x6_2 = x18_8
                                    
                                    int32_t x0_7
                                    
                                    if (x1_5 s<= x6_2)
                                        int32_t x0_9
                                        
                                        if (x18_8 s> 0)
                                            x0_9 = x0_6 - x18_8
                                        else
                                            x0_9 = x18_8 - x0_6
                                        
                                        x14_17[j_3] = x0_9
                                        x15_11[j_3] = x18_8
                                        x0_7 = x14_17[j_3]
                                    else
                                        if (x0_6 s> 0)
                                            x0_7 = x0_6 - x18_8
                                        else
                                            x0_7 = x18_8 - x0_6
                                        
                                        x14_17[j_3] = x0_7
                                        x18_8 = x15_11[j_3]
                                    
                                    int32_t x18_10
                                    
                                    if (x18_8 s>= 0)
                                        x18_10 = x18_8
                                    else
                                        x18_10 = neg.d(x18_8)
                                    
                                    if (x0_7 s>= x18_10 << 1)
                                        x14_17[j_3] = neg.d(x0_7)
                                        x15_11[j_3] = neg.d(x15_11[j_3])
                                else
                                    int32_t* x17_15
                                    
                                    if (j_3 s>= x10_3 - x28)
                                        v0_1.d = x2_5[j_3]
                                        v1_1.d = x8_25[j_3]
                                        v2_1.d = v1_1.d f+ v0_1.d
                                        v0_1.d = fabs(v0_1.d)
                                        v1_1.d = fabs(v1_1.d)
                                        v0_1.d = v1_1.d f+ v0_1.d
                                        x3_2[j_3] = v0_1.d
                                        
                                        if (not(v2_1.d f>= 0f))
                                            v0_1.d = fneg(v0_1.d)
                                        
                                        x17_15 = x16_9
                                        x2_5[j_3] = v0_1.d
                                    else
                                        x17_15 = &x8_25[j_3]
                                        v0_1.d = x2_5[j_3]
                                        v1_1.d = *x17_15
                                        v0_1.d = v0_1.d f+ v1_1.d
                                        x2_5[j_3] = v0_1.d
                                        v0_1.d = fabs(v0_1.d)
                                        x3_2[j_3] = v0_1.d
                                    
                                    x9_11[j_3] = 0
                                    *x17_15 = 0
                                    x11_20[j_3] = 1
                                    x14_17[j_3] = 0
                            
                            v0_1.d = x4_2[j_3]
                            v1_1.d = x10_19[j_3]
                            j_3 += 1
                            x16_9 = &x16_9[1]
                            v0_1.d = v1_1.d f+ v0_1.d
                            x10_19[j_3] = v0_1.d
                            x4_2[j_3] = v0_1.d
                        while (j_3 s< sx.q(x27))
                    
                    *(x15_1 - 0x10) = x15_10 + (x28 << 2)
                    v0_1, arg1, v1_1, v2_1 =
                        sub_108c278(arg3, x10_3, x2_5, x3_2, x4_2, x5_3, zx.q(x28.d), zx.q(x27))
                    lr_1 = lr
                    x7 = x5
                    x6 = x4
                    x12_18 = *(arg4 + 0x484)
                
                i_3 += 1
            while (i_3 s< sx.q(x12_18))
        
        x10_5 = var_190_1
        x28 += x10_5
        var_150_1 += 1
        x2 = var_1b8_1
        var_138_1 += x10_5
        arg7 = var_1b0_1
        x3 = var_1c0_1
    while (x28 s< x2)
    
    if (x12_18 s>= 1)
        goto label_108c1f4

if (*(x8 + 0x28) == x8_1)
    return 

__stack_chk_fail()
noreturn
