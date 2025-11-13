// 函数: _Z16IsAtBoardPileLocRK6DomGfx
// 地址: 0xafd7e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x1f78) == 0)
    if ((*(arg1 + 0x3b8) & 0xfffffffe) == 6 && *(arg1 + 0x3b0) == 1 && *(arg1 + 0x3bc) u< 0x49)
        return 1
else if (*(arg1 + 0x3b0) == 1 && (*(arg1 + 0x3b8) & 0xfffffffe) == 6)
    int32_t x8_3 = *(arg1 + 0x3bc)
    
    if (x8_3 u<= 0x48 && *(arg1 + 0x478) == 1 && (*(arg1 + 0x480) & 0xfffffffe) == 6
            && *(arg1 + 0x484) == x8_3)
        return 1

return 0
