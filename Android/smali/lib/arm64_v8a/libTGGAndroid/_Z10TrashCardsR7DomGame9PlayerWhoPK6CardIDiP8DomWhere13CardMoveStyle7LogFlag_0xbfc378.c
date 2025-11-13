// 函数: _Z10TrashCardsR7DomGame9PlayerWhoPK6CardIDiP8DomWhere13CardMoveStyle7LogFlag
// 地址: 0xbfc378
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_6

if (arg4 == 0 || arg4 s< 1)
    i_6 = 0
else
    uint64_t i_4 = zx.q(arg4)
    DomWhere* x26_1 = arg5
    CardID const* x27_1 = arg3
    i_6 = 0
    uint64_t i_5 = i_4
    CardID const* x24_1 = arg3
    int32_t var_19c0_1 = arg2.d
    void var_1960
    int32_t var_ce0
    uint64_t i
    
    do
        int32_t x28_1 = *x24_1
        int32_t x25_1 = *x26_1
        uint64_t fp_1 = zx.q(x28_1.w)
        
        if (fp_1.d u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_5 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_5 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_6 = *(x8_5 - 0x90)
            *(x8_6 + 0x1a2c) = *(x8_6 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            arg2 = XTrace("game thread resume (error)")
        
        int32_t x8_8 = *(arg1 + fp_1 * 0x68 + 0x1a74)
        
        if (x8_8 != 0x3eb
                || *(arg1 + sx.q(*(arg1 + fp_1 * 0x68 + 0x1a94)) * 0x5a30 + 0x17f74) == x28_1)
            if (x25_1 != 7)
                if (x25_1 != 0x451)
                    if (x8_8 == x25_1 || ((x25_1 == 0x3e9 ? 1 : 0) & (x8_8 == 0x451 ? 1 : 0)) != 0)
                        goto label_bfc3dc
                else if (x8_8 == 0x3e9 || x8_8 == x25_1
                        || ((x25_1 == 0x3e9 ? 1 : 0) & (x8_8 == 0x451 ? 1 : 0)) != 0)
                    goto label_bfc3dc
            else if (x8_8 - 7 u< 0x41)
            label_bfc3dc:
                int64_t x9_1 = zx.q(i_6) << 0x20 s>> 0x1e
                *(&var_ce0 + x9_1) = *x24_1
                i_6 += 1
                *(&var_1960 + x9_1) = *x26_1
        
        x26_1 += 4
        i = i_5
        i_5 -= 1
        x24_1 += 4
    while (i != 1)
    
    if (i_6 != 0)
        SnapshotTrashTriggerInfo(arg1, arg2, zx.q(var_ce0))
        int32_t x21_1 = var_19c0_1
        int64_t var_1a10
        uint64_t x2_1
        
        if (x21_1 != 0xffffffff)
            void* x8_11 = arg1 + muls.dp.d(x21_1, 0x5a30)
            *(x8_11 + 0x181dc) += i_6
            
            if (arg4 s>= 1)
                int32_t x24_2 = 0
                int32_t var_19d0_1
                var_19d0_1.q = sx.q(x21_1)
                uint64_t i_1
                
                do
                    uint64_t x25_2 = zx.q(*x27_1)
                    
                    if (x25_2.d u>= 0x320)
                        void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_17 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
                        *(*(x8_17 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_18 = *(x8_17 - 0x90)
                        *(x8_18 + 0x1a2c) = *(x8_18 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    i_1 = i_4
                    i_4 -= 1
                    x24_2 += CardIsFast(arg1, zx.q(*(arg1 + x25_2 * 0x68 + 0x1a70)), 4) & 1
                    x27_1 += 4
                while (i_1 != 1)
                x21_1 = var_19c0_1
                
                if (x24_2 != 0)
                    void* x8_19 = arg1 + var_19d0_1.q * 0x5a30
                    *(x8_19 + 0x181d8) |= 4
            
            if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
                if (*(arg1 + 0x19d4) == x21_1)
                    x2_1 = zx.q(*(arg1 + 0x19d8))
                else
                    x2_1 = zx.q(x21_1)
                
                int32_t var_1a00_1 = 0
                int32_t var_1a08_1 = 0
                var_1a10.d = 0
                DomAddLogEvent(arg1, zx.q(x21_1), x2_1, 0x34, 0, &var_ce0, zx.q(i_6), 0)
        else if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
            int32_t var_1a00_2 = 0
            int32_t var_1a08_2 = 0
            
            if (*(arg1 + 0x19d4) == 0xffffffff)
                x2_1 = zx.q(*(arg1 + 0x19d8))
            else
                x2_1 = 0xffffffff
            
            var_1a10.d = 0
            DomAddLogEvent(arg1, 0xffffffff, x2_1, 0x34, 0, &var_ce0, zx.q(i_6), 0)
        
        if ((arg7 & 0x20) != 0 && *(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
            uint64_t x2_2
            
            if (*(arg1 + 0x19d4) == 0xffffffff)
                x2_2 = zx.q(*(arg1 + 0x19d8))
            else
                x2_2 = 0xffffffff
            
            int32_t var_1a00_3 = 0
            int32_t var_1a08_3 = 0
            var_1a10.d = 0
            DomAddLogEvent(arg1, 0xffffffff, x2_2, 0x3c, 0, nullptr, 0, 0)
        
        int64_t var_19b0
        int64_t x3_1
        
        if (i_6 s< 1)
            x3_1 = 1
        else
            int32_t x22_1 = 0
            uint64_t i_3 = zx.q(i_6)
            void* x23_1 = &var_1960
            int32_t* x24_3 = &var_ce0
            int32_t x8_34
            uint64_t i_2
            
            do
                var_19b0.b = 0
                uint64_t x2_3 = zx.q(*x24_3)
                x24_3 = &x24_3[1]
                uint64_t x3 = zx.q(*x23_1)
                x23_1 += 4
                int32_t var_19e8_1 = 0
                int64_t* var_19f0_1 = &var_19b0
                int32_t var_19f8_1 = 0
                int32_t var_1a00_4 = 0
                int32_t var_1a08_4 = 0
                int64_t var_1a10_1 = 0
                MoveCardTo(arg1, 0xffffffff, x2_3, x3, zx.q(arg6), 2, 0, 0)
                x8_34 = zx.d(var_19b0.b) | (x22_1 & 1)
                x22_1 = x8_34 != 0 ? 1 : 0
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
            x21_1 = var_19c0_1
            
            x3_1 = x8_34 != 0 ? 2 : 1
        
        var_19b0 = 0x1300000005
        int64_t var_1a10_2 = 0
        TriggerInfo var_19a8
        TriggerEvents(arg1, zx.q(x21_1), &var_19b0, x3_1, &var_19a8, 0, &var_ce0, zx.q(i_6))
        CalcScores(arg1)

return zx.q(i_6)
