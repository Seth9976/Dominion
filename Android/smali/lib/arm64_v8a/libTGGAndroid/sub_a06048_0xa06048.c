// 函数: sub_a06048
// 地址: 0xa06048
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_90 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
uint64_t var_40 = arg4
uint64_t x22 = zx.q(*(arg1 + 0xd40))
void* x20 = arg1
uint128_t result
uint128_t v1
uint128_t v2
uint128_t v3
void var_5828
void var_5810
void var_d14
int32_t var_d10[0x274]
int32_t j_3
int32_t* x24_1
void* x25_1

if (x22.d s< 1)
    int32_t x9_1 = sx.d(*arg2)
    
    if (x9_1 s>= 1)
        int32_t x11_1 = x9_1 & 0xffff
        int64_t x8_3 = 0
        j_3 = 0
        uint64_t x11_2
        
        if (x11_1 u> 1)
            x11_2 = zx.q(x11_1)
        else
            x11_2 = 1
        
        while (true)
            int32_t x13_3 = *(arg2 + x8_3 * 0x68 + 0x1c)
            
            if ((x13_3 - 0x100 u> 3 || x13_3 == 0x101) && x13_3 != 0x601 && x13_3 != 0)
                int64_t x15_1 = 0
                int64_t j_5 = sx.q(j_3)
                
                while (true)
                    if (j_5 + x15_1 s>= 1)
                        int32_t x17_4 = *(&var_d14 + (sx.q(j_3) << 2) + (x15_1 << 2))
                        x15_1 -= 1
                        
                        if (x17_4 != x13_3)
                            continue
                        else if (j_3 + x15_1.d + 1 s>= 1)
                            break
                    
                    j_3 += 1
                    var_d10[j_5] = x13_3
                    break
            
            x8_3 += 1
            
            if (x8_3 == x11_2)
                break
        
    label_a0636c:
        
        if (x22.d s>= 1)
            if (j_3 s< 1)
                goto label_a06450
            
            uint64_t j_2 = zx.q(j_3)
            void* x9_2 = &var_5810
            void var_a328
            void* x10_1 = &var_a328
            int64_t x8_4 = 0
            int64_t i_11 = j_2 & 0xfffffff8
            void var_5800
            void* x12_2 = &var_5800
            void var_a318
            void* x13_4 = &var_a318
            
            do
                result.d = *(&var_5828 + (x8_4 << 2))
                result.d = float.s(result.d)
                int64_t i_13
                
                if (j_3 u>= 8)
                    v1 = vdupq_laneq_s32(result, 0)
                    int64_t i_8 = i_11
                    void* x16_2 = x13_4
                    void* x17_5 = x12_2
                    int32_t i
                    
                    do
                        v2 = *(x17_5 - 0x10)
                        v3 = *x17_5
                        x17_5 += 0x20
                        i = i_8
                        i_8 -= 8
                        float128 v2_1 = vcvtq_f32_s32(v2)
                        float128 v3_1 = vcvtq_f32_s32(v3)
                        v2 = vdivq_f32(v2_1, v1)
                        v3 = vdivq_f32(v3_1, v1)
                        *(x16_2 - 0x10) = v2
                        *x16_2 = v3
                        x16_2 += 0x20
                    while (i != 8)
                    i_13 = i_11
                    
                    if (i_11 != j_2)
                        goto label_a06420
                else
                    i_13 = 0
                label_a06420:
                    int64_t x16_3 = i_13 << 2
                    void* x15_4 = x9_2 + x16_3
                    void* x16_4 = x10_1 + x16_3
                    int64_t i_9 = j_2 - i_13
                    int64_t i_1
                    
                    do
                        v1.d = *x15_4
                        x15_4 += 4
                        i_1 = i_9
                        i_9 -= 1
                        v1.d = float.s(v1.d)
                        v1.d = v1.d f/ result.d
                        *x16_4 = v1.d
                        x16_4 += 4
                    while (i_1 != 1)
                x8_4 += 1
                x12_2 += 0xc80
                x13_4 += 0xc80
                x9_2 += 0xc80
                x10_1 += 0xc80
            while (x8_4 != x22)
            
            if (x22.d s>= 1)
                x24_1 = arg3 + 0xb4
                x25_1 = arg3 + 0x78
                
                if (j_3 s< 1)
                    goto label_a0645c
                
                int64_t i_2 = 0
                v8.d = fconvert.s(0.5f)
                void* x26 = &var_a328
                
                do
                    if (*(&var_5828 + (i_2 << 2)) != 0)
                        uint64_t x8_8 = zx.q(*x24_1)
                        
                        if (i_2 != x8_8 && *(&var_5828 + (sx.q(x8_8.d) << 2)) != 0)
                            int64_t x22_1 = sx.q(x8_8.d)
                            int64_t j = 0
                            x20 = &var_a328 + x22_1 * 0xc80
                            v9.d = 0f
                            
                            do
                                v11.d = *(x20 + j)
                                v10.d = *(x26 + j)
                                
                                if (v11.d f!= 0f || not(v10.d f== 0f))
                                    result.d = v11.d f+ v10.d
                                    v12.d = result.d f* v8.d
                                    
                                    if (not(v11.d f<= 0f))
                                        result.d = v11.d f/ v12.d
                                        result, v1, v2, v3 = logf(result.d)
                                        result.d = v11.d f* result.d
                                        v9.d = v9.d f+ result.d
                                    
                                    if (not(v10.d f<= 0f))
                                        result.d = v10.d f/ v12.d
                                        result, v1, v2, v3 = logf(result.d)
                                        result.d = v10.d f* result.d
                                        v9.d = result.d f+ v9.d
                                
                                j += 4
                            while (j_2 << 2 != j)
                            
                            result.d = fabs(v9.d)
                            v1.d = float.s(0x7f800000)
                            v2.d = 8388608f
                            
                            if (not(v9.d f== 0f) && ((result.d f>= v2.d ? 1 : 0)
                                    & (is_unordered.d(v9.d, v9.d) ? 1 : 0)
                                    & (result.d f< v1.d ? 1 : 0)) == 0)
                                puts("Abnormal divergence:")
                                
                                if (j_3 s>= 1)
                                    x20 = &var_a328 + x22_1 * 0xc80
                                    uint64_t j_1
                                    
                                    do
                                        int32_t v0 = *x20
                                        x20 += 4
                                        int32_t v1_1 = *x26
                                        x26 += 4
                                        printf("%f\t%f\n", (fconvert.d(v0)).d, (fconvert.d(v1_1)).d)
                                        j_1 = j_2
                                        j_2 -= 1
                                    while (j_1 != 1)
                                
                                pthread_kill(pthread_self(), 6)
                                result, v1, v2, v3 = XNoReturn()
                                break
                            
                            result.d = *x25_1
                            x20 = arg1
                            result.d = v9.d f+ result.d
                            *x25_1 = result.d
                            x22 = zx.q(*(x20 + 0xd40))
                    
                    i_2 += 1
                    x26 += 0xc80
                while (i_2 s< sx.q(x22.d))
