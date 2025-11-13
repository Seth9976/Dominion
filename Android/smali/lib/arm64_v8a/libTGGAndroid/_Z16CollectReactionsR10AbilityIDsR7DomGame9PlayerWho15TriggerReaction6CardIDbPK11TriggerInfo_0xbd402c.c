// 函数: _Z16CollectReactionsR10AbilityIDsR7DomGame9PlayerWho15TriggerReaction6CardIDbPK11TriggerInfo
// 地址: 0xbd402c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg5
int32_t x23 = arg4
int32_t x20 = arg3
uint32_t x28_1

if (arg4 != 4 || (arg6.d & 1) != 0)
    x28_1 = *(arg2 + muls.dp.d(x20, 0x5a30) + 0x17f70)

int32_t var_468[0x100]
int32_t x8_19

if ((arg4 == 4 && (arg6.d & 1) == 0) || x28_1 == 0)
    x8_19 = 1
    
    if (x19 != 0)
    label_bd4280:
        
        if (x8_19 != 0)
            int32_t i_7 = 0
            void* x10_3 = *(arg2 + mulu.dp.d(x19, 0x68) + 0x1a68)
            int32_t i = *(x10_3 + 0xe0)
            
            if (i != 0)
                int32_t x8_21 = 0
                void* x10_4 = x10_3 + 0x1a0
                
                do
                    if (i == 6 && (*(x10_4 - 0xc) & 4) != 0 && *(x10_4 - 0xbc) == 0
                            && *(x10_4 - 0xb4) == x23)
                        int64_t i_9 = sx.q(i_7)
                        i_7 = i_9.d + 1
                        var_468[i_9] = (0x3ffff & (x19 & 0xfff) << 6) | (0x3fff & x19) << 0x12
                            | (x8_21 & 0xf) | 0x10
                    
                    i = *x10_4
                    x10_4 += 0xc0
                    x8_21 += 1
                while (i != 0)
                
                uint64_t i_4 = zx.q(i_7)
                
                if (i_4.d s>= 1)
                    int32_t (* x25_2)[0x100] = &var_468
                    uint64_t i_1
                    
                    do
                        uint64_t x23_1 = zx.q(*x25_2)
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x20), x23_1, zx.q(x19), 0, 
                                0xffffffff, nullptr).d & 1) != 0)
                            int64_t x8_22 = sx.q(*(arg1 + 0x400))
                            *(arg1 + 0x400) = x8_22.d + 1
                            *(arg1 + (x8_22 << 2)) = x23_1.d
                        
                        i_1 = i_4
                        i_4 -= 1
                        x25_2 = &(*x25_2)[1]
                    while (i_1 != 1)
else
    uint64_t x27_1 = zx.q(x28_1.w)
    
    if (x27_1.d u>= 0x320)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_5 = *(x8_4 - 0x90)
        *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    int32_t fp_1 = 0
    uint64_t x26_2 = zx.q(x28_1) | zx.q(*(arg2 + x27_1 * 0x68 + 0x1ac8)) << 0x20
    
    while (true)
        int32_t i_6 = 0
        void* x10_1 = *(arg2 + (x26_2 & 0xffffffff) * 0x68 + 0x1a68)
        
        if (x28_1 == x19)
            fp_1 = 1
        
        int32_t i_2 = *(x10_1 + 0xe0)
        
        if (i_2 != 0)
            int32_t x8_13 = 0
            void* x10_2 = x10_1 + 0xe4
            
            do
                if (i_2 == 6 && *x10_2 == 0 && *(x10_2 + 8) == x23)
                    int64_t i_8 = sx.q(i_6)
                    i_6 = i_8.d + 1
                    var_468[i_8] = (0x3ffff & (x19 & 0xfff) << 6) | (0x3fff & x28_1) << 0x12
                        | (x8_13 & 0xf) | 0x10
                
                i_2 = *(x10_2 + 0xbc)
                x8_13 += 1
                x10_2 += 0xc0
            while (i_2 != 0)
            
            uint64_t i_5 = zx.q(i_6)
            
            if (i_5.d s>= 1)
                int32_t (* x27_2)[0x100] = &var_468
                uint64_t i_3
                
                do
                    uint64_t x28_2 = zx.q(*x27_2)
                    
                    if ((TriggerAbilityTestValid(arg2, zx.q(x20), x28_2, zx.q(x19), 0, 0xffffffff, 
                            arg7).d & 1) != 0)
                        int64_t x8_14 = sx.q(*(arg1 + 0x400))
                        *(arg1 + 0x400) = x8_14.d + 1
                        *(arg1 + (x8_14 << 2)) = x28_2.d
                    
                    i_3 = i_5
                    i_5 -= 1
                    x27_2 = &(*x27_2)[1]
                while (i_3 != 1)
        
        x28_1 = (x26_2 u>> 0x20).d
        
        if (x28_1 == 0)
            break
        
        int32_t x25_1 = x28_1 & 0xffff
        
        if (x25_1 u>= 0x320)
            void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_17 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
            *(*(x8_17 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_18 = *(x8_17 - 0x90)
            *(x8_18 + 0x1a2c) = *(x8_18 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        x26_2 = zx.q(x28_1) | zx.q(*(arg2 + mulu.dp.d(x25_1, 0x68) + 0x1ac8)) << 0x20
    
    x8_19 = (fp_1 & 1) == 0 ? 1 : 0
    
    if (x19 != 0)
        goto label_bd4280
