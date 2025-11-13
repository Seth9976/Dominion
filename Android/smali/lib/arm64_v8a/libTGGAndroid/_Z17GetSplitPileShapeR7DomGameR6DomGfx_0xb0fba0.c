// 函数: _Z17GetSplitPileShapeR7DomGameR6DomGfx
// 地址: 0xb0fba0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x2c) != 3 || *(arg2 + 0x70) == 0 || *(arg2 + 0x38) == 0)
    return 0

if (*(arg2 + 0x3c) == 0)
    return 1

if (*(arg2 + 0x40) != 0)
    return 3

return 2
