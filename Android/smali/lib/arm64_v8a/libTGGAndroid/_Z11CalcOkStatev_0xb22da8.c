// 函数: _Z11CalcOkStatev
// 地址: 0xb22da8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result
uint64_t x3_1
int128_t v0_1
int128_t v1_1
int128_t v2_1
int128_t v3_1
int128_t v4_1

if (*(ActiveGame() + 0x1318) != 0)
    x3_1 = 3
label_b22e54:
    result, v0_1, v1_1, v2_1, v3_1, v4_1 =
        DomOKSet(&data_180f624, &data_180f654, &data_180f684, x3_1, 0)
    v0_1.q = 0
    v0_1:8.q = 0
    __builtin_memset(&data_180f654:4, 0, 0x2c)
label_b22e68:
    v1_1 = data_180f654
    v2_1 = data_180f624
    v3_1 = data_180f634
    int128_t* entry_x8
    entry_x8[2] = data_180f644
    entry_x8[3] = v1_1
    v1_1 = data_180f694
    v4_1 = data_180f6a4
    *entry_x8 = v2_1
    entry_x8[1] = v3_1
    v2_1 = data_180f664
    v3_1 = data_180f674
    v0_1 = data_180f684
    entry_x8[7] = v1_1
    entry_x8[8] = v4_1
    entry_x8[4] = v2_1
    entry_x8[5] = v3_1
    entry_x8[6] = v0_1
    return result

if (zx.d(*(gDomClient + 0x22134)) != 0)
label_b22e48:
    x3_1 = 8
    goto label_b22e54

result, v0_1, v1_1, v2_1, v3_1, v4_1 = ActiveGame()
uint64_t i_3 = zx.q(*(result + 0x11b4))

if (i_3.d s>= 1)
    void* x9_1 = result + 0x74
    uint64_t i
    
    do
        int32_t x12_2 = *x9_1 - 0x3e9
        
        if (x12_2 u<= 4 && (1 << x12_2 & 0x19) != 0)
            goto label_b22e48
        
        i = i_3
        i_3 -= 1
        x9_1 += 0x22c
    while (i != 1)

if (*(gDomClient + 0x207b4) != 0)
    if (data_180f654.d != 0)
        data_180f654.d = 4
    
    if (data_180f654:4.d != 0)
        data_180f654:4.d = 4
    
    if (data_180f654:8.d != 0)
        data_180f654:8.d = 4
    
    if (data_180f654:0xc.d != 0)
        data_180f654:0xc.d = 4
    
    if (data_180f664.d != 0)
        data_180f664.d = 4
    
    if (data_180f664:4.d != 0)
        data_180f664:4.d = 4
    
    if (data_180f664:8.d != 0)
        data_180f664:8.d = 4
    
    if (data_180f664:0xc.d != 0)
        data_180f664:0xc.d = 4
    
    if (data_180f674.d != 0)
        data_180f674.d = 4
    
    if (data_180f674:4.d != 0)
        data_180f674:4.d = 4
    
    if (data_180f674:8.d != 0)
        data_180f674:8.d = 4
    
    if (data_180f674:0xc.d != 0)
        data_180f674:0xc.d = 4
    
    goto label_b22e68

int32_t x8_3 = *(gDomClient + 0x38)
int32_t x8_4

x8_4 = x8_3 == 0xffffffff ? 0 : x8_3

int128_t* x8_12

if (*(gDomClient + 0x2079c) != x8_4)
label_b2327c:
    x8_12 = &data_180f654
    v0_1.q = 0
    v0_1:8.q = 0
    data_180f674 = zx.o(0)
