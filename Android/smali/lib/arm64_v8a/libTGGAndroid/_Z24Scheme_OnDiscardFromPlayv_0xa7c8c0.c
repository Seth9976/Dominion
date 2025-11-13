// 函数: _Z24Scheme_OnDiscardFromPlayv
// 地址: 0xa7c8c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsBeingDiscardedFromPlay(Trigger_DiscardCardOptional(), 4)
int128_t var_ce0
__builtin_memset(&var_ce0, 0, 0x30)
var_ce0.d = 0x5e
int128_t var_cd0
var_cd0:0xc.d = 0
int128_t var_cc0
var_cc0:8.q = 0
int64_t var_cb0 = 0
void var_ca8
int64_t result = ChooseCard(&var_ca8, 0x10, &var_ce0, 0xe, 0)

if (result.d == 0)
    return result

int32_t x0_2 = CardWhere(result)
uint64_t x1_1

if (x0_2 == 0x3ec)
    x1_1 = zx.q(x0_2)
else
    x1_1 = 0x3e9

return MoveToTopDeck(zx.q(result.d), x1_1, 0xb)
