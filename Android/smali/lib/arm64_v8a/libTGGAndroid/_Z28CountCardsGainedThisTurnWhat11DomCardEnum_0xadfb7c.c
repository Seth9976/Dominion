// 函数: _Z28CountCardsGainedThisTurnWhat11DomCardEnum
// 地址: 0xadfb7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int64_t x8 = *(x0 + 8)
int64_t x9 = sx.q(*(x0 + 0x18))
int32_t x21

if (*(x8 + x9 * 0x5a30 + 0x181a4) s< 1)
    x21 = 0
else
    int64_t i = 0
    x21 = 0
    
    do
        int32_t x0_3 = CardIs(*(DomGetContext() + 8), 
            zx.q(*(x8 + x9 * 0x5a30 + (i << 2) + 0x18218)), zx.q(arg1))
        x8 = *(x0 + 8)
        x9 = sx.q(*(x0 + 0x18))
        i += 1
        x21 += x0_3 & 1
    while (i s< sx.q(*(x8 + x9 * 0x5a30 + 0x181a4)))

return zx.q(x21)
