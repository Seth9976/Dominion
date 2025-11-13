// 函数: _Z11DomHandleOki
// 地址: 0xb25cec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(GetClient() + 0xc) != *(GetClient() + 0x10))
    return XTraceAndLog("failed to submit ok click, waiting") __tailcall

*(gDomClient + 0x20570) = 0

if (zx.d(*(gDomClient + 0x22134)) != 0)
    *(gDomClient + 0x2074c) = 0
    *(gDomClient + 0x20758) = 0

int32_t x8_2 = *(gDomClient + 0x1f8e4)

if (x8_2 != 0)
    uint64_t x9_1 = zx.q(x8_2.w)
    
    if (x9_1.d u< *(gDomClient + 0x205e8))
        int64_t x10_2 = *(gDomClient + 0x205e0)
        
        if (*(x10_2 + x9_1 * 0x21d8 + 0x21d0) == x8_2 && *(x10_2 + x9_1 * 0x21d8 + 0x5c) != 0x3ee)
            DomMinimizePileAny()

int64_t (* result)()
int128_t v0_1
result, v0_1 = CalcOkState()
int32_t x8_5 = *(gDomClient + 0x20758)
int32_t i_8 = *(gDomClient + 0x2079c)
DomYield var_e10
int32_t var_d9c

if (x8_5 s<= 0xd4)
    if (x8_5 == 0x33)
        void* x21_1 = *(gDomClient + 0x205e0) + zx.q(*(gDomClient + 0x1f8e0)) * 0x21d8
        *(gDomClient + 0x207c0) = *(x21_1 + 0x98)
        *(gDomClient + 0x207bc) = 1
        SubmitAction(LocalWho(), gDomClient + 0x20748)
        YldCopy(&var_e10, gDomClient + 0x20748)
        int32_t var_e0c_1 = 5
        var_d9c = *(x21_1 + 0xb4)
        int32_t x0_5 = LocalWho()
        int64_t (* x8_13)()
        
        if (x0_5 == 0xffffffff)
            x8_13 = gDomClient + 0x48
        else
            x8_13 = gDomClient + 0x48 + muls.dp.d(x0_5, 0x4d48)
        
        int64_t x9_8 = sx.q(*(x8_13 + 0x4098))
        *(x8_13 + 0x4098) = x9_8.d + 1
        result = memcpy(x8_13 + x9_8 * 0xd20 + 0x1938, &var_e10, 0xd20)
        *(gDomClient + 0x1f8e0) = 0
        return result
    
    if (x8_5 == 0x34)
        goto label_b25e6c
    
    goto label_b25e8c

if (x8_5 == 0x101)
label_b25e6c:
    int32_t x9_3 = *(gDomClient + 0x1f8e0)
    void* x8_7
    
    if (x9_3 == 0)
        x8_7 = *(gDomClient + 0x205e0)
        void* x10_4 = x8_7
        int32_t i
        
        do
            i = *(x10_4 + 0x21d0)
            x10_4 += 0x21d8
        while (i u< 0x10000)
        void* x10_5 = x10_4 - 0x21d8
        
        while (*(x10_5 + 0x2c) != 0 || *(x10_5 + 0x98) != **(gDomClient + 0x20760)
                || zx.d(*(x10_5 + 0x168)) != 0)
            void* x13_6 = x10_5 + 0x43a8
            int32_t i_1
            
            do
                i_1 = *x13_6
                x10_5 += 0x21d8
                x13_6 += 0x21d8
            while (i_1 u< 0x10000)
        
        x9_3 = *(x10_5 + 0x21d0)
        *(gDomClient + 0x1f8e0) = x9_3
    else
        x8_7 = *(gDomClient + 0x205e0)
    
    *(gDomClient + 0x207bc) = *(x8_7 + mulu.dp.d(x9_3 & 0xffff, 0x21d8) + 0xb4)
    result = SubmitAction(LocalWho(), gDomClient + 0x20748)
    *(gDomClient + 0x207bc) = 0
    *(gDomClient + 0x1f8e0) = 0
    return result

DomYield* x19_1

