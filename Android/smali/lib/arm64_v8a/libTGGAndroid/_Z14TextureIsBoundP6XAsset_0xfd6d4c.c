// 函数: _Z14TextureIsBoundP6XAsset
// 地址: 0xfd6d4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg1
int64_t* x8

if (arg1 == 0)
    x19 = AssetPtrGetNull(3)
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19
else
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19

int32_t x9 = *(x19 + 0x24)
*(x19 + 0x24) = x9 + 1
int32_t x8_2 = *(*x8 + 8)
*(x19 + 0x24) = x9
return zx.q(x8_2 != 0 ? 1 : 0)
