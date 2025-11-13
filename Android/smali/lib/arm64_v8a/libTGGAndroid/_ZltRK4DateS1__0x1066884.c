// 函数: _ZltRK4DateS1_
// 地址: 0x1066884
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2 = *arg1
int32_t x9 = *arg2

if (x8_2 s< x9)
    return 1

if (x8_2 s> x9)
    return 0

int32_t x8 = *(arg1 + 4)
int32_t x9_1 = *(arg2 + 4)

if (x8 s< x9_1)
    return 1

if (x8 s<= x9_1)
    return zx.q(*(arg1 + 8) s< *(arg2 + 8) ? 1 : 0)

return 0
