// 函数: _Z12PlayerScoresR7DomGamePi
// 地址: 0xbdfa28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x24
uint64_t var_30 = entry_x24
char x9 = *(arg1 + 0x19e0)
*(arg1 + 0x19e0) = 0
DomGame& x20 = arg1
void* __offset(DomGame, 0x1286) fp = arg1 + 0x1286

if (*(arg1 + 0xd40) s>= 1)
    int64_t i = 0
    
    do
        uint64_t x14_2 = zx.q(*(x20 + 0x19ac))
        int32_t x16_1
        
        if (x14_2.d s< 1)
            x16_1 = 0
        else
            int64_t j_5
            
            if (x14_2.d u>= 3)
                j_5 = x14_2 & 0xfffffffe
                int32_t x16_2 = 0
                int32_t x17_1 = 0
                arg1 = x20 + 0x15f88
                int64_t j_3 = j_5
                int64_t j
                
                do
                    int32_t x2_5 = *(arg1 - 0x18)
                    int32_t entry_x4
                    
                    if (x2_5 == 0x3f1)
                        entry_x4 = *(arg1 - 0x1c)
                    
                    int32_t x3_3 = *(arg1 + 8)
                    int32_t entry_x5
                    
                    if (x3_3 == 0x3f1)
                        entry_x5 = *(arg1 + 4)
                    
                    uint64_t x4_1 = zx.q(entry_x4)
                    uint64_t x6_3 = zx.q(entry_x5)
                    int32_t x21_3 = i == x4_1 ? 1 : 0
                    int32_t x5_2 = x21_3 & (x2_5 == 0x3f1 ? 1 : 0)
                    
                    if (x5_2 == 1)
                        x21_3 = *(arg1 - 0x20)
                    
                    int32_t x7_4 = (i == x6_3 ? 1 : 0) & (x3_3 == 0x3f1 ? 1 : 0)
                    
                    if (x7_4 != 0)
                        entry_x24 = zx.q(*arg1)
                    
                    int32_t x22_2 = x21_3 != 0x601 ? 1 : 0
                    int32_t x23_1 = entry_x24.d == 0x601 ? 1 : 0
                    
                    if (((x22_2 | (x5_2 ^ 1)) & 1) == 0)
                        x22_2 = *(arg1 - 0xc)
                    
                    if ((x23_1 & x7_4) != 0)
                        x23_1 = *(arg1 + 0x14)
                    
                    int32_t x6_1 = x7_4 & (entry_x24.d != 0x601 ? 1 : 0)
                    entry_x24 = zx.q(x2_5 == 0x3f1 ? 1 : 0)
                    entry_x5 = entry_x24.d & (i != x4_1 ? 1 : 0)
                    entry_x4 = entry_x5 | (x5_2 & (x21_3 != 0x601 ? 1 : 0))
                    int32_t x2_3
                    
                    if ((entry_x4 | (x2_5 != 0x3f1 ? 1 : 0)) != 0)
                        x2_3 = 0
                    else
                        x2_3 = x22_2
                    
                    x16_2 += x2_3
                    int32_t x2_4
                    
                    if ((((x3_3 == 0x3f1 ? 1 : 0) & (i != x6_3 ? 1 : 0)) | x6_1
                            | (x3_3 != 0x3f1 ? 1 : 0)) != 0)
                        x2_4 = 0
                    else
                        x2_4 = x23_1
                    
                    j = j_3
                    j_3 -= 2
                    x17_1 += x2_4
                    arg1 += 0x40
                while (j != 2)
                x16_1 = x17_1 + x16_2
                
                if (j_5 != x14_2)
                    goto label_bdfc48
            else
                j_5 = 0
                x16_1 = 0
            label_bdfc48:
                void* x17_2 = x20 + 0x15f68 + (j_5 << 5)
                int64_t j_4 = x14_2 - j_5
                int64_t j_1
                
                do
                    if (*(x17_2 + 8) == 0x3f1 && i == zx.q(*(x17_2 + 4)) && *x17_2 == 0x601)
                        x16_1 += *(x17_2 + 0x14)
                    
                    j_1 = j_4
                    j_4 -= 1
                    x17_2 += 0x20
                while (j_1 != 1)
        
        arg2[i] = x16_1
        int32_t x14_5 = *(x20 + i * 0x5a30 + 0x18210) + x16_1
        arg2[i] = x14_5
        
        if (zx.d(*fp) != 0)
            arg2[i] = *(x20 + i * 0x5a30 + 0x18204) + x14_5
        
        i += 1
    while (i s< sx.q(*(x20 + 0xd40)))

