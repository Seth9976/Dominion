// 函数: _Z13GainFromTrash11DomCardType14DomChoiceFlags
// 地址: 0xae1194
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(2, arg1, 0)
int128_t var_ce0
__builtin_memset(&var_ce0, 0, 0x30)
var_ce0.d = 0x2e
int128_t var_cd0
var_cd0:0xc.d = 0
int128_t var_cc0
var_cc0:8.q = 0
int64_t var_cb0 = 0
CardIDs var_ca8
int64_t result = ChooseCard(&var_ca8, 7, &var_ce0, 0xc, zx.q(arg2) | 1)

if (result.d == 0)
    return result

void* x0_1 = DomGetContext()
int32_t var_cf0_1 = 4
return GainCard(*(x0_1 + 8), zx.q(*(x0_1 + 0x18)), zx.q(result.d), 0x476, 0, 0x476, 0, 0)
