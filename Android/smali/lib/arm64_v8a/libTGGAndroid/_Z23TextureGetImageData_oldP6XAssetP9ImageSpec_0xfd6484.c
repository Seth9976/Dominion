// 函数: _Z23TextureGetImageData_oldP6XAssetP9ImageSpec
// 地址: 0xfd6484
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
int32_t* x23 = **x8
int32_t* x24 = *(x23 + 0x48)
*(arg2 + 8) = *x23
int32_t x8_3 = x23[1]
*(arg2 + 0x14) = 1
*(arg2 + 0xc) = x8_3
int32_t x22 = *x23
int32_t x0 = TextureFormatBytesPerPixel(1)
int32_t x8_4 = *(arg2 + 8)
int32_t x1 = *(arg2 + 0xc)
uint64_t x2 = zx.q(*(arg2 + 0x14))
*(arg2 + 0x10) = x0 * x22
uint8_t* x0_3 = XMalloc(TextureFormatLinearImageSize(x8_4, x1, x2))
*arg2 = x0_3
int32_t x3 = *x24
int64_t result

if (x23[5] != 8)
    uint8_t* x0_6 = XMalloc(x3)
    AssetCatalogLoadHWBuffer(arg1, x0_6, 0, *x24, *(x24 + 8))
    int32_t x0_9
    int128_t v0_1
    x0_9, v0_1 = TextureLoadImage(zx.q(x23[5]), arg2, x0_6, *x24, 1)
    
    if ((x0_9 & 1) == 0)
        XString::operator char const*()
        XTrace("Failed to read texture %s")
    
    int64_t var_50_1 = *(arg2 + 0x10)
    int128_t var_60 = *arg2
    var_50_1:4.d = 2
    ImageBufferCopyToNewFormat(&var_60, arg2)
    result = XFree(x0_6)
else
    result = AssetCatalogLoadHWBuffer(arg1, x0_3, 0, x3, *(x24 + 8))

*(x19 + 0x24) -= 1
return result
