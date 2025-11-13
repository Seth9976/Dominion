// 函数: _Z9IsPodIconR6DomGfx
// 地址: 0xaf3dc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x2c))

if (x8.d u> 8)
    pthread_kill(pthread_self(), 6)
    DomGfx* x0_11
    DomGfx** x1_4
    int32_t x2_1
    DomGfx** x3_1
    int32_t* x4_1
    int32_t x5_1
    x0_11, x1_4, x2_1, x3_1, x4_1, x5_1 = XNoReturn()
    return ZoomAssociatedIcons(x0_11, x1_4, x2_1, x3_1, x4_1, x5_1) __tailcall

switch (x8)
    case 0
        if ((CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)), 0x4000000) & 1) == 0)
            return CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)), 0x40000000) __tailcall
        
        return 1
    case 1, 2, 5
        return 0
    case 3
        if ((IsBoardPile(zx.q(*(arg1 + 0x5c))) & 1) != 0)
            return 0
        
        int32_t x8_2 = *(arg1 + 0x5c)
        
        if (x8_2 - 0x3ea u< 8 || x8_2 == 0x474)
            return 0
        
        if (x8_2 == 0x3e9)
            return zx.q(*(arg1 + 0x58) != *(gDomClient + 0x205c4) ? 1 : 0)
        
        return 1
    case 4, 6, 7, 8
        return 1
