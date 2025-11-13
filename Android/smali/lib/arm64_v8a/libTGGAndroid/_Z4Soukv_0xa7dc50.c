// 函数: _Z4Soukv
// 地址: 0xa7dc50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Buy(1, 0)
MoneyPlus(7, 0, false)
int32_t x0 = CountHand()

if (x0 != 0 && GameVersion() s>= 0x16)
    MayPayoffDebt(7)

return LoseMoney(x0) __tailcall
