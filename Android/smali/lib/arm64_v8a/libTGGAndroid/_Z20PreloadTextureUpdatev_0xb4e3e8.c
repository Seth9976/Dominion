// 函数: _Z20PreloadTextureUpdatev
// 地址: 0xb4e3e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(gDomClient + 0x82eb8)

if (x19 != 0 && zx.d(*gPreloadAnythingChanged) != 0)
    int64_t* x8_2 = *x19
    
    if (x8_2 == 0)
        if (x19[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x19, false, true)
        x8_2 = *x19
    
    if (zx.d(*(*gAppInterface + 0x35)) != 0 && *(*x8_2 + 8) != 0)
        (*(**gGraphicsInterface + 0x48))()

*gPreloadAnythingChanged = 0