else
    int32_t x21_1 = *(gDomClient + 0x207a0)
    result, v0_1, v1_1, v2_1, v3_1, v4_1 = LocalWho()
    
    if (x21_1 != result.d)
        goto label_b2327c
    
    int32_t x9_15 = *(gDomClient + 0x2074c)
    
    if (x9_15 == 7)
        x3_1 = 9
        goto label_b22e54
    
    int32_t x8_5 = *(gDomClient + 0x20758)
    uint64_t x3_2
    
    if (x8_5 s> 0x9e)
        if (x8_5 == 0x107)
            x3_1 = 0xbe
            goto label_b22e54
        
        if (x8_5 == 0xd5)
            x3_1 = 0x92
            goto label_b22e54
        
        if (x8_5 != 0x9f)
            goto label_b23154
        
        DomOKSet(&data_180f624, &data_180f654, &data_180f684, 1, 0)
        x3_2 = 2
    label_b23090:
        result, v0_1, v1_1, v2_1, v3_1, v4_1 =
            DomOKSet(&data_180f624:4, &data_180f654:4, &data_180f684:4, x3_2, 0)
        v0_1.q = 0
        v0_1:8.q = 0
        __builtin_memset(&data_180f654:8, 0, 0x28)
        goto label_b22e68
    
    if (x8_5 - 0x85 u< 7)
        if (x8_5 != 0x85 && *(gDomClient + 0x2056c) == 0)
            x3_1 = 2
            goto label_b22e54
        
        result, v0_1, v1_1, v2_1, v3_1, v4_1 =
            DomOKSet(&data_180f624, &data_180f654, &data_180f684, 1, 0)
        int32_t x8_7 = *(gDomClient + 0x2056c)
        v0_1.q = 0
        v0_1:8.q = 0
        __builtin_memset(&data_180f654:4, 0, 0x2c)
        
        if (x8_7 == 6 || x8_7 == *(gDomClient + 0x20774))
            goto label_b22e68
        
        if (x8_7 s> 2)
            data_180f654.d = 3
            goto label_b22e68
        
        if (x8_7 s< 1)
            goto label_b22e68
        
        int64_t x23_1 = 0
        int64_t x8_9
        
        while (true)
            result, v0_1, v1_1, v2_1, v3_1, v4_1 =
                CardIs(gDomClient + 0x20728, zx.q(*(gDomClient + (x23_1 << 2) + 0x1f8ec)), 0x100)
            x8_9 = sx.q(*(gDomClient + 0x2056c))
            
            if ((result.d & 1) == 0)
                break
            
            x23_1 += 1
            
            if (x23_1 s>= x8_9)
                goto label_b22e68
        
        if (x8_9.d s> 1)
            data_180f654.d = 3
            goto label_b22e68
        
        if (x8_9.d != 1)
            goto label_b22e68
        
        int64_t x23_2 = 0
        
        while (true)
            result, v0_1, v1_1, v2_1, v3_1, v4_1 =
                CardIs(gDomClient + 0x20728, zx.q(*(gDomClient + (x23_2 << 2) + 0x1f8ec)), 0x20)
            
            if ((result.d & 1) == 0)
                break
            
            x23_2 += 1
            
            if (x23_2 s>= sx.q(*(gDomClient + 0x2056c)))
                goto label_b22e68
        
        data_180f654.d = 3
        goto label_b22e68
    
