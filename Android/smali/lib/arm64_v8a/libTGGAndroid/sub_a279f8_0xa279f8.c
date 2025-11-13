// 函数: sub_a279f8
// 地址: 0xa279f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg2

if ((CardIs(zx.q(x19), 2) & 1) == 0)
    return 0

return (zx.q(CardIs(zx.q(x19), 0x104)) ^ 1) & 1
