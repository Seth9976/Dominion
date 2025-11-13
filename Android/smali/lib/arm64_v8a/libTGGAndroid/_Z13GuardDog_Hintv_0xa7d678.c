// 函数: _Z13GuardDog_Hintv
// 地址: 0xa7d678
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CountWhere(0x3eb)
int32_t x19_1 = CountWhere(0x3ec) + x0
int32_t x20 = CardWhere(ThisCard(false, nullptr)) == 0x3ea ? 1 : 0
int32_t x19_2

x19_2 = x19_1 s< 2 ? x19_1 : 2

return zx.q(CountHand() + x19_2 - x20 s< 6 ? 1 : 0)
