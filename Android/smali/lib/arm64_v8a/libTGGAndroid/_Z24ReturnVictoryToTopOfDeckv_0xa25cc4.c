// 函数: _Z24ReturnVictoryToTopOfDeckv
// 地址: 0xa25cc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(0x3ea, 8)
int128_t var_ce0
__builtin_memset(&var_ce0, 0, 0x30)
var_ce0.d = 0x20
int128_t var_cd0
var_cd0:0xc.d = 0
int128_t var_cc0
var_cc0:8.q = 0
int64_t var_cb0 = 0
void var_ca8
int64_t x0_1 = ChooseCard(&var_ca8, 0xe, &var_ce0, 0xe, 0)

if (x0_1.d == 0)
    NotifyResult(x0_1)
    return RevealHandTemp()

int32_t x19 = x0_1.d
RevealCard(x0_1, 0x3ee, 0)
PauseUI(true)
NotifyResult(1)
MoveToTopDeck(zx.q(x19), 0x3ee, 0xb)
return TriggerEvent(0x1b, zx.q(x19), 0)
