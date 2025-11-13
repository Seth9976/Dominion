// 函数: _spIkConstraintTimeline_apply
// 地址: 0xfb1608
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(*(arg2 + 0x40) + (sx.q(*(arg1 + 0x28)) << 3))

if (*(x8 + 0x34) == 0)
    return 

int32_t* x9_2 = *(arg1 + 0x20)
arg7 = *x9_2
float v3

if (not(arg7 <= arg8))
    void* x9_3
    
    if (arg5 == 1)
        x9_3 = *x8
        arg8 = *(x8 + 0x2c)
        v3 = x8[6].d
        *(x8 + 0x2c) = arg8 + (*(x9_3 + 0x38) - arg8) * arg9
        arg7 = v3 + (*(x9_3 + 0x3c) - v3) * arg9
    label_fb1734:
        x8[6].d = arg7
        x8[4].d = *(x9_3 + 0x28)
        *(x8 + 0x24) = *(x9_3 + 0x2c)
        x8[5].d = *(x9_3 + 0x30)
        return 
    
    if (arg5 == 0)
        x9_3 = *x8
        *(x8 + 0x2c) = *(x9_3 + 0x38)
        arg7 = *(x9_3 + 0x3c)
        goto label_fb1734
    
    return 

int32_t x10_1 = *(arg1 + 0x18)

if (x9_2[sx.q(x10_1 - 6)] f<= arg8)
    if (arg5 == 0)
        void* x11_7 = *x8
        arg8 = *(x11_7 + 0x38)
        *(x8 + 0x2c) = arg8 + (x9_2[sx.q(x10_1 - 5)] f- arg8) * arg9
        arg7 = *(x11_7 + 0x3c)
        x8[6].d = arg7 + (x9_2[sx.q(x10_1 - 4)] f- arg7) * arg9
        
        if (arg6 != 1)
            goto label_fb182c
        
        x8[4].d = *(x11_7 + 0x28)
        *(x8 + 0x24) = *(x11_7 + 0x2c)
        x8[5].d = *(x11_7 + 0x30)
        return 
    
    arg8 = *(x8 + 0x2c)
    v3 = x8[6].d
    *(x8 + 0x2c) = arg8 + (x9_2[sx.q(x10_1 - 5)] f- arg8) * arg9
    x8[6].d = v3 + (x9_2[sx.q(x10_1 - 4)] f- v3) * arg9
    
    if (arg6 == 0)
    label_fb182c:
        x8[4].d = vcvts_s32_f32(x9_2[sx.q(x10_1 - 3)])
        *(x8 + 0x24) = x9_2[sx.q(x10_1 - 2)] f!= 0f ? 1 : 0
        x8[5].d = x9_2[sx.q(x10_1 - 1)] f!= 0f ? 1 : 0
    
    return 

uint32_t x10_4 = x10_1 s/ 6
int32_t x13_1 = x10_4 - 2
int32_t x10_8

if (x10_4 == 2)
    x10_8 = 6
else
    int32_t x10_5 = 0
    int32_t x11_3 = x13_1
    
    do
        int32_t x13_2 = x13_1 s>> 1
        arg7 = x9_2[sx.q((x13_2 + 1) * 6)]
        arg7 - arg8
        
        if (not(arg7 > arg8))
            x10_5 = x13_2 + 1
        
        if (arg7 > arg8)
            x11_3 = x13_2
        
        x13_1 = x10_5 + x11_3
    while (x10_5 != x11_3)
    
    int32_t x10_7 = x10_5 * 6
    arg7 = x9_2[sx.q(x10_7)]
    x10_8 = x10_7 + 6

void* x11_6 = &x9_2[sx.q(x10_8)]
float v4 = *x11_6
float* x12_3 = *(arg1 + 0x10)
int32_t x15_1 = x10_8 s/ 6 * 0x13
float v5 = arg8 - v4
arg7 = arg7 - v4
v4 = x12_3[sx.q(x15_1 - 0x13)]
v3 = fconvert.s(1f)
arg7 = v3 - v5 / arg7
arg8 = 0f
float temp0_1 = vmin_f32(arg7, v3)

arg7 = arg7 < 0f ? arg8 : temp0_1

if (not(v4 != 0f))
    arg8 = arg7
else if (not(v4 == v3))
    int32_t x13_6 = x15_1 - 0x12
    int64_t x3 = zx.q(x13_6) << 0x20
    int64_t x14_4 = 0
    int64_t x15_3 = x3 + -0x100000000
    int64_t x16_1 = x3 + -0x200000000
    
    while (true)
        arg8 = x12_3[sx.q(x13_6) + x14_4]
        
        if (arg8 >= arg7)
            if (x14_4.d == 0)
                v3 = 0f
                v4 = 0f
            else
                v3 = *(x12_3 + (x16_1 s>> 0x1e))
                v4 = *(x12_3 + (x15_3 s>> 0x1e))
                x13_6 += x14_4.d
            
            arg8 = v4 + (arg7 - v3) * (x12_3[sx.q(x13_6 + 1)] - v4) / (arg8 - v3)
            break
        
        x14_4 += 2
        x15_3 += 0x200000000
        x16_1 += 0x200000000
        
        if (sx.q(x13_6) - 2 + x14_4 s>= sx.q(x15_1 - 2))
            v3 = *(x12_3 + (x15_3 s>> 0x1e))
            v4 = fconvert.s(1f)
            arg8 = v3 + (arg7 - arg8) * (v4 - v3) / (v4 - arg8)
            break

v3 = *(x11_6 - 0x14)
arg7 = *(x11_6 - 0x10)
int64_t x11_11 = sx.q(x10_8)
void* x9_9

if (arg5 == 0)
    void* x10_12 = *x8
    x9_9 = &x9_2[x11_11]
    v5 = *(x10_12 + 0x38)
    *(x8 + 0x2c) = v5 + (v3 + arg8 * (*(x9_9 + 4) - v3) - v5) * arg9
    v4 = *(x10_12 + 0x3c)
    x8[6].d = v4 + (arg7 + arg8 * (*(x9_9 + 8) - arg7) - v4) * arg9
    
    if (arg6 != 1)
        goto label_fb19f8
    
    x8[4].d = *(x10_12 + 0x28)
    *(x8 + 0x24) = *(x10_12 + 0x2c)
    x8[5].d = *(x10_12 + 0x30)
    return 

x9_9 = &x9_2[x11_11]
v5 = *(x8 + 0x2c)
v4 = x8[6].d
*(x8 + 0x2c) = v5 + (v3 + arg8 * (*(x9_9 + 4) - v3) - v5) * arg9
x8[6].d = v4 + (arg7 + arg8 * (*(x9_9 + 8) - arg7) - v4) * arg9

if (arg6 != 0)
    return 

label_fb19f8:
x8[4].d = vcvts_s32_f32(*(x9_9 - 0xc))
*(x8 + 0x24) = *(x9_9 - 8) != 0f ? 1 : 0
x8[5].d = *(x9_9 - 4) != 0f ? 1 : 0
