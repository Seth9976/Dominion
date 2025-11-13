// 函数: _Z14HaveElderPowerv
// 地址: 0xae465c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0
CardID* x1
x0, x1 = DomGetContext()
int32_t x0_1 = ThisCard(false, x1)
int64_t x19_1 = *(x0 + 0x40)
void* x0_2 = DomGetContext()
return HasOngoing(*(x0_2 + 8), zx.q(*(x0_2 + 0x18)), 0x1a, x0_1, x19_1) __tailcall
