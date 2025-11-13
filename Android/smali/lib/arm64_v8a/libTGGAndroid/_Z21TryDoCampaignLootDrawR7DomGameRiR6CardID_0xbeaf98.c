// 函数: _Z21TryDoCampaignLootDrawR7DomGameRiR6CardID
// 地址: 0xbeaf98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg2 s<= 0x3f)
    uint64_t result = zx.q(*(arg1 + 0xd48))
    
    if (result.d == 0)
        return result
    
    if ((zx.d(*(arg1 + 0xd4c)) & 0x80) == 0)
        int64_t x0 = GetCampaign(result)
        int64_t x8_2 = -0x41
        void* __offset(DomGame, 0x15a0) x9_1 = arg1 + 0x15a0
        int32_t x21_1
        
        while (true)
            if (*(x9_1 - 4) == 0x1128 || *x9_1 == 0x1128)
                x21_1 = x8_2.d + 0x48
                break
            
            int64_t temp0_1 = x8_2
            x8_2 += 1
            x9_1 += 0x10
            
            if (temp0_1 u< -1)
                continue
            
            x21_1 = 0
            break
        
        int64_t x8_3 = sx.q(*arg2)
        int32_t x26_1 = *(x0 + (x8_3 << 2) + 0x18b8)
        *arg2 = x8_3.d + 1
        void* x8_9
        int64_t x9_5
        
        if (x21_1 u> 0x48)
            x8_9 = arg1 + (sx.q(x21_1) << 2)
            x9_5 = 0x11598
        else
            if (x21_1 == 0x48)
                void* x0_2 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_7 = x0_2 + sx.q(*(x0_2 + 0x13000)) * 0x98
                *(*(x8_7 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_8 = *(x8_7 - 0x90)
                *(x8_8 + 0x1a2c) = *(x8_8 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            x8_9 = arg1 + (zx.q(x21_1) << 4)
            x9_5 = 0x1534
        
        int32_t x22_2 = *(x8_9 + x9_5)
        
        if (x22_2 == 0)
        label_beb174:
            pthread_kill(pthread_self(), 6)
            XNoReturn()
        else
            while (true)
                int32_t x21_2 = x22_2 & 0xffff
                
                if (x21_2 u>= 0x320)
                    void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_13 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
                    *(*(x8_13 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_14 = *(x8_13 - 0x90)
                    *(x8_14 + 0x1a2c) = *(x8_14 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                if (*(arg1 + mulu.dp.d(x21_2, 0x68) + 0x1a70) == x26_1)
                    break
                
                x22_2 = *(arg1 + zx.q(x21_2) * 0x68 + 0x1ac8)
                
                if (x22_2 == 0)
                    goto label_beb174
        
        CardRemove(arg1, zx.q(x22_2), nullptr)
        CardAddHead(arg1, zx.q(x22_2), zx.q(x21_1), 0xffffffff)
        *arg3 = x22_2
        return 1

return 0
