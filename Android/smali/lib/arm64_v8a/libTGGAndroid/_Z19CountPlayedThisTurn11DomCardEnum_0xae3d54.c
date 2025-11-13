// 函数: _Z19CountPlayedThisTurn11DomCardEnum
// 地址: 0xae3d54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
DomGame* x20 = *(x0 + 8)
int64_t x8 = sx.q(*(x0 + 0x18))
int32_t x21

if (*(x20 + x8 * 0x5a30 + 0x181cc) s< 1)
    x21 = 0
else
    int64_t i = 0
    x21 = 0
    
    do
        int32_t x0_2 = CardWhat(x20, zx.q(*(x20 + x8 * 0x5a30 + 0x19b18 + (i << 2))))
        i += 1
        
        if (x0_2 == arg1)
            x21 += 1
    while (i s< sx.q(*(x20 + x8 * 0x5a30 + 0x181cc)))

return zx.q(x21)
