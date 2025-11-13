// 函数: _Z20HasOccuredThisWindowv
// 地址: 0xae0bd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x0_1
CardID* x1
x0_1, x1 = DomContextGetWindow()
DomGame* x20 = *(x0 + 8)
int32_t x19_1 = *(x0 + 0x18)
int32_t x0_2 = ThisCard(false, x1)
return HasOngoing(x20, zx.q(x19_1), 7, CardWhat(*(DomGetContext() + 8), zx.q(x0_2)), sx.q(x0_1))
    __tailcall
