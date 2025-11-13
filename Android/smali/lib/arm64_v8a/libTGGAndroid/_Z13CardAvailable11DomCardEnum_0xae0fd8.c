// 函数: _Z13CardAvailable11DomCardEnum
// 地址: 0xae0fd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x0_2 = BoardPileSource(*(x0 + 8), zx.q(arg1), false)
int32_t x0_4 = BoardPileWhere(*(x0 + 8), zx.q(x0_2))
return zx.q(BoardPileTop(*(x0 + 8), zx.q(x0_4)) != 0 ? 1 : 0)
