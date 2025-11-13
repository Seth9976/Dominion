// 函数: _Z5Sibylv
// 地址: 0xa19c44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(4, 0, 0, nullptr)
Action(1, 0)
CardsHand()
int128_t var_cd0
__builtin_memset(&var_cd0, 0, 0x30)
var_cd0.d = 0xe6
int128_t var_cc0
var_cc0:0xc.d = 0
int128_t var_cb0
var_cb0:8.q = 0
int64_t var_ca0 = 0
void var_c98
int64_t x0_1 = ChooseCard(&var_c98, 0xe, &var_cd0, 0xe, 0)

if (x0_1.d != 0)
    MoveToTopDeck(x0_1, 0x3ea, 0xb)

CardsHand()
__builtin_memset(&var_cd0, 0, 0x30)
var_cd0.d = 0xe7
int128_t var_cc0_1
var_cc0_1:0xc.d = 0
int128_t var_cb0_1
var_cb0_1:8.q = 0
int64_t var_ca0_1 = 0
int64_t result = ChooseCard(&var_c98, 0xe, &var_cd0, 0xe, 0)

if (result.d == 0)
    return result

return MoveCardTo(result, 0x3ea, 0x3eb, 2, 0xffffffff, 0xb, 0)
