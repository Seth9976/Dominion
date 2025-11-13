// 函数: _Z10RevealThisv
// 地址: 0xae3f14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardID* entry_x1
int32_t x0 = ThisCard(false, entry_x1)
int32_t var_ca8
memset(&var_ca8 | 4, 0, 0xc7c)
GameAssert(true)
int32_t var_28 = 1
var_ca8 = x0
void* x0_2 = DomGetContext()
return RevealTemp(*(x0_2 + 8), &var_ca8, 0x3ea, *(x0_2 + 0x40), zx.q(*(x0_2 + 0x48)), 0, 0)
