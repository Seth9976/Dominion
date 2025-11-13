// 函数: stbtt_GetCodepointHMetrics
// 地址: 0x1006a90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t result = stbtt_FindGlyphIndex()
void* x10 = *(arg1 + 8)
uint64_t x8_4 = _byteswap(zx.q(*(x10 + sx.q(*(arg1 + 0x24)) + 0x22)) << 0x30)

if (result s>= x8_4.d)
    if (arg3 != 0)
        void* x10_2 = zx.q(x8_4.d << 2) + x10 + sx.q(*(arg1 + 0x28))
        *arg3 = sx.d((zx.d(*(x10_2 - 4)) << 8).w) | zx.d(*(x10_2 - 3))
    
    if (arg4 != 0)
        char* x8_15 =
            *(arg1 + 8) + sx.q(*(arg1 + 0x28)) + (x8_4 << 2) + (sx.q(result - x8_4.d) << 1)
        *arg4 = sx.d((zx.d(*x8_15) << 8).w) | zx.d(x8_15[1])
else
    if (arg3 != 0)
        char* x8_7 = x10 + sx.q(*(arg1 + 0x28)) + (sx.q(result) << 2)
        *arg3 = sx.d((zx.d(*x8_7) << 8).w) | zx.d(x8_7[1])
    
    if (arg4 != 0)
        void* x8_12 = *(arg1 + 8) + sx.q(*(arg1 + 0x28)) + (sx.q(result) << 2)
        *arg4 = sx.d((zx.d(*(x8_12 + 2)) << 8).w) | zx.d(*(x8_12 + 3))

return result
