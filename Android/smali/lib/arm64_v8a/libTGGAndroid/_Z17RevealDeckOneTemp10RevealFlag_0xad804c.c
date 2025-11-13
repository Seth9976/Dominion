// 函数: _Z17RevealDeckOneTemp10RevealFlag
// 地址: 0xad804c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x0_2 = TopDeckCard(*(x0 + 8), zx.q(*(x0 + 0x18)), false)

if (x0_2 != 0)
    int32_t var_cb8
    memset(&var_cb8 | 4, 0, 0xc7c)
    GameAssert(true)
    int32_t var_38_1 = 1
    var_cb8 = x0_2
    void* x0_4 = DomGetContext()
    RevealTemp(*(x0_4 + 8), &var_cb8, 0x3eb, *(x0_4 + 0x40), zx.q(*(x0_4 + 0x48)), 0, zx.q(arg1))

return zx.q(x0_2)
