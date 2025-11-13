// 函数: _spShearTimeline_apply
// 地址: 0xfaeb0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(*(arg2 + 0x10) + (sx.q(*(arg1 + 0x28)) << 3))

if (x8[0x10].d == 0)
    return 

int32_t* x9_2 = *(arg1 + 0x20)
arg6 = *x9_2
float v3

if (arg6 <= arg7)
    int32_t x11_1 = *(arg1 + 0x18)
    float v4
    
    if (not(x9_2[sx.q(x11_1 - 3)] f<= arg7))
        uint32_t x11_4 = x11_1 s/ 3
        int32_t x13_1 = x11_4 - 2
        int32_t x12_3
        
        if (x11_4 == 2)
            x12_3 = 3
        else
            int32_t x11_5 = 0
            int32_t x12_2 = x13_1
            
            do
                int32_t x13_2 = x13_1 s>> 1
                arg6 = x9_2[sx.q((x13_2 + 1) * 3)]
                arg6 - arg7
                
                if (not(arg6 > arg7))
                    x11_5 = x13_2 + 1
                
                if (arg6 > arg7)
                    x12_2 = x13_2
                
                x13_1 = x11_5 + x12_2
            while (x11_5 != x12_2)
            
            int32_t x11_6 = x11_5 * 3
            arg6 = x9_2[sx.q(x11_6)]
            x12_3 = x11_6 + 3
        
        void* x13_3 = &x9_2[sx.q(x12_3)]
        v3 = *x13_3
        float* x11_8 = *(arg1 + 0x10)
        float v6 = arg7 - v3
        v3 = arg6 - v3
        arg6 = *(x13_3 - 8)
        arg7 = *(x13_3 - 4)
        int32_t x14_3 = x12_3 s/ 3 * 0x13
        v3 = v6 / v3
        v6 = x11_8[sx.q(x14_3 - 0x13)]
        float v5 = fconvert.s(1f)
        v3 = v5 - v3
        v4 = 0f
        float temp0_1 = vmin_f32(v3, v5)
        
        v3 = v3 < 0f ? v4 : temp0_1
        
        if (not(v6 != 0f))
            v4 = v3
        else if (not(v6 == v5))
            int32_t x12_4 = x14_3 - 0x12
            int64_t x2 = zx.q(x12_4) << 0x20
            int64_t x13_5 = 0
            int64_t x14_5 = x2 + -0x100000000
            int64_t x15_1 = x2 + -0x200000000
            
            while (true)
                v4 = x11_8[sx.q(x12_4) + x13_5]
                
                if (v4 >= v3)
                    if (x13_5.d == 0)
                        v5 = 0f
                        v6 = 0f
                    else
                        v5 = *(x11_8 + (x15_1 s>> 0x1e))
                        v6 = *(x11_8 + (x14_5 s>> 0x1e))
                        x12_4 += x13_5.d
                    
                    v4 = v6 + (v3 - v5) * (x11_8[sx.q(x12_4 + 1)] - v6) / (v4 - v5)
                    break
                
                x13_5 += 2
                x14_5 += 0x200000000
                x15_1 += 0x200000000
                
                if (sx.q(x12_4) - 2 + x13_5 s>= sx.q(x14_3 - 2))
                    v5 = *(x11_8 + (x14_5 s>> 0x1e))
                    v6 = fconvert.s(1f)
                    v4 = v5 + (v3 - v4) * (v6 - v5) / (v6 - v4)
                    break
        
        void* x9_7 = &x9_2[sx.q(x12_3)]
        v3 = arg6 + v4 * (*(x9_7 + 4) - arg6)
        arg6 = arg7 + v4 * (*(x9_7 + 8) - arg7)
        
        if (arg5 - 1 u>= 2)
            goto label_faebe0
        
        goto label_faedb4
    
    v3 = x9_2[sx.q(x11_1 - 2)]
    arg6 = x9_2[sx.q(x11_1 - 1)]
    
    if (arg5 - 1 u< 2)
    label_faedb4:
        void* x9_9 = *x8
        arg7 = v3 + *(x9_9 + 0x30)
        v4 = *(x8 + 0x3c)
        v3 = x8[8].d
        *(x8 + 0x3c) = v4 + (arg7 - v4) * arg8
        x8[8].d = v3 + (arg6 + *(x9_9 + 0x34) - v3) * arg8
    else
    label_faebe0:
        
        if (arg5 == 3)
            arg6 = arg6 * arg8 f+ x8[8].d
            *(x8 + 0x3c) = v3 * arg8 + *(x8 + 0x3c)
            x8[8].d = arg6
        else if (arg5 == 0)
            void* x9_5 = *x8
            *(x8 + 0x3c) = v3 * arg8 + *(x9_5 + 0x30)
            x8[8].d = arg6 * arg8 + *(x9_5 + 0x34)
else if (arg5 == 1)
    void* x9_6 = *x8
    arg7 = *(x8 + 0x3c)
    v3 = x8[8].d
    *(x8 + 0x3c) = arg7 + (*(x9_6 + 0x30) - arg7) * arg8
    x8[8].d = v3 + (*(x9_6 + 0x34) - v3) * arg8
else if (arg5 == 0)
    void* x9_3 = *x8
    *(x8 + 0x3c) = *(x9_3 + 0x30)
    x8[8].d = *(x9_3 + 0x34)
