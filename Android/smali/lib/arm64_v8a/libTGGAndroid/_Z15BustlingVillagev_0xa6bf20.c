// 函数: _Z15BustlingVillagev
// 地址: 0xa6bf20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(3, 0)
LookThroughDiscard()
CardsWhereWhat(0x3ec, 0xc08)
int128_t var_ce0
__builtin_memset(&var_ce0, 0, 0x30)
var_ce0.d = 0x92
int128_t var_cd0
var_cd0:0xc.d = 0
int128_t var_cc0
var_cc0:8.q = 0
int64_t var_cb0 = 0
void var_ca8
int64_t result = MayChooseCard(&var_ca8, 0x14, &var_ce0, 0xe)

if (result.d == 0)
    return result

NotifyResult(1)
return MoveToHand(zx.q(result.d), 0x3ec)
