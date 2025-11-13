// 函数: _Z21PreloadCardSoundPurgev
// 地址: 0xb18f80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x84310) s>= 1)
    int64_t i = 0
    
    do
        void* x0_4 = SoundGetDef(*(gDomClient + (i << 3) + 0x83b10))
        int32_t x8_3 = *(x0_4 + 0x30)
        
        if (x8_3 s>= 1)
            int64_t j = 0
            
            do
                XAsset* x0_5 = *(*(x0_4 + 0x20) + (j << 3))
                
                if (x0_5 != 0 && *(x0_5 + 0x24) == 0)
                    SoundFree(x0_5)
                    AssetCatalogPurgeAsset(*(*(x0_4 + 0x20) + (j << 3)))
                    x8_3 = *(x0_4 + 0x30)
                
                j += 1
            while (j s< sx.q(x8_3))
        
        SoundFree(*(gDomClient + (i << 3) + 0x83b10))
        AssetCatalogPurgeAsset(*(gDomClient + (i << 3) + 0x83b10))
        i += 1
    while (i s< sx.q(*(gDomClient + 0x84310)))

*(gDomClient + 0x84310) = 0
