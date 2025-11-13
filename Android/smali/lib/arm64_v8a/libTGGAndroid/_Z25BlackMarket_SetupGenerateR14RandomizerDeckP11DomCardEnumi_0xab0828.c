// 函数: _Z25BlackMarket_SetupGenerateR14RandomizerDeckP11DomCardEnumi
// 地址: 0xab0828
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RandomPCG* x0 = PregameRNG()
uint64_t x20

if (arg3 s< 1)
    x20 = 0
label_ab088c:
    
    if (x20.d s< arg3 && (RandomizerDeck_IsEmpty(arg1, 0) & 1) == 0)
        int32_t x0_10
        
        do
            int64_t x0_4 = RandomizerDeck_DrawOne(arg1, x0, 0)
            int64_t var_38 = x0_4
            int64_t x0_6 = RandomPileToRandomCard(x0, x0_4 u>> 0x20)
            
            if (BlackMarket_SetupFilter(x0_6) == 0)
                RandomizerDeck_Reject(arg1, &var_38)
            else
                *(arg2 + (sx.q(x20.d) << 2)) = x0_6.d
                x20 = zx.q(x20.d + 1)
            
            x0_10 = RandomizerDeck_IsEmpty(arg1, 0)
            
            if (x20.d s>= arg3)
                break
        while ((x0_10 & 1) == 0)
    
    RandomizerDeck_ReturnRejects(arg1)
else
    x20 = 0
    uint64_t x8_1 = zx.q(arg3)
    
    while (*(arg2 + (x20 << 2)) != 0)
        x20 += 1
        
        if (x8_1 == x20)
            x20 = zx.q(x8_1.d)
            break
    
    if (x20.d u<= 0xe)
        goto label_ab088c

return zx.q(x20.d)
