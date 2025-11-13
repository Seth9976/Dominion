// 函数: _Z13FontDebugDrawP6XAsset
// 地址: 0xf6cb24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg1
int64_t* x9

if (arg1 == 0)
    x19 = AssetPtrGetNull(0x12)
    x9 = *x19
    
    if (x9 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x9 = *x19
else
    x9 = *x19
    
    if (x9 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x9 = *x19

int32_t x8_1 = *(x19 + 0x24) + 1
*(x19 + 0x24) = x8_1
void* x9_1 = *x9

if (*(x9_1 + 0x1c) != 0)
    DrawImage(**(x9_1 + 0x20), fconvert.s(10f), float.s(0x42c80000))
    x8_1 = *(x19 + 0x24)

*(x19 + 0x24) = x8_1 - 1
