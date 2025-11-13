// 函数: _Z5Marchv
// 地址: 0xa8bb94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

LookThroughDiscard()
CardsWhereType(0x3ec, 4)
int128_t var_cd0
__builtin_memset(&var_cd0, 0, 0x30)
var_cd0.d = 0xcf
int128_t var_cc0
var_cc0:0xc.d = 0
int128_t var_cb0
var_cb0:8.q = 0
int64_t var_ca0 = 0
void var_c98
int64_t result = MayChooseCard(&var_c98, 1, &var_cd0, 0xb)

if (result.d == 0)
    return result

return PlayCard(result, 0)
