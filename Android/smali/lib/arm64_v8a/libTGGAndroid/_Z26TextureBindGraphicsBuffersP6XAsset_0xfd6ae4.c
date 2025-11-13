// 函数: _Z26TextureBindGraphicsBuffersP6XAsset
// 地址: 0xfd6ae4
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

*(x19 + 0x24) += 1
int64_t* x21 = *x8
void* x8_1 = *x21
uint64_t result

if (x8_1 == 0)
    result = 0
else
    XAsset* x0 = *(x8_1 + 0x28)
    
    if (x0 == 0)
        result = zx.q(x21[1].d)
        
        if (result.d == 0)
            result = TextureCreateTextureBuffer(arg1)
            x21[1].d = result.d
    else
        result = TextureBindGraphicsBuffers(x0)

*(x19 + 0x24) -= 1
return result
