// 函数: _Z14IncrementRangeR5Vec2IRKS_
// 地址: 0xb28b1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = *arg1
int32_t x9 = *(arg1 + 4)
int32_t x8

if (x8_1 s< x9)
    x8 = x9
else
    x8 = x8_1 + 1

*arg1 = x8_1 + 1
*(arg1 + 4) = x8
