// 函数: _Z27TextureReloadDynamicTextureP6XAsset
// 地址: 0xfd69d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg1
int64_t** x8

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

*(x19 + 0x24) += 1
int64_t* x23 = *x8

if (x23[1].d == 0)
    TextureBindGraphicsBuffers(arg1)
    *(x19 + 0x24) -= 1
    return 

void* x24_1 = *x23
int32_t x8_2 = *(x24_1 + 0x10)
int32_t x25_1 = *(x24_1 + 0x3c) s/ x8_2

if (x25_1 s< 1)
    *(x19 + 0x24) -= 1
    return 

int32_t x21_1 = 0

do
    if (x8_2 s>= 1)
        int32_t x22_1 = 0
        
        do
            TextureLoad(arg1, x23[1].d, x21_1, x22_1)
            x8_2 = *(x24_1 + 0x10)
            x22_1 += 1
        while (x22_1 s< x8_2)
    
    x21_1 += 1
while (x21_1 != x25_1)

if (x19 != 0)
    *(x19 + 0x24) -= 1
