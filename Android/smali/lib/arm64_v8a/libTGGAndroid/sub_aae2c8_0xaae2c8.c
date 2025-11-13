// 函数: sub_aae2c8
// 地址: 0xaae2c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MoveCardsTo(*(arg1 + 8), 0x474, 0x3ee, 0, 0, 1, 0xb)
CardIDs* x0_1 = *(arg1 + 8)
int128_t var_60
__builtin_memset(&var_60, 0, 0x30)
var_60.d = 0x1c
int128_t var_50
var_50:0xc.d = 1
int128_t var_40
var_40:8.q = 0
int64_t var_30 = 0
int64_t x0_2 = ChooseCard(x0_1, 0x14, &var_60, 0xa, 0)
MoveToHand(x0_2, 0x3ee)
operator-=(*(arg1 + 8), zx.q(x0_2.d))
MoveCardsToCard(*(arg1 + 8), 0x3ee, zx.q(ThisCard(true, nullptr)), 4, 1)
return Trigger_AssociatedSetCardsList(*(arg1 + 8))
