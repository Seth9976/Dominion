// 函数: _Z21TryDoCampaignFateDrawR7DomGame11DomCardEnumRiR6CardID
// 地址: 0xbeb1ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg3 s<= 0x3f)
    uint64_t result = zx.q(*(arg1 + 0xd48))
    
    if (result.d == 0)
        return result
    
    if ((zx.d(*(arg1 + 0xd4c)) & 0x80) == 0)
        int32_t x23_1 = arg2
        int64_t x0 = GetCampaign(result)
        
        if (x23_1 != 0xd30 && x23_1 != 0xd3d)
            void* x0_2 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_4 = x0_2 + sx.q(*(x0_2 + 0x13000)) * 0x98
            *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_5 = *(x8_4 - 0x90)
            *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t x21_1
        
        if (x23_1 != 0xd30 && x23_1 != 0xd3d && x23_1 == 0)
        label_beb290:
            x21_1 = 0
        else
            void* __offset(DomGame, 0x15a0) x9_3 = arg1 + 0x15a0
            int64_t x8_6 = -0x41
            
            while (true)
                if (*(x9_3 - 4) == x23_1 || *x9_3 == x23_1)
                    x21_1 = x8_6.d + 0x48
                    break
                
                int64_t temp0_1 = x8_6
                x8_6 += 1
                x9_3 += 0x10
                
                if (temp0_1 u>= -1)
                    goto label_beb290
                
                continue
        
        int64_t x8_7 = sx.q(*arg3)
        void* x11_1 = x0 + (x8_7 << 2)
        int32_t* x9_5
        
        if (x23_1 == 0xd30)
            x9_5 = x11_1 + 0x1838
        else
            x9_5 = x11_1 + 0x1868
        
        int32_t x26_1 = *x9_5
        
        if (x26_1 != 0)
            *arg3 = x8_7.d + 1
            void* x8_13
            int64_t x9_8
            
            if (x21_1 u> 0x48)
                x8_13 = arg1 + (sx.q(x21_1) << 2)
                x9_8 = 0x11598
            else
                if (x21_1 == 0x48)
                    void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_11 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
                    *(*(x8_11 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_12 = *(x8_11 - 0x90)
                    *(x8_12 + 0x1a2c) = *(x8_12 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                x8_13 = arg1 + (zx.q(x21_1) << 4)
                x9_8 = 0x1534
            
            int32_t x22_2 = *(x8_13 + x9_8)
            
            if (x22_2 == 0)
            label_beb40c:
                pthread_kill(pthread_self(), 6)
                XNoReturn()
            else
                while (true)
                    int32_t x21_2 = x22_2 & 0xffff
                    
                    if (x21_2 u>= 0x320)
                        void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_17 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
                        *(*(x8_17 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_18 = *(x8_17 - 0x90)
                        *(x8_18 + 0x1a2c) = *(x8_18 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    if (*(arg1 + mulu.dp.d(x21_2, 0x68) + 0x1a70) == x26_1)
                        break
                    
                    x22_2 = *(arg1 + zx.q(x21_2) * 0x68 + 0x1ac8)
                    
                    if (x22_2 == 0)
                        goto label_beb40c
            
            CardRemove(arg1, zx.q(x22_2), nullptr)
            CardAddHead(arg1, zx.q(x22_2), zx.q(x21_1), 0xffffffff)
            *arg4 = x22_2
        
        return zx.q(x26_1 != 0 ? 1 : 0)

return 0
