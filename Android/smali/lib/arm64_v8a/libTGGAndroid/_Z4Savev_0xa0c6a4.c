// 函数: _Z4Savev
// 地址: 0xa0c6a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MarkUsed()
Buy(1, 0)
CardsHand()
int128_t var_60
__builtin_memset(&var_60, 0, 0x30)
var_60.d = 0x8c
int128_t var_50
var_50:0xc.d = 0
int64_t var_30 = 0
int128_t var_40
var_40:8.q = 0
int32_t var_ce8
int64_t result = ChooseCard(&var_ce8, 0x19, &var_60, 0x12, 0)

if (result.d == 0)
    return result

MoveCardTo(result, 0x3ea, 0x455, 4, 0, 0xb, 0)
var_ce8 = 0
return EndOfTurn(sub_a14c84, &var_ce8, 1, 0)
