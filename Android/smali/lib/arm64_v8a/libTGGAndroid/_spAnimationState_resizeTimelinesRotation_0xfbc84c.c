// 函数: _spAnimationState_resizeTimelinesRotation
// 地址: 0xfbc84c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x98) == arg2)
    return *(arg1 + 0x90)

int64_t result =
    _spCalloc(sx.q(arg2), 4, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x37c)
_spFree(*(arg1 + 0x90))
*(arg1 + 0x90) = result
*(arg1 + 0x98) = arg2
return result
