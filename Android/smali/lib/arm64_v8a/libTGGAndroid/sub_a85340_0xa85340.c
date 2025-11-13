// 函数: sub_a85340
// 地址: 0xa85340
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg2

if ((CardIs(zx.q(x19), 4) & 1) == 0)
    return 0

return (zx.q(LimitGainableCards(zx.q(x19))) ^ 1) & 1
