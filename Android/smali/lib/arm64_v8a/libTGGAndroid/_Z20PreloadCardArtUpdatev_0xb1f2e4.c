// 函数: _Z20PreloadCardArtUpdatev
// 地址: 0xb1f2e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x83b08) s>= 1)
    int64_t i = 0
    
    do
        void* x0 = DomDefGet(zx.q(*(gDomClient + (i << 2) + 0x83708)), 0x18)
        int64_t* x8_3 = *(x0 + 0x68)
        
        if (x8_3 != 0 && *(gDomClient + 0x82eb8) != 0 && (zx.d(*(x0 + 0xce)) & 2) == 0)
            PreloadTexture(gDomClient + 0x82eb8, *x8_3, IsLandscape(zx.q(*(x0 + 0xc0)), 0x18) & 1)
        
        int64_t* x8_5 = *(x0 + 0x70)
        
        if (x8_5 != 0)
            int64_t x9_3 = sx.q(*(gDomClient + 0x84310))
            int64_t x8_6 = *x8_5
            *(gDomClient + 0x84310) = x9_3.d + 1
            *(gDomClient + (x9_3 << 3) + 0x83b10) = x8_6
            AssetPreload(**(x0 + 0x70))
            int64_t* x8_8 = *(x0 + 0x78)
            
            if (x8_8 != 0)
                int64_t x9_5 = sx.q(*(gDomClient + 0x84310))
                int64_t x8_9 = *x8_8
                *(gDomClient + 0x84310) = x9_5.d + 1
                *(gDomClient + (x9_5 << 3) + 0x83b10) = x8_9
                AssetPreload(**(x0 + 0x78))
                int64_t* x8_11 = *(x0 + 0x80)
                
                if (x8_11 != 0)
                    int64_t x9_7 = sx.q(*(gDomClient + 0x84310))
                    int64_t x8_12 = *x8_11
                    *(gDomClient + 0x84310) = x9_7.d + 1
                    *(gDomClient + (x9_7 << 3) + 0x83b10) = x8_12
                    AssetPreload(**(x0 + 0x80))
                    int64_t* x8_14 = *(x0 + 0x88)
                    
                    if (x8_14 != 0)
                        int64_t x9_9 = sx.q(*(gDomClient + 0x84310))
                        int64_t x8_15 = *x8_14
                        *(gDomClient + 0x84310) = x9_9.d + 1
                        *(gDomClient + (x9_9 << 3) + 0x83b10) = x8_15
                        AssetPreload(**(x0 + 0x88))
        
        i += 1
    while (i s< sx.q(*(gDomClient + 0x83b08)))

XAsset* x19_2 = *(gDomClient + 0x82eb8)

if (x19_2 != 0 && zx.d(*gPreloadAnythingChanged) != 0)
    int64_t* x8_18 = *x19_2
    
    if (x8_18 == 0)
        if (*(x19_2 + 8) == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x19_2, false, true)
        x8_18 = *x19_2
    
    if (zx.d(*(*gAppInterface + 0x35)) != 0 && *(*x8_18 + 8) != 0)
        (*(**gGraphicsInterface + 0x48))()

*gPreloadAnythingChanged = 0
*(gDomClient + 0x83b08) = 0
