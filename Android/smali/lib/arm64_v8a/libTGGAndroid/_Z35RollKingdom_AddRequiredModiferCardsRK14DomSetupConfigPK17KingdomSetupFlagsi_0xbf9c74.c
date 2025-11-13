// 函数: _Z35RollKingdom_AddRequiredModiferCardsRK14DomSetupConfigPK17KingdomSetupFlagsi
// 地址: 0xbf9c74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomSetupConfig const& var_68 = arg1

if (arg3 s< 1)
    return 

KingdomSetupFlags const* x24_1 = arg2
int64_t i = 0
RandomizerDeck* x21_1 = *(gPregameContext + 0x18)

do
    int32_t x8_3 = *(gPregameContext + 4)
    
    if (x8_3 == 0xa)
        break
    
    int32_t x22_1 = *(x24_1 + (i << 2))
    
    if ((*(var_68 + 0x16f4) & x22_1) != 0)
        int32_t x23_1
        
        if (x8_3 s< 1)
            x23_1 = 0
            
            if (*(gPregameContext + 8) s>= 1)
            label_bf9d50:
                int64_t j = 0
                int64_t x20_1 = 0x28
                
                do
                    if ((CardMeetsFlag(zx.q(*gPregameContext), 
                            zx.q(*(*(gPregameContext + 0x20) + x20_1)), zx.q(x22_1)).d & 1) != 0)
                        goto label_bf9ccc
                    
                    j += 1
                    x20_1 += 0x3c
                while (j s< sx.q(*(gPregameContext + 8)))
        else
            int64_t j_1 = 0
            
            do
                arg1 = CardMeetsFlag(zx.q(*gPregameContext), 
                    zx.q(*(*(gPregameContext + 0x20) + (j_1 << 2))), zx.q(x22_1))
                x23_1 = arg1.d
                
                if ((arg1.d & 1) != 0)
                    break
                
                j_1 += 1
            while (j_1 s< sx.q(*(gPregameContext + 4)))
            
            if (*(gPregameContext + 8) s>= 1)
                goto label_bf9d50
        
        if ((x23_1 & 1) == 0)
            int32_t x0_7
            
            do
                int32_t x8_12 = *(x21_1 + 0xc80)
                int32_t x1_2 = *(x21_1 + 0x1904)
                
                if ((x1_2 | x8_12) == 0)
                    break
                
                RandomPCG* x0_3 = *(gPregameContext + 0x10)
                int64_t x19_1
                uint64_t x23_2
                void* x8_13
                
                if (x8_12 != 0)
                    x8_13 = x21_1 + (sx.q(RandomInt(x0_3, x8_12)) << 2)
                    x23_2 = zx.q(*x8_13)
                    x19_1 = 1
                    int64_t x9_6 = sx.q(*(x21_1 + 0xc80)) - 1
                    *(x21_1 + 0xc80) = x9_6.d
                    *x8_13 = *(x21_1 + (x9_6 << 2))
                else if (x1_2 == 0)
                    x19_1 = 0
                    x23_2 = 0
                else
                    x8_13 = x21_1 + 0xc84 + (sx.q(RandomInt(x0_3, x1_2)) << 2)
                    x23_2 = zx.q(*x8_13)
                    int64_t x9_9 = sx.q(*(x21_1 + 0x1904)) - 1
                    *(x21_1 + 0x1904) = x9_9.d
                    x19_1 = 2
                    *x8_13 = *(x21_1 + 0xc84 + (x9_9 << 2))
                x0_7 = CardMeetsFlag(zx.q(*gPregameContext), zx.q(x23_2.d), zx.q(x22_1))
                
                if ((x0_7 & 1) == 0)
                label_bf9d8c:
                    int64_t x8_10 = sx.q(*(x21_1 + 0x3e8c))
                    *(x21_1 + 0x3e8c) = x8_10.d + 1
                    *(x21_1 + (x8_10 << 3) + 0x258c) = x23_2 << 0x20 | x19_1
                else
                    int32_t j_2 = *gPregameContext
                    int32_t x8_15 = (x23_2.d + (j_2 << 0x10)) s% 0x3e5
                    int32_t* x9_15 = *(&data_1838a20 + (sx.q(x8_15) << 3))
                    void* x0_11
                    
                    if (x9_15 != 0)
                        while (*x9_15 != x23_2.d || x9_15[1] != j_2)
                            x9_15 = *(x9_15 + 0x10)
                            
                            if (x9_15 == 0)
                                goto label_bf9e80
                        
                        x0_11 = *(x9_15 + 8)
                    else
                    label_bf9e80:
                        DomDefGetSlow(zx.q(x23_2.d), zx.q(j_2))
                        int32_t* x0_9 = malloc(0x18)
                        int64_t x8_16 = sx.q(x8_15) << 3
                        int64_t x9_16 = *(&data_1838a20 + x8_16)
                        *x0_9 = x23_2.d
                        x0_9[1] = j_2
                        *(&data_1838a20 + x8_16) = x0_9
                        *(x0_9 + 0x10) = x9_16
                        x0_11 = DomDefGetSlow(zx.q(x23_2.d), zx.q(j_2))
                        *(x0_9 + 8) = x0_11
                    
                    uint64_t x0_12 = zx.q(x23_2.d)
                    
                    if ((*(x0_11 + 0xc8) & 0x9407f000400) == 0)
                        if ((RollKingdom_AddCard(x0_12) & 1) == 0)
                            goto label_bf9d8c
                    else
                        RollKingdom_AddLandscape(x0_12, 0)
            while ((x0_7 & 1) == 0)
            RandomizerDeck_ReturnRejects(x21_1)
            x24_1 = arg2
    
label_bf9ccc:
    i += 1
while (i != zx.q(arg3))
