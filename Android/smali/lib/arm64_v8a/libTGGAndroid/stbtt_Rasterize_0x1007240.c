// 函数: stbtt_Rasterize
// 地址: 0x1007240
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_a0 = arg18.q
int64_t var_98 = arg17.q
int64_t var_88 = arg16.q
int64_t var_80 = arg15.q
int64_t var_78 = arg14.q
int64_t var_70 = arg13.q
int64_t var_68 = arg12.q
int64_t v13

if (arg8.d f> arg9.d)
    v13.d = arg9.d
else
    v13.d = arg8.d

if (arg3 s>= 1)
    arg12 = arg11
    arg13 = arg10
    arg15 = arg9
    arg14 = arg8
    int16_t* x25_1 = arg2
    int32_t* x20_1 = arg1
    uint64_t i_20 = zx.q(arg3)
    int32_t x22_1
    int64_t i_24
    
    if (arg3 != 1)
        i_24 = i_20 & 0xfffffffe
        int32_t x9_1 = 0
        int32_t x10_1 = 0
        void* x11_1 = &x25_1[0xd]
        int64_t i_19 = i_24
        int64_t i
        
        do
            uint32_t x13_1 = zx.d(*(x11_1 - 0xe))
            uint32_t x14_1 = zx.d(*x11_1)
            x11_1 += 0x1c
            
            if (x13_1 == 1)
                x9_1 += 1
            
            if (x14_1 == 1)
                x10_1 += 1
            
            i = i_19
            i_19 -= 2
        while (i != 2)
        x22_1 = x10_1 + x9_1
        
        if (i_24 != i_20)
            goto label_1007300
    else
        i_24 = 0
        x22_1 = 0
    label_1007300:
        int64_t i_16 = i_20 - i_24
        char* x8_2 = x25_1 + i_24 * 0xe + 0xc
        int64_t i_1
        
        do
            uint32_t x10_2 = zx.d(*x8_2)
            x8_2 = &x8_2[0xe]
            
            if (x10_2 == 1)
                x22_1 += 1
            
            i_1 = i_16
            i_16 -= 1
        while (i_1 != 1)
    
    if (x22_1 != 0)
        uint64_t x19_1 = zx.q(x22_1)
        int64_t v0
        int128_t v1
        int64_t v2
        int128_t v3
        int64_t v4
        int64_t v5_1
        int64_t v6_1
        int64_t v7_1
        arg1, v0, v1, v2, v3, v4, v5_1, v6_1, v7_1 = malloc(x19_1 << 2)
        
        if (arg1 != 0)
            v0.d = arg7.d f/ v13.d
            float var_2b0 = 0f
            float x26_2 = 0f
            int32_t x27_1 = -1
            v1.d = 0f
            uint64_t i_22 = i_20
            int16_t* x23_2 = x25_1
            arg16.d = v0.d f* v0.d
            v0.d = 0f
            uint64_t i_2
            
            do
                uint64_t x8_4 = zx.q(zx.d(x23_2[6].b) - 1)
                
                if (x8_4.d u<= 3)
                    switch (x8_4)
                        case 0
                            float x8_5 = var_2b0
                            
                            if ((x27_1 & 0x80000000) == 0)
                                arg1[zx.q(x27_1)] = x8_5 i- x26_2
                            
                            v0.w = *x23_2
                            v1.w = x23_2[1]
                            x27_1 += 1
                            v0.d = sx.d(v0.w)
                            v0:4.d = sx.d(v0:2.w)
                            v0:8.d = sx.d(v0:4.w)
                            v0:0xc.d = sx.d(v0:6.w)
                            v1.d = sx.d(v1.w)
                            v1:4.d = sx.d(v1:2.w)
                            v1:8.d = sx.d(v1:4.w)
                            v1:0xc.d = sx.d(v1:6.w)
                            v0.d = float.s(v0.d)
                            v1.d = float.s(v1.d)
                            var_2b0 = x8_5 i+ 1
                            x26_2 = x8_5
                        case 1
                            v0.w = *x23_2
                            v1.w = x23_2[1]
                            v0.d = sx.d(v0.w)
                            v0:4.d = sx.d(v0:2.w)
                            v0:8.d = sx.d(v0:4.w)
                            v0:0xc.d = sx.d(v0:6.w)
                            v1.d = sx.d(v1.w)
                            v1:4.d = sx.d(v1:2.w)
                            v1:8.d = sx.d(v1:4.w)
                            v1:0xc.d = sx.d(v1:6.w)
                            v0.d = float.s(v0.d)
                            v1.d = float.s(v1.d)
                            var_2b0 += 1
                        case 2
                            v2.w = x23_2[2]
                            v3.w = x23_2[3]
                            v4.w = *x23_2
                            v5_1.w = x23_2[1]
                            v2.d = sx.d(v2.w)
                            v2:4.d = sx.d(v2:2.w)
                            v2:8.d = sx.d(v2:4.w)
                            v2:0xc.d = sx.d(v2:6.w)
                            v3.d = sx.d(v3.w)
                            v3:4.d = sx.d(v3:2.w)
                            v3:8.d = sx.d(v3:4.w)
                            v3:0xc.d = sx.d(v3:6.w)
                            v4.d = sx.d(v4.w)
                            v4:4.d = sx.d(v4:2.w)
                            v4:8.d = sx.d(v4:4.w)
                            v4:0xc.d = sx.d(v4:6.w)
                            v5_1.d = sx.d(v5_1.w)
                            v5_1:4.d = sx.d(v5_1:2.w)
                            v5_1:8.d = sx.d(v5_1:4.w)
                            v5_1:0xc.d = sx.d(v5_1:6.w)
                            v2.d = float.s(v2.d)
                            v3.d = float.s(v3.d)
                            v4.d = float.s(v4.d)
                            v5_1.d = float.s(v5_1.d)
                            v0, v1, v2, v3, v4, v5_1, v6_1, v7_1, arg12, arg13, arg14, arg15, 
                                arg16 = sub_100dcf4(0, &var_2b0, 0, v0.d, v1, v2.d, v3, v4, v5_1, 
                                arg16, arg12, arg13, arg14, arg15)
                            goto label_10073c8
                        case 3
                            v2.w = x23_2[2]
                            v3.w = x23_2[3]
                            v4.w = x23_2[4]
                            v5_1.w = x23_2[5]
                            v6_1.w = *x23_2
                            v7_1.w = x23_2[1]
                            v2.d = sx.d(v2.w)
                            v2:4.d = sx.d(v2:2.w)
                            v2:8.d = sx.d(v2:4.w)
                            v2:0xc.d = sx.d(v2:6.w)
                            v3.d = sx.d(v3.w)
                            v3:4.d = sx.d(v3:2.w)
                            v3:8.d = sx.d(v3:4.w)
                            v3:0xc.d = sx.d(v3:6.w)
                            v4.d = sx.d(v4.w)
                            v4:4.d = sx.d(v4:2.w)
                            v4:8.d = sx.d(v4:4.w)
                            v4:0xc.d = sx.d(v4:6.w)
                            v5_1.d = sx.d(v5_1.w)
                            v5_1:4.d = sx.d(v5_1:2.w)
                            v5_1:8.d = sx.d(v5_1:4.w)
                            v5_1:0xc.d = sx.d(v5_1:6.w)
                            v6_1.d = sx.d(v6_1.w)
                            v6_1:4.d = sx.d(v6_1:2.w)
                            v6_1:8.d = sx.d(v6_1:4.w)
                            v6_1:0xc.d = sx.d(v6_1:6.w)
                            v7_1.d = sx.d(v7_1.w)
                            v7_1:4.d = sx.d(v7_1:2.w)
                            v7_1:8.d = sx.d(v7_1:4.w)
                            v7_1:0xc.d = sx.d(v7_1:6.w)
                            v2.d = float.s(v2.d)
                            v3.d = float.s(v3.d)
                            v4.d = float.s(v4.d)
                            v5_1.d = float.s(v5_1.d)
                            v6_1.d = float.s(v6_1.d)
                            v7_1.d = float.s(v7_1.d)
                            v0, v1, v2, v3, v4, v5_1, v6_1, v7_1, arg12, arg13, arg14, arg15, 
                                arg16, v13, arg17, arg18 = sub_100de3c(0, &var_2b0, 0, v0.d, v1.d, 
                                v2.d, v3.d, v4.d, v5_1.d, v6_1.d, v7_1.d, arg17, arg18, arg16.d)
                        label_10073c8:
                            v0.w = *x23_2
                            v1.w = x23_2[1]
                            v0.d = sx.d(v0.w)
                            v0:4.d = sx.d(v0:2.w)
                            v0:8.d = sx.d(v0:4.w)
                            v0:0xc.d = sx.d(v0:6.w)
                            v1.d = sx.d(v1.w)
                            v1:4.d = sx.d(v1:2.w)
                            v1:8.d = sx.d(v1:4.w)
                            v1:0xc.d = sx.d(v1:6.w)
                            v0.d = float.s(v0.d)
                            v1.d = float.s(v1.d)
                
                i_2 = i_22
                i_22 -= 1
                x23_2 = &x23_2[7]
            while (i_2 != 1)
            int64_t x8_8 = sx.q(var_2b0)
            int32_t* fp_1 = arg1
            fp_1[sx.q(x27_1)] = x8_8.d i- x26_2
            int32_t* x0_2
            int64_t v0_1
            int128_t v1_1
            int128_t v2_1
            int128_t v3_1
            int128_t v4_1
            int64_t v5_2
            int64_t v6_3
            int64_t v7_2
            x0_2, v0_1, v1_1, v2_1, v3_1, v4_1, v5_2, v6_3, v7_2 = malloc(x8_8 << 3)
            int32_t* x0_5
            
            if (x0_2 == 0)
                x0_5 = fp_1
            else
                int32_t x27_2 = -1
                v1_1.d = 0f
                v0_1.d = 0f
                var_2b0 = 0f
                uint64_t i_3
                
                do
                    uint64_t x8_10 = zx.q(zx.d(x25_1[6].b) - 1)
                    
                    if (x8_10.d u<= 3)
                        switch (x8_10)
                            case 0
                                float x8_11 = var_2b0
                                
                                if ((x27_2 & 0x80000000) == 0)
                                    fp_1[zx.q(x27_2)] = x8_11 i- x26_2
                                
                                v0_1.w = *x25_1
                                v1_1.w = x25_1[1]
                                x27_2 += 1
                                v0_1.d = sx.d(v0_1.w)
                                v0_1:4.d = sx.d(v0_1:2.w)
                                v0_1:8.d = sx.d(v0_1:4.w)
                                v0_1:0xc.d = sx.d(v0_1:6.w)
                                v1_1.d = sx.d(v1_1.w)
                                v1_1:4.d = sx.d(v1_1:2.w)
                                v1_1:8.d = sx.d(v1_1:4.w)
                                v1_1:0xc.d = sx.d(v1_1:6.w)
                                void* x9_9 = &x0_2[sx.q(x8_11) * 2]
                                v0_1.d = float.s(v0_1.d)
                                v1_1.d = float.s(v1_1.d)
                                x26_2 = x8_11
                                var_2b0 = x8_11 i+ 1
                                *x9_9 = v0_1.d
                                *(x9_9 + 4) = v1_1.d
                            case 1
                                v0_1.w = *x25_1
                                v1_1.w = x25_1[1]
                                int64_t x8_12 = sx.q(var_2b0)
                                v0_1.d = sx.d(v0_1.w)
                                v0_1:4.d = sx.d(v0_1:2.w)
                                v0_1:8.d = sx.d(v0_1:4.w)
                                v0_1:0xc.d = sx.d(v0_1:6.w)
                                v1_1.d = sx.d(v1_1.w)
                                v1_1:4.d = sx.d(v1_1:2.w)
                                v1_1:8.d = sx.d(v1_1:4.w)
                                v1_1:0xc.d = sx.d(v1_1:6.w)
                                void* x8_13 = &x0_2[x8_12 * 2]
                                v0_1.d = float.s(v0_1.d)
                                v1_1.d = float.s(v1_1.d)
                                var_2b0 = x8_12.d + 1
                                *x8_13 = v0_1.d
                                *(x8_13 + 4) = v1_1.d
                            case 2
                                v2_1.w = x25_1[2]
                                v3_1.w = x25_1[3]
                                v4_1.w = *x25_1
                                v5_2.w = x25_1[1]
                                v2_1.d = sx.d(v2_1.w)
                                v2_1:4.d = sx.d(v2_1:2.w)
                                v2_1:8.d = sx.d(v2_1:4.w)
                                v2_1:0xc.d = sx.d(v2_1:6.w)
                                v3_1.d = sx.d(v3_1.w)
                                v3_1:4.d = sx.d(v3_1:2.w)
                                v3_1:8.d = sx.d(v3_1:4.w)
                                v3_1:0xc.d = sx.d(v3_1:6.w)
                                v4_1.d = sx.d(v4_1.w)
                                v4_1:4.d = sx.d(v4_1:2.w)
                                v4_1:8.d = sx.d(v4_1:4.w)
                                v4_1:0xc.d = sx.d(v4_1:6.w)
                                v5_2.d = sx.d(v5_2.w)
                                v5_2:4.d = sx.d(v5_2:2.w)
                                v5_2:8.d = sx.d(v5_2:4.w)
                                v5_2:0xc.d = sx.d(v5_2:6.w)
                                v2_1.d = float.s(v2_1.d)
                                v3_1.d = float.s(v3_1.d)
                                v4_1.d = float.s(v4_1.d)
                                v5_2.d = float.s(v5_2.d)
                                v0_1, v1_1, v2_1, v3_1, v4_1, v5_2, v6_3, v7_2, arg12, arg13, 
                                    arg14, arg15, arg16 = sub_100dcf4(x0_2, &var_2b0, 0, v0_1.d, v1_1, 
                                    v2_1.d, v3_1, v4_1.q, v5_2, arg16, arg12, arg13, arg14, arg15)
                            label_100753c:
                                v0_1.w = *x25_1
                                v1_1.w = x25_1[1]
                                v0_1.d = sx.d(v0_1.w)
                                v0_1:4.d = sx.d(v0_1:2.w)
                                v0_1:8.d = sx.d(v0_1:4.w)
                                v0_1:0xc.d = sx.d(v0_1:6.w)
                                v1_1.d = sx.d(v1_1.w)
                                v1_1:4.d = sx.d(v1_1:2.w)
                                v1_1:8.d = sx.d(v1_1:4.w)
                                v1_1:0xc.d = sx.d(v1_1:6.w)
                                v0_1.d = float.s(v0_1.d)
                                v1_1.d = float.s(v1_1.d)
                            case 3
                                v2_1.w = x25_1[2]
                                v3_1.w = x25_1[3]
                                v4_1.w = x25_1[4]
                                v5_2.w = x25_1[5]
                                v6_3.w = *x25_1
                                v7_2.w = x25_1[1]
                                v2_1.d = sx.d(v2_1.w)
                                v2_1:4.d = sx.d(v2_1:2.w)
                                v2_1:8.d = sx.d(v2_1:4.w)
                                v2_1:0xc.d = sx.d(v2_1:6.w)
                                v3_1.d = sx.d(v3_1.w)
                                v3_1:4.d = sx.d(v3_1:2.w)
                                v3_1:8.d = sx.d(v3_1:4.w)
                                v3_1:0xc.d = sx.d(v3_1:6.w)
                                v4_1.d = sx.d(v4_1.w)
                                v4_1:4.d = sx.d(v4_1:2.w)
                                v4_1:8.d = sx.d(v4_1:4.w)
                                v4_1:0xc.d = sx.d(v4_1:6.w)
                                v5_2.d = sx.d(v5_2.w)
                                v5_2:4.d = sx.d(v5_2:2.w)
                                v5_2:8.d = sx.d(v5_2:4.w)
                                v5_2:0xc.d = sx.d(v5_2:6.w)
                                v6_3.d = sx.d(v6_3.w)
                                v6_3:4.d = sx.d(v6_3:2.w)
                                v6_3:8.d = sx.d(v6_3:4.w)
                                v6_3:0xc.d = sx.d(v6_3:6.w)
                                v7_2.d = sx.d(v7_2.w)
                                v7_2:4.d = sx.d(v7_2:2.w)
                                v7_2:8.d = sx.d(v7_2:4.w)
                                v7_2:0xc.d = sx.d(v7_2:6.w)
                                v2_1.d = float.s(v2_1.d)
                                v3_1.d = float.s(v3_1.d)
                                v4_1.d = float.s(v4_1.d)
                                v5_2.d = float.s(v5_2.d)
                                v6_3.d = float.s(v6_3.d)
                                v7_2.d = float.s(v7_2.d)
                                v0_1, v1_1, v2_1, v3_1, v4_1, v5_2, v6_3, v7_2, arg12, arg13, 
                                    arg14, arg15, arg16, v13, arg17, arg18 = sub_100de3c(x0_2, 
                                    &var_2b0, 0, v0_1.d, v1_1.d, v2_1.d, v3_1.d, v4_1.d, v5_2.d, 
                                    v6_3.d, v7_2.d, arg17, arg18, arg16.d)
                                goto label_100753c
                    
                    i_3 = i_20
                    i_20 -= 1
                    x25_1 = &x25_1[7]
                while (i_3 != 1)
                v0_1.d = fneg(arg15.d)
                fp_1[sx.q(x27_2)] = var_2b0 i- x26_2
                int32_t x9_11
                int64_t i_25
                
                if (x22_1 u>= 8)
                    i_25 = x19_1 & 0xfffffff8
                    void* x9_12 = &fp_1[4]
                    v1_1.q = 0
                    v1_1:8.q = 0
                    int64_t i_17 = i_25
                    v2_1.q = 0
                    v2_1:8.q = 0
                    int64_t i_4
                    
                    do
                        v3_1 = *(x9_12 - 0x10)
                        v4_1 = *x9_12
                        i_4 = i_17
                        i_17 -= 8
                        x9_12 += 0x20
                        v1_1 += v3_1
                        v2_1 += v4_1
                    while (i_4 != 8)
                    uint128_t v1_2
                    v1_2.d = vaddvq_u32(v2_1 + v1_1)
                    x9_11 = v1_2.d
                    
                    if (i_25 != x19_1)
                        goto label_10076c8
                else
                    i_25 = 0
                    x9_11 = 0
                label_10076c8:
                    int64_t i_18 = x19_1 - i_25
                    int32_t* x8_16 = &fp_1[i_25]
                    int64_t i_5
                    
                    do
                        int32_t x11_2 = *x8_16
                        x8_16 = &x8_16[1]
                        i_5 = i_18
                        i_18 -= 1
                        x9_11 += x11_2
                    while (i_5 != 1)
                
                if (arg6 == 0)
                    arg15.d = arg15.d
                else
                    arg15.d = v0_1.d
                
                int128_t* x0_7 = malloc(muls.dp.d(x9_11 + 1, 0x14))
                
                if (x0_7 != 0)
                    int64_t x8_18 = 0
                    int32_t x26_3 = 0
                    int32_t x9_13 = 0
                    float v0_2
                    float v1_3
                    float v3_2
                    
                    if (arg6 == 0)
                        do
                            uint64_t x13_3 = zx.q(fp_1[x8_18])
                            
                            if (x13_3.d s>= 1)
                                int64_t x14_3 = 0
                                int64_t x16_2 = 0
                                float* x15_4 = &x0_2[sx.q(x9_13) * 2]
                                int32_t x0_12 = x13_3.d - 1
                                void* x17_4 = &x0_2[1 + sx.q(x9_13) * 2]
                                
                                do
                                    v0_2 = x15_4[sx.q(x0_12) * 2 + 1]
                                    v1_3 = *x17_4
                                    v0_2 - v1_3
                                    bool cond:12_1 = v0_2 < v1_3
                                    bool cond:13_1 = v0_2 < v1_3
                                    bool cond:14_1 = v0_2 < v1_3
                                    bool cond:15_1 = v0_2 < v1_3
                                    bool cond:16_1 = v0_2 < v1_3
                                    
                                    if (not(v0_2 == v1_3))
                                        v1_3 = *(x15_4 + (x14_3 s>> 0x1d) + 4)
                                        int64_t x0_13 = sx.q(x0_12)
                                        int64_t x3_1 = x14_3 s>> 0x20
                                        int32_t* x1_7 = x0_7 + muls.dp.d(x26_3, 0x14)
                                        int64_t x4_3
                                        
                                        x4_3 = cond:13_1 ? x0_13 : x3_1
                                        
                                        int64_t x0_14
                                        
                                        x0_14 = cond:14_1 ? x3_1 : x0_13
                                        
                                        x1_7[4] = cond:12_1 ? 1 : 0
                                        
                                        v3_2 = cond:15_1 ? v0_2 : v1_3
                                        
                                        if (cond:16_1)
                                            v0_2 = v1_3
                                        
                                        v1_3 = x15_4[x0_14 * 2] f* arg14.d f+ arg13.d
                                        x26_3 += 1
                                        *x1_7 = x15_4[x4_3 * 2] f* arg14.d f+ arg13.d
                                        x1_7[1] = arg15.d f* v3_2 f+ arg12.d
                                        x1_7[2] = v1_3
                                        x1_7[3] = arg15.d f* v0_2 f+ arg12.d
                                    
                                    x0_12 = x16_2.d
                                    x16_2 += 1
                                    x14_3 += 0x100000000
                                    x17_4 += 8
                                while (x13_3 != x16_2)
                            
                            x8_18 += 1
                            x9_13 += x13_3.d
                        while (x8_18 != x19_1)
                    else
                        do
                            uint64_t x13_2 = zx.q(fp_1[x8_18])
                            
                            if (x13_2.d s>= 1)
                                int64_t x14_2 = 0
                                int64_t x16_1 = 0
                                int32_t* x15_2 = &x0_2[sx.q(x9_13) * 2]
                                int32_t x0_8 = x13_2.d - 1
                                int32_t* x17_2 = &x0_2[1 + sx.q(x9_13) * 2]
                                
                                do
                                    v0_2 = x15_2[sx.q(x0_8) * 2 + 1]
                                    v1_3 = *x17_2
                                    v0_2 - v1_3
                                    bool cond:18_1 = v0_2 > v1_3
                                    bool cond:19_1 = v0_2 > v1_3
                                    bool cond:20_1 = v0_2 > v1_3
                                    bool cond:21_1 = v0_2 > v1_3
                                    bool cond:22_1 = v0_2 > v1_3
                                    
                                    if (not(v0_2 == v1_3))
                                        v1_3 = *(x15_2 + (x14_2 s>> 0x1d) + 4)
                                        int64_t x0_9 = sx.q(x0_8)
                                        int64_t x3 = x14_2 s>> 0x20
                                        int32_t* x1_5 = x0_7 + muls.dp.d(x26_3, 0x14)
                                        int64_t x4_1
                                        
                                        x4_1 = cond:19_1 ? x0_9 : x3
                                        
                                        int64_t x0_10
                                        
                                        x0_10 = cond:20_1 ? x3 : x0_9
                                        
                                        x1_5[4] = cond:18_1 ? 1 : 0
                                        
                                        v3_2 = cond:21_1 ? v0_2 : v1_3
                                        
                                        if (cond:22_1)
                                            v0_2 = v1_3
                                        
                                        v1_3 = x15_2[x0_10 * 2] f* arg14.d f+ arg13.d
                                        x26_3 += 1
                                        *x1_5 = x15_2[x4_1 * 2] f* arg14.d f+ arg13.d
                                        x1_5[1] = arg15.d f* v3_2 f+ arg12.d
                                        x1_5[2] = v1_3
                                        x1_5[3] = arg15.d f* v0_2 f+ arg12.d
                                    
                                    x0_8 = x16_1.d
                                    x16_1 += 1
                                    x14_2 += 0x100000000
                                    x17_2 = &x17_2[2]
                                while (x13_2 != x16_1)
                            
                            x8_18 += 1
                            x9_13 += x13_2.d
                        while (x8_18 != x19_1)
                    sub_100dff4(x0_7, x26_3)
                    float v0_3
                    
                    if (x26_3 s>= 2)
                        int64_t x8_19 = 0
                        void* x10_11 = x0_7 + 0x14
                        int64_t x11_3 = 1
                        
                        while (true)
                            int32_t* x13_4 = x0_7 + x11_3 * 0x14
                            int32_t x15_5 = x13_4[4]
                            int32_t v1_4 = *x13_4
                            v0_3 = x13_4[1]
                            void* x13_5 = x10_11
                            var_2b0.q = *(x13_4 + 8)
                            int64_t x14_5 = x8_19
                            
                            while (true)
                                int64_t x15_6 = x14_5 & 0xffffffff
                                int128_t v2_3
                                v2_3.d = *(x0_7 + x15_6 * 0x14 + 4)
                                int32_t x13_6
                                
                                if (v0_3 f>= v2_3.d)
                                    x13_6 = x14_5.d + 1
                                    
                                    if (x11_3 == zx.q(x13_6))
                                        break
                                else
                                    int128_t* x15_7 = x0_7 + x15_6 * 0x14
                                    v2_3 = *x15_7
                                    int64_t x16_4 = x14_5 + 1
                                    x14_5 -= 1
                                    *(x13_5 + 0x10) = x15_7[1].d
                                    *x13_5 = v2_3
                                    x13_5 -= 0x14
                                    
                                    if (x16_4 s> 1)
                                        continue
                                    else
                                        x13_6 = 0
                                        
                                        if (x11_3 == 0)
                                            break
                                
                                int64_t x15_8 = var_2b0.q
                                void* x13_7 = x0_7 + muls.dp.d(x13_6, 0x14)
                                *x13_7 = v1_4
                                *(x13_7 + 4) = v0_3
                                *(x13_7 + 0x10) = x15_5
                                *(x13_7 + 8) = x15_8
                                break
                            
                            x11_3 += 1
                            x8_19 += 1
                            x10_11 += 0x14
                            
                            if (x11_3 == zx.q(x26_3))
                                break
                    
                    int64_t* i_10 = nullptr
                    int32_t x19_2 = *x20_1
                    float* x24_2
                    
                    if (x19_2 s< 0x41)
                        x24_2 = &var_2b0
                    else
                        x24_2 = malloc((1 | zx.q((0x7fffffff & x19_2) << 1)) << 0x20 s>> 0x1e)
                    
                    int32_t x8_21 = x20_1[1]
                    int32_t x11_4 = arg5
                    arg13.d = fconvert.s(1f)
                    *(x0_7 + muls.dp.d(x26_3, 0x14) + 4) = float.s(x8_21 + x11_4) f+ arg13.d
                    
                    if (x8_21 s>= 1)
                        float* x25_2 = &x24_2[sx.q(x19_2)]
                        int64_t* i_21 = nullptr
                        int32_t fp_2 = 0
                        int64_t* i_27 = nullptr
                        arg14.d = float.s(arg4)
                        arg15.d = 0f
                        int32_t x28_1 = x19_2
                        int128_t* x19_3 = x0_7
                        int64_t* i_23 = nullptr
                        int32_t var_2c0_1 = 0
                        int32_t var_2e4_1 = arg14.d
                        
                        while (true)
                            float var_2b4_2 = float.s(x11_4)
                            memset(x24_2, 0, zx.q(x28_1) << 0x20 s>> 0x1e)
                            memset(x25_2, 0, zx.q(x28_1 + 1) << 0x20 s>> 0x1e)
                            int64_t* i_28
                            float v21_1
                            
                            if (i_21 != 0)
                                i_28 = i_23
                                v21_1 = var_2b4_2
                                int64_t* i_26 = &i_10
                                
                                while (true)
                                    if (*(i_21 + 0x1c) > v21_1)
                                        i_26 = i_21
                                        i_21 = *i_26
                                        
                                        if (i_21 != 0)
                                            continue
                                    else
                                        *i_26 = *i_21
                                        
                                        if (*(i_21 + 0x14) == 0f)
                                        label_1008368:
                                            __assert2(
                                                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                                            "ExternalCode/stb/stb_truetype.h", 
                                                0xcca, 
                                                "void stbtt__rasterize_sorted_edges(stbtt__bitmap *, "
                                            "stbtt__edge *, int, int, int, int, void *)", 
                                                "z->direction")
                                        label_1008388:
                                            __assert2(
                                                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                                            "ExternalCode/stb/stb_truetype.h", 
                                                0xcdd, 
                                                "void stbtt__rasterize_sorted_edges(stbtt__bitmap *, "
                                            "stbtt__edge *, int, int, int, int, void *)", 
                                                "z->ey >= scan_y_top")
                                        label_10083a8:
                                            __assert2(
                                                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                                            "ExternalCode/stb/stb_truetype.h", 
                                                0xc21, 
                                                "void stbtt__fill_active_edges_new(float *, float *, "
                                            "int, stbtt__active_edge *, float)", 
                                                "e->sy <= y_bottom && e->ey >= y_top")
                                        label_10083c8:
                                            __assert2(
                                                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                                            "ExternalCode/stb/stb_truetype.h", 
                                                0xc3d, 
                                                "void stbtt__fill_active_edges_new(float *, float *, "
                                            "int, stbtt__active_edge *, float)", 
                                                "x >= 0 && x < len")
                                        label_10083e8:
                                            return stbtt_FreeBitmap(__assert2(
                                                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                                            "ExternalCode/stb/stb_truetype.h", 
                                                0xc62, 
                                                "void stbtt__fill_active_edges_new(float *, float *, "
                                            "int, stbtt__active_edge *, float)", 
                                                "fabs(area) <= 1.01f")) __tailcall
                                        
                                        *i_21 = i_27
                                        i_27 = i_21
                                        *(i_21 + 0x14) = 0
                                        i_21 = *i_26
                                        
                                        if (i_21 != 0)
                                            continue
                                    
                                    v0_3 = *(x19_3 + 4)
                                    arg12.d = v21_1 f+ arg13.d
                                    break
                                
                                if (v0_3 f<= arg12.d)
                                    goto label_1008058
                                
                                goto label_1007ad8
                            
                            i_28 = i_23
                            v21_1 = var_2b4_2
                            v0_3 = *(x19_3 + 4)
                            arg12.d = v21_1 f+ arg13.d
                            void* x21_1
                            int64_t* i_29
                            float v1_5
                            
                            if (not(v0_3 f> arg12.d))
                            label_1008058:
                                
                                if (arg5 == 0 || fp_2 != 0)
                                    while (true)
                                        if (v0_3 == *(x19_3 + 0xc))
                                            i_29 = i_27
                                        else
                                            if (i_27 == 0)
                                                int32_t x8_40
                                                
                                                if (var_2c0_1 == 0)
                                                    int64_t* i_31 = i_28
                                                    i_28 = malloc(0x6408)
                                                    
                                                    if (i_28 == 0)
                                                        var_2c0_1 = 0
                                                        break
                                                    
                                                    v21_1 = var_2b4_2
                                                    x8_40 = 0x31f
                                                    *i_28 = i_31
                                                else
                                                    x8_40 = var_2c0_1 - 1
                                                
                                                i_29 = nullptr
                                                i_27 = &i_28[sx.q(x8_40) * 4 + 1]
                                                var_2c0_1 = x8_40
                                                
                                                if (i_27 == 0)
                                                    break
                                            else
                                                i_29 = *i_27
                                                
                                                if (i_27 == 0)
                                                    break
                                            
                                            v0_3 = (*(x19_3 + 8) - *x19_3)
                                                / (*(x19_3 + 0xc) - *(x19_3 + 4))
                                            
                                            if (v0_3 != 0f)
                                                v1_5 = arg13.d f/ v0_3
                                            else
                                                v1_5 = arg15.d
                                            
                                            *(i_27 + 0xc) = v0_3
                                            i_27[2].d = v1_5
                                            i_27[1].d =
                                                *x19_3 + v0_3 * (v21_1 - *(x19_3 + 4)) f- arg14.d
                                            
                                            if (x19_3[1].d == 0)
                                                v0_3 = fconvert.s(-1f)
                                            else
                                                v0_3 = arg13.d
                                            
                                            *(i_27 + 0x14) = v0_3
                                            i_27[3].d = *(x19_3 + 4)
                                            v0_3 = *(x19_3 + 0xc)
                                            *i_27 = 0
                                            *(i_27 + 0x1c) = v0_3
                                            
                                            if (v0_3 < v21_1)
                                                goto label_1008388
                                            
                                            *i_27 = i_10
                                            i_10 = i_27
                                            i_27 = i_29
                                        
                                        v0_3 = *(x19_3 + 0x18)
                                        x21_1 = x19_3 + 0x14
                                        x19_3 = x21_1
                                        
                                        if (v0_3 f> arg12.d)
                                            goto label_1007ae0
                                else
                                    while (true)
                                        if (v0_3 == *(x19_3 + 0xc))
                                            i_29 = i_27
                                        else
                                            if (i_27 == 0)
                                                int32_t x8_34
                                                
                                                if (var_2c0_1 == 0)
                                                    int64_t* i_30 = i_28
                                                    i_28 = malloc(0x6408)
                                                    
                                                    if (i_28 == 0)
                                                        var_2c0_1 = 0
                                                        break
                                                    
                                                    v21_1 = var_2b4_2
                                                    x8_34 = 0x31f
                                                    *i_28 = i_30
                                                else
                                                    x8_34 = var_2c0_1 - 1
                                                
                                                var_2c0_1 = x8_34
                                                i_29 = nullptr
                                                i_27 = &i_28[sx.q(x8_34) * 4 + 1]
                                                
                                                if (i_27 == 0)
                                                    break
                                            else
                                                i_29 = *i_27
                                                
                                                if (i_27 == 0)
                                                    break
                                            
                                            v0_3 = (*(x19_3 + 8) - *x19_3)
                                                / (*(x19_3 + 0xc) - *(x19_3 + 4))
                                            
                                            if (v0_3 != 0f)
                                                v1_5 = arg13.d f/ v0_3
                                            else
                                                v1_5 = arg15.d
                                            
                                            *(i_27 + 0xc) = v0_3
                                            i_27[2].d = v1_5
                                            i_27[1].d =
                                                *x19_3 + v0_3 * (v21_1 - *(x19_3 + 4)) f- arg14.d
                                            
                                            if (x19_3[1].d == 0)
                                                v0_3 = fconvert.s(-1f)
                                            else
                                                v0_3 = arg13.d
                                            
                                            *(i_27 + 0x14) = v0_3
                                            i_27[3].d = *(x19_3 + 4)
                                            v0_3 = *(x19_3 + 0xc)
                                            *i_27 = 0
                                            *(i_27 + 0x1c) = v0_3
                                            
                                            if (not(v0_3 >= v21_1))
                                                v0_3 = v21_1
                                                *(i_27 + 0x1c) = v21_1
                                            
                                            if (v0_3 < v21_1)
                                                goto label_1008388
                                            
                                            *i_27 = i_10
                                            i_10 = i_27
                                            i_27 = i_29
                                        
                                        v0_3 = *(x19_3 + 0x18)
                                        x21_1 = x19_3 + 0x14
                                        x19_3 = x21_1
                                        
                                        if (v0_3 f> arg12.d)
                                            goto label_1007ae0
                                
                                __assert2(
                                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                                "ExternalCode/stb/stb_truetype.h", 
                                    0xb3a, 
                                    "stbtt__active_edge *stbtt__new_active(stbtt__hheap *, stbtt__edge "
                                "*, int, float, void *)", 
                                    "z != __null")
                                break
                            
                        label_1007ad8:
                            i_29 = i_27
                            x21_1 = x19_3
                        label_1007ae0:
                            int64_t* i_6 = i_10
                            i_23 = i_28
                            
                            if (i_6 != 0)
                                int32_t x19_4 = *x20_1
                                float var_2b8_1 = float.s(x19_4)
                                
                                do
                                    v1_5 = *(i_6 + 0x1c)
                                    
                                    if (v1_5 < v21_1)
                                        __assert2(
                                            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                                        "ExternalCode/stb/stb_truetype.h", 
                                            0xc0e, 
                                            "void stbtt__fill_active_edges_new(float *, float *, int, "
                                        "stbtt__active_edge *, float)", 
                                            "e->ey >= y_top")
                                        goto label_1008368
                                    
                                    arg14.d = i_6[1].d
                                    arg13.d = *(i_6 + 0xc)
                                    
                                    if (arg13.d f!= 0f)
                                        v0_3 = i_6[3].d
                                        
                                        if (v0_3 f> arg12.d)
                                            goto label_10083a8
                                        
                                        v0_3 - v21_1
                                        bool cond:28_1 = v0_3 > v21_1
                                        float v2_4 = arg14.d f+ arg13.d f* (v0_3 - v21_1)
                                        arg15.d = arg13.d f+ arg14.d
                                        
                                        if (not(v0_3 > v21_1))
                                            v0_3 = v21_1
                                        
                                        float v5_3
                                        
                                        v5_3 = cond:28_1 ? v2_4 : arg14.d
                                        
                                        v1_5 f- arg12.d
                                        float v3_3
                                        
                                        if (v1_5 f< arg12.d)
                                            v3_3 = (v1_5 - v21_1) f* arg13.d f+ arg14.d
                                        else
                                            v3_3 = arg15.d
                                        
                                        if (not(v1_5 f< arg12.d))
                                            v1_5 = arg12.d
                                        
                                        if (not(v3_3 < 0f) && not(v5_3 < 0f)
                                                && not(v3_3 >= var_2b8_1)
                                                && not(v5_3 >= var_2b8_1))
                                            uint32_t temp0_3 = vcvts_s32_f32(v5_3)
                                            uint32_t x9_18 = vcvts_s32_f32(v3_3)
                                            
                                            if (temp0_3 != x9_18)
                                                v2_4 = i_6[2].d
                                                uint32_t x8_27
                                                float v4_2
                                                
                                                if (v5_3 <= v3_3)
                                                    x8_27 = x9_18
                                                    x9_18 = temp0_3
                                                    v4_2 = v3_3
                                                    v3_3 = v5_3
                                                    arg15 = arg14
                                                else
                                                    v4_2 = arg12.d f- (v0_3 - v21_1)
                                                    v0_3 = arg12.d f- (v1_5 - v21_1)
                                                    v2_4 = fneg(v2_4)
                                                    x8_27 = temp0_3
                                                    v1_5 = v4_2
                                                    v4_2 = v5_3
                                                
                                                v5_3 = *(i_6 + 0x14)
                                                float v19_1 = fconvert.s(1f)
                                                int64_t x12_1 = zx.q(x9_18) << 0x20 s>> 0x1e
                                                float v6_5 =
                                                    v2_4 * (float.s(x9_18 + 1) f- arg15.d) + v21_1
                                                float v7_3 = (v3_3 - float.s(x9_18) + v19_1)
                                                    * fconvert.s(-0.5f) + v19_1
                                                v3_3 = v5_3 * (v6_5 - v0_3)
                                                *(x24_2 + x12_1) = *(x24_2 + x12_1) + v7_3 * v3_3
                                                float v20_1
                                                
                                                if (x8_27 s<= x9_18 + 1)
                                                    v20_1 = 0f
                                                else
                                                    v7_3 = v2_4 * v5_3
                                                    uint32_t j_1 = not.d(x9_18) + x8_27
                                                    void* x11_6 = &x24_2[sx.q(x9_18 + 1)]
                                                    v20_1 = 0f
                                                    uint32_t j
                                                    
                                                    do
                                                        float v18_1 = v7_3 * fconvert.s(0.5f) + v3_3
                                                        j = j_1
                                                        j_1 -= 1
                                                        v3_3 = v7_3 + v3_3
                                                        *x11_6 = v18_1 + *x11_6
                                                        x11_6 += 4
                                                    while (j != 1)
                                                
                                                if (fabs(v3_3) > float.s(0x3f8147ae))
                                                    goto label_10083e8
                                                
                                                int64_t x8_28 = zx.q(x8_27) << 0x20 s>> 0x1e
                                                *(x24_2 + x8_28) = v5_3 * ((v4_2 - float.s(x8_27)
                                                    + v20_1) * fconvert.s(-0.5f) + v19_1) * (v1_5
                                                    - (v2_4 * float.s(x8_27 - (x9_18 + 1)) + v6_5))
                                                    + v3_3 + *(x24_2 + x8_28)
                                                *(&x25_2[1] + x8_28) =
                                                    (v1_5 - v0_3) * v5_3 + *(&x25_2[1] + x8_28)
                                            else
                                                if ((temp0_3 & 0x80000000) != 0)
                                                    goto label_10083c8
                                                
                                                if (x19_4 s<= temp0_3)
                                                    goto label_10083c8
                                                
                                                v2_4 = float.s(temp0_3)
                                                v0_3 = v1_5 - v0_3
                                                x24_2[zx.q(temp0_3)] = x24_2[zx.q(temp0_3)] + v0_3
                                                    * (
                                                    (v5_3 - v2_4 + v3_3 - v2_4) * fconvert.s(-0.5f)
                                                    + fconvert.s(1f)) * *(i_6 + 0x14)
                                                x25_2[1 + zx.q(temp0_3)] =
                                                    x25_2[1 + zx.q(temp0_3)] + v0_3 * *(i_6 + 0x14)
                                        else if (x19_4 s>= 1)
                                            int32_t x28_3 = 0
                                            bool cond:32_1
                                            
                                            do
                                                arg17.d = float.s(x28_3)
                                                arg16.d = float.s(x28_3 + 1)
                                                arg18.d = (arg17.d f- arg14.d) f/ arg13.d + v21_1
                                                v13.d = (arg16.d f- arg14.d) f/ arg13.d + v21_1
                                                float* x0_24
                                                int32_t x1_12
                                                int64_t* i_14
                                                float v0_7
                                                float v1_9
                                                float* x0_26
                                                int32_t x1_14
                                                int64_t* i_15
                                                float v0_9
                                                float v1_11
                                                
                                                if (not(arg14.d f>= arg17.d)
                                                        && not(arg15.d f<= arg16.d))
                                                    sub_100e1c4(x24_2, x28_3, i_6, arg14.d, v21_1, 
                                                        arg17.d, arg18.d)
                                                    x0_26 = x24_2
                                                    x1_14 = x28_3
                                                    i_15 = i_6
                                                    v0_9 = arg17.d
                                                    v1_11 = arg18.d
                                                label_1007d44:
                                                    sub_100e1c4(x0_26, x1_14, i_15, v0_9, v1_11, 
                                                        arg16.d, v13.d)
                                                    x0_24 = x24_2
                                                    x1_12 = x28_3
                                                    i_14 = i_6
                                                    v0_7 = arg16.d
                                                    v1_9 = v13.d
                                                else
                                                    float* x0_23
                                                    int32_t x1_11
                                                    int64_t* i_13
                                                    float v0_6
                                                    float v1_8
                                                    
                                                    if (arg15.d f>= arg17.d || arg14.d f<= arg16.d)
                                                        if ((not(arg14.d f>= arg17.d)
                                                                && arg15.d f> arg17.d) || (
                                                                not(arg15.d f>= arg17.d)
                                                                && arg14.d f> arg17.d))
                                                            x0_23 = x24_2
                                                            x1_11 = x28_3
                                                            i_13 = i_6
                                                            v0_6 = arg14.d
                                                            v1_8 = v21_1
                                                            goto label_1007ca0
                                                        
                                                        if ((not(arg14.d f>= arg16.d)
                                                                && arg15.d f> arg16.d) || (
                                                                not(arg15.d f>= arg16.d)
                                                                && not(arg14.d f<= arg16.d)))
                                                            x0_26 = x24_2
                                                            x1_14 = x28_3
                                                            i_15 = i_6
                                                            v0_9 = arg14.d
                                                            v1_11 = v21_1
                                                            goto label_1007d44
                                                        
                                                        x0_24 = x24_2
                                                        x1_12 = x28_3
                                                        i_14 = i_6
                                                        v0_7 = arg14.d
                                                        v1_9 = v21_1
                                                    else
                                                        sub_100e1c4(x24_2, x28_3, i_6, arg14.d, 
                                                            v21_1, arg16.d, v13.d)
                                                        x0_23 = x24_2
                                                        x1_11 = x28_3
                                                        i_13 = i_6
                                                        v0_6 = arg16.d
                                                        v1_8 = v13.d
                                                    label_1007ca0:
                                                        sub_100e1c4(x0_23, x1_11, i_13, v0_6, v1_8, 
                                                            arg17.d, arg18.d)
                                                        x0_24 = x24_2
                                                        x1_12 = x28_3
                                                        i_14 = i_6
                                                        v0_7 = arg17.d
                                                        v1_9 = arg18.d
                                                sub_100e1c4(x0_24, x1_12, i_14, v0_7, v1_9, 
                                                    arg15.d, arg12.d)
                                                v21_1 = var_2b4_2
                                                cond:32_1 = x19_4 == x28_3 + 1
                                                x28_3 += 1
                                            while (not(cond:32_1))
                                    else if (not(arg14.d f>= var_2b8_1))
                                        float* x0_21
                                        int32_t x1_9
                                        int64_t* i_12
                                        float v0_4
                                        float v1_6
                                        
                                        if (arg14.d f< 0f)
                                            x0_21 = x25_2
                                            x1_9 = 0
                                            i_12 = i_6
                                            v0_4 = arg14.d
                                            v1_6 = v21_1
                                        else
                                            uint32_t temp0_2 = vcvts_s32_f32(arg14.d)
                                            sub_100e1c4(x24_2, temp0_2, i_6, arg14.d, v21_1, 
                                                arg14.d, arg12.d)
                                            v1_6 = var_2b4_2
                                            x1_9 = temp0_2 + 1
                                            x0_21 = x25_2
                                            i_12 = i_6
                                            v0_4 = arg14.d
                                        
                                        sub_100e1c4(x0_21, x1_9, i_12, v0_4, v1_6, arg14.d, arg12.d)
                                        v21_1 = var_2b4_2
                                    
                                    i_6 = *i_6
                                while (i_6 != 0)
                            
                            if (*x20_1 s>= 1)
                                int64_t i_7 = 0
                                v0_3 = 0f
                                
                                do
                                    int32_t x10_15 = x20_1[2]
                                    int64_t x9_23 = *(x20_1 + 0x10)
                                    v0_3 = v0_3 + x25_2[i_7]
                                    uint32_t temp0_5 = vcvts_s32_f32(
                                        fabs(x24_2[i_7] + v0_3) * float.s(0x437f0000)
                                        + fconvert.s(0.5f))
                                    char x11_8
                                    
                                    x11_8 = temp0_5 s< 0xff ? temp0_5.b : -1
                                    
                                    *(x9_23 + sx.q(i_7.d + fp_2 * x10_15)) = x11_8
                                    i_7 += 1
                                while (i_7 s< sx.q(*x20_1))
                            
                            i_21 = i_10
                            arg14.d = var_2e4_1
                            
                            if (i_21 != 0)
                                int64_t** x8_30 = &i_10
                                int64_t* i_8 = i_21
                                
                                do
                                    i_8[1].d = *(i_8 + 0xc) f+ i_8[1].d
                                    x8_30 = *x8_30
                                    i_8 = *x8_30
                                while (i_8 != 0)
                            
                            fp_2 += 1
                            arg13.d = fconvert.s(1f)
                            arg15.d = 0f
                            
                            if (fp_2 s>= x20_1[1])
                                break
                            
                            x28_1 = *x20_1
                            x19_3 = x21_1
                            i_27 = i_29
                            x11_4 += 1
                        
                        fp_1 = arg1
                        int64_t* i_11 = i_23
                        
                        if (i_11 != 0)
                            int64_t* i_9
                            
                            do
                                i_9 = *i_11
                                free(i_11)
                                i_11 = i_9
                            while (i_9 != 0)
                    
                    if (x24_2 != &var_2b0)
                        free(x24_2)
                    
                    free(x0_7)
                
                free(fp_1)
                x0_5 = x0_2
            
            free(x0_5)

arg13.q = var_70
arg12.q = var_68
arg15.q = var_80
arg14.q = var_78
arg16.q = var_88
arg18.q = var_a0
arg17.q = var_98
