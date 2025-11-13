// 函数: _spScaleTimeline_apply
// 地址: 0xfae500
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(*(arg2 + 0x10) + (sx.q(*(arg1 + 0x28)) << 3))

if (x8[0x10].d == 0)
    return 

int32_t* x9_2 = *(arg1 + 0x20)
arg7 = *x9_2
float v3

if (arg7 <= arg8)
    int32_t x11_1 = *(arg1 + 0x18)
    void* x10_2
    float v4
    float v5
    float v6
    
    if (not(x9_2[sx.q(x11_1 - 3)] f<= arg8))
        uint32_t x11_4 = x11_1 s/ 3
        int32_t x13_1 = x11_4 - 2
        int32_t x11_7
        
        if (x11_4 == 2)
            x11_7 = 3
        else
            int32_t x11_5 = 0
            int32_t x12_2 = x13_1
            
            do
                int32_t x13_2 = x13_1 s>> 1
                arg7 = x9_2[sx.q((x13_2 + 1) * 3)]
                arg7 - arg8
                
                if (not(arg7 > arg8))
                    x11_5 = x13_2 + 1
                
                if (arg7 > arg8)
                    x12_2 = x13_2
                
                x13_1 = x11_5 + x12_2
            while (x11_5 != x12_2)
            
            int32_t x11_6 = x11_5 * 3
            arg7 = x9_2[sx.q(x11_6)]
            x11_7 = x11_6 + 3
        
        void* x12_4 = &x9_2[sx.q(x11_7)]
        v3 = *x12_4
        float* x10_3 = *(arg1 + 0x10)
        v6 = arg8 - v3
        v3 = arg7 - v3
        arg7 = *(x12_4 - 8)
        arg8 = *(x12_4 - 4)
        int32_t x14_3 = x11_7 s/ 3 * 0x13
        v3 = v6 / v3
        v6 = x10_3[sx.q(x14_3 - 0x13)]
        v4 = fconvert.s(1f)
        v3 = v4 - v3
        v5 = 0f
        float temp0_1 = vmin_f32(v3, v4)
        
        v3 = v3 < 0f ? v5 : temp0_1
        
        if (not(v6 != 0f))
            v5 = v3
        else if (not(v6 == v4))
            int32_t x12_8 = x14_3 - 0x12
            int64_t x2 = zx.q(x12_8) << 0x20
            int64_t x13_5 = 0
            int64_t x14_5 = x2 + -0x100000000
            int64_t x15_1 = x2 + -0x200000000
            
            while (true)
                v4 = x10_3[sx.q(x12_8) + x13_5]
                
                if (v4 >= v3)
                    if (x13_5.d == 0)
                        v5 = 0f
                        v6 = 0f
                    else
                        v5 = *(x10_3 + (x15_1 s>> 0x1e))
                        v6 = *(x10_3 + (x14_5 s>> 0x1e))
                        x12_8 += x13_5.d
                    
                    v5 = v6 + (v3 - v5) * (x10_3[sx.q(x12_8 + 1)] - v6) / (v4 - v5)
                    break
                
                x13_5 += 2
                x14_5 += 0x200000000
                x15_1 += 0x200000000
                
                if (sx.q(x12_8) - 2 + x13_5 s>= sx.q(x14_3 - 2))
                    v5 = *(x10_3 + (x14_5 s>> 0x1e))
                    v6 = fconvert.s(1f)
                    v5 = v5 + (v3 - v4) * (v6 - v5) / (v6 - v4)
                    break
        
        x10_2 = *x8
        void* x9_6 = &x9_2[sx.q(x11_7)]
        v3 = *(x10_2 + 0x28)
        v4 = *(x10_2 + 0x2c)
        v6 = v5 * (*(x9_6 + 4) - arg7)
        v5 = arg8 + v5 * (*(x9_6 + 8) - arg8)
        arg8 = v3 * (arg7 + v6)
        arg7 = v4 * v5
        
        if (arg9 != fconvert.s(1f))
            goto label_fae5e8
        
        goto label_fae9c8
    
    x10_2 = *x8
    v3 = *(x10_2 + 0x28)
    v4 = *(x10_2 + 0x2c)
    arg8 = x9_2[sx.q(x11_1 - 2)] f* v3
    arg7 = x9_2[sx.q(x11_1 - 1)] f* v4
    
    if (arg9 == fconvert.s(1f))
    label_fae9c8:
        
        if (arg5 != 3)
            *(x8 + 0x34) = arg8
            x8[7].d = arg7
        else
            arg8 = arg8 - v3
            v3 = x8[7].d
            *(x8 + 0x34) = *(x8 + 0x34) + arg8
            x8[7].d = v3 + arg7 - *(x10_2 + 0x2c)
    else
    label_fae5e8:
        float v7
        float v16
        
        if (arg6 == 1)
            if (arg5 - 1 u< 2)
                v3 = *(x8 + 0x34)
                v4 = x8[7].d
            label_fae79c:
                v6 = 0f
                v7 = fconvert.s(1f)
                
                if (arg8 < 0f)
                    arg8 = fneg(arg8)
                
                v3 - 0f
                v16 = fconvert.s(-1f)
                
                v5 = v3 > 0f ? v7 : v6
                
                if (v3 < 0f)
                    v5 = v16
                
                arg8 = arg8 * v5
                
                if (arg7 < 0f)
                    arg7 = fneg(arg7)
                
                v4 - 0f
                
                v5 = v4 > 0f ? v7 : v6
                
                if (v4 < 0f)
                    v5 = v16
                
                arg8 = v3 + (arg8 - v3) * arg9
                arg7 = arg7 * v5
                goto label_fae7ec
            
            if (arg5 == 3)
                v4 = *(x8 + 0x34)
                v5 = x8[7].d
                v7 = 0f
                v16 = fconvert.s(1f)
                
                if (arg8 < 0f)
                    arg8 = fneg(arg8)
                
                v4 - 0f
                float v17 = fconvert.s(-1f)
                
                v6 = v4 > 0f ? v16 : v7
                
                if (v4 < 0f)
                    v6 = v17
                
                *(x8 + 0x34) = v4 + (arg8 * v6 - v3) * arg9
                
                if (arg7 < 0f)
                    arg7 = fneg(arg7)
                
                v5 - 0f
                
                v3 = v5 > 0f ? v16 : v7
                
                if (v5 < 0f)
                    v3 = v17
                
                x8[7].d = v5 + (arg7 * v3 - *(x10_2 + 0x2c)) * arg9
            else if (arg5 == 0)
                goto label_fae79c
        else if (arg5 - 1 u< 2)
            v4 = *(x8 + 0x34)
            v7 = x8[7].d
            v3 = 0f
            v5 = fconvert.s(1f)
            v6 = fconvert.s(-1f)
            
            if (v4 < 0f)
                v4 = fneg(v4)
            
            arg8 - 0f
            
            v16 = arg8 > 0f ? v5 : v3
            
            if (arg8 < 0f)
                v16 = v6
            
            v4 = v16 * v4
            
            if (v7 < 0f)
                v7 = fneg(v7)
            
            arg7 - 0f
            
            if (arg7 > 0f)
                v3 = v5
            
            if (arg7 < 0f)
                v3 = v6
            
            v3 = v3 * v7
            *(x8 + 0x34) = v4 + (arg8 - v4) * arg9
            x8[7].d = v3 + (arg7 - v3) * arg9
        else
            if (arg5 == 3)
                arg8 - 0f
                v4 = 0f
                v5 = fconvert.s(1f)
                v6 = fconvert.s(-1f)
                
                v7 = arg8 > 0f ? v5 : v4
                
                if (arg8 < 0f)
                    v7 = v6
                
                arg7 - 0f
                
                if (arg7 > 0f)
                    v4 = v5
                
                v16 = *(x8 + 0x34)
                v5 = x8[7].d
                
                if (arg7 < 0f)
                    v4 = v6
                
                if (v16 < 0f)
                    v6 = fneg(v16)
                else
                    v6 = v16
                
                if (v3 < 0f)
                    v3 = fneg(v3)
                
                *(x8 + 0x34) = v7 * v6 + (arg8 - v7 * v3) * arg9
                arg8 = *(x10_2 + 0x2c)
                
                if (v5 < 0f)
                    v3 = fneg(v5)
                else
                    v3 = v5
                
                if (arg8 < 0f)
                    arg8 = fneg(arg8)
                
                v3 = v4 * v3
                arg7 = arg7 - v4 * arg8
                goto label_fae62c
            
            if (arg5 == 0)
                v6 = 0f
                v7 = fconvert.s(1f)
                
                if (v3 < 0f)
                    v3 = fneg(v3)
                
                arg8 - 0f
                v16 = fconvert.s(-1f)
                
                v5 = arg8 > 0f ? v7 : v6
                
                if (arg8 < 0f)
                    v5 = v16
                
                v3 = v5 * v3
                
                if (v4 < 0f)
                    v4 = fneg(v4)
                
                arg7 - 0f
                
                v5 = arg7 > 0f ? v7 : v6
                
                if (arg7 < 0f)
                    v5 = v16
                
                v4 = v5 * v4
                arg8 = v3 + (arg8 - v3) * arg9
            label_fae7ec:
                *(x8 + 0x34) = arg8
                x8[7].d = v4 + (arg7 - v4) * arg9
else if (arg5 == 1)
    void* x9_5 = *x8
    arg8 = *(x8 + 0x34)
    v3 = x8[7].d
    *(x8 + 0x34) = arg8 + (*(x9_5 + 0x28) - arg8) * arg9
    arg7 = *(x9_5 + 0x2c) - v3
label_fae62c:
    x8[7].d = v3 + arg7 * arg9
else if (arg5 == 0)
    void* x9_3 = *x8
    *(x8 + 0x34) = *(x9_3 + 0x28)
    x8[7].d = *(x9_3 + 0x2c)
