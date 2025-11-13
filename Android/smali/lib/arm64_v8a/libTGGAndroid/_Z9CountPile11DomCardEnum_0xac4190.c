// 函数: _Z9CountPile11DomCardEnum
// 地址: 0xac4190
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x0_2 = BoardPileWhere(*(x0 + 8), zx.q(arg1))
return CountCardsWhere(*(x0 + 8), 0xffffffff, zx.q(x0_2)) __tailcall
