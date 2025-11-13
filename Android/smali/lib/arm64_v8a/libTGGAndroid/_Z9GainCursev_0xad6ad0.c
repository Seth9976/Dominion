// 函数: _Z9GainCursev
// 地址: 0xad6ad0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x0_2 = BoardPileSource(*(x0 + 8), 0x100, false)
int32_t x0_4 = BoardPileWhere(*(x0 + 8), zx.q(x0_2))
int32_t x0_6 = BoardPileTop(*(x0 + 8), zx.q(x0_4))

if (x0_6 != 0)
    void* x0_7 = DomGetContext()
    int32_t var_20_1 = 4
    
    if ((GainCard(*(x0_7 + 8), zx.q(*(x0_7 + 0x18)), zx.q(x0_6), 0x476, 0, 0x476, 0, 0) & 1) == 0)
        return 0

return zx.q(x0_6)
