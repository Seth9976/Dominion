// 函数: _Z6Grottov
// 地址: 0xaa167c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
CardsHand()
int32_t var_18
int32_t x2

x2 = var_18 s< 4 ? var_18 : 4

int128_t var_25b0
__builtin_memset(&var_25b0, 0, 0x30)
var_25b0.d = 0x1b
int128_t var_25a0
var_25a0:0xc.d = x2
int128_t var_2590
var_2590:8.q = 0
int64_t var_2580 = 0
void var_c98
int64_t result = ChooseCardsRange(&var_c98, 0, x2, 0x19, &var_25b0, 0x3c, 0, 0)
int32_t var_ca0

if (var_ca0 == 0)
    return result

CardIDs var_1920
MoveCardsToCard(&var_1920, 0x3ea, zx.q(ThisCard(true, nullptr)), 4, 0)
FromList(&var_1920)
return StartOfNextTurn(sub_aad0c8, nullptr, &var_25b0, 1, 2)
