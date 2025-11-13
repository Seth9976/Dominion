// 函数: _Z21CountCardsWhereUniqueR7DomGame9PlayerWho8DomWhere
// 地址: 0xbfe000
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_cec = arg2

if (*(arg1 + 0x1528) s< 2)
    return 0

uint64_t result
int32_t var_ce0[0x320]

if (arg3 != 0x3e9)
    int32_t i = 1
    result = 0
    
    do
        int32_t x24_2 = i & 0xffff
        
        if (x24_2 u>= 0x320)
            void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_20 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
            *(*(x8_20 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_21 = *(x8_20 - 0x90)
            *(x8_21 + 0x1a2c) = *(x8_21 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if (*(arg1 + mulu.dp.d(x24_2, 0x68) + 0x1a74) == arg3)
            uint64_t x25_2 = zx.q(x24_2)
            void* x24_3 = arg1 + x25_2 * 0x68
            int32_t x26_2 = *(x24_3 + 0x1a70)
            int32_t x27_2 = *(arg1 + 0xd50)
            int32_t x8_25 = (x26_2 + (x27_2 << 0x10)) s% 0x3e5
            int32_t* x9_17 = *(&data_1838a20 + (sx.q(x8_25) << 3))
            void* x0_13
            
            if (x9_17 != 0)
                while (*x9_17 != x26_2 || x9_17[1] != x27_2)
                    x9_17 = *(x9_17 + 0x10)
                    
                    if (x9_17 == 0)
                        goto label_bfe32c
                
                x0_13 = *(x9_17 + 8)
            else
            label_bfe32c:
                DomDefGetSlow(zx.q(x26_2), zx.q(x27_2))
                int32_t* x0_11 = malloc(0x18)
                int64_t x8_26 = sx.q(x8_25) << 3
                int64_t x9_18 = *(&data_1838a20 + x8_26)
                *x0_11 = x26_2
                x0_11[1] = x27_2
                *(&data_1838a20 + x8_26) = x0_11
                *(x0_11 + 0x10) = x9_18
                x0_13 = DomDefGetSlow(zx.q(x26_2), zx.q(x27_2))
                *(x0_11 + 8) = x0_13
            
            if ((*(x0_13 + 0xc8) & 0x9407f000400) == 0
                    && *(arg1 + x25_2 * 0x68 + 0x1a94) == var_cec)
                int32_t j_6 = result.d
                int32_t x8_31 = *(x24_3 + 0x1a70)
                uint64_t j_5
                
                if (j_6 s<= 0)
                    j_5 = sx.q(j_6)
                else
                    j_5 = zx.q(j_6)
                    int32_t (* x10_9)[0x320] = &var_ce0
                    uint64_t j_3 = j_5
                    uint64_t j
                    
                    do
                        if (*x10_9 == x8_31)
                            goto label_bfe268
                        
                        j = j_3
                        j_3 -= 1
                        x10_9 = &(*x10_9)[1]
                    while (j != 1)
                    j_6 = result.d
                
                result = zx.q(j_6 + 1)
                var_ce0[j_5] = x8_31
        
    label_bfe268:
        i += 1
    while (i s< *(arg1 + 0x1528))
else
    int32_t i_1 = 1
    result = 0
    
    do
        int32_t x23_1 = i_1 & 0xffff
        
        if (x23_1 u>= 0x320)
            void* x0_2 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_4 = x0_2 + sx.q(*(x0_2 + 0x13000)) * 0x98
            *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_5 = *(x8_4 - 0x90)
            *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t x8_7 = *(arg1 + mulu.dp.d(x23_1, 0x68) + 0x1a74)
        
        if (x8_7 == 0x3e9 || x8_7 == 0x451)
            uint64_t x23_2 = zx.q(x23_1)
            void* fp_1 = arg1 + x23_2 * 0x68
            int32_t x25_1 = *(fp_1 + 0x1a70)
            int32_t x26_1 = *(arg1 + 0xd50)
            int32_t x8_9 = (x25_1 + (x26_1 << 0x10)) s% 0x3e5
            int32_t* x9_7 = *(&data_1838a20 + (sx.q(x8_9) << 3))
            
            if (x9_7 != 0)
                while (*x9_7 != x25_1 || x9_7[1] != x26_1)
                    x9_7 = *(x9_7 + 0x10)
                    
                    if (x9_7 == 0)
                        goto label_bfe16c
                
                if ((*(*(x9_7 + 8) + 0xc8) & 0x9407f000400) == 0)
                    goto label_bfe1ec
            else
            label_bfe16c:
                DomDefGetSlow(zx.q(x25_1), zx.q(x26_1))
                int32_t* x0_4 = malloc(0x18)
                int64_t x8_10 = sx.q(x8_9) << 3
                int64_t x9_8 = *(&data_1838a20 + x8_10)
                *x0_4 = x25_1
                x0_4[1] = x26_1
                *(&data_1838a20 + x8_10) = x0_4
                *(x0_4 + 0x10) = x9_8
                void* x0_6 = DomDefGetSlow(zx.q(x25_1), zx.q(x26_1))
                *(x0_4 + 8) = x0_6
                
                if ((*(x0_6 + 0xc8) & 0x9407f000400) == 0)
                label_bfe1ec:
                    
                    if (*(arg1 + x23_2 * 0x68 + 0x1a94) == var_cec)
                        int32_t j_7 = result.d
                        int32_t x8_16 = *(fp_1 + 0x1a70)
                        uint64_t j_4
                        
                        if (j_7 s<= 0)
                            j_4 = sx.q(j_7)
                        else
                            j_4 = zx.q(j_7)
                            int32_t (* x10_4)[0x320] = &var_ce0
                            uint64_t j_2 = j_4
                            uint64_t j_1
                            
                            do
                                if (*x10_4 == x8_16)
                                    goto label_bfe0a0
                                
                                j_1 = j_2
                                j_2 -= 1
                                x10_4 = &(*x10_4)[1]
                            while (j_1 != 1)
                        
                        result = zx.q(j_7 + 1)
                        var_ce0[j_4] = x8_16
        
    label_bfe0a0:
        i_1 += 1
    while (i_1 s< *(arg1 + 0x1528))
return result
