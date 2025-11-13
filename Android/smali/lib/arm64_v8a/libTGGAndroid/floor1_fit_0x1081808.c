// 函数: floor1_fit
// 地址: 0x1081808
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
int32_t* x22 = arg3
int64_t x25 = sx.q(arg2[0x141])
void* x19 = *(arg2 + 0x510)
int32_t x28 = arg2[0x142]
int32_t* result
int64_t var_13f0_1
uint64_t var_13e8_1
int32_t var_1394[0x41]
int32_t var_1290[0x4]
int32_t var_118c[0x41]
int32_t var_1088
int32_t var_f84
int32_t var_e80

if (x25.d s< 1)
label_1081f58:
    result = nullptr
    
    if (x25.d == 0)
        int128_t var_e78
        __builtin_memset(&var_e78, 0, 0x30)
        var_e80 = 0
        int32_t var_e7c_1 = x28
        var_13f0_1 = arg1
        var_13e8_1 = x20
        int32_t x0_11
        int32_t x8_20
        int32_t x9_13
        int32_t x10_7
        int32_t x11_4
        int32_t x12_7
        int32_t x13_7
        int32_t x14_6
        int32_t x15_4
        int32_t x16_5
        int32_t x17_4
        int32_t x18_4
        
        if (x28 s< 1)
            x0_11 = 0
            x18_4 = 0
            x17_4 = 0
            x16_5 = 0
            x15_4 = 0
            x8_20 = 0
            x14_6 = 0
            x13_7 = 0
            x12_7 = 0
            x11_4 = 0
            x10_7 = 0
            x9_13 = 0
        else
            x9_13 = 0
            x10_7 = 0
            x11_4 = 0
            x12_7 = 0
            x13_7 = 0
            x14_6 = 0
            x8_20 = 0
            x15_4 = 0
            x16_5 = 0
            x17_4 = 0
            x18_4 = 0
            x0_11 = 0
            int64_t x3_6 = 0
            bool cond:6_1
            
            do
                int32_t v2 = arg4[x3_6]
                uint32_t temp0_8 = vcvts_s32_f32(vfma_f32(1023.5f, v2, 7.31428576f))
                int32_t x4_7 = temp0_8 & not.d(temp0_8 s>> 0x1f)
                int32_t x4_8
                
                x4_8 = x4_7 s< 0x3ff ? x4_7 : 0x3ff
                
                if (x4_8 != 0)
                    if (*(x19 + 0x458) f+ x22[x3_6] f>= v2)
                        x0_11 += x3_6.d
                        x18_4 += x4_8
                        x17_4 += x3_6.d * x3_6.d
                        x16_5 += x4_8 * x4_8
                        x15_4 += x4_8 * x3_6.d
                        x8_20 += 1
                    else
                        x14_6 += x3_6.d
                        x13_7 += x4_8
                        x12_7 += x3_6.d * x3_6.d
                        x11_4 += x4_8 * x4_8
                        x10_7 += x4_8 * x3_6.d
                        x9_13 += 1
                
                cond:6_1 = x3_6 s< sx.q(x28) - 1
                x3_6 += 1
            while (cond:6_1)
        
        var_e78.d = x0_11
        var_e78:4.d = x18_4
        var_e78:8.d = x17_4
        var_e78:0xc.d = x16_5
        int128_t var_e68
        var_e68.d = x15_4
        var_e68:4.d = x8_20
        var_e68:8.d = x14_6
        var_e68:0xc.d = x13_7
        int128_t var_e58
        var_e58.d = x12_7
        var_e58:4.d = x11_4
        var_e58:8.d = x10_7
        var_e58:0xc.d = x9_13
        
        if (sx.q(x8_20) != 0)
        label_1081b2c:
            int64_t x25_3 = x25
            int32_t var_139c = 0xffffff38
            int32_t var_1398 = 0xffffff38
            sub_108222c(&var_e80, x25_3.d - 1, &var_1398, &var_139c, x19)
            int32_t x8_5 = var_139c
            int32_t x20_2 = var_1398
            int32_t x23_2 = x20_2
            var_f84 = x20_2
            var_1088 = x20_2
            
            if (x25_3.d s>= 3)
                int32_t* x6_2 = arg2
                int64_t x26_3 = 2
                int32_t* var_13e0_1 = x22
                
                do
                    int64_t x23_3 = sx.q(x6_2[x26_3 + 0x82])
                    int64_t x20_3 = sx.q(var_118c[x23_3])
                    int32_t i = var_1290[x23_3]
                    
                    if (var_1394[x20_3] != i)
                        int64_t i_16 = sx.q(i)
                        int64_t x8_9 = sx.q(x6_2[0x82 + x20_3])
                        int32_t x9_6 = x6_2[0x82 + i_16]
                        var_1394[x20_3] = i
                        int32_t x12_1 = (&var_f84)[x20_3]
                        int64_t x11_1 = sx.q(*(x19 + 0x344 + (x20_3 << 2)))
                        int64_t i_1 = sx.q(*(x19 + 0x344 + (i_16 << 2)))
                        int32_t x25_4 = (&var_1088)[x20_3]
                        
                        if ((x12_1 & 0x80000000) == 0)
                            if ((x25_4 & 0x80000000) != 0)
                                x25_4 = x12_1
                            else
                                x25_4 = (x25_4 + x12_1) s>> 1
                        
                        int32_t x12_3 = (&var_f84)[i_16]
                        int32_t x10_3 = (&var_1088)[i_16]
                        
                        if ((x12_3 & 0x80000000) != 0)
                            goto label_1081c24
                        
                        if ((x10_3 & 0x80000000) != 0)
                            x10_3 = x12_3
                            
                            if (x25_4 == 0xffffffff || x10_3 == 0xffffffff)
                                exit(1)
                                noreturn
                        else
                            x10_3 = (x10_3 + x12_3) s>> 1
                        label_1081c24:
                            
                            if (x25_4 == 0xffffffff || x10_3 == 0xffffffff)
                                exit(1)
                                noreturn
                        
                        float v1_1 = arg4[x11_1]
                        float v0_1 = *(x19 + 0x458)
                        int32_t x14_4 = x10_3 - x25_4
                        uint32_t temp0_4 = vcvts_s32_f32(vfma_f32(1023.5f, v1_1, 7.31428576f))
                        int32_t x10_5 = i_1.d - x11_1.d
                        int32_t x12_5 = x14_4 s/ x10_5
                        int32_t x13_3 = temp0_4 & not.d(temp0_4 s>> 0x1f)
                        int32_t x15_2
                        
                        if (x10_3 - x25_4 s< 0)
                            x15_2 = neg.d(x14_4)
                        else
                            x15_2 = x14_4
                        
                        int32_t x16_2 = x12_5 * x10_5
                        int32_t x13_4
                        
                        x13_4 = x13_3 s< 0x3ff ? x13_3 : 0x3ff
                        
                        int32_t x16_3
                        
                        if (x16_2 s< 0)
                            x16_3 = neg.d(x16_2)
                        else
                            x16_3 = x16_2
                        
                        float v2_1
                        
                        if (v0_1 f+ x22[x11_1] >= v1_1)
                            v2_1 = float.s(x25_4)
                            v1_1 = float.s(x13_4)
                            
                            if (not(*(x19 + 0x448) + v2_1 < v1_1) && v2_1 - *(x19 + 0x44c) <= v1_1)
                                goto label_1081c88
                            
                        label_1081e08:
                            int32_t var_13a4 = 0xffffff38
                            int32_t var_13a0 = 0xffffff38
                            int32_t var_13ac = 0xffffff38
                            int32_t var_13a8 = 0xffffff38
                            int32_t x0_8 = sub_108222c(&var_e80 + x8_9 * 0x38, x23_3.d - x8_9.d, 
                                &var_13a0, &var_13a4, x19)
                            int32_t x0_10 = sub_108222c(&var_e80 + x23_3 * 0x38, x9_6 - x23_3.d, 
                                &var_13a8, &var_13ac, x19)
                            
                            if (x0_8 != 0)
                                var_13a4 = var_13a8
                                var_13a0 = x25_4
                            
                            x25_3 = x25
                            
                            if (x0_10 != 0)
                                var_13a8 = var_13a4
                                var_13ac = x10_3
                            
                            if (x0_10 == 0 || x0_8 == 0)
                                int32_t x8_16 = var_13a0
                                (&var_1088)[x20_3] = x8_16
                                
                                if (x20_3.d == 0)
                                    (&var_f84)[x20_3] = x8_16
                                
                                int32_t x9_9 = var_13a8
                                int32_t x8_17 = var_13a4
                                int32_t x10_6 = var_13ac
                                x6_2 = arg2
                                x22 = var_13e0_1
                                (&var_f84)[x26_3] = x8_17
                                (&var_1088)[x26_3] = x9_9
                                (&var_f84)[i_16] = x10_6
                                
                                if (i == 1)
                                    (&var_1088)[i_16] = x10_6
                                
                                if ((x9_9 & x8_17) s>= 0)
                                    if (x23_3.d s>= 1)
                                        int64_t x8_18 = x23_3 - 1
                                        
                                        while (var_1290[x8_18] == i)
                                            bool cond:32_1 = x8_18 s> 0
                                            var_1290[x8_18] = x26_3.d
                                            x8_18 -= 1
                                            
                                            if (not(cond:32_1))
                                                break
                                    
                                    int64_t x8_19 = x23_3 + 1
                                    
                                    if (x8_19.d s< x25_3.d)
                                        while (var_118c[x8_19] == x20_3.d)
                                            var_118c[x8_19] = x26_3.d
                                            x8_19 += 1
                                            
                                            if (x8_19 s>= x25_3)
                                                break
                            else
                                x6_2 = arg2
                                x22 = var_13e0_1
                                (&var_f84)[x26_3] = 0xffffff38
                                (&var_1088)[x26_3] = 0xffffff38
                        else
                        label_1081c88:
                            int32_t x13_5 = x25_4 - x13_4
                            int32_t x11_2 = x13_5 * x13_5
                            int32_t x9_7
                            
                            if (x11_1.d + 1 s>= i_1.d)
                                x9_7 = 1
                            else
                                int64_t x0_4 = zx.q(x11_1.d + 1) << 0x20 s>> 0x1e
                                int64_t x13_6 = 0
                                int32_t x1_2 = 0
                                int32_t x0_5 = x25_4
                                
                                do
                                    int64_t x2_4 = x13_6 << 2
                                    v1_1 = *(arg4 + x0_4 + x2_4)
                                    int32_t x1_3 = x1_2 + x15_2 - x16_3
                                    uint32_t temp0_6 =
                                        vcvts_s32_f32(vfma_f32(1023.5f, v1_1, 7.31428576f))
                                    int32_t x2_5 = temp0_6 & not.d(temp0_6 s>> 0x1f)
                                    int32_t x5_2
                                    
                                    if (x1_3 s< x10_5)
                                        x5_2 = 0
                                    else
                                        x5_2 = x14_4 s>> 0x1f | 1
                                    
                                    int32_t x3_2
                                    
                                    x3_2 = x1_3 s< x10_5 ? 0 : x10_5
                                    
                                    int32_t x2_6
                                    
                                    x2_6 = x2_5 s< 0x3ff ? x2_5 : 0x3ff
                                    
                                    x0_5 = x0_5 + x12_5 + x5_2
                                    
                                    if (not(*(x22 + x0_4 + x2_4) + v0_1 < v1_1) && x2_6 != 0)
                                        v1_1 = float.s(x0_5)
                                        v2_1 = float.s(x2_6)
                                        
                                        if (*(x19 + 0x448) + v1_1 < v2_1)
                                            goto label_1081e08
                                        
                                        if (v1_1 - *(x19 + 0x44c) > v2_1)
                                            goto label_1081e08
                                    
                                    x13_6 += 1
                                    x1_2 = x1_3 - x3_2
                                    int32_t x2_7 = x0_5 - x2_6
                                    x11_2 += x2_7 * x2_7
                                while (sx.q(x11_1.d + 1) + x13_6 s< i_1)
                                
                                x9_7 = x13_6.d + 1
                            
                            v1_1 = *(x19 + 0x448)
                            v0_1 = *(x19 + 0x450)
                            v2_1 = v1_1 * v1_1
                            v1_1 = float.s(x9_7)
                            
                            if (not(v2_1 / v1_1 > v0_1))
                                v2_1 = *(x19 + 0x44c)
                                
                                if (v2_1 * v2_1 / v1_1 > v0_1 || not(v0_1 < float.s(x11_2 s/ x9_7)))
                                    goto label_1081dcc
                                
                                goto label_1081e08
                            
                        label_1081dcc:
                            x25_3 = x25
                            (&var_f84)[x26_3] = 0xffffff38
                            (&var_1088)[x26_3] = 0xffffff38
                    
                    x26_3 += 1
                while (x26_3 s< x25_3)
                
                x23_2 = var_f84
                x20_2 = var_1088
            
            result = _vorbis_block_alloc(var_13f0_1, x25_3 << 2)
            
            if ((x23_2 & 0x80000000) == 0)
                if ((x20_2 & 0x80000000) != 0)
                    x20_2 = x23_2
                else
                    x20_2 = (x20_2 + x23_2) s>> 1
            
            *result = x20_2
            int32_t x8_23 = x8_5
            
            if ((x8_5 & 0x80000000) != 0)
                x20 = var_13e8_1
            else
                x20 = var_13e8_1
                
                if ((x8_23 & 0x80000000) != 0)
                    x8_23 = x8_5
                else
                    x8_23 = (x8_23 + x8_5) s>> 1
            
            result[1] = x8_23
            
            if (x25_3.d s>= 3)
                void* x8_25 = &result[2]
                int64_t i_12 = x25_3 - 2
                void* x10_9 = &arg2[0xc3]
                void* x11_5 = x19 + 0x34c
                int64_t x12_8 = 0x200000000
                int64_t i_2
                
                do
                    *(x10_9 + 0xfc)
                    *x10_9
                    int32_t x1_9 = (x19 + 0x344)[sx.q(*(x10_9 + 0xfc))]
                    int32_t x2_11 = result[sx.q(*(x10_9 + 0xfc))] & 0x7fff
                    int32_t x16_10 = (result[sx.q(*x10_9)] & 0x7fff) - x2_11
                    int64_t x1_10 = x12_8 s>> 0x1e
                    int32_t x16_11
                    
                    if (x16_10 s< 0)
                        x16_11 = neg.d(x16_10)
                    else
                        x16_11 = x16_10
                    
                    int32_t x18_8 = *(&var_f84 + x1_10)
                    int32_t x16_12 = *(&var_1088 + x1_10)
                    int32_t x17_9 = x16_11 * (*x11_5 - x1_9) s/ ((x19 + 0x344)[sx.q(*x10_9)] - x1_9)
                    int32_t x17_10
                    
                    if (x16_10 s< 0)
                        x17_10 = neg.d(x17_9)
                    else
                        x17_10 = x17_9
                    
                    int32_t x17_11 = x17_10 + x2_11
                    
                    if ((x18_8 & 0x80000000) == 0)
                        if ((x16_12 & 0x80000000) != 0)
                            x16_12 = x18_8
                        else
                            x16_12 = (x16_12 + x18_8) s>> 1
                    
                    bool v_1
                    bool n_1
                    
                    if (x17_11 != x16_12)
                        v_1 = add_overflow(x16_12, 0)
                        n_1 = x16_12 s< 0
                    else
                        n_1 = true
                        v_1 = false
                    
                    int32_t x16_14
                    
                    if (n_1 != v_1)
                        x16_14 = x17_11 | 0x8000
                    else
                        x16_14 = x16_12
                    
                    x10_9 += 4
                    x11_5 += 4
                    i_2 = i_12
                    i_12 -= 1
                    *x8_25 = x16_14
                    x8_25 += 4
                    x12_8 += 0x100000000
                while (i_2 != 1)
        else
            x20 = var_13e8_1
            result = nullptr
