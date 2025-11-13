// 函数: sub_a7ede4
// 地址: 0xa7ede4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg2

if ((CostExactly(zx.q(x19), zx.q(**(arg1 + 8))) & 1) == 0)
    return 0

return (zx.q(CardIs(zx.q(x19), 0x819)) ^ 1) & 1
