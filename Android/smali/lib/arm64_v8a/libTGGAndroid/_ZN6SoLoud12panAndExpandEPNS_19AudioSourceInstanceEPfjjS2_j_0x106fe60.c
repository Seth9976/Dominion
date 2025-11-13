// 函数: _ZN6SoLoud12panAndExpandEPNS_19AudioSourceInstanceEPfjjS2_j
// 地址: 0x106fe60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg6 == 0)
    return 

int128_t v1
v1.d = *(arg1 + 0x3c)
uint64_t x25_1 = zx.q(arg6)
SoLoud::AudioSourceInstance* x20_1 = arg1
int128_t v0
v0.d = float.s(arg3)
float* x21_1 = arg5
uint32_t x22_1 = arg4
int64_t var_60
float128 v0_1
float128 v1_1
float128 v2_1
float128 v3_1
uint128_t v4_1
uint128_t v5_1
arg1, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1 = memcpy(&var_60, arg1 + 0x15c, x25_1 << 2)
int32_t var_a0
void var_80
int64_t i_47

if (arg6 u>= 4)
    v5_1 = v0
    v4_1 = v1
    i_47 = x25_1 & 0xfffffffc
    float128* x9_1 = &var_80
    int32_t* x10_1 = &var_a0
    v0_1 = vdupq_laneq_s32(v4_1, 0)
    v1_1 = vdupq_laneq_s32(v5_1, 0)
    int64_t i_34 = i_47
    SoLoud::AudioSourceInstance* x12_1 = x20_1
    int64_t i
    
    do
        v2_1 = *(x12_1 + 0x18)
        v3_1 = *(x12_1 + 0x15c)
        x12_1 += 0x10
        float128 v2_2 = vmulq_f32(v2_1, v0_1, 0)
        *x9_1 = v2_2
        x9_1 = &x9_1[1]
        i = i_34
        i_34 -= 4
        *x10_1 = vdivq_f32(vsubq_f32(v2_2, v3_1), v1_1)
        x10_1 = &x10_1[4]
    while (i != 4)
    
    if (i_47 != x25_1)
        goto label_106ff18
else
    v5_1 = v0
    v4_1 = v1
    i_47 = 0
label_106ff18:
    int64_t x11_1 = i_47 << 2
    void* x9_2 = &var_80 + x11_1
    void* x10_2 = &(&var_a0)[i_47]
    void* x11_2 = x20_1 + x11_1
    int64_t i_24 = x25_1 - i_47
    int64_t i_1
    
    do
        v0_1.d = *(x11_2 + 0x18)
        v1_1.d = *(x11_2 + 0x15c)
        i_1 = i_24
        i_24 -= 1
        x11_2 += 4
        v0_1.d = v0_1.d f* v4_1.d
        *x9_2 = v0_1.d
        x9_2 += 4
        v0_1.d = v0_1.d f- v1_1.d
        v0_1.d = v0_1.d f/ v5_1.d
        *x10_2 = v0_1.d
        x10_2 += 4
    while (i_1 != 1)
uint64_t x8_1 = zx.q(arg6 - 1)
int64_t var_90
int64_t var_50
float v6_1
float v7_1
float v16_1
float v17_1
float v18_1
float v19_1
float v20_1

