// 函数: _Z19StarChart_OnShufflev
// 地址: 0xabb110
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

LookThroughShuffling()
CardsWhere(0x44d)
int128_t var_cd0
__builtin_memset(&var_cd0, 0, 0x30)
var_cd0.d = 0xbd
int128_t var_cc0
var_cc0:0xc.d = 0
int128_t var_cb0
var_cb0:8.q = 0
int64_t var_ca0 = 0
void var_c98
int64_t result = ChooseCard(&var_c98, 0x10, &var_cd0, 0xe, 0)

if (result.d == 0)
    return result

return MoveCardTo(result, 0x44d, 0x44f, 4, 0, 0xb, 0)
