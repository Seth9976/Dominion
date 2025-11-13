// 函数: _spTwoColorTimeline_apply
// 地址: 0xfaf388
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_60 = arg21.q
int64_t var_58 = arg20.q
int64_t var_50 = arg19.q
int64_t var_48 = arg18.q
int64_t var_40 = arg17.q
int64_t var_38 = arg16.q
int64_t var_30 = arg15.q
int64_t var_28 = arg14
int64_t* x21 = *(*(arg2 + 0x28) + (sx.q(*(arg1 + 0x28)) << 3))

if (*(x21[1] + 0x80) != 0)
    int32_t* x8_3 = *(arg1 + 0x20)
    arg14 = arg8
    float v16 = *x8_3
    int32_t* x19
    float v0_1
    float v1_1
    float v2_1
    
    if (v16 <= arg7)
        int32_t x9_2 = *(arg1 + 0x18)
        void* x20
        int64_t lr
        
        if (x8_3[sx.q(x9_2 - 8)] f<= arg7)
            arg21.d = x8_3[sx.q(x9_2 - 7)]
            arg20.d = x8_3[sx.q(x9_2 - 6)]
            arg19.d = x8_3[sx.q(x9_2 - 5)]
            arg18.d = x8_3[sx.q(x9_2 - 4)]
            arg15.d = x8_3[sx.q(x9_2 - 3)]
            arg16.d = x8_3[sx.q(x9_2 - 2)]
            arg17.d = x8_3[sx.q(x9_2 - 1)]
            arg6 = fconvert.s(1f)
            x20 = &x21[2]
            
            if (arg14.d f== arg6)
            label_faf7b0:
                spColor_setFromFloats(x20, arg21, arg20, arg19, arg18, arg10, arg11, arg12, arg13, 
                    var_60, var_58, var_50, var_48, var_40, var_38, var_30, var_28, lr)
                int128_t v0_4 = arg15
                int128_t v1_4 = arg16
                int128_t v2_4 = arg17
                arg15.q = var_30
                arg17.q = var_40
                arg16.q = var_38
                arg19.q = var_50
                arg18.q = var_48
                int128_t v3_4
                v3_4.d = fconvert.s(1f)
                arg21.q = var_60
                arg20.q = var_58
                return spColor_setFromFloats(x21[4], v0_4, v1_4, v2_4, v3_4) __tailcall
        else
            int32_t x9_3
            
            if (x9_2 s< 0)
                x9_3 = x9_2 + 7
            else
                x9_3 = x9_2
            
            int32_t x9_4 = x9_3 s>> 3
            int32_t x11_2 = x9_4 - 2
            int32_t x9_7
            
            if (x9_4 == 2)
                x9_7 = 8
            else
                int32_t x9_5 = 0
                int32_t x10_4 = x11_2
                
                do
                    int32_t x11_3 = x11_2 s>> 1
                    arg6 = x8_3[sx.q((x11_3 + 1) << 3)]
                    arg6 - arg7
                    
                    if (not(arg6 > arg7))
                        x9_5 = x11_3 + 1
                    
                    if (arg6 > arg7)
                        x10_4 = x11_3
                    
                    x11_2 = x9_5 + x10_4
                while (x9_5 != x10_4)
                
                int32_t x9_6 = x9_5 << 3
                v16 = x8_3[sx.q(x9_6)]
                x9_7 = x9_6 + 8
            
            float* x10_7 = &x8_3[sx.q(x9_7)]
            arg13 = x10_7[-1]
            float v18 = *x10_7
            arg12 = x10_7[-7]
            arg6 = x10_7[-6]
            arg8.d = x10_7[-5]
            arg9 = x10_7[-4]
            arg10 = x10_7[-3]
            arg11 = x10_7[-2]
            float* x10_8 = *(arg1 + 0x10)
            int32_t x11_7
            
            if (x9_7 s< 0)
                x11_7 = x9_7 + 7
            else
                x11_7 = x9_7
            
            int32_t x13_4 = (x11_7 s>> 3) * 0x13
            arg7 = (arg7 - v18) / (v16 - v18)
            v18 = x10_8[sx.q(x13_4 - 0x13)]
            float v17 = fconvert.s(1f)
            arg7 = v17 - arg7
            v16 = 0f
            float temp0_1 = vmin_f32(arg7, v17)
            
            arg7 = arg7 < 0f ? v16 : temp0_1
            
            if (not(v18 != 0f))
                v16 = arg7
            else if (not(v18 == v17))
                int32_t x11_10 = x13_4 - 0x12
                int64_t x1_6 = zx.q(x11_10) << 0x20
                int64_t x12_6 = 0
                int64_t x13_6 = x1_6 + -0x100000000
                int64_t x14_4 = x1_6 + -0x200000000
                
                while (true)
                    v16 = x10_8[sx.q(x11_10) + x12_6]
                    
                    if (v16 >= arg7)
                        if (x12_6.d == 0)
                            v17 = 0f
                            v18 = 0f
                        else
                            v17 = *(x10_8 + (x14_4 s>> 0x1e))
                            v18 = *(x10_8 + (x13_6 s>> 0x1e))
                            x11_10 += x12_6.d
                        
                        v16 = v18 + (arg7 - v17) * (x10_8[sx.q(x11_10 + 1)] - v18) / (v16 - v17)
                        break
                    
                    x12_6 += 2
                    x13_6 += 0x200000000
                    x14_4 += 0x200000000
                    
                    if (sx.q(x11_10) - 2 + x12_6 s>= sx.q(x13_4 - 2))
                        v17 = *(x10_8 + (x13_6 s>> 0x1e))
                        v18 = fconvert.s(1f)
                        v16 = v17 + (arg7 - v16) * (v18 - v17) / (v18 - v16)
                        break
            
            void* x8_11 = &x8_3[sx.q(x9_7)]
            arg7 = v16 * (*(x8_11 + 4) - arg12)
            arg21.d = arg12 + arg7
            arg20.d = arg6 + v16 * (*(x8_11 + 8) - arg6)
            arg19.d = arg8.d f+ v16 * (*(x8_11 + 0xc) f- arg8.d)
            arg18.d = arg9 + v16 * (*(x8_11 + 0x10) - arg9)
            arg15.d = arg10 + v16 * (*(x8_11 + 0x14) - arg10)
            arg16.d = arg11 + v16 * (*(x8_11 + 0x18) - arg11)
            arg17.d = arg13 + v16 * (*(x8_11 + 0x1c) - arg13)
            arg6 = fconvert.s(1f)
            x20 = &x21[2]
            
            if (not(arg14.d f!= arg6))
                goto label_faf7b0
        
        x19 = x21[4]
        
        if (arg5 == 0)
            spColor_setFromColor(x20, *x21 + 0x20, arg6, arg7, arg8, arg9, arg10, arg11, arg12, 
                arg13, var_60, var_58, var_50, var_48, var_40, var_38, var_30, var_28, lr)
            spColor_setFromColor(x19, *(*x21 + 0x30))
        
        arg8.d = x21[3].d
        arg8.d = arg19.d f- arg8.d
        arg8.d = arg8.d f* arg14.d
        spColor_addFloats(x20, (arg21.d f- x21[2].d) f* arg14.d, 
            (arg20.d f- *(x21 + 0x14)) f* arg14.d, arg8, (arg18.d f- *(x21 + 0x1c)) f* arg14.d)
        v0_1 = arg15.d f- *x19
        v1_1 = arg16.d f- x19[1]
        v2_1 = arg17.d f- x19[2]
        goto label_faf5cc
    
    if (arg5 == 1)
        void* x8_9 = *x21
        x19 = x21[4]
        int32_t* x20_1 = *(x8_9 + 0x30)
        arg8.d = *(x8_9 + 0x24)
        arg7 = arg8.d f- *(x21 + 0x14)
        arg8.d = *(x8_9 + 0x28) f- x21[3].d
        arg8.d = arg8.d f* arg14.d
        spColor_addFloats((*(x8_9 + 0x20) f- x21[2].d) f* arg14.d, arg7 f* arg14.d, arg8, 
            (*(x8_9 + 0x2c) - *(x21 + 0x1c)) f* arg14.d)
        v0_1 = *x20_1 - *x19
        v1_1 = x20_1[1] f- x19[1]
        v2_1 = x20_1[2] f- x19[2]
    label_faf5cc:
        arg15.q = var_30
        arg17.q = var_40
        arg16.q = var_38
        arg19.q = var_50
        arg18.q = var_48
        arg21.q = var_60
        arg20.q = var_58
        return spColor_addFloats(x19, v0_1 f* arg14.d, v1_1 f* arg14.d, v2_1 f* arg14.d, 0f)
            __tailcall
    
    if (arg5 == 0)
        spColor_setFromColor(&x21[2], *x21 + 0x20)
        arg15.q = var_30
        arg17.q = var_40
        arg16.q = var_38
        arg19.q = var_50
        arg18.q = var_48
        arg21.q = var_60
        arg20.q = var_58
        return spColor_setFromColor(x21[4], *(*x21 + 0x30)) __tailcall

arg15.q = var_30
arg17.q = var_40
arg16.q = var_38
arg19.q = var_50
arg18.q = var_48
arg21.q = var_60
arg20.q = var_58
