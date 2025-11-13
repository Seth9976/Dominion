// 函数: _spColorTimeline_apply
// 地址: 0xfaef00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_40 = arg12.q
int64_t var_30 = arg11.q
int64_t var_28 = arg10.q
int64_t var_20 = arg9.q
int64_t v8
int64_t var_18 = v8
int64_t* x19 = *(*(arg2 + 0x28) + (sx.q(*(arg1 + 0x28)) << 3))

if (*(x19[1] + 0x80) != 0)
    int32_t* x8_3 = *(arg1 + 0x20)
    v8 = arg8
    float v3 = *x8_3
    void* x0_4
    
    if (v3 <= arg7)
        int32_t x10_2 = *(arg1 + 0x18)
        float entry_v4
        float entry_v5
        float entry_v6
        float entry_v7
        
        if (x8_3[sx.q(x10_2 - 5)] f<= arg7)
            arg12.d = x8_3[sx.q(x10_2 - 4)]
            arg11.d = x8_3[sx.q(x10_2 - 3)]
            arg10.d = x8_3[sx.q(x10_2 - 2)]
            arg9.d = x8_3[sx.q(x10_2 - 1)]
            arg6 = fconvert.s(1f)
            
            if (v8.d f== arg6)
            label_faf23c:
                int128_t v1_2 = arg11
                int128_t v2_2 = arg10
                int128_t v3_3 = arg9
                arg9.q = var_20
                arg11.q = var_30
                arg10.q = var_28
                int128_t v0_2 = arg12
                arg12.q = var_40
                return spColor_setFromFloats(&x19[2], v0_2, v1_2, v2_2, v3_3, entry_v4, entry_v5, 
                    entry_v6, entry_v7) __tailcall
        else
            int32_t x10_5 = x10_2 s/ 5
            int32_t x12_2 = x10_5 - 2
            int32_t x11_4
            
            if (x10_5 == 2)
                x11_4 = 5
            else
                int32_t x10_6 = 0
                int32_t x11_3 = x12_2
                
                do
                    int32_t x12_3 = x12_2 s>> 1
                    arg6 = x8_3[sx.q((x12_3 + 1) * 5)]
                    arg6 - arg7
                    
                    if (not(arg6 > arg7))
                        x10_6 = x12_3 + 1
                    
                    if (arg6 > arg7)
                        x11_3 = x12_3
                    
                    x12_2 = x10_6 + x11_3
                while (x10_6 != x11_3)
                
                int32_t x10_7 = x10_6 * 5
                v3 = x8_3[sx.q(x10_7)]
                x11_4 = x10_7 + 5
            
            void* x12_6 = &x8_3[sx.q(x11_4)]
            entry_v4 = *x12_6
            float* x10_10 = *(arg1 + 0x10)
            arg8.d = *(x12_6 - 0x10)
            arg6 = *(x12_6 - 0xc)
            entry_v7 = arg7 - entry_v4
            entry_v4 = v3 - entry_v4
            arg7 = *(x12_6 - 8)
            v3 = *(x12_6 - 4)
            int32_t x13_5 = x11_4 s/ 5 * 0x13
            entry_v4 = entry_v7 / entry_v4
            entry_v7 = x10_10[sx.q(x13_5 - 0x13)]
            entry_v6 = fconvert.s(1f)
            entry_v4 = entry_v6 - entry_v4
            entry_v5 = 0f
            float temp0_1 = vmin_f32(entry_v4, entry_v6)
            
            entry_v4 = entry_v4 < 0f ? entry_v5 : temp0_1
            
            if (not(entry_v7 != 0f))
                entry_v5 = entry_v4
            else if (not(entry_v7 == entry_v6))
                int32_t x11_7 = x13_5 - 0x12
                int64_t x1_4 = zx.q(x11_7) << 0x20
                int64_t x12_8 = 0
                int64_t x13_7 = x1_4 + -0x100000000
                int64_t x14_3 = x1_4 + -0x200000000
                
                while (true)
                    entry_v5 = x10_10[sx.q(x11_7) + x12_8]
                    
                    if (entry_v5 >= entry_v4)
                        if (x12_8.d == 0)
                            entry_v6 = 0f
                            entry_v7 = 0f
                        else
                            entry_v6 = *(x10_10 + (x14_3 s>> 0x1e))
                            entry_v7 = *(x10_10 + (x13_7 s>> 0x1e))
                            x11_7 += x12_8.d
                        
                        entry_v5 = entry_v7 + (entry_v4 - entry_v6)
                            * (x10_10[sx.q(x11_7 + 1)] - entry_v7) / (entry_v5 - entry_v6)
                        break
                    
                    x12_8 += 2
                    x13_7 += 0x200000000
                    x14_3 += 0x200000000
                    
                    if (sx.q(x11_7) - 2 + x12_8 s>= sx.q(x13_5 - 2))
                        entry_v6 = *(x10_10 + (x13_7 s>> 0x1e))
                        entry_v7 = fconvert.s(1f)
                        entry_v5 = entry_v6
                            + (entry_v4 - entry_v5) * (entry_v7 - entry_v6) / (entry_v7 - entry_v5)
                        break
            
            void* x8_9 = &x8_3[sx.q(x11_4)]
            entry_v4 = entry_v5 * (*(x8_9 + 4) f- arg8.d)
            entry_v6 = entry_v5 * (*(x8_9 + 8) - arg6)
            entry_v7 = entry_v5 * (*(x8_9 + 0xc) - arg7)
            entry_v5 = entry_v5 * (*(x8_9 + 0x10) - v3)
            arg12.d = arg8.d f+ entry_v4
            arg11.d = arg6 + entry_v6
            arg10.d = arg7 + entry_v7
            arg9.d = v3 + entry_v5
            arg6 = fconvert.s(1f)
            
            if (not(v8.d f!= arg6))
                goto label_faf23c
        
        if (arg5 == 0)
            spColor_setFromColor(&x19[2], *x19 + 0x20, arg6, arg7, arg8, v3, entry_v4, entry_v5, 
                entry_v6, entry_v7, var_40)
        
        arg8.d = x19[3].d
        arg6 = (arg12.d f- x19[2].d) f* v8.d
        arg8.d = arg10.d f- arg8.d
        arg7 = (arg11.d f- *(x19 + 0x14)) f* v8.d
        arg8.d = arg8.d f* v8.d
        v3 = (arg9.d f- *(x19 + 0x1c)) f* v8.d
        x0_4 = &x19[2]
        goto label_faf0a4
    
    if (arg5 == 1)
        void* x8_7 = *x19
        arg8.d = *(x8_7 + 0x24)
        x0_4 = &x19[2]
        arg6 = (*(x8_7 + 0x20) - *x0_4) f* v8.d
        arg7 = arg8.d f- *(x19 + 0x14)
        arg8.d = *(x8_7 + 0x28) f- x19[3].d
        arg7 = arg7 f* v8.d
        arg8.d = arg8.d f* v8.d
        v3 = (*(x8_7 + 0x2c) - *(x19 + 0x1c)) f* v8.d
    label_faf0a4:
        arg9.q = var_20
        arg11.q = var_30
        arg10.q = var_28
        arg12.q = var_40
        return spColor_addFloats(x0_4, arg6, arg7, arg8, v3) __tailcall
    
    if (arg5 == 0)
        arg9.q = var_20
        arg11.q = var_30
        arg10.q = var_28
        arg12.q = var_40
        return spColor_setFromColor(&x19[2], *x19 + 0x20) __tailcall

arg9.q = var_20
arg11.q = var_30
arg10.q = var_28
arg12.q = var_40
