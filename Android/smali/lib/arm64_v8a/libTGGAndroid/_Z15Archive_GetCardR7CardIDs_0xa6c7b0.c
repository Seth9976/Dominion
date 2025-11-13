// 函数: _Z15Archive_GetCardR7CardIDs
// 地址: 0xa6c7b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MoveCardsTo(arg1, 0x474, 0x3ee, 5, 0, 0, 0xb)
int128_t var_cb0
__builtin_memset(&var_cb0, 0, 0x30)
var_cb0.d = 0x1c
int128_t var_ca0
var_ca0:0xc.d = 1
int128_t var_c90
var_c90:8.q = 0
int64_t var_c80 = 0
int64_t x0_1 = ChooseCard(arg1, 0x14, &var_cb0, 0xa, 0)
MoveCardTo(x0_1, 0x3ee, 0x3ea, 3, 0, 0xb, 0)
MoveCardsToCard(arg1, 0x3ee, zx.q(ThisCard(true, nullptr)), 4, 1)
int64_t result = operator-=(arg1, zx.q(x0_1.d))

if (*(arg1 + 0xc80) s< 1)
    return result

FromList(arg1)
return StartOfNextTurn(Archive_GetCard_Recurring, nullptr, &var_cb0, 1, 0)
