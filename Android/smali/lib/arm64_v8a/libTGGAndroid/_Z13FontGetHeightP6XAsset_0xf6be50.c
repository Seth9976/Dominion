// 函数: _Z13FontGetHeightP6XAsset
// 地址: 0xf6be50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg1
int64_t* x8

if (arg1 == 0)
    x19 = AssetPtrGetNull(0x12)
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
uint64_t result = zx.q(**x8)
*(x19 + 0x24) = x9
return result
