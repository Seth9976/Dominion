// 函数: _Z7Advisorv
// 地址: 0xa79278
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
int64_t result = RevealDeck(3, 0x3ee, 0x7e44bc)
int32_t var_28

if (var_28 == 0)
    return result

int32_t x0 = PlayerLeft()
int32_t x0_1 = CurrentWho()
int128_t var_ce0
__builtin_memset(&var_ce0, 0, 0x30)
int128_t var_cd0
var_cd0:0xc.d = x0_1
var_ce0.d = 0x11
int128_t var_cc0
var_cc0:8.q = 0
int64_t var_cb0_1 = 0
void var_ca8
int32_t x0_3 = ChooseCardPlayer(&var_ca8, 0x17, zx.q(x0), &var_ce0, 6, 0)
operator-=(&var_ca8, zx.q(x0_3))
DiscardCard(zx.q(x0_3), 0x3ee, 0xb, 7, 0)
return MoveToHand(&var_ca8, 0x3ee)
