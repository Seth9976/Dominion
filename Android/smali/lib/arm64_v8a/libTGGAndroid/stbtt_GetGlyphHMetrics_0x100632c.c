// 函数: stbtt_GetGlyphHMetrics
// 地址: 0x100632c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9_14 = *(arg1 + 8)
uint64_t x8_4 = _byteswap(zx.q(*(x9_14 + sx.q(*(arg1 + 0x24)) + 0x22)) << 0x30)

if (x8_4.d s<= arg2)
    if (arg3 != 0)
        void* x9_6 = zx.q(x8_4.d << 2) + x9_14 + sx.q(*(arg1 + 0x28))
        *arg3 = sx.d((zx.d(*(x9_6 - 4)) << 8).w) | zx.d(*(x9_6 - 3))
    
    if (arg4 != 0)
        char* x8_15 = *(arg1 + 8) + sx.q(*(arg1 + 0x28)) + (x8_4 << 2) + (sx.q(arg2 - x8_4.d) << 1)
        *arg4 = sx.d((zx.d(*x8_15) << 8).w) | zx.d(x8_15[1])
else
    if (arg3 != 0)
        char* x8_7 = x9_14 + sx.q(*(arg1 + 0x28)) + (sx.q(arg2) << 2)
        *arg3 = sx.d((zx.d(*x8_7) << 8).w) | zx.d(x8_7[1])
    
    if (arg4 != 0)
        void* x8_12 = *(arg1 + 8) + sx.q(*(arg1 + 0x28)) + (sx.q(arg2) << 2)
        *arg4 = sx.d((zx.d(*(x8_12 + 2)) << 8).w) | zx.d(*(x8_12 + 3))
