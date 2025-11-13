// 函数: _spEventTimeline_apply
// 地址: 0xfb10c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_30 = v8

if (arg3 == 0)
    return 

v8 = arg6
void* x21_1 = arg1
int64_t* x8_2
int32_t* x10_1

if (arg5 f<= arg6.d)
    x8_2 = x21_1 + 0x18
    x10_1 = *x8_2
    arg6.d = x10_1[sx.q(x8_2[-1].d) - 1]
    
    if (not(arg6.d f<= arg5))
        goto label_fb1134
    
    return 

arg6.d = float.s(0x4f000000)
arg1, arg6 = _spEventTimeline_apply(x21_1, arg2, arg3, arg4, arg5, arg6)
x8_2 = x21_1 + 0x18
x10_1 = *x8_2
arg5 = fconvert.s(-1f)
label_fb1134:
arg6.d = *x10_1

if (arg6.d f> v8.d)
    return 

int32_t x9_3 = *(x21_1 + 0x10)
int32_t x11_1

if (arg5 f>= arg6.d)
    int32_t x13_1 = x9_3 - 2
    uint64_t x12_2
    float* x13_3
    
    if (x9_3 == 2)
        x11_1 = 0
        x13_3 = &x10_1[1]
        x12_2 = 1
    else
        int32_t x11_2 = 0
        int32_t x12_1 = x13_1
        
        do
            int32_t x13_2 = x13_1 s>> 1
            arg6.d = x10_1[sx.q(x13_2 + 1)]
            arg6.d f- arg5
            
            if (not(arg6.d f> arg5))
                x11_2 = x13_2 + 1
            
            if (arg6.d f> arg5)
                x12_1 = x13_2
            
            x13_1 = x11_2 + x12_1
        while (x11_2 != x12_1)
        
        x12_2 = zx.q(x11_2 + 1)
        x13_3 = &x10_1[sx.q(x12_2.d)]
        x11_1 = x12_2.d & x12_2.d s>> 0x1f
    
    while (x12_2.d s>= 1)
        arg6.d = *(x10_1 - 4 + (x12_2 << 2))
        uint64_t x13_4 = x12_2 - 1
        x12_2 = x13_4
        
        if (not(arg6.d f== *x13_3))
            x11_1 = x13_4.d + 1
            break
else
    x11_1 = 0

if (x11_1 s>= x9_3)
    return 

int64_t x9_4 = sx.q(x11_1)

while (not(*(*x8_2 + (x9_4 << 2)) f> v8.d))
    int64_t x10_5 = *(*(x21_1 + 0x20) + (x9_4 << 3))
    x9_4 += 1
    *(arg3 + (sx.q(*arg4) << 3)) = x10_5
    *arg4 += 1
    
    if (x9_4 s>= sx.q(*(x21_1 + 0x10)))
        break
