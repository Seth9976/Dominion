// 函数: sub_aaf5d8
// 地址: 0xaaf5d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = BoardPileSource(zx.q(*arg2))
uint64_t x8_1 = zx.q(*(arg1 + 0x10))

if (x8_1.d s< 1)
    return 0

int32_t* x10 = *(arg1 + 8)

if (*x10 == x0_1)
    return 1

int64_t x9_1 = 0
int32_t x12_1

do
    if (x8_1 - 1 == x9_1)
        return zx.q(x8_1 u< x8_1 ? 1 : 0)
    
    x12_1 = x10[1 + x9_1]
    x9_1 += 1
while (x12_1 != x0_1)
return zx.q(x9_1 u< x8_1 ? 1 : 0)
