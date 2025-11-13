// 函数: _Z16Start_DoubleDeckv
// 地址: 0xa37bb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int64_t result = CardsWhere(0x3eb)
int32_t var_38
int64_t x8 = sx.q(var_38)

if (x8.d != 0)
    void var_cb8
    void* x20_1 = &var_cb8
    int64_t i_1 = x8 << 2
    int64_t i
    
    do
        uint64_t x0_1 = zx.q(*x20_1)
        x20_1 += 4
        int32_t x0_2 = CardWhat(x0_1)
        result = CardCreate(*(x0 + 8), zx.q(x0_2), 0x3eb, zx.q(*(x0 + 0x18)), 0)
        i = i_1
        i_1 -= 4
    while (i != 4)

return result
