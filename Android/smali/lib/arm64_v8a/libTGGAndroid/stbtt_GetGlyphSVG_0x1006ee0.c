// 函数: stbtt_GetGlyphSVG
// 地址: 0x1006ee0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x34) == 0)
    return 0

int64_t x21 = *(arg1 + 8)
uint64_t result = stbtt_FindSVGDoc(arg1, arg2)

if (result == 0)
    return result

*arg3 = x21 + sx.q(*(arg1 + 0x34)) + _byteswap(zx.q(*(result + 4)) << 0x20)
return zx.q(_byteswap(*(result + 8)))
