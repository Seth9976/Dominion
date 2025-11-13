// 函数: _Z15MountainVillagev
// 地址: 0xaba7f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(2, 0)
LookThroughDiscard()
CardsDiscard()
int128_t var_cd0
__builtin_memset(&var_cd0, 0, 0x30)
var_cd0.d = 0xb4
int128_t var_cc0
var_cc0:0xc.d = 0
int128_t var_cb0
var_cb0:8.q = 0
int64_t var_ca0 = 0
void var_c98
int64_t x0_1 = ChooseCard(&var_c98, 0x14, &var_cd0, 0xe, 0)

if (x0_1.d == 0)
    return Card(1, 0, 0, nullptr)

return MoveToHand(x0_1, 0x3ec)
