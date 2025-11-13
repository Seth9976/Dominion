// 函数: _Z19TextureGetImageDataP6XAssetP9ImageSpec
// 地址: 0xfd61ec
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
int32_t** x23 = *x8
int32_t* x24 = *x23
int32_t* x25 = *(x24 + 0x48)
*(arg2 + 8) = *x24
int32_t x8_2 = x24[1]
*(arg2 + 0x14) = 1
*(arg2 + 0xc) = x8_2
int32_t x22 = *x24
int32_t x0 = TextureFormatBytesPerPixel(1)
int32_t x8_3 = *(arg2 + 8)
int32_t x1 = *(arg2 + 0xc)
uint64_t x2 = zx.q(*(arg2 + 0x14))
*(arg2 + 0x10) = x0 * x22
int64_t result = TextureFormatLinearImageSize(x8_3, x1, x2)
int64_t x8_4 = x23[2]

if (x8_4 == 0)
    uint8_t* x0_4 = XMalloc(result.d)
    *arg2 = x0_4
    int32_t x3_1 = *x25
    
    if (x24[5] != 8)
        uint8_t* x0_7 = XMalloc(x3_1)
        AssetCatalogLoadHWBuffer(arg1, x0_7, 0, *x25, *(x25 + 8))
        
        if ((TextureLoadImage(zx.q(x24[5]), arg2, x0_7, *x25, 1) & 1) == 0)
            XString::operator char const*()
            XTrace("Failed to read texture %s")
        
        result = XFree(x0_7)
        goto label_fd63a8
    
    result = AssetCatalogLoadHWBuffer(arg1, x0_4, 0, x3_1, *(x25 + 8))
    
    if (x24[6] s> 0x6e)
    label_fd63a8:
        x23[2] = *arg2
        *(x19 + 0x24) -= 1
    else
        int32_t x11_1 = x24[1]
        void* x8_7 = *arg2
        
        if (x11_1 s<= 0)
            x23[2] = x8_7
            *(x19 + 0x24) -= 1
        else
            int32_t x10_1 = *x24
            int32_t x9_3 = 0
            
            do
                if (x10_1 s>= 1)
                    int32_t x11_2 = 0
                    void* x12_2 = x8_7 + 2
                    
                    do
                        char x13_1 = *x12_2
                        x11_2 += 1
                        *x12_2 = *(x12_2 - 2)
                        *(x12_2 - 2) = x13_1
                        x10_1 = *x24
                        x12_2 += 4
                    while (x11_2 s< x10_1)
                    
                    x11_1 = x24[1]
                
                x9_3 += 1
                x8_7 += sx.q(*(arg2 + 0x10))
            while (x9_3 s< x11_1)
            
            x23[2] = *arg2
            
            if (x19 != 0)
                *(x19 + 0x24) -= 1
else
    *arg2 = x8_4
    *(x19 + 0x24) -= 1

return result
