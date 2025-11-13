// 函数: _Z17TryDoCampaignDrawR7DomGame9PlayerWhoRiR6CardID
// 地址: 0xbeb448
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg3 s<= 0x3f)
    uint64_t result = zx.q(*(arg1 + 0xd48))
    
    if (result.d == 0)
    label_beb584:
        return result
    
    if ((zx.d(*(arg1 + 0xd4c)) & 0x80) == 0)
        int32_t x20_1 = arg2
        int64_t x0 = GetCampaign(result)
        int64_t x9_1 = sx.q(*arg3)
        int64_t x8_2 = sx.q(x20_1)
        int32_t x27_1 = *(x0 + (x8_2 << 0xa) + (x9_1 << 2))
        
        if (x27_1 != 0)
            *arg3 = x9_1.d + 1
            uint64_t x28_1
            
            for (int32_t i = *(arg1 + x8_2 * 0x5a30 + 0x17f74); i != 0; 
                    i = *(arg1 + x28_1 * 0x68 + 0x1ac8))
                int32_t x26_1 = i & 0xffff
                
                if (x26_1 u>= 0x320)
                    void* x0_2 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_7 = x0_2 + sx.q(*(x0_2 + 0x13000)) * 0x98
                    *(*(x8_7 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_8 = *(x8_7 - 0x90)
                    *(x8_8 + 0x1a2c) = *(x8_8 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                x28_1 = zx.q(x26_1)
                
                if (*(arg1 + mulu.dp.d(x26_1, 0x68) + 0x1a70) == x27_1)
                    CardRemove(arg1, zx.q(i), nullptr)
                    
                    if (x26_1 u>= 0x320)
                        void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_15 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
                        *(*(x8_15 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_16 = *(x8_15 - 0x90)
                        *(x8_16 + 0x1a2c) = *(x8_16 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    int32_t x9_7 = *(arg1 + 0x19b4)
                    void* x8_17 = arg1 + x28_1 * 0x68
                    *(arg1 + 0x19b4) = x9_7 + 1
                    *(x8_17 + 0x1a78) = x9_7
                    *(x8_17 + 0x1a74) = 0x3eb
                    
                    if (x20_1 != 0xffffffff)
                        *(arg1 + x28_1 * 0x68 + 0x1a98) = x20_1
                    
                    void* x8_19 = arg1 + x28_1 * 0x68
                    *(x8_19 + 0x1a94) = x20_1
                    *(x8_19 + 0x1a9c) = x20_1
                    result = 1
                    *(x8_19 + 0x1ac8) = *(arg1 + x8_2 * 0x5a30 + 0x17f74)
                    *(arg1 + x8_2 * 0x5a30 + 0x17f74) = i
                    *arg4 = i
                    goto label_beb584
            
            if (*(arg1 + 0x150c) != 3)
                pthread_kill(pthread_self(), 6)
                DomGame* x0_7
                int64_t x1_1
                bool x2
                x0_7, x1_1, x2 = XNoReturn()
                return TopDeckCard(x0_7, x1_1, x2) __tailcall

return 0
