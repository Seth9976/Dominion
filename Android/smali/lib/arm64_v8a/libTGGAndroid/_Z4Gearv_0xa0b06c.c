// 函数: _Z4Gearv
// 地址: 0xa0b06c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(2, 0, 0, nullptr)
CardsHand()
int32_t var_28
int32_t x19

x19 = var_28 s< 2 ? var_28 : 2

CardsHand()
int128_t var_1970
__builtin_memset(&var_1970, 0, 0x30)
var_1970.d = 0x1b
int128_t var_1960
var_1960:0xc.d = x19
int64_t var_1940 = 0
int128_t var_1950
var_1950:8.q = 0
void var_25f8
int64_t result = ChooseCardsRange(&var_25f8, 0, x19, 0x19, &var_1970, 0x12, 0, 0)
int32_t var_cb0

if (var_cb0 == 0)
    return result

CardIDs var_1930
MoveCardsToCard(&var_1930, 0x3ea, zx.q(ThisCard(true, nullptr)), 4, 0)
FromList(&var_1930)
return StartOfNextTurn(sub_a14bf0, nullptr, &var_25f8, 1, 2)
