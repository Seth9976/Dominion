// 函数: _Z11DateCompareRK4DateS1_
// 地址: 0x106681c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2 = *arg1
int32_t x9 = *arg2

if (x8_2 s< x9)
    return 0xffffffff

if (x8_2 s> x9)
    return 1

int32_t x8 = *(arg1 + 4)
int32_t x9_1 = *(arg2 + 4)

if (x8 s< x9_1)
    return 0xffffffff

if (x8 s> x9_1)
    return 1

int32_t x8_1 = *(arg1 + 8)
int32_t x9_2 = *(arg2 + 8)

if (x8_1 s>= x9_2)
    return zx.q(x8_1 s> x9_2 ? 1 : 0)

return 0xffffffff
