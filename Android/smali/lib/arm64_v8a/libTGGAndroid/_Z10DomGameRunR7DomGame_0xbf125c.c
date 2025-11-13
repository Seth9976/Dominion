// 函数: _Z10DomGameRunR7DomGame
// 地址: 0xbf125c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(DomGame, 0x19fc) x25 = arg1 + 0x19fc
uint64_t result

while (true)
label_bf12c4:
    int32_t x8_1 = *(arg1 + 0x150c)
    
    if (x8_1 != 3 && x8_1 != 5)
        DomSaveCheckpoint(arg1)
    
    if (*(arg1 + 0x19f0) == 0)
        *(arg1 + 0x19e8) += 1
    
    int32_t x8_5 = *(arg1 + 0x19d4)
    int32_t var_68_1 = 0
    uint64_t i_1 = zx.q(*(arg1 + 0x19c0))
    int64_t var_cb0
    
    if (i_1.d s>= 1)
        void* __offset(DomGame, 0x3c258) x10_1 = arg1 + 0x3c258
        int32_t var_468[0x100]
        uint64_t i
        
        do
            if (*(x10_1 - 4) == 1 && *x10_1 == x8_5)
                int64_t x12_1 = sx.q(var_68_1)
                var_68_1 = x12_1.d + 1
                var_468[x12_1] = *(x10_1 - 0x24) << 0x12
            
            i = i_1
            i_1 -= 1
            x10_1 += 0xb8
        while (i != 1)
        
        if (var_68_1 == 0)
            goto label_bf1514
        
        uint64_t x24_1 = zx.q(var_468[0])
        void* x0_2 = AbilityGetRegistered(arg1, x24_1)
        uint64_t x4_1 = zx.q(*(x0_2 + 0x8c))
        
        if (x4_1.d != 0)
            int32_t x8_7 = *(arg1 + 0x150c)
            
            if (x8_7 - 3 u>= 4)
                int64_t var_c98_1 = 0
                int32_t var_ca0_1 = 0
                int32_t var_ca8_1 = 0
                var_cb0.d = 0
                DomNotifyEffect(zx.q(x8_7 == 2 ? 1 : 0), 0x1c, zx.q(*(arg1 + 0x19d4)), 0x14, x4_1, 
                    zx.q(*(x0_2 + 0x90)), 0, 0)
        
        int128_t* x0_5
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        int128_t v3_1
        x0_5, v0_1, v1_1, v2_1, v3_1 = AbilityGetRegistered(arg1, x24_1)
        *(x0_5 + 0x58) = 0
        int64_t x8_9 = sx.q(*(arg1 + 0x19c0)) - 1
        *(arg1 + 0x19c0) = x8_9.d
        v0_1 = *(arg1 + x8_9 * 0xb8 + 0x3c238)
        v3_1 = *(arg1 + x8_9 * 0xb8 + 0x3c208)
        v2_1 = *(arg1 + x8_9 * 0xb8 + 0x3c218)
        x0_5[2] = *(arg1 + x8_9 * 0xb8 + 0x3c228)
        x0_5[3] = v0_1
        *x0_5 = v3_1
        x0_5[1] = v2_1
        v0_1 = *(arg1 + x8_9 * 0xb8 + 0x3c278)
        v3_1 = *(arg1 + x8_9 * 0xb8 + 0x3c248)
        v2_1 = *(arg1 + x8_9 * 0xb8 + 0x3c258)
        x0_5[6] = *(arg1 + x8_9 * 0xb8 + 0x3c268)
        x0_5[7] = v0_1
        x0_5[4] = v3_1
        x0_5[5] = v2_1
        v0_1 = *(arg1 + x8_9 * 0xb8 + 0x3c2a8)
        v2_1 = *(arg1 + x8_9 * 0xb8 + 0x3c288)
        x0_5[0xb].q = *(arg1 + x8_9 * 0xb8 + 0x3c2b8)
        x0_5[9] = *(arg1 + x8_9 * 0xb8 + 0x3c298)
        x0_5[0xa] = v0_1
        x0_5[8] = v2_1
        uint32_t x8_12 = zx.d(*(arg1 + 0x1508))
        int32_t x9_4 = *(arg1 + 0x150c) - 3
        
        if (x9_4 u>= 4 && x8_12 == 0)
            int32_t var_ca0_2 = 0
            int32_t var_ca8_2 = 0
            var_cb0.d = *(arg1 + 0x19ec)
            DomAddLogEvent(arg1, zx.q(*(arg1 + 0x19d4)), zx.q(*(arg1 + 0x19d8)), 8, 
                zx.q(*(arg1 + 0x19f0)), nullptr, 0, zx.q(*(arg1 + 0x19e4)))
            x8_12 = zx.d(*(arg1 + 0x1508))
            x9_4 = *(arg1 + 0x150c) - 3
        
        if (x9_4 u>= 4 && x8_12 == 0)
            int32_t var_ca0_3 = 0
            int32_t var_ca8_3 = 0
            var_cb0.d = 0
            DomAddLogEvent(arg1, zx.q(*(arg1 + 0x19d4)), zx.q(*(arg1 + 0x19d8)), 7, 0, nullptr, 0, 
                0)
        
        RemovePlayerOngoingDuration(arg1, zx.q(*(arg1 + 0x19d4)), 1, -1)
        RemovePlayerOngoingDuration(arg1, zx.q(*(arg1 + 0x19d4)), 4, -1)
        RemovePlayerOngoingDuration(arg1, zx.q(*(arg1 + 0x19d4)), 5, -1)
        RemovePlayerOngoingDuration(arg1, zx.q(*(arg1 + 0x19d4)), 9, -1)
        
        if (*(arg1 + 0x19f8) != 0)
            goto label_bf1548
        
        goto label_bf1538
    
