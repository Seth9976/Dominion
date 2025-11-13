// 函数: _Z13Diplomat_Hintv
// 地址: 0xa83c18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CountWhere(0x3eb)
int32_t x8 = CountWhere(0x3ec) + x0
int32_t x19_1

x19_1 = x8 s< 2 ? x8 : 2

int32_t x20 = CardWhere(ThisCard(false, nullptr)) == 0x3ea ? 1 : 0
return zx.q(CountHand() + x19_1 - x20 s< 6 ? 1 : 0)
