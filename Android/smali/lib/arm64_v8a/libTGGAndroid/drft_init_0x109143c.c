// 函数: drft_init
// 地址: 0x109143c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double x_5
double x_6 = x_5
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
double x_2
double x_3 = x_2
double x_1
double x_4 = x_1
*arg1 = arg2
int64_t x0_1 = calloc(sx.q(arg2 * 3), 4)
*(arg1 + 8) = x0_1
int32_t* result
uint128_t v0
float128 v1
int128_t v2
result, v0, v1, v2 = calloc(0x20, 4)
*(arg1 + 0x10) = result

if (arg2 != 1)
    int32_t x9_1 = 0
    int64_t x8_1 = 0
    int64_t x11_1 = -1
    int32_t x17_1 = arg2
label_10914cc:
    bool cond:1_1 = x11_1 s> 2
    x11_1 += 1
    
    if (cond:1_1)
        x9_1 += 2
    else
        x9_1 = *(&data_71cd70 + (x11_1 << 2))
    
    int64_t x14_2 = sx.q(x8_1.d)
    int32_t x15_1 = x8_1.d + 1
    int32_t* x16_1 = &result[2 + sx.q(x8_1.d)]
    
    while (true)
        int32_t x18_1 = x17_1 s/ x9_1
        x8_1 = x14_2
        
        if (x17_1 != x18_1 * x9_1)
            goto label_10914cc
        
        x14_2 = x8_1 + 1
        result[x8_1 + 2] = x9_1
        
        if (x9_1 == 2 && x8_1.d != 0)
            if (x8_1 s>= 1)
                int64_t i_2 = zx.q(x15_1) - 1
                int32_t* x1 = x16_1
                int32_t* x3_1 = x16_1
                int64_t i
                
                do
                    x3_1 = &x3_1[-1]
                    i = i_2
                    i_2 -= 1
                    *x1 = *x3_1
                    x1 = x3_1
                while (i != 1)
            
            result[2] = 2
        
        x15_1 += 1
        x16_1 = &x16_1[1]
        x17_1 = x18_1
        
        if (x18_1 == 1)
            *result = arg2
            result[1] = x14_2.d
            
            if (x8_1.d s>= 1)
                int64_t x13_1 = x8_1 & 0xffffffff
                v2 = data_71b4d0
                v0.d = float.s(arg2)
                v1.d = 0x40c90fdb
                int64_t x9_4 = x0_1 + (sx.q(arg2) << 2)
                int64_t x11_2 = 0
                int32_t x12_1 = 0
                int32_t x14_3 = 1
                v10.d = fconvert.s(1f)
                v11.d = 6.28318548f f/ v0.d
                v0.d = fconvert.s(4f)
                v0:4.d = fconvert.s(4f)
                v0:8.d = fconvert.s(4f)
                v0:0xc.d = fconvert.s(4f)
                int64_t var_1a0_1 = x13_1
                int32_t* result_1 = result
                uint128_t var_130_1 = v0
                
                do
                    int32_t x8_5 = result[x11_2 + 2]
                    int32_t x10_3 = x8_5 * x14_3
                    
                    if (x8_5 s>= 2)
                        int32_t x28_1 = arg2 s/ x10_3
                        int32_t* x26_1 = x9_4 + (sx.q(x12_1) << 2)
                        int64_t x24_1 = sx.q(x12_1)
                        uint64_t x9_7 = zx.q(x28_1 - 1) & 6
                        uint64_t x11_4 = zx.q(((x28_1 - 3) u>> 1) + 1)
                        int64_t i_4 = x11_4 & 0xfffffffc
                        int64_t x8_12 = (zx.q(x28_1 - 3) & 0xfffffffe) + x24_1 + 2 - x9_7
                        int64_t x21_1 = 0
                        int32_t x19_1 = 0
                        int64_t x27_1 = sx.q(x28_1)
                        x_5.d = float.s(sx.d(i_4))
                        
                        do
                            x19_1 += x14_3
                            
                            if (x28_1 s>= 3)
                                v0.d = float.s(x19_1)
                                v0.d = v11.d f* v0.d
                                uint128_t var_110_1 = v0
                                int32_t x20_1
                                int64_t x25_1
                                
                                if (x11_4.d u>= 4)
                                    int64_t i_3 = i_4
                                    v1 = v2
                                    x25_1 = x8_12 + x21_1 * x27_1
                                    int32_t* x20_2 = x26_1
                                    uint128_t var_120_1 = vdupq_laneq_s32(v0, 0)
                                    int64_t i_1
                                    
                                    do
                                        float128 v0_1 = vfmaq_f32(var_120_1, var_120_1, v1)
                                        float128 v1_1 = vcvt_f64_f32(v0_1)
                                        float128 v0_2 = vcvt_high_f64_f32(v0_1)
                                        x_1 = v0_2:8.q
                                        double x = v0_2.q
                                        double var_f0_1 = cos(x_1)
                                        cos(x)
                                        int128_t v0_5
                                        v0_5:8.q = var_f0_1
                                        x_2 = v1_1:8.q
                                        int128_t var_100_1 = cos(x_2)
                                        float128 v0_8
                                        int128_t v1_3
                                        float128 v2_1
                                        v0_8, v1_3, v2_1 = cos(v1_1.q)
                                        v0_8:8.q = var_100_1.q
                                        float128 v0_10 =
                                            vcvt_high_f32_f64(vcvt_f32_f64(v0_8, v0_8), v0_5)
                                        int128_t var_f0_2
                                        var_f0_2.q = v0_10.q
                                        var_f0_2:8.q = var_100_1.q
                                        double var_100_2 = sin(x_1)
                                        sin(x)
                                        int128_t v0_13
                                        v0_13:8.q = var_100_2
                                        int128_t var_100_3 = sin(x_2)
                                        float128 v1_5
                                        int128_t v2_2
                                        float128 v3_1
                                        v0, v1_5, v2_2, v3_1 = sin(v1_1.q)
                                        i_1 = i_3
                                        i_3 -= 4
                                        v0:8.q = var_100_3.q
                                        v2_2.q = var_f0_2.q
                                        v3_1.q = var_f0_2:8.q
                                        v2_2:8.q = v0_10:8.q
                                        v3_1:8.q = var_100_1:8.q
                                        float128 v3_3 =
                                            vcvt_high_f32_f64(vcvt_f32_f64(v3_1, v0), v0_13)
                                        *x20_2 = v2_2.d
                                        x20_2[1] = v3_3.d
                                        x20_2[2] = v2_2:4.d
                                        x20_2[3] = v3_3:4.d
                                        x20_2[4] = v2_2:8.d
                                        x20_2[5] = v3_3:8.d
                                        x20_2[6] = v2_2:0xc.d
                                        x20_2[7] = v3_3:0xc.d
                                        x20_2 = &x20_2[8]
                                        v1 = vaddq_f32(v1, var_130_1)
                                    while (i_1 != 4)
                                    x20_1 = ((x28_1 + 1) & 0xfffffffe) - x9_7.d
                                    x_2 = x_5
                                    
                                    if (i_4 != x11_4)
                                        goto label_1091798
                                else
                                    x20_1 = 2
                                    x_2.d = 0f
                                    x25_1 = x24_1
                                label_1091798:
                                    void* x23_1 = x9_4 + 4 + (x25_1 << 2)
                                    
                                    do
                                        x_2.d = x_2.d f+ v10.d
                                        v0.d = var_110_1.d f* x_2.d
                                        x_1 = fconvert.d(v0.d)
                                        double v0_17
                                        v0_17.d = fconvert.s(cos(x_1))
                                        *(x23_1 - 4) = v0_17.d
                                        v0, v1 = sin(x_1)
                                        v0.d = fconvert.s(v0.q)
                                        x20_1 += 2
                                        *x23_1 = v0.d
                                        x23_1 += 8
                                    while (x20_1 s< x28_1)
                            
                            x21_1 += 1
                            x24_1 += x27_1
                            x26_1 += zx.q(x28_1) << 0x20 s>> 0x1e
                        while (x21_1.d != x8_5 - 1)
                        
                        x13_1 = var_1a0_1
                        result = result_1
                        x12_1 += x28_1 * (x8_5 - 1)
                    
                    x11_2 += 1
                    x14_3 = x10_3
                while (x11_2 != x13_1)
            
            break

return result
