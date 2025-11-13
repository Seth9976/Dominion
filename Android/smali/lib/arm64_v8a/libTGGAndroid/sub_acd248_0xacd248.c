// 函数: sub_acd248
// 地址: 0xacd248
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = ThisCard(false, nullptr)
int32_t x0_1 = CurrentTurnWho()
char x8 = 0

if (CardOwner(zx.q(x0)) == x0_1)
    if ((CardIsWhere(zx.q(x0), 0x3e9) & 1) == 0)
        return 0
    
    void* x0_6 = DomGetContext()
    int64_t x8_1 = *(x0_6 + 8)
    int64_t x9_1 = sx.q(*(x0_6 + 0x18))
    
    if (*(x8_1 + x9_1 * 0x5a30 + 0x181ec) s< 1)
        return 1
    
    int64_t i = 0
    int32_t x0_8
    
    do
        x0_8 = CardIs(zx.q(*(x8_1 + x9_1 * 0x5a30 + 0x1b418 + (i << 2))), 8)
        
        if ((x0_8 & 1) != 0)
            break
        
        i += 1
    while (i s< sx.q(*(x8_1 + x9_1 * 0x5a30 + 0x181ec)))
    
    x8 = x0_8.b ^ 1

return x8 & 1
