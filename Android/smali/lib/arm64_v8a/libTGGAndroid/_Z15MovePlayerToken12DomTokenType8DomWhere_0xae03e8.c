// 函数: _Z15MovePlayerToken12DomTokenType8DomWhere
// 地址: 0xae03e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
int32_t x19 = arg1
void* x0 = DomGetContext()
int32_t x0_2 = FindOrCreateToken(*(x0 + 8), zx.q(*(x0 + 0x18)), zx.q(x19), zx.q(x20), 1)
void* x0_4 = TokenGet(*(x0 + 8), zx.q(x0_2))
uint64_t x1_2 = zx.q(*(x0_4 + 8))
DomGame* x21_1 = *(x0 + 8)

if (x20 != 0x476 && x1_2.d != x20)
    return MoveToken(x21_1, zx.q(x0_2), zx.q(x20)) __tailcall

int32_t x20_1 = *(x0_4 + 4)
int32_t var_40 = BoardPileWhat(x21_1, x1_2)
int32_t var_38 = 0
return NotifyLog(x21_1, 0xc, zx.q(x20_1), 0, nullptr, 0, zx.q(x19), 1)