label_b23154:
    
    if (x9_15 == 2)
        x3_1 = 1
        goto label_b22e54
    
    int64_t x3_5
    
    if (x8_5 s<= 0x7a)
        uint64_t x10_2 = zx.q(x8_5 - 0x27)
        
        if (x10_2.d u<= 0x27)
            switch (x10_2)
                case 0, 0x14
                    DomOKSet(&data_180f624, &data_180f654, &data_180f684, 4, 0)
                    uint64_t x0_2 = zx.q(*(gDomClient + 0x20758))
                    int64_t x1_2 = *(gDomClient + 0x20780)
                    __builtin_memset(&data_180f654:4, 0, 0x2c)
                    result, v0_1, v1_1, v2_1, v3_1, v4_1 = ValidateRevealPiles(x0_2, x1_2)
                    
                    if ((result.d & 1) != 0)
                        goto label_b22e68
                    
                    data_180f654.d = 3
                    goto label_b22e68
                case 1, 2, 3, 4, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0x10, 0x11, 0x12, 0x13, 0x15, 
                        0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 
                        0x22, 0x23, 0x24, 0x25
                    goto label_b233d0
                case 5
                    goto label_b2327c
                case 6
                    x3_1 = 0x1c
                    goto label_b22e54
                case 0xf
                label_b232ac:
                    uint64_t x13_2 = zx.q(*(gDomClient + 0x205e8))
                    
                    if (x13_2.d == 0)
                    label_b234dc:
                        DomOKSet(&data_180f624, &data_180f654, &data_180f684, 0x26, 0)
                        x3_2 = 0x29
                        goto label_b23090
                    
                    void* i_5 = *(gDomClient + 0x205e0)
                    int64_t x13_3 = i_5 + x13_2 * 0x21d8
                    void* i_1 = i_5
                    
                    while (zx.d(*(i_1 + 0x21d2)) == 0)
                        i_1 += 0x21d8
                        
                        if (i_1 u>= x13_3)
                            goto label_b234dc
                    
                    if (i_1 == 0xffffffff)
                        goto label_b234dc
                    
                    int32_t x12_5 = 0
                    
                    do
                        if (*(i_1 + 0x2c) == 0 && *(i_1 + 0xa0) == *(gDomClient + 0x2079c)
                                && *(i_1 + 0xa4) == 0x3ea && *(i_1 + 0xc8) == 0)
                            x12_5 += 1
                        
                        if (i_1 == 0)
                            i_1 = i_5
                        else
                            i_1 += 0x21d8
                        
                        if (i_1 u>= x13_3)
                            break
                        
                        while (zx.d(*(i_1 + 0x21d2)) == 0)
                            i_1 += 0x21d8
                            
                            if (i_1 u>= x13_3)
                                goto label_b23494
                    while (i_1 != 0xffffffff)
                    
                label_b23494:
                    
                    if (x12_5 == 0)
                        goto label_b234dc
                    
                    int32_t x9_18 = *(gDomClient + 0x2056c)
                    
                    if (x9_18 == 0)
                        x3_1 = x8_5 == 0x36 ? 0x29 : 0xd7
                        
                        goto label_b22e54
                    
                    if (x12_5 == 1 && x9_18 == 1)
                        x3_1 = 0x27
                        goto label_b22e54
                    
                    if ((x8_5 == 0x36 && x9_18 == 2) || (x12_5 == 2 && x9_18 == 2))
                        x3_1 = 0x28
                        goto label_b22e54
                    
                    if (x9_18 == 3)
                        x3_1 = 0xd8
                        goto label_b22e54
                    
                    x3_5 = x8_5 == 0x36 ? 0x28 : 0xd8
                    
                    goto label_b23894
                case 0x26
                    uint64_t x10_4 = zx.q(*(gDomClient + 0x205e8))
                    int128_t* x22_1
                    
                    if (x10_4.d == 0)
                    label_b23610:
                        int128_t* x21_5 = &data_180f654
                        DomOKSet(&data_180f624, &data_180f654, &data_180f684, 0x5a, 0)
                        DomOKSet(&data_180f624:4, &data_180f654:4, &data_180f684:4, 0x59, 0)
                        DomOKSet(&data_180f624:8, &data_180f654:8, &data_180f684:8, 0x58, 0)
                        x22_1 = &data_180f654:0xc
                        result, v0_1, v1_1, v2_1, v3_1, v4_1 = DomOKSet(&data_180f624:0xc, 
                            &data_180f654:0xc, &data_180f684:0xc, 0x57, 0)
                        int32_t x8_16 = *(gDomClient + 0x2056c)
                        v0_1.q = 0
                        v0_1:8.q = 0
                        __builtin_memset(&data_180f664, 0, 0x20)
                        
                        if (x8_16 != 1)
                            int32_t* x21_6
                            
                            if (x8_16 != 0)
                                x21_6 = &data_180f654
                            else
                                x21_6 = &data_180f654:4
                            
                            x22_1 = &x21_6[2]
                            *x21_6 = 3
                            x21_5 = &x21_6[1]
                        
                        *x21_5 = 3
                    else
                        void* i_4 = *(gDomClient + 0x205e0)
                        int64_t x10_5 = i_4 + x10_4 * 0x21d8
                        void* i_2 = i_4
                        
                        while (zx.d(*(i_2 + 0x21d2)) == 0)
                            i_2 += 0x21d8
                            
                            if (i_2 u>= x10_5)
                                goto label_b23610
                        
                        if (i_2 == 0xffffffff)
                            goto label_b23610
                        
                        int32_t x12_6 = 0
                        
                        do
                            if (*(i_2 + 0x2c) == 0 && *(i_2 + 0xa0) == *(gDomClient + 0x2079c)
                                    && *(i_2 + 0xa4) == 0x3ea && *(i_2 + 0xc8) == 0)
                                x12_6 += 1
                            
                            if (i_2 == 0)
                                i_2 = i_4
                            else
                                i_2 += 0x21d8
                            
                            if (i_2 u>= x10_5)
                                break
                            
                            while (zx.d(*(i_2 + 0x21d2)) == 0)
                                i_2 += 0x21d8
                                
                                if (i_2 u>= x10_5)
                                    goto label_b2358c
                        while (i_2 != 0xffffffff)
                        
                    label_b2358c:
                        
                        if (x12_6 != 1)
                            goto label_b23610
                        
                        x22_1 = &data_180f654
                        DomOKSet(&data_180f624, &data_180f654, &data_180f684, 0x5a, 0)
                        DomOKSet(&data_180f624:4, &data_180f654:4, &data_180f684:4, 0x59, 0)
                        result, v0_1, v1_1, v2_1, v3_1, v4_1 =
                            DomOKSet(&data_180f624:8, &data_180f654:8, &data_180f684:8, 0x58, 0)
                        int32_t x8_15 = *(gDomClient + 0x2056c)
                        v0_1.q = 0
                        v0_1:8.q = 0
                        __builtin_memset(&data_180f654:0xc, 0, 0x24)
                        
                        if (x8_15 == 0)
                            x22_1 = &data_180f654:8
                            data_180f654:4.d = 3
                    
                    *x22_1 = 3
                    goto label_b22e68
                case 0x27
                    DomOKSet(&data_180f624, &data_180f654, &data_180f684, 0x5c, 0)
                    result, v0_1, v1_1, v2_1, v3_1, v4_1 =
                        DomOKSet(&data_180f624:4, &data_180f654:4, &data_180f684:4, 0x5b, 0)
                    int32_t x8_14 = *(gDomClient + 0x2056c)
                    v0_1.q = 0
                    v0_1:8.q = 0
                    __builtin_memset(&data_180f654:8, 0, 0x28)
                    
                    if (x8_14 == 0)
                        data_180f654:4.d = 3
                    else if (x8_14 == 1)
                        data_180f654.d = 3
                    
                    goto label_b22e68
    else
        if (x8_5 == 0x114)
            x3_1 = 0xca
            goto label_b22e54
        
        if (x8_5 == 0x133)
            goto label_b232ac
        
        if (x8_5 == 0x7b)
            x3_1 = 4
            goto label_b22e54
        
        if (x8_5 == 0xd2)
            goto label_b2327c
    
