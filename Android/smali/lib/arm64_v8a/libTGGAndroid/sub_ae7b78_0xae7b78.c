// 函数: sub_ae7b78
// 地址: 0xae7b78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *arg2
int32_t x0_2 = CardWhat(*(DomGetContext() + 8), zx.q(x20))
CardsWhereType(0x3e9, 0, 0)
int32_t var_48
int64_t x8 = sx.q(var_48)

if (x8.d != 0)
    void var_cc8
    void* x23_1 = &var_cc8
    int64_t i_1 = x8 << 2
    int64_t i
    
    do
        int32_t x22_1 = *x23_1
        x23_1 += 4
        
        if ((CardIs(*(DomGetContext() + 8), zx.q(x22_1), zx.q(x0_2)) & 1) != 0)
            return 0
        
        i = i_1
        i_1 -= 4
    while (i != 4)

return zx.q(CardWhat(*(DomGetContext() + 8), zx.q(x20)) != *(arg1 + 8) ? 1 : 0)
