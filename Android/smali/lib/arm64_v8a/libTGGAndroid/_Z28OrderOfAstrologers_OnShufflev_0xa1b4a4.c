// 函数: _Z28OrderOfAstrologers_OnShufflev
// 地址: 0xa1b4a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

LookThroughShuffling()
CardsWhere(0x44d)
void* x0 = DomGetContext()
int32_t var_18
int32_t x2 = var_18

if (CountTokensPlayer(*(x0 + 8), zx.q(*(x0 + 0x18)), 0x1000) s< x2)
    void* x0_3 = DomGetContext()
    x2 = CountTokensPlayer(*(x0_3 + 8), zx.q(*(x0_3 + 0x18)), 0x1000)

int128_t var_1960
__builtin_memset(&var_1960, 0, 0x20)
var_1960.d = 0xbd
int128_t var_1950
__builtin_memset(&var_1950:0xc, 0, 0x1c)
void var_c98
ChooseCardsRange(&var_c98, 0, x2, 0x10, &var_1960, 0xe, 0, 0)
int32_t var_ca0

if (var_ca0 != 0)
    SpendFavor(var_ca0, var_ca0)
    void var_1920
    return MoveCardsTo(&var_1920, 0x44d, 0x44f, 4, 0, 0, 0xb)

void* result = DomGetContextW()
*(result + 0x4c) = 1
return result
