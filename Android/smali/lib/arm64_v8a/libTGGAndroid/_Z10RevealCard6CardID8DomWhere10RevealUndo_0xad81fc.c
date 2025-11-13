// 函数: _Z10RevealCard6CardID8DomWhere10RevealUndo
// 地址: 0xad81fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1
void* x0 = DomGetContext()
GameAssert((*(CardGet(*(DomGetContext() + 8), zx.q(x21)) + 0xc) == 0x3ea ? 1 : 0).b)
int32_t var_cc8
memset(&var_cc8 | 4, 0, 0xc7c)
GameAssert(true)
int32_t var_48 = 1
var_cc8 = x21
return Reveal(*(x0 + 8), &var_cc8, 0x3ea, *(x0 + 0x40), zx.q(*(x0 + 0x48)), zx.q(arg2), 0x7ebd44, 
    zx.q(arg3))
