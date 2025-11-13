// 函数: _Z15FancyFontHeightRK15FancyStringData
// 地址: 0x1024d20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FancyStringData** x8 = *(arg1 + 0x78)
FancyStringData const& x19 = arg1

if (x8 != 0)
    arg1 = *x8
    
    if (arg1 != 0)
        int64_t x0
        float v0_1
        x0, v0_1 = TTFontGetHeight(arg1, *(x19 + 0x80))
        *(x19 + 0x2c)
        return 

int64_t* x20 = **(x19 + 8)
float** x8_2

if (x20 == 0)
    x20 = AssetPtrGetNull(0x12)
    x8_2 = *x20
    
    if (x8_2 == 0)
        AssetCatalogLoadAsset(x20, false, true)
        x8_2 = *x20
else
    x8_2 = *x20
    
    if (x8_2 == 0)
        AssetCatalogLoadAsset(x20, false, true)
        x8_2 = *x20

int32_t x9 = *(x20 + 0x24)
*(x20 + 0x24) = x9 + 1
*(x19 + 0x2c)
**x8_2
*(x20 + 0x24) = x9
