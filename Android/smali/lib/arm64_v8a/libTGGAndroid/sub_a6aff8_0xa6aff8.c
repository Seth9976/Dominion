// 函数: sub_a6aff8
// 地址: 0xa6aff8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsTrash()
void var_c98
FilterCost(&var_c98, 3, 6)
int128_t var_cd0
__builtin_memset(&var_cd0, 0, 0x30)
var_cd0.d = 0x6f
int128_t var_cc0
var_cc0:0xc.d = 0
int128_t var_cb0
var_cb0:8.q = 0
int64_t var_ca0 = 0
int64_t result = ChooseCard(&var_c98, 7, &var_cd0, 0xc, 0)

if (result.d == 0)
    return result

return GainCard(result, 0x3eb, 0, 0, 4)
