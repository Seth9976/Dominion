// 函数: _Z12GetBoardPile11DomCardEnumb
// 地址: 0xad4160
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int64_t result = BoardPileSource(*(x0 + 8), zx.q(arg1), arg2 & 1)

if (result.d == 0)
    return result

return BoardPileWhere(*(x0 + 8), zx.q(result.d)) __tailcall
