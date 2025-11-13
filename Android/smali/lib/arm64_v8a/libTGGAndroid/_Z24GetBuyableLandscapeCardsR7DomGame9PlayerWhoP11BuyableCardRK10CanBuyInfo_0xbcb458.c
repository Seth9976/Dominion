// 函数: _Z24GetBuyableLandscapeCardsR7DomGame9PlayerWhoP11BuyableCardRK10CanBuyInfo
// 地址: 0xbcb458
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x1754)
int32_t var_464[0x100]

if (x8 != 0)
    var_464[0] = x8
    x8 = 1

int32_t x9 = *(arg1 + 0x1764)

if (x9 != 0)
    var_464[zx.q(x8)] = x9
    x8 += 1

int32_t x9_1 = *(arg1 + 0x1774)

if (x9_1 != 0)
    var_464[zx.q(x8)] = x9_1
    x8 += 1

int32_t x9_2 = *(arg1 + 0x1784)
int32_t var_46c

if (x9_2 == 0)
    if (x8 s>= 1)
        goto label_bcb510
    
    var_46c = 0
else
    var_464[zx.q(x8)] = x9_2
    x8 += 1
label_bcb510:
    int64_t i = 0
    var_46c = 0
    int32_t var_468_1 = arg2
    
    do
        int32_t x27_1 = var_464[i]
        uint64_t x22_1 = zx.q(x27_1.w)
        
        if (x22_1.d u>= 0x320)
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_5 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_5 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_6 = *(x8_5 - 0x90)
            *(x8_6 + 0x1a2c) = *(x8_6 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        void* x24_1 = arg1 + x22_1 * 0x68
        int32_t x28_1 = *(x24_1 + 0x1a70)
        int32_t fp_1 = *(arg1 + 0xd50)
        int32_t x8_8 = (x28_1 + (fp_1 << 0x10)) s% 0x3e5
        int32_t* x9_11 = *(&data_1838a20 + (sx.q(x8_8) << 3))
        
        if (x9_11 != 0)
            while (*x9_11 != x28_1 || x9_11[1] != fp_1)
                x9_11 = *(x9_11 + 0x10)
                
                if (x9_11 == 0)
                    goto label_bcb614
            
            if ((zx.d(*(*(x9_11 + 8) + 0xcb)) & 0x10) == 0)
                goto label_bcb684
        else
        label_bcb614:
            DomDefGetSlow(zx.q(x28_1), zx.q(fp_1))
            int32_t* x0_5 = malloc(0x18)
            int64_t x8_9 = sx.q(x8_8) << 3
            int64_t x9_12 = *(&data_1838a20 + x8_9)
            *x0_5 = x28_1
            x0_5[1] = fp_1
            *(&data_1838a20 + x8_9) = x0_5
            *(x0_5 + 0x10) = x9_12
            void* x0_7 = DomDefGetSlow(zx.q(x28_1), zx.q(fp_1))
            *(x0_5 + 8) = x0_7
            
            if ((zx.d(*(x0_7 + 0xcb)) & 0x10) == 0)
            label_bcb684:
                
                if (x22_1.d u>= 0x320)
                    void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_14 = x0_10 + sx.q(*(x0_10 + 0x13000)) * 0x98
                    *(*(x8_14 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_15 = *(x8_14 - 0x90)
                    *(x8_15 + 0x1a2c) = *(x8_15 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                int32_t x28_2 = *(x24_1 + 0x1a70)
                int32_t fp_2 = *(arg1 + 0xd50)
                int32_t x8_17 = (x28_2 + (fp_2 << 0x10)) s% 0x3e5
                int32_t* x9_19 = *(&data_1838a20 + (sx.q(x8_17) << 3))
                
                if (x9_19 != 0)
                    while (*x9_19 != x28_2 || x9_19[1] != fp_2)
                        x9_19 = *(x9_19 + 0x10)
                        
                        if (x9_19 == 0)
                            goto label_bcb724
                    
                    if ((zx.d(*(*(x9_19 + 8) + 0xcb)) & 0x20) == 0)
                        goto label_bcb794
                else
                label_bcb724:
                    DomDefGetSlow(zx.q(x28_2), zx.q(fp_2))
                    int32_t* x0_12 = malloc(0x18)
                    int64_t x8_18 = sx.q(x8_17) << 3
                    int64_t x9_20 = *(&data_1838a20 + x8_18)
                    *x0_12 = x28_2
                    x0_12[1] = fp_2
                    *(&data_1838a20 + x8_18) = x0_12
                    *(x0_12 + 0x10) = x9_20
                    void* x0_14 = DomDefGetSlow(zx.q(x28_2), zx.q(fp_2))
                    *(x0_12 + 8) = x0_14
                    
                    if ((zx.d(*(x0_14 + 0xcb)) & 0x20) == 0)
                    label_bcb794:
                        
                        if (x22_1.d u>= 0x320)
                            void* x0_17 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_23 = x0_17 + sx.q(*(x0_17 + 0x13000)) * 0x98
                            *(*(x8_23 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_24 = *(x8_23 - 0x90)
                            *(x8_24 + 0x1a2c) = *(x8_24 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        int32_t x28_3 = *(x24_1 + 0x1a70)
                        int32_t fp_3 = *(arg1 + 0xd50)
                        int32_t x8_26 = (x28_3 + (fp_3 << 0x10)) s% 0x3e5
                        int32_t* x9_27 = *(&data_1838a20 + (sx.q(x8_26) << 3))
                        
                        if (x9_27 != 0)
                            while (*x9_27 != x28_3 || x9_27[1] != fp_3)
                                x9_27 = *(x9_27 + 0x10)
                                
                                if (x9_27 == 0)
                                    goto label_bcb82c
                            
                            if ((zx.d(*(*(x9_27 + 8) + 0xcc)) & 0x40) == 0)
                                goto label_bcb89c
                        else
                        label_bcb82c:
                            DomDefGetSlow(zx.q(x28_3), zx.q(fp_3))
                            int32_t* x0_19 = malloc(0x18)
                            int64_t x8_27 = sx.q(x8_26) << 3
                            int64_t x9_28 = *(&data_1838a20 + x8_27)
                            *x0_19 = x28_3
                            x0_19[1] = fp_3
                            *(&data_1838a20 + x8_27) = x0_19
                            *(x0_19 + 0x10) = x9_28
                            void* x0_21 = DomDefGetSlow(zx.q(x28_3), zx.q(fp_3))
                            *(x0_19 + 8) = x0_21
                            
                            if ((zx.d(*(x0_21 + 0xcc)) & 0x40) == 0)
                            label_bcb89c:
                                
                                if (x22_1.d u>= 0x320)
                                    void* x0_24 = __emutls_get_address(__emutls_v.gContextStack_tl)
                                    void* x8_32 = x0_24 + sx.q(*(x0_24 + 0x13000)) * 0x98
                                    *(*(x8_32 - 0x90) + 0x1a28) = 0xffffffff
                                    void* x8_33 = *(x8_32 - 0x90)
                                    *(x8_33 + 0x1a2c) = *(x8_33 + 0x1a24)
                                    XTrace("game thread yield (error)")
                                    xco_yield()
                                    XTrace("game thread resume (error)")
                                
                                int32_t x28_4 = *(x24_1 + 0x1a70)
                                int32_t fp_4 = *(arg1 + 0xd50)
                                int32_t x8_35 = (x28_4 + (fp_4 << 0x10)) s% 0x3e5
                                int32_t* x9_35 = *(&data_1838a20 + (sx.q(x8_35) << 3))
                                
                                if (x9_35 != 0)
                                    while (*x9_35 != x28_4 || x9_35[1] != fp_4)
                                        x9_35 = *(x9_35 + 0x10)
                                        
                                        if (x9_35 == 0)
                                            goto label_bcb934
                                    
                                    if ((zx.d(*(*(x9_35 + 8) + 0xcd)) & 1) == 0)
                                        goto label_bcb9a4
                                else
                                label_bcb934:
                                    DomDefGetSlow(zx.q(x28_4), zx.q(fp_4))
                                    int32_t* x0_26 = malloc(0x18)
                                    int64_t x8_36 = sx.q(x8_35) << 3
                                    int64_t x9_36 = *(&data_1838a20 + x8_36)
                                    *x0_26 = x28_4
                                    x0_26[1] = fp_4
                                    *(&data_1838a20 + x8_36) = x0_26
                                    *(x0_26 + 0x10) = x9_36
                                    void* x0_28 = DomDefGetSlow(zx.q(x28_4), zx.q(fp_4))
                                    *(x0_26 + 8) = x0_28
                                    
                                    if ((zx.d(*(x0_28 + 0xcd)) & 1) == 0)
                                    label_bcb9a4:
                                        
                                        if (x22_1.d u>= 0x320)
                                            void* x0_31 =
                                                __emutls_get_address(__emutls_v.gContextStack_tl)
                                            void* x8_41 = x0_31 + sx.q(*(x0_31 + 0x13000)) * 0x98
                                            *(*(x8_41 - 0x90) + 0x1a28) = 0xffffffff
                                            void* x8_42 = *(x8_41 - 0x90)
                                            *(x8_42 + 0x1a2c) = *(x8_42 + 0x1a24)
                                            XTrace("game thread yield (error)")
                                            xco_yield()
                                            XTrace("game thread resume (error)")
                                        
                                        int32_t x28_5 = *(x24_1 + 0x1a70)
                                        int32_t fp_5 = *(arg1 + 0xd50)
                                        int32_t x8_44 = (x28_5 + (fp_5 << 0x10)) s% 0x3e5
                                        int32_t* x9_43 = *(&data_1838a20 + (sx.q(x8_44) << 3))
                                        
                                        if (x9_43 != 0)
                                            while (*x9_43 != x28_5 || x9_43[1] != fp_5)
                                                x9_43 = *(x9_43 + 0x10)
                                                
                                                if (x9_43 == 0)
                                                    goto label_bcba3c
                                            
                                            if ((zx.d(*(*(x9_43 + 8) + 0xcd)) & 8) == 0)
                                                goto label_bcbaac
                                        else
                                        label_bcba3c:
                                            DomDefGetSlow(zx.q(x28_5), zx.q(fp_5))
                                            int32_t* x0_33 = malloc(0x18)
                                            int64_t x8_45 = sx.q(x8_44) << 3
                                            int64_t x9_44 = *(&data_1838a20 + x8_45)
                                            *x0_33 = x28_5
                                            x0_33[1] = fp_5
                                            *(&data_1838a20 + x8_45) = x0_33
                                            *(x0_33 + 0x10) = x9_44
                                            void* x0_35 = DomDefGetSlow(zx.q(x28_5), zx.q(fp_5))
                                            *(x0_33 + 8) = x0_35
                                            
                                            if ((zx.d(*(x0_35 + 0xcd)) & 8) == 0)
                                            label_bcbaac:
                                                
                                                if (x22_1.d u>= 0x320)
                                                    void* x0_38 = __emutls_get_address(
                                                        __emutls_v.gContextStack_tl)
                                                    void* x8_50 =
                                                        x0_38 + sx.q(*(x0_38 + 0x13000)) * 0x98
                                                    *(*(x8_50 - 0x90) + 0x1a28) = 0xffffffff
                                                    void* x8_51 = *(x8_50 - 0x90)
                                                    *(x8_51 + 0x1a2c) = *(x8_51 + 0x1a24)
                                                    XTrace("game thread yield (error)")
                                                    xco_yield()
                                                    XTrace("game thread resume (error)")
                                                
                                                int32_t x28_6 = *(x24_1 + 0x1a70)
                                                int32_t fp_6 = *(arg1 + 0xd50)
                                                int32_t x8_53 = (x28_6 + (fp_6 << 0x10)) s% 0x3e5
                                                int32_t* x9_51 =
                                                    *(&data_1838a20 + (sx.q(x8_53) << 3))
                                                
                                                if (x9_51 != 0)
                                                    while (*x9_51 != x28_6 || x9_51[1] != fp_6)
                                                        x9_51 = *(x9_51 + 0x10)
                                                        
                                                        if (x9_51 == 0)
                                                            goto label_bcbb44
                                                    
                                                    if ((zx.d(*(*(x9_51 + 8) + 0xcb)) & 8) != 0)
                                                        goto label_bcbb84
                                                    
                                                    goto label_bcbe18
                                                
                                            label_bcbb44:
                                                DomDefGetSlow(zx.q(x28_6), zx.q(fp_6))
                                                int32_t* x0_40 = malloc(0x18)
                                                int64_t x8_54 = sx.q(x8_53) << 3
                                                int64_t x9_52 = *(&data_1838a20 + x8_54)
                                                *x0_40 = x28_6
                                                x0_40[1] = fp_6
                                                *(&data_1838a20 + x8_54) = x0_40
                                                *(x0_40 + 0x10) = x9_52
                                                void* x0_42 = DomDefGetSlow(zx.q(x28_6), zx.q(fp_6))
                                                *(x0_40 + 8) = x0_42
                                                int32_t var_64
                                                
                                                if ((zx.d(*(x0_42 + 0xcb)) & 8) == 0)
                                                label_bcbe18:
                                                    
                                                    if (x22_1.d u>= 0x320)
                                                        void* x0_57 = __emutls_get_address(
                                                            __emutls_v.gContextStack_tl)
                                                        void* x8_67 =
                                                            x0_57 + sx.q(*(x0_57 + 0x13000)) * 0x98
                                                        *(*(x8_67 - 0x90) + 0x1a28) = 0xffffffff
                                                        void* x8_68 = *(x8_67 - 0x90)
                                                        *(x8_68 + 0x1a2c) = *(x8_68 + 0x1a24)
                                                        XTrace("game thread yield (error)")
                                                        xco_yield()
                                                        XTrace("game thread resume (error)")
                                                    
                                                    if (CountOngoing(arg1, zx.q(var_468_1), 8, 
                                                            *(x24_1 + 0x1a70), 0) s<= 0)
                                                        int32_t var_4f0_1 = *(arg4 + 0xddc)
                                                        int32_t var_4e0_1 = *(arg4 + 0xe48)
                                                        int32_t var_500_1 = *(arg4 + 0xd70)
                                                        void* __offset(CanBuyInfo, 0xd74) 
                                                            var_4f8_1 = arg4 + 0xd74
                                                        int32_t var_520_1 = *(arg4 + 0xc90)
                                                        int32_t var_4d0_1 = *(arg4 + 0xc9c)
                                                        int32_t var_4d8_1 = *(arg4 + 0xc98)
                                                        void* __offset(CanBuyInfo, 0xde0) 
                                                            var_4e8_1 = arg4 + 0xde0
                                                        void* __offset(CanBuyInfo, 0xca0) 
                                                            var_510_1 = arg4 + 0xca0
                                                        void* __offset(CanBuyInfo, 0xd08) 
                                                            var_508_1 = arg4 + 0xd08
                                                        int32_t var_518_1 = *(arg4 + 0xc94)
                                                        void* __offset(CanBuyInfo, 0x10) 
                                                            var_528_1 = arg4 + 0x10
                                                        char var_530_1 = *(arg4 + 0xd)
                                                        
                                                        if ((CanBuy_Fast(arg1, zx.q(var_468_1), 
                                                                zx.q(x27_1), &var_64, zx.q(*arg4), 
                                                                zx.q(*(arg4 + 4)), zx.q(*(arg4 + 8)), 
                                                                zx.q(*(arg4 + 0xc))) & 1) != 0)
                                                            uint32_t x9_57 = zx.d(var_64.b)
                                                            int32_t* x8_64 =
                                                                arg3 + (sx.q(var_46c) << 3)
                                                            *x8_64 = x27_1
                                                            x8_64[1] = x9_57
                                                            var_46c += 1
                                                else
                                                label_bcbb84:
                                                    
                                                    if (x22_1.d u>= 0x320)
                                                        void* x0_44 = __emutls_get_address(
                                                            __emutls_v.gContextStack_tl)
                                                        void* x8_58 =
                                                            x0_44 + sx.q(*(x0_44 + 0x13000)) * 0x98
                                                        *(*(x8_58 - 0x90) + 0x1a28) = 0xffffffff
                                                        void* x8_59 = *(x8_58 - 0x90)
                                                        *(x8_59 + 0x1a2c) = *(x8_59 + 0x1a24)
                                                        XTrace("game thread yield (error)")
                                                        xco_yield()
                                                        XTrace("game thread resume (error)")
                                                    
                                                    int32_t x28_7 = *(x24_1 + 0x1a70)
                                                    var_64 = 0
                                                    int32_t x0_46
                                                    int32_t x15_1
                                                    int32_t x17_1
                                                    x0_46, x15_1, x17_1 = ProjectIsOwned(arg1, 
                                                        zx.q(var_468_1), zx.q(x28_7), &var_64)
                                                    int32_t x0_48
                                                    
                                                    if ((x0_46 & 1) != 0)
                                                        x0_48, x15_1, x17_1 = CountOngoing(arg1, 
                                                            zx.q(var_468_1), 0x30, x28_7, 0)
                                                    
                                                    if ((x0_46 & 1) == 0 || x0_48 s>= 1)
                                                        uint64_t x8_60 = zx.q(*(arg1 + 0x19ac))
                                                        
                                                        if (x8_60.d s>= 1)
                                                            int32_t x10_23
                                                            int64_t j_4
                                                            int32_t x12_1
                                                            
                                                            if (x8_60.d u>= 3)
                                                                void* __offset(DomGame, 0x15f88) 
                                                                    x12_5 = arg1 + 0x15f88
                                                                j_4 = x8_60 & 0xfffffffe
                                                                int32_t x10_29 = 0
                                                                int32_t x11_3 = 0
                                                                int64_t j_3 = j_4
                                                                int64_t j
                                                                
                                                                do
                                                                    int32_t x14_4 = *(x12_5 - 0x1c)
                                                                    
                                                                    if (x14_4 == var_468_1)
                                                                        x15_1 = *(x12_5 - 0x20)
                                                                    
                                                                    int32_t x16_1 = *(x12_5 + 4)
                                                                    
                                                                    if (x16_1 == var_468_1)
                                                                        x17_1 = *x12_5
                                                                    
                                                                    int32_t x15_4 = x15_1 == 0xe01 ? 1 : 0
                                                                    int32_t x14_6 =
                                                                        x15_4 & (x14_4 == var_468_1 ? 1 : 0)
                                                                    int32_t x17_2 = x17_1 == 0xe01 ? 1 : 0
                                                                    
                                                                    if (x14_6 == 1)
                                                                        x15_4 = *(x12_5 - 0x18)
                                                                    
                                                                    int32_t x16_3 =
                                                                        x17_2 & (x16_1 == var_468_1 ? 1 : 0)
                                                                    
                                                                    if (x16_3 != 0)
                                                                        x17_2 = *(x12_5 + 8)
                                                                    
                                                                    int32_t x1_18 = x17_2 == 0x3f1 ? 1 : 0
                                                                    int32_t x0_52
                                                                    int32_t x1_16
                                                                    
                                                                    if ((((x15_4 != 0x3f1 ? 1 : 0)
                                                                            | (x14_6 ^ 1)) & 1) != 0)
                                                                        x0_52 = 0
                                                                        x1_16 = x1_18 & x16_3
                                                                        
                                                                        if (x1_16 != 0)
                                                                            x1_16 = *(x12_5 + 0x14)
                                                                    else
                                                                        x0_52 = *(x12_5 - 0xc)
                                                                        x1_16 = x1_18 & x16_3
                                                                        
                                                                        if (x1_16 != 0)
                                                                            x1_16 = *(x12_5 + 0x14)
                                                                    
                                                                    x17_1 = x17_2 != 0x3f1 ? 1 : 0
                                                                    x15_1 = x15_4 != 0x3f1 ? 1 : 0
                                                                    int32_t x14_2
                                                                    
                                                                    if ((x14_6 & x15_1) != 0)
                                                                        x14_2 = 0
                                                                    else
                                                                        x14_2 = x0_52
                                                                    
                                                                    x10_29 += x14_2
                                                                    int32_t x14_3
                                                                    
                                                                    if ((x16_3 & x17_1) != 0)
                                                                        x14_3 = 0
                                                                    else
                                                                        x14_3 = x1_16
                                                                    
                                                                    j = j_3
                                                                    j_3 -= 2
                                                                    x11_3 += x14_3
                                                                    x12_5 += 0x40
                                                                while (j != 2)
                                                                x12_1 = var_468_1
                                                                x10_23 = x11_3 + x10_29
                                                                
                                                                if (j_4 != x8_60)
                                                                    goto label_bcbe74
                                                            else
                                                                x12_1 = var_468_1
                                                                j_4 = 0
                                                                x10_23 = 0
                                                            label_bcbe74:
                                                                int64_t j_2 = x8_60 - j_4
                                                                void* x11_5 =
                                                                    arg1 + 0x15f68 + (j_4 << 5)
                                                                int64_t j_1
                                                                
                                                                do
                                                                    if (*(x11_5 + 4) == x12_1
                                                                            && *x11_5 == 0xe01
                                                                            && *(x11_5 + 8) == 0x3f1)
                                                                        x10_23 += *(x11_5 + 0x14)
                                                                    
                                                                    j_1 = j_2
                                                                    j_2 -= 1
                                                                    x11_5 += 0x20
                                                                while (j_1 != 1)
                                                            
                                                            if (x10_23 != 0)
                                                                goto label_bcbe18
        
        i += 1
    while (i != zx.q(x8))

return zx.q(var_46c)
