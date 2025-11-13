// 函数: _Z12TrashDeckOnev
// 地址: 0xae2a78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x0_2 = TopDeckCard(*(x0 + 8), zx.q(*(x0 + 0x18)), false)

if (x0_2 != 0)
    void* x0_3 = DomGetContext()
    TrashCard(*(x0_3 + 8), zx.q(*(x0_3 + 0x18)), zx.q(x0_2), 0x3eb, 0x13, 0x20)

return zx.q(x0_2)
