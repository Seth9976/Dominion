// 函数: _spEventQueue_ensureCapacity
// 地址: 0xfbae1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x14)

if (*(arg1 + 0x10) + arg2 s<= x8)
    return 

int32_t x8_1 = x8 << 1
*(arg1 + 0x14) = x8_1
int64_t x0_1 =
    _spCalloc(sx.q(x8_1), 8, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x57)
memcpy(x0_1, *(arg1 + 8), sx.q(*(arg1 + 0x10)) << 3)
_spFree(*(arg1 + 8))
*(arg1 + 8) = x0_1
