// 函数: _Z21MarkOccuredGameGlobalv
// 地址: 0xae0a48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0
CardID* x1
x0, x1 = DomGetContext()
DomGame* x19 = *(x0 + 8)
int32_t x0_1 = ThisCard(false, x1)
int32_t var_28 = 0
int32_t var_30 = 0
return AddOngoing(x19, 0xffffffff, 7, zx.q(CardWhat(*(DomGetContext() + 8), zx.q(x0_1))), 0, 0, 0, 
    0xffffffff)
