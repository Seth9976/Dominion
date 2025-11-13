// 函数: _Z17HasOccuredProjectv
// 地址: 0xae261c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0
CardID* x1
x0, x1 = DomGetContext()
int32_t x0_1 = ThisCard(false, x1)
int32_t x0_4 = CardWhat(*(DomGetContext() + 8), zx.q(x0_1))
int32_t x0_6 = CountOngoing(*(x0 + 8), zx.q(*(x0 + 0x18)), 7, x0_4, 0)
int32_t var_14
ProjectIsOwned(*(x0 + 8), zx.q(*(x0 + 0x18)), zx.q(x0_4), &var_14)
return zx.q(x0_6 s>= var_14 ? 1 : 0)
