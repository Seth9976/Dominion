// 函数: sub_a94ee4
// 地址: 0xa94ee4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(0x462, 4)
int128_t var_ce0
__builtin_memset(&var_ce0, 0, 0x30)
var_ce0.d = 0xd3
int128_t var_cd0
var_cd0:0xc.d = 0
int128_t var_cc0
var_cc0:8.q = 0
int64_t var_cb0 = 0
void var_ca8
int32_t result = ChooseCard(&var_ca8, 0x10, &var_ce0, 0xe, 3)

if (result == 0)
    return result

NotifyResult(1)
return MoveToTopDeck(zx.q(result), 0x462, 0xb)
