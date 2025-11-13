// 函数: _spEventQueue_addEntry
// 地址: 0xfbaf08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x10)
int32_t x9 = *(arg1 + 0x14)
int64_t x21

if (x8 s>= x9)
    int32_t x8_1 = x9 << 1
    *(arg1 + 0x14) = x8_1
    int64_t x0_1 =
        _spCalloc(sx.q(x8_1), 8, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x57)
    x21 = x0_1
    memcpy(x0_1, *(arg1 + 8), sx.q(*(arg1 + 0x10)) << 3)
    _spFree(*(arg1 + 8))
    x8 = *(arg1 + 0x10)
    *(arg1 + 8) = x21
else
    x21 = *(arg1 + 8)

*(arg1 + 0x10) = x8 + 1
*(x21 + (sx.q(x8) << 3)) = arg2
