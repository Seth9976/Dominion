// 函数: _Z15UpdateToNewLineR10TextLayoutRK4Vec2R16LayoutLineParamsii
// 地址: 0x1025a48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_40 = v9
int64_t v8
int64_t var_38 = v8
TextLayout& x20 = arg1
float v0

if (arg4 s>= 1)
    void* x9_1 = *(x20 + 0x20)
    void* x10_3 = x9_1 + (sx.q(arg4) << 6)
    uint64_t x0 = zx.q(*(*(x20 + 0x18) + 0x1c))
    v8.d = *(x9_1 + (sx.q(*arg3) << 6) + 0x10)
    uint64_t i_2 = zx.q(arg4)
    v9.d = *(x10_3 - 0x30) + *(x10_3 - 0x28)
    int64_t* x9_2 = x9_1 + 0x20
    uint64_t i
    
    do
        if (x9_2[-4].d == 1)
            int32_t x10_6 = *(*x9_2 + 0x1c)
            
            if (x10_6 == 0)
                x0 = zx.q(x0.d)
            else
                x0 = zx.q(x10_6)
        
        i = i_2
        i_2 -= 1
        x9_2 = &x9_2[8]
    while (i != 1)
    arg1, v0 = AlignmentGetOffsetPercent(x0)
    int64_t x9_3 = sx.q(*arg3)
    
    if (x9_3.d s< arg4)
        int64_t x8_4 = x9_3 << 6
        v0 = v0 * (*arg2 - (v9.d f- v8.d)) f- v8.d
        int64_t i_3 = sx.q(arg4) - x9_3
        int64_t i_1
        
        do
            void* x10_9 = *(x20 + 0x20) + x8_4
            
            if ((zx.d(*(x10_9 + 4)) & 2) == 0)
                *(x10_9 + 0x10) = v0 + *(x10_9 + 0x10)
            
            i_1 = i_3
            i_3 -= 1
            x8_4 += 0x40
        while (i_1 != 1)

float v1 = *(arg3 + 0x18)
v0 = *(arg3 + 0x1c)
int32_t x8_5 = *(arg3 + 0x10)
*arg3 = arg4
*(arg3 + 4) = arg5
*(arg3 + 8) = arg5
*(arg3 + 0x18) = v0 + v1
*(arg3 + 0x10) = x8_5 + 1
int32_t x8_7

if (arg4 s<= arg5)
    int64_t x11_3 = sx.q(arg4)
    int32_t x9_4 = arg5 - arg4
    void* x10_10 = *(x20 + 0x20) + (x11_3 << 6)
    v1 = *(x10_10 + 0x10)
    x8_7 = x9_4 + 1
    float v2 = v0 + *(x10_10 + 0x14)
    *(x10_10 + 0x10) = v1 - v1
    *(x10_10 + 0x14) = v2
    *(x10_10 + 8) = *(arg3 + 0x10)
    *(x10_10 + 0xc) = 0
    
    if (x8_7 != 1)
        int32_t x10_11 = 0
        int64_t x11_4 = x11_3 << 6
        
        do
            x10_11 += 1
            void* x12_3 = *(x20 + 0x20) + x11_4
            x11_4 += 0x40
            float v3 = v0 + *(x12_3 + 0x54)
            *(x12_3 + 0x50) = *(x12_3 + 0x50) - v1
            *(x12_3 + 0x54) = v3
            *(x12_3 + 0x48) = *(arg3 + 0x10)
            *(x12_3 + 0x4c) = x10_11
        while (x9_4 != x10_11)
else
    x8_7 = 0

*(arg3 + 0x14) = x8_7
