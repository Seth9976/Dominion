// 函数: _Z6Hunterv
// 地址: 0xa192fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
RevealDeck(3, 0x3ee, 0x7ad918)
PauseUI(true)
void var_1930
void var_ca8
memcpy(&var_1930, &var_ca8, 0xc84)
FilterType(&var_1930, 4)
int128_t var_25c0
__builtin_memset(&var_25c0, 0, 0x30)
var_25c0.d = 0xdc
int128_t var_25b0
var_25b0:0xc.d = 0
int64_t var_2590 = 0
int128_t var_25a0
var_25a0:8.q = 0
int32_t x0_3 = ChooseCard(&var_1930, 0x14, &var_25c0, 0xa, 0)

if (x0_3 != 0)
    operator-=(&var_ca8, zx.q(x0_3))
    MoveToHand(zx.q(x0_3), 0x3ee)

memcpy(&var_25c0, &var_ca8, 0xc84)
FilterType(&var_25c0, 2)
int128_t var_3250
__builtin_memset(&var_3250, 0, 0x30)
var_3250.d = 0xdd
int128_t var_3240
var_3240:0xc.d = 0
int128_t var_3230
var_3230:8.q = 0
int64_t var_3220 = 0
int32_t x0_9 = ChooseCard(&var_25c0, 0x14, &var_3250, 0xa, 0)

if (x0_9 != 0)
    operator-=(&var_ca8, zx.q(x0_9))
    MoveToHand(zx.q(x0_9), 0x3ee)

memcpy(&var_3250, &var_ca8, 0xc84)
FilterType(&var_3250, 8)
int128_t var_3290
__builtin_memset(&var_3290, 0, 0x30)
var_3290.d = 0xde
int128_t var_3280
var_3280:0xc.d = 0
int128_t var_3270
var_3270:8.q = 0
int64_t var_3260 = 0
int32_t x0_15 = ChooseCard(&var_3250, 0x14, &var_3290, 0xa, 0)

if (x0_15 != 0)
    operator-=(&var_ca8, zx.q(x0_15))
    MoveToHand(zx.q(x0_15), 0x3ee)

return DiscardCards(&var_ca8, 0x3ee, 0xb, 7, 0)