label_bf1514:
    DomTurn(arg1)
    int32_t x9_6 = *(arg1 + 0x19d4)
    *(arg1 + 0x19d0) = *(arg1 + 0x19cc)
    *(arg1 + 0x19cc) = x9_6
    int32_t var_c78
    int128_t var_870
    
    if (*(arg1 + 0x19f8) != 0)
    label_bf1548:
        
        if (*(arg1 + 0xd40) s< 1)
        label_bf17f0:
            *(arg1 + 0x24) = 0
            *(arg1 + 0x1a0c) = 1
            __builtin_memset(&var_870, 0, 0x48)
            var_c78 = 0x1e
            int64_t var_cb0_1 = 0
            result = TriggerEvents(arg1, 0xffffffff, &var_c78, 1, &var_870, 0, nullptr, 0)
            uint64_t x7_2 = zx.q(*(arg1 + 0x19f8))
            int32_t x8_35 = *(arg1 + 0x150c)
            int32_t x10_8
            
            if (x7_2.d == 3)
                x10_8 = x7_2.d
            else
                x10_8 = 0
            
            uint64_t x6_1
            
            if (x7_2.d == 4)
                x6_1 = zx.q(x7_2.d)
            else
                x6_1 = zx.q(x10_8)
            
            if (x8_35 - 3 u>= 4)
                if (zx.d(*(arg1 + 0x1508)) == 0)
                    uint64_t x2_6
                    
                    if (*(arg1 + 0x19d4) == 0xffffffff)
                        x2_6 = zx.q(*(arg1 + 0x19d8))
                    else
                        x2_6 = 0xffffffff
                    
                    int32_t var_ca0_4 = 0
                    int32_t var_ca8_5 = 0
                    var_cb0_1.d = 0
                    result = DomAddLogEvent(arg1, 0xffffffff, x2_6, 9, 0, x25, x6_1, x7_2)
                    x8_35 = *(arg1 + 0x150c)
                
                if (zx.d(*(arg1 + 0x1508)) != 0 || x8_35 - 3 u>= 4)
                    int64_t var_c98_2 = 0
                    int32_t var_ca0_5 = 0
                    int32_t var_ca8_6 = 0
                    var_cb0_1.d = 0
                    return DomNotifyEffect(zx.q(x8_35 == 2 ? 1 : 0), 0x1f, 0xffffffff, 0, 
                        zx.q(*(arg1 + 0x19f8)), 0, 0, 0)
            
            break
        
        int32_t x24_2 = 0
        
        while (true)
            ProjectIsOwned(arg1, zx.q(x24_2), 0xe29, &var_870)
            result = CountOngoing(arg1, zx.q(x24_2), 7, 0xe29, 0)
            
            if (result.d s< var_870.d)
                break
            
            x24_2 += 1
            
            if (x24_2 s>= *(arg1 + 0xd40))
                goto label_bf17f0
    else
    label_bf1538:
        result = IsGameOver(arg1, x25)
        *(arg1 + 0x19f8) = result.d
        
        if (result.d != 0)
            goto label_bf1548
    
    int32_t x8_20 = *(arg1 + 0xd40)
    int32_t x9_7 = *(arg1 + 0x19d4)
    *(arg1 + 0x19ec) += 1
    *(arg1 + 0x19d8) = x9_7
    
    if (x8_20 s>= 1)
        int32_t x25_1 = 1
        
        while (true)
            int32_t x24_3 = (x9_7 + x25_1 - 1) s% x8_20
            DeleteInvalidExtraTurnAbilities(arg1, zx.q(x24_3))
            result = CollectExtraTurnAbilities(arg1, zx.q(x24_3))
            int32_t var_470
            
            if (var_470 s>= 1)
                int32_t var_878_1 = 0
                result = SelectAbilities(arg1, zx.q(*(arg1 + 0x19d4)), &var_870, &var_c78, false)
                int32_t result_1 = result.d
                
                if (result.d s>= 2)
                    void* x0_20 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_24 = x0_20 + sx.q(*(x0_20 + 0x13000)) * 0x98
                    *(*(x8_24 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_25 = *(x8_24 - 0x90)
                    *(x8_25 + 0x1a2c) = *(x8_25 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                    result = zx.q(result_1)
                
                if (result.d != 0)
                    *(arg1 + 0x19f0) = AbilitySource(arg1, zx.q(var_c78))
                    ResolveExtraTurnAbility(arg1, zx.q(var_c78))
                    goto label_bf12c4
            
            x8_20 = *(arg1 + 0xd40)
            
            if (x25_1 s>= x8_20)
                break
            
            x9_7 = *(arg1 + 0x19d4)
            x25_1 += 1
    
    if (*(arg1 + 0x19f8) == 0)
        int32_t x9_16 = *(arg1 + 0x19dc)
        *(arg1 + 0x19f0) = 0
        *(arg1 + 0x19d4) = x9_16
        *(arg1 + 0x19d8) = x9_16
        *(arg1 + 0x19dc) = (x9_16 + 1) s% x8_20
        
        if (x9_16 == 0)
            *(arg1 + 0x19e4) += 1
            
            if (*(arg1 + 0x150c) == 5)
                break
        else
            if (*(arg1 + 0x150c) == 5)
                break
    else
        int32_t x24_4 = *(arg1 + 0x19dc)
        *(arg1 + 0x19f0) = 0
        
        while (true)
            ProjectIsOwned(arg1, zx.q(x24_4), 0xe29, &var_870)
            
            if (CountOngoing(arg1, zx.q(x24_4), 7, 0xe29, 0) s< var_870.d)
                break
            
            x24_4 = (*(arg1 + 0x19dc) + 1) s% *(arg1 + 0xd40)
            *(arg1 + 0x19dc) = x24_4
        
        int32_t var_ca8_4 = 0
        var_cb0.d = 0
        AddOngoing(arg1, zx.q(*(arg1 + 0x19dc)), 7, 0xe29, 0, 0, 0, 0xffffffff)
        int32_t x8_29 = *(arg1 + 0x19dc)
        int32_t x9_14 = *(arg1 + 0xd40)
        *(arg1 + 0x19f0) = 0xe29
        *(arg1 + 0x19d4) = x8_29
        *(arg1 + 0x19dc) = (x8_29 + 1) s% x9_14
        *(arg1 + 0x19d8) = x8_29

return result
