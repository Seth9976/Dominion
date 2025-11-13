// 函数: _Z29IsMovingToOrFromRevealPileLocRK6DomGfx
// 地址: 0xafdde0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x1f78) != 0)
    if (*(arg1 + 0x260) == 1 && *(arg1 + 0x268) == 0x15)
        return 1
    
    int32_t x9_1 = *(arg1 + 0x308)
    
    if (x9_1 == 1 && *(arg1 + 0x310) == 0x15)
        return 1
    
    int32_t x8_3 = *(arg1 + 0x478)
    
    if (x8_3 == 1 && *(arg1 + 0x480) == 0x15)
        return 1
    
    if (x9_1 == 1 && (*(arg1 + 0x310) & 0xfffffffe) == 6 && *(arg1 + 0x314) - 0x3ee u< 3)
        return 1
    
    if (x8_3 == 1 && (*(arg1 + 0x480) & 0xfffffffe) == 6 && *(arg1 + 0x484) - 0x3ee u< 3)
        return 1

return 0
