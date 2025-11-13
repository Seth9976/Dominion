// 函数: _Z20TextureFreeImageDataP6XAsset
// 地址: 0xfd63f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg1
int64_t* x9

if (arg1 == 0)
    x19 = AssetPtrGetNull(3)
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
void* x20 = *x9
void* result = *(x20 + 0x10)

if (result != 0)
    result = XFree(result)
    *(x20 + 0x10) = 0
    x8_1 = *(x19 + 0x24)

*(x19 + 0x24) = x8_1 - 1
return result
