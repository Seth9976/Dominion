// 函数: _Z26RollKingdom_AddRandomCardsRK14DomSetupConfig
// 地址: 0xbfa214
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RandomizerDeck* x19 = *(gPregameContext + 0x18)

if (*(gPregameContext + 4) s<= 9)
    DomSetupConfig const& x28_1 = arg1
    int32_t var_6c_1 = 0
    
    do
        RollKingdom_AddRequiredConditionalCards(x28_1)
        
        if (*(gPregameContext + 4) s> 9)
            break
        
        int32_t x1_1 = *(x19 + 0xc80)
        RandomPCG* x0_1 = *(gPregameContext + 0x10)
        uint64_t x21_1
        int64_t fp_1
        void* x8_3
        
        if (x1_1 == 0)
            int32_t x1_2 = *(x19 + 0x1904)
            
            if (x1_2 == 0)
                fp_1 = 0
                x21_1 = 0
            else
                x8_3 = x19 + 0xc84 + (sx.q(RandomInt(x0_1, x1_2)) << 2)
                x21_1 = zx.q(*x8_3)
                int64_t x9_5 = sx.q(*(x19 + 0x1904)) - 1
                *(x19 + 0x1904) = x9_5.d
                fp_1 = 2
                *x8_3 = *(x19 + 0xc84 + (x9_5 << 2))
        else
            x8_3 = x19 + (sx.q(RandomInt(x0_1, x1_1)) << 2)
            x21_1 = zx.q(*x8_3)
            fp_1 = 1
            int64_t x9_2 = sx.q(*(x19 + 0xc80)) - 1
            *(x19 + 0xc80) = x9_2.d
            *x8_3 = *(x19 + (x9_2 << 2))
        int32_t i = *gPregameContext
        int32_t x8_5 = (x21_1.d + (i << 0x10)) s% 0x3e5
        int32_t* x9_11 = *(&data_1838a20 + (sx.q(x8_5) << 3))
        uint64_t x27_1
        
        if (x9_11 != 0)
            while (*x9_11 != x21_1.d || x9_11[1] != i)
                x9_11 = *(x9_11 + 0x10)
                
                if (x9_11 == 0)
                    goto label_bfa330
            
            x27_1 = x21_1 << 0x20
            
            if ((*(*(x9_11 + 8) + 0xc8) & 0x9407f000400) != 0)
                goto label_bfa378
            
            goto label_bfa3e0
        
    label_bfa330:
        DomDefGetSlow(zx.q(x21_1.d), zx.q(i))
        int32_t* x0_5 = malloc(0x18)
        int64_t x8_6 = sx.q(x8_5) << 3
        int64_t x9_12 = *(&data_1838a20 + x8_6)
        *x0_5 = x21_1.d
        x0_5[1] = i
        *(&data_1838a20 + x8_6) = x0_5
        *(x0_5 + 0x10) = x9_12
        void* x0_7 = DomDefGetSlow(zx.q(x21_1.d), zx.q(i))
        *(x0_5 + 8) = x0_7
        x27_1 = x21_1 << 0x20
        
        if ((*(x0_7 + 0xc8) & 0x9407f000400) == 0)
        label_bfa3e0:
            DomExpSetup* x23_2 = *(gPregameContext + 0x28) + 0x9c8
            int32_t var_68
            int32_t x0_13 = DomCardExp(zx.q(x21_1.d), &var_68)
            void* x0_15 = FindExpansionSetup(x23_2, zx.q(x0_13))
            
            if (x0_15 != 0)
                int32_t x8_12 = *(x0_15 + 0xc)
                
                if (*(x0_15 + 8) == *V2I0 && x8_12 == *(V2I0 + 4))
                    goto label_bfa498
                
                uint64_t i_3 = zx.q(*(gPregameContext + 4))
                int32_t x25_1
                
                if (i_3.d s< 1)
                    x25_1 = 0
                else
                    int32_t* x20_2 = *(gPregameContext + 0x20)
                    x25_1 = 0
                    uint64_t i_1
                    
                    do
                        uint64_t x0_16 = zx.q(*x20_2)
                        x20_2 = &x20_2[1]
                        int32_t var_64
                        
                        if (DomCardExp(x0_16, &var_64) == x0_13)
                            x25_1 += 1
                        
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                    x8_12 = *(x0_15 + 0xc)
                
                x28_1 = arg1
                
                if (x25_1 s< x8_12 || (var_6c_1 & 1) != 0)
                    goto label_bfa498
                
                goto label_bfa4b4
            
        label_bfa498:
            
            if ((RollKingdom_AddCard(zx.q(x21_1.d)) & 1) == 0)
                goto label_bfa4b4
            
            if ((*(x19 + 0x1904) | *(x19 + 0xc80)) == 0)
                RandomizerDeck_ReturnRejects(x19)
                var_6c_1 = 1
        else
        label_bfa378:
            
            if ((PregameMeetsLandscapeCriteria(zx.q(x21_1.d)) & 1) == 0)
            label_bfa4b4:
                int64_t x8_16 = sx.q(*(x19 + 0x3e8c))
                *(x19 + 0x3e8c) = x8_16.d + 1
                *(x19 + (x8_16 << 3) + 0x258c) = x27_1 | fp_1
                
                if ((*(x19 + 0x1904) | *(x19 + 0xc80)) == 0)
                    RandomizerDeck_ReturnRejects(x19)
                    var_6c_1 = 1
            else
                RollKingdom_AddLandscape(zx.q(x21_1.d), 0)
                
                if ((*(x19 + 0x1904) | *(x19 + 0xc80)) == 0)
                    RandomizerDeck_ReturnRejects(x19)
                    var_6c_1 = 1
    while (*(gPregameContext + 4) s< 0xa)

