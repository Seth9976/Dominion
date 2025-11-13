// 函数: _Z15SelectAbilitiesR7DomGame9PlayerWhoR10AbilityIDsP9AbilityIDb
// 地址: 0xbd82bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
int32_t var_ce8
int32_t x22_1

if ((AnyFullyCommute(arg1, arg3, &var_ce8) & 1) == 0)
    if (*(arg3 + 0x400) s>= 1)
        int64_t i = 0
        
        do
            int64_t x25_1 = i << 2
            uint64_t x2_1 = zx.q(*(arg3 + x25_1))
            int64_t var_68 = 3 | (0xffffffff & x2_1) << 0x20
            int32_t x0_2 = AbilityGetAssociatedCards(arg1, zx.q(x20), x2_1, &var_ce8)
            NotifyCreateAbilityDesc(arg1, zx.q(x20), zx.q(*(arg3 + x25_1)), &var_68, &var_ce8, x0_2)
            i += 1
        while (i s< sx.q(*(arg3 + 0x400)))
    
    InvalidateSubmittedActions()
    x22_1 = QueueChoiceAbility(arg1, zx.q(x20), arg3, *(arg3 + 0x400), arg4, arg5 & 1)
    
    if (*(arg3 + 0x400) s>= 1)
        int64_t i_1 = 0
        
        do
            int32_t x26_1 = *(arg3 + (i_1 << 2))
            int32_t x8_6
            
            if (x26_1 == 0xffffffff)
                void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_9 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
                *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_10 = *(x8_9 - 0x90)
                *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
                x8_6 = *(arg1 + 0x150c)
                
                if (x8_6 - 3 u>= 4)
                label_bd8468:
                    int64_t var_cf8_1 = 0
                    int32_t var_d00_1 = 0
                    int32_t var_d08_1 = 0
                    int32_t var_d10_1 = 0
                    DomNotifyEffect(zx.q(x8_6 == 2 ? 1 : 0), 0x19, zx.q(x20), zx.q(x26_1), 0, 0, 0, 
                        0)
            else
                x8_6 = *(arg1 + 0x150c)
                
                if (x8_6 - 3 u>= 4)
                    goto label_bd8468
            i_1 += 1
        while (i_1 s< sx.q(*(arg3 + 0x400)))
else
    *arg4 = var_ce8
    x22_1 = 1

return zx.q(x22_1)
