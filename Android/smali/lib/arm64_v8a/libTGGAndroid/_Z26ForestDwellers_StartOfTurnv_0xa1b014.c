// 函数: _Z26ForestDwellers_StartOfTurnv
// 地址: 0xa1b014
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SpendFavor(1, 1)
LookAt(3)
int128_t var_1960
__builtin_memset(&var_1960, 0, 0x20)
var_1960.d = 0xf7
int128_t var_1950
__builtin_memset(&var_1950:0xc, 0, 0x1c)
void var_c98
int32_t var_18
ChooseCardsRange(&var_c98, 0, var_18, 0x17, &var_1960, 5, 0, 0)
CardIDs var_1920
DiscardCards(&var_1920, 0x3ee, 0xb, 7, 0)
operator-=(&var_c98, &var_1920)
return ReturnToDeckAnyOrder(&var_c98, 0x3ee, 0x18)
