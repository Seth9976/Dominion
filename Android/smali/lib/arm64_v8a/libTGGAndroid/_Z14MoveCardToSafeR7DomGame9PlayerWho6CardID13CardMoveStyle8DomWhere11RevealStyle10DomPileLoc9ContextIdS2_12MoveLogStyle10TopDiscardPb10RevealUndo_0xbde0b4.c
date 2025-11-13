// 函数: _Z14MoveCardToSafeR7DomGame9PlayerWho6CardID13CardMoveStyle8DomWhere11RevealStyle10DomPileLoc9ContextIdS2_12MoveLogStyle10TopDiscardPb10RevealUndo
// 地址: 0xbde0b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_cec = arg4
int32_t x19 = arg2
int32_t var_ce4 = arg3
int64_t x25 = arg7
int32_t x23 = arg6
int32_t x28 = arg5
int32_t var_ce0
int32_t x0 = CardsWhere(arg1, 0xffffffff, 5, &var_ce0)

if (x0 != 0)
    if (x0 != 1)
        void* x0_2 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_3 = x0_2 + sx.q(*(x0_2 + 0x13000)) * 0x98
        *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_4 = *(x8_3 - 0x90)
        *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x0 = var_ce0

if (x0 == arg3)
    void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_7 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
    *(*(x8_7 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_8 = *(x8_7 - 0x90)
    *(x8_8 + 0x1a2c) = *(x8_8 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x27 = var_ce4
uint64_t x24 = zx.q(x27.w)

if (x24.d u>= 0x320)
    void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_11 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
    *(*(x8_11 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_12 = *(x8_11 - 0x90)
    *(x8_12 + 0x1a2c) = *(x8_12 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x8_14 = *(arg1 + x24 * 0x68 + 0x1a74)
int32_t x22_1 = arg11.d

if ((x27 & 0xffe0) u>= 0x320)
    void* x0_8 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_18 = x0_8 + sx.q(*(x0_8 + 0x13000)) * 0x98
    *(*(x8_18 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_19 = *(x8_18 - 0x90)
    *(x8_19 + 0x1a2c) = *(x8_19 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t var_d08
int32_t var_d04

if (x24.d u> 0x31f)
    void* x0_11 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_24 = x0_11 + sx.q(*(x0_11 + 0x13000)) * 0x98
    *(*(x8_24 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_25 = *(x8_24 - 0x90)
    *(x8_25 + 0x1a2c) = *(x8_25 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    void* x8_27 = x0_11 + sx.q(*(x0_11 + 0x13000)) * 0x98
    void* x19_1 = arg1 + x24 * 0x68
    var_d04 = *(x19_1 + 0x1a94)
    *(*(x8_27 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_28 = *(x8_27 - 0x90)
    *(x8_28 + 0x1a2c) = *(x8_28 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    var_d08 = *(x19_1 + 0x1a98)
    RevealCard(arg1, zx.q(x27), zx.q(x19), zx.q(x23), zx.q(x22_1))
    void* x8_31 = x0_11 + sx.q(*(x0_11 + 0x13000)) * 0x98
    *(*(x8_31 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_32 = *(x8_31 - 0x90)
    *(x8_32 + 0x1a2c) = *(x8_32 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
else
    void* x8_21 = arg1 + x24 * 0x68
    var_d08 = *(x8_21 + 0x1a98)
    var_d04 = *(x8_21 + 0x1a94)
    RevealCard(arg1, zx.q(x27), zx.q(x19), zx.q(x23), zx.q(x22_1))

void* x21_2 = arg1 + x24 * 0x68

if (*(x21_2 + 0x1a70) == 0x1025 && x28 != 0x3e9 && x28 != 0x451)
    int32_t x8_34 = *(arg1 + 0x19ac)
    
    if (x8_34 s>= 1)
        int64_t i = 0
        void* __offset(DomGame, 0x15f7c) x26_2 = arg1 + 0x15f7c
        
        do
            if (*(x26_2 - 0xc) == 0x474 && *(x26_2 - 8) == x27)
                ModifyToken(arg1, zx.q(i.d), neg.d(*x26_2), 0, 0)
                x8_34 = *(arg1 + 0x19ac)
            
            i += 1
            x26_2 += 0x20
        while (i s< sx.q(x8_34))

int32_t x22_2 = (x25 u>> 0x20).d
CardRemove(arg1, zx.q(x27), arg12)
uint64_t x26_3 = zx.q(x28 - 0x3e9)

if (x28 != 0x3e9 && x28 != 0x451)
    int32_t x8_36 = *(arg1 + 0x150c)
    
    if (x8_36 - 3 u>= 4)
        int64_t var_d28_1 = 0
        int32_t var_d30_1 = 0
        int32_t var_d38_1 = 0
        int32_t var_d40_1 = 0
        DomNotifyEffect(zx.q(x8_36 == 2 ? 1 : 0), 0x16, zx.q(x19), zx.q(x27), 0, 0, 0, 0)
        int32_t x8_37 = *(arg1 + 0x150c)
        
        if (x8_37 - 3 u>= 4)
            int64_t var_d28_2 = 0
            int32_t var_d30_2 = 0
            int32_t var_d38_2 = 0
            int32_t var_d40_2 = 0
            DomNotifyEffect(zx.q(x8_37 == 2 ? 1 : 0), 0x16, zx.q(x19), zx.q(x27), 7, 0, 0, 0)

void* result

if (x25.d == 0xfffffffe)
    result = CardAddAt(arg1, zx.q(x27), zx.q(x28), zx.q(x19), x22_2)
    int32_t x8_43
    
    if (x28 == 0)
    label_bde5d0:
        void* x0_21 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_41 = x0_21 + sx.q(*(x0_21 + 0x13000)) * 0x98
        *(*(x8_41 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_42 = *(x8_41 - 0x90)
        *(x8_42 + 0x1a2c) = *(x8_42 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        result = XTrace("game thread resume (error)")
        x8_43 = *(arg1 + 0x150c)
        
        if (x8_43 - 3 u< 4)
            goto label_bde5b4
        
        goto label_bde654
    
label_bde5a4:
    x8_43 = *(arg1 + 0x150c)
    int32_t x12_1
    
    if (x8_43 - 3 u< 4)
    label_bde5b4:
        x12_1 = var_cec
        
        if (x12_1 - 9 u>= 2 && arg10.d == 0)
            goto label_bde680
        
        goto label_bdee5c
    
label_bde654:
    int64_t var_d28_3 = arg8
    int32_t var_d30_3 = 0
    int32_t var_d38_3 = 0
    int32_t var_d40_3 = arg9.d
    result = DomNotifyEffect(zx.q(x8_43 == 2 ? 1 : 0), 9, zx.q(x19), zx.q(x27), zx.q(x28), 
        zx.q(x25.d), zx.q(x22_2), zx.q(var_cec))
    x12_1 = var_cec
    
    if (x12_1 - 9 u< 2 || arg10.d != 0)
        goto label_bdee5c
    
label_bde680:
    uint64_t x8_47 = zx.q(x12_1 - 0x10)
    DomGame& x0_23
    uint64_t x1_7
    uint64_t x2_10
    int64_t x3_9
    CardID* x5_1
    uint64_t x7_1
    
    if (x8_47.d u> 6)
    label_bde7ac:
        int32_t x8_60 = arg13.d
        bool cond:4_1
        
        if (x26_3.d u> 0x68)
            if (x28 - 2 u< 2 || x19 == 0xffffffff)
                goto label_bdee5c
            
        label_bde864:
            
            if (x23 u<= 0xc)
                int32_t x9_35 = 1 << x23
                
                if ((x9_35 & 0xdbe) != 0)
                    x3_9 = 0x27
                    
                    if (*(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
                        goto label_bdee5c
                    
                label_bde8a8:
                    x5_1 = &var_ce4
                    
                    if (*(arg1 + 0x19d4) == x19)
                        x2_10 = zx.q(*(arg1 + 0x19d8))
                    else
                        x2_10 = zx.q(x19)
                    
                    x0_23 = arg1
                    x1_7 = zx.q(x19)
                    x7_1 = zx.q(x28)
                    int32_t var_d30_8 = 0
                    int32_t var_d38_8 = x8_60
                    int32_t var_d40_7 = 0
                    goto label_bde7a4
                
                if ((x9_35 & 0x201) != 0)
                    x3_9 = 0x28
                    
                    if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
                        goto label_bde8a8
                    
                    goto label_bdee5c
        else
            switch (x26_3)
                case 0, 4, 5, 6, 7, 0x68
                    goto label_bdee5c
                case 1
                    if (x12_1 u<= 0xe && (1 << x12_1 & 0x6001) != 0)
                        goto label_bdee5c
                    
                    if (x23 u<= 0xc)
                        int32_t x9_29 = 1 << x23
                        
                        if ((x9_29 & 0xdbe) != 0)
                            x3_9 = 0x27
                            
                            if (*(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
                                goto label_bdee5c
                            
                        label_bde830:
                            x5_1 = &var_ce4
                            
                            if (*(arg1 + 0x19d4) == x19)
                                x2_10 = zx.q(*(arg1 + 0x19d8))
                            else
                                x2_10 = zx.q(x19)
                            
                            x7_1 = 0x3ea
                            int32_t var_d30_7 = 0
                            int32_t var_d38_7 = x8_60
                            goto label_bdec10
                        
                        if ((x9_29 & 0x201) != 0)
                            x3_9 = 0x28
                            
                            if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
                                goto label_bde830
                            
                            goto label_bdee5c
                case 2
                    cond:4_1 = x23 u> 0xc
                    
                    if (x25.d == 0)
                    label_bdebb4:
                        
                        if (not(cond:4_1))
                            int32_t x9_56 = 1 << x23
                            
                            if ((x9_56 & 0xdbe) != 0)
                                x3_9 = 0x27
                                
                                if (*(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
                                    goto label_bdee5c
                                
                            label_bdebf4:
                                int32_t var_d30_11 = 0
                                int32_t var_d38_11 = x8_60
                                
                                if (*(arg1 + 0x19d4) == x19)
                                    x2_10 = zx.q(*(arg1 + 0x19d8))
                                else
                                    x2_10 = zx.q(x19)
                                
                                x5_1 = &var_ce4
                                x7_1 = 0x3eb
                            label_bdec10:
                                int32_t var_d40_8 = 0
                            label_bdec80:
                                x0_23 = arg1
                                x1_7 = zx.q(x19)
                                goto label_bde7a4
                            
                            if ((x9_56 & 0x201) != 0)
                                x3_9 = 0x28
                                
                                if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
                                    goto label_bdebf4
                                
                                goto label_bdee5c
                    else if (x23 u<= 0xc)
                        goto label_bdec24
                case 3
                    int32_t var_d40_11
                    uint64_t x2_11
                    
                    if (x8_14 == 0x44d)
                        if (*(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
                            return result
                        
                        int32_t var_d30_14 = 0
                        int32_t var_d38_14 = x8_60
                        
                        if (*(arg1 + 0x19d4) == x19)
                            x2_11 = zx.q(*(arg1 + 0x19d8))
                        else
                            x2_11 = zx.q(x19)
                        
                        var_d40_11 = 0
                        return DomAddLogEvent(arg1, zx.q(x19), x2_11, 0x27, 0, &var_ce4, 1, 0x3ec)
                    
                    if (x8_14 != 0x453)
                        goto label_bdee5c
                    
                    if (*(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
                        return result
                    
                    if (*(arg1 + 0x19d4) == x19)
                        x2_11 = zx.q(*(arg1 + 0x19d8))
                    else
                        x2_11 = zx.q(x19)
                    
                    int32_t var_d30_9 = 0
                    int32_t var_d38_9 = x8_60
                    var_d40_11 = 0
                    return DomAddLogEvent(arg1, zx.q(x19), x2_11, 0x28, 0, &var_ce4, 1, 0x3ec)
                case 8
                    if (x24.d u>= 0x320)
                        void* x0_25 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_63 = x0_25 + sx.q(*(x0_25 + 0x13000)) * 0x98
                        *(*(x8_63 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_64 = *(x8_63 - 0x90)
                        *(x8_64 + 0x1a2c) = *(x8_64 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    int32_t x22_3 = *(x21_2 + 0x1a70)
                    int32_t x24_1 = *(arg1 + 0xd50)
                    int32_t x8_69 = (x22_3 + (x24_1 << 0x10)) s% 0x3e5
                    int32_t* x9_48 = *(&data_1838a20 + (sx.q(x8_69) << 3))
                    
                    if (x9_48 != 0)
                        while (*x9_48 != x22_3 || x9_48[1] != x24_1)
                            x9_48 = *(x9_48 + 0x10)
                            
                            if (x9_48 == 0)
                                goto label_bde9f4
                        
                        result = *(x9_48 + 8)
                    else
                    label_bde9f4:
                        DomDefGetSlow(zx.q(x22_3), zx.q(x24_1))
                        int32_t* x0_27 = malloc(0x18)
                        int64_t x8_70 = sx.q(x8_69) << 3
                        int64_t x9_49 = *(&data_1838a20 + x8_70)
                        *x0_27 = x22_3
                        x0_27[1] = x24_1
                        *(&data_1838a20 + x8_70) = x0_27
                        *(x0_27 + 0x10) = x9_49
                        result = DomDefGetSlow(zx.q(x22_3), zx.q(x24_1))
                        *(x0_27 + 8) = result
                    
                    if ((zx.d(*(result + 0xcb)) & 4) != 0)
                        if (*(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
                            goto label_bdee5c
                        
                        int32_t var_d30_13 = 0
                        int32_t var_d38_13 = 0
                        
                        if (*(arg1 + 0x19d4) == x19)
                            x2_10 = zx.q(*(arg1 + 0x19d8))
                        else
                            x2_10 = zx.q(x19)
                        
                        x5_1 = &var_ce4
                        x3_9 = 0x36
                        int32_t var_d40_10 = 0
                        x0_23 = arg1
                        x1_7 = zx.q(x19)
                        goto label_bde748
                    
                    if (x24.d u>= 0x320)
                        void* x0_30 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_74 = x0_30 + sx.q(*(x0_30 + 0x13000)) * 0x98
                        *(*(x8_74 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_75 = *(x8_74 - 0x90)
                        *(x8_75 + 0x1a2c) = *(x8_75 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    int32_t x22_4 = *(x21_2 + 0x1a70)
                    int32_t x23_3 = *(arg1 + 0xd50)
                    int32_t x8_80 = (x22_4 + (x23_3 << 0x10)) s% 0x3e5
                    int32_t* x9_53 = *(&data_1838a20 + (sx.q(x8_80) << 3))
                    
                    if (x9_53 != 0)
                        while (*x9_53 != x22_4 || x9_53[1] != x23_3)
                            x9_53 = *(x9_53 + 0x10)
                            
                            if (x9_53 == 0)
                                goto label_bdeafc
                        
                        result = *(x9_53 + 8)
                    else
                    label_bdeafc:
                        DomDefGetSlow(zx.q(x22_4), zx.q(x23_3))
                        int32_t* x0_32 = malloc(0x18)
                        int64_t x8_81 = sx.q(x8_80) << 3
                        int64_t x9_54 = *(&data_1838a20 + x8_81)
                        *x0_32 = x22_4
                        x0_32[1] = x23_3
                        *(&data_1838a20 + x8_81) = x0_32
                        *(x0_32 + 0x10) = x9_54
                        result = DomDefGetSlow(zx.q(x22_4), zx.q(x23_3))
                        *(x0_32 + 8) = result
                    
                    if ((zx.d(*(result + 0xcb)) & 0x40) == 0 || *(arg1 + 0x150c) - 3 u< 4
                            || zx.d(*(arg1 + 0x1508)) != 0)
                        goto label_bdee5c
                    
                    x1_7 = zx.q(x19)
                    x5_1 = &var_ce4
                    
                    if (*(arg1 + 0x19d4) == x19)
                        x2_10 = zx.q(*(arg1 + 0x19d8))
                    else
                        x2_10 = zx.q(x19)
                    
                    x3_9 = 0x37
                    int32_t var_d30_10 = 0
                    int32_t var_d38_10 = 0
                label_bde73c:
                    x0_23 = arg1
                    int32_t var_d40_5 = 0
                label_bde748:
                    x7_1 = 0
                label_bde7a4:
                    result = DomAddLogEvent(x0_23, x1_7, x2_10, x3_9, 0, x5_1, 1, x7_1)
                label_bdee5c:
                    
                    if (x8_14 - 1 u<= 0x47)
                        result = UpdateSplitPileInfo(arg1, zx.q(x8_14))
                    
                    if (x28 - 1 u> 0x47)
                        return result
                    
                    return UpdateSplitPileInfo(arg1, zx.q(x28))
                case 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 
                        0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 
                        0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 
                        0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 
                        0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 
                        0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 
                        0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 
                        0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x66
                    if (x19 == 0xffffffff)
                        goto label_bdee5c
                    
                    goto label_bde864
                case 0x65
                    if (x25.d == 0xffffffff)
                        goto label_bdec18
                    
                    cond:4_1 = x23 u> 0xc
                    
                    if (x25.d == 0)
                        goto label_bdebb4
                    
                    if (x23 u<= 0xc)
                        int32_t x9_73 = 1 << x23
                        
                        if ((x9_73 & 0xdbe) != 0)
                            x3_9 = 0x27
                            
                            if (*(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
                                goto label_bdee5c
                            
                        label_bdeda0:
                            int32_t var_d30_15 = 0
                            int32_t var_d38_15 = x8_60
                            
                            if (*(arg1 + 0x19d4) == x19)
                                x2_10 = zx.q(*(arg1 + 0x19d8))
                            else
                                x2_10 = zx.q(x19)
                            
                            x5_1 = &var_ce4
                            x7_1 = 0x44e
                            int32_t var_d40_12 = x22_2
                            goto label_bdec80
                        
                        if ((x9_73 & 0x201) != 0)
                            x3_9 = 0x28
                            
                            if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
                                goto label_bdeda0
                            
                            goto label_bdee5c
                case 0x67
                label_bdec18:
                    
                    if (x23 u<= 0xc)
                    label_bdec24:
                        int32_t x9_61 = 1 << x23
                        
                        if ((x9_61 & 0xdbe) != 0)
                            x3_9 = 0x27
                            
                            if (*(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
                                goto label_bdee5c
                            
                        label_bdec5c:
                            int32_t var_d38_12 = x8_60
                            
                            if (*(arg1 + 0x19d4) == x19)
                                x2_10 = zx.q(*(arg1 + 0x19d8))
                            else
                                x2_10 = zx.q(x19)
                            
                            int32_t var_d30_12 = 0
                            x5_1 = &var_ce4
                            x7_1 = 0x3eb
                            int32_t var_d40_9 = 0xffffffff
                            goto label_bdec80
                        
                        if ((x9_61 & 0x201) != 0)
                            x3_9 = 0x28
                            
                            if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
                                goto label_bdec5c
                            
                            goto label_bdee5c
    else
        switch (x8_47)
            case 0
                goto label_bdee5c
            case 1
                if (*(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
                    goto label_bdee5c
                
                x1_7 = zx.q(var_d08)
                x7_1 = zx.q(var_d04)
                int32_t var_d30_4 = 0
                int32_t var_d38_4 = 0
                
                if (*(arg1 + 0x19d4) == x1_7.d)
                    x2_10 = zx.q(*(arg1 + 0x19d8))
                else
                    x2_10 = zx.q(x1_7.d)
                
                x5_1 = &var_ce4
                x3_9 = 0x26
                int32_t var_d40_4 = 0
                x0_23 = arg1
                goto label_bde7a4
            case 2, 3, 4
                goto label_bde7ac
            case 5
                if (*(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
                    goto label_bdee5c
                
                x1_7 = zx.q(var_d08)
                int32_t var_d30_5 = 0
                int32_t var_d38_5 = 0
                
                if (*(arg1 + 0x19d4) == x1_7.d)
                    x2_10 = zx.q(*(arg1 + 0x19d8))
                else
                    x2_10 = zx.q(x1_7.d)
                
                x5_1 = &var_ce4
                x3_9 = 0x35
                goto label_bde73c
            case 6
                if (*(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
                    goto label_bdee5c
                
                x1_7 = zx.q(var_d04)
                int32_t var_d30_6 = 0
                int32_t var_d38_6 = 0
                
                if (*(arg1 + 0x19d4) == x1_7.d)
                    x2_10 = zx.q(*(arg1 + 0x19d8))
                else
                    x2_10 = zx.q(x1_7.d)
                
                x5_1 = &var_ce4
                x3_9 = 0x1a
                int32_t var_d40_6 = 0
                x0_23 = arg1
                x7_1 = zx.q(x19)
                goto label_bde7a4
else
    if (x25.d == 0)
        result = CardAddHead(arg1, zx.q(x27), zx.q(x28), zx.q(x19))
        
        if (x28 == 0)
            goto label_bde5d0
        
        goto label_bde5a4
    
    if (x25.d == 0xffffffff)
        result = CardAddTail(arg1, zx.q(x27), zx.q(x28), zx.q(x19))
        
        if (x28 != 0)
            goto label_bde5a4
        
        goto label_bde5d0
pthread_kill(pthread_self(), 6)
return GetTokenName(XNoReturn()) __tailcall
