// 函数: _Z18LimitPlayableCardsR7DomGame9PlayerWhoP6CardIDRi
// 地址: 0xbe7b28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_1d74 = arg2.d
AbilityIDs var_468
int64_t result
int64_t x1
result, x1 = CollectAllOngoing(arg1, arg2, &var_468, 0)

if (*arg4 s>= 1)
    int32_t i = 0
    
    do
        uint64_t x26_1 = zx.q(*(arg3 + (zx.q(i) << 0x20 s>> 0x1e)))
        
        if (x26_1.d u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_10 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_10 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_11 = *(x8_10 - 0x90)
            *(x8_11 + 0x1a2c) = *(x8_11 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            result, x1 = XTrace("game thread resume (error)")
        
        if (*(arg1 + x26_1 * 0x68 + 0x1a74) == 0x3ea)
            int32_t var_68
            
            if ((var_68 & 0x80000000) != 0)
                void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_16 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
                *(*(x8_16 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_17 = *(x8_16 - 0x90)
                *(x8_17 + 0x1a2c) = *(x8_17 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                x1 = XTrace("game thread resume (error)")
            
            int32_t x0_5
            int64_t x1_1
            x0_5, x1_1 = CountOngoing(arg1, x1, &var_468, 0x19, 0, 0)
            int32_t x24_1
            
            if (x0_5 s< 1)
                x24_1 = 0
                
                if ((var_68 & 0x80000000) != 0)
                label_be7cd8:
                    void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_22 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
                    *(*(x8_22 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_23 = *(x8_22 - 0x90)
                    *(x8_23 + 0x1a2c) = *(x8_23 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    x1_1 = XTrace("game thread resume (error)")
            else
                x24_1 = *(arg1 + muls.dp.d(var_1d74, 0x5a30) + 0x181d0) s> 2 ? 1 : 0
                
                if ((var_68 & 0x80000000) != 0)
                    goto label_be7cd8
            
            result, x1 = CountOngoing(arg1, x1_1, &var_468, 0x18, 0, 0)
            
            if (result.d s< 1)
            label_be7e68:
                
                if (x24_1 != 0)
                label_be7bac:
                    int64_t i_1 = sx.q(i)
                    i -= 1
                    int64_t x8_4 = sx.q(*arg4) - 1
                    *arg4 = x8_4.d
                    *(arg3 + (i_1 << 2)) = *(arg3 + (x8_4 << 2))
            else
                if (x26_1.d u>= 0x320)
                    void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_26 = x0_10 + sx.q(*(x0_10 + 0x13000)) * 0x98
                    *(*(x8_26 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_27 = *(x8_26 - 0x90)
                    *(x8_27 + 0x1a2c) = *(x8_27 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                void* x25_1 = arg1 + x26_1 * 0x68
                result, x1 = CardIsFast(arg1, zx.q(*(x25_1 + 0x1a70)), 4)
                
                if ((result.d & 1) == 0)
                    goto label_be7e68
                
                int32_t var_1d68[0x320]
                int32_t var_10e8[0x22]
                result, x1 = CountCardTypesWhere(arg1, zx.q(var_1d74), 0x3e9, &var_10e8, &var_1d68)
                int32_t x26_2 = result.d
                
                if (x26_1.d u>= 0x320)
                    void* x0_14 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_30 = x0_14 + sx.q(*(x0_14 + 0x13000)) * 0x98
                    *(*(x8_30 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_31 = *(x8_30 - 0x90)
                    *(x8_31 + 0x1a2c) = *(x8_31 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    result, x1 = XTrace("game thread resume (error)")
                
                int64_t x8_32
                int64_t x9_11
                
                if (x26_2 s>= 1)
                    x8_32 = 0
                    x9_11 = 0
                    
                    while (var_10e8[x9_11] != *(x25_1 + 0x1a70))
                        x9_11 += 1
                        x8_32 += 0x100000000
                        
                        if (zx.q(x26_2) == x9_11)
                            goto label_be7ea4
                
                if (x26_2 s< 1 || x9_11.d == 0xffffffff)
                label_be7ea4:
                    
                    if ((x24_1 & 1) != 0)
                        goto label_be7bac
                else if (((x24_1 | (*(&var_1d68 + (x8_32 s>> 0x1e)) s> 1 ? 1 : 0)) & 1) != 0)
                    goto label_be7bac
        
        i += 1
    while (i s< *arg4)

return result
