// 函数: _Z22FifoRectAllocatorAllocR20AtlasRegionAllocatorP6XAssetb
// 地址: 0xb4e120
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20
void* x21

if ((arg3.d & 1) == 0)
    uint64_t i_5 = zx.q(*(arg1 + 0x838))
    
    if (i_5.d s>= 1)
        void* __offset(AtlasRegionAllocator, 0x38) x8_4 = arg1 + 0x38
        uint64_t i_3 = i_5
        uint64_t i
        
        do
            if (*x8_4 == arg2)
                return 0xffffffff
            
            i = i_3
            i_3 -= 1
            x8_4 += 8
        while (i != 1)
    
    if (i_5.d s< 1 || i_5.d != 0x38)
        *(arg1 + 0x838) = i_5.d + 1
        *(arg1 + (sx.q(i_5.d) << 3) + 0x38) = arg2
        return zx.q(i_5.d)
    
    int64_t x8_5 = sx.q(*(arg1 + 0x840))
    int32_t x9_7 = ((x8_5 * -0x6db6db6d) u>> 0x20).d + x8_5.d
    *(arg1 + 0x840) = x8_5.d + 1
    x20 = x8_5.d - ((x9_7 s>> 5) + (x9_7 u>> 0x1f)) * 0x38
    x21 = arg1 + (sx.q(x20) << 3)
else
    uint64_t i_4 = zx.q(*(arg1 + 0x83c))
    
    if (i_4.d s>= 1)
        void* __offset(AtlasRegionAllocator, 0x830) x8_1 = arg1 + 0x830
        uint64_t i_2 = i_4
        uint64_t i_1
        
        do
            if (*x8_1 == arg2)
                return 0xffffffff
            
            i_1 = i_2
            i_2 -= 1
            x8_1 -= 8
        while (i_1 != 1)
    
    if (i_4.d s< 1 || i_4.d != 0x1c)
        *(arg1 + 0x83c) = i_4.d + 1
        *(arg1 + (sx.q(0xff - i_4.d) << 3) + 0x38) = arg2
        return zx.q(i_4.d)
    
    int64_t x8_2 = sx.q(*(arg1 + 0x844))
    int32_t x9_3 = ((x8_2 * -0x6db6db6d) u>> 0x20).d + x8_2.d
    *(arg1 + 0x844) = x8_2.d + 1
    x20 = x8_2.d - ((x9_3 s>> 4) + (x9_3 u>> 0x1f)) * 0x1c
    x21 = arg1 + (zx.q(0xff - x20) << 3)

AssetCatalogPurgeAsset(*(x21 + 0x38))
*(x21 + 0x38) = arg2
return zx.q(x20)
