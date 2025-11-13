// 函数: _Z16CollectAbilitiesR10AbilityIDsR7DomGame9PlayerWho9ContextIdi16TriggerEventTypeRK11TriggerInfo16TriggerEventFlagPK6CardIDi
// 地址: 0xbd4ca0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg6 u> 0x1e)
    pthread_kill(pthread_self(), 6)
    AbilityIDs* x0_140
    DomGame* x1_103
    int64_t x2_77
    int64_t x3_53
    int64_t x4_48
    int64_t x5_18
    TriggerInfo* x6_27
    int64_t x7_10
    x0_140, x1_103, x2_77, x3_53, x4_48, x5_18, x6_27, x7_10 = XNoReturn()
    return CollectOpponentAbilities(x0_140, x1_103, x2_77, x3_53, x4_48, x5_18, x6_27, x7_10)
        __tailcall

CardID const* x28 = arg9
int32_t fp = arg8
int32_t x26 = arg5
int64_t x24 = arg4
int32_t x19 = arg3
AbilityIDs& x21 = arg1
CardID const* var_10f0 = x28
int32_t var_10e8
int32_t var_10e0[0x20]
int32_t var_ce0[0x2ec]
AbilityIDs* x0_102
DomGame* x1_73
uint64_t x2_51
int64_t x3_34
uint64_t x4_27
int64_t x5_1
uint64_t x6_16

