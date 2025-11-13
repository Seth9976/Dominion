// 函数: _Z24CollectOpponentAbilitiesR10AbilityIDsR7DomGame9PlayerWho9ContextIdi16TriggerEventTypeRK11TriggerInfo16TriggerEventFlagPK6CardIDiS3_
// 地址: 0xbd6678
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(arg6 - 3)

if (x9.d u> 0x10)
    return 

int32_t x19_1 = arg3
AbilityIDs& x21_1 = arg1
int32_t var_10e0[0x20]
int32_t var_ce0[0x2f4]

switch (x9)
    case 0
        int64_t var_1110 = 0
        CollectRegisteredAbilities(x21_1, arg2, zx.q(x19_1), arg4, arg5, 0, 0, 0)
        return CollectWhileInPlayAbilities(x21_1, arg2, zx.q(x19_1), 4, 0) __tailcall
    case 1
        arg9 = nullptr
        return CollectRegisteredAbilities(x21_1, arg2, zx.q(x19_1), arg4, arg5, 2, 0, 0) __tailcall
    case 4
        if (arg10 != 1)
            void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_5 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
            *(*(x8_5 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_6 = *(x8_5 - 0x90)
            *(x8_6 + 0x1a2c) = *(x8_6 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            return XTrace("game thread resume (error)") __tailcall
    case 5
        int64_t var_10f8 = arg4
        
        if (arg10 != 1)
            void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_10 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
            *(*(x8_10 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_11 = *(x8_10 - 0x90)
            *(x8_11 + 0x1a2c) = *(x8_11 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        CollectReactions(x21_1, arg2, zx.q(x19_1), 6, zx.q(*arg9), true, nullptr)
        CollectWhileOwnedAbilities(x21_1, arg2, zx.q(x19_1), 8, zx.q(*arg9), 0, nullptr)
        int32_t x26_1 = *arg9
        int32_t x0_11 = CardsExistTypes(arg2, &var_ce0)
        
        if (x0_11 s>= 1)
            int64_t i = 0
            
            do
                int32_t x27_2 = var_ce0[i]
                int32_t j_2 = CardTypeHasExists(arg2, zx.q(x27_2), 4, &var_10e0)
                
                if (j_2 s>= 1)
                    uint64_t j_1 = zx.q(j_2)
                    int32_t (* x28_1)[0x20] = &var_10e0
                    uint64_t j
                    
                    do
                        int64_t x27_3 = (zx.q(x26_1 << 6) & 0x3ffc0) | zx.q(x27_2 << 0x12)
                            | (zx.q(*x28_1) & 0xf) | 0x20
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x19_1), x27_3, zx.q(x26_1), 0, 
                                0xffffffff, arg7) & 1) != 0)
                            int64_t x8_18 = sx.q(*(x21_1 + 0x400))
                            *(x21_1 + 0x400) = x8_18.d + 1
                            *(x21_1 + (x8_18 << 2)) = x27_3.d
                        
                        j = j_1
                        j_1 -= 1
                        x28_1 = &(*x28_1)[1]
                    while (j != 1)
                
                i += 1
            while (i != zx.q(x0_11))
        
        TriggerInfo const& var_1110_1 = arg7
        CollectRegisteredAbilities(x21_1, arg2, zx.q(x19_1), var_10f8, zx.q(arg5), 0xf, 
            zx.q(*arg9), 0)
        return CollectRegisteredAbilitiesAdv(x21_1, arg2, zx.q(x19_1), var_10f8, 0x11, 
            zx.q(arg11.d), zx.q(*arg9), 0) __tailcall
    case 6
        if (arg10 != 1)
            void* x0_16 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_21 = x0_16 + sx.q(*(x0_16 + 0x13000)) * 0x98
            *(*(x8_21 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_22 = *(x8_21 - 0x90)
            *(x8_22 + 0x1a2c) = *(x8_22 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        uint64_t x23_1 = zx.q(*arg9)
        
        if (x23_1.d u>= 0x320)
            void* x0_18 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_25 = x0_18 + sx.q(*(x0_18 + 0x13000)) * 0x98
            *(*(x8_25 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_26 = *(x8_25 - 0x90)
            *(x8_26 + 0x1a2c) = *(x8_26 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t x22_2 = *(arg2 + 0xd50)
        int32_t x23_2 = *(arg2 + x23_1 * 0x68 + 0x1a70)
        int32_t x8_32 = (x23_2 + (x22_2 << 0x10)) s% 0x3e5
        int32_t* x9_14 = *(&data_1838a20 + (sx.q(x8_32) << 3))
        
        if (x9_14 != 0)
            while (*x9_14 != x23_2 || x9_14[1] != x22_2)
                x9_14 = *(x9_14 + 0x10)
                
                if (x9_14 == 0)
                    goto label_bd6a28
            
            if ((zx.d(*(*(x9_14 + 8) + 0xc8)) & 0x20) != 0)
                return CollectReactions(x21_1, arg2, zx.q(x19_1), 5, zx.q(*arg9), true, nullptr)
                    __tailcall
        else
        label_bd6a28:
            DomDefGetSlow(zx.q(x23_2), zx.q(x22_2))
            int32_t* x0_20 = malloc(0x18)
            int64_t x8_33 = sx.q(x8_32) << 3
            int64_t x9_15 = *(&data_1838a20 + x8_33)
            *x0_20 = x23_2
            x0_20[1] = x22_2
            *(&data_1838a20 + x8_33) = x0_20
            *(x0_20 + 0x10) = x9_15
            arg1 = DomDefGetSlow(zx.q(x23_2), zx.q(x22_2))
            *(x0_20 + 8) = arg1
            
            if ((zx.d(*(arg1 + 0xc8)) & 0x20) != 0)
                return CollectReactions(x21_1, arg2, zx.q(x19_1), 5, zx.q(*arg9), true, nullptr)
                    __tailcall
    case 0xc
        int32_t x23_3 = *arg9
        arg1 = CardsExistTypes(arg2, &var_ce0)
        
        if (arg1.d s>= 1)
            int64_t x26_3 = 0
            uint64_t x28_2 = zx.q(arg1.d)
            
            do
                int32_t x24_3 = var_ce0[x26_3]
                arg1 = CardTypeHasExists(arg2, zx.q(x24_3), 5, &var_10e0)
                
                if (arg1.d s>= 1)
                    uint64_t i_2 = zx.q(arg1.d)
                    int32_t (* x27_4)[0x20] = &var_10e0
                    uint64_t i_1
                    
                    do
                        int64_t x24_4 = (zx.q(x23_3 << 6) & 0x3ffc0) | zx.q(x24_3 << 0x12)
                            | (zx.q(*x27_4) & 0xf) | 0x20
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x19_1), x24_4, zx.q(x23_3), 0, 
                                0xffffffff, arg7).d & 1) != 0)
                            int64_t x8_43 = sx.q(*(x21_1 + 0x400))
                            *(x21_1 + 0x400) = x8_43.d + 1
                            *(x21_1 + (x8_43 << 2)) = x24_4.d
                        
                        i_1 = i_2
                        i_2 -= 1
                        x27_4 = &(*x27_4)[1]
                    while (i_1 != 1)
                
                x26_3 += 1
            while (x26_3 != x28_2)
    case 0x10
        arg9 = nullptr
        return CollectRegisteredAbilities(x21_1, arg2, zx.q(x19_1), arg4, arg5, 0x14, 0, 0)
            __tailcall
