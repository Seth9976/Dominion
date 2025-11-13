// 函数: sub_a24a88
// 地址: 0xa24a88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg2

if ((CardIs(zx.q(x19), 4) & 1) == 0)
    return 0

return zx.q(GetBoardPile(CardWhat(zx.q(x19)), false) != 0 ? 1 : 0)
