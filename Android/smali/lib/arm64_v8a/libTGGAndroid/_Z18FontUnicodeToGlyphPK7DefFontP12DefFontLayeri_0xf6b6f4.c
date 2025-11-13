// 函数: _Z18FontUnicodeToGlyphPK7DefFontP12DefFontLayeri
// 地址: 0xf6b6f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s> 0x7f)
    uint64_t x10_1 = zx.q(arg3)
    
    for (int32_t* i = *(*(arg1 + 0x38) + ((zx.q(*(arg1 + 0x40)) & (x10_1 | x10_1 u>> 4)) << 3)); 
            i != 0; i = *(i + 8))
        if (*i == arg3)
            return *(arg2 + 0x20) + muls.dp.d(i[1], 0x24)
else
    int32_t x8_1 = *(arg1 + (sx.q(arg3) << 2) + 0x48)
    
    if (x8_1 != 0xffffffff)
        return *(arg2 + 0x20) + muls.dp.d(x8_1, 0x24)

return 0
