// 函数: _Z12ExchangeCard6CardID8DomWhere11DomCardEnum
// 地址: 0xad6ffc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((CanExchange(arg1, zx.q(arg3)) & 1) == 0)
    return 0

void* x0_1 = DomGetContext()
int32_t x0_3 = BoardPileSource(*(x0_1 + 8), zx.q(arg3), false)
int32_t x0_5 = BoardPileWhere(*(x0_1 + 8), zx.q(x0_3))
return ExchangeCard(zx.q(arg1.d), zx.q(arg2), zx.q(BoardPileTop(*(x0_1 + 8), zx.q(x0_5))))
    __tailcall
