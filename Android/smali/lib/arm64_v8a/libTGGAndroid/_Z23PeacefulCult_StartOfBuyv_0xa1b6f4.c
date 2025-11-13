// 函数: _Z23PeacefulCult_StartOfBuyv
// 地址: 0xa1b6f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsHand()
void* x0 = DomGetContext()
int32_t var_18
int32_t x2 = var_18

if (CountTokensPlayer(*(x0 + 8), zx.q(*(x0 + 0x18)), 0x1000) s< x2)
    void* x0_3 = DomGetContext()
    x2 = CountTokensPlayer(*(x0_3 + 8), zx.q(*(x0_3 + 0x18)), 0x1000)

int128_t var_1960
__builtin_memset(&var_1960, 0, 0x20)
var_1960.d = 0x13
int128_t var_1940
__builtin_memset(&var_1940, 0, 0x18)
int128_t var_1950
var_1950:0xc.d = x2
void var_c98
ChooseCardsRange(&var_c98, 0, x2, 9, &var_1960, 7, 0, 0)
int32_t var_ca0
SpendFavor(var_ca0, var_ca0)
void var_1920
return Trash(&var_1920, 0x3ea)
