// 函数: _Z25CountCardsWhereUniqueTypeR7DomGame9PlayerWho8DomWhere11DomCardType
// 地址: 0xbfe3f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t j_6

if (*(arg1 + 0x1528) s< 2)
    j_6 = 0
else
    int32_t x21_1 = arg2
    int64_t var_ce8_1 = arg4
    int32_t var_ce0[0x320]
    
    if (arg3 != 0x3e9)
        j_6 = 0
        int32_t i = 1
        
        do
            int32_t fp_1 = i & 0xffff
            
            if (fp_1 u>= 0x320)
                void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_14 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
                *(*(x8_14 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_15 = *(x8_14 - 0x90)
                *(x8_15 + 0x1a2c) = *(x8_15 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            if (*(arg1 + mulu.dp.d(fp_1, 0x68) + 0x1a74) == arg3)
                uint64_t x8_18 = zx.q(fp_1)
                
                if (*(arg1 + x8_18 * 0x68 + 0x1a94) == x21_1)
                    void* fp_2 = arg1 + x8_18 * 0x68
                    uint64_t x1_1 = zx.q(*(fp_2 + 0x1a70))
                    
                    if (x1_1.d != 0 && (CardIsFast(arg1, x1_1, var_ce8_1) & 1) != 0)
                        int32_t x8_20 = *(fp_2 + 0x1a70)
                        uint64_t j_5
                        
                        if (j_6 s<= 0)
                            j_5 = sx.q(j_6)
                        else
                            j_5 = zx.q(j_6)
                            int32_t (* x10_2)[0x320] = &var_ce0
                            uint64_t j_3 = j_5
                            uint64_t j
                            
                            do
                                if (*x10_2 == x8_20)
                                    goto label_bfe5c4
                                
                                j = j_3
                                j_3 -= 1
                                x10_2 = &(*x10_2)[1]
                            while (j != 1)
                        
                        j_6 += 1
                        var_ce0[j_5] = x8_20
            
        label_bfe5c4:
            i += 1
        while (i s< *(arg1 + 0x1528))
    else
        j_6 = 0
        int32_t i_1 = 1
        
        do
            int32_t x19_1 = i_1 & 0xffff
            
            if (x19_1 u>= 0x320)
                void* x0_2 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_4 = x0_2 + sx.q(*(x0_2 + 0x13000)) * 0x98
                *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_5 = *(x8_4 - 0x90)
                *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            int32_t x8_7 = *(arg1 + mulu.dp.d(x19_1, 0x68) + 0x1a74)
            
            if (x8_7 == 0x3e9 || x8_7 == 0x451)
                uint64_t x8_8 = zx.q(x19_1)
                
                if (*(arg1 + x8_8 * 0x68 + 0x1a94) == x21_1)
                    void* x19_2 = arg1 + x8_8 * 0x68
                    uint64_t x1 = zx.q(*(x19_2 + 0x1a70))
                    
                    if (x1.d != 0 && (CardIsFast(arg1, x1, var_ce8_1) & 1) != 0)
                        int32_t x8_10 = *(x19_2 + 0x1a70)
                        uint64_t j_4
                        
                        if (j_6 s<= 0)
                            j_4 = sx.q(j_6)
                        else
                            j_4 = zx.q(j_6)
                            int32_t (* x10_1)[0x320] = &var_ce0
                            uint64_t j_2 = j_4
                            uint64_t j_1
                            
                            do
                                if (*x10_1 == x8_10)
                                    goto label_bfe4a4
                                
                                j_1 = j_2
                                j_2 -= 1
                                x10_1 = &(*x10_1)[1]
                            while (j_1 != 1)
                        
                        j_6 += 1
                        var_ce0[j_4] = x8_10
            
        label_bfe4a4:
            i_1 += 1
        while (i_1 s< *(arg1 + 0x1528))

return zx.q(j_6)
