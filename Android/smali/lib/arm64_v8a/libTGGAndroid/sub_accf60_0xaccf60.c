// 函数: sub_accf60
// 地址: 0xaccf60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d

if ((LimitPlayableCards(arg1) & 1) == 0 && (CardIs(zx.q(x19), 0x80) & 1) != 0)
    return CardIsWhere(zx.q(x19), zx.q(CardGainedToWhere(zx.q(x19)))) __tailcall

return 0
