// 函数: _Z11CanExchange6CardID11DomCardEnum
// 地址: 0xad6c28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
uint64_t result = BoardPileSource(*(x0 + 8), zx.q(arg1))

if (result.d != 0)
    result = BoardPileWhere(*(x0 + 8), zx.q(result.d))
    
    if (result.d != 0)
        void* x0_3 = DomGetContext()
        int32_t x0_5 = BoardPileSource(*(x0_3 + 8), zx.q(arg2), false)
        int32_t x0_7 = BoardPileWhere(*(x0_3 + 8), zx.q(x0_5))
        return zx.q(BoardPileTop(*(x0_3 + 8), zx.q(x0_7)) != 0 ? 1 : 0)

return result
