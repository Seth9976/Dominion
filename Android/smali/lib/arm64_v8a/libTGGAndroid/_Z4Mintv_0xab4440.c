// 函数: _Z4Mintv
// 地址: 0xab4440
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(0x3ea, 2)
int128_t var_ce0
__builtin_memset(&var_ce0, 0, 0x30)
var_ce0.d = 0x49
int128_t var_cd0
var_cd0:0xc.d = 0
int128_t var_cc0
var_cc0:8.q = 0
int64_t var_cb0 = 0
void var_ca8
int64_t result = MayChooseCard(&var_ca8, 0x20, &var_ce0, 0xc)

if (result.d == 0)
    return result

RevealTemp(result, 0x3ea, 0)
return GainCopy(zx.q(result.d), 0x476)
