// 函数: _Z26RollKingdom_AddForcedPiles12DomExpansionRK5Vec2I
// 地址: 0xbf5298
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg2
int32_t x8_1 = x8 & not.d(x8 s>> 0x1f)
int32_t x9_1 = 0xa - *(gPregameContext + 4)
int32_t x25

x25 = x8_1 s< x9_1 ? x8_1 : x9_1

if (x25 == 0)
    return 

RandomizerDeck* x20_1 = *(gPregameContext + 0x18)

while (true)
    int32_t x8_4 = *(x20_1 + 0x2588)
    uint64_t x21_1
    int64_t x26_1
    RandomPCG* x0
    int32_t x1
    int32_t* x8_5
    
    if (x8_4 == 0)
        x1 = *(x20_1 + 0xc80)
        int32_t x8_6 = *(x20_1 + 0x1904)
        
        if ((x8_6 | x1) == 0)
            break
        
        x0 = *(gPregameContext + 0x10)
        
        if (x1 != 0)
            goto label_bf5384
        
        if (x8_6 == 0)
            x26_1 = 0
            x21_1 = 0
        else
            x8_5 = x20_1 + 0xc84 + (sx.q(RandomInt(x0, x8_6)) << 2)
            x21_1 = zx.q(*x8_5)
            int64_t x9_18 = sx.q(*(x20_1 + 0x1904)) - 1
            *(x20_1 + 0x1904) = x9_18.d
            x26_1 = 2
            *x8_5 = *(x20_1 + 0xc84 + (x9_18 << 2))
    else
        x1 = *(x20_1 + 0xc80)
        x0 = *(gPregameContext + 0x10)
        
        if (x1 != 0)
        label_bf5384:
            x8_5 = x20_1 + (sx.q(RandomInt(x0, x1)) << 2)
            x21_1 = zx.q(*x8_5)
            x26_1 = 1
            int64_t x9_9 = sx.q(*(x20_1 + 0xc80)) - 1
            *(x20_1 + 0xc80) = x9_9.d
            *x8_5 = *(x20_1 + (x9_9 << 2))
        else
            x8_5 = x20_1 + 0x1908 + (sx.q(RandomInt(x0, x8_4)) << 2)
            x21_1 = zx.q(*x8_5)
            x26_1 = 3
            int64_t x9_5 = sx.q(*(x20_1 + 0x2588)) - 1
            *(x20_1 + 0x2588) = x9_5.d
            *x8_5 = *(x20_1 + 0x1908 + (x9_5 << 2))
    int32_t i = *gPregameContext
    int32_t x8_8 = (x21_1.d + (i << 0x10)) s% 0x3e5
    int32_t* x9_15 = *(&data_1838a20 + (sx.q(x8_8) << 3))
    
    if (x9_15 != 0)
        while (*x9_15 != x21_1.d || x9_15[1] != i)
            x9_15 = *(x9_15 + 0x10)
            
            if (x9_15 == 0)
                goto label_bf53e4
        
        if ((*(*(x9_15 + 8) + 0xc8) & 0x9407f000400) == 0)
            goto label_bf5460
    else
    label_bf53e4:
        DomDefGetSlow(zx.q(x21_1.d), zx.q(i))
        int32_t* x0_4 = malloc(0x18)
        int64_t x8_9 = sx.q(x8_8) << 3
        int64_t x9_16 = *(&data_1838a20 + x8_9)
        *x0_4 = x21_1.d
        x0_4[1] = i
        *(&data_1838a20 + x8_9) = x0_4
        *(x0_4 + 0x10) = x9_16
        void* x0_6 = DomDefGetSlow(zx.q(x21_1.d), zx.q(i))
        *(x0_4 + 8) = x0_6
        
        if ((*(x0_6 + 0xc8) & 0x9407f000400) == 0)
        label_bf5460:
            int32_t var_64
            
            if (DomCardExp(zx.q(x21_1.d), &var_64) == arg1.d)
                RollKingdom_AddCard(zx.q(x21_1.d))
                x25 -= 1
                
                if (x25 == 0)
                    break
                
                continue
    
    int64_t x8_2 = sx.q(*(x20_1 + 0x3e8c))
    *(x20_1 + 0x3e8c) = x8_2.d + 1
    *(x20_1 + (x8_2 << 3) + 0x258c) = x21_1 << 0x20 | x26_1
    
    if (x25 == 0)
        break

RandomizerDeck_ReturnRejects(x20_1)
