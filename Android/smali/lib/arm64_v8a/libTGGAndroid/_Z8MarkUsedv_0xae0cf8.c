// 函数: _Z8MarkUsedv
// 地址: 0xae0cf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardID* entry_x1
int32_t x0 = ThisCard(false, entry_x1)
int32_t x0_3 = CardWhat(*(DomGetContext() + 8), zx.q(x0))
int32_t* x0_4 = DomGetContext()
int32_t x0_5 = 0

if (*x0_4 == 2)
    x0_5 = CardWhat(*(DomGetContext() + 8), zx.q(x0_4[7]))

int32_t var_28 = x0_5
int32_t var_30 = 0
return AddOngoing(*(x0_4 + 8), zx.q(x0_4[6]), 8, zx.q(x0_3), 1, *(x0_4 + 0x40), 0, 0xffffffff)
