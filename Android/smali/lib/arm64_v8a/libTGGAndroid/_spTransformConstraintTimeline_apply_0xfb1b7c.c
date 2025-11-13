// 函数: _spTransformConstraintTimeline_apply
// 地址: 0xfb1b7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(*(arg2 + 0x50) + (sx.q(*(arg1 + 0x28)) << 3))

if (x8[6].d == 0)
    return 

int32_t* x9_2 = *(arg1 + 0x20)
float v3 = *x9_2

if (not(v3 f<= arg7.d))
    void* x9_3 = *x8
    
    if (arg5 == 1)
        arg6.d = *(x9_3 + 0x28)
        arg7.d = x8[4].d
        v3 = *(x8 + 0x24)
        arg6.d = arg6.d f- arg7.d
        arg6.d = arg6.d f* arg8
        arg6.d = arg7.d f+ arg6.d
        x8[4].d = arg6.d
        arg6.d = *(x9_3 + 0x2c)
        arg6.d = arg6.d f- v3
        arg6.d = arg6.d f* arg8
        arg6.d = v3 f+ arg6.d
        *(x8 + 0x24) = arg6.d
        arg6.d = *(x9_3 + 0x30)
        arg7.d = x8[5].d
        v3 = *(x8 + 0x2c)
        arg6.d = arg6.d f- arg7.d
        arg6.d = arg6.d f* arg8
        arg6.d = arg7.d f+ arg6.d
        x8[5].d = arg6.d
        arg6.d = *(x9_3 + 0x34)
        arg6.d = arg6.d f- v3
        arg6.d = arg6.d f* arg8
        arg6.d = v3 f+ arg6.d
        *(x8 + 0x2c) = arg6.d
        return 
    
    if (arg5 == 0)
        arg6.d = *(x9_3 + 0x28)
        x8[4].d = arg6.d
        arg6.d = *(x9_3 + 0x2c)
        *(x8 + 0x24) = arg6.d
        arg6.d = *(x9_3 + 0x30)
        x8[5].d = arg6.d
        arg6.d = *(x9_3 + 0x34)
        *(x8 + 0x2c) = arg6.d
    
    return 

int32_t x11_1 = *(arg1 + 0x18)
arg6.d = x9_2[sx.q(x11_1 - 5)]

if (arg6.d f<= arg7.d)
    arg6.d = x9_2[sx.q(x11_1 - 4)]
    arg6:4.d = x9_2[sx.q(x11_1 - 3)]
    arg6:8.d = x9_2[sx.q(x11_1 - 2)]
    arg6:0xc.d = x9_2[sx.q(x11_1 - 1)]
    
    if (arg5 == 0)
    label_fb1e64:
        void* x9_7 = *x8
        arg7.d = *(x9_7 + 0x28)
        arg7.d = arg7.d f+ (arg6.d f- arg7.d) * arg8
        x8[4].d = arg7.d
        arg7.d = *(x9_7 + 0x2c)
        arg7.d = arg7.d f+ (arg6:4.d f- arg7.d) * arg8
        *(x8 + 0x24) = arg7.d
        arg7.d = *(x9_7 + 0x30)
        v3 = arg6:8.d
        arg6.d = arg6:0xc.d
        arg7.d = arg7.d f+ (v3 f- arg7.d) * arg8
        x8[5].d = arg7.d
        arg7.d = *(x9_7 + 0x34)
        arg6.d = arg6.d f- arg7.d
        arg6.d = arg6.d f* arg8
        arg6.d = arg7.d f+ arg6.d
        *(x8 + 0x2c) = arg6.d
        return 
