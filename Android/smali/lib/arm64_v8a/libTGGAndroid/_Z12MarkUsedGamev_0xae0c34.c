// 函数: _Z12MarkUsedGamev
// 地址: 0xae0c34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardID* entry_x1
int32_t x0 = ThisCard(false, entry_x1)
int32_t x0_3
CardID* x1_1
x0_3, x1_1 = CardWhat(*(DomGetContext() + 8), zx.q(x0))
int32_t x0_4 = ThisCard(false, x1_1)
int32_t x21 = CardWhat(*(DomGetContext() + 8), zx.q(x0_4))
int32_t* x0_8 = DomGetContext()

if (x21 == 0)
    if (*x0_8 != 2)
        x21 = 0
    else
        x21 = CardWhat(*(DomGetContext() + 8), zx.q(x0_8[7]))

int32_t var_28 = x21
int32_t var_30 = 6
return AddOngoing(*(x0_8 + 8), zx.q(x0_8[6]), 8, zx.q(x0_3), 0, *(x0_8 + 0x40), 0, 0xffffffff)
