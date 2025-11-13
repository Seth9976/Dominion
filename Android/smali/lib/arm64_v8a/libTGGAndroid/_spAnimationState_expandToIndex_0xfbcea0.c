// 函数: _spAnimationState_expandToIndex
// 地址: 0xfbcea0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) s> arg2)
    return *(*(arg1 + 0x10) + (sx.q(arg2) << 3))

int64_t x0_2 =
    _spCalloc(sx.q(arg2 + 1), 8, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x325)
memcpy(x0_2, *(arg1 + 0x10), sx.q(*(arg1 + 8)) << 3)
_spFree(*(arg1 + 0x10))
*(arg1 + 0x10) = x0_2
*(arg1 + 8) = arg2 + 1
return 0
