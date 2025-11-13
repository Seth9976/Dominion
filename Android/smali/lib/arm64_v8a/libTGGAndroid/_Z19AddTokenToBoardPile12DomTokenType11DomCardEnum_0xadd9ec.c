// 函数: _Z19AddTokenToBoardPile12DomTokenType11DomCardEnum
// 地址: 0xadd9ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x0_2 = BoardPileWhere(*(x0 + 8), zx.q(arg2))
int32_t var_28 = 0
int32_t var_30 = *(x0 + 0x18)
return AddTokens(*(x0 + 8), 0xffffffff, zx.q(arg1), 1, zx.q(x0_2), 0, 0, 0)
