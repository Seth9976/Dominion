// 函数: _Z14DiscardDeckOnev
// 地址: 0xae2a04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x0_2 = TopDeckCard(*(x0 + 8), zx.q(*(x0 + 0x18)), false)
int32_t var_14 = x0_2

if (x0_2 != 0)
    void* x0_3 = DomGetContext()
    int32_t var_20_1 = 0
    int64_t var_28_1 = 0
    int32_t var_30_1 = 0
    DiscardCards(*(x0_3 + 8), zx.q(*(x0_3 + 0x18)), &var_14, 1, 0x3eb, 0x14, 7, 0)

return zx.q(x0_2)
