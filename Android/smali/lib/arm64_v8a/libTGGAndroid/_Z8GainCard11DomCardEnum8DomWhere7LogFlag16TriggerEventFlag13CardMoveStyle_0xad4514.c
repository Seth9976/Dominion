// 函数: _Z8GainCard11DomCardEnum8DomWhere7LogFlag16TriggerEventFlag13CardMoveStyle
// 地址: 0xad4514
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x0_2 = BoardPileSource(*(x0 + 8), zx.q(arg1), false)
int32_t x0_4 = BoardPileWhere(*(x0 + 8), zx.q(x0_2))
int32_t x0_6 = BoardPileTop(*(x0 + 8), zx.q(x0_4))
int32_t x23_1 = x0_6

if (x0_6 != 0 && (GainCard(zx.q(x23_1), zx.q(arg2), zx.q(arg3), zx.q(arg4), zx.q(arg5)) & 1) == 0)
    x23_1 = 0

return zx.q(x23_1)
