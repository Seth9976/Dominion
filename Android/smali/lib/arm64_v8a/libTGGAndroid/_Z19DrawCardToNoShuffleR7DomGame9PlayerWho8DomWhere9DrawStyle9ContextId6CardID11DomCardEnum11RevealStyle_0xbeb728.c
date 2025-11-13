// 函数: _Z19DrawCardToNoShuffleR7DomGame9PlayerWho8DomWhere9DrawStyle9ContextId6CardID11DomCardEnum11RevealStyle
// 地址: 0xbeb728
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x24 = arg8
int32_t x25 = arg7
int32_t x26 = arg4
int32_t x22 = arg3
int32_t x19 = arg2

if (arg3 == 0x3ea && x26 == 0)
    int32_t x9_1 = *(arg1 + 0x19ac)
    
    if (x9_1 s>= 0x100)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_4 = *(x8_3 - 0x90)
        *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
        x9_1 = *(arg1 + 0x19ac)
    
    if (x9_1 s>= 1)
        int64_t i = 0
        void* __offset(DomGame, 0x15f6c) x11_1 = arg1 + 0x15f6c
        int64_t x9_4 = 0
        
        do
            if (*(x11_1 - 4) == 0xb08 && *x11_1 == x19)
                if (i.d == 1 || *(arg1 + (x9_4 s>> 0x1b) + 0x15f7c) == 0)
                    break
                
                ReturnToken(arg1, zx.q(x19), 0xb08)
                return 0
            
            i -= 1
            x9_4 += 0x100000000
            x11_1 += 0x20
        while (0 - zx.q(x9_1) != i)

if (*(arg1 + muls.dp.d(x19, 0x5a30) + 0x17f74) != 0)
    CardID var_54
    CardID* x8_11
    
    if ((TryDoCampaignDraw(arg1, zx.q(x19), arg1 + sx.q(x19) * 0x5a30 + 0x18208, &var_54) & 1) != 0)
        x8_11 = &var_54
    else
        x8_11 = arg1 + muls.dp.d(x19, 0x5a30) + 0x17f74
    
    int32_t x8_12 = *x8_11
    int32_t var_58 = x8_12
    
    if (x8_12 != 0)
        if (x24 != 0xc)
            goto label_beb8f4
        
        DomGame& x0_6
        uint64_t x1_2
        uint64_t x2_1
        uint64_t x3_1
        uint64_t x4
        CardID* x5
        int64_t x7
        int32_t x8_18
        
        if (x26 == 1)
            x24 = 5
        label_beb9e0:
            
            if (*(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
                goto label_beba30
            
            x5 = &var_58
            x3_1 = 0x2c
            
            if (*(arg1 + 0x19d4) == x19)
                x2_1 = zx.q(*(arg1 + 0x19d8))
            else
                x2_1 = zx.q(x19)
            
            int32_t var_80_3 = 0
            int32_t var_88_3 = 0
        label_beba18:
            x0_6 = arg1
            x1_2 = zx.q(x19)
            x4 = zx.q(x25)
            x7 = 0
            int32_t var_90_2 = 0
        label_beba2c:
            DomAddLogEvent(x0_6, x1_2, x2_1, x3_1, x4, x5, 1, x7)
        label_beba30:
            x8_18 = 0
        label_beba54:
            int32_t var_70_1 = x8_18
            int64_t var_78_1 = 0
            int32_t var_80_4 = 0
            int32_t var_88_4 = 0
            int32_t var_90_3 = arg6
            MoveCardToSafe(arg1, zx.q(x19), zx.q(var_58), 0, zx.q(x22), zx.q(x24), 0xffffffff, arg5)
            return zx.q(var_58)
        
        if (x22 == 0x3ee)
            x24 = 0
            
            if (x26 != 1)
                goto label_beb8fc
            
            goto label_beb9e0
        
        if (x22 == 0x3ea || x22 - 0x45f u< 2)
            x24 = 3
        label_beb8f4:
            
            if (x26 == 1)
                goto label_beb9e0
            
        label_beb8fc:
            
            if (x26 == 2)
                if (*(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
                    goto label_beba30
                
                int32_t var_80_1 = 0
                int32_t var_88_1 = 0
                
                if (*(arg1 + 0x19d4) == x19)
                    x2_1 = zx.q(*(arg1 + 0x19d8))
                else
                    x2_1 = zx.q(x19)
                
                x5 = &var_58
                x3_1 = 0x2d
                x7 = 1
                int32_t var_90_1 = 0
                x0_6 = arg1
                x1_2 = zx.q(x19)
                x4 = zx.q(x25)
                goto label_beba2c
            
            if (x26 == 0)
                if (x24 u< 0xc && (0xfbf u>> x24 & 1) != 0)
                    if (*(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
                        goto label_beba30
                    
                    x3_1 = zx.q((*U"/...../../..")[sx.q(x24)])
                    int32_t var_80_2 = 0
                    
                    if (*(arg1 + 0x19d4) == x19)
                        x2_1 = zx.q(*(arg1 + 0x19d8))
                    else
                        x2_1 = zx.q(x19)
                    
                    int32_t var_88_2 = 0
                    x5 = &var_58
                    goto label_beba18
            else if (x26 == 3)
                x8_18 = 1
                goto label_beba54
        
        pthread_kill(pthread_self(), 6)
        DomGame* x0_9
        int64_t x1_4
        int64_t x2_3
        int64_t x3_2
        int64_t x4_2
        int64_t x5_2
        x0_9, x1_4, x2_3, x3_2, x4_2, x5_2 = XNoReturn()
        return DrawCardBottomTo(x0_9, x1_4, x2_3, x3_2, x4_2, x5_2) __tailcall

return 0
