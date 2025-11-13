// 函数: _Z16HasOccuredGlobalv
// 地址: 0xae09fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0
CardID* x1
x0, x1 = DomGetContext()
DomGame* x19 = *(x0 + 8)
int32_t x0_1 = ThisCard(false, x1)
return HasOngoing(x19, 0xffffffff, 7, CardWhat(*(DomGetContext() + 8), zx.q(x0_1)), 0) __tailcall
