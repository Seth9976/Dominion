// 函数: _Z26MovePlayerTokenToBoardPile12DomTokenType11DomCardEnum
// 地址: 0xae04b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int64_t result = BoardPileSource(*(x0 + 8), zx.q(arg2), false)

if (result.d != 0)
    result = BoardPileWhere(*(x0 + 8), zx.q(result.d))
    
    if (result.d != 0)
        return MovePlayerToken(zx.q(arg1), zx.q(result.d)) __tailcall

return result
