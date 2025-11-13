// 函数: _Z13TriggerEventsR7DomGame9PlayerWhoPK16TriggerEventTypeiRK11TriggerInfo16TriggerEventFlagPK6CardIDiPb
// 地址: 0xbda82c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_2098 = arg2
int32_t var_2094 = arg6

if (arg9 != 0)
    *arg9 = false

TriggerEventAchievement(arg1, zx.q(var_2098), zx.q(*arg3), arg7, arg8)
int32_t x8 = *arg3

if (x8 u<= 0x1e)
    int32_t var_2130
    
    if (x8 == 0x12 && *(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
        uint64_t x1_26 = zx.q(var_2098)
        uint64_t x2_10
        
        if (*(arg1 + 0x19d4) == x1_26.d)
            x2_10 = zx.q(*(arg1 + 0x19d8))
        else
            x2_10 = zx.q(x1_26.d)
        
        int32_t var_2120_5 = 0
        int32_t var_2128_6 = 0
        var_2130 = 0
        DomAddLogEvent(arg1, x1_26, x2_10, 0x1f, 0, nullptr, 0, 0)
    
    int32_t var_1480_1 = 0
    int32_t var_107c_1 = 0
    int32_t var_c78_1 = 0
    int32_t var_874_1 = 0
    int32_t var_470_1 = 0
    int32_t var_6c_1 = 0
    int32_t x0_1
    int64_t x7
    x0_1, x7 = IsDomContextStackEmpty()
    int32_t x10_1 = 0
    int32_t x27_1 = 0
    
    if ((x0_1 & 1) == 0)
        void* x0_3
        x0_3, x7 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_3 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
        x10_1 = *(x8_3 - 0x48)
        x27_1 = *(arg1 + 0x1a30) + 1
        *(arg1 + 0x1a30) = x27_1
        *(x8_3 - 0x48) = x27_1
    
    int32_t i = *(arg1 + 0xd40)
    uint64_t j_14 = zx.q(arg4)
    int32_t var_20cc_1 = 0
    
    while (i s>= 1)
        int32_t x19_1 = 0
        int32_t x11_1 = 0
        
        do
            int32_t j_12 = 0
            int32_t x8_4 = (*(arg1 + 0x19d4) + x11_1) s% i
            int64_t fp_1 = sx.q(*(arg1 + 0x1a14))
            int64_t x28_1 = sx.q(x8_4)
            int32_t var_1880[0x100]
            AbilityIDs* x9_5 = &var_1880 + muls.dp.d(x8_4, 0x404)
            uint64_t x26_1 = 0
            
            while (true)
                int32_t var_1c90_1 = 0
                int32_t var_2090[0xc]
                
                if (arg4 s>= 1)
                    uint64_t j_10 = j_14
                    TriggerEventType const* x24_1 = arg3
                    
                    if ((((var_2098 == 0xffffffff ? 1 : 0) | (x8_4 == var_2098 ? 1 : 0)) & 1) == 0)
                        uint64_t j
                        
                        do
                            uint64_t x5_1 = zx.q(*x24_1)
                            x24_1 += 4
                            int32_t var_2120_1 = var_2098
                            int32_t var_2128_2 = arg8
                            var_2130.q = arg7
                            x7 = CollectOpponentAbilities(&var_2090, arg1, zx.q(x28_1.d), fp_1, 
                                zx.q(x27_1), x5_1, arg5, x7)
                            j = j_10
                            j_10 -= 1
                        while (j != 1)
                    else
                        uint64_t j_11 = j_14
                        TriggerEventType const* x24_2 = arg3
                        uint64_t j_1
                        
                        do
                            uint64_t x5 = zx.q(*x24_2)
                            x24_2 += 4
                            int32_t var_2128_1 = arg8
                            var_2130.q = arg7
                            CollectAbilities(&var_2090, arg1, zx.q(x28_1.d), fp_1, zx.q(x27_1), x5, 
                                arg5, zx.q(var_2094))
                            j_1 = j_11
                            j_11 -= 1
                        while (j_1 != 1)
                
                FilterMaxOneAbilities(arg1, &var_2090)
                x7 = FilterTriggeredAbilities(arg1, &var_2090, x9_5, zx.q(x26_1.d))
                
                if (var_1c90_1 == 0)
                    break
                
                int32_t x0_11
                x0_11, x7 = ActionsAreMinor(arg1, &var_2090)
                
                if ((x0_11 & 1) == 0)
                    x7 = InvalidateSubmittedActions()
                
                uint64_t x8_14 = zx.q(var_1c90_1)
                
                if (x8_14.d s>= 1)
                    int64_t x21_1 = 0
                    
                    do
                        uint64_t x1_8 = zx.q(var_2090[x21_1])
                        
                        if ((x1_8 & 0x30) == 0)
                            int32_t* x0_13
                            x0_13, x7 = AbilityGetRegistered(arg1, x1_8)
                            
                            if (x0_13[0x13] == 2 && *x0_13 == 5)
                                *(x0_13 + 8) = fp_1
                        
                        x8_14 = sx.q(var_1c90_1)
                        x21_1 += 1
                    while (x21_1 s< x8_14)
                
                uint64_t j_7 = zx.q(j_12)
                int32_t var_1c88[0x100]
                
                if (j_7.d s>= 1)
                    if (x8_14.d s< 1)
                        uint64_t j_2
                        
                        do
                            uint64_t j_13 = j_7
                            j_2 = j_7
                            j_7 -= 1
                            j_12 = j_7.d
                            void var_1c8c
                            var_1c88[0] = *(&var_1c8c + (j_13 << 2))
                        while (j_2 s> 1)
                    else
                        int32_t j_3 = 0
                        
                        do
                            int64_t j_8 = sx.q(j_3)
                            int32_t (* x14_1)[0xc] = &var_2090
                            uint64_t x15_1 = zx.q(x8_14.d)
                            
                            while (var_1c88[sx.q(j_3)] != *x14_1)
                                uint64_t temp4_1 = x15_1
                                x15_1 -= 1
                                x14_1 = &(*x14_1)[1]
                                
                                if (temp4_1 == 1)
                                    j_12 = j_7.d - 1
                                    j_3 -= 1
                                    var_1c88[j_8] = var_1c88[sx.q(j_7.d) - 1]
                                    j_7 = zx.q(j_12)
                                    break
                            
                            j_3 += 1
                        while (j_3 s< j_7.d)
                
                if (x8_14.d == 0)
                    break
                
                int32_t x0_16
                
                if (x8_14.d s>= 1)
                    uint64_t j_9 = zx.q(x8_14.d)
                    int32_t (* x21_2)[0xc] = &var_2090
                    uint64_t j_4
                    
                    do
                        uint64_t x1_9 = zx.q(*x21_2)
                        
                        if ((x1_9 & 0x30) == 0
                                && (zx.d(*(AbilityGetRegistered(arg1, x1_9) + 0x71)) & 0x10) != 0)
                            x0_16 = 1
                            var_1c88[0] = *x21_2
                            goto label_bdac50
                        
                        j_4 = j_9
                        j_9 -= 1
                        x21_2 = &(*x21_2)[1]
                    while (j_4 != 1)
                    j_7 = zx.q(j_12)
                
                x0_16 = j_7.d
                bool (* var_68)(AbilityID, AbilityID)
                
                if (j_7.d == 0)
                    var_68 = CompareAbilities
                    std::__ndk1::__sort<bool (*&)(AbilityID, AbilityID), AbilityID*>(&var_2090, 
                        &var_2090[sx.q(var_1c90_1)], &var_68)
                    x0_16, x7 = SelectAbilities(arg1, zx.q(x28_1.d), &var_2090, &var_1c88, false)
                    int32_t var_1888_1 = x0_16
                    
                    if (x0_16 == 0)
                        if (arg9 != 0)
                            *arg9 = true
                        
                        if (var_1c90_1 s>= 1)
                            int64_t j_5 = 0
                            
                            do
                                uint64_t x19_4 = zx.q(var_2090[j_5])
                                
                                if ((x19_4 & 0x30) == 0)
                                    void* x0_47
                                    x0_47, x7 = AbilityGetRegistered(arg1, x19_4)
                                    
                                    if (*(x0_47 + 0x4c) == 2 && (zx.d(*(x0_47 + 0x70)) & 0x10) != 0)
                                        int128_t* x0_49
                                        int128_t v0_1
                                        int128_t v1_1
                                        int128_t v2_1
                                        int128_t v3_1
                                        x0_49, x7, v0_1, v1_1, v2_1, v3_1 =
                                            AbilityGetRegistered(arg1, x19_4)
                                        *(x0_49 + 0x58) = 0
                                        int64_t x8_54 = sx.q(*(arg1 + 0x19c0)) - 1
                                        *(arg1 + 0x19c0) = x8_54.d
                                        v0_1 = *(arg1 + x8_54 * 0xb8 + 0x3c238)
                                        v2_1 = *(arg1 + x8_54 * 0xb8 + 0x3c208)
                                        v3_1 = *(arg1 + x8_54 * 0xb8 + 0x3c218)
                                        x0_49[2] = *(arg1 + x8_54 * 0xb8 + 0x3c228)
                                        x0_49[3] = v0_1
                                        *x0_49 = v2_1
                                        x0_49[1] = v3_1
                                        v0_1 = *(arg1 + x8_54 * 0xb8 + 0x3c278)
                                        v2_1 = *(arg1 + x8_54 * 0xb8 + 0x3c248)
                                        v3_1 = *(arg1 + x8_54 * 0xb8 + 0x3c258)
                                        x0_49[6] = *(arg1 + x8_54 * 0xb8 + 0x3c268)
                                        x0_49[7] = v0_1
                                        x0_49[4] = v2_1
                                        x0_49[5] = v3_1
                                        v0_1 = *(arg1 + x8_54 * 0xb8 + 0x3c2a8)
                                        v1_1 = *(arg1 + x8_54 * 0xb8 + 0x3c288)
                                        x0_49[0xb].q = *(arg1 + x8_54 * 0xb8 + 0x3c2b8)
                                        x0_49[9] = *(arg1 + x8_54 * 0xb8 + 0x3c298)
                                        x0_49[0xa] = v0_1
                                        x0_49[8] = v1_1
                                
                                j_5 += 1
                            while (j_5 s< sx.q(var_1c90_1))
                        
                        x19_1 = 0
                        break
                
            label_bdac50:
                j_12 = x0_16 - 1
                x26_1 = zx.q(var_1c88[sx.q(x0_16) - 1])
                
                if (x26_1.d == 0xffffffff)
                    void* x0_20 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_22 = x0_20 + sx.q(*(x0_20 + 0x13000)) * 0x98
                    *(*(x8_22 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_23 = *(x8_22 - 0x90)
                    *(x8_23 + 0x1a2c) = *(x8_23 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                int64_t x8_24 = sx.q(*(x9_5 + 0x400))
                int64_t x24_3 = x26_1 & 0x30
                *(x9_5 + 0x400) = x8_24.d + 1
                *(&var_1880 + x28_1 * 0x404 + (x8_24 << 2)) = x26_1.d
                
                if (x24_3 == 0 && (zx.d(*(AbilityGetRegistered(arg1, x26_1) + 4)) & 2) == 0)
                    int64_t x0_24 = AbilitySourceCardRef(arg1, x26_1)
                    
                    if (x0_24.d != 0)
                        int32_t x8_26 = *(arg1 + 0x150c)
                        
                        if (x8_26 - 3 u>= 4)
                            int64_t var_2118_1 = 0
                            int32_t var_2120_2 = 0
                            int32_t var_2128_3 = 0
                            var_2130 = 0
                            DomNotifyEffect(zx.q(x8_26 == 2 ? 1 : 0), 0x17, 0xffffffff, x0_24, 0, 
                                1, 0, 0)
                
                if (*arg3 u<= 1)
                    var_68.d = AbilitySourceCardRef(arg1, x26_1)
                    int32_t x0_29 = AbilitySource(arg1, x26_1)
                    
                    if (x0_29 == 0)
                    label_bdae48:
                        int32_t x8_36 = *(arg1 + 0x150c)
                        
                        if (x8_36 - 3 u>= 4)
                            int64_t var_2118_2 = 0
                            int32_t var_2120_3 = 0
                            int32_t var_2128_4 = 0
                            var_2130 = 0
                            DomNotifyEffect(zx.q(x8_36 == 2 ? 1 : 0), 0xf, zx.q(var_2098), 
                                zx.q(var_68.d), zx.q(x0_29), 0, 0, 0)
                            
                            if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
                                uint64_t x1_18 = zx.q(var_2098)
                                uint64_t x2_8
                                
                                if (*(arg1 + 0x19d4) == x1_18.d)
                                    x2_8 = zx.q(*(arg1 + 0x19d8))
                                else
                                    x2_8 = zx.q(x1_18.d)
                                
                                int32_t var_2120_4 = 0
                                int32_t var_2128_5 = 0
                                var_2130 = 0
                                DomAddLogEvent(arg1, x1_18, x2_8, 0x1b, 0, &var_68, 1, zx.q(x0_29))
                    else
                        int32_t x19_2 = *(arg1 + 0xd50)
                        int32_t x8_30 = (x0_29 + (x19_2 << 0x10)) s% 0x3e5
                        int32_t* x9_17 = *(&data_1838a20 + (sx.q(x8_30) << 3))
                        
                        if (x9_17 != 0)
                            while (*x9_17 != x0_29 || x9_17[1] != x19_2)
                                x9_17 = *(x9_17 + 0x10)
                                
                                if (x9_17 == 0)
                                    goto label_bdadc8
                            
                            if ((zx.d(*(*(x9_17 + 8) + 0xcc)) & 0x40) == 0)
                                goto label_bdae48
                        else
                        label_bdadc8:
                            DomDefGetSlow(zx.q(x0_29), zx.q(x19_2))
                            int32_t* x0_31 = malloc(0x18)
                            int64_t x8_33 = sx.q(x8_30) << 3
                            int64_t x9_18 = *(&data_1838a20 + x8_33)
                            *x0_31 = x0_29
                            x0_31[1] = x19_2
                            *(&data_1838a20 + x8_33) = x0_31
                            *(x0_31 + 0x10) = x9_18
                            void* x0_33 = DomDefGetSlow(zx.q(x0_29), zx.q(x19_2))
                            *(x0_31 + 8) = x0_33
                            
                            if ((zx.d(*(x0_33 + 0xcc)) & 0x40) == 0)
                                goto label_bdae48
                
                if (AbilitySource(arg1, x26_1) == 0x204)
                    TriggerAbility(arg1, zx.q(x28_1.d), x26_1, zx.q(var_2094), arg5)
                else if (AbilitySource(arg1, x26_1) != 0x111a)
                    var_20cc_1 |= (x28_1.d != var_2098 ? 1 : 0)
                        | TriggerAbility(arg1, zx.q(x28_1.d), x26_1, zx.q(var_2094), arg5)
                else if (x24_3 == 0)
                    if (*(AbilityGetRegistered(arg1, x26_1) + 0x94) == 0x44)
                        TriggerAbility(arg1, zx.q(x28_1.d), x26_1, zx.q(var_2094), arg5)
                    else
                        var_20cc_1 |= (x28_1.d != var_2098 ? 1 : 0)
                            | TriggerAbility(arg1, zx.q(x28_1.d), x26_1, zx.q(var_2094), arg5)
                else if (*(AbilityGetStatic(arg1, x26_1) + 0xb8) == 0x44)
                    TriggerAbility(arg1, zx.q(x28_1.d), x26_1, zx.q(var_2094), arg5)
                else
                    var_20cc_1 |= (x28_1.d != var_2098 ? 1 : 0)
                        | TriggerAbility(arg1, zx.q(x28_1.d), x26_1, zx.q(var_2094), arg5)
                
                x7 = SetUsedAnyAssociatedWith(arg1, zx.q(x28_1.d))
                x19_1 = 1
            
            i = *(arg1 + 0xd40)
            x11_1 += 1
        while (x11_1 s< i)
        
        if ((x19_1 & 1) == 0)
            if (i s>= 1)
                int32_t j_6 = 0
                
                do
                    RemovePlayerOngoingDuration(arg1, zx.q(j_6), 7, sx.q(x27_1))
                    j_6 += 1
                while (j_6 s< *(arg1 + 0xd40))
            
            break
    
    if ((IsDomContextStackEmpty() & 1) == 0)
        void* x0_53 = __emutls_get_address(__emutls_v.gContextStack_tl)
        *(x0_53 + sx.q(*(x0_53 + 0x13000)) * 0x98 - 0x48) = x10_1
    
    int32_t x8_62 = *arg3
    
    if (x8_62 u<= 0x1e)
        if (x8_62 == 0x12 && *(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
            uint64_t x1_27 = zx.q(var_2098)
            uint64_t x2_11
            
            if (*(arg1 + 0x19d4) == x1_27.d)
                x2_11 = zx.q(*(arg1 + 0x19d8))
            else
                x2_11 = zx.q(x1_27.d)
            
            int32_t var_2120_6 = 0
            int32_t var_2128_7 = 0
            int32_t var_2130_1 = 0
            DomAddLogEvent(arg1, x1_27, x2_11, 0x20, 0, nullptr, 0, 0)
        
        return zx.q(var_20cc_1) & 1

pthread_kill(pthread_self(), 6)
DomGame* x0_58
AbilityID* x1_28
int32_t x2_12
AbilityID* x3_10
x0_58, x1_28, x2_12, x3_10 = XNoReturn()
return HasAFirstAbility(x0_58, x1_28, x2_12, x3_10) __tailcall
