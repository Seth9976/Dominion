// 函数: _Z16FancyStringWidthRK15FancyStringDataPKc
// 地址: 0x10259f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(arg1 + 0x78)

if (x8 != 0)
    XAsset* x0 = *x8
    
    if (x0 != 0)
        int64_t x0_1
        float v0_1
        x0_1, v0_1 = TTFontStringWidth(x0, arg2, *(arg1 + 0x80), *(arg1 + 0x54), *(arg1 + 0x58))
        *(arg1 + 0x2c)
        return x0_1

int64_t x0_3
float v0_2
x0_3, v0_2 = FontStringWidth(**(arg1 + 8), arg2, *(arg1 + 0x54), *(arg1 + 0x58))
*(arg1 + 0x2c)
return x0_3
