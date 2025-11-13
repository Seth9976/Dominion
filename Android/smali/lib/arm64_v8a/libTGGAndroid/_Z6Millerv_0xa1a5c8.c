// 函数: _Z6Millerv
// 地址: 0xa1a5c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
LookAt(4)
int128_t var_ce0
__builtin_memset(&var_ce0, 0, 0x30)
var_ce0.d = 0x1c
int128_t var_cd0
var_cd0:0xc.d = 1
int128_t var_cc0
var_cc0:8.q = 0
int64_t var_cb0 = 0
void var_ca8
int32_t x0_1 = ChooseCard(&var_ca8, 0x14, &var_ce0, 0xa, 0)
operator-=(&var_ca8, zx.q(x0_1))
MoveCardTo(zx.q(x0_1), 0x3ee, 0x3ea, 3, 0, 0xb, 0)
return DiscardCards(&var_ca8, 0x3ee, 0xb, 7, 0)