label_b233d0:
    
    if (x9_15 == 4)
        result, v0_1, v1_1, v2_1, v3_1, v4_1 = MageDomOK_Options(&data_180f624, 
            gDomClient + 0x207c0, *(gDomClient + 0x207bc), *(gDomClient + 0x207ac), 
            *(gDomClient + 0x20774))
        goto label_b22e68
    
    if ((x8_5 & 0xfffffffe) == 0x80)
        x3_1 = 4
        goto label_b22e54
    
    if (x8_5 s> 0x32)
        if (x8_5 - 0x33 u< 2)
            int32_t x23_3 = *(gDomClient + 0x1f8e0)
            int32_t x21_7 = *(gDomClient + 0x1f8c0)
            result, v0_1, v1_1, v2_1, v3_1, v4_1 =
                DomOKSet(&data_180f624, &data_180f654, &data_180f684, 1, 0)
            v0_1.q = 0
            v0_1:8.q = 0
            __builtin_memset(&data_180f654:4, 0, 0x2c)
            
            if (x23_3 != 0 && x21_7 == 0)
                goto label_b22e68
            
            data_180f654.d = 3
            goto label_b22e68
        
        if (x8_5 == 0x48)
            DomOKSet(&data_180f624, &data_180f654, &data_180f684, 0x53, 0)
            x3_2 = 0x52
            goto label_b23090
        
        if (x8_5 != 0x101)
            goto label_b237c8
        
        x3_1 = 1
        goto label_b22e54
    
    if (x8_5 == 1)
        x3_1 = 0xa
        goto label_b22e54
    
    if (x8_5 == 8)
        x3_1 = 0xf
        goto label_b22e54
    
