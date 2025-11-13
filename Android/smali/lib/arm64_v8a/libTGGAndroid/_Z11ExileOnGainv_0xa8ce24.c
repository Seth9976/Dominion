// 函数: _Z11ExileOnGainv
// 地址: 0xa8ce24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = Trigger_GainCard()
CardsWhereWhat(0x462, zx.q(CardWhat(x0)))
void var_ca8
operator-=(&var_ca8, zx.q(x0.d))
SetCardsFlag(&var_ca8, 0x20, false)
return DiscardCards(&var_ca8, 0x462, 0xb, 7, 0)
