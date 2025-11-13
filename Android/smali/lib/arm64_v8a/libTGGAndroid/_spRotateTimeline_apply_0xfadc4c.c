// 函数: _spRotateTimeline_apply
// 地址: 0xfadc4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(*(arg2 + 0x10) + (sx.q(*(arg1 + 0x28)) << 3))

if (x8[0x10].d == 0)
    return 

int32_t* x9_2 = *(arg1 + 0x20)
double v3
v3.d = *x9_2

if (v3.d f<= arg7.d)
    int32_t x10_1 = *(arg1 + 0x18)
    double v4
    
    if (x9_2[sx.q(x10_1 - 2)] f<= arg7.d)
        arg6 = x9_2[sx.q(x10_1 - 1)]
        
        if (arg5 - 1 u< 2)
            arg7.d = x8[6].d
            v3.d = *(*x8 + 0x24)
            v4.d = float.s(0xc3b40000)
            v3.d = v3.d f- arg7.d
            arg6 = arg6 f+ v3.d
            v4.d = arg6 f/ v4.d
            v3 = fconvert.d(v4.d) + float.d(0x40d0001fffffffff)
        label_fadfa0:
            v3.d = float.s((0x4000 - vcvtd_s32_f64(v3)) * 0x168)
            x8[6].d = arg7.d f+ (arg6 f- v3.d) * arg8
        else if (arg5 == 0)
            arg7.d = *(*x8 + 0x24)
            x8[6].d = arg6 * arg8 f+ arg7.d
        else if (arg5 == 3)
            arg7.d = x8[6].d
            x8[6].d = arg7.d f+ arg6 * arg8
    else
        int32_t x10_2
        
        if (x10_1 s< 0)
            x10_2 = x10_1 + 1
        else
            x10_2 = x10_1
        
        int32_t x10_3 = x10_2 s>> 1
        int32_t x12_1 = x10_3 - 2
        int32_t x10_6
        
        if (x10_3 == 2)
            x10_6 = 2
        else
            int32_t x10_4 = 0
            int32_t x11_2 = x12_1
            
            do
                int32_t x12_2 = x12_1 s>> 1
                arg6 = x9_2[sx.q((x12_2 + 1) << 1)]
                arg6 f- arg7.d
                
                if (not(arg6 f> arg7.d))
                    x10_4 = x12_2 + 1
                
                if (arg6 f> arg7.d)
                    x11_2 = x12_2
                
                x12_1 = x10_4 + x11_2
            while (x10_4 != x11_2)
            
            int32_t x10_5 = x10_4 << 1
            v3.d = x9_2[sx.q(x10_5)]
            x10_6 = x10_5 + 2
        
        void* x11_3 = &x9_2[sx.q(x10_6)]
        arg6 = *(x11_3 - 4)
        double v5
        v5.d = *x11_3
        int32_t* x11_4 = *(arg1 + 0x10)
        int32_t x14_1 = (x10_6 s>> 1) * 0x13
        arg7.d = arg7.d f- v5.d
        v5.d = v3.d f- v5.d
        arg7.d = arg7.d f/ v5.d
        v5.d = x11_4[sx.q(x14_1 - 0x13)]
        v4.d = fconvert.s(1f)
        arg7.d = v4.d f- arg7.d
        v3.d = 0f
        bool cond:3_1 = arg7.d f< 0f
        arg7.d = vmin_f32(arg7.d, v4.d)
        
        if (cond:3_1)
            arg7.d = v3.d
        else
            arg7.d = arg7.d
        
        if (not(v5.d f!= 0f))
            v3 = arg7
        else if (not(v5.d f== v4.d))
            int32_t x12_5 = x14_1 - 0x12
            int64_t x2 = zx.q(x12_5) << 0x20
            int64_t x13_3 = 0
            int64_t x14_3 = x2 + -0x100000000
            int64_t x15_1 = x2 + -0x200000000
            
            while (true)
                v3.d = x11_4[sx.q(x12_5) + x13_3]
                
                if (v3.d f>= arg7.d)
                    if (x13_3.d == 0)
                        v4.d = 0f
                        v5.d = 0f
                    else
                        v4.d = *(x11_4 + (x15_1 s>> 0x1e))
                        v5.d = *(x11_4 + (x14_3 s>> 0x1e))
                        x12_5 += x13_3.d
                    
                    arg7.d = arg7.d f- v4.d
                    v3.d = v3.d f- v4.d
                    arg7.d = arg7.d f* (x11_4[sx.q(x12_5 + 1)] f- v5.d)
                    arg7.d = arg7.d f/ v3.d
                    v3.d = v5.d f+ arg7.d
                    break
                
                x13_3 += 2
                x14_3 += 0x200000000
                x15_1 += 0x200000000
                
                if (sx.q(x12_5) - 2 + x13_3 s>= sx.q(x14_1 - 2))
                    v4.d = *(x11_4 + (x14_3 s>> 0x1e))
                    v5.d = fconvert.s(1f)
                    arg7.d = arg7.d f- v3.d
                    v3.d = v5.d f- v3.d
                    arg7.d = arg7.d f* (v5.d f- v4.d)
                    arg7.d = arg7.d f/ v3.d
                    v3.d = v4.d f+ arg7.d
                    break
        
        arg7.d = x9_2[sx.q(x10_6) + 1]
        v4.d = float.s(0xc3b40000)
        arg7.d = arg7.d f- arg6
        v4.d = arg7.d f/ v4.d
        v4.d = float.s((0x4000 - vcvtd_s32_f64(fconvert.d(v4.d) + float.d(0x40d0001fffffffff)))
            * 0x168)
        arg7.d = arg7.d f- v4.d
        arg7.d = v3.d f* arg7.d
        arg6 = arg6 f+ arg7.d
        
        if (arg5 - 1 u< 2)
            arg7.d = x8[6].d
            v3.d = *(*x8 + 0x24)
            v3.d = v3.d f- arg7.d
            arg6 = arg6 f+ v3.d
        label_fadf74:
            v3.d = float.s(0xc3b40000)
            v3.d = arg6 f/ v3.d
            v3 = fconvert.d(v3.d) + float.d(0x40d0001fffffffff)
            goto label_fadfa0
        
        if (arg5 == 0)
            arg7.d = float.s(0xc3b40000)
            arg7.d = arg6 f/ arg7.d
            v3.d = *(*x8 + 0x24)
            arg7.d = float.s((0x4000
                - vcvtd_s32_f64(fconvert.d(arg7.d) + float.d(0x40d0001fffffffff))) * 0x168)
            x8[6].d = (arg6 f- arg7.d) * arg8 f+ v3.d
        else if (arg5 == 3)
            arg7.d = x8[6].d
            goto label_fadf74
else if (arg5 == 1)
    arg6 = x8[6].d
    arg7.d = *(*x8 + 0x24)
    v3.d = float.s(0xc3b40000)
    arg7.d = arg7.d f- arg6
    v3.d = arg7.d f/ v3.d
    v3.d = float.s((0x4000 - vcvtd_s32_f64(fconvert.d(v3.d) + float.d(0x40d0001fffffffff))) * 0x168)
    arg7.d = arg7.d f- v3.d
    arg7.d = arg7.d f* arg8
    x8[6].d = arg6 f+ arg7.d
else if (arg5 == 0)
    x8[6].d = *(*x8 + 0x24)
