// 函数: sub_a24c10
// 地址: 0xa24c10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = CardsHand()
int32_t var_28

if (var_28 s< 5)
    return result

int128_t var_ce0
__builtin_memset(&var_ce0, 0, 0x30)
var_ce0.d = 0xe9
int128_t var_cd0
var_cd0:0xc.d = 0
int128_t var_cc0
var_cc0:8.q = 0
int64_t var_cb0_1 = 0
CardIDs var_ca8
operator-=(&var_ca8, zx.q(ChooseCard(&var_ca8, 0x20, &var_ce0, 0xa, 0)))
Reveal(&var_ca8, 0x3ea)
int32_t x19_1 = *(arg1 + 8)
int32_t x0_4 = CurrentWho()
__builtin_memset(&var_ce0, 0, 0x30)
int128_t var_cd0_1
var_cd0_1:0xc.d = x0_4
var_ce0.d = 0x11
int128_t var_cc0_1
var_cc0_1:8.q = 0
int64_t var_cb0_2 = 0
int32_t x0_6 = ChooseCardPlayer(&var_ca8, 0x17, zx.q(x19_1), &var_ce0, 6, 0)
operator-=(&var_ca8, zx.q(x0_6))
UnrevealCards(&var_ca8, 0x3ea)
return DiscardCard(zx.q(x0_6), 0x3ee, 0x14, 7, 0)
