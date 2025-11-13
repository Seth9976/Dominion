// 函数: stbtt_GetFontOffsetForIndex
// 地址: 0x100a438
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (sub_100e458(arg1) != 0)
    if (arg2 != 0)
        return 0xffffffff
    
    return 0

if (zx.d(*arg1) == 0x74 && zx.d(arg1[1]) == 0x74 && zx.d(arg1[2]) == 0x63 && zx.d(arg1[3]) == 0x66)
    int32_t temp0_1 = _byteswap(*(arg1 + 4))
    
    if ((temp0_1 == 0x20000 || temp0_1 == 0x10000) && _byteswap(*(arg1 + 8)) s> arg2)
        return zx.q(_byteswap(*(arg1 + (sx.q(arg2) << 2) + 0xc)))

return 0xffffffff
