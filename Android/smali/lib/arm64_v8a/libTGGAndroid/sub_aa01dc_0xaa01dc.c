// 函数: sub_aa01dc
// 地址: 0xaa01dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg2

if ((CardIsFaceup(zx.q(x19)) & 1) != 0 && (CardIs(zx.q(x19), 0x80) & 1) == 0)
    return CardIs(zx.q(x19), 4) __tailcall

return 0
