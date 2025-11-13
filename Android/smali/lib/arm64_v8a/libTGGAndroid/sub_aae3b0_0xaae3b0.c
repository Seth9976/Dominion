// 函数: sub_aae3b0
// 地址: 0xaae3b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsBeingDiscardedFromPlay(Trigger_DiscardCardOptional(), 2)
int128_t var_1930
__builtin_memset(&var_1930, 0, 0x30)
var_1930.d = 0x112
int128_t var_1920
var_1920:0xc.d = 0
int128_t var_1910
var_1910:8.q = 0
int64_t var_1900 = 0
void var_ca8
int64_t x0_2 = MayChooseCard(&var_ca8, 0x14, &var_1930, 0xa)

if (x0_2.d == 0)
    return 

MoveCardTo(x0_2, 0x3e9, 0x467, 0, 0, 0xb, 0)
FromSingle(zx.q(x0_2.d))
EndOfTurn(sub_aae45c, &var_1930, 0x39, 0)
