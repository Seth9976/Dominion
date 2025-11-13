// 函数: _Z13HasSourcePile6CardID
// 地址: 0xad6be4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
uint64_t result = BoardPileSource(*(x0 + 8), zx.q(arg1))

if (result.d == 0)
    return result

return zx.q(BoardPileWhere(*(x0 + 8), zx.q(result.d)) != 0 ? 1 : 0)
