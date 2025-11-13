// 函数: _spPathConstraintPositionTimeline_apply
// 地址: 0xfb1ff0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(*(arg2 + 0x60) + (sx.q(*(arg1 + 0x28)) << 3))

if (x8[0x15].d == 0)
    return 

int32_t* x9_2 = *(arg1 + 0x20)
arg6 = *x9_2

if (arg6 <= arg7)
    int32_t x10_1 = *(arg1 + 0x18)
    
    if (x9_2[sx.q(x10_1 - 2)] f<= arg7)
        arg6 = x9_2[sx.q(x10_1 - 1)]
        
        if (arg5 != 0)
            goto label_fb21fc
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
                arg6 - arg7
                
                if (not(arg6 > arg7))
                    x10_4 = x12_2 + 1
                
                if (arg6 > arg7)
                    x11_2 = x12_2
                
                x12_1 = x10_4 + x11_2
            while (x10_4 != x11_2)
            
            int32_t x10_5 = x10_4 << 1
            arg6 = x9_2[sx.q(x10_5)]
            x10_6 = x10_5 + 2
        
        void* x12_3 = &x9_2[sx.q(x10_6)]
        float v5 = *x12_3
        float* x11_3 = *(arg1 + 0x10)
        arg7 = arg7 - v5
        v5 = arg6 - v5
        arg6 = *(x12_3 - 4)
        int32_t x12_4
        
        if (x10_6 s< 0)
            x12_4 = x10_6 + 1
        else
            x12_4 = x10_6
        
        int32_t x14_1 = (x12_4 s>> 1) * 0x13
        arg7 = arg7 / v5
        v5 = x11_3[sx.q(x14_1 - 0x13)]
        float v4 = fconvert.s(1f)
        arg7 = v4 - arg7
        float v3 = 0f
        float temp0_1 = vmin_f32(arg7, v4)
        
        arg7 = arg7 < 0f ? v3 : temp0_1
        
        if (not(v5 != 0f))
            v3 = arg7
        else if (not(v5 == v4))
            int32_t x12_7 = x14_1 - 0x12
            int64_t x2 = zx.q(x12_7) << 0x20
            int64_t x13_3 = 0
            int64_t x14_3 = x2 + -0x100000000
            int64_t x15_1 = x2 + -0x200000000
            
            while (true)
                v3 = x11_3[sx.q(x12_7) + x13_3]
                
                if (v3 >= arg7)
                    if (x13_3.d == 0)
                        v4 = 0f
                        v5 = 0f
                    else
                        v4 = *(x11_3 + (x15_1 s>> 0x1e))
                        v5 = *(x11_3 + (x14_3 s>> 0x1e))
                        x12_7 += x13_3.d
                    
                    v3 = v5 + (arg7 - v4) * (x11_3[sx.q(x12_7 + 1)] - v5) / (v3 - v4)
                    break
                
                x13_3 += 2
                x14_3 += 0x200000000
                x15_1 += 0x200000000
                
                if (sx.q(x12_7) - 2 + x13_3 s>= sx.q(x14_1 - 2))
                    v4 = *(x11_3 + (x14_3 s>> 0x1e))
                    v5 = fconvert.s(1f)
                    v3 = v4 + (arg7 - v3) * (v5 - v4) / (v5 - v3)
                    break
        
        arg6 = arg6 + v3 * (x9_2[sx.q(x10_6) + 1] f- arg6)
        
        if (arg5 != 0)
            goto label_fb21fc
    
    arg7 = *(*x8 + 0x38)
    x8[4].d = arg7 + (arg6 - arg7) * arg8
else if (arg5 == 1)
    arg6 = *(*x8 + 0x38)
label_fb21fc:
    arg7 = x8[4].d
    x8[4].d = arg7 + (arg6 - arg7) * arg8
else if (arg5 == 0)
    x8[4].d = *(*x8 + 0x38)
