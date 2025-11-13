// 函数: _Z12PreloadPurgeR20AtlasRegionAllocator
// 地址: 0xb4e28c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x838) s>= 1)
    int64_t i = 0
    
    do
        AssetCatalogPurgeAsset(*(arg1 + 0x38 + (i << 3)))
        i += 1
    while (i s< sx.q(*(arg1 + 0x838)))

int32_t x8_2 = *(arg1 + 0x83c)
*(arg1 + 0x838) = 0

if (x8_2 s>= 1)
    int64_t i_1 = 0
    void* __offset(AtlasRegionAllocator, 0x830) x21_2 = arg1 + 0x830
    
    do
        XAsset* x0_1 = *x21_2
        x21_2 -= 8
        AssetCatalogPurgeAsset(x0_1)
        i_1 += 1
    while (i_1 s< sx.q(*(arg1 + 0x83c)))

*(arg1 + 0x83c) = 0