RandomizerDeck_ReturnRejects(x19)

if (*(gPregameContext + 4) s<= 9)
    while (true)
        int32_t x8_24 = *(x19 + 0xc80)
        int32_t x1_8 = *(x19 + 0x1904)
        
        if ((x1_8 | x8_24) == 0)
            break
        
        RandomPCG* x0_22 = *(gPregameContext + 0x10)
        uint64_t x20_3
        int64_t fp_2
        
        if (x8_24 == 0)
            if (x1_8 == 0)
                break
            
            void* x8_26 = x19 + 0xc84 + (sx.q(RandomInt(x0_22, x1_8)) << 2)
            x20_3 = zx.q(*x8_26)
            int64_t x9_27 = sx.q(*(x19 + 0x1904)) - 1
            *(x19 + 0x1904) = x9_27.d
            fp_2 = 2
            *x8_26 = *(x19 + 0xc84 + (x9_27 << 2))
            
            if (x20_3.d == 0)
                break
        else
            int32_t* x8_25 = x19 + (sx.q(RandomInt(x0_22, x8_24)) << 2)
            x20_3 = zx.q(*x8_25)
            fp_2 = 1
            int64_t x9_23 = sx.q(*(x19 + 0xc80)) - 1
            *(x19 + 0xc80) = x9_23.d
            *x8_25 = *(x19 + (x9_23 << 2))
            
            if (x20_3.d == 0)
                break
        
        int32_t i_2 = *gPregameContext
        int32_t x8_28 = (x20_3.d + (i_2 << 0x10)) s% 0x3e5
        int32_t* x9_34 = *(&data_1838a20 + (sx.q(x8_28) << 3))
        void* x0_28
        
        if (x9_34 != 0)
            while (*x9_34 != x20_3.d || x9_34[1] != i_2)
                x9_34 = *(x9_34 + 0x10)
                
                if (x9_34 == 0)
                    goto label_bfa5f8
            
            x0_28 = *(x9_34 + 8)
        else
        label_bfa5f8:
            DomDefGetSlow(zx.q(x20_3.d), zx.q(i_2))
            int32_t* x0_26 = malloc(0x18)
            int64_t x8_29 = sx.q(x8_28) << 3
            int64_t x9_35 = *(&data_1838a20 + x8_29)
            *x0_26 = x20_3.d
            x0_26[1] = i_2
            *(&data_1838a20 + x8_29) = x0_26
            *(x0_26 + 0x10) = x9_35
            x0_28 = DomDefGetSlow(zx.q(x20_3.d), zx.q(i_2))
            *(x0_26 + 8) = x0_28
        
        if ((*(x0_28 + 0xc8) & 0x9407f000400) != 0)
            int64_t x8_21 = sx.q(*(x19 + 0x3e8c))
            *(x19 + 0x3e8c) = x8_21.d + 1
            *(x19 + (x8_21 << 3) + 0x258c) = x20_3 << 0x20 | fp_2
            
            if (*(gPregameContext + 4) s>= 0xa)
                break
        else
            RollKingdom_AddCard(zx.q(x20_3.d))
            
            if (*(gPregameContext + 4) s>= 0xa)
                break

return RandomizerDeck_ReturnRejects(x19)
