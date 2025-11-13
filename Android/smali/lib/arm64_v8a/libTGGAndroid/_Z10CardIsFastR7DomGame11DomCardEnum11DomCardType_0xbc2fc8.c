// 函数: _Z10CardIsFastR7DomGame11DomCardEnum11DomCardType
// 地址: 0xbc2fc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = *(arg1 + 0xd50)
int32_t x8_4 = (arg2.d + (x22 << 0x10)) s% 0x3e5
int32_t* x9 = *(&data_1838a20 + (sx.q(x8_4) << 3))
int32_t x20 = arg2.d
int64_t x21 = arg3
void* x23

if (x9 != 0)
    while (*x9 != x20 || x9[1] != x22)
        x9 = *(x9 + 0x10)
        
        if (x9 == 0)
            goto label_bc3034
    
    x23 = *(x9 + 8)
    
    if ((*(x23 + 0xc8) & x21) == 0)
        goto label_bc30c0
else
label_bc3034:
    DomDefGetSlow(zx.q(x20), zx.q(x22))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_5 = sx.q(x8_4) << 3
    int64_t x9_1 = *(&data_1838a20 + x8_5)
    *x0_1 = x20
    x0_1[1] = x22
    *(&data_1838a20 + x8_5) = x0_1
    *(x0_1 + 0x10) = x9_1
    void* x0_3
    x0_3, arg2 = DomDefGetSlow(zx.q(x20), zx.q(x22))
    x23 = x0_3
    *(x0_1 + 8) = x0_3
    
    if ((*(x23 + 0xc8) & x21) == 0)
    label_bc30c0:
        int32_t var_58_1 = 0xffffffff
        AbilityIDs var_458
        
        if ((x21 & 0x1000000000ce) != 0)
            arg2 = CollectAllOngoing(arg1, zx.q(*(arg1 + 0x19d4)), &var_458, 0)
        
        int32_t x22_1
        
        if ((x21 & 0x1000000000ca) == 0)
        label_bc3120:
            x22_1 = 0
        else
            int32_t x0_6
            x0_6, arg2 = PileSource(arg1, zx.q(x20))
            int64_t x8_8 = -0x410
            
            while (true)
                void* x9_2 = arg1 + x8_8
                x22_1 = *(x9_2 + 0x19ac)
                
                if (x22_1 == x20)
                    x22_1 = x20
                    
                    if ((x21.d & 2) == 0)
                        goto label_bc3128
                    
                    goto label_bc33ec
                
                if (x22_1 == x0_6)
                    break
                
                if (*(x9_2 + 0x19b0) == x20)
                    break
                
                int64_t temp0_1 = x8_8
                x8_8 += 0x10
                
                if (temp0_1 == -0x10)
                    goto label_bc3120
        
        if ((x21.d & 2) != 0)
        label_bc33ec:
            
            if (zx.d(*(arg1 + 0x19e0)) == 0)
            label_bc3420:
                
                if ((var_58_1 & 0x80000000) != 0)
                    void* x0_35 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_39 = x0_35 + sx.q(*(x0_35 + 0x13000)) * 0x98
                    *(*(x8_39 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_40 = *(x8_39 - 0x90)
                    *(x8_40 + 0x1a2c) = *(x8_40 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    arg2 = XTrace("game thread resume (error)")
                
                int32_t x0_37
                x0_37, arg2 = CountOngoing(arg1, arg2, &var_458, 0x23, x22_1, 0)
                
                if (x0_37 s<= 0)
                    if ((zx.d(*(x23 + 0xc8)) & 0x10) == 0)
                        goto label_bc3128
                    
                    if ((var_58_1 & 0x80000000) != 0)
                        void* x0_40 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_44 = x0_40 + sx.q(*(x0_40 + 0x13000)) * 0x98
                        *(*(x8_44 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_45 = *(x8_44 - 0x90)
                        *(x8_45 + 0x1a2c) = *(x8_45 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        arg2 = XTrace("game thread resume (error)")
                    
                    int32_t x0_42
                    x0_42, arg2 = CountOngoing(arg1, arg2, &var_458, 0x1d, 0, 0)
                    
                    if (x0_42 s<= 0)
                        goto label_bc3128
            else
                int32_t x24_2 = *(arg1 + 0x19d4)
                int32_t x0_32
                x0_32, arg2 = CardIsAffectedByCapitalism(zx.q(x20))
                
                if ((x0_32 & 1) == 0)
                    goto label_bc3420
                
                int32_t var_44
                arg2 = ProjectIsOwned(arg1, zx.q(x24_2), 0xe28, &var_44)
                
                if (var_44 == 0)
                    goto label_bc3420
        else
        label_bc3128:
            int32_t x0_10
            
            if ((x21.d & 0x80) != 0)
                if ((var_58_1 & 0x80000000) != 0)
                    void* x0_8 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_12 = x0_8 + sx.q(*(x0_8 + 0x13000)) * 0x98
                    *(*(x8_12 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_13 = *(x8_12 - 0x90)
                    *(x8_13 + 0x1a2c) = *(x8_13 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    arg2 = XTrace("game thread resume (error)")
                
                x0_10, arg2 = CountOngoing(arg1, arg2, &var_458, 0x21, x22_1, 0)
            
            if ((x21.d & 0x80) == 0 || x0_10 s<= 0)
                int32_t x0_14
                
                if ((x21.d & 8) != 0)
                    if ((var_58_1 & 0x80000000) != 0)
                        void* x0_12 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_17 = x0_12 + sx.q(*(x0_12 + 0x13000)) * 0x98
                        *(*(x8_17 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_18 = *(x8_17 - 0x90)
                        *(x8_18 + 0x1a2c) = *(x8_18 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        arg2 = XTrace("game thread resume (error)")
                    
                    x0_14, arg2 = CountOngoing(arg1, arg2, &var_458, 0x22, x22_1, 0)
                
                if ((x21.d & 8) == 0 || x0_14 s<= 0)
                    int32_t x0_18
                    
                    if ((x21.d & 0x40) != 0)
                        if ((var_58_1 & 0x80000000) != 0)
                            void* x0_16 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_22 = x0_16 + sx.q(*(x0_16 + 0x13000)) * 0x98
                            *(*(x8_22 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_23 = *(x8_22 - 0x90)
                            *(x8_23 + 0x1a2c) = *(x8_23 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            arg2 = XTrace("game thread resume (error)")
                        
                        x0_18, arg2 = CountOngoing(arg1, arg2, &var_458, 0x24, x22_1, 0)
                    
                    if ((x21.d & 0x40) == 0 || x0_18 s<= 0)
                        int32_t x0_22
                        
                        if ((x21 & 0x1000) != 0)
                            if ((var_58_1 & 0x80000000) != 0)
                                void* x0_20 = __emutls_get_address(__emutls_v.gContextStack_tl)
                                void* x8_27 = x0_20 + sx.q(*(x0_20 + 0x13000)) * 0x98
                                *(*(x8_27 - 0x90) + 0x1a28) = 0xffffffff
                                void* x8_28 = *(x8_27 - 0x90)
                                *(x8_28 + 0x1a2c) = *(x8_28 + 0x1a24)
                                XTrace("game thread yield (error)")
                                xco_yield()
                                arg2 = XTrace("game thread resume (error)")
                            
                            x0_22, arg2 = CountOngoing(arg1, arg2, &var_458, 0x25, x22_1, 0)
                        
                        if ((x21 & 0x1000) == 0 || x0_22 s<= 0)
                            if ((x21.d & 4) == 0)
                            label_bc3544:
                                int32_t x0_44
                                
                                if ((x21 & 0x4000) != 0 && x20 == 0x101
                                        && zx.d(*(arg1 + 0x19e0)) != 0)
                                    x0_44 = CountCardsWhere(arg1, zx.q(*(arg1 + 0x19d4)), 0x454)
                                
                                if ((x21 & 0x4000) == 0 || x20 != 0x101
                                        || zx.d(*(arg1 + 0x19e0)) == 0 || x0_44 == 0)
                                    return 0
                            else
                                int32_t x0_24
                                
                                if (x20 == 0x101 && zx.d(*(arg1 + 0x19e0)) != 0)
                                    x0_24, arg2 =
                                        CountCardsWhere(arg1, zx.q(*(arg1 + 0x19d4)), 0x454)
                                
                                if (x20 != 0x101 || zx.d(*(arg1 + 0x19e0)) == 0 || x0_24 == 0)
                                    if ((var_58_1 & 0x80000000) != 0)
                                        void* x0_26 =
                                            __emutls_get_address(__emutls_v.gContextStack_tl)
                                        void* x8_33 = x0_26 + sx.q(*(x0_26 + 0x13000)) * 0x98
                                        *(*(x8_33 - 0x90) + 0x1a28) = 0xffffffff
                                        void* x8_34 = *(x8_33 - 0x90)
                                        *(x8_34 + 0x1a2c) = *(x8_34 + 0x1a24)
                                        XTrace("game thread yield (error)")
                                        xco_yield()
                                        arg2 = XTrace("game thread resume (error)")
                                    
                                    if (CountOngoing(arg1, arg2, &var_458, 0x35, 0, 0) s< 1)
                                        goto label_bc3544
                                    
                                    if ((CardIsFast(arg1, zx.q(x20), 2) & 1) == 0)
                                        goto label_bc3544
return 1
