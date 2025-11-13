// 函数: _Z5Annexv
// 地址: 0xa6d3dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

LookThroughDiscard()
CardsWhere(0x3ec)
int32_t var_18
int32_t x2

x2 = var_18 s< 5 ? var_18 : 5

int128_t var_1960
__builtin_memset(&var_1960, 0, 0x30)
var_1960.d = 0x9b
int128_t var_1950
var_1950:0xc.d = 0
int128_t var_1940
var_1940:8.q = 0
int64_t var_1930 = 0
void var_c98
ChooseCardsRange(&var_c98, 0, x2, 0x10, &var_1960, 0xe, 0, 0)
CardIDs var_1920
operator-=(&var_c98, &var_1920)
MoveToTopDeck(&var_c98, 0x3ec)
ShuffleDeck()
return GainCard(0x102, 0x476, 0, 0, 4)