if (x8_5 != 0xd5)
label_b25e8c:
    int32_t x9_4 = *(gDomClient + 0x2074c)
    int32_t var_f0[0x24]
    
    if (x9_4 == 5)
        if (var_f0[sx.q(arg1)] != 2)
            if (x8_5 == 6)
                int64_t x8_17 = sx.q(*(gDomClient + 0x20578))
                
                if (*(gDomClient + 0x20778) == x8_17)
                    DomSoundPlay(zx.q(*(gDomClient + 0x207a0)), 
                        *SOUND_SOUND_LOAD_GAME_BTN_DEBT_FULLY_PAID, "pay debt - all", false)
                else if (x8_17.d s>= 1)
                    DomSoundPlay(zx.q(*(gDomClient + 0x207a0)), 
                        *SOUND_SOUND_LOAD_GAME_BTN_DEBT_PARTIALLY_PAID, "pay debt - some", false)
            
            *(gDomClient + 0x2074c) = 5
            int32_t x8_34 = *(gDomClient + 0x20578)
            *(gDomClient + 0x207bc) = x8_34
            
            if (zx.d(*(gDomClient + 0x20584)) != 0)
                *(gDomClient + 0x207bc) = x8_34 | 0x10000
        else
            *(gDomClient + 0x2074c) = 5
            *(gDomClient + 0x207bc) = 0
        
        SubmitAction(LocalWho(), gDomClient + 0x20748)
        return GameDlgManagerDismiss(2, false)
    
    int32_t var_d98
    
    if (x8_5 s<= 0x47)
        int64_t var_dd8
        
        if (x8_5 != 0x27)
            if (x8_5 != 0x3b)
            label_b264b4:
                
                if (x8_5 != 0x133 && x8_5 != 0x36)
                    goto label_b26508
                
                int32_t x9_25 = var_f0[sx.q(arg1)]
                
                if (x9_25 == 0xd7 || x9_25 == 0x29)
                    *(gDomClient + 0x207c0) = x9_25
                    *(gDomClient + 0x207bc) = 1
                    return SubmitAction(LocalWho(), gDomClient + 0x20748)
                
                int32_t x8_45
                
                x8_45 = x8_5 == 0x36 ? 0x28 : 0xd8
                
                *(gDomClient + 0x207c0) = x8_45
                *(gDomClient + 0x207bc) = 1
                result = SubmitAction(LocalWho(), gDomClient + 0x20748)
                int32_t x8_46 = *(gDomClient + 0x2056c)
                
                if (x8_46 == 0)
                    return result
                
                uint64_t x11_6 = zx.q(*(gDomClient + 0x205e8))
                void* i_17
                int64_t x11_7
                void* i_2
                
                if (x11_6.d != 0)
                    i_17 = *(gDomClient + 0x205e0)
                    x11_7 = i_17 + x11_6 * 0x21d8
                    i_2 = i_17
                    
                    while (zx.d(*(i_2 + 0x21d2)) == 0)
                        i_2 += 0x21d8
                        
                        if (i_2 u>= x11_7)
                            goto label_b26c94
                
                int32_t x13_12
                
                if (x11_6.d == 0 || i_2 == 0xffffffff)
                label_b26c94:
                    x13_12 = 0
                else
                    x13_12 = 0
                    
                    do
                        if (*(i_2 + 0x2c) == 0 && *(i_2 + 0xa0) == *(gDomClient + 0x2079c)
                                && *(i_2 + 0xa4) == 0x3ea && *(i_2 + 0xc8) == 0)
                            x13_12 += 1
                        
                        if (i_2 == 0)
                            i_2 = i_17
                        else
                            i_2 += 0x21d8
                        
                        if (i_2 u>= x11_7)
                            break
                        
                        while (zx.d(*(i_2 + 0x21d2)) == 0)
                            i_2 += 0x21d8
                            
                            if (i_2 u>= x11_7)
                                goto label_b26c98
                    while (i_2 != 0xffffffff)
                
            label_b26c98:
                
                if (x13_12 == x8_46)
                    return result
                
                YldCopy(&var_e10, gDomClient + 0x20748)
                uint64_t x19_8 = zx.q(*(gDomClient + 0x2056c))
                int32_t var_e0c_7 = 1
                
                if (x19_8.d s>= 1)
                    memcpy(&var_d98, gDomClient + 0x1f8ec, x19_8 << 2)
                
                var_d9c = x19_8.d
                goto label_b26cf0
            
            YldCopy(&var_e10, gDomClient + 0x20748)
            int32_t x23_1 = var_d9c
            int32_t var_e0c_2 = 1
            AssignCardsFromPile(&var_d98, &var_d9c, zx.q(i_8), 0x3f0, var_dd8)
            result = SubmitAction(LocalWho(), &var_e10)
            
            if (x23_1 - var_d9c s>= 2)
                int32_t var_e0c_3 = 1
                result = AssignCardsFromPile(&var_d98, &var_d9c, zx.q(i_8), 0x3ef, var_dd8)
                
                if (var_d9c != 0)
                    int32_t x0_17 = LocalWho()
                    int64_t (* x8_23)()
                    
                    if (x0_17 == 0xffffffff)
                        x8_23 = gDomClient + 0x48
                    else
                        x8_23 = gDomClient + 0x48 + muls.dp.d(x0_17, 0x4d48)
                    
                    int64_t x9_15 = sx.q(*(x8_23 + 0x4098))
                    *(x8_23 + 0x4098) = x9_15.d + 1
                    return memcpy(x8_23 + x9_15 * 0xd20 + 0x1938, &var_e10, 0xd20)
            
            return result
        
        YldCopy(&var_e10, gDomClient + 0x20748)
        int32_t x22_1 = var_d9c
        int32_t* x23_2 = &var_d9c
        int32_t var_e0c_4 = 1
        AssignCardsFromPile(&var_d98, &var_d9c, zx.q(i_8), 0x3f0, var_dd8)
        result = SubmitAction(LocalWho(), &var_e10)
        int32_t x8_26 = var_d9c
        
        if (x22_1 != x8_26)
            int32_t var_e0c_5 = 1
            AssignCardsFromPile(&var_d98, &var_d9c, zx.q(i_8), 0x3ef, var_dd8)
            int32_t x0_23 = LocalWho()
            int64_t (* x8_28)()
            
            if (x0_23 == 0xffffffff)
                x8_28 = gDomClient + 0x48
            else
                x8_28 = gDomClient + 0x48 + muls.dp.d(x0_23, 0x4d48)
            
            int64_t x9_21 = sx.q(*(x8_28 + 0x4098))
            *(x8_28 + 0x4098) = x9_21.d + 1
            result = memcpy(x8_28 + x9_21 * 0xd20 + 0x1938, &var_e10, 0xd20)
            uint64_t x8_29 = zx.q(var_d9c)
            
            if (x8_29.d s>= 1)
                int64_t x27_1 = 0
                
                do
                    uint64_t x9_23 = zx.q(*(gDomClient + 0x205e8))
                    DomGfx* x23_3
                    
                    if (x9_23.d == 0)
                    label_b263f8:
                        DomGfx* x0_25 = DomCreatePile_Other(0x3ee, zx.q(i_8), var_dd8, 0)
                        x23_3 = x0_25
                        DomExpandPile(x0_25, false)
                    else
                        DomGfx* x8_30 = *(gDomClient + 0x205e0)
                        int64_t x9_24 = x8_30 + x9_23 * 0x21d8
                        x23_3 = x8_30
                        
                        while (true)
                            if (zx.d(*(x23_3 + 0x21d2)) != 0)
                                while (true)
                                    if (x23_3 == 0xffffffff)
                                        goto label_b263f8
                                    
                                    if (*(x23_3 + 0x2c) == 3 && *(x23_3 + 0x58) == i_8
                                            && *(x23_3 + 0x5c) == 0x3ee
                                            && *(x23_3 + 0x60) == var_dd8)
                                        if (x23_3 != 0)
                                            break
                                        
                                        goto label_b263f8
                                    
                                    if (x23_3 == 0)
                                        x23_3 = x8_30
                                    else
                                        x23_3 += 0x21d8
                                    
                                    if (x23_3 u>= x9_24)
                                        goto label_b263f8
                                    
                                    while (zx.d(*(x23_3 + 0x21d2)) == 0)
                                        x23_3 += 0x21d8
                                        
                                        if (x23_3 u>= x9_24)
                                            goto label_b263f8
                                
                                break
                            
                            x23_3 += 0x21d8
                            
                            if (x23_3 u>= x9_24)
                                goto label_b263f8
                    
                    result = DomMoveCard(zx.q(i_8), zx.q(*(&var_e10 + (x27_1 << 2) + 0x78)), x23_3, 
                        &data_7ef484, 0, false, 0xe, false)
                    x8_29 = sx.q(var_d9c)
                    x27_1 += 1
                while (x27_1 s< x8_29)
                
                x23_2 = &var_d9c
            
            if (x22_1 - x8_26 - x8_29.d s> 1)
                int32_t var_e0c_6 = 2
                AssignCardsFromPile(&var_d98, x23_2, zx.q(i_8), 0x3ee, var_dd8)
                int32_t x0_32 = LocalWho()
                int64_t (* x8_39)()
                
                if (x0_32 == 0xffffffff)
                    x8_39 = gDomClient + 0x48
                else
                    x8_39 = gDomClient + 0x48 + muls.dp.d(x0_32, 0x4d48)
                
                int64_t x9_28 = sx.q(*(x8_39 + 0x4098))
                *(x8_39 + 0x4098) = x9_28.d + 1
                result = memcpy(x8_39 + x9_28 * 0xd20 + 0x1938, &var_e10, 0xd20)
                
                if (var_d9c s>= 1)
                    int64_t i_3 = 0
                    
                    do
                        uint64_t x9_30 = zx.q(*(gDomClient + 0x205e8))
                        DomGfx* x21_2
                        
                        if (x9_30.d == 0)
                        label_b26734:
                            DomGfx* x0_34 = DomCreatePile_Other(0x3ee, zx.q(i_8), var_dd8, 0)
                            x21_2 = x0_34
                            DomExpandPile(x0_34, false)
                        else
                            DomGfx* x8_41 = *(gDomClient + 0x205e0)
                            int64_t x9_31 = x8_41 + x9_30 * 0x21d8
                            x21_2 = x8_41
                            
                            while (true)
                                if (zx.d(*(x21_2 + 0x21d2)) != 0)
                                    while (true)
                                        if (x21_2 == 0xffffffff)
                                            goto label_b26734
                                        
                                        if (*(x21_2 + 0x2c) == 3 && *(x21_2 + 0x58) == i_8
                                                && *(x21_2 + 0x5c) == 0x3ee
                                                && *(x21_2 + 0x60) == var_dd8)
                                            if (x21_2 != 0)
                                                break
                                            
                                            goto label_b26734
                                        
                                        if (x21_2 == 0)
                                            x21_2 = x8_41
                                        else
                                            x21_2 += 0x21d8
                                        
                                        if (x21_2 u>= x9_31)
                                            goto label_b26734
                                        
                                        while (zx.d(*(x21_2 + 0x21d2)) == 0)
                                            x21_2 += 0x21d8
                                            
                                            if (x21_2 u>= x9_31)
                                                goto label_b26734
                                    
                                    break
                                
                                x21_2 += 0x21d8
                                
                                if (x21_2 u>= x9_31)
                                    goto label_b26734
                        
                        result = DomMoveCard(zx.q(i_8), zx.q(*(&var_e10 + (i_3 << 2) + 0x78)), 
                            x21_2, &data_7ef484, 0, false, 0xe, false)
                        i_3 += 1
                    while (i_3 s< sx.q(var_d9c))
        
        return result
    
    if (x8_5 == 0x48)
        if (var_f0[sx.q(arg1)] == 0x52)
            x19_1 = gDomClient + 0x20748
            *(gDomClient + (0x7bc | 0x20000)) = *(gDomClient + 0x207ac)
            goto label_b25e4c
        
    label_b26508:
        
        if (x9_4 == 3 && *(gDomClient + 0x21460) == 2)
            int64_t (* x19_5)() = gDomClient + 0x20748
            *(gDomClient + 0x21450) = *(x19_5 + (sx.q(arg1) << 2) + 0xcf8)
            *(gDomClient + 0x207bc) = 1
            return SubmitAction(LocalWho(), x19_5)
        
        if (x9_4 == 2)
            int32_t x12_5
            
            x12_5 = x8_5 == 0x125 ? 0x44f : 0x3ee
            
            int64_t x4_7
            
            if (x8_5 - 0x125 u< 2)
                x4_7 = 0
            else
                x4_7 = *(gDomClient + 0x20780)
            
            uint64_t x3_2
            
            if (x8_5 == 0x126)
                x3_2 = 0x450
            else
                x3_2 = zx.q(x12_5)
            
            AssignCardsFromPile(gDomClient + 0x207c0, gDomClient + 0x207bc, zx.q(i_8), x3_2, x4_7)
            return SubmitAction(LocalWho(), gDomClient + 0x20748)
        
        if (x9_4 == 4)
            if (*(gDomClient + 0x207ac) == 1)
                YldCopy(&var_e10, gDomClient + 0x20748)
                int32_t x8_36 = var_f0[sx.q(arg1)]
                var_d9c = 1
                var_d98 = x8_36
                return SubmitAction(LocalWho(), &var_e10)
            
            uint64_t x10_24 = zx.q(*(gDomClient + 0x2056c))
            int32_t i_4 = var_f0[sx.q(arg1)]
            int64_t x9_34 = sx.q(x10_24.d)
            int32_t x8_47
            
            if (x10_24.d s< 1)
            label_b26c04:
                *(gDomClient + 0x2056c) = x9_34.d + 1
                *(gDomClient + (x9_34 << 2) + 0x1f8ec) = i_4
                x8_47 = *(gDomClient + 0x2056c)
            else
                result = gDomClient + 0x1f8ec
                size_t x2_15 = (x9_34 << 2) - 1
                
                while (*result != i_4)
                    result += 4
                    uint64_t temp1_1 = x10_24
                    x10_24 -= 1
                    x2_15 -= 1
                    
                    if (temp1_1 == 1)
                        goto label_b26c04
                
                result, v0_1 = memmove(result, result + 4, x2_15)
                x8_47 = *(gDomClient + 0x2056c) - 1
                *(gDomClient + 0x2056c) = x8_47
            
            if (x8_47 != *(gDomClient + 0x207ac))
                return result
            
            if (x8_47 s>= 1)
                uint64_t x9_41 = zx.q(x8_47)
                int64_t i_20
                
                if (x8_47 u>= 4)
                    i_20 = x9_41 & 0xfffffffc
                    int64_t (* x11_13)() = gDomClient + 0x1f8ec
                    int64_t i_19 = i_20
                    int64_t i_5
                    
                    do
                        int64_t (* x13_14)() = x11_13 + 0xed4
                        v0_1 = *x11_13
                        x11_13 += 0x10
                        i_5 = i_19
                        i_19 -= 4
                        *x13_14 = v0_1
                    while (i_5 != 4)
                    
                    if (i_20 != x9_41)
                        goto label_b26e48
                else
                    i_20 = 0
                label_b26e48:
                    void* x11_15 = gDomClient + (i_20 << 2) + 0x1f8ec
                    int64_t i_18 = x9_41 - i_20
                    int64_t i_6
                    
                    do
                        i_6 = i_18
                        i_18 -= 1
                        *(x11_15 + 0xed4) = *x11_15
                        x11_15 += 4
                    while (i_6 != 1)
            
            *(gDomClient + 0x207bc) = x8_47
            *(gDomClient + 0x2056c) = 0
            return SubmitAction(LocalWho(), gDomClient + 0x20748)
        
        uint64_t x9_33 = zx.q(var_f0[sx.q(arg1)])
        
        if (x9_33.d u> 0x8f)
            pthread_kill(pthread_self(), 6)
            return NextPHSlot(XNoReturn()) __tailcall
        
        int16_t x8_53
        int32_t x9_39
        
        switch (x9_33)
            case 0, 0x57
                *(gDomClient + 0x207c0) = *(gDomClient + 0x1f8ec)
                *(gDomClient + 0x207bc) = 1
                SubmitAction(LocalWho(), gDomClient + 0x20748)
                YldCopy(&var_e10, gDomClient + 0x20748)
                int32_t x8_52 = *(gDomClient + 0x1f8f0)
                var_d9c = 1
                var_d98 = x8_52
            label_b26cf0:
                int32_t x0_44 = LocalWho()
                int64_t (* x8_49)()
                
                if (x0_44 == 0xffffffff)
                    x8_49 = gDomClient + 0x48
                else
                    x8_49 = gDomClient + 0x48 + muls.dp.d(x0_44, 0x4d48)
                
                int64_t x9_37 = sx.q(*(x8_49 + 0x4098))
                *(x8_49 + 0x4098) = x9_37.d + 1
                result = memcpy(x8_49 + x9_37 * 0xd20 + 0x1938, &var_e10, 0xd20)
            case 1, 4, 0x10, 0x53
                int64_t x11_10 = sx.q(*(gDomClient + 0x2056c))
                *(gDomClient + 0x207bc) = x11_10.d
                memcpy(gDomClient + 0x207c0, gDomClient + 0x1f8ec, x11_10 << 2)
                result = SubmitAction(LocalWho(), gDomClient + 0x20748)
                *(gDomClient + 0x2056c) = 0
                return result
            case 2, 0xa, 0xe, 0xf
                *(gDomClient + 0x207bc) = 0
                
                if (x8_5 != 2)
                    return SubmitAction(LocalWho(), gDomClient + 0x20748)
                
                x9_39 = -2
                goto label_b26f4c
            case 3
                return GameDlgManagerShow(0x7e9, 5)
            case 5
                void* i_16 = *(gDomClient + 0x205e0)
                void* i_21 = i_16
                int32_t i_7
                
                do
                    i_7 = *(i_21 + 0x21d0)
                    i_21 += 0x21d8
                while (i_7 u< 0x10000)
                void* x10_27 = i_21 - 0x21d8
                
                while (*(x10_27 + 0x2c) != 3 || *(x10_27 + 0x58) != i_8 || *(x10_27 + 0x5c) != 0x3ee
                        || *(x10_27 + 0x60) != *(gDomClient + 0x20780))
                    void* x13_19 = x10_27 + 0x43a8
                    int32_t j
                    
                    do
                        j = *x13_19
                        x10_27 += 0x21d8
                        x13_19 += 0x21d8
                    while (j u< 0x10000)
                
                int32_t x26_1 = *(x10_27 + 0x70)
                
                if (x26_1 == 0)
                    return SubmitAction(LocalWho(), gDomClient + 0x20748)
                
                int64_t x21_3 = 0
                
                while (true)
                    uint64_t x9_43 = zx.q(x26_1) & 0xffff
                    void* x10_29 = i_16 + mulu.dp.d(x9_43.d, 0x21d8)
                    int32_t x11_17 = *(x10_29 + 0xa4) - 0x3ee
                    
                    if (x11_17 u>= 3)
                        break
                    
                    int32_t x25_2 = *(&data_1153bd0)[sx.q(x11_17)]
                    x26_1 = *(x10_29 + 0x213c)
                    uint64_t x9_44 = zx.q(*(gDomClient + 0x205e8))
                    uint64_t i_13
                    
                    if (x25_2 s> 0x3e8)
                        i_13 = zx.q(i_8)
                    else
                        i_13 = 0xffffffff
                    
                    int64_t x9_45
                    void* i_9
                    
                    if (x9_44.d != 0)
                        x9_45 = i_16 + x9_44 * 0x21d8
                        i_9 = i_16
                        
                        while (zx.d(*(i_9 + 0x21d2)) == 0)
                            i_9 += 0x21d8
                            
                            if (i_9 u>= x9_45)
                                goto label_b271d8
                    
                    void* i_14
                    
                    if (x9_44.d == 0 || i_9 == 0xffffffff)
                    label_b271d8:
                        i_14 = nullptr
                    else
                        do
                            if (*(i_9 + 0x2c) == 3 && *(i_9 + 0x58) == i_13.d
                                    && *(i_9 + 0x5c) == x25_2 && *(i_9 + 0x60) == 0)
                                i_14 = i_9
                                break
                            
                            if (i_9 == 0)
                                i_9 = i_16
                            else
                                i_9 += 0x21d8
                            
                            if (i_9 u>= x9_45)
                                goto label_b271d8
                            
                            while (zx.d(*(i_9 + 0x21d2)) == 0)
                                i_9 += 0x21d8
                                
                                if (i_9 u>= x9_45)
                                    goto label_b271d8
                            
                            i_14 = nullptr
                        while (i_9 != 0xffffffff)
                    
                    DomMoveCard(i_13, zx.q(*(i_16 + x9_43 * 0x21d8 + 0x98)), i_14, &data_7ef484, 0, 
                        false, 0xb, false)
                    void* x9_46 = gDomClient + (x21_3 << 2)
                    *(x9_46 + 0x207c0) = *(i_16 + x9_43 * 0x21d8 + 0x98)
                    *(x9_46 + 0x21450) = x25_2
                    
                    if (x26_1 == 0)
                        return SubmitAction(LocalWho(), gDomClient + 0x20748)
                    
                    i_16 = *(gDomClient + 0x205e0)
                    x21_3 += 1
                
                pthread_kill(pthread_self(), 6)
                return NextPHSlot(XNoReturn()) __tailcall
            case 6, 7, 0xd, 0x11, 0x12, 0x13, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 
                    0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 
                    0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 
                    0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 
                    0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 
                    0x54, 0x55, 0x56, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 
                    0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 
                    0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x80, 
                    0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 
                    0x8e
                pthread_kill(pthread_self(), 6)
                return NextPHSlot(XNoReturn()) __tailcall
            case 8
                return ToggleScore()
            case 9
                return CardnamesOpen()
            case 0xb
                x9_39 = -1
            label_b26f4c:
                *(gDomClient + 0x207bc) = x9_39
                return SubmitAction(LocalWho(), gDomClient + 0x20748)
            case 0xc
                *(gDomClient + 0x207bc) = 0
                return SubmitAction(LocalWho(), gDomClient + 0x20748)
            case 0x14
                x8_53 = 0x1444
                goto label_b26f7c
            case 0x15, 0x8f
                x8_53 = 0x1440
            label_b26f7c:
                x19_1 = gDomClient + 0x20748
                *(gDomClient + (0x1450 | 0x20000)) = *(gDomClient + (zx.q(x8_53) | 0x20000))
                goto label_b25e4c
            case 0x58
                int32_t x20_5 = *(gDomClient + 0x207bc)
                *(gDomClient + 0x207c0) = *(gDomClient + 0x1f8ec)
                *(gDomClient + 0x207bc) = 1
                result = SubmitAction(LocalWho(), gDomClient + 0x20748)
                
                if (x20_5 s>= 2)
                    YldCopy(&var_e10, gDomClient + 0x20748)
                    var_d9c = 0
                    goto label_b26cf0
            case 0x59
                *(gDomClient + 0x207bc) = 0
                SubmitAction(LocalWho(), gDomClient + 0x20748)
                YldCopy(&var_e10, gDomClient + 0x20748)
                int32_t x8_55 = *(gDomClient + 0x1f8ec)
                var_d9c = 1
                var_d98 = x8_55
                goto label_b26cf0
            case 0x5a
                *(gDomClient + 0x207bc) = 0
                x19_1 = gDomClient + 0x20748
                SubmitAction(LocalWho(), x19_1)
                goto label_b25e4c
            case 0x5b
                x19_1 = gDomClient + 0x20748
                *(gDomClient + 0x207c0) = *(gDomClient + 0x1f8ec)
                *(gDomClient + 0x207bc) = 1
                goto label_b25e4c
            case 0x5c
                *(gDomClient + 0x207bc) = 0
                result = SubmitAction(zx.q(i_8), gDomClient + 0x20748)
    else
        if (x8_5 == 0x7b)
            *(gDomClient + 0x207bc) = 1
            uint64_t x11_4 = zx.q(*(gDomClient + 0x205e8))
            
            if (x11_4.d != 0)
                void* i_15 = *(gDomClient + 0x205e0)
                int64_t x9_19 = *(gDomClient + 0x20780)
                void* i_12 = i_15
                int64_t x11_5 = i_15 + x11_4 * 0x21d8
                void* i_10 = i_15
                
                do
                    if (zx.d(*(i_10 + 0x21d2)) != 0)
                        if (i_10 != 0xffffffff)
                            int32_t x13_10 = 0
                            
                            do
                                if (*(i_10 + 0x2c) == 0 && *(i_10 + 0xa0) == i_8
                                        && *(i_10 + 0xa4) == 0x3ef && *(i_10 + 0xc8) == x9_19)
                                    x13_10 += 1
                                
                                if (i_10 == 0)
                                    i_10 = i_15
                                else
                                    i_10 += 0x21d8
                                
                                if (i_10 u>= x11_5)
                                    break
                                
                                while (zx.d(*(i_10 + 0x21d2)) == 0)
                                    i_10 += 0x21d8
                                    
                                    if (i_10 u>= x11_5)
                                        goto label_b2686c
                            while (i_10 != 0xffffffff)
                            
                        label_b2686c:
                            
                            if (x13_10 != 0)
                                *(gDomClient + 0x21450) = *(gDomClient + 0x21440)
                        
                        break
                    
                    i_10 += 0x21d8
                while (i_10 u< x11_5)
                
                void* i_11 = i_12
                
                do
                    if (zx.d(*(i_11 + 0x21d2)) != 0)
                        if (i_11 != 0xffffffff)
                            int32_t x13_11 = 0
                            
                            do
                                if (*(i_11 + 0x2c) == 0 && *(i_11 + 0xa0) == i_8
                                        && *(i_11 + 0xa4) == 0x3ee && *(i_11 + 0xc8) == x9_19)
                                    x13_11 += 1
                                
                                if (i_11 == 0)
                                    i_11 = i_15
                                else
                                    i_11 += 0x21d8
                                
                                if (i_11 u>= x11_5)
                                    break
                                
                                while (zx.d(*(i_11 + 0x21d2)) == 0)
                                    i_11 += 0x21d8
                                    
                                    if (i_11 u>= x11_5)
                                        goto label_b26928
                            while (i_11 != 0xffffffff)
                            
                        label_b26928:
                            
                            if (x13_11 != 0)
                                *(gDomClient + 0x21450) = *(gDomClient + 0x21444)
                        
                        break
                    
                    i_11 += 0x21d8
                while (i_11 u< x11_5)
                
                do
                    if (zx.d(*(i_12 + 0x21d2)) != 0)
                        if (i_12 != 0xffffffff)
                            int32_t x12_4 = 0
                            
                            do
                                if (*(i_12 + 0x2c) == 0 && *(i_12 + 0xa0) == i_8
                                        && *(i_12 + 0xa4) == 0x3f0 && *(i_12 + 0xc8) == x9_19)
                                    x12_4 += 1
                                
                                if (i_12 == 0)
                                    i_12 = i_15
                                else
                                    i_12 += 0x21d8
                                
                                if (i_12 u>= x11_5)
                                    break
                                
                                while (zx.d(*(i_12 + 0x21d2)) == 0)
                                    i_12 += 0x21d8
                                    
                                    if (i_12 u>= x11_5)
                                        goto label_b269e0
                            while (i_12 != 0xffffffff)
                            
                        label_b269e0:
                            
                            if (x12_4 != 0)
                                *(gDomClient + 0x21450) = *(gDomClient + 0x21448)
                        
                        break
                    
                    i_12 += 0x21d8
                while (i_12 u< x11_5)
            
            return SubmitAction(LocalWho(), gDomClient + 0x20748)
        
        if (x8_5 != 0xd0)
            goto label_b264b4
        
        int64_t x20_2 = sx.q(*(gDomClient + 0x2056c))
        memcpy(gDomClient + 0x207c0, gDomClient + 0x1f8ec, x20_2 << 2)
        *(gDomClient + 0x207bc) = x20_2.d
        result = SubmitAction(LocalWho(), gDomClient + 0x20748)
        
        if (x20_2.d == 1)
            YldCopy(&var_e10, gDomClient + 0x20748)
            result = SubmitAction(LocalWho(), &var_e10)
else
    *(gDomClient + 0x207bc) = 0
    x19_1 = gDomClient + 0x20748
label_b25e4c:
    result = SubmitAction(LocalWho(), x19_1)
*(gDomClient + 0x2056c) = 0
return result
