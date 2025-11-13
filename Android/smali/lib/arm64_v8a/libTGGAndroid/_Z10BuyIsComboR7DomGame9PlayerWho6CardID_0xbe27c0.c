// 函数: _Z10BuyIsComboR7DomGame9PlayerWho6CardID
// 地址: 0xbe27c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x21 = zx.d(arg3)
int32_t x19 = arg2

if (x21 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x8_6 = *(arg1 + mulu.dp.d(x21, 0x68) + 0x1a70)

if (x8_6 == 0xc27)
    if (CountCardsWhere(arg1, zx.q(x19), 0x3eb) == 0)
        return zx.q(CountCardsWhere(arg1, zx.q(x19), 0x3ec) == 0 ? 1 : 0)
else if (x8_6 == 0xf1a)
    int32_t i = *(arg1 + 0xd50)
    int32_t x8_8 = ((0xffff & x8_6) | (0xffff & i) << 0x10) s% 0x3e5
    int32_t* x9_7 = *(&data_1838a20 + (sx.q(x8_8) << 3))
    char var_44
    void* x0_3
    int32_t x8_10
    
    if (x9_7 != 0)
        while (*x9_7 != 0xf1a || x9_7[1] != i)
            x9_7 = *(x9_7 + 0x10)
            
            if (x9_7 == 0)
                goto label_be28a0
        
        x0_3 = *(x9_7 + 8)
        var_44 = 0
        x8_10 = *(x0_3 + 0xe0)
        
        if (x8_10 != 0)
            goto label_be2914
    else
    label_be28a0:
        DomDefGetSlow(0xf1a, zx.q(i))
        int32_t* x0_2 = malloc(0x18)
        int64_t x8_9 = sx.q(x8_8) << 3
        int64_t x9_8 = *(&data_1838a20 + x8_9)
        *x0_2 = 0xf1a
        x0_2[1] = i
        *(&data_1838a20 + x8_9) = x0_2
        *(x0_2 + 0x10) = x9_8
        x0_3 = DomDefGetSlow(0xf1a, zx.q(i))
        *(x0_2 + 8) = x0_3
        var_44 = 0
        x8_10 = *(x0_3 + 0xe0)
        
        if (x8_10 != 0)
        label_be2914:
            int64_t x8_11
            
            if (x8_10 != 3)
                int32_t x8_12 = *(x0_3 + 0x1a0)
                
                if (x8_12 != 0)
                    if (x8_12 == 3)
                        x8_11 = 1
                        goto label_be29fc
                    
                    int32_t x8_13 = *(x0_3 + 0x260)
                    
                    if (x8_13 != 0)
                        if (x8_13 == 3)
                            x8_11 = 2
                            goto label_be29fc
                        
                        int32_t x8_14 = *(x0_3 + 0x320)
                        
                        if (x8_14 != 0)
                            if (x8_14 == 3)
                                x8_11 = 3
                                goto label_be29fc
                            
                            int32_t x8_15 = *(x0_3 + 0x3e0)
                            
                            if (x8_15 != 0)
                                if (x8_15 == 3)
                                    x8_11 = 4
                                    goto label_be29fc
                                
                                int32_t x8_16 = *(x0_3 + 0x4a0)
                                
                                if (x8_16 != 0)
                                    if (x8_16 == 3)
                                        x8_11 = 5
                                        goto label_be29fc
                                    
                                    int32_t x8_17 = *(x0_3 + 0x560)
                                    
                                    if (x8_17 != 0)
                                        if (x8_17 == 3)
                                            x8_11 = 6
                                            goto label_be29fc
                                        
                                        if (*(x0_3 + 0x620) == 3)
                                            x8_11 = 7
                                            goto label_be29fc
            else
                x8_11 = 0
            label_be29fc:
                int64_t x21_1 = *(x0_3 + x8_11 * 0xc0 + 0xf8)
                
                if (x21_1 != 0)
                    int64_t var_50 = 0
                    DomPushContext(arg1, zx.q(x19), &var_50)
                    x21_1(&var_44)
                    int32_t* x8_20 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
                    *x8_20 -= 1

return 0
