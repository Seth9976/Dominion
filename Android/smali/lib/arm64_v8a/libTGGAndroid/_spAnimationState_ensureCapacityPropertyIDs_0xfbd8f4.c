// 函数: _spAnimationState_ensureCapacityPropertyIDs
// 地址: 0xfbd8f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x5c) s>= arg2)
    return 

int32_t x21_1 = arg2 << 1
int64_t x0_1 =
    _spCalloc(sx.q(x21_1), 4, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x387)
memcpy(x0_1, *(arg1 + 0x50), sx.q(*(arg1 + 0x58)) << 2)
_spFree(*(arg1 + 0x50))
*(arg1 + 0x50) = x0_1
*(arg1 + 0x5c) = x21_1
