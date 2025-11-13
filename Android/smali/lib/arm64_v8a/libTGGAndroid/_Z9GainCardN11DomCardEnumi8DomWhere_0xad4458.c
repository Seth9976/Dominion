// 函数: _Z9GainCardN11DomCardEnumi8DomWhere
// 地址: 0xad4458
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 

int32_t i_1 = arg2
int32_t x21_1 = arg1.d
int32_t i

do
    void* x0 = DomGetContext()
    int32_t x0_2 = BoardPileSource(*(x0 + 8), zx.q(x21_1), false)
    int32_t x0_4 = BoardPileWhere(*(x0 + 8), zx.q(x0_2))
    arg1 = BoardPileTop(*(x0 + 8), zx.q(x0_4))
    
    if (arg1.d != 0)
        void* x0_6 = DomGetContext()
        int32_t var_40_1 = 4
        GainCard(*(x0_6 + 8), zx.q(*(x0_6 + 0x18)), zx.q(arg1.d), zx.q(arg3), 0, 0x476, 0, 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
