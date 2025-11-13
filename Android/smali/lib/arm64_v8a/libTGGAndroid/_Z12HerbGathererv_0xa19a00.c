// 函数: _Z12HerbGathererv
// 地址: 0xa19a00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Buy(1, 0)
MovePileTo(0x3eb, 0x3ec, 8, false)
LookThroughDiscard()
CardsWhereType(0x3ec, 2)
int128_t var_cd0
__builtin_memset(&var_cd0, 0, 0x30)
var_cd0.d = 0xe4
int128_t var_cc0
var_cc0:0xc.d = 0
int128_t var_cb0
var_cb0:8.q = 0
int64_t var_ca0 = 0
void var_c98
int64_t x0_1 = MayChooseCard(&var_c98, 1, &var_cd0, 2)

if (x0_1.d != 0)
    PlayCard(x0_1, 0)

return MayRotatePile(0x1019)
