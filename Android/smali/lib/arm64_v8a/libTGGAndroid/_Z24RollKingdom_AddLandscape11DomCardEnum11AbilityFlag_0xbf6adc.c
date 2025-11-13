// 函数: _Z24RollKingdom_AddLandscape11DomCardEnum11AbilityFlag
// 地址: 0xbf6adc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1

if ((arg2.d & 0x20000) != 0)
    void* x8_7 = *(gPregameContext + 0x20)
    void* x8_8
    
    if (*(x8_7 + 0x15c) == 0)
        x8_8 = x8_7 + 0x15c
    else if (*(x8_7 + 0x160) == 0)
        x8_8 = x8_7 + 0x160
    else if (*(x8_7 + 0x164) == 0)
        x8_8 = x8_7 + 0x164
    else if (*(x8_7 + 0x168) == 0)
        x8_8 = x8_7 + 0x168
    else
        if (*(x8_7 + 0x16c) != 0)
            pthread_kill(pthread_self(), 6)
            DomCardDef* x0_8
            ExtraPileSlot* x1_2
            AbilityFlag* x2
            bool (** x3)(DomCardEnum)
            x0_8, x1_2, x2, x3 = XNoReturn()
            return HasRandomExtraPileSetup(x0_8, x1_2, x2, x3) __tailcall
        
        x8_8 = x8_7 + 0x16c
    
    *x8_8 = x19
else
    int32_t x20_1 = *gPregameContext
    int32_t x8_4 = (x19 + (x20_1 << 0x10)) s% 0x3e5
    int32_t* x9 = *(&data_1838a20 + (sx.q(x8_4) << 3))
    
    if (x9 != 0)
        while (*x9 != x19 || x9[1] != x20_1)
            x9 = *(x9 + 0x10)
            
            if (x9 == 0)
                goto label_bf6b44
    else
    label_bf6b44:
        DomDefGetSlow(zx.q(x19), zx.q(x20_1))
        int32_t* x0_1 = malloc(0x18)
        int64_t x8_5 = sx.q(x8_4) << 3
        int64_t x9_1 = *(&data_1838a20 + x8_5)
        *x0_1 = x19
        x0_1[1] = x20_1
        *(&data_1838a20 + x8_5) = x0_1
        *(x0_1 + 0x10) = x9_1
        *(x0_1 + 8) = DomDefGetSlow(zx.q(x19), zx.q(x20_1))
    
    int64_t x8_6 = sx.q(*(gPregameContext + 8))
    
    if (x8_6.d s> 3)
        return 0
    
    void* x10_4 = *(gPregameContext + 0x20)
    *(gPregameContext + 8) = x8_6.d + 1
    int64_t x8_9 = x8_6 * 0x3c
    *(x10_4 + x8_9 + 0x28) = x19
    ClearReferenceCards(*(gPregameContext + 0x20) + x8_9 + 0x2c)
    arg2 = 0

RollKingdom_SetupPile(zx.q(x19), arg2)
return 1