else
    int32_t x11_4 = x11_1 s/ 5
    int32_t x13_1 = x11_4 - 2
    int32_t x12_3
    
    if (x11_4 == 2)
        x12_3 = 5
    else
        int32_t x11_5 = 0
        int32_t x12_2 = x13_1
        
        do
            int32_t x13_2 = x13_1 s>> 1
            arg6.d = x9_2[sx.q((x13_2 + 1) * 5)]
            arg6.d f- arg7.d
            
            if (not(arg6.d f> arg7.d))
                x11_5 = x13_2 + 1
            
            if (arg6.d f> arg7.d)
                x12_2 = x13_2
            
            x13_1 = x11_5 + x12_2
        while (x11_5 != x12_2)
        
        int32_t x11_6 = x11_5 * 5
        v3 = x9_2[sx.q(x11_6)]
        x12_3 = x11_6 + 5
    
    void* x13_3 = &x9_2[sx.q(x12_3)]
    float128 v5
    v5.d = *x13_3
    float* x11_7 = *(arg1 + 0x10)
    arg6.d = *(x13_3 - 0x10)
    int32_t v4 = *(x13_3 - 0xc)
    float v16 = arg7.d f- v5.d
    v5.d = v3 f- v5.d
    v3 = *(x13_3 - 8)
    arg7.d = *(x13_3 - 4)
    int32_t x14_3 = x12_3 s/ 5 * 0x13
    v5.d = v16 f/ v5.d
    v16 = x11_7[sx.q(x14_3 - 0x13)]
    float v7 = fconvert.s(1f)
    v5.d = v7 f- v5.d
    float v6 = 0f
    bool cond:2_1 = v5.d f< 0f
    v5.d = vmin_f32(v5.d, v7)
    
    if (cond:2_1)
        v5.d = v6
    else
        v5.d = v5.d
    
    if (not(v16 != 0f))
        v6 = v5.d
    else if (not(v16 == v7))
        int32_t x12_4 = x14_3 - 0x12
        int64_t x2 = zx.q(x12_4) << 0x20
        int64_t x13_5 = 0
        int64_t x14_5 = x2 + -0x100000000
        int64_t x15_1 = x2 + -0x200000000
        
        while (true)
            v6 = x11_7[sx.q(x12_4) + x13_5]
            
            if (v6 f>= v5.d)
                if (x13_5.d == 0)
                    v7 = 0f
                    v16 = 0f
                else
                    v7 = *(x11_7 + (x15_1 s>> 0x1e))
                    v16 = *(x11_7 + (x14_5 s>> 0x1e))
                    x12_4 += x13_5.d
                
                v5.d = v5.d f- v7
                v5.d = v5.d f* (x11_7[sx.q(x12_4 + 1)] - v16)
                v5.d = v5.d f/ (v6 - v7)
                v6 = v16 f+ v5.d
                break
            
            x13_5 += 2
            x14_5 += 0x200000000
            x15_1 += 0x200000000
            
            if (sx.q(x12_4) - 2 + x13_5 s>= sx.q(x14_3 - 2))
                v7 = *(x11_7 + (x14_5 s>> 0x1e))
                v16 = fconvert.s(1f)
                v5.d = v5.d f- v6
                v5.d = v5.d f* (v16 - v7)
                v5.d = v5.d f/ (v16 - v6)
                v6 = v7 f+ v5.d
                break
    
    void* x9_5 = &x9_2[sx.q(x12_3)]
    v5.d = *(x9_5 + 4)
    arg6:4.d = v4
    arg6:8.d = v3
    v5:4.d = *(x9_5 + 8)
    arg6:0xc.d = arg7.d
    v5:8.d = *(x9_5 + 0xc)
    v5:0xc.d = *(x9_5 + 0x10)
    arg7.d = vsubq_f32(v5, arg6).d f* v6
    arg7:4.d = arg7:4.d f* v6
    arg7:8.d = arg7:8.d f* v6
    arg7:0xc.d = arg7:0xc.d f* v6
    arg6 = vaddq_f32(arg6, arg7)
    
    if (arg5 == 0)
        goto label_fb1e64

arg7 = *(x8 + 0x20)
float128 v0
v0.d = vsubq_f32(arg6, arg7).d f* arg8
v0:4.d = v0:4.d f* arg8
v0:8.d = v0:8.d f* arg8
v0:0xc.d = v0:0xc.d f* arg8
*(x8 + 0x20) = vaddq_f32(arg7, v0)
