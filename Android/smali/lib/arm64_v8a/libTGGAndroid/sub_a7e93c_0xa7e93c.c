// 函数: sub_a7e93c
// 地址: 0xa7e93c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardIDs* x0 = *(arg1 + 0x10)
int32_t x8_1 = **(arg1 + 0x18)
int128_t var_50
__builtin_memset(&var_50, 0, 0x30)
var_50.d = 0x5f
int128_t var_40
var_40:0xc.d = x8_1
int128_t var_30
var_30:8.q = 0
int64_t var_20 = 0
int32_t result = ChooseCard(x0, 9, &var_50, 8, 0)
**(arg1 + 8) = result
return result
