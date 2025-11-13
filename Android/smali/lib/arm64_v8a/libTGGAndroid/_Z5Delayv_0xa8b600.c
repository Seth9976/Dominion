// 函数: _Z5Delayv
// 地址: 0xa8b600
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(0x3ea, 4)
int128_t var_1930
__builtin_memset(&var_1930, 0, 0x30)
var_1930.d = 0xcc
int128_t var_1920
var_1920:0xc.d = 0
int128_t var_1910
var_1910:8.q = 0
int64_t var_1900 = 0
void var_ca8
int64_t result = MayChooseCard(&var_ca8, 0x19, &var_1930, 0x1a)

if (result.d == 0)
    return result

MoveCardTo(result, 0x3ea, 0x45a, 0, 0, 0xb, 0)
FromSingle(zx.q(result.d))
return StartOfNextTurn(sub_a940e4, nullptr, &var_1930, 1, 2)
