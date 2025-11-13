// 函数: _ZltRK13DomCostParsedRS_
// 地址: 0xbf32d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_4 = *arg1
int32_t x9 = *arg2

if (x8_4 s< x9)
    return 1

if (x8_4 s> x9)
    return 0

int32_t x8 = *(arg1 + 4)
int32_t x9_1 = *(arg2 + 4)

if (x8 s< x9_1)
    return 1

if (x8 s> x9_1)
    return 0

int32_t x8_1 = *(arg1 + 8)
int32_t x9_2 = *(arg2 + 8)

if (x8_1 s< x9_2)
    return 1

if (x8_1 s> x9_2)
    return 0

if (*(arg1 + 0xc) == 0)
    return zx.q(*(arg2 + 0xc) != 0 ? 1 : 0)

return 0