else
    int64_t i_17 = 0
    int128_t v0
    
    if (x25.d u> 7)
        i_17 = x25 & 0xfffffffffffffff8
        void var_f74
        void* x9_1 = &var_f74
        v0 = not.o(zx.o(0xc7))
        int64_t i_13 = i_17
        int64_t i_3
        
        do
            *(x9_1 - 0x10) = v0
            *x9_1 = v0
            i_3 = i_13
            i_13 -= 8
            x9_1 += 0x20
        while (i_3 != 8)
    
    if (x25.d u<= 7 || i_17 != x25)
        int64_t i_9 = x25 - i_17
        void* x8_1 = &(&var_f84)[i_17]
        int64_t i_4
        
        do
            i_4 = i_9
            i_9 -= 1
            *x8_1 = 0xffffff38
            x8_1 += 4
        while (i_4 != 1)
    
    if (x25.d s< 1)
        goto label_1081f58
    
    int64_t i_18 = 0
    
    if (x25.d u> 7)
        i_18 = x25 & 0xfffffffffffffff8
        void var_1078
        int128_t* x9_2 = &var_1078
        v0 = not.o(zx.o(0xc7))
        int64_t i_14 = i_18
        int64_t i_5
        
        do
            x9_2[-1] = v0
            *x9_2 = v0
            i_5 = i_14
            i_14 -= 8
            x9_2 = &x9_2[2]
        while (i_5 != 8)
    
    if (x25.d u<= 7 || i_18 != x25)
        int64_t i_10 = x25 - i_18
        void* x8_2 = &(&var_1088)[i_18]
        int64_t i_6
        
        do
            i_6 = i_10
            i_10 -= 1
            *x8_2 = 0xffffff38
            x8_2 += 4
        while (i_6 != 1)
    
    if (x25.d s<= 0)
        goto label_1081f58
    
    size_t x24_1 = x25 << 2
    memset(&var_118c, 0, x24_1)
    int64_t i_19 = 0
    
    if (x25.d u> 7)
        i_19 = x25 & 0xfffffffffffffff8
        void var_1280
        int128_t* x9_3 = &var_1280
        v0.d = 1
        v0:4.d = 1
        v0:8.d = 1
        v0:0xc.d = 1
        int64_t i_15 = i_19
        int64_t i_7
        
        do
            x9_3[-1] = v0
            *x9_3 = v0
            i_7 = i_15
            i_15 -= 8
            x9_3 = &x9_3[2]
        while (i_7 != 8)
    
    if (x25.d u<= 7 || i_19 != x25)
        int64_t i_11 = x25 - i_19
        void* x8_3 = &var_1290[i_19]
        int64_t i_8
        
        do
            i_8 = i_11
            i_11 -= 1
            *x8_3 = 1
            x8_3 += 4
        while (i_8 != 1)
    
    if (x25.d s<= 0)
        goto label_1081f58
    
    memset(&var_1394, 0xff, x24_1)
    result = nullptr
    
    if (x25.d != 1)
        var_13f0_1 = arg1
        var_13e8_1 = x20
        int32_t x26_1 = *arg2
        int64_t x14_1 = 0
        int64_t x8_4 = 0
        bool cond:22_1
        
        do
            int32_t x1 = arg2[x14_1 + 1]
            int32_t* x27_1 = &var_e80 + x14_1 * 0x38
            int32_t x23_1 = 0
            int32_t x25_1
            
            if (x1 s< x28)
                x25_1 = x1
            else
                x25_1 = x28 - 1
            
            int32_t x20_1 = 0
            int32_t x7_1 = 0
            int32_t x6_1 = 0
            int32_t x5_1 = 0
            int32_t x15_1 = 0
            int32_t x4_1 = 0
            int32_t x3 = 0
            int32_t x2_2 = 0
            int32_t x0_2 = 0
            int32_t x18_1 = 0
            int32_t x17_1 = 0
            *(x27_1 + 8) = zx.o(0)
            __builtin_memset(&x27_1[6], 0, 0x20)
            *x27_1 = x26_1
            x27_1[1] = x1
            
            if (x25_1 s>= x26_1)
                x17_1 = 0
                x18_1 = 0
                x0_2 = 0
                x2_2 = 0
                x3 = 0
                x4_1 = 0
                x15_1 = 0
                x5_1 = 0
                x6_1 = 0
                x7_1 = 0
                x20_1 = 0
                x23_1 = 0
                int64_t x26_2 = sx.q(x26_1)
                bool cond:25_1
                
                do
                    int32_t v3_1 = arg4[x26_2]
                    uint32_t temp0_2 = vcvts_s32_f32(vfma_f32(1023.5f, v3_1, 7.31428576f))
                    int32_t x27_3 = temp0_2 & not.d(temp0_2 s>> 0x1f)
                    int32_t x27_4
                    
                    x27_4 = x27_3 s< 0x3ff ? x27_3 : 0x3ff
                    
                    if (x27_4 != 0)
                        if (*(x19 + 0x458) f+ x22[x26_2] f>= v3_1)
                            x23_1 += x26_2.d
                            x20_1 += x27_4
                            x7_1 += x26_2.d * x26_2.d
                            x6_1 += x27_4 * x27_4
                            x5_1 += x27_4 * x26_2.d
                            x15_1 += 1
                        else
                            x4_1 += x26_2.d
                            x3 += x27_4
                            x2_2 += x26_2.d * x26_2.d
                            x0_2 += x27_4 * x27_4
                            x18_1 += x27_4 * x26_2.d
                            x17_1 += 1
                    
                    cond:25_1 = x26_2 s< sx.q(x25_1)
                    x26_2 += 1
                while (cond:25_1)
            
            void* x14_2 = &var_e80 + x14_1 * 0x38
            x27_1[2] = x23_1
            cond:22_1 = x14_1 + 1 != x25 - 1
            *(x14_2 + 0xc) = x20_1
            *(x14_2 + 0x10) = x7_1
            *(x14_2 + 0x14) = x6_1
            *(x14_2 + 0x18) = x5_1
            *(x14_2 + 0x1c) = x15_1
            *(x14_2 + 0x20) = x4_1
            *(x14_2 + 0x24) = x3
            *(x14_2 + 0x28) = x2_2
            *(x14_2 + 0x2c) = x0_2
            *(x14_2 + 0x30) = x18_1
            *(x14_2 + 0x34) = x17_1
            x8_4 += sx.q(x15_1)
            x26_1 = x1
            x14_1 += 1
        while (cond:22_1)
        
        if (x8_4 != 0)
            goto label_1081b2c
        
        x20 = var_13e8_1
        result = nullptr

if (*(x20 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
