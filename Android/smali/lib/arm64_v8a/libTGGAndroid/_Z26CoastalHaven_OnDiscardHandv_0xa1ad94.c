// 函数: _Z26CoastalHaven_OnDiscardHandv
// 地址: 0xa1ad94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsHand()
void* x0 = DomGetContext()
int32_t var_28
int32_t x2

if (var_28 s>= CountTokensPlayer(*(x0 + 8), zx.q(*(x0 + 0x18)), 0x1000))
    void* x0_3 = DomGetContext()
    x2 = CountTokensPlayer(*(x0_3 + 8), zx.q(*(x0_3 + 0x18)), 0x1000)
else
    x2 = var_28

int128_t var_1970
__builtin_memset(&var_1970, 0, 0x20)
var_1970.d = 0xf5
int128_t var_1950
__builtin_memset(&var_1950, 0, 0x18)
int128_t var_1960
var_1960:0xc.d = x2
void var_ca8
ChooseCardsRange(&var_ca8, 0, x2, 0x14, &var_1970, 0xa, 0, 0)
int32_t var_cb0
int64_t result = SpendFavor(var_cb0, var_cb0)
int64_t x8_2 = sx.q(var_cb0)

if (x8_2.d != 0)
    void var_1930
    void* x19_1 = &var_1930
    int64_t i_1 = x8_2 << 2
    int64_t i
    
    do
        uint64_t x0_8 = zx.q(*x19_1)
        x19_1 += 4
        result = SetCardFlag(x0_8, 0x80, true)
        i = i_1
        i_1 -= 4
    while (i != 4)

return result
