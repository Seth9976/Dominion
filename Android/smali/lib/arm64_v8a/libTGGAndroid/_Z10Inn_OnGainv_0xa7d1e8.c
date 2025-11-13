// 函数: _Z10Inn_OnGainv
// 地址: 0xa7d1e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

LookThroughDiscard()
CardsWhereType(0x3ec, 4)
int128_t var_1960
__builtin_memset(&var_1960, 0, 0x20)
var_1960.d = 0x63
int128_t var_1950
__builtin_memset(&var_1950:0xc, 0, 0x1c)
CardID var_c98
int32_t var_18
ChooseCardsRange(&var_c98, 0, var_18, 0x10, &var_1960, 0xe, 0, 0)
int128_t var_1920
memcpy(&var_c98, &var_1920, 0xc84)
void* x0_2 = DomGetContext()
DomGame* x8 = *(x0_2 + 8)
uint64_t x1_1 = zx.q(*(x0_2 + 0x18))
__builtin_memset(&var_1920, 0, 0x48)
TriggerEvent(x8, x1_1, 0xb, &var_1920, 0, &var_c98, var_18, nullptr)
MoveCardsTo(&var_c98, 0x3ec, 0x3eb, 2, 0, 0, 0xb)
return ShuffleDeck()
