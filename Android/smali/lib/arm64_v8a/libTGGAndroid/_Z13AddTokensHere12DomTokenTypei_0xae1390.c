// 函数: _Z13AddTokensHere12DomTokenTypei
// 地址: 0xae1390
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = *(DomGetContext() + 0x1c)
void* x0_1 = DomGetContext()
int32_t x0_3 = BoardPileSource(*(x0_1 + 8), zx.q(x22), false)
int32_t x21_1

if (x0_3 == 0)
    x21_1 = 0
else
    x21_1 = BoardPileWhere(*(x0_1 + 8), zx.q(x0_3))

int32_t var_38 = 0
int32_t var_40 = 0xffffffff
return AddTokens(*(DomGetContext() + 8), 0xffffffff, zx.q(arg1), zx.q(arg2), zx.q(x21_1), 0, 0, 0)
