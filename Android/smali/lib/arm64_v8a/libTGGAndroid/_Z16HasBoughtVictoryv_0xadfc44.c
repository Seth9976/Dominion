// 函数: _Z16HasBoughtVictoryv
// 地址: 0xadfc44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int64_t x8 = *(x0 + 8)
int64_t x9 = sx.q(*(x0 + 0x18))
int32_t x0_3

if (*(x8 + x9 * 0x5a30 + 0x181e4) s< 1)
    x0_3 = 0
else
    int64_t i = 0
    
    do
        x0_3 = CardIs(*(DomGetContext() + 8), zx.q(*(x8 + x9 * 0x5a30 + 0x1a798 + (i << 2))), 8)
        
        if ((x0_3 & 1) != 0)
            break
        
        i += 1
    while (i s< sx.q(*(x8 + x9 * 0x5a30 + 0x181e4)))

return zx.q(x0_3) & 1
