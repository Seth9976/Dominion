// 函数: _Z9AnyInPlay11DomCardEnum
// 地址: 0xadfcdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(0x3e9, 0, 0)
int32_t var_38
int64_t x8 = sx.q(var_38)
int32_t x0_2

if (x8.d == 0)
    x0_2 = 0
else
    void var_cb8
    void* x21_1 = &var_cb8
    int64_t i_1 = (x8 << 2) - 4
    int64_t i
    
    do
        int32_t x20_1 = *x21_1
        x21_1 += 4
        x0_2 = CardIs(*(DomGetContext() + 8), zx.q(x20_1), zx.q(arg1))
        
        if ((x0_2 & 1) != 0)
            break
        
        i = i_1
        i_1 -= 4
    while (i != 0)

return zx.q(x0_2) & 1