if (x8_1.d u<= 7)
    switch (x8_1)
        case 0
            int32_t x8_2 = *(x20_1 + 0x48)
            
            if (x8_2 != 0)
                if (arg3 != 0)
                    v0_1.d = var_a0
                    int32_t i_2 = 0
                    int32_t x9_3 = 0
                    
                    do
                        v1_1.d = *(x20_1 + 0x15c)
                        uint64_t j_1 = zx.q(arg3)
                        int32_t x12_2 = x9_3
                        float* x13_2 = arg2
                        uint64_t j
                        
                        do
                            v2_1.d = x21_1[zx.q(x12_2)]
                            v3_1.d = *x13_2
                            v1_1.d = v0_1.d f+ v1_1.d
                            j = j_1
                            j_1 -= 1
                            v2_1.d = v1_1.d f* v2_1.d
                            v2_1.d = v3_1.d f+ v2_1.d
                            *x13_2 = v2_1.d
                            x13_2 = &x13_2[1]
                            x12_2 += 1
                        while (j != 1)
                        i_2 += 1
                        x9_3 += x22_1
                    while (i_2 u< *(x20_1 + 0x48))
                else
                    int32_t i_48
                    
                    if (x8_2 u>= 2)
                        i_48 = x8_2 & 0xfffffffe
                        int32_t i_33 = i_48
                        int32_t i_3
                        
                        do
                            i_3 = i_33
                            i_33 -= 2
                        while (i_3 != 2)
                        
                        if (x8_2 != i_48)
                            goto label_1071284
                    else
                        i_48 = 0
                    label_1071284:
                        
                        do
                            i_48 += 1
                        while (i_48 u< x8_2)
        case 1
            uint64_t x8_4 = zx.q(*(x20_1 + 0x48) - 1)
            
            if (x8_4.d u<= 7)
                switch (x8_4)
                    case 0
                        if (arg3 != 0)
                            v1_1.q = var_a0.q
                            v0_1.q = var_60
                            uint64_t i_25 = zx.q(arg3)
                            float* x9_4 = arg2
                            uint64_t i_4
                            
                            do
                                v2_1.d = *x21_1
                                x21_1 = &x21_1[1]
                                v3_1.d = *x9_4
                                v0_1 = vadd_f32(v1_1, v0_1)
                                v4_1.d = v2_1.d f* v0_1.d
                                v3_1.d = v3_1.d f+ v4_1.d
                                *x9_4 = v3_1.d
                                x9_4 = &x9_4[1]
                                v3_1.d = arg2[zx.q(x22_1)]
                                v2_1.d = v2_1.d f* v0_1:4.d
                                i_4 = i_25
                                i_25 -= 1
                                x22_1 += 1
                                v2_1.d = v2_1.d f+ v3_1.d
                                arg2[zx.q(x22_1)] = v2_1.d
                            while (i_4 != 1)
                            var_60.d = v0_1.d
                    case 1
                        if (arg3 != 0)
                            v1_1.q = var_a0.q
                            v0_1.q = var_60
                            uint64_t i_26 = zx.q(arg3)
                            float* x9_8 = arg2
                            float* x10_13 = x21_1
                            uint64_t i_5
                            
                            do
                                v2_1.d = *x10_13
                                x10_13 = &x10_13[1]
                                v3_1.d = *x9_8
                                v0_1 = vadd_f32(v1_1, v0_1)
                                v2_1.d = v2_1.d f* v0_1.d
                                v2_1.d = v2_1.d f+ v3_1.d
                                v4_1.d = x21_1[zx.q(x22_1)]
                                *x9_8 = v2_1.d
                                x9_8 = &x9_8[1]
                                v2_1.d = arg2[zx.q(x22_1)]
                                i_5 = i_26
                                i_26 -= 1
                                v3_1.d = v4_1.d f* v0_1:4.d
                                x22_1 += 1
                                v2_1.d = v3_1.d f+ v2_1.d
                                arg2[zx.q(x22_1)] = v2_1.d
                            while (i_5 != 1)
                            var_60.d = v0_1.d
                    case 3
                        if (arg3 != 0)
                            v0_1.q = var_a0.q
                            v1_1.q = var_60
                            uint32_t x8_14 = x22_1 << 1
                            uint32_t x9_9 = x8_14 + x22_1
                            uint64_t i_28 = zx.q(arg3)
                            v2_1.d = fconvert.s(0.5f)
                            float* x11_14 = arg2
                            float* x12_10 = x21_1
                            uint64_t i_6
                            
                            do
                                v3_1.d = *x12_10
                                x12_10 = &x12_10[1]
                                v4_1.d = x21_1[zx.q(x8_14)]
                                v6_1 = *x11_14
                                v1_1 = vadd_f32(v0_1, v1_1)
                                v3_1.d = v3_1.d f+ v4_1.d
                                v3_1.d = v3_1.d f* v2_1.d
                                v5_1.d = x21_1[zx.q(x9_9)]
                                v4_1.d = x21_1[zx.q(x22_1)]
                                v3_1.d = v3_1.d f* v1_1.d
                                v3_1.d = v6_1 f+ v3_1.d
                                *x11_14 = v3_1.d
                                x11_14 = &x11_14[1]
                                v3_1.d = arg2[zx.q(x22_1)]
                                v4_1.d = v4_1.d f+ v5_1.d
                                v4_1.d = v4_1.d f* v2_1.d
                                v4_1.d = v4_1.d f* v1_1:4.d
                                x9_9 += 1
                                x8_14 += 1
                                i_6 = i_28
                                i_28 -= 1
                                v3_1.d = v3_1.d f+ v4_1.d
                                x22_1 += 1
                                arg2[zx.q(x22_1)] = v3_1.d
                            while (i_6 != 1)
                            var_60.d = v1_1.d
                    case 5
                        if (arg3 != 0)
                            v0_1.q = var_a0.q
                            v1_1.q = var_60
                            uint32_t x8_15 = x22_1 << 1
                            uint32_t x9_10 = x22_1 << 2
                            uint32_t x10_14 = x8_15 + x22_1
                            uint32_t x11_15 = x9_10 + x22_1
                            uint64_t i_36 = zx.q(arg3)
                            float* x14_11 = arg2
                            float* x15_2 = x21_1
                            uint64_t i_7
                            
                            do
                                v2_1.d = *x15_2
                                x15_2 = &x15_2[1]
                                v3_1.d = x21_1[zx.q(x8_15)]
                                v4_1.d = x21_1[zx.q(x10_14)]
                                v5_1.d = x21_1[zx.q(x9_10)]
                                v2_1.d = v2_1.d f+ v3_1.d
                                v16_1 = *x14_11
                                v2_1.d = v2_1.d f+ v4_1.d
                                v7_1 = float.s(0x3e99999a)
                                v2_1.d = v2_1.d f+ v5_1.d
                                v5_1.d = x21_1[zx.q(x22_1)]
                                v1_1 = vadd_f32(v0_1, v1_1)
                                v2_1.d = v2_1.d f* v7_1
                                v6_1 = x21_1[zx.q(x11_15)]
                                v2_1.d = v2_1.d f* v1_1.d
                                v2_1.d = v16_1 f+ v2_1.d
                                v3_1.d = v5_1.d f+ v3_1.d
                                *x14_11 = v2_1.d
                                x14_11 = &x14_11[1]
                                v3_1.d = v3_1.d f+ v4_1.d
                                v2_1.d = arg2[zx.q(x22_1)]
                                v3_1.d = v3_1.d f+ v6_1
                                v3_1.d = v3_1.d f* v7_1
                                v3_1.d = v3_1.d f* v1_1:4.d
                                x11_15 += 1
                                x9_10 += 1
                                x10_14 += 1
                                x8_15 += 1
                                i_7 = i_36
                                i_36 -= 1
                                v2_1.d = v2_1.d f+ v3_1.d
                                x22_1 += 1
                                arg2[zx.q(x22_1)] = v2_1.d
                            while (i_7 != 1)
                            var_60.d = v1_1.d
                    case 7
                        if (arg3 != 0)
                            v0_1.q = var_a0.q
                            v1_1.q = var_60
                            uint32_t x8_16 = x22_1 << 1
                            uint32_t x9_11 = x22_1 << 2
                            uint32_t x10_15 = x8_16 + x22_1
                            uint32_t x11_16 = x9_11 + x22_1
                            uint32_t x12_12 = x22_1 * 7
                            uint32_t x13_8 = x10_15 << 1
                            uint64_t i_42 = zx.q(arg3)
                            float* x16_17 = arg2
                            float* x17_1 = x21_1
                            uint64_t i_8
                            
                            do
                                v2_1.d = *x17_1
                                x17_1 = &x17_1[1]
                                v3_1.d = x21_1[zx.q(x8_16)]
                                v4_1.d = x21_1[zx.q(x10_15)]
                                arg1 = zx.q(x22_1) << 2
                                v5_1.d = x21_1[zx.q(x9_11)]
                                v2_1.d = v2_1.d f+ v3_1.d
                                v2_1.d = v2_1.d f+ v4_1.d
                                v2_1.d = v2_1.d f+ v5_1.d
                                v3_1.d = *(x21_1 + arg1) f+ v3_1.d
                                v17_1 = *x16_17
                                v5_1.d = float.s(0x3e4ccccd)
                                v2_1.d = v2_1.d f+ x21_1[zx.q(x13_8)]
                                v1_1 = vadd_f32(v0_1, v1_1)
                                v6_1 = x21_1[zx.q(x11_16)]
                                v2_1.d = v2_1.d f* v5_1.d
                                v16_1 = x21_1[zx.q(x12_12)]
                                v2_1.d = v2_1.d f* v1_1.d
                                v2_1.d = v17_1 f+ v2_1.d
                                v3_1.d = v3_1.d f+ v4_1.d
                                *x16_17 = v2_1.d
                                x16_17 = &x16_17[1]
                                v3_1.d = v3_1.d f+ v6_1
                                v2_1.d = *(arg2 + arg1)
                                v3_1.d = v3_1.d f+ v16_1
                                v3_1.d = v3_1.d f* v5_1.d
                                v3_1.d = v3_1.d f* v1_1:4.d
                                x12_12 += 1
                                x13_8 += 1
                                x11_16 += 1
                                x9_11 += 1
                                x10_15 += 1
                                x8_16 += 1
                                i_8 = i_42
                                i_42 -= 1
                                v2_1.d = v2_1.d f+ v3_1.d
                                x22_1 += 1
                                *(arg2 + arg1) = v2_1.d
                            while (i_8 != 1)
                            var_60.d = v1_1.d
        case 3
            uint64_t x8_6 = zx.q(*(x20_1 + 0x48) - 1)
            
            if (x8_6.d u<= 7)
                switch (x8_6)
                    case 0
                        if (arg3 != 0)
                            v0_1 = var_a0.o
                            v1_1 = var_60.o
                            uint32_t x8_7 = x22_1 << 1
                            uint32_t x9_5 = x8_7 + x22_1
                            uint64_t i_27 = zx.q(arg3)
                            float* x11_7 = arg2
                            uint64_t i_9
                            
                            do
                                v2_1.d = *x21_1
                                x21_1 = &x21_1[1]
                                v3_1.d = *x11_7
                                v1_1 = vaddq_f32(v0_1, v1_1)
                                v4_1.d = v2_1.d f* v1_1.d
                                v3_1.d = v3_1.d f+ v4_1.d
                                *x11_7 = v3_1.d
                                x11_7 = &x11_7[1]
                                v3_1.d = arg2[zx.q(x22_1)]
                                v4_1.d = v2_1.d f* v1_1:4.d
                                i_9 = i_27
                                i_27 -= 1
                                x22_1 += 1
                                v3_1.d = v4_1.d f+ v3_1.d
                                arg2[zx.q(x22_1)] = v3_1.d
                                v3_1.d = arg2[zx.q(x8_7)]
                                v4_1.d = v2_1.d f* v1_1:8.d
                                v2_1.d = v2_1.d f* v1_1:0xc.d
                                x8_7 += 1
                                v3_1.d = v4_1.d f+ v3_1.d
                                arg2[zx.q(x8_7)] = v3_1.d
                                v3_1.d = arg2[zx.q(x9_5)]
                                x9_5 += 1
                                v2_1.d = v2_1.d f+ v3_1.d
                                arg2[zx.q(x9_5)] = v2_1.d
                            while (i_9 != 1)
                            var_60.o = v1_1
                    case 1
                        if (arg3 != 0)
                            v0_1 = var_a0.o
                            v1_1 = var_60.o
                            uint32_t x8_17 = x22_1 << 1
                            uint32_t x9_12 = x8_17 + x22_1
                            uint64_t i_29 = zx.q(arg3)
                            float* x11_17 = arg2
                            float* x12_13 = x21_1
                            uint64_t i_10
                            
                            do
                                v2_1.d = *x12_13
                                x12_13 = &x12_13[1]
                                v3_1.d = *x11_17
                                v1_1 = vaddq_f32(v0_1, v1_1)
                                v5_1.d = v2_1.d f* v1_1.d
                                v3_1.d = v5_1.d f+ v3_1.d
                                v4_1.d = x21_1[zx.q(x22_1)]
                                *x11_17 = v3_1.d
                                x11_17 = &x11_17[1]
                                v3_1.d = arg2[zx.q(x22_1)]
                                v2_1.d = v2_1.d f* v1_1:8.d
                                v5_1.d = v4_1.d f* v1_1:4.d
                                i_10 = i_29
                                i_29 -= 1
                                v3_1.d = v5_1.d f+ v3_1.d
                                arg2[zx.q(x22_1)] = v3_1.d
                                v3_1.d = arg2[zx.q(x8_17)]
                                x8_17 += 1
                                x22_1 += 1
                                v2_1.d = v2_1.d f+ v3_1.d
                                arg2[zx.q(x8_17)] = v2_1.d
                                v2_1.d = arg2[zx.q(x9_12)]
                                v3_1.d = v4_1.d f* v1_1:0xc.d
                                x9_12 += 1
                                v2_1.d = v3_1.d f+ v2_1.d
                                arg2[zx.q(x9_12)] = v2_1.d
                            while (i_10 != 1)
                            var_60.o = v1_1
                    case 3
                        if (arg3 != 0)
                            v0_1 = var_a0.o
                            v1_1 = var_60.o
                            uint32_t x8_18 = x22_1 << 1
                            uint32_t x9_13 = x8_18 + x22_1
                            uint64_t i_30 = zx.q(arg3)
                            float* x11_18 = arg2
                            float* x12_14 = x21_1
                            uint64_t i_11
                            
                            do
                                v2_1.d = *x12_14
                                x12_14 = &x12_14[1]
                                v3_1.d = *x11_18
                                v1_1 = vaddq_f32(v0_1, v1_1)
                                v2_1.d = v2_1.d f* v1_1.d
                                v2_1.d = v2_1.d f+ v3_1.d
                                v4_1.d = x21_1[zx.q(x22_1)]
                                v5_1.d = x21_1[zx.q(x8_18)]
                                v6_1 = x21_1[zx.q(x9_13)]
                                *x11_18 = v2_1.d
                                x11_18 = &x11_18[1]
                                v2_1.d = arg2[zx.q(x22_1)]
                                v3_1.d = v4_1.d f* v1_1:4.d
                                x9_13 += 1
                                x8_18 += 1
                                v2_1.d = v3_1.d f+ v2_1.d
                                arg2[zx.q(x22_1)] = v2_1.d
                                v2_1.d = arg2[zx.q(x8_18)]
                                v3_1.d = v5_1.d f* v1_1:8.d
                                i_11 = i_30
                                i_30 -= 1
                                x22_1 += 1
                                v2_1.d = v3_1.d f+ v2_1.d
                                arg2[zx.q(x8_18)] = v2_1.d
                                v2_1.d = arg2[zx.q(x9_13)]
                                v3_1.d = v6_1 f* v1_1:0xc.d
                                v2_1.d = v3_1.d f+ v2_1.d
                                arg2[zx.q(x9_13)] = v2_1.d
                            while (i_11 != 1)
                            var_60.o = v1_1
                    case 5
                        if (arg3 != 0)
                            v0_1 = var_a0.o
                            v1_1 = var_60.o
                            uint32_t x8_19 = x22_1 << 1
                            uint32_t x9_14 = x22_1 << 2
                            uint32_t x10_16 = x8_19 + x22_1
                            uint32_t x11_19 = x9_14 + x22_1
                            uint64_t i_37 = zx.q(arg3)
                            float* x14_14 = arg2
                            float* x15_5 = x21_1
                            uint64_t i_12
                            
                            do
                                v2_1.d = *x15_5
                                x15_5 = &x15_5[1]
                                v3_1.d = x21_1[zx.q(x8_19)]
                                v4_1.d = x21_1[zx.q(x10_16)]
                                v1_1 = vaddq_f32(v0_1, v1_1)
                                v3_1.d = v3_1.d f+ v4_1.d
                                v4_1.d = *x14_14
                                v3_1.d = v3_1.d f* float.s(0x3f333333)
                                v2_1.d = v2_1.d f* v1_1.d
                                arg1 = zx.q(x22_1) << 2
                                v2_1.d = v2_1.d f+ v3_1.d
                                v7_1 = *(x21_1 + arg1)
                                v2_1.d = v4_1.d f+ v2_1.d
                                v5_1.d = x21_1[zx.q(x9_14)]
                                v6_1 = x21_1[zx.q(x11_19)]
                                *x14_14 = v2_1.d
                                x14_14 = &x14_14[1]
                                v2_1.d = *(arg2 + arg1)
                                v4_1.d = v7_1 f* v1_1:4.d
                                v3_1.d = v4_1.d f+ v3_1.d
                                x11_19 += 1
                                v2_1.d = v3_1.d f+ v2_1.d
                                *(arg2 + arg1) = v2_1.d
                                v2_1.d = arg2[zx.q(x8_19)]
                                v3_1.d = v5_1.d f* v1_1:8.d
                                x9_14 += 1
                                x10_16 += 1
                                v2_1.d = v3_1.d f+ v2_1.d
                                arg2[zx.q(x8_19)] = v2_1.d
                                v2_1.d = arg2[zx.q(x10_16)]
                                v3_1.d = v6_1 f* v1_1:0xc.d
                                x8_19 += 1
                                i_12 = i_37
                                i_37 -= 1
                                v2_1.d = v3_1.d f+ v2_1.d
                                x22_1 += 1
                                arg2[zx.q(x10_16)] = v2_1.d
                            while (i_12 != 1)
                            var_60.o = v1_1
                    case 7
                        if (arg3 != 0)
                            v0_1.q = var_a0.q
                            int64_t var_98
                            v1_1.q = var_98
                            v3_1.q = var_60
                            int64_t var_58
                            v2_1.q = var_58
                            uint32_t x8_20 = x22_1 << 1
                            uint32_t x9_15 = x22_1 << 2
                            uint32_t x11_20 = x8_20 + x22_1
                            uint64_t i_31 = zx.q(arg3)
                            uint32_t x12_15 = x9_15 + x22_1
                            uint32_t x13_18 = x22_1 * 7
                            uint32_t x14_15 = x11_20 << 1
                            v4_1.d = fconvert.s(0.5f)
                            float* x16_20 = arg2
                            float* x17_4 = x21_1
                            uint64_t i_13
                            
                            do
                                v5_1.d = *x17_4
                                x17_4 = &x17_4[1]
                                v7_1 = x21_1[zx.q(x8_20)]
                                v16_1 = x21_1[zx.q(x11_20)]
                                v3_1 = vadd_f32(v0_1, v3_1)
                                v7_1 = (v7_1 + v16_1) * float.s(0x3f333333)
                                v5_1.d = v5_1.d f* v3_1.d
                                arg1 = zx.q(x22_1) << 2
                                v5_1.d = v5_1.d f+ v7_1
                                v20_1 = *(x21_1 + arg1)
                                v5_1.d = v5_1.d f+ *x16_20
                                v6_1 = x21_1[zx.q(x9_15)]
                                v17_1 = x21_1[zx.q(x12_15)]
                                v18_1 = x21_1[zx.q(x14_15)]
                                v19_1 = x21_1[zx.q(x13_18)]
                                *x16_20 = v5_1.d
                                x16_20 = &x16_20[1]
                                v5_1.d = *(arg2 + arg1)
                                v5_1.d = v20_1 f* v3_1:4.d + v7_1 f+ v5_1.d
                                *(arg2 + arg1) = v5_1.d
                                v5_1.d = arg2[zx.q(x8_20)]
                                v2_1 = vadd_f32(v1_1, v2_1)
                                v5_1.d = (v6_1 + v18_1) f* v4_1.d f* v2_1.d f+ v5_1.d
                                arg2[zx.q(x8_20)] = v5_1.d
                                v5_1.d = arg2[zx.q(x11_20)]
                                x13_18 += 1
                                x14_15 += 1
                                x12_15 += 1
                                x9_15 += 1
                                x11_20 += 1
                                x8_20 += 1
                                i_13 = i_31
                                i_31 -= 1
                                v5_1.d = (v17_1 + v19_1) f* v4_1.d f* v2_1:4.d f+ v5_1.d
                                x22_1 += 1
                                arg2[zx.q(x11_20)] = v5_1.d
                            while (i_13 != 1)
                            var_60 = v3_1.q
                            var_58.d = v2_1.d
        case 5
            uint64_t x8_9 = zx.q(*(x20_1 + 0x48) - 1)
            int64_t var_50_1
            
            if (x8_9.d u<= 7)
                switch (x8_9)
                    case 0
                        if (arg3 != 0)
                            v0_1 = var_a0.o
                            v1_1.q = var_90
                            v3_1 = var_60.o
                            v2_1.q = var_50
                            uint32_t x8_10 = x22_1 << 1
                            uint32_t x10_10 = x22_1 << 2
                            uint32_t x9_6 = x8_10 + x22_1
                            uint32_t x11_9 = x10_10 + x22_1
                            uint64_t i_35 = zx.q(arg3)
                            float* x13_3 = arg2
                            uint64_t i_14
                            
                            do
                                v4_1.d = *x21_1
                                x21_1 = &x21_1[1]
                                v5_1.d = *x13_3
                                v3_1 = vaddq_f32(v0_1, v3_1)
                                v5_1.d = v5_1.d f+ v4_1.d f* v3_1.d
                                *x13_3 = v5_1.d
                                x13_3 = &x13_3[1]
                                v5_1.d = arg2[zx.q(x22_1)]
                                v2_1 = vadd_f32(v1_1, v2_1)
                                i_14 = i_35
                                i_35 -= 1
                                v5_1.d = v4_1.d f* v3_1:4.d f+ v5_1.d
                                arg2[zx.q(x22_1)] = v5_1.d
                                v5_1.d = arg2[zx.q(x8_10)]
                                x8_10 += 1
                                x22_1 += 1
                                v5_1.d = v4_1.d f* v3_1:8.d f+ v5_1.d
                                arg2[zx.q(x8_10)] = v5_1.d
                                v5_1.d = arg2[zx.q(x9_6)]
                                x9_6 += 1
                                v5_1.d = v4_1.d f* v3_1:0xc.d f+ v5_1.d
                                arg2[zx.q(x9_6)] = v5_1.d
                                v5_1.d = arg2[zx.q(x10_10)]
                                v6_1 = v4_1.d f* v2_1.d
                                v4_1.d = v4_1.d f* v2_1:4.d
                                x10_10 += 1
                                v5_1.d = v6_1 f+ v5_1.d
                                arg2[zx.q(x10_10)] = v5_1.d
                                v5_1.d = arg2[zx.q(x11_9)]
                                x11_9 += 1
                                v4_1.d = v4_1.d f+ v5_1.d
                                arg2[zx.q(x11_9)] = v4_1.d
                            while (i_14 != 1)
                            var_60.o = v3_1
                            var_50_1 = v2_1.q
                    case 1
                        if (arg3 != 0)
                            v0_1 = var_a0.o
                            v1_1.q = var_90
                            v3_1 = var_60.o
                            v2_1.q = var_50
                            uint32_t x8_21 = x22_1 << 1
                            uint32_t x9_16 = x22_1 << 2
                            uint32_t x10_17 = x8_21 + x22_1
                            uint32_t x11_21 = x9_16 + x22_1
                            uint64_t i_38 = zx.q(arg3)
                            v4_1.d = fconvert.s(0.5f)
                            float* x13_19 = arg2
                            float* x14_16 = x21_1
                            uint64_t i_15
                            
                            do
                                v5_1.d = *x14_16
                                x14_16 = &x14_16[1]
                                v6_1 = *x13_19
                                v3_1 = vaddq_f32(v0_1, v3_1)
                                v7_1 = x21_1[zx.q(x22_1)]
                                *x13_19 = v5_1.d f* v3_1.d + v6_1
                                x13_19 = &x13_19[1]
                                v6_1 = arg2[zx.q(x22_1)]
                                v2_1 = vadd_f32(v1_1, v2_1)
                                i_15 = i_38
                                i_38 -= 1
                                arg2[zx.q(x22_1)] = v7_1 f* v3_1:4.d + v6_1
                                v16_1 = (v5_1.d f+ v7_1) f* v4_1.d
                                arg2[zx.q(x8_21)] = v16_1 f* v3_1:8.d + arg2[zx.q(x8_21)]
                                v5_1.d = v5_1.d f* v2_1.d
                                x10_17 += 1
                                arg2[zx.q(x10_17)] = v16_1 f* v3_1:0xc.d + arg2[zx.q(x10_17)]
                                x9_16 += 1
                                x8_21 += 1
                                x22_1 += 1
                                v5_1.d = v5_1.d f+ arg2[zx.q(x9_16)]
                                arg2[zx.q(x9_16)] = v5_1.d
                                v5_1.d = arg2[zx.q(x11_21)]
                                x11_21 += 1
                                v5_1.d = v7_1 f* v2_1:4.d f+ v5_1.d
                                arg2[zx.q(x11_21)] = v5_1.d
                            while (i_15 != 1)
                            var_60.o = v3_1
                            var_50_1 = v2_1.q
                    case 3
                        if (arg3 != 0)
                            v0_1 = var_a0.o
                            v1_1.q = var_90
                            v3_1 = var_60.o
                            v2_1.q = var_50
                            uint32_t x8_22 = x22_1 << 1
                            uint32_t x9_17 = x22_1 << 2
                            uint32_t x10_18 = x8_22 + x22_1
                            uint32_t x11_22 = x9_17 + x22_1
                            uint64_t i_39 = zx.q(arg3)
                            v4_1.d = fconvert.s(0.5f)
                            v5_1.d = fconvert.s(0.25f)
                            float* x13_20 = arg2
                            float* x14_17 = x21_1
                            uint64_t i_16
                            
                            do
                                v6_1 = *x14_17
                                x14_17 = &x14_17[1]
                                v7_1 = *x13_20
                                v3_1 = vaddq_f32(v0_1, v3_1)
                                v16_1 = x21_1[zx.q(x22_1)]
                                v17_1 = x21_1[zx.q(x8_22)]
                                v18_1 = x21_1[zx.q(x10_18)]
                                *x13_20 = v6_1 f* v3_1.d + v7_1
                                x13_20 = &x13_20[1]
                                v6_1 = v6_1 + v16_1
                                arg2[zx.q(x22_1)] = v16_1 f* v3_1:4.d + arg2[zx.q(x22_1)]
                                arg2[zx.q(x8_22)] = v6_1 f* v4_1.d f* v3_1:8.d + arg2[zx.q(x8_22)]
                                arg2[zx.q(x10_18)] = (v6_1 + v17_1 + v18_1) f* v5_1.d f* v3_1:0xc.d
                                    + arg2[zx.q(x10_18)]
                                v6_1 = arg2[zx.q(x9_17)]
                                v2_1 = vadd_f32(v1_1, v2_1)
                                arg2[zx.q(x9_17)] = v17_1 f* v2_1.d + v6_1
                                x11_22 += 1
                                x9_17 += 1
                                x10_18 += 1
                                x8_22 += 1
                                i_16 = i_39
                                i_39 -= 1
                                x22_1 += 1
                                arg2[zx.q(x11_22)] = v18_1 f* v2_1:4.d + arg2[zx.q(x11_22)]
                            while (i_16 != 1)
                            var_60.o = v3_1
                            var_50_1 = v2_1.q
                    case 5
                        if (arg3 != 0)
                            v0_1 = var_a0.o
                            v1_1.q = var_90
                            v3_1 = var_60.o
                            v2_1.q = var_50
                            uint32_t x8_23 = x22_1 << 1
                            uint32_t x10_19 = x22_1 << 2
                            uint32_t x9_18 = x8_23 + x22_1
                            uint32_t x11_23 = x10_19 + x22_1
                            uint64_t i_40 = zx.q(arg3)
                            float* x13_21 = arg2
                            float* x14_18 = x21_1
                            uint64_t i_17
                            
                            do
                                v4_1.d = *x14_18
                                x14_18 = &x14_18[1]
                                v5_1.d = *x13_21
                                v3_1 = vaddq_f32(v0_1, v3_1)
                                v4_1.d = v4_1.d f* v3_1.d
                                arg1 = zx.q(x10_19) << 2
                                v4_1.d = v4_1.d f+ v5_1.d
                                v6_1 = x21_1[zx.q(x22_1)]
                                v7_1 = x21_1[zx.q(x8_23)]
                                v16_1 = x21_1[zx.q(x9_18)]
                                v17_1 = *(x21_1 + arg1)
                                v18_1 = x21_1[zx.q(x11_23)]
                                *x13_21 = v4_1.d
                                x13_21 = &x13_21[1]
                                v4_1.d = arg2[zx.q(x22_1)]
                                v5_1.d = v6_1 f* v3_1:4.d
                                v2_1 = vadd_f32(v1_1, v2_1)
                                x11_23 += 1
                                v4_1.d = v5_1.d f+ v4_1.d
                                arg2[zx.q(x22_1)] = v4_1.d
                                v4_1.d = arg2[zx.q(x8_23)]
                                v5_1.d = v7_1 f* v3_1:8.d
                                x10_19 += 1
                                x9_18 += 1
                                v4_1.d = v5_1.d f+ v4_1.d
                                arg2[zx.q(x8_23)] = v4_1.d
                                v4_1.d = arg2[zx.q(x9_18)]
                                v5_1.d = v16_1 f* v3_1:0xc.d
                                x8_23 += 1
                                i_17 = i_40
                                i_40 -= 1
                                v4_1.d = v5_1.d f+ v4_1.d
                                arg2[zx.q(x9_18)] = v4_1.d
                                v4_1.d = *(arg2 + arg1)
                                v5_1.d = v17_1 f* v2_1.d
                                x22_1 += 1
                                v4_1.d = v5_1.d f+ v4_1.d
                                *(arg2 + arg1) = v4_1.d
                                v4_1.d = arg2[zx.q(x11_23)]
                                v5_1.d = v18_1 f* v2_1:4.d
                                v4_1.d = v5_1.d f+ v4_1.d
                                arg2[zx.q(x11_23)] = v4_1.d
                            while (i_17 != 1)
                            var_60.o = v3_1
                            var_50_1 = v2_1.q
                    case 7
                        if (arg3 != 0)
                            v0_1 = var_a0.o
                            v1_1.q = var_90
                            v3_1 = var_60.o
                            v2_1.q = var_50
                            uint32_t x8_24 = x22_1 << 1
                            uint32_t x9_19 = x22_1 << 2
                            uint32_t x10_20 = x8_24 + x22_1
                            uint32_t x11_24 = x9_19 + x22_1
                            uint32_t x12_17 = x22_1 * 7
                            uint32_t x13_22 = x10_20 << 1
                            uint64_t i_43 = zx.q(arg3)
                            v4_1.d = fconvert.s(0.5f)
                            float* x15_22 = arg2
                            float* x16_27 = x21_1
                            uint64_t i_18
                            
                            do
                                v5_1.d = *x16_27
                                x16_27 = &x16_27[1]
                                v16_1 = *x15_22
                                v3_1 = vaddq_f32(v0_1, v3_1)
                                v5_1.d = v5_1.d f* v3_1.d
                                arg1 = zx.q(x8_24) << 2
                                v5_1.d = v5_1.d f+ v16_1
                                v6_1 = x21_1[zx.q(x13_22)]
                                v7_1 = x21_1[zx.q(x12_17)]
                                v17_1 = x21_1[zx.q(x22_1)]
                                v18_1 = *(x21_1 + arg1)
                                v19_1 = x21_1[zx.q(x10_20)]
                                v20_1 = x21_1[zx.q(x9_19)]
                                float v21_1 = x21_1[zx.q(x11_24)]
                                *x15_22 = v5_1.d
                                x15_22 = &x15_22[1]
                                v5_1.d = arg2[zx.q(x22_1)]
                                v2_1 = vadd_f32(v1_1, v2_1)
                                v5_1.d = v17_1 f* v3_1:4.d f+ v5_1.d
                                arg2[zx.q(x22_1)] = v5_1.d
                                v5_1.d = *(arg2 + arg1)
                                v5_1.d = v18_1 f* v3_1:8.d f+ v5_1.d
                                *(arg2 + arg1) = v5_1.d
                                v5_1.d = arg2[zx.q(x10_20)]
                                x12_17 += 1
                                x13_22 += 1
                                v5_1.d = v19_1 f* v3_1:0xc.d f+ v5_1.d
                                arg2[zx.q(x10_20)] = v5_1.d
                                v5_1.d = arg2[zx.q(x9_19)]
                                x11_24 += 1
                                x9_19 += 1
                                x10_20 += 1
                                v5_1.d = (v20_1 + v6_1) f* v4_1.d f* v2_1.d f+ v5_1.d
                                arg2[zx.q(x9_19)] = v5_1.d
                                v5_1.d = arg2[zx.q(x11_24)]
                                x8_24 += 1
                                i_18 = i_43
                                i_43 -= 1
                                v5_1.d = (v21_1 + v7_1) f* v4_1.d f* v2_1:4.d f+ v5_1.d
                                x22_1 += 1
                                arg2[zx.q(x11_24)] = v5_1.d
                            while (i_18 != 1)
                            var_60.o = v3_1
                            var_50_1 = v2_1.q
        case 7
            uint64_t x8_12 = zx.q(*(x20_1 + 0x48) - 1)
            
            if (x8_12.d u<= 7)
                switch (x8_12)
                    case 0
                        if (arg3 != 0)
                            v0_1 = var_a0.o
                            v2_1 = var_60.o
                            v3_1 = var_50.o
                            uint32_t x8_13 = x22_1 << 1
                            uint32_t x9_7 = x22_1 << 2
                            uint32_t x10_12 = x8_13 + x22_1
                            uint32_t x11_11 = x9_7 + x22_1
                            uint32_t x12_9 = x10_12 << 1
                            uint32_t x13_5 = x22_1 * 7
                            uint64_t i_41 = zx.q(arg3)
                            float* x15_1 = arg2
                            uint64_t i_19
                            
                            do
                                v4_1.d = *x21_1
                                x21_1 = &x21_1[1]
                                v5_1.d = *x15_1
                                v2_1 = vaddq_f32(v0_1, v2_1)
                                v5_1.d = v5_1.d f+ v4_1.d f* v2_1.d
                                *x15_1 = v5_1.d
                                x15_1 = &x15_1[1]
                                v5_1.d = arg2[zx.q(x22_1)]
                                v3_1 = vaddq_f32(var_90.o, v3_1)
                                i_19 = i_41
                                i_41 -= 1
                                v5_1.d = v4_1.d f* v2_1:4.d f+ v5_1.d
                                arg2[zx.q(x22_1)] = v5_1.d
                                v5_1.d = arg2[zx.q(x8_13)]
                                x8_13 += 1
                                x22_1 += 1
                                v5_1.d = v4_1.d f* v2_1:8.d f+ v5_1.d
                                arg2[zx.q(x8_13)] = v5_1.d
                                v5_1.d = arg2[zx.q(x10_12)]
                                x10_12 += 1
                                v5_1.d = v4_1.d f* v2_1:0xc.d f+ v5_1.d
                                arg2[zx.q(x10_12)] = v5_1.d
                                v5_1.d = arg2[zx.q(x9_7)]
                                x9_7 += 1
                                v5_1.d = v4_1.d f* v3_1.d f+ v5_1.d
                                arg2[zx.q(x9_7)] = v5_1.d
                                v5_1.d = arg2[zx.q(x11_11)]
                                x11_11 += 1
                                v5_1.d = v4_1.d f* v3_1:4.d f+ v5_1.d
                                arg2[zx.q(x11_11)] = v5_1.d
                                v5_1.d = arg2[zx.q(x12_9)]
                                v6_1 = v4_1.d f* v3_1:8.d
                                v4_1.d = v4_1.d f* v3_1:0xc.d
                                x12_9 += 1
                                v5_1.d = v6_1 f+ v5_1.d
                                arg2[zx.q(x12_9)] = v5_1.d
                                v5_1.d = arg2[zx.q(x13_5)]
                                x13_5 += 1
                                v4_1.d = v4_1.d f+ v5_1.d
                                arg2[zx.q(x13_5)] = v4_1.d
                            while (i_19 != 1)
                            var_60.o = v2_1
                            var_50.o = v3_1
                    case 1
                        if (arg3 != 0)
                            v0_1 = var_a0.o
                            v2_1 = var_60.o
                            v3_1 = var_50.o
                            uint32_t x8_25 = x22_1 << 1
                            uint32_t x9_20 = x22_1 << 2
                            uint32_t x10_21 = x8_25 + x22_1
                            uint32_t x11_25 = x9_20 + x22_1
                            uint32_t x12_19 = x22_1 * 7
                            uint32_t x13_23 = x10_21 << 1
                            uint64_t i_44 = zx.q(arg3)
                            v4_1.d = fconvert.s(0.5f)
                            float* x15_23 = arg2
                            float* x16_28 = x21_1
                            uint64_t i_20
                            
                            do
                                v6_1 = *x16_28
                                x16_28 = &x16_28[1]
                                v7_1 = *x15_23
                                v2_1 = vaddq_f32(v0_1, v2_1)
                                v5_1.d = x21_1[zx.q(x22_1)]
                                *x15_23 = v6_1 f* v2_1.d + v7_1
                                x15_23 = &x15_23[1]
                                v7_1 = arg2[zx.q(x22_1)]
                                v3_1 = vaddq_f32(var_90.o, v3_1)
                                i_20 = i_44
                                i_44 -= 1
                                arg2[zx.q(x22_1)] = v5_1.d f* v2_1:4.d + v7_1
                                v16_1 = (v6_1 f+ v5_1.d) f* v4_1.d
                                arg2[zx.q(x8_25)] = v16_1 f* v2_1:8.d + arg2[zx.q(x8_25)]
                                x10_21 += 1
                                x8_25 += 1
                                arg2[zx.q(x10_21)] = v16_1 f* v2_1:0xc.d + arg2[zx.q(x10_21)]
                                x9_20 += 1
                                arg2[zx.q(x9_20)] = v6_1 f* v3_1.d + arg2[zx.q(x9_20)]
                                v16_1 = v5_1.d f* v3_1:4.d
                                v5_1.d = v5_1.d f* v3_1:0xc.d
                                x11_25 += 1
                                arg2[zx.q(x11_25)] = v16_1 + arg2[zx.q(x11_25)]
                                x13_23 += 1
                                x22_1 += 1
                                arg2[zx.q(x13_23)] = v6_1 f* v3_1:8.d + arg2[zx.q(x13_23)]
                                x12_19 += 1
                                v5_1.d = v5_1.d f+ arg2[zx.q(x12_19)]
                                arg2[zx.q(x12_19)] = v5_1.d
                            while (i_20 != 1)
                            var_60.o = v2_1
                            var_50.o = v3_1
                    case 3
                        if (arg3 != 0)
                            v0_1 = var_a0.o
                            v2_1 = var_60.o
                            v3_1 = var_50.o
                            uint32_t x8_26 = x22_1 << 1
                            uint32_t x9_21 = x22_1 << 2
                            uint32_t x11_26 = x8_26 + x22_1
                            uint64_t i_32 = zx.q(arg3)
                            uint32_t x12_20 = x9_21 + x22_1
                            uint32_t x13_25 = x22_1 * 7
                            uint32_t x14_19 = x11_26 << 1
                            v4_1.d = fconvert.s(0.5f)
                            v5_1.d = fconvert.s(0.25f)
                            float* x15_24 = arg2
                            float* x16_29 = x21_1
                            uint64_t i_21
                            
                            do
                                v7_1 = *x16_29
                                x16_29 = &x16_29[1]
                                v16_1 = *x15_24
                                v2_1 = vaddq_f32(v0_1, v2_1)
                                v17_1 = x21_1[zx.q(x22_1)]
                                v18_1 = x21_1[zx.q(x8_26)]
                                v6_1 = x21_1[zx.q(x11_26)]
                                *x15_24 = v7_1 f* v2_1.d + v16_1
                                x15_24 = &x15_24[1]
                                v16_1 = arg2[zx.q(x22_1)]
                                v3_1 = vaddq_f32(var_90.o, v3_1)
                                x11_26 += 1
                                arg2[zx.q(x22_1)] = v17_1 f* v2_1:4.d + v16_1
                                v19_1 = v7_1 + v17_1
                                arg2[zx.q(x8_26)] = v19_1 f* v4_1.d f* v2_1:8.d + arg2[zx.q(x8_26)]
                                arg2[zx.q(x11_26)] = (v19_1 + v18_1 + v6_1) f* v5_1.d f* v2_1:0xc.d
                                    + arg2[zx.q(x11_26)]
                                arg2[zx.q(x9_21)] =
                                    (v7_1 + v18_1) f* v4_1.d f* v3_1.d + arg2[zx.q(x9_21)]
                                arg1 = zx.q(x12_20) << 2
                                *(arg2 + arg1) =
                                    (v17_1 + v6_1) f* v4_1.d f* v3_1:4.d + *(arg2 + arg1)
                                arg2[zx.q(x14_19)] = v18_1 f* v3_1.d + arg2[zx.q(x14_19)]
                                x13_25 += 1
                                x14_19 += 1
                                x12_20 += 1
                                x9_21 += 1
                                x8_26 += 1
                                i_21 = i_32
                                i_32 -= 1
                                x22_1 += 1
                                arg2[zx.q(x13_25)] = v6_1 f* v3_1:4.d + arg2[zx.q(x13_25)]
                            while (i_21 != 1)
                            var_60.o = v2_1
                            var_50.o = v3_1
                    case 5
                        if (arg3 != 0)
                            v0_1 = var_a0.o
                            v2_1 = var_60.o
                            v3_1 = var_50.o
                            uint32_t x8_27 = x22_1 << 1
                            uint32_t x9_22 = x22_1 << 2
                            uint32_t x10_22 = x8_27 + x22_1
                            uint32_t x11_27 = x9_22 + x22_1
                            uint32_t x12_22 = x22_1 * 7
                            uint32_t x13_26 = x10_22 << 1
                            uint64_t i_45 = zx.q(arg3)
                            v4_1.d = fconvert.s(0.5f)
                            float* x15_25 = arg2
                            float* x16_30 = x21_1
                            uint64_t i_22
                            
                            do
                                v5_1.d = *x16_30
                                x16_30 = &x16_30[1]
                                v6_1 = *x15_25
                                v2_1 = vaddq_f32(v0_1, v2_1)
                                v7_1 = x21_1[zx.q(x22_1)]
                                v16_1 = x21_1[zx.q(x8_27)]
                                v17_1 = x21_1[zx.q(x10_22)]
                                v18_1 = x21_1[zx.q(x9_22)]
                                v19_1 = x21_1[zx.q(x11_27)]
                                *x15_25 = v5_1.d f* v2_1.d + v6_1
                                x15_25 = &x15_25[1]
                                v5_1.d = v5_1.d f+ v18_1
                                arg2[zx.q(x22_1)] = v7_1 f* v2_1:4.d + arg2[zx.q(x22_1)]
                                v6_1 = arg2[zx.q(x8_27)]
                                v3_1 = vaddq_f32(var_90.o, v3_1)
                                v5_1.d = v5_1.d f* v4_1.d
                                v5_1.d = v5_1.d f* v3_1.d
                                arg2[zx.q(x8_27)] = v16_1 f* v2_1:8.d + v6_1
                                arg2[zx.q(x10_22)] = v17_1 f* v2_1:0xc.d + arg2[zx.q(x10_22)]
                                arg1 = zx.q(x12_22) << 2
                                x12_22 += 1
                                v5_1.d = v5_1.d f+ arg2[zx.q(x9_22)]
                                arg2[zx.q(x9_22)] = v5_1.d
                                v5_1.d = arg2[zx.q(x11_27)]
                                v5_1.d = (v7_1 + v19_1) f* v4_1.d f* v3_1:4.d f+ v5_1.d
                                arg2[zx.q(x11_27)] = v5_1.d
                                v5_1.d = arg2[zx.q(x13_26)]
                                x13_26 += 1
                                x11_27 += 1
                                v5_1.d = v18_1 f* v3_1:8.d f+ v5_1.d
                                arg2[zx.q(x13_26)] = v5_1.d
                                v5_1.d = *(arg2 + arg1)
                                x9_22 += 1
                                x10_22 += 1
                                x8_27 += 1
                                i_22 = i_45
                                i_45 -= 1
                                v5_1.d = v19_1 f* v3_1:0xc.d f+ v5_1.d
                                x22_1 += 1
                                *(arg2 + arg1) = v5_1.d
                            while (i_22 != 1)
                            var_60.o = v2_1
                            var_50.o = v3_1
                    case 7
                        if (arg3 != 0)
                            v0_1 = var_a0.o
                            v2_1 = var_60.o
                            v3_1 = var_50.o
                            uint32_t x8_28 = x22_1 << 1
                            uint32_t x9_23 = x22_1 << 2
                            uint32_t x10_23 = x8_28 + x22_1
                            uint32_t x11_28 = x9_23 + x22_1
                            uint32_t x12_23 = x10_23 << 1
                            uint32_t x13_28 = x22_1 * 7
                            uint64_t i_46 = zx.q(arg3)
                            float* x15_26 = arg2
                            float* x16_31 = x21_1
                            uint64_t i_23
                            
                            do
                                v4_1.d = *x16_31
                                x16_31 = &x16_31[1]
                                v5_1.d = *x15_26
                                v2_1 = vaddq_f32(v0_1, v2_1)
                                v4_1.d = v4_1.d f* v2_1.d
                                arg1 = zx.q(x8_28) << 2
                                v4_1.d = v4_1.d f+ v5_1.d
                                v6_1 = x21_1[zx.q(x22_1)]
                                v7_1 = *(x21_1 + arg1)
                                v16_1 = x21_1[zx.q(x10_23)]
                                v17_1 = x21_1[zx.q(x9_23)]
                                v18_1 = x21_1[zx.q(x11_28)]
                                v19_1 = x21_1[zx.q(x12_23)]
                                v20_1 = x21_1[zx.q(x13_28)]
                                *x15_26 = v4_1.d
                                x15_26 = &x15_26[1]
                                v4_1.d = arg2[zx.q(x22_1)]
                                v5_1.d = v6_1 f* v2_1:4.d
                                v3_1 = vaddq_f32(var_90.o, v3_1)
                                x13_28 += 1
                                v4_1.d = v5_1.d f+ v4_1.d
                                arg2[zx.q(x22_1)] = v4_1.d
                                v4_1.d = *(arg2 + arg1)
                                v5_1.d = v7_1 f* v2_1:8.d
                                x12_23 += 1
                                x11_28 += 1
                                v4_1.d = v5_1.d f+ v4_1.d
                                *(arg2 + arg1) = v4_1.d
                                v4_1.d = arg2[zx.q(x10_23)]
                                v5_1.d = v16_1 f* v2_1:0xc.d
                                x9_23 += 1
                                x10_23 += 1
                                v4_1.d = v5_1.d f+ v4_1.d
                                arg2[zx.q(x10_23)] = v4_1.d
                                v4_1.d = arg2[zx.q(x9_23)]
                                v5_1.d = v17_1 f* v3_1.d
                                x8_28 += 1
                                i_23 = i_46
                                i_46 -= 1
                                v4_1.d = v5_1.d f+ v4_1.d
                                arg2[zx.q(x9_23)] = v4_1.d
                                v4_1.d = arg2[zx.q(x11_28)]
                                v5_1.d = v18_1 f* v3_1:4.d
                                x22_1 += 1
                                v4_1.d = v5_1.d f+ v4_1.d
                                arg2[zx.q(x11_28)] = v4_1.d
                                v4_1.d = arg2[zx.q(x12_23)]
                                v5_1.d = v19_1 f* v3_1:8.d
                                v4_1.d = v5_1.d f+ v4_1.d
                                arg2[zx.q(x12_23)] = v4_1.d
                                v4_1.d = arg2[zx.q(x13_28)]
                                v5_1.d = v20_1 f* v3_1:0xc.d
                                v4_1.d = v5_1.d f+ v4_1.d
                                arg2[zx.q(x13_28)] = v4_1.d
                            while (i_23 != 1)
                            var_60.o = v2_1
                            var_50.o = v3_1

if (arg6 != 0)
    memcpy(x20_1 + 0x15c, &var_80, x25_1 << 2)
