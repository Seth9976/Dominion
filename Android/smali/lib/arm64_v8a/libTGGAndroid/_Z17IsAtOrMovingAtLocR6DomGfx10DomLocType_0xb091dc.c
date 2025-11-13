// 函数: _Z17IsAtOrMovingAtLocR6DomGfx10DomLocType
// 地址: 0xb091dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x1f78) == 0)
    if (*(arg1 + 0x3b0) == 1 && *(arg1 + 0x3b8) == arg2)
        return 1
else if (*(arg1 + 0x308) == 1 && *(arg1 + 0x310) == arg2 && *(arg1 + 0x478) == 1
        && *(arg1 + 0x480) == arg2)
    return 1

return 0
