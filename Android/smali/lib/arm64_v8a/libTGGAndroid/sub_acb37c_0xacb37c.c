// 函数: sub_acb37c
// 地址: 0xacb37c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg2

if ((CardIs(zx.q(x19), 4) & 1) == 0 && (CardIs(zx.q(x19), 2) & 1) == 0)
    return 0

return CostUpto(zx.q(x19), 8) __tailcall