if (*(x20 + 0x1528) s> 1)
    int32_t var_cec_1 = 0
    int64_t i_1 = 1
    
    do
        if (*(x20 + i_1 * 0x68 + 0x1a74) - 0x22 u> 4)
            void* x25_4 = x20 + i_1 * 0x68
            
            if (*(x25_4 + 0x1a94) != 0xffffffff)
                int32_t x26_2 = i_1.d & 0xffff
                
                if (x26_2 u>= 0x320)
                    void* x0_8 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_16 = x0_8 + sx.q(*(x0_8 + 0x13000)) * 0x98
                    *(*(x8_16 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_17 = *(x8_16 - 0x90)
                    *(x8_17 + 0x1a2c) = *(x8_17 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                void* x8_18 = x20 + mulu.dp.d(x26_2, 0x68)
                
                if (*(x8_18 + 0x1a9c) == *(x8_18 + 0x1a94))
                    uint64_t x1_4 = zx.q(*(x20 + i_1 * 0x68 + 0x1a70))
                    int64_t x8_3
                    int32_t x9_2
                    
                    if (x1_4.d == 0xb13)
                        arg1 = CalcOwnedIndivScore(x20, zx.q(*(x25_4 + 0x1a94)), zx.q(i_1.d))
                        x8_3 = sx.q(*(x25_4 + 0x1a94)) << 2
                        x9_2 = *(arg2 + x8_3) + arg1.d
                    else
                        int32_t var_ce8[0x320]
                        
                        if (var_cec_1 s< 1)
                        label_bdfe80:
                            var_ce8[sx.q(var_cec_1)] = x1_4.d
                            int32_t* x25_5 = &data_18be968 + muls.dp.d(var_cec_1, 0x18)
                            CalcOwnedCardScore(x20, x1_4, x25_5)
                            var_cec_1 += 1
                            x8_3 = sx.q(*(x25_4 + 0x1a94)) << 2
                            x9_2 = *(arg2 + x8_3) + *(x25_5 + x8_3)
                        else
                            int32_t (* x9_10)[0x320] = &var_ce8
                            int32_t* x10_1 = &data_18be968
                            uint64_t x8_23 = zx.q(var_cec_1)
                            
                            while (x1_4.d != *x9_10)
                                x10_1 = &x10_1[6]
                                uint64_t temp1_1 = x8_23
                                x8_23 -= 1
                                x9_10 = &(*x9_10)[1]
                                
                                if (temp1_1 == 1)
                                    goto label_bdfe80
                            
                            x8_3 = sx.q(*(x25_4 + 0x1a94)) << 2
                            x9_2 = *(arg2 + x8_3) + *(x10_1 + x8_3)
                    
                    *(arg2 + x8_3) = x9_2
        else
            int32_t x25_3 = *(x20 + i_1 * 0x68 + 0x1a70)
            arg1 = CardHasWhenScoring(x20, zx.q(x25_3))
            
            if (arg1 != 0 && *(x20 + 0xd40) s>= 1)
                int64_t j_2 = 0
                
                do
                    int32_t x28_1
                    
                    if (CountOngoing(x20, zx.q(j_2.d), 0x2d, x25_3, 0) s>= 1)
                        x28_1 = 2
                    else
                        x28_1 = 1
                    
                    int64_t var_68 = 0
                    DomPushContext(x20, zx.q(j_2.d), &var_68)
                    int32_t x0_5 = arg1()
                    arg2[j_2] += x0_5 * x28_1
                    void* __offset(DomGame, 0x13000) x8_11 =
                        __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
                    j_2 += 1
                    *x8_11 -= 1
                while (j_2 s< sx.q(*(x20 + 0xd40)))
        
        i_1 += 1
    while (i_1 s< sx.q(*(x20 + 0x1528)))

*(fp + 0x75a) = x9
