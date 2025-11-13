// 函数: _Z23OrderOfMasons_OnShufflev
// 地址: 0xa1b5cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

LookThroughShuffling()
CardsWhere(0x44d)
void* x0 = DomGetContext()
int32_t var_18
int32_t x2 = var_18

if (x2 s> CountTokensPlayer(*(x0 + 8), zx.q(*(x0 + 0x18)), 0x1000) << 1)
    void* x0_3 = DomGetContext()
    x2 = CountTokensPlayer(*(x0_3 + 8), zx.q(*(x0_3 + 0x18)), 0x1000) << 1

int128_t var_1960
__builtin_memset(&var_1960, 0, 0x20)
var_1960.d = 0xf8
int128_t var_1950
__builtin_memset(&var_1950:0xc, 0, 0x1c)
CardIDs var_c98
ChooseCardsRange(&var_c98, 0, x2, 0x10, &var_1960, 0xe, 0, 0)
int32_t var_ca0

if (var_ca0 == 0)
    void* result = DomGetContextW()
    *(result + 0x4c) = 1
    return result

int32_t x8_3

if (var_ca0 + 1 s< 0)
    x8_3 = var_ca0 + 2
else
    x8_3 = var_ca0 + 1

int32_t x0_7 = x8_3 s>> 1
SpendFavor(x0_7, x0_7)
void var_1920
return MoveCardsTo(&var_1920, 0x44d, 0x3ec, 4, 0, 0, 0xb)
