// 函数: _Z28RandomizerDeck_ReturnRejectsR14RandomizerDeck
// 地址: 0xbf51e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x3e8c) s>= 1)
    int64_t i = 0
    void* __offset(RandomizerDeck, 0x2590) x9_1 = arg1 + 0x2590
    
    do
        int32_t x10_4 = *(x9_1 - 4)
        
        if (x10_4 == 3)
            int64_t x10_6 = sx.q(*(arg1 + 0x2588))
            int32_t x11_3 = *x9_1
            *(arg1 + 0x2588) = x10_6.d + 1
            *(arg1 + (x10_6 << 2) + 0x1908) = x11_3
        else if (x10_4 == 2)
            int64_t x10_1 = sx.q(*(arg1 + 0x1904))
            int32_t x11_1 = *x9_1
            *(arg1 + 0x1904) = x10_1.d + 1
            *(arg1 + (x10_1 << 2) + 0xc84) = x11_1
        else
            if (x10_4 != 1)
                pthread_kill(pthread_self(), 6)
                int64_t x0_1
                Vec2I* x1
                x0_1, x1 = XNoReturn()
                return RollKingdom_AddForcedPiles(x0_1, x1) __tailcall
            
            int64_t x10_5 = sx.q(*(arg1 + 0xc80))
            int32_t x11_2 = *x9_1
            *(arg1 + 0xc80) = x10_5.d + 1
            *(arg1 + (x10_5 << 2)) = x11_2
        
        i += 1
        x9_1 += 8
    while (i s< sx.q(*(arg1 + 0x3e8c)))

*(arg1 + 0x3e8c) = 0