label_b237c8:
    
    if (x8_5 s> 0xbd)
        if (x8_5 == 0xbe)
            x3_1 = 0x10
            goto label_b22e54
        
        if (x8_5 == 0xfd)
            goto label_b23854
        
    label_b238cc:
        int32_t x10_8 = *(gDomClient + 0x2056c)
        
        if ((x8_5 == 0x14 && x10_8 == 0) || (x8_5 == 0x10 && x10_8 == 0))
            x3_1 = 2
            goto label_b22e54
        
        int32_t x11_2 = *(gDomClient + 0x207ac)
        
        if (x9_15 != 5 && x11_2 s>= 2)
            if (x10_8 s>= *(gDomClient + 0x207b0))
            label_b239f0:
                
                if (x10_8 != 0)
                    x3_1 = 1
                    goto label_b22e54
                
                x3_1 = 2
                goto label_b22e54
            
        label_b23920:
            x3_5 = 1
        label_b23894:
            result, v0_1, v1_1, v2_1, v3_1, v4_1 =
                DomOKSet(&data_180f624, &data_180f654, &data_180f684, x3_5, 0)
            v0_1.q = 0
            v0_1:8.q = 0
            __builtin_memset(&data_180f654:4, 0, 0x2c)
            data_180f654.d = 3
            goto label_b22e68
        
        if (x9_15 u> 8)
            pthread_kill(pthread_self(), 6)
            return GameSpecific_IsGameOver(XNoReturn()) __tailcall
        
        switch (x9_15)
            case 0
                goto label_b22e68
            case 1
                if (x10_8 s>= *(gDomClient + 0x207b0))
                    goto label_b239f0
                
                if (x11_2 == 1)
                    goto label_b2327c
                
                goto label_b23920
            case 3
                if (x8_5 == 0x38)
                    DomOKSet(&data_180f624, &data_180f654, &data_180f684, 0x2f, 0)
                    x3_2 = 0x2e
                    goto label_b23090
                
                if (*(gDomClient + 0x21460) != 2)
                    x3_1 = 5
                    goto label_b22e54
                
                int32_t x9_21 = *(gDomClient + 0x21440)
                int64_t x3_6
                
                if (x9_21 s> 0x3eb)
                    if (x9_21 == 0x3ec)
                        x3_6 = 0x12
                    else if (x9_21 == 0x452)
                        x3_6 = 0x14
                    else
                        if (x9_21 != 0x475)
                            pthread_kill(pthread_self(), 6)
                            return GameSpecific_IsGameOver(XNoReturn()) __tailcall
                        
                        x3_6 = 0x2f
                else if (x9_21 == 2)
                    x3_6 = 0x13
                else if (x9_21 != 0x3ea)
                    if (x9_21 != 0x3eb)
                        pthread_kill(pthread_self(), 6)
                        return GameSpecific_IsGameOver(XNoReturn()) __tailcall
                    
                    x3_6 = 0x11
                else if (x8_5 == 0xc2)
                    x3_6 = 0x8f
                else
                    x3_6 = 0x15
                
                int32_t x9_22 = *(gDomClient + 0x21444)
                int32_t x21_9
                
                if (x9_22 s> 0x3eb)
                    if (x9_22 == 0x3ec)
                        x21_9 = 0x12
                    else if (x9_22 == 0x452)
                        x21_9 = 0x14
                    else
                        if (x9_22 != 0x475)
                            pthread_kill(pthread_self(), 6)
                            return GameSpecific_IsGameOver(XNoReturn()) __tailcall
                        
                        x21_9 = 0x2f
                else if (x9_22 == 2)
                    x21_9 = 0x13
                else if (x9_22 != 0x3ea)
                    if (x9_22 != 0x3eb)
                        pthread_kill(pthread_self(), 6)
                        return GameSpecific_IsGameOver(XNoReturn()) __tailcall
                    
                    x21_9 = 0x11
                else if (x8_5 == 0xc2)
                    x21_9 = 0x8f
                else
                    x21_9 = 0x15
                
                DomOKSet(&data_180f624, &data_180f654, &data_180f684, x3_6, 0)
                x3_2 = zx.q(x21_9)
                goto label_b23090
            case 5
                x3_1 = 7
                goto label_b22e54
            case 6, 8
                if (*(gDomClient + 0x207b0) != 0)
                    goto label_b2327c
                
                x3_1 = 2
                goto label_b22e54
    else
        if (x8_5 != 2)
            if (x8_5 != 3)
                goto label_b238cc
            
            x3_1 = (zx.q(*(gDomClient + 0x20774)) & 2) ^ 0xe
            goto label_b22e54
        
    label_b23854:
        int32_t x21_8 = *(gDomClient + 0x20774)
        int64_t x3_4
        
        if ((x21_8 & 2) != 0)
            x3_4 = 0xc
        else if (x8_5 != 0xfd)
            x3_4 = 0xe
        else
            x3_4 = 2
        
        result, v0_1, v1_1, v2_1, v3_1, v4_1 =
            DomOKSet(&data_180f624, &data_180f654, &data_180f684, x3_4, 0)
        
        if ((x21_8 & 1) != 0)
            result, v0_1, v1_1, v2_1, v3_1, v4_1 =
                DomOKSet(&data_180f624:4, &data_180f654:4, &data_180f684:4, 0xb, 0)
            v0_1.q = 0
            v0_1:8.q = 0
            __builtin_memset(&data_180f654:8, 0, 0x28)
            goto label_b22e68
        
        x8_12 = &data_180f654:4
        v0_1.q = 0
        v0_1:8.q = 0
        data_180f674 = zx.o(0)

__builtin_memset(x8_12, 0, 0x20)
goto label_b22e68
