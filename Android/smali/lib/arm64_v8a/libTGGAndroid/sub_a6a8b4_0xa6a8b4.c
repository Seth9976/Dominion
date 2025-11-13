// 函数: sub_a6a8b4
// 地址: 0xa6a8b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg2

if ((CardIs(zx.q(x19), 4) & 1) != 0 && (CostUpto(zx.q(x19), zx.q(operator-(arg1 + 8, 1))) & 1) != 0
        && (CardIs(zx.q(x19), 0x400000000000) & 1) == 0)
    return (zx.q(CardIs(zx.q(x19), 0x80)) ^ 1) & 1

return 0
