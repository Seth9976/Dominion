// 函数: _Z8PayCostsR7DomGame9PlayerWho6CardID
// 地址: 0xbdba3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9_1 = *(arg1 + mulu.dp.d(arg3, 0x68) + 0x1a68)
int16_t x21 = arg3.w
int32_t x19 = arg2
int64_t x8 = 0
int32_t* x10 = x9_1 + 0xe0
int32_t i = *x10
void* result
uint64_t var_470

if (i == 0)
label_bdbb58:
    uint32_t x21_1 = zx.d(x21)
    
    if (x21_1 u>= 0x320)
        void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_12 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
        *(*(x8_12 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_13 = *(x8_12 - 0x90)
        *(x8_13 + 0x1a2c) = *(x8_13 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    int32_t x0_8 = CardCost(arg1, zx.q(x19), zx.q(*(arg1 + mulu.dp.d(x21_1, 0x68) + 0x1a70)), 0)
    int32_t x8_16 = *(arg1 + muls.dp.d(x19, 0x5a30) + 0x18194)
    int32_t x9_8 = x0_8 & 0xff
    int32_t x23_2
    
    x23_2 = x9_8 s< x8_16 ? x9_8 : x8_16
    
    int32_t x22_3 = x9_8 - x23_2
    
    if (x9_8 - x23_2 s< 0)
        void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_19 = x0_10 + sx.q(*(x0_10 + 0x13000)) * 0x98
        *(*(x8_19 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_20 = *(x8_19 - 0x90)
        *(x8_20 + 0x1a2c) = *(x8_20 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    result = GetCoffers(arg1, zx.q(x19))
    
    if (x22_3 s> result.d)
        void* x0_13 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_23 = x0_13 + sx.q(*(x0_13 + 0x13000)) * 0x98
        *(*(x8_23 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_24 = *(x8_23 - 0x90)
        *(x8_24 + 0x1a2c) = *(x8_24 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        result = XTrace("game thread resume (error)")
    
    int32_t x24_2 = x0_8 u>> 0x10 & 1
    
    if (x22_3 != 0)
        result = RemoveCoffers(arg1, zx.q(x19), x22_3, 0)
    
    int32_t x22_4 = x0_8 s>> 0x18
    
    if (x23_2 != 0)
        result = AddResource(arg1, zx.q(x19), 0, neg.d(x23_2), 0, 2)
    
    if (x24_2 != 0)
        result = AddResource(arg1, zx.q(x19), 3, neg.d(x24_2), 0, 2)
    
    if (x22_4 != 0)
        CollectOngoing(arg1, zx.q(x19), 0x2f, 0)
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        int128_t v3_1
        result, v0_1, v1_1, v2_1, v3_1 = SumOngoingParam(arg1, &var_470)
        int32_t x22_5 = x22_4 - result.d
        
        if (result.d != 0)
            int32_t x8_25 = *(arg1 + 0x19c0)
            
            if (x8_25 s>= 1)
                int32_t x23_3 = 0
                
                do
                    void* fp_1 = arg1 + muls.dp.d(x23_3, 0xb8)
                    
                    if (*(fp_1 + 0x3c21c) == x19)
                        int64_t x9_15 = sx.q(x23_3)
                        
                        if (*(arg1 + x9_15 * 0xb8 + 0x3c254) == 3
                                && *(arg1 + x9_15 * 0xb8 + 0x3c258) == 0x2f)
                            int32_t x11_1 = *(arg1 + 0x150c)
                            
                            if (x11_1 - 3 u>= 4)
                                int32_t x8_31 = *(arg1 + x9_15 * 0xb8 + 0x3c220)
                                uint64_t x2_3
                                
                                if (x8_31 == 0xffffffff)
                                    x2_3 = zx.q(x19)
                                else
                                    x2_3 = zx.q(x8_31)
                                
                                int64_t var_488_1 = 0
                                int32_t var_490_1 = 0
                                int32_t var_498_1 = 0
                                int32_t var_4a0_1 = 0
                                result, v0_1, v1_1, v2_1, v3_1 = DomNotifyEffect(
                                    zx.q(x11_1 == 2 ? 1 : 0), 0x1c, x2_3, 0x2f, 
                                    zx.q(*(arg1 + x9_15 * 0xb8 + 0x3c25c)), 0, 0, 0)
                                x8_25 = *(arg1 + 0x19c0)
                            
                            *(arg1 + 0x19c0) = x8_25 - 1
                            v1_1 = *(arg1 + (sx.q(x8_25) - 1) * 0xb8 + 0x3c238)
                            v2_1 = *(arg1 + (sx.q(x8_25) - 1) * 0xb8 + 0x3c208)
                            v3_1 = *(arg1 + (sx.q(x8_25) - 1) * 0xb8 + 0x3c218)
                            x23_3 -= 1
                            *(fp_1 + 0x3c228) = *(arg1 + (sx.q(x8_25) - 1) * 0xb8 + 0x3c228)
                            *(fp_1 + 0x3c238) = v1_1
                            *(fp_1 + 0x3c208) = v2_1
                            *(fp_1 + 0x3c218) = v3_1
                            v0_1 = *(arg1 + (sx.q(x8_25) - 1) * 0xb8 + 0x3c278)
                            v3_1 = *(arg1 + (sx.q(x8_25) - 1) * 0xb8 + 0x3c248)
                            v2_1 = *(arg1 + (sx.q(x8_25) - 1) * 0xb8 + 0x3c258)
                            *(fp_1 + 0x3c268) = *(arg1 + (sx.q(x8_25) - 1) * 0xb8 + 0x3c268)
                            *(fp_1 + 0x3c278) = v0_1
                            *(fp_1 + 0x3c248) = v3_1
                            *(fp_1 + 0x3c258) = v2_1
                            v1_1 = *(arg1 + (sx.q(x8_25) - 1) * 0xb8 + 0x3c298)
                            v0_1 = *(arg1 + (sx.q(x8_25) - 1) * 0xb8 + 0x3c2a8)
                            v2_1 = *(arg1 + (sx.q(x8_25) - 1) * 0xb8 + 0x3c288)
                            *(fp_1 + 0x3c2b8) = *(arg1 + (sx.q(x8_25) - 1) * 0xb8 + 0x3c2b8)
                            *(fp_1 + 0x3c298) = v1_1
                            *(fp_1 + 0x3c2a8) = v0_1
                            *(fp_1 + 0x3c288) = v2_1
                            x8_25 = *(arg1 + 0x19c0)
                    
                    x23_3 += 1
                while (x23_3 s< x8_25)
        
        if (x22_5 s>= 1)
            int32_t var_498_2 = 0
            int32_t var_4a0_2 = 0xffffffff
            AddTokens(arg1, zx.q(x19), 0xc00, zx.q(x22_5), 0x476, 0, 0, 0)
            __builtin_memset(&var_470, 0, 0x48)
            var_470.d = 4
            int32_t var_468_1 = x22_5
            int32_t var_64 = 0x14
            var_4a0_2.q = 0
            result = TriggerEvents(arg1, zx.q(x19), &var_64, 1, &var_470, 0, nullptr, 0)
    
    if ((x0_8 & 0x40000) != 0)
        void* x0_23 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_34 = x0_23 + sx.q(*(x0_23 + 0x13000)) * 0x98
        *(*(x8_34 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_35 = *(x8_34 - 0x90)
        *(x8_35 + 0x1a2c) = *(x8_35 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        return XTrace("game thread resume (error)")
else
    while (i != 4)
        x8 += 1
        x10 = &x10[0x30]
        i = *x10
        
        if (i == 0)
            goto label_bdbb58
    
    int64_t x23_1 = *(x9_1 + (x8 & 0xffffffff) * 0xc0 + 0xf8)
    
    if (x23_1 == 0)
        goto label_bdbb58
    
    uint32_t x24_1 = zx.d(x21)
    
    if (x24_1 u>= 0x320)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_5 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_5 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_6 = *(x8_5 - 0x90)
        *(x8_6 + 0x1a2c) = *(x8_6 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    var_470 = zx.q(arg3) | zx.q(*(arg1 + mulu.dp.d(x24_1, 0x68) + 0x1a78)) << 0x20
    DomPushContext(arg1, zx.q(x19), &var_470)
    int32_t x0_3 = x23_1()
    result = __emutls_get_address(__emutls_v.gContextStack_tl)
    *(result + 0x13000) -= 1
    
    if ((x0_3 & 1) == 0)
        goto label_bdbb58
return result
