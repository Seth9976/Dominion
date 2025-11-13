// 函数: _Z32RollKingdom_LandscapeTargetSetupR10DomKingdom
// 地址: 0xbfaa94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gPregameContext + 8) s< 1)
    return 

RandomPCG* x8_1 = *(gPregameContext + 0x10)
DomKingdom& x19_1 = arg1
int32_t i = 0

do
    int32_t x22_1 = *(x19_1 + muls.dp.d(i, 0x3c) + 0x2c)
    
    if (x22_1 != 0x106)
        if ((KingdomHasCard(x19_1, zx.q(x22_1), false).d & 1) == 0)
            ClearReferenceCards(x19_1 + muls.dp.d(i, 0x3c) + 0x2c)
            x22_1 = *(x19_1 + muls.dp.d(i, 0x3c) + 0x2c)
        
        if (x22_1 == 0)
            void* fp_1 = x19_1 + muls.dp.d(i, 0x3c) + 0x28
            int32_t x22_2 = *fp_1
            int32_t x23_1 = *gPregameContext
            int32_t x8_4 = (x22_2 + (x23_1 << 0x10)) s% 0x3e5
            int32_t* x9_5 = *(&data_1838a20 + (sx.q(x8_4) << 3))
            
            if (x9_5 != 0)
                while (*x9_5 != x22_2 || x9_5[1] != x23_1)
                    x9_5 = *(x9_5 + 0x10)
                    
                    if (x9_5 == 0)
                        goto label_bfab78
                
                if ((zx.d(*(*(x9_5 + 8) + 0xcd)) & 1) == 0)
                    goto label_bfabbc
                
                goto label_bfac84
            
        label_bfab78:
            DomDefGetSlow(zx.q(x22_2), zx.q(x23_1))
            int32_t* x0_3 = malloc(0x18)
            int64_t x8_5 = sx.q(x8_4) << 3
            int64_t x9_6 = *(&data_1838a20 + x8_5)
            *x0_3 = x22_2
            x0_3[1] = x23_1
            *(&data_1838a20 + x8_5) = x0_3
            *(x0_3 + 0x10) = x9_6
            void* x0_5 = DomDefGetSlow(zx.q(x22_2), zx.q(x23_1))
            *(x0_3 + 8) = x0_5
            int128_t v0_1
            int128_t v1_1
            int128_t v2_1
            int128_t v3_1
            
            if ((zx.d(*(x0_5 + 0xcd)) & 1) != 0)
            label_bfac84:
                arg1, v0_1, v1_1, v2_1, v3_1 = RandomTraitPile(x8_1, x19_1, zx.q(x22_2))
                *(x19_1 + muls.dp.d(i, 0x3c) + 0x2c) = arg1.d
                
                if (arg1.d == 0)
                    goto label_bfadf8
            else
            label_bfabbc:
                int32_t x23_2 = *gPregameContext
                int32_t x8_8 = (x22_2 + (x23_2 << 0x10)) s% 0x3e5
                int32_t* x9_11 = *(&data_1838a20 + (sx.q(x8_8) << 3))
                int32_t x8_10
                
                if (x9_11 != 0)
                    while (*x9_11 != x22_2 || x9_11[1] != x23_2)
                        x9_11 = *(x9_11 + 0x10)
                        
                        if (x9_11 == 0)
                            goto label_bfac04
                    
                    arg1 = *(x9_11 + 8)
                    x8_10 = *(arg1 + 0xe0)
                    
                    if (x8_10 != 0)
                        goto label_bfacc0
                else
                label_bfac04:
                    DomDefGetSlow(zx.q(x22_2), zx.q(x23_2))
                    int32_t* x0_7 = malloc(0x18)
                    int64_t x8_9 = sx.q(x8_8) << 3
                    int64_t x9_12 = *(&data_1838a20 + x8_9)
                    *x0_7 = x22_2
                    x0_7[1] = x23_2
                    *(&data_1838a20 + x8_9) = x0_7
                    *(x0_7 + 0x10) = x9_12
                    arg1 = DomDefGetSlow(zx.q(x22_2), zx.q(x23_2))
                    *(x0_7 + 8) = arg1
                    x8_10 = *(arg1 + 0xe0)
                    
                    if (x8_10 != 0)
                    label_bfacc0:
                        int64_t x8_12
                        
                        if (x8_10 != 0xe)
                            int32_t x8_13 = *(arg1 + 0x1a0)
                            
                            if (x8_13 != 0)
                                if (x8_13 == 0xe)
                                    x8_12 = 1
                                    goto label_bfad78
                                
                                int32_t x8_14 = *(arg1 + 0x260)
                                
                                if (x8_14 != 0)
                                    if (x8_14 == 0xe)
                                        x8_12 = 2
                                        goto label_bfad78
                                    
                                    int32_t x8_15 = *(arg1 + 0x320)
                                    
                                    if (x8_15 != 0)
                                        if (x8_15 == 0xe)
                                            x8_12 = 3
                                            goto label_bfad78
                                        
                                        int32_t x8_16 = *(arg1 + 0x3e0)
                                        
                                        if (x8_16 != 0)
                                            if (x8_16 == 0xe)
                                                x8_12 = 4
                                                goto label_bfad78
                                            
                                            int32_t x8_17 = *(arg1 + 0x4a0)
                                            
                                            if (x8_17 != 0)
                                                if (x8_17 == 0xe)
                                                    x8_12 = 5
                                                    goto label_bfad78
                                                
                                                int32_t x8_18 = *(arg1 + 0x560)
                                                
                                                if (x8_18 != 0)
                                                    if (x8_18 == 0xe)
                                                        x8_12 = 6
                                                        goto label_bfad78
                                                    
                                                    if (*(arg1 + 0x620) == 0xe)
                                                        x8_12 = 7
                                                        goto label_bfad78
                        else
                            x8_12 = 0
                        label_bfad78:
                            int64_t x23_3 = *(arg1 + x8_12 * 0xc0 + 0x108)
                            int32_t var_e0[0x20]
                            arg1, v0_1, v1_1, v2_1, v3_1 = KingdomSupplyPiles(x19_1, &var_e0)
                            uint64_t x22_3 = zx.q(arg1.d)
                            
                            if (arg1.d s>= 1)
                                int32_t j = 0
                                
                                do
                                    arg1, v0_1, v1_1, v2_1, v3_1 = x23_3(zx.q(var_e0[sx.q(j)]))
                                    
                                    if ((arg1.d & 1) == 0)
                                        x22_3 = sx.q(x22_3.d) - 1
                                        int64_t j_1 = sx.q(j)
                                        j -= 1
                                        var_e0[j_1] = var_e0[x22_3]
                                    
                                    j += 1
                                while (j s< x22_3.d)
                            
                            if (x22_3.d == 0)
                                *(x19_1 + muls.dp.d(i, 0x3c) + 0x2c) = 0
                            label_bfadf8:
                                i -= 1
                                int64_t x8_25 = sx.q(*(gPregameContext + 8)) - 1
                                *(gPregameContext + 8) = x8_25.d
                                void* x8_26 = x19_1 + x8_25 * 0x3c
                                v1_1 = *(x8_26 + 0x48)
                                v2_1 = *(x8_26 + 0x38)
                                v3_1 = *(x8_26 + 0x28)
                                *(fp_1 + 0x2c) = *(x8_26 + 0x54)
                                *(fp_1 + 0x10) = v2_1
                                *(fp_1 + 0x20) = v1_1
                                *fp_1 = v3_1
                                *(x8_26 + 0x28) = 0
                            else
                                arg1, v0_1, v1_1, v2_1, v3_1 = RandomInt(x8_1, x22_3.d)
                                int32_t x8_23 = var_e0[sx.q(arg1.d)]
                                *(x19_1 + muls.dp.d(i, 0x3c) + 0x2c) = x8_23
                                
                                if (x8_23 == 0)
                                    goto label_bfadf8
    
    i += 1
while (i s< *(gPregameContext + 8))
