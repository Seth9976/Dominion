// 函数: _Z6Churchv
// 地址: 0xab0f50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
CardsHand()
int128_t var_ce0
__builtin_memset(&var_ce0, 0, 0x30)
var_ce0.d = 0x1b
int128_t var_cd0
var_cd0:0xc.d = 0
int64_t var_cb0 = 0
int128_t var_cc0
var_cc0:8.q = 0
void var_1968
ChooseCardsRange(&var_1968, 0, 3, 0x19, &var_ce0, 0x12, 0, 0)
CardIDs var_ca8
int32_t var_28

if (var_28 != 0)
    MoveCardsToCard(&var_ca8, 0x3ea, zx.q(ThisCard(true, nullptr)), 4, 0)

FromList(&var_ca8)
return StartOfNextTurn(sub_ab1afc, nullptr, &var_1968, 1, 2)
