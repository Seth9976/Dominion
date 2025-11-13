// 函数: _Z19MayExileOneFromHandv
// 地址: 0xa8a244
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsHand()
int128_t var_60
__builtin_memset(&var_60, 0, 0x30)
var_60.d = 0xc1
int128_t var_50
var_50:0xc.d = 0
int64_t var_30 = 0
int128_t var_40
var_40:8.q = 0
void var_ce8
int32_t x0_1 = MayChooseCard(&var_ce8, 0x1b, &var_60, 0x17)

if (x0_1 != 0)
    MoveCardToPlayer(zx.q(x0_1), 0x3ea, zx.q(*(DomGetContext() + 0x18)), 0x462, 0, 0, &var_60, 0xc)
    
    if (zx.d(var_60.b) != 0)
        TriggerEvent(0x13, zx.q(x0_1), 0)

return zx.q(x0_1)
