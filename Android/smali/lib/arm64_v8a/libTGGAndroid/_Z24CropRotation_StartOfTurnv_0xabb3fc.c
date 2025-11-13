// 函数: _Z24CropRotation_StartOfTurnv
// 地址: 0xabb3fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(0x3ea, 8)
int128_t var_cd0
__builtin_memset(&var_cd0, 0, 0x30)
var_cd0.d = 0xba
int128_t var_cc0
var_cc0:0xc.d = 0
int128_t var_cb0
var_cb0:8.q = 0
int64_t var_ca0 = 0
void var_c98
int64_t result = ChooseCard(&var_c98, 0x17, &var_cd0, 0x3c, 0)

if (result.d == 0)
    return result

DiscardCard(result, 0x3ea, 0xb, 7, 0)
return Card(2, 0, 0, nullptr)
