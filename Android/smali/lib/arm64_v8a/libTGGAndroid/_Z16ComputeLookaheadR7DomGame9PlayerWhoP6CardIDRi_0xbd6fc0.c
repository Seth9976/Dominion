// 函数: _Z16ComputeLookaheadR7DomGame9PlayerWhoP6CardIDRi
// 地址: 0xbd6fc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_df8 = arg2.d
int16_t var_ce4[0x640]
int32_t x0
int32_t x5
int32_t x15
int32_t x17
x0, x5, x15, x17 = CardsWhere(arg1, arg2, 0x3ea, &var_ce4)
int32_t x20

if (x0 s< 1)
    x20 = 0
else
    int64_t i = 0
    x20 = 0
    
    do
        uint64_t x26_1 = zx.q(var_ce4[i * 2])
        
        if (x26_1.d u>= 0x320)
            void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_6 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
            *(*(x8_6 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_7 = *(x8_6 - 0x90)
            *(x8_7 + 0x1a2c) = *(x8_7 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        void* x8_8 = arg1 + x26_1 * 0x68
        int32_t x23_1 = CardIsFast(arg1, zx.q(*(x8_8 + 0x1a70)), 4)
        
        if (x26_1.d u>= 0x320)
            void* x0_11 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_10 = x0_11 + sx.q(*(x0_11 + 0x13000)) * 0x98
            *(*(x8_10 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_11 = *(x8_10 - 0x90)
            *(x8_11 + 0x1a2c) = *(x8_11 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
            CardIsFast(arg1, zx.q(*(x8_8 + 0x1a70)), 2)
            void* x8_13 = x0_11 + sx.q(*(x0_11 + 0x13000)) * 0x98
            *(*(x8_13 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_14 = *(x8_13 - 0x90)
            *(x8_14 + 0x1a2c) = *(x8_14 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            x5, x15, x17 = XTrace("game thread resume (error)")
        else
            x5, x15, x17 = CardIsFast(arg1, zx.q(*(x8_8 + 0x1a70)), 2)
        
        int32_t x27_2 = *(x8_8 + 0x1a70)
        int32_t x28_2 = *(arg1 + 0xd50)
        int32_t x8_16 = (x27_2 + (x28_2 << 0x10)) s% 0x3e5
        int32_t* x9_12 = *(&data_1838a20 + (sx.q(x8_16) << 3))
        
        if (x9_12 != 0)
            while (*x9_12 != x27_2 || x9_12[1] != x28_2)
                x9_12 = *(x9_12 + 0x10)
                
                if (x9_12 == 0)
                    goto label_bd7020
        else
        label_bd7020:
            DomDefGetSlow(zx.q(x27_2), zx.q(x28_2))
            int32_t* x0_2 = malloc(0x18)
            int64_t x8_1 = sx.q(x8_16) << 3
            int64_t x9_1 = *(&data_1838a20 + x8_1)
            *x0_2 = x27_2
            x0_2[1] = x28_2
            *(&data_1838a20 + x8_1) = x0_2
            *(x0_2 + 0x10) = x9_1
            int64_t x0_4
            x0_4, x5, x15, x17 = DomDefGetSlow(zx.q(x27_2), zx.q(x28_2))
            *(x0_2 + 8) = x0_4
        
        i += 1
        x20 += x23_1 & 1
    while (i != zx.q(x0))

int32_t x23_2 = *(arg1 + 0x19f4)
int32_t var_64

if (x20 == 0 || x23_2 s> 1 || *(arg1 + muls.dp.d(var_df8, 0x5a30) + 0x18198) s<= 0)
    uint64_t x8_29 = zx.q(*(arg1 + 0x19ac))
    int32_t x25_2
    
    x25_2 = var_df8 == 0xffffffff ? 6 : 0x3f1
    
    int64_t x24_4 = sx.q(var_df8)
    
    if (x8_29.d s< 1)
    label_bd74d4:
        
        if (x23_2 s<= 2)
            goto label_bd74dc
        
        if (x23_2 == 3 && *(arg1 + x24_4 * 0x5a30 + 0x1819c) s> 0)
            return 5
        
        goto label_bd782c
    
    int32_t x10_4
    int64_t i_9
    
    if (x8_29.d u>= 3)
        i_9 = x8_29 & 0xfffffffe
        int32_t x10_5 = 0
        int32_t x11_1 = 0
        void* __offset(DomGame, 0x15f88) x12_1 = arg1 + 0x15f88
        int64_t i_7 = i_9
        int64_t i_1
        
        do
            int32_t x14_5 = *(x12_1 - 0x18)
            
            if (x14_5 == x25_2)
                x15 = *(x12_1 - 0x1c)
            
            int32_t x16_3 = *(x12_1 + 8)
            
            if (x16_3 == x25_2)
                x17 = *(x12_1 + 4)
            
            int32_t x2_3 = x15 == var_df8 ? 1 : 0
            int32_t x0_21 = x2_3 & (x14_5 == x25_2 ? 1 : 0)
            
            if (x0_21 == 1)
                x2_3 = *(x12_1 - 0x20)
            
            int32_t x1_9 = (x17 == var_df8 ? 1 : 0) & (x16_3 == x25_2 ? 1 : 0)
            
            if (x1_9 != 0)
                x5 = *x12_1
            
            int32_t x3_2 = x2_3 != 0xe00 ? 1 : 0
            int32_t x4_1 = x5 == 0xe00 ? 1 : 0
            
            if (((x3_2 | (x0_21 ^ 1)) & 1) == 0)
                x3_2 = *(x12_1 - 0xc)
            
            if ((x4_1 & x1_9) != 0)
                x4_1 = *(x12_1 + 0x14)
            
            int32_t x17_1 = x1_9 & (x5 != 0xe00 ? 1 : 0)
            x5 = x14_5 == x25_2 ? 1 : 0
            x15 = (x5 & (x15 != var_df8 ? 1 : 0)) | (x0_21 & (x2_3 != 0xe00 ? 1 : 0))
            x17 = ((x16_3 == x25_2 ? 1 : 0) & (x17 != var_df8 ? 1 : 0)) | x17_1
            int32_t x14_3
            
            if ((x15 | (x14_5 != x25_2 ? 1 : 0)) != 0)
                x14_3 = 0
            else
                x14_3 = x3_2
            
            x10_5 += x14_3
            int32_t x14_4
            
            if ((x17 | (x16_3 != x25_2 ? 1 : 0)) != 0)
                x14_4 = 0
            else
                x14_4 = x4_1
            
            i_1 = i_7
            i_7 -= 2
            x11_1 += x14_4
            x12_1 += 0x40
        while (i_1 != 2)
        x10_4 = x11_1 + x10_5
        
        if (i_9 != x8_29)
            goto label_bd7508
    else
        i_9 = 0
        x10_4 = 0
    label_bd7508:
        void* x11_3 = arg1 + (i_9 << 5) + 0x15f68
        int64_t i_6 = x8_29 - i_9
        int64_t i_2
        
        do
            if (*(x11_3 + 8) == x25_2 && *(x11_3 + 4) == var_df8 && *x11_3 == 0xe00)
                x10_4 += *(x11_3 + 0x14)
            
            i_2 = i_6
            i_6 -= 1
            x11_3 += 0x20
        while (i_2 != 1)
    
    if (x23_2 s>= 2 || x10_4 s< 1)
        goto label_bd74d4
    
    int32_t x0_23
    x0_23, x5, x15, x17 = CountOngoing(arg1, zx.q(var_df8), 0x12, 0, 0)
    
    if (x0_23 s< 1)
        int32_t x0_41 = GetHandActionCards(arg1, zx.q(var_df8), arg3)
        int32_t x21_5 = x0_41
        *arg4 = x0_41
        void* __offset(
            vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>, 
            0x10) var_d50 = _vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>
            + 0x10
        int64_t (* const var_d48_1)(CardID) = CannotPlayCard
        void* __offset(
            vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>, 
            0x10)* var_d30_1 = &var_d50
        void* __offset(
            vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>, 
            0x10)* x0_42
        
        if (x0_41 s< 1)
            x0_42 = &var_d50
        else
            int32_t x20_5 = 0
            x0_42 = &var_d50
            void* x22_5 = arg3
            var_64 = *arg3
            
            while (true)
                if (((*(*x0_42 + 0x30))() & 1) == 0)
                    x21_5 -= 1
                    x20_5 -= 1
                    *x22_5 = *(arg3 + (sx.q(x21_5) << 2))
                
                x0_42 = var_d30_1
                x20_5 += 1
                
                if (x20_5 s>= x21_5)
                    break
                
                x22_5 = arg3 + (sx.q(x20_5) << 2)
                var_64 = *x22_5
                
                if (x0_42 == 0)
                    goto label_bd79cc
        
        *arg4 = x21_5
        
        if (&var_d50 == x0_42)
            (*(*x0_42 + 0x20))()
        else if (x0_42 != 0)
            (*(*x0_42 + 0x28))()
        
        if (*arg4 != 0)
            return 2
    else
        x8_29 = zx.q(*(arg1 + 0x19ac))
    label_bd74dc:
        bool var_d54
        
        if (x8_29.d s< 1)
        label_bd7778:
            
            if (*(arg1 + x24_4 * 0x5a30 + 0x1819c) s< 1)
            label_bd782c:
                
                if (x23_2 s<= 4)
                    int32_t x0_37 = GetNightCards(arg1, zx.q(var_df8), arg3)
                    int32_t x21_4 = x0_37
                    *arg4 = x0_37
                    void* __offset(
                        vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>, 
                        0x10) var_df0 = _vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>
                        + 0x10
                    int64_t (* const var_de8_1)(CardID) = CannotPlayCard
                    void* __offset(
                        vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>, 
                        0x10)* var_dd0_1 = &var_df0
                    void* __offset(
                        vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>, 
                        0x10)* x0_38
                    
                    if (x0_37 s< 1)
                        x0_38 = &var_df0
                    else
                        int32_t x20_4 = 0
                        x0_38 = &var_df0
                        void* x22_4 = arg3
                        var_64 = *arg3
                        
                        while (true)
                            if (((*(*x0_38 + 0x30))() & 1) == 0)
                                x21_4 -= 1
                                x20_4 -= 1
                                *x22_4 = *(arg3 + (sx.q(x21_4) << 2))
                            
                            x0_38 = var_dd0_1
                            x20_4 += 1
                            
                            if (x20_4 s>= x21_4)
                                break
                            
                            x22_4 = arg3 + (sx.q(x20_4) << 2)
                            var_64 = *x22_4
                            
                            if (x0_38 == 0)
                                goto label_bd79cc
                    
                    *arg4 = x21_4
                    
                    if (&var_df0 == x0_38)
                        (*(*x0_38 + 0x20))()
                    else if (x0_38 != 0)
                        (*(*x0_38 + 0x28))()
                    
                    if (*arg4 != 0)
                        return 6
            else
                int32_t x0_33 = GetTreasureCards(arg1, zx.q(var_df8), arg3, 2, &var_d54)
                int32_t x21_3 = x0_33
                *arg4 = x0_33
                void* __offset(
                    vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>, 
                    0x10) var_dc0 = _vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>
                    + 0x10
                int64_t (* const var_db8_1)(CardID) = CannotPlayCard
                void* __offset(
                    vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>, 
                    0x10)* var_da0_1 = &var_dc0
                void* __offset(
                    vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>, 
                    0x10)* x0_34
                
                if (x0_33 s< 1)
                    x0_34 = &var_dc0
                else
                    int32_t x20_3 = 0
                    x0_34 = &var_dc0
                    void* x22_3 = arg3
                    var_64 = *arg3
                    
                    while (true)
                        if (((*(*x0_34 + 0x30))() & 1) == 0)
                            x21_3 -= 1
                            x20_3 -= 1
                            *x22_3 = *(arg3 + (sx.q(x21_3) << 2))
                        
                        x0_34 = var_da0_1
                        x20_3 += 1
                        
                        if (x20_3 s>= x21_3)
                            break
                        
                        x22_3 = arg3 + (sx.q(x20_3) << 2)
                        var_64 = *x22_3
                        
                        if (x0_34 == 0)
                            goto label_bd79cc
                
                *arg4 = x21_3
                
                if (&var_dc0 == x0_34)
                    (*(*x0_34 + 0x20))()
                else if (x0_34 != 0)
                    (*(*x0_34 + 0x28))()
                
                if (*arg4 != 0)
                    return 4
        else
            uint64_t x8_30 = zx.q(x8_29.d)
            int32_t x10_6
            int64_t i_10
            
            if (x8_29.d u>= 3)
                i_10 = x8_30 & 0xfffffffe
                int32_t x10_7 = 0
                int32_t x11_4 = 0
                void* __offset(DomGame, 0x15f88) x12_6 = arg1 + 0x15f88
                int64_t i_8 = i_10
                int64_t i_3
                
                do
                    int32_t x14_10 = *(x12_6 - 0x18)
                    
                    if (x14_10 == x25_2)
                        x15 = *(x12_6 - 0x1c)
                    
                    int32_t x16_6 = *(x12_6 + 8)
                    
                    if (x16_6 == x25_2)
                        x17 = *(x12_6 + 4)
                    
                    int32_t x2_6 = x15 == var_df8 ? 1 : 0
                    int32_t x0_27 = x2_6 & (x14_10 == x25_2 ? 1 : 0)
                    
                    if (x0_27 == 1)
                        x2_6 = *(x12_6 - 0x20)
                    
                    int32_t x1_14 = (x17 == var_df8 ? 1 : 0) & (x16_6 == x25_2 ? 1 : 0)
                    
                    if (x1_14 != 0)
                        x5 = *x12_6
                    
                    int32_t x3_4 = x2_6 != 0xc00 ? 1 : 0
                    int32_t x4_3 = x5 == 0xc00 ? 1 : 0
                    
                    if (((x3_4 | (x0_27 ^ 1)) & 1) == 0)
                        x3_4 = *(x12_6 - 0xc)
                    
                    if ((x4_3 & x1_14) != 0)
                        x4_3 = *(x12_6 + 0x14)
                    
                    int32_t x17_2 = x1_14 & (x5 != 0xc00 ? 1 : 0)
                    x5 = x14_10 == x25_2 ? 1 : 0
                    x15 = (x5 & (x15 != var_df8 ? 1 : 0)) | (x0_27 & (x2_6 != 0xc00 ? 1 : 0))
                    x17 = ((x16_6 == x25_2 ? 1 : 0) & (x17 != var_df8 ? 1 : 0)) | x17_2
                    int32_t x14_8
                    
                    if ((x15 | (x14_10 != x25_2 ? 1 : 0)) != 0)
                        x14_8 = 0
                    else
                        x14_8 = x3_4
                    
                    x10_7 += x14_8
                    int32_t x14_9
                    
                    if ((x17 | (x16_6 != x25_2 ? 1 : 0)) != 0)
                        x14_9 = 0
                    else
                        x14_9 = x4_3
                    
                    i_3 = i_8
                    i_8 -= 2
                    x11_4 += x14_9
                    x12_6 += 0x40
                while (i_3 != 2)
                x10_6 = x11_4 + x10_7
                
                if (i_10 != x8_30)
                    goto label_bd78e4
            else
                i_10 = 0
                x10_6 = 0
            label_bd78e4:
                void* x11_6 = arg1 + (i_10 << 5) + 0x15f68
                int64_t i_5 = x8_30 - i_10
                int64_t i_4
                
                do
                    if (*(x11_6 + 8) == x25_2 && *(x11_6 + 4) == var_df8 && *x11_6 == 0xc00)
                        x10_6 += *(x11_6 + 0x14)
                    
                    i_4 = i_5
                    i_5 -= 1
                    x11_6 += 0x20
                while (i_4 != 1)
            
            if (x10_6 s< 1)
                goto label_bd7778
            
            int32_t x0_29 = GetTreasureCards(arg1, zx.q(var_df8), arg3, 2, &var_d54)
            int32_t x21_2 = x0_29
            *arg4 = x0_29
            void* __offset(
                vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>, 
                0x10) var_d90 = _vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>
                + 0x10
            int64_t (* const var_d88_1)(CardID) = CannotPlayCard
            void* __offset(
                vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>, 
                0x10)* var_d70_1 = &var_d90
            void* __offset(
                vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>, 
                0x10)* x0_30
            
            if (x0_29 s< 1)
                x0_30 = &var_d90
            else
                int32_t x20_2 = 0
                x0_30 = &var_d90
                void* x22_2 = arg3
                var_64 = *arg3
                
                while (true)
                    if (((*(*x0_30 + 0x30))() & 1) == 0)
                        x21_2 -= 1
                        x20_2 -= 1
                        *x22_2 = *(arg3 + (sx.q(x21_2) << 2))
                    
                    x0_30 = var_d70_1
                    x20_2 += 1
                    
                    if (x20_2 s>= x21_2)
                        break
                    
                    x22_2 = arg3 + (sx.q(x20_2) << 2)
                    var_64 = *x22_2
                    
                    if (x0_30 == 0)
                        goto label_bd79cc
            
            *arg4 = x21_2
            
            if (&var_d90 == x0_30)
                (*(*x0_30 + 0x20))()
            else if (x0_30 != 0)
                (*(*x0_30 + 0x28))()
            
            if (*arg4 != 0)
                return 3
else
    int32_t x0_14 = GetHandActionCards(arg1, zx.q(var_df8), arg3)
    int32_t x21_1 = x0_14
    *arg4 = x0_14
    void* __offset(
        vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>, 
        0x10) var_d20 = _vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>
        + 0x10
    int64_t (* const var_d18_1)(CardID) = CannotPlayCard
    void* __offset(
        vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>, 
        0x10)* var_d00_1 = &var_d20
    void* __offset(
        vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>, 
        0x10)* x0_15
    
    if (x0_14 s< 1)
        x0_15 = &var_d20
    else
        int32_t x20_1 = 0
        x0_15 = &var_d20
        void* x22_1 = arg3
        var_64 = *arg3
        
        while (true)
            if (((*(*x0_15 + 0x30))() & 1) == 0)
                x21_1 -= 1
                x20_1 -= 1
                *x22_1 = *(arg3 + (sx.q(x21_1) << 2))
            
            x0_15 = var_d00_1
            x20_1 += 1
            
            if (x20_1 s>= x21_1)
                break
            
            x22_1 = arg3 + (sx.q(x20_1) << 2)
            var_64 = *x22_1
            
            if (x0_15 == 0)
            label_bd79cc:
                sub_a58ab4()
                noreturn
    
    *arg4 = x21_1
    
    if (&var_d20 == x0_15)
        (*(*x0_15 + 0x20))()
    else if (x0_15 != 0)
        (*(*x0_15 + 0x28))()
    
    if (*arg4 != 0)
        return 1
return 0
