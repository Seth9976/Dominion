// 函数: _Z14TakeTokensHere12DomTokenTypei
// 地址: 0xae1238
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = ThisCard(false, arg2)
int32_t x0_3 = CardWhat(*(DomGetContext() + 8), zx.q(x0))
void* x0_4 = DomGetContext()
int64_t x0_6 = BoardPileSource(*(x0_4 + 8), zx.q(x0_3), false)

if (x0_6.d != 0)
    x0_6 = BoardPileWhere(*(x0_4 + 8), zx.q(x0_6.d))

return MoveTokens(x0_6, 0x3f1, zx.q(arg1), arg2) __tailcall
