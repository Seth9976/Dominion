// 函数: _Z21MoveTokensToBoardPile12DomTokenTypei11DomCardEnum
// 地址: 0xadd940
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1
void* x0 = DomGetContext()
int32_t var_38 = 0x42
int32_t var_40 = 0xffffffff
AddTokens(*(x0 + 8), zx.q(*(x0 + 0x18)), zx.q(x21), zx.q(neg.d(arg2)), 0x476, 0, 0, 0)
int32_t x0_3 = BoardPileWhere(*(x0 + 8), zx.q(arg3))
int32_t var_38_1 = 0
int32_t var_40_1 = *(x0 + 0x18)
return AddTokens(*(x0 + 8), 0xffffffff, zx.q(x21), zx.q(arg2), zx.q(x0_3), 0, 0, 0)
