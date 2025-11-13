// 函数: _Z12Marquis_Hintv
// 地址: 0xa1995c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsHand()
int32_t x21 = CardWhere(ThisCard(false, nullptr)) == 0x3ea ? 1 : 0
int32_t x0_2 = CountWhere(0x3eb)
int32_t x8 = CountWhere(0x3ec) + x0_2
int32_t var_38
int32_t x9 = var_38 - x21

if (x8 s< x9)
    return zx.q(x8)

return zx.q(x9)
