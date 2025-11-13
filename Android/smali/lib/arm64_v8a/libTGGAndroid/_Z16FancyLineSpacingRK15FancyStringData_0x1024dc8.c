// 函数: _Z16FancyLineSpacingRK15FancyStringData
// 地址: 0x1024dc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FancyStringData** x8 = *(arg1 + 0x78)
int64_t v9
v9.d = *(arg1 + 0x2c)
int64_t v8
v8.d = *(arg1 + 0x30)
FancyStringData const& x19 = arg1

if (x8 != 0)
    arg1 = *x8

if (x8 != 0 && arg1 != 0)
    float v0
    arg1, v0 = FontGetLineSpacing(arg1, *(x19 + 0x80))
    *(x19 + 0x2c)
    return 

XAsset* x20_1 = **(x19 + 8)
void** x8_2

if (x20_1 == 0)
    x20_1 = AssetPtrGetNull(0x12)
    x8_2 = *x20_1
    
    if (x8_2 == 0)
        AssetCatalogLoadAsset(x20_1, false, true)
        x8_2 = *x20_1
else
    x8_2 = *x20_1
    
    if (x8_2 == 0)
        AssetCatalogLoadAsset(x20_1, false, true)
        x8_2 = *x20_1

int32_t x9_1 = *(x20_1 + 0x24)
*(x20_1 + 0x24) = x9_1 + 1
*(x19 + 0x2c)
*(*x8_2 + 8)
*(x20_1 + 0x24) = x9_1