switch (arg6)
    case 0
        if (arg10 != 0)
            void* x0_28 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_30 = x0_28 + sx.q(*(x0_28 + 0x13000)) * 0x98
            *(*(x8_30 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_31 = *(x8_30 - 0x90)
            *(x8_31 + 0x1a2c) = *(x8_31 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int64_t var_1130_4 = 0
        CollectRegisteredAbilities(x21, arg2, zx.q(x19), x24, zx.q(x26), 1, 0, 0)
        CollectReserves(x21, arg2, zx.q(x19), 0, 0, nullptr)
        CollectWhileOwnedAbilities(x21, arg2, zx.q(x19), 1, 0, 0, nullptr)
        CollectUniversalAbilities(x21, arg2, zx.q(x19), 1, 0)
        int32_t x0_34 = CardsExistTypes(arg2, &var_ce0)
        
        if (x0_34 s>= 1)
            int64_t i = 0
            
            do
                int32_t x22_9 = var_ce0[i]
                int32_t j_17 = CardTypeHasExists(arg2, zx.q(x22_9), 7, &var_10e0)
                
                if (j_17 s>= 1)
                    uint64_t j_11 = zx.q(j_17)
                    int32_t (* x28_5)[0x20] = &var_10e0
                    uint64_t j
                    
                    do
                        int64_t x22_10 = zx.q(x22_9 << 0x12) | (zx.q(*x28_5) & 0xf) | 0x20
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x19), x22_10, 0, 0, 0xffffffff, 
                                nullptr) & 1) != 0)
                            int64_t x8_35 = sx.q(*(x21 + 0x400))
                            *(x21 + 0x400) = x8_35.d + 1
                            *(x21 + (x8_35 << 2)) = x22_10.d
                        
                        j = j_11
                        j_11 -= 1
                        x28_5 = &(*x28_5)[1]
                    while (j != 1)
                
                i += 1
            while (i != zx.q(x0_34))
        
        return CollectReactions(x21, arg2, zx.q(x19), 8, 0, true, nullptr) __tailcall
    case 1
        if (arg10 != 0)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_4 = *(x8_3 - 0x90)
            *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int64_t var_1130_1 = 0
        CollectRegisteredAbilities(x21, arg2, zx.q(x19), x24, zx.q(x26), 0x17, 0, 0)
        CollectWhileOwnedAbilities(x21, arg2, zx.q(x19), 0, 0, 0, nullptr)
        arg1 = CardsExistTypes(arg2, &var_ce0)
        
        if (arg1.d s>= 1)
            int64_t x24_1 = 0
            uint64_t x25_1 = zx.q(arg1.d)
            
            do
                int32_t x22_1 = var_ce0[x24_1]
                arg1 = CardTypeHasExists(arg2, zx.q(x22_1), 3, &var_10e0)
                
                if (arg1.d s>= 1)
                    uint64_t i_16 = zx.q(arg1.d)
                    int32_t (* x28_1)[0x20] = &var_10e0
                    uint64_t i_1
                    
                    do
                        int64_t x22_2 = zx.q(x22_1 << 0x12) | (zx.q(*x28_1) & 0xf) | 0x20
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x19), x22_2, 0, 0, 0xffffffff, 
                                nullptr).d & 1) != 0)
                            int64_t x8_8 = sx.q(*(x21 + 0x400))
                            *(x21 + 0x400) = x8_8.d + 1
                            *(x21 + (x8_8 << 2)) = x22_2.d
                        
                        i_1 = i_16
                        i_16 -= 1
                        x28_1 = &(*x28_1)[1]
                    while (i_1 != 1)
                
                x24_1 += 1
            while (x24_1 != x25_1)
        
        return 
    case 2
        if (arg10 != 0)
            void* x0_39 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_38 = x0_39 + sx.q(*(x0_39 + 0x13000)) * 0x98
            *(*(x8_38 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_39 = *(x8_38 - 0x90)
            *(x8_39 + 0x1a2c) = *(x8_39 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        CollectWhileOwnedAbilities(x21, arg2, zx.q(x19), 4, 0, 0, nullptr)
        CollectReserves(x21, arg2, zx.q(x19), 3, 0, nullptr)
        int64_t var_1130_5 = 0
        CollectRegisteredAbilities(x21, arg2, zx.q(x19), x24, zx.q(x26), 0xc, 0, 0)
        arg1 = CardsExistTypes(arg2, &var_ce0)
        
        if (arg1.d s>= 1)
            int64_t x24_4 = 0
            uint64_t x25_6 = zx.q(arg1.d)
            
            do
                int32_t x22_11 = var_ce0[x24_4]
                arg1 = CardTypeHasExists(arg2, zx.q(x22_11), 0xe, &var_10e0)
                
                if (arg1.d s>= 1)
                    uint64_t i_19 = zx.q(arg1.d)
                    int32_t (* x28_6)[0x20] = &var_10e0
                    uint64_t i_2
                    
                    do
                        int64_t x22_12 = zx.q(x22_11 << 0x12) | (zx.q(*x28_6) & 0xf) | 0x20
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x19), x22_12, 0, 0, 0xffffffff, 
                                nullptr).d & 1) != 0)
                            int64_t x8_43 = sx.q(*(x21 + 0x400))
                            *(x21 + 0x400) = x8_43.d + 1
                            *(x21 + (x8_43 << 2)) = x22_12.d
                        
                        i_2 = i_19
                        i_19 -= 1
                        x28_6 = &(*x28_6)[1]
                    while (i_2 != 1)
                
                x24_4 += 1
            while (x24_4 != x25_6)
        
        return 
    case 3
        int64_t var_1130_2 = 0
        CollectRegisteredAbilities(x21, arg2, zx.q(x19), x24, zx.q(x26), 0, 0, 0)
        CollectWhileInPlayAbilities(x21, arg2, zx.q(x19), 4, 0)
        arg1 = CardsExistTypes(arg2, &var_ce0)
        
        if (arg1.d s>= 1)
            int64_t x24_2 = 0
            uint64_t x25_2 = zx.q(arg1.d)
            
            do
                int32_t x22_3 = var_ce0[x24_2]
                arg1 = CardTypeHasExists(arg2, zx.q(x22_3), 0xd, &var_10e0)
                
                if (arg1.d s>= 1)
                    uint64_t i_17 = zx.q(arg1.d)
                    int32_t (* x28_2)[0x20] = &var_10e0
                    uint64_t i_3
                    
                    do
                        int64_t x22_4 = zx.q(x22_3 << 0x12) | (zx.q(*x28_2) & 0xf) | 0x20
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x19), x22_4, 0, 0, 0xffffffff, 
                                nullptr).d & 1) != 0)
                            int64_t x8_12 = sx.q(*(x21 + 0x400))
                            *(x21 + 0x400) = x8_12.d + 1
                            *(x21 + (x8_12 << 2)) = x22_4.d
                        
                        i_3 = i_17
                        i_17 -= 1
                        x28_2 = &(*x28_2)[1]
                    while (i_3 != 1)
                
                x24_2 += 1
            while (x24_2 != x25_2)
        
        return 
    case 4
        if (arg10 != 0)
            void* x0_13 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_15 = x0_13 + sx.q(*(x0_13 + 0x13000)) * 0x98
            *(*(x8_15 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_16 = *(x8_15 - 0x90)
            *(x8_16 + 0x1a2c) = *(x8_16 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int64_t var_1130_3 = 0
        CollectRegisteredAbilities(x21, arg2, zx.q(x19), x24, zx.q(x26), 2, 0, 0)
        int32_t x0_16 = CardsExistTypes(arg2, &var_ce0)
        
        if (x0_16 s>= 1)
            int64_t i_4 = 0
            
            do
                int32_t x22_5 = var_ce0[i_4]
                int32_t j_16 = CardTypeHasExists(arg2, zx.q(x22_5), 6, &var_10e0)
                
                if (j_16 s>= 1)
                    uint64_t j_10 = zx.q(j_16)
                    int32_t (* x28_3)[0x20] = &var_10e0
                    uint64_t j_1
                    
                    do
                        int64_t x22_6 = zx.q(x22_5 << 0x12) | (zx.q(*x28_3) & 0xf) | 0x20
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x19), x22_6, 0, 0, 0xffffffff, 
                                nullptr) & 1) != 0)
                            int64_t x8_20 = sx.q(*(x21 + 0x400))
                            *(x21 + 0x400) = x8_20.d + 1
                            *(x21 + (x8_20 << 2)) = x22_6.d
                        
                        j_1 = j_10
                        j_10 -= 1
                        x28_3 = &(*x28_3)[1]
                    while (j_1 != 1)
                
                i_4 += 1
            while (i_4 != zx.q(x0_16))
        
        return CollectPossessionAbilities(x21, arg2, zx.q(x19), 1, 0) __tailcall
    case 5
        if (arg10 s>= 1)
            int64_t i_5 = 0
            int32_t var_1118
            var_1118.q = zx.q(arg10)
            int64_t var_1110_1 = x24
            int32_t var_1104_1 = x26
            
            do
                int64_t x22_14 = i_5 << 2
                CollectReactions(x21, arg2, zx.q(x19), 4, zx.q(*(x28 + x22_14)), 
                    (i_5 == 0 ? 1 : 0).b, arg7)
                CollectWhileOwnedAbilities(x21, arg2, zx.q(x19), 5, zx.q(*(x28 + x22_14)), 0, 
                    nullptr)
                int64_t var_1130_6 = 0
                CollectRegisteredAbilities(x21, arg2, zx.q(x19), x24, zx.q(x26), 0xb, 
                    zx.q(*(x28 + x22_14)), 0)
                int32_t x24_5 = *(x28 + x22_14)
                int32_t x0_52 = CardsExistTypes(arg2, &var_ce0)
                
                if (x0_52 s>= 1)
                    int64_t j_2 = 0
                    var_10e8.q = zx.q(x24_5 << 6) & 0x3ffc0
                    
                    do
                        int32_t x26_7 = var_ce0[j_2]
                        int32_t k_4 = CardTypeHasExists(arg2, zx.q(x26_7), 2, &var_10e0)
                        
                        if (k_4 s>= 1)
                            uint64_t k_3 = zx.q(k_4)
                            int32_t (* x27_1)[0x20] = &var_10e0
                            uint64_t k
                            
                            do
                                int64_t x26_8 =
                                    var_10e8.q | zx.q(x26_7 << 0x12) | (zx.q(*x27_1) & 0xf) | 0x20
                                
                                if ((TriggerAbilityTestValid(arg2, zx.q(x19), x26_8, zx.q(x24_5), 
                                        0, 0xffffffff, arg7) & 1) != 0)
                                    int64_t x8_52 = sx.q(*(x21 + 0x400))
                                    *(x21 + 0x400) = x8_52.d + 1
                                    *(x21 + (x8_52 << 2)) = x26_8.d
                                
                                k = k_3
                                k_3 -= 1
                                x27_1 = &(*x27_1)[1]
                            while (k != 1)
                        
                        j_2 += 1
                    while (j_2 != zx.q(x0_52))
                
                uint64_t x23_2 = 0
                uint64_t x24_6 = zx.q(*(var_10f0 + (i_5 << 2)))
                int32_t* x28_7 = *(arg2 + x24_6 * 0x68 + 0x1a68) + 0xec
                
                while (true)
                    int32_t x8_56 = x28_7[-3]
                    
                    if (x8_56 != 6)
                        if (x8_56 == 0)
                            break
                    else if (x28_7[-2] == 6 && *x28_7 == 2)
                        int64_t x26_9 = zx.q(x24_6.d << 0x12) | (zx.q(x24_6.d << 6) & 0x3ffc0)
                            | (x23_2 & 0xf) | 0x10
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x19), x26_9, zx.q(x24_6.d), 0, 
                                0xffffffff, arg7) & 1) != 0)
                            int64_t x8_61 = sx.q(*(x21 + 0x400))
                            *(x21 + 0x400) = x8_61.d + 1
                            *(x21 + (x8_61 << 2)) = x26_9.d
                    
                    x23_2 = zx.q(x23_2.d + 1)
                    x28_7 = &x28_7[0x30]
                
                x28 = var_10f0
                CollectPossessionAbilities(x21, arg2, zx.q(x19), 0, zx.q(*(x28 + x22_14)))
                x24 = var_1110_1
                CollectRegisteredOpponentAbilities(x21, arg2, zx.q(x19), x24, 0x16, 
                    zx.q(*(x28 + x22_14)), 0, nullptr)
                x26 = var_1104_1
                i_5 += 1
            while (i_5 != var_1118.q)
        
        return 
    case 6
        int32_t x8_21
        
        if ((fp & 2) == 0)
            x8_21 = (fp & 1) == 0 ? 1 : 0
        label_bd6574:
            
            if (x8_21 == 0)
                return 
            
            if (arg10 s>= 1)
                int64_t i_6 = 0
                
                do
                    CollectReactions(x21, arg2, zx.q(x19), 0, zx.q(*(x28 + i_6)), 
                        (i_6 == 0 ? 1 : 0).b, nullptr)
                    int64_t var_1130_15 = 0
                    CollectRegisteredAbilities(x21, arg2, zx.q(x19), x24, zx.q(x26), 0x1b, 
                        zx.q(*(x28 + i_6)), 0)
                    i_6 += 4
                while (zx.q(arg10) << 2 != i_6)
            
            return 
        
        if (arg10 s>= 1)
            int64_t i_7 = 0
            int64_t var_1110_4 = x24
            
            do
                uint64_t x25_14 = zx.q(*(x28 + (i_7 << 2)))
                uint64_t x27_7 = 0
                int32_t* fp_7 = *(arg2 + x25_14 * 0x68 + 0x1a68) + 0xec
                
                while (true)
                    int32_t x8_144 = fp_7[-3]
                    
                    if (x8_144 != 6)
                        if (x8_144 == 0)
                            break
                    else if (fp_7[-2] == 6 && *fp_7 == 3)
                        int64_t x26_17 = zx.q(x25_14.d << 0x12) | (zx.q(x25_14.d << 6) & 0x3ffc0)
                            | (x27_7 & 0xf) | 0x10
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x19), x26_17, zx.q(x25_14.d), 0, 
                                0xffffffff, nullptr) & 1) != 0)
                            int64_t x8_149 = sx.q(*(x21 + 0x400))
                            *(x21 + 0x400) = x8_149.d + 1
                            *(x21 + (x8_149 << 2)) = x26_17.d
                    
                    x27_7 = zx.q(x27_7.d + 1)
                    fp_7 = &fp_7[0x30]
                
                int64_t x22_26 = i_7 << 2
                CollectWhileOwnedAbilities(x21, arg2, zx.q(x19), 3, zx.q(*(var_10f0 + x22_26)), 0, 
                    nullptr)
                int64_t var_1130_13 = 0
                CollectRegisteredAbilities(x21, arg2, zx.q(x19), x24, zx.q(x26), 5, 
                    zx.q(*(var_10f0 + x22_26)), 0)
                int32_t x25_15 = *(var_10f0 + x22_26)
                int32_t x0_129 = CardsExistTypes(arg2, &var_ce0)
                
                if (x0_129 s>= 1)
                    int64_t j_3 = 0
                    
                    do
                        int32_t x26_18 = var_ce0[j_3]
                        int32_t k_5 = CardTypeHasExists(arg2, zx.q(x26_18), 0xc, &var_10e0)
                        
                        if (k_5 s>= 1)
                            uint64_t k_2 = zx.q(k_5)
                            int32_t (* x24_13)[0x20] = &var_10e0
                            uint64_t k_1
                            
                            do
                                int64_t x26_19 = (zx.q(x25_15 << 6) & 0x3ffc0)
                                    | zx.q(x26_18 << 0x12) | (zx.q(*x24_13) & 0xf) | 0x20
                                
                                if ((TriggerAbilityTestValid(arg2, zx.q(x19), x26_19, zx.q(x25_15), 
                                        0, 0xffffffff, nullptr) & 1) != 0)
                                    int64_t x8_155 = sx.q(*(x21 + 0x400))
                                    *(x21 + 0x400) = x8_155.d + 1
                                    *(x21 + (x8_155 << 2)) = x26_19.d
                                
                                k_1 = k_2
                                k_2 -= 1
                                x24_13 = &(*x24_13)[1]
                            while (k_1 != 1)
                        
                        j_3 += 1
                    while (j_3 != zx.q(x0_129))
                
                x24 = var_1110_4
                x28 = var_10f0
                i_7 += 1
            while (i_7 != zx.q(arg10))
        
        if ((fp & 1) == 0)
            int64_t var_1130_14 = 0
            CollectRegisteredAbilities(x21, arg2, zx.q(x19), x24, zx.q(x26), 4, zx.q(*x28), 0)
            x8_21 = 1
            goto label_bd6574
        
        x4_27 = zx.q(x26)
        x5_1 = 4
        arg9 = nullptr
        x0_102 = x21
        x1_73 = arg2
        x2_51 = zx.q(x19)
        x3_34 = x24
        goto label_bd5f2c
    case 7
        if (arg10 != 1)
            void* x0_59 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_64 = x0_59 + sx.q(*(x0_59 + 0x13000)) * 0x98
            *(*(x8_64 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_65 = *(x8_64 - 0x90)
            *(x8_65 + 0x1a2c) = *(x8_65 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t x25_7 = *x28
        int32_t x0_61 = CardsExistTypes(arg2, &var_ce0)
        
        if (x0_61 s>= 1)
            int64_t i_8 = 0
            
            do
                int32_t x26_10 = var_ce0[i_8]
                int32_t j_18 = CardTypeHasExists(arg2, zx.q(x26_10), 1, &var_10e0)
                
                if (j_18 s>= 1)
                    uint64_t j_12 = zx.q(j_18)
                    int32_t (* x24_7)[0x20] = &var_10e0
                    uint64_t j_4
                    
                    do
                        int64_t x26_11 = (zx.q(x25_7 << 6) & 0x3ffc0) | zx.q(x26_10 << 0x12)
                            | (zx.q(*x24_7) & 0xf) | 0x20
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x19), x26_11, zx.q(x25_7), 0, 
                                0xffffffff, nullptr) & 1) != 0)
                            int64_t x8_71 = sx.q(*(x21 + 0x400))
                            *(x21 + 0x400) = x8_71.d + 1
                            *(x21 + (x8_71 << 2)) = x26_11.d
                        
                        j_4 = j_12
                        j_12 -= 1
                        x24_7 = &(*x24_7)[1]
                    while (j_4 != 1)
                
                i_8 += 1
            while (i_8 != zx.q(x0_61))
        
        int64_t var_1130_11 = 0
        CollectRegisteredAbilities(x21, arg2, zx.q(x19), x24, zx.q(x26), 7, zx.q(*var_10f0), 0)
        int64_t var_1130_12 = 0
        CollectRegisteredAbilities(x21, arg2, zx.q(x19), x24, zx.q(x26), 8, zx.q(*var_10f0), 0)
        CollectRegisteredOpponentAbilities(x21, arg2, zx.q(x19), x24, 0xd, zx.q(*var_10f0), 
            zx.q(fp), nullptr)
        CollectWhileInPlayAbilities(x21, arg2, zx.q(x19), 0, zx.q(*var_10f0))
        uint64_t x22_22 = zx.q(*var_10f0)
        uint64_t x24_10 = 0
        int32_t* x26_15 = *(arg2 + x22_22 * 0x68 + 0x1a68) + 0xec
        
        while (true)
            int32_t x8_116 = x26_15[-3]
            
            if (x8_116 != 6)
                if (x8_116 == 0)
                    break
            else if (x26_15[-2] == 6 && *x26_15 == 0)
                int64_t x23_9 =
                    zx.q(x22_22.d << 0x12) | (zx.q(x22_22.d << 6) & 0x3ffc0) | (x24_10 & 0xf) | 0x10
                
                if ((TriggerAbilityTestValid(arg2, zx.q(x19), x23_9, zx.q(x22_22.d), 0, 0xffffffff, 
                        nullptr) & 1) != 0)
                    int64_t x8_121 = sx.q(*(x21 + 0x400))
                    *(x21 + 0x400) = x8_121.d + 1
                    *(x21 + (x8_121 << 2)) = x23_9.d
            
            x24_10 = zx.q(x24_10.d + 1)
            x26_15 = &x26_15[0x30]
        
        CollectTokenAbilities(x21, arg2, zx.q(x19), 0, zx.q(*var_10f0))
        return CollectReactions(x21, arg2, zx.q(x19), 3, zx.q(*var_10f0), true, nullptr) __tailcall
    case 8
        if (arg10 != 1)
            void* x0_66 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_74 = x0_66 + sx.q(*(x0_66 + 0x13000)) * 0x98
            *(*(x8_74 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_75 = *(x8_74 - 0x90)
            *(x8_75 + 0x1a2c) = *(x8_75 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        CollectUniversalAbilities(x21, arg2, zx.q(x19), 0, zx.q(*x28))
        CollectWhileOwnedAbilities(x21, arg2, zx.q(x19), 7, zx.q(*x28), zx.q(fp), arg7)
        TriggerInfo const& var_1130_7 = arg7
        CollectRegisteredAbilities(x21, arg2, zx.q(x19), x24, zx.q(x26), 6, zx.q(*x28), zx.q(fp))
        TriggerInfo const& var_1130_8 = arg7
        CollectRegisteredAbilities(x21, arg2, zx.q(x19), x24, zx.q(x26), 0xf, zx.q(*x28), zx.q(fp))
        CollectRegisteredOpponentAbilities(x21, arg2, zx.q(x19), x24, 0xe, zx.q(*x28), zx.q(fp), 
            arg7)
        int32_t x23_3 = *x28
        int32_t x0_73 = CardsExistTypes(arg2, &var_ce0)
        
        if (x0_73 s>= 1)
            int64_t i_9 = 0
            
            do
                int32_t x26_12 = var_ce0[i_9]
                int32_t j_19 = CardTypeHasExists(arg2, zx.q(x26_12), 0, &var_10e0)
                
                if (j_19 s>= 1)
                    uint64_t j_13 = zx.q(j_19)
                    int32_t (* fp_3)[0x20] = &var_10e0
                    uint64_t j_5
                    
                    do
                        int64_t x26_13 = (zx.q(x23_3 << 6) & 0x3ffc0) | zx.q(x26_12 << 0x12)
                            | (zx.q(*fp_3) & 0xf) | 0x20
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x19), x26_13, zx.q(x23_3), 
                                zx.q(fp), 0xffffffff, arg7) & 1) != 0)
                            int64_t x8_82 = sx.q(*(x21 + 0x400))
                            *(x21 + 0x400) = x8_82.d + 1
                            *(x21 + (x8_82 << 2)) = x26_13.d
                        
                        j_5 = j_13
                        j_13 -= 1
                        fp_3 = &(*fp_3)[1]
                    while (j_5 != 1)
                
                i_9 += 1
            while (i_9 != zx.q(x0_73))
        
        CollectReserves(x21, arg2, zx.q(x19), 2, zx.q(*var_10f0), arg7)
        CollectWhileInPlayAbilities(x21, arg2, zx.q(x19), 1, zx.q(*var_10f0))
        CollectTokenAbilities(x21, arg2, zx.q(x19), 1, zx.q(*var_10f0))
        uint64_t x23_10 = zx.q(*var_10f0)
        uint64_t x22_23 = 0
        int32_t* x28_11 = *(arg2 + x23_10 * 0x68 + 0x1a68) + 0xec
        
        while (true)
            int32_t x8_124 = x28_11[-3]
            
            if (x8_124 != 6)
                if (x8_124 == 0)
                    break
            else if (x28_11[-2] == 6 && *x28_11 == 1)
                int64_t x26_16 =
                    zx.q(x23_10.d << 0x12) | (zx.q(x23_10.d << 6) & 0x3ffc0) | (x22_23 & 0xf) | 0x10
                
                if ((TriggerAbilityTestValid(arg2, zx.q(x19), x26_16, zx.q(x23_10.d), zx.q(fp), 
                        0xffffffff, arg7) & 1) != 0)
                    int64_t x8_129 = sx.q(*(x21 + 0x400))
                    *(x21 + 0x400) = x8_129.d + 1
                    *(x21 + (x8_129 << 2)) = x26_16.d
            
            x22_23 = zx.q(x22_23.d + 1)
            x28_11 = &x28_11[0x30]
        
        CollectReactions(x21, arg2, zx.q(x19), 2, zx.q(*var_10f0), true, nullptr)
        
        if ((*(arg7 + 8) & 0xfffffffe) != 2)
            return 
        
        int32_t x23_11 = *var_10f0
        int32_t x0_120 = CardsExistTypes(arg2, &var_ce0)
        
        if (x0_120 s>= 1)
            int64_t i_10 = 0
            
            do
                int32_t x25_12 = var_ce0[i_10]
                int32_t j_21 = CardTypeHasExists(arg2, zx.q(x25_12), 0xb, &var_10e0)
                
                if (j_21 s>= 1)
                    uint64_t j_14 = zx.q(j_21)
                    int32_t (* x24_12)[0x20] = &var_10e0
                    uint64_t j_6
                    
                    do
                        int64_t x25_13 = (zx.q(x23_11 << 6) & 0x3ffc0) | zx.q(x25_12 << 0x12)
                            | (zx.q(*x24_12) & 0xf) | 0x20
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x19), x25_13, zx.q(x23_11), 
                                zx.q(fp), 0xffffffff, nullptr) & 1) != 0)
                            int64_t x8_138 = sx.q(*(x21 + 0x400))
                            *(x21 + 0x400) = x8_138.d + 1
                            *(x21 + (x8_138 << 2)) = x25_13.d
                        
                        j_6 = j_14
                        j_14 -= 1
                        x24_12 = &(*x24_12)[1]
                    while (j_6 != 1)
                
                i_10 += 1
            while (i_10 != zx.q(x0_120))
        
        CollectTokenAbilities(x21, arg2, zx.q(x19), 3, zx.q(*var_10f0))
        return CollectRegisteredOpponentAbilities(x21, arg2, zx.q(x19), x24, 0x12, zx.q(*var_10f0), 
            0, nullptr) __tailcall
    case 9
        if (arg10 != 1)
            void* x0_78 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_85 = x0_78 + sx.q(*(x0_78 + 0x13000)) * 0x98
            *(*(x8_85 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_86 = *(x8_85 - 0x90)
            *(x8_86 + 0x1a2c) = *(x8_86 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        TriggerInfo const& var_1130_9 = arg7
        CollectRegisteredAbilities(x21, arg2, zx.q(x19), x24, zx.q(x26), 9, zx.q(*x28), 0)
        CollectWhileInPlayAbilities(x21, arg2, zx.q(x19), 2, zx.q(*x28))
        CollectTokenAbilities(x21, arg2, zx.q(x19), 2, zx.q(*x28))
        return CollectWhileOwnedAbilities(x21, arg2, zx.q(x19), 9, zx.q(*x28), 0, nullptr)
            __tailcall
    case 0xa
        if (arg10 != 1)
            void* x0_84 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_89 = x0_84 + sx.q(*(x0_84 + 0x13000)) * 0x98
            *(*(x8_89 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_90 = *(x8_89 - 0x90)
            *(x8_90 + 0x1a2c) = *(x8_90 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        TriggerInfo const& var_1130_10 = arg7
        CollectRegisteredAbilities(x21, arg2, zx.q(x19), x24, zx.q(x26), 0xa, zx.q(*x28), 0)
        CollectRegisteredOpponentAbilities(x21, arg2, zx.q(x19), x24, 0x10, zx.q(*x28), 0, nullptr)
        CollectReserves(x21, arg2, zx.q(x19), 1, zx.q(*x28), arg7)
        CollectWhileInPlayAbilities(x21, arg2, zx.q(x19), 3, zx.q(*x28))
        CollectWhileOwnedAbilities(x21, arg2, zx.q(x19), 0xa, zx.q(*x28), 0, arg7)
        int32_t x22_19 = *x28
        arg1 = CardsExistTypes(arg2, &var_ce0)
        
        if (arg1.d s>= 1)
            int64_t i_11 = 0
            var_10e8.q = zx.q(arg1.d)
            
            do
                int32_t x23_4 = var_ce0[i_11]
                arg1 = CardTypeHasExists(arg2, zx.q(x23_4), 9, &var_10e0)
                
                if (arg1.d s>= 1)
                    uint64_t j_9 = zx.q(arg1.d)
                    int32_t (* x28_9)[0x20] = &var_10e0
                    uint64_t j_7
                    
                    do
                        int64_t x23_5 = (zx.q(x22_19 << 6) & 0x3ffc0) | zx.q(x23_4 << 0x12)
                            | (zx.q(*x28_9) & 0xf) | 0x20
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x19), x23_5, zx.q(x22_19), 
                                zx.q(fp), 0xffffffff, arg7).d & 1) != 0)
                            int64_t x8_98 = sx.q(*(x21 + 0x400))
                            *(x21 + 0x400) = x8_98.d + 1
                            *(x21 + (x8_98 << 2)) = x23_5.d
                        
                        j_7 = j_9
                        j_9 -= 1
                        x28_9 = &(*x28_9)[1]
                    while (j_7 != 1)
                
                i_11 += 1
            while (i_11 != var_10e8.q)
        
        return 
    case 0xb
        if (arg10 s>= 1)
            int64_t i_12 = 0
            
            do
                CollectReactions(x21, arg2, zx.q(x19), 1, zx.q(*(x28 + i_12)), 
                    (i_12 == 0 ? 1 : 0).b, nullptr)
                i_12 += 4
            while (zx.q(arg10) << 2 != i_12)
        
        return 
    case 0xc
        CollectWhileOwnedAbilities(x21, arg2, zx.q(x19), 6, 0, 0, nullptr)
        int32_t x0_96 = CardsExistTypes(arg2, &var_ce0)
        
        if (x0_96 s>= 1)
            int64_t i_13 = 0
            
            do
                int32_t x25_8 = var_ce0[i_13]
                int32_t j_20 = CardTypeHasExists(arg2, zx.q(x25_8), 0xa, &var_10e0)
                
                if (j_20 s>= 1)
                    uint64_t j_15 = zx.q(j_20)
                    int32_t (* fp_4)[0x20] = &var_10e0
                    uint64_t j_8
                    
                    do
                        int64_t x25_9 = zx.q(x25_8 << 0x12) | (zx.q(*fp_4) & 0xf) | 0x20
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x19), x25_9, 0, 0, 0xffffffff, 
                                nullptr) & 1) != 0)
                            int64_t x8_103 = sx.q(*(x21 + 0x400))
                            *(x21 + 0x400) = x8_103.d + 1
                            *(x21 + (x8_103 << 2)) = x25_9.d
                        
                        j_8 = j_15
                        j_15 -= 1
                        fp_4 = &(*fp_4)[1]
                    while (j_8 != 1)
                
                i_13 += 1
            while (i_13 != zx.q(x0_96))
        
        arg9 = nullptr
        return CollectRegisteredAbilities(x21, arg2, zx.q(x19), x24, zx.q(x26), 0x15, 0, zx.q(fp))
            __tailcall
    case 0xd
        if (arg10 s>= 1)
            int64_t i_14 = 0
            
            do
                uint64_t x22_20 = zx.q(*(x28 + (i_14 << 2)))
                uint64_t x27_4 = 0
                int32_t* fp_5 = *(arg2 + x22_20 * 0x68 + 0x1a68) + 0xec
                
                while (true)
                    int32_t x8_106 = fp_5[-3]
                    
                    if (x8_106 != 6)
                        if (x8_106 == 0)
                            break
                    else if (fp_5[-2] == 6 && *fp_5 == 4)
                        int64_t x23_7 = zx.q(x22_20.d << 0x12) | (zx.q(x22_20.d << 6) & 0x3ffc0)
                            | (x27_4 & 0xf) | 0x10
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x19), x23_7, zx.q(x22_20.d), 0, 
                                0xffffffff, nullptr).d & 1) != 0)
                            int64_t x8_111 = sx.q(*(x21 + 0x400))
                            *(x21 + 0x400) = x8_111.d + 1
                            *(x21 + (x8_111 << 2)) = x23_7.d
                    
                    x27_4 = zx.q(x27_4.d + 1)
                    fp_5 = &fp_5[0x30]
                
                x28 = var_10f0
                i_14 += 1
            while (i_14 != zx.q(arg10))
        
        return 
    case 0xe
        return CollectWhileOwnedAbilities(x21, arg2, zx.q(x19), 2, 0, 0, nullptr) __tailcall
    case 0xf, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e
        return 
    case 0x10
        arg1 = CardsExistTypes(arg2, &var_ce0)
        
        if (arg1.d s>= 1)
            int64_t x24_3 = 0
            uint64_t x25_4 = zx.q(arg1.d)
            
            do
                int32_t x22_7 = var_ce0[x24_3]
                arg1 = CardTypeHasExists(arg2, zx.q(x22_7), 8, &var_10e0)
                
                if (arg1.d s>= 1)
                    uint64_t i_18 = zx.q(arg1.d)
                    int32_t (* x28_4)[0x20] = &var_10e0
                    uint64_t i_15
                    
                    do
                        int64_t x22_8 = zx.q(x22_7 << 0x12) | (zx.q(*x28_4) & 0xf) | 0x20
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x19), x22_8, 0, 0, 0xffffffff, 
                                nullptr).d & 1) != 0)
                            int64_t x8_25 = sx.q(*(x21 + 0x400))
                            *(x21 + 0x400) = x8_25.d + 1
                            *(x21 + (x8_25 << 2)) = x22_8.d
                        
                        i_15 = i_18
                        i_18 -= 1
                        x28_4 = &(*x28_4)[1]
                    while (i_15 != 1)
                
                x24_3 += 1
            while (x24_3 != x25_4)
        
        return 
    case 0x11
        return CollectUniversalAbilities(x21, arg2, zx.q(x19), 2, 0) __tailcall
    case 0x12
        x5_1 = 0x13
        goto label_bd5f14
    case 0x13
        x5_1 = 0x14
    label_bd5f14:
        x0_102 = x21
        x1_73 = arg2
        x2_51 = zx.q(x19)
        x3_34 = x24
        x4_27 = zx.q(x26)
        arg9 = nullptr
    label_bd5f2c:
        return CollectRegisteredAbilities(x0_102, x1_73, x2_51, x3_34, x4_27, x5_1, 0, 0) __tailcall
    case 0x14
        x5_1 = 0x18
        goto label_bd5f14
    case 0x15
        x6_16 = zx.q(*x28)
        x5_1 = 0x1a
    label_bd5f48:
        arg9 = nullptr
        return CollectRegisteredAbilities(x21, arg2, zx.q(x19), x24, zx.q(x26), x5_1, x6_16, 0)
            __tailcall
    case 0x16
        x6_16 = zx.q(*x28)
        x5_1 = 0x19
        goto label_bd5f48
