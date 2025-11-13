// 函数: _Z10Processionv
// 地址: 0xa62944
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GetPlayableFromHand(4, 0x80)
int128_t var_ce0
__builtin_memset(&var_ce0, 0, 0x30)
var_ce0.d = 0x70
int128_t var_cd0
var_cd0:0xc.d = 0
int128_t var_cc0
var_cc0:8.q = 0
int64_t var_cb0 = 0
void var_ca8
int64_t result = MayChooseCard(&var_ca8, 1, &var_ce0, 0x36)

if (result.d == 0)
    return result

int32_t x19_1 = result.d
PlayCard(zx.q(x19_1), 2, zx.q(ThisCard(false, nullptr)), 0)
Trash(zx.q(x19_1), 0x3e9, 0)
var_ce0.d = Cost(zx.q(x19_1))
return GainExactlyType(zx.q(operator+(&var_ce0, 1)), 4, 0x71, 0x476)
