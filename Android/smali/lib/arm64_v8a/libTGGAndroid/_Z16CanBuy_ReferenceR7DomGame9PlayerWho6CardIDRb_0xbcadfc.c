// 函数: _Z16CanBuy_ReferenceR7DomGame9PlayerWho6CardIDRb
// 地址: 0xbcadfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = arg3 & 0xffff
int32_t x22 = arg3
int32_t x20 = arg2
*arg4 = false

if (x23 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

void* x24 = arg1 + mulu.dp.d(x23, 0x68)

if (CountOngoing(arg1, zx.q(x20), 8, *(x24 + 0x1a70), 0) s<= 0)
    int32_t x0_6 = CountOngoing(arg1, zx.q(x20), 9, 0, 0)
    int32_t x0_8
    
    if (x0_6 s>= 1)
        x0_8 = IsLandscape(arg1, zx.q(x22))
    
    if (x0_6 s< 1 || (x0_8 & 1) != 0)
        int32_t x0_10 = CountOngoing(arg1, zx.q(x20), 0xe, 0, 0)
        int32_t x0_14
        
        if (x0_10 s>= 1)
            if (x23 u>= 0x320)
                void* x0_12 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_7 = x0_12 + sx.q(*(x0_12 + 0x13000)) * 0x98
                *(*(x8_7 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_8 = *(x8_7 - 0x90)
                *(x8_8 + 0x1a2c) = *(x8_8 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            x0_14 = CardIsFast(arg1, zx.q(*(x24 + 0x1a70)), 4)
        
        if (x0_10 s< 1 || (x0_14 & 1) == 0)
            void* x9_6 = *(arg1 + mulu.dp.d(x22, 0x68) + 0x1a68)
            int64_t x8_9 = 0
            int32_t* x10_1 = x9_6 + 0xe0
            
            for (int32_t i = *x10_1; i != 0; i = *x10_1)
                if (i == 4)
                    int64_t x26_1 = *(x9_6 + (x8_9 & 0xffffffff) * 0xc0 + 0x188)
                    
                    if (x26_1 != 0)
                        if (x23 u>= 0x320)
                            void* x0_16 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_14 = x0_16 + sx.q(*(x0_16 + 0x13000)) * 0x98
                            *(*(x8_14 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_15 = *(x8_14 - 0x90)
                            *(x8_15 + 0x1a2c) = *(x8_15 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        uint64_t var_48 =
                            zx.q(x22) | zx.q(*(arg1 + zx.q(x23) * 0x68 + 0x1a78)) << 0x20
                        DomPushContext(arg1, zx.q(x20), &var_48)
                        int32_t x0_18 = x26_1()
                        int32_t* x8_18 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
                        *x8_18 -= 1
                        
                        if ((x0_18 & 1) != 0)
                            return 1
                    
                    break
                
                x8_9 += 1
                x10_1 = &x10_1[0x30]
            
            if (x23 u>= 0x320)
                void* x0_22 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_21 = x0_22 + sx.q(*(x0_22 + 0x13000)) * 0x98
                *(*(x8_21 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_22 = *(x8_21 - 0x90)
                *(x8_22 + 0x1a2c) = *(x8_22 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            int32_t x0_24 = CardCost(arg1, zx.q(x20), zx.q(*(x24 + 0x1a70)), 0)
            
            if ((x0_24 & 0x40000) != 0)
                return 0
            
            void* x24_2 = arg1 + muls.dp.d(x20, 0x5a30)
            int32_t x23_1 = *(x24_2 + 0x18194)
            int32_t x0_26 = GetCoffers(arg1, zx.q(x20))
            
            if ((x0_24 u>> 0x10 & 1) s<= *(x24_2 + 0x181a0))
                int32_t x8_24 = x0_24 & 0xff
                
                if (x8_24 s<= x23_1)
                    *arg4 = false
                    return 1
                
                if (x8_24 s<= x0_26 + x23_1)
                    *arg4 = true
                    return 1

return 0
