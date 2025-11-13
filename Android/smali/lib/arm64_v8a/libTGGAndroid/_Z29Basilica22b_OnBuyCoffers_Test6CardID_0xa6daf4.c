// 函数: _Z29Basilica22b_OnBuyCoffers_Test6CardID
// 地址: 0xa6daf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((IsYourBuyPhaseWhenGained() & 1) == 0)
    return 0

int32_t x0_1 = CountMoney()

if (x0_1 s<= 1 && CountCoffers() + x0_1 s>= 2)
    return zx.q(CountTokensHere(0x601) s> 0 ? 1 : 0)

return 0
