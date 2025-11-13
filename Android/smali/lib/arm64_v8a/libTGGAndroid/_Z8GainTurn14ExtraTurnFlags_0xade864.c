// 函数: _Z8GainTurn14ExtraTurnFlags
// 地址: 0xade864
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0
CardID* x1
x0, x1 = DomGetContext()
DomGame* x21 = *(x0 + 8)
int32_t x22 = *(x0 + 0x18)
int64_t var_28 = ToCardRef(x21, zx.q(ThisCard(false, x1)))
return GainTurn(x21, zx.q(x22), zx.q(x22), &var_28, x0 + 0x30, zx.q(arg1), 0, 0)
