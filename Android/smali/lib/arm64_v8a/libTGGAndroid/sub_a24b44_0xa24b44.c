// 函数: sub_a24b44
// 地址: 0xa24b44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg2

if ((CostUpto(zx.q(x19), 5) & 1) != 0 && (CardIs(zx.q(x19), zx.q(*(arg1 + 8))) & 1) == 0)
    return CardIs(zx.q(x19), 4) __tailcall

return 0
