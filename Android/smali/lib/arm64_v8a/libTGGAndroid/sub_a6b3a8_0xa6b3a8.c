// 函数: sub_a6b3a8
// 地址: 0xa6b3a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CurrentWho()
int32_t result = CountHand()

if (result s< 5)
    return result

RevealHand()
uint64_t x2_1 = zx.q(*(arg1 + 8))
int128_t var_ce0
__builtin_memset(&var_ce0, 0, 0x30)
var_ce0.d = 0x11
int128_t var_cd0
var_cd0:0xc.d = x0
int128_t var_cc0
var_cc0:8.q = 0
int64_t var_cb0_1 = 0
void var_ca8
int64_t x0_2 = ChooseCardPlayer(&var_ca8, 0x17, x2_1, &var_ce0, 6, 0)

if (x0_2.d != 0)
    DiscardCard(x0_2, 0x3ee, 0xb, 7, 0)

return MovePileTo(0x3ee, 0x3ea, 3, false)
