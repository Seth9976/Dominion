// 函数: sub_9fd168
// 地址: 0x9fd168
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8

if (not(*(sx.q(*(arg1 + 0xb4)) * 0x84 + 0x14a76d0) f!= 0f))
    return 

int64_t x20 = sx.q(*(arg1 + 0xd8))
int64_t x0

if (0 == x20 u>> 0x3e)
    x0 = x20 << 2
else
    x0 = -1

void* x0_1 = operator new[](x0)

if (x20.d s>= 1)
    int64_t x24_1 = 0
    v8.d = 0f
    int64_t x25_1 = 0x54
    int64_t x8_3
    float v0_1
    
    do
        int32_t x0_2 = RandomInt(&data_14a71e8, 0x8000)
        int32_t x0_3 = RandomInt(&data_14a71e8, 0x8000)
        v0_1 = tgammaf(*(sx.q(*(arg1 + 0xb4)) * 0x84 + 0x14a76d4) * float.s(x0_3 + (x0_2 << 0xf))
            * float.s(0x30800000) + float.s(0x3089705f))
        *(x0_1 + (x24_1 << 2)) = v0_1
        
        if (not(*(*(arg1 + 0xd0) + x25_1) f>= float.s(0xc2c80000)))
            v0_1 = 0f
            *(x0_1 + (x24_1 << 2)) = 0
        
        x8_3 = sx.q(*(arg1 + 0xd8))
        x24_1 += 1
        v8.d = v8.d f+ v0_1
        x25_1 += 0x70
    while (x24_1 s< x8_3)
    
    if (x8_3.d s>= 1)
        int64_t i = 0
        int64_t x9_1 = 0x58
        
        do
            v0_1 = *(x0_1 + (i << 2))
            i += 1
            *(*(arg1 + 0xd0) + x9_1) = v0_1 f/ v8.d
            x9_1 += 0x70
        while (i s< sx.q(*(arg1 + 0xd8)))

return operator delete[](x0_1) __tailcall
