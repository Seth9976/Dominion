// 函数: _Z12TheMoonsGiftv
// 地址: 0xa97638
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

LookThroughDiscard()
CardsDiscard()
int128_t var_cd0
__builtin_memset(&var_cd0, 0, 0x30)
var_cd0.d = 0x1e
int128_t var_cc0
var_cc0:0xc.d = 0
int128_t var_cb0
var_cb0:8.q = 0
int64_t var_ca0 = 0
void var_c98
int64_t result = MayChooseCard(&var_c98, 0x10, &var_cd0, 0xe)

if (result.d == 0)
    return result

return MoveToTopDeck(result, 0x3ec, 0xb)
