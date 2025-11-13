// 函数: _Z14DecrementRangeR5Vec2IRKS_
// 地址: 0xb28af8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = *(arg1 + 4)
bool cond:0 = x8_1 == *(arg2 + 4)
*arg1 -= 1

if (not(cond:0))
    *(arg1 + 4) = x8_1 - 1
