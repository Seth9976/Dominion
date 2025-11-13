// 函数: _Z14PreloadTextureR20AtlasRegionAllocatorP6XAssetb
// 地址: 0xb39c88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg1 == 0)
    return 0

if (*arg2 == 0)
    if (*(arg2 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg2, false, true)

int32_t x0_4 = FifoRectAllocatorAlloc(arg1, arg2, arg3 & 1)

if (x0_4 != 0xffffffff)
    int64_t* x8_3 = *arg2
    
    if (x8_3 == 0)
        if (*(arg2 + 8) == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(arg2, false, true)
        x8_3 = *arg2
    
    void* x23_1 = **x8_3
    *(x23_1 + 0x28) = 0
    uint64_t x8_6 = *V2I0
    *(x23_1 + 0x30) = 0
    *(x23_1 + 0x34) = x8_6
    int64_t x0_9
    int64_t x1_4
    x0_9, x1_4 = FifoRectAllocatorRect(arg1, x0_4, arg3 & 1)
    int64_t var_40 = x0_9
    int64_t var_38_1 = x1_4
    ImageSpec var_58
    TextureGetImageData(arg2, &var_58)
    GraphicsUpdateTextureRegion(*arg1, &var_40, &var_58)
    TextureFreeImageData(arg2)
    *(x23_1 + 0x28) = *arg1
    *(x23_1 + 0x34) = RectTopLeft(&var_40)
    int64_t* x20_2 = *arg1
    int64_t* x8_8 = *x20_2
    
    if (x8_8 == 0)
        if (x20_2[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x20_2, false, true)
        x8_8 = *x20_2
    
    *(x23_1 + 0x30) = *(**x8_8 + 0x30)
    *gPreloadAnythingChanged = 1

return zx.q(x0_4 != 0xffffffff ? 1 : 0)
