// 函数: sub_a7e004
// 地址: 0xa7e004
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = LookAtOne()

if (result.d == 0)
    return result

int32_t x19_1 = result.d
int128_t var_50
__builtin_memset(&var_50, 0, 0x30)
var_50.d = 0x5a
int128_t var_40
var_40:0xc.d = result.d
int128_t var_30
var_30:8.q = 0
int64_t var_20_1 = 0

if (ChooseWhere(result, 0x3eb, 0x3ec, &var_50, 0) != 0x3eb)
    return DiscardCard(zx.q(x19_1), 0x3ee, 0xb, 7, 0)

return UnrevealCard(zx.q(x19_1), 0x3eb)
