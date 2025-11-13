// 函数: _Z13CalcKeepPilesR7DomGame9PlayerWho
// 地址: 0xbfe7e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x28 = arg2.d
int32_t var_1960[0x240]
int32_t var_ce0[0xd4]
int32_t x0 = CountCardTypes(arg1, arg2, &var_ce0, &var_1960)
int32_t var_1974

if (x0 s< 1)
    var_1974 = 0
else
    int32_t fp_1 = *(arg1 + 0xd40)
    int64_t x9_1 = 0
    uint64_t x8_1 = zx.q(x0)
    var_1974 = 0
    int32_t var_1968_1 = fp_1
    int32_t var_1964_1 = x28
    
    while (true)
        int32_t x25_1 = var_ce0[x9_1]
        int32_t x26_2 = *(arg1 + 0xd50)
        int32_t x8_7 = (x25_1 + (x26_2 << 0x10)) s% 0x3e5
        int32_t* x9_7 = *(&data_1838a20 + (sx.q(x8_7) << 3))
        int32_t x8_9
        
        if (x9_7 != 0)
            while (*x9_7 != x25_1 || x9_7[1] != x26_2)
                x9_7 = *(x9_7 + 0x10)
                
                if (x9_7 == 0)
                    goto label_bfe8dc
            
            x8_9 = (*(*(x9_7 + 8) + 0xc8)).d
            
            if ((x8_9 & 2) == 0)
                goto label_bfe950
        else
        label_bfe8dc:
            DomDefGetSlow(zx.q(x25_1), zx.q(x26_2))
            int32_t* x0_2 = malloc(0x18)
            int64_t x8_8 = sx.q(x8_7) << 3
            int64_t x9_8 = *(&data_1838a20 + x8_8)
            *x0_2 = x25_1
            x0_2[1] = x26_2
            *(&data_1838a20 + x8_8) = x0_2
            *(x0_2 + 0x10) = x9_8
            void* x0_4 = DomDefGetSlow(zx.q(x25_1), zx.q(x26_2))
            *(x0_2 + 8) = x0_4
            x8_9 = (*(x0_4 + 0xc8)).d
            
            if ((x8_9 & 2) == 0)
            label_bfe950:
                int32_t x0_7
                
                if ((x8_9 & 0x10) != 0)
                    x0_7 = CountOngoing(arg1, zx.q(*(arg1 + 0x19d4)), 0x1d, 0, 0)
                
                if ((x8_9 & 0x10) == 0 || x0_7 s< 1)
                    x9_1 += 1
                    
                    if (x9_1 == x8_1)
                        break
                    
                    continue
        int32_t x26_1
        
        if (fp_1 s< 1)
            x26_1 = 0
        else
            int32_t x27_2 = 0
            x26_1 = 0
            
            do
                if (x27_2 != x28)
                    int32_t x8_10 = *(arg1 + 0x1528)
                    int32_t x28_1
                    
                    if (x8_10 s< 2)
                        x28_1 = 0
                    else
                        x28_1 = 0
                        int32_t fp_2 = 1
                        
                        do
                            int32_t x22_2 = fp_2 & 0xffff
                            
                            if (x22_2 u>= 0x320)
                                void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
                                void* x8_13 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
                                *(*(x8_13 - 0x90) + 0x1a28) = 0xffffffff
                                void* x8_14 = *(x8_13 - 0x90)
                                *(x8_14 + 0x1a2c) = *(x8_14 + 0x1a24)
                                XTrace("game thread yield (error)")
                                xco_yield()
                                XTrace("game thread resume (error)")
                                x8_10 = *(arg1 + 0x1528)
                            
                            void* x9_9 = arg1 + mulu.dp.d(x22_2, 0x68)
                            fp_2 += 1
                            x28_1 += (*(x9_9 + 0x1a94) == x27_2 ? 1 : 0)
                                & (*(x9_9 + 0x1a70) == x25_1 ? 1 : 0)
                        while (fp_2 s< x8_10)
                    
                    if (x28_1 s> x26_1)
                        x26_1 = x28_1
                    
                    fp_1 = var_1968_1
                    x28 = var_1964_1
                
                x27_2 += 1
            while (x27_2 != fp_1)
        
        int32_t x8_4
        
        if (var_1960[x9_1] s>= x26_1)
            x8_4 = var_1974 + 1
        else
            x8_4 = var_1974
        
        var_1974 = x8_4
        x9_1 += 1
        
        if (x9_1 == x8_1)
            break

return zx.q(var_1974)
