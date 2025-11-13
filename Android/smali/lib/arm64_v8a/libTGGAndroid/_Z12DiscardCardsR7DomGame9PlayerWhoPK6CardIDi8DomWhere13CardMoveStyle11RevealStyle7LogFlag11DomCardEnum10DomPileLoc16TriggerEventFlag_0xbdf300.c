// 函数: _Z12DiscardCardsR7DomGame9PlayerWhoPK6CardIDi8DomWhere13CardMoveStyle11RevealStyle7LogFlag11DomCardEnum10DomPileLoc16TriggerEventFlag
// 地址: 0xbdf300
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_d38 = arg2
int32_t i_5

if (arg4 == 0)
    i_5 = 0
else
    uint64_t x27_1 = zx.q(*arg3)
    int32_t x19_1 = arg11.d
    int32_t x24_1 = arg8
    int32_t x26_1 = arg7
    int32_t x23_1 = arg6
    int32_t x25_1 = arg5
    CardID const* x28_1 = arg3
    int32_t x20_1
    
    if (x27_1.d u> 0x31f)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_5 = *(x8_4 - 0x90)
        *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        arg3 = XTrace("game thread resume (error)")
        uint32_t x28_2 = zx.d(*x28_1)
        x20_1 = *(arg1 + mulu.dp.d(x27_1.d, 0x68) + 0x1a74)
        
        if (x28_2 u>= 0x320)
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_9 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_10 = *(x8_9 - 0x90)
            *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            arg3 = XTrace("game thread resume (error)")
        
        x27_1 = zx.q(x28_2)
    else
        x20_1 = *(arg1 + x27_1 * 0x68 + 0x1a74)
    
    int32_t x8_12 = *(arg1 + 0x19f4)
    bool z_1
    
    if (*(arg1 + mulu.dp.d(x27_1.d, 0x68) + 0x1a74) != 0x451)
        z_1 = x20_1 == 0x3e9
    else
        z_1 = true
    
    int32_t x27_2
    
    x27_2 = z_1 ? x19_1 | 2 : x19_1
    
    int64_t var_d90
    int64_t x3
    
    if (x26_1 != 6)
        if (x26_1 u> 0xc)
        label_bdf948:
            pthread_kill(pthread_self(), 6)
            DomGame* x0_17
            int64_t x1_6
            x0_17, x1_6 = XNoReturn()
            return CardOwner(x0_17, x1_6) __tailcall
        
        int32_t x9_6 = 1 << x26_1
        
        if ((x9_6 & 0xdbe) == 0)
            if ((x9_6 & 0x201) == 0)
                goto label_bdf948
            
            x3 = x25_1 == 0x3eb ? 0x33 : 0x32
            
            if ((x24_1 & 4) != 0 || x8_12 != 5)
                goto label_bdf4b4
        else
            x3 = x25_1 == 0x3eb ? 0x33 : 0x30
            
            if ((x24_1 & 4) != 0 || x8_12 != 5)
                goto label_bdf4b4
    else
        x3 = x25_1 == 0x3eb ? 0x33 : 0x31
        
        if ((x24_1 & 4) != 0 || x8_12 != 5)
        label_bdf4b4:
            
            if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
                uint64_t x2
                
                if (*(arg1 + 0x19d4) == var_d38.d)
                    x2 = zx.q(*(arg1 + 0x19d8))
                else
                    x2 = zx.q(var_d38.d)
                
                int32_t var_d80_1 = 0
                int32_t var_d88_1 = 0
                var_d90.d = 0
                arg3 = DomAddLogEvent(arg1, var_d38, x2, x3, 
                    zx.q((x24_1 & 1) << 0x1f s>> 0x1f) & zx.q(arg9.d), x28_1, zx.q(arg4), 0)
    int32_t x19_3 = x27_2 | (x8_12 == 5 ? 1 : 0)
    
    if ((x27_2 & 0x20) != 0 && *(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
        uint64_t x2_1
        
        if (*(arg1 + 0x19d4) == 0xffffffff)
            x2_1 = zx.q(*(arg1 + 0x19d8))
        else
            x2_1 = 0xffffffff
        
        int32_t var_d80_2 = 0
        int32_t var_d88_2 = 0
        var_d90.d = 0
        arg3 = DomAddLogEvent(arg1, 0xffffffff, x2_1, 0x3c, 0, nullptr, 0, 0)
    
    int32_t x20_2
    
    x20_2 = x26_1 == 6 ? 2 : 1
    
    int32_t var_a8 = 3
    int32_t var_a0_1 = arg4
    int64_t var_b0 = 0xb00000006
    
    if (x19_3 == 3)
        int64_t var_d90_1 = 0
        arg3 = TriggerEvents(arg1, var_d38, &var_b0, zx.q(x20_2), &var_a8, 3, x28_1, zx.q(arg4))
    
    uint64_t x20_3 = zx.q(arg4 - 1)
    
    if (arg4 s< 1)
        i_5 = 0
    else
        int64_t x28_3 = arg10.q
        uint64_t i_4 = zx.q(arg4)
        i_5 = 0
        int32_t var_d30[0x320]
        
        if (x25_1 != 7)
            CardID const* x26_2 = x28_1
            uint64_t i
            
            do
                int32_t x24_3 = *x26_2
                uint64_t x21_3 = zx.q(x24_3.w)
                
                if (x21_3.d u>= 0x320)
                    void* x0_13 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_34 = x0_13 + sx.q(*(x0_13 + 0x13000)) * 0x98
                    *(*(x8_34 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_35 = *(x8_34 - 0x90)
                    *(x8_35 + 0x1a2c) = *(x8_35 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    arg3 = XTrace("game thread resume (error)")
                
                int32_t x8_37 = *(arg1 + x21_3 * 0x68 + 0x1a74)
                
                if (x8_37 != 0x3eb)
                    if ((x25_1 == 0x451 && x8_37 == 0x3e9) || x8_37 == x25_1
                        || ((x25_1 == 0x3e9 ? 1 : 0) & (x8_37 == 0x451 ? 1 : 0)) != 0)
                    label_bdf718:
                        uint64_t x2_4 = zx.q(*x26_2)
                        var_d30[sx.q(i_5)] = x2_4.d
                        bool z_3
                        
                        if (*(arg1 + 0x19f4) == 5)
                            z_3 = x23_1 == 0xb
                        else
                            z_3 = false
                        
                        uint64_t x4_3
                        
                        if (z_3)
                            x4_3 = 8
                        else
                            x4_3 = zx.q(x23_1)
                        
                        i_5 += 1
                        int32_t var_d68_2 = 0
                        int64_t var_d70_2 = 0
                        int32_t var_d78_2 = 0
                        int32_t var_d80_4 = x20_3 == 0 ? 1 : 0
                        int32_t var_d88_4 = 0
                        int64_t var_d90_3 = 0
                        arg3 = MoveCardTo(arg1, var_d38, x2_4, zx.q(x25_1), x4_3, 0x3ec, 7, x28_3)
                else if (*(arg1 + sx.q(*(arg1 + x21_3 * 0x68 + 0x1a94)) * 0x5a30 + 0x17f74) == x24_3
                        && (x8_37 == x25_1
                        || ((x25_1 == 0x3e9 ? 1 : 0) & (x8_37 == 0x451 ? 1 : 0)) != 0))
                    goto label_bdf718
                
                x20_3 -= 1
                i = i_4
                i_4 -= 1
                x26_2 += 4
            while (i != 1)
        else
            CardID const* x24_2 = x28_1
            uint64_t i_1
            
            do
                uint64_t x21_2 = zx.q(*x24_2)
                
                if (x21_2.d u>= 0x320)
                    void* x0_8 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_23 = x0_8 + sx.q(*(x0_8 + 0x13000)) * 0x98
                    *(*(x8_23 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_24 = *(x8_23 - 0x90)
                    *(x8_24 + 0x1a2c) = *(x8_24 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    arg3 = XTrace("game thread resume (error)")
                
                int32_t x8_26 = *(arg1 + x21_2 * 0x68 + 0x1a74)
                
                if (x8_26 != 0x3eb && x8_26 - 7 u<= 0x40)
                    uint64_t x2_3 = zx.q(*x24_2)
                    var_d30[sx.q(i_5)] = x2_3.d
                    bool z_2
                    
                    if (*(arg1 + 0x19f4) == 5)
                        z_2 = x23_1 == 0xb
                    else
                        z_2 = false
                    
                    uint64_t x4_2
                    
                    if (z_2)
                        x4_2 = 8
                    else
                        x4_2 = zx.q(x23_1)
                    
                    i_5 += 1
                    int32_t var_d68_1 = 0
                    int64_t var_d70_1 = 0
                    int32_t var_d78_1 = 0
                    int32_t var_d80_3 = x20_3 == 0 ? 1 : 0
                    int32_t var_d88_3 = 0
                    int64_t var_d90_2 = 0
                    arg3 = MoveCardTo(arg1, var_d38, x2_3, 7, x4_2, 0x3ec, 7, x28_3)
                
                x20_3 -= 1
                i_1 = i_4
                i_4 -= 1
                x24_2 += 4
            while (i_1 != 1)
        
        if ((x27_2 & 2) != 0 && i_5 s>= 1)
            int32_t x13_1 = var_d38.d
            uint64_t i_3 = zx.q(i_5)
            int32_t (* x11_3)[0x320] = &var_d30
            uint64_t i_2
            
            do
                int32_t x14_1 = *x11_3
                x11_3 = &(*x11_3)[1]
                int64_t x15_1 = sx.q(*(arg1 + muls.dp.d(x13_1, 0x5a30) + 0x181f4))
                i_2 = i_3
                i_3 -= 1
                *(arg1 + muls.dp.d(x13_1, 0x5a30) + 0x181f4) = x15_1.d + 1
                *(arg1 + sx.q(x13_1) * 0x5a30 + (x15_1 << 2) + 0x1cd18) = x14_1
            while (i_2 != 1)
        
        if (i_5 != 0)
            uint64_t x1_4 = zx.q(*(arg1 + muls.dp.d(var_d38.d, 0x5a30) + 0x17f78))
            
            if (x1_4.d != 0)
                CardSetReveal_DiscardTop(arg1, x1_4, arg3)
            
            if (x19_3 != 3)
                int64_t var_d90_4 = 0
                TriggerEvents(arg1, var_d38, &var_b0, zx.q(x20_2), &var_a8, zx.q(x19_3), x28_1, 
                    zx.q(arg4))

return zx.q(i_5)
