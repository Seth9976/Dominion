// 函数: _Z25AbilityGetAssociatedCardsRK7DomGame9PlayerWho9AbilityIDP6CardID
// 地址: 0xbd7db4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x23 = arg3 & 0xffffffff
int64_t x24 = arg3
int32_t x21 = arg2
int32_t x25 = x24.d u>> 6 & 0xfff
int32_t x0 = AbilitySourceCardRef(arg1, x23)
uint64_t x21_1

if (x25 == x0)
    x21_1 = 0
else if (x25 != 0)
    if (x21 == 0xffffffff || AbilitySource(arg1, x23) != 0xf47)
        *arg4 = x25
        x21_1 = 1
    else
        CardID var_ce0
        int32_t i_5 = CardsWhere(arg1, zx.q(x21), 0x462, &var_ce0)
        
        if (i_5 s< 1)
            x21_1 = 0
        else
            uint64_t i_4 = zx.q(i_5)
            x21_1 = 0
            CardID* x28_1 = &var_ce0
            
            if (x25 u>= 0x320)
                uint64_t i
                
                do
                    int32_t x22_2 = *x28_1
                    
                    if (x22_2 != x25)
                        uint64_t fp_2 = zx.q(x22_2.w)
                        
                        if (fp_2.d u>= 0x320)
                            void* x0_12 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_17 = x0_12 + sx.q(*(x0_12 + 0x13000)) * 0x98
                            *(*(x8_17 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_18 = *(x8_17 - 0x90)
                            *(x8_18 + 0x1a2c) = *(x8_18 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        int32_t fp_3 = *(arg1 + fp_2 * 0x68 + 0x1a70)
                        void* x0_14 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_22 = x0_14 + sx.q(*(x0_14 + 0x13000)) * 0x98
                        *(*(x8_22 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_23 = *(x8_22 - 0x90)
                        *(x8_23 + 0x1a2c) = *(x8_23 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                        
                        if (fp_3 == *(arg1 + mulu.dp.d(x25, 0x68) + 0x1a70))
                            *(arg4 + (sx.q(x21_1.d) << 2)) = x22_2
                            x21_1 = zx.q(x21_1.d + 1)
                    
                    i = i_4
                    i_4 -= 1
                    x28_1 += 4
                while (i != 1)
            else
                uint64_t i_1
                
                do
                    int32_t x22_1 = *x28_1
                    
                    if (x22_1 != x25)
                        uint64_t x23_1 = zx.q(x22_1.w)
                        
                        if (x23_1.d u>= 0x320)
                            void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_4 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
                            *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_5 = *(x8_4 - 0x90)
                            *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        if (*(arg1 + x23_1 * 0x68 + 0x1a70)
                                == *(arg1 + mulu.dp.d(x25, 0x68) + 0x1a70))
                            *(arg4 + (sx.q(x21_1.d) << 2)) = x22_1
                            x21_1 = zx.q(x21_1.d + 1)
                    
                    i_1 = i_4
                    i_4 -= 1
                    x28_1 += 4
                while (i_1 != 1)
else if ((x24 & 0x30) == 0)
    void* x0_10 = AbilityGetRegistered(arg1, x23)
    int32_t x8_14 = *(x0_10 + 0x84)
    int32_t i_2
    
    if (x8_14 == 0)
        x21_1 = 0
        i_2 = *(x0_10 + 0x80)
        
        if (i_2 != 0)
        label_bd8134:
            x21_1 = zx.q(x21_1.d)
            
            do
                int32_t x28_2 = i_2 & 0xffff
                *(arg4 + (x21_1 << 2)) = i_2
                
                if (x28_2 u>= 0x320)
                    void* x0_16 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_29 = x0_16 + sx.q(*(x0_16 + 0x13000)) * 0x98
                    *(*(x8_29 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_30 = *(x8_29 - 0x90)
                    *(x8_30 + 0x1a2c) = *(x8_30 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                i_2 = *(arg1 + mulu.dp.d(x28_2, 0x68) + 0x1acc)
                x21_1 += 1
            while (i_2 != 0)
    else
        x21_1 = 1
        *arg4 = x8_14
        i_2 = *(x0_10 + 0x80)
        
        if (i_2 != 0)
            goto label_bd8134
else
    int32_t x8_9 = *(arg1 + 0x1528)
    
    if (x8_9 s< 1)
        x21_1 = 0
    else
        int64_t i_3 = 0
        x21_1 = 0
        void* __offset(DomGame, 0x1a8c) fp_1 = arg1 + 0x1a8c
        
        do
            if (*(fp_1 - 0x18) == 0x474 && *fp_1 == x0)
                if (x21_1.d s>= 0x320)
                    void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_12 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
                    *(*(x8_12 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_13 = *(x8_12 - 0x90)
                    *(x8_13 + 0x1a2c) = *(x8_13 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                *(arg4 + (sx.q(x21_1.d) << 2)) = i_3.d
                x8_9 = *(arg1 + 0x1528)
                x21_1 = zx.q(x21_1.d + 1)
            
            i_3 += 1
            fp_1 += 0x68
        while (i_3 s< sx.q(x8_9))

return zx.q(x21_1.d)
