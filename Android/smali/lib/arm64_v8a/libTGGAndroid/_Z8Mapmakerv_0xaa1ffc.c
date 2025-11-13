// 函数: _Z8Mapmakerv
// 地址: 0xaa1ffc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

LookAt(4)
int128_t var_1960
__builtin_memset(&var_1960, 0, 0x20)
var_1960.d = 0x1c
int128_t var_1940
__builtin_memset(&var_1940, 0, 0x18)
int128_t var_1950
var_1950:0xc.d = 2
void var_c98
ChooseCards(&var_c98, 2, 0x14, &var_1960, 0xa, 0)
CardIDs var_1920
operator-=(&var_c98, &var_1920)
MoveToHand(&var_1920, 0x3ee)
return DiscardCards(&var_c98, 0x3ee, 0xb, 7, 0)