else
    memset(&var_5828, 0, x22 << 2)
    result, v1, v2, v3 = memset(&var_5810, 0, x22 * 0xc80)
    uint32_t x17_1 = zx.d(*arg2)
    
    if (sx.d(x17_1.w) s> 0)
        int64_t x8_2 = 0
        j_3 = 0
        int64_t i_10 = x22 & 0xfffffffe
        void* x12_1 = arg2 + 0x2d
        void* x13_1 = &arg2[0x16]
        uint64_t x17_2
        
        if (x17_1 u> 1)
            x17_2 = zx.q(x17_1)
        else
            x17_2 = 1
        
        while (true)
            int32_t x3_1 = *(arg2 + x8_2 * 0x68 + 0x1c)
            
            if ((x3_1 - 0x100 u> 3 || x3_1 == 0x101) && x3_1 != 0 && x3_1 != 0x601)
                int64_t x6_1 = 0
                int64_t j_4 = sx.q(j_3)
                int64_t x5_2 = zx.q(j_3) << 0x20
                
                while (true)
                    int64_t i_12
                    
                    if (j_4 + x6_1 s< 1)
                    label_a0623c:
                        j_3 += 1
                        var_d10[j_4] = x3_1
                        
                        if (x22.d u>= 2)
                        label_a061b8:
                            void* x3_2 = &var_5810 + (j_4 << 2)
                            void* x4_2 = x12_1
                            void var_5824
                            void* x5_3 = &var_5824
                            int64_t i_7 = i_10
                            int64_t i_3
                            
                            do
                                uint32_t x7_2 = zx.d(*(x4_2 - 1))
                                
                                if (x7_2 != 0)
                                    x20 = zx.q(*x3_2)
                                
                                uint32_t x19_3 = zx.d(*x4_2)
                                
                                if (x19_3 != 0)
                                    arg4 = zx.q(*(x3_2 + 0xc80))
                                
                                if (x7_2 != 0)
                                    x20 = zx.q(x20.d + 1)
                                    *x3_2 = x20.d
                                
                                if (x19_3 != 0)
                                    x20 = zx.q(arg4.d + 1)
                                    *(x3_2 + 0xc80) = x20.d
                                
                                if (x7_2 != 0)
                                    x20 = zx.q(*(x5_3 - 4))
                                
                                if (x19_3 != 0)
                                    arg4 = zx.q(*x5_3)
                                
                                if (x7_2 != 0)
                                    *(x5_3 - 4) = x20.d + 1
                                
                                if (x19_3 != 0)
                                    *x5_3 = arg4.d + 1
                                
                                i_3 = i_7
                                i_7 -= 2
                                x3_2 += 0x1900
                                x5_3 += 8
                                x4_2 += 2
                            while (i_3 != 2)
                            x20 = arg1
                            i_12 = i_10
                            
                            if (i_10 == x22)
                                break
                        else
                            i_12 = 0
                    else
                        int32_t x19_2 = *(&var_d14 + (sx.q(j_3) << 2) + (x6_1 << 2))
                        x6_1 -= 1
                        x5_2 += -0x100000000
                        
                        if (x19_2 != x3_1)
                            continue
                        else
                            if (j_3 + x6_1.d + 1 s< 1)
                                goto label_a0623c
                            
                            j_4 = x5_2 s>> 0x20
                            
                            if (x22.d u>= 2)
                                goto label_a061b8
                            
                            i_12 = 0
                    
                    void* x3_3 = x13_1 + i_12
                    void* x4_3 = &var_5828 + (i_12 << 2)
                    int32_t* x2_4 = &var_5810 + i_12 * 0xc80 + (j_4 << 2)
                    int64_t i_6 = x22 - i_12
                    int64_t i_4
                    
                    do
                        if (zx.d(*x3_3) != 0)
                            int32_t x7_6 = *x4_3 + 1
                            *x2_4 += 1
                            *x4_3 = x7_6
                        
                        x3_3 += 1
                        x2_4 = &x2_4[0x320]
                        i_4 = i_6
                        i_6 -= 1
                        x4_3 += 4
                    while (i_4 != 1)
                    break
            
            x8_2 += 1
            x12_1 += 0x68
            x13_1 += 0x68
            
            if (x8_2 == x17_2)
                break
        
        goto label_a0636c
    
label_a06450:
    x24_1 = arg3 + 0xb4
    x25_1 = arg3 + 0x78
label_a0645c:
    int64_t i_5 = 0
    result.d = 0f
    
    do
        if (*(&var_5828 + (i_5 << 2)) != 0)
            uint64_t x10_3 = zx.q(*x24_1)
            
            if (i_5 != x10_3 && *(&var_5828 + (sx.q(x10_3.d) << 2)) != 0)
                v1.d = *x25_1
                v1.d = v1.d f+ result.d
                *x25_1 = v1.d
                x22 = zx.q(*(x20 + 0xd40))
        
        i_5 += 1
    while (i_5 s< sx.q(x22.d))
v1.d = *(arg3 + 0x78)
v2.d = float.s(0xbdcccccd)
v3.d = float.s(*(x20 + 0x19e4) - 1)
result.d = fconvert.s(1f)
v2.d = v3.d f* v2.d
result.d = v2.d f+ result.d
v2.d = 0f
result.d = vmax_f32(result.d, v2.d)
result.d = v1.d f* result.d
*(arg3 + 0x78) = result.d
return result
