// 函数: _Z15TragicHero_Hintv
// 地址: 0xa96a10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CountHand()
int32_t x0_1 = CountWhere(0x3eb)
int32_t x8 = CountWhere(0x3ec) + x0_1
int32_t x20_1

x20_1 = x8 s< 3 ? x8 : 3

return zx.q(x20_1 + x0 - (CardWhere(ThisCard(false, nullptr)) == 0x3ea ? 1 : 0) s> 7 ? 1 : 0)
