// 函数: _Z22OpenDiscardIfNecessaryRK8DomYield
// 地址: 0xb19da0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *(arg1 + 0x54)
int32_t x8 = *(gDomClient + 0x38)
int32_t x8_1

x8_1 = x8 == 0xffffffff ? 0 : x8

if (x19 != x8_1)
    return 

int32_t x20_1 = *(arg1 + 0x10)
DomYield const& x21_1 = arg1
arg1 = GetZoomPileStyle(zx.q(x20_1))

if (arg1.d u> 0xf)
label_b1ad14:
    pthread_kill(pthread_self(), 6)
    XNoReturn()
    *(gDomClient + 0x20578) = (*(gDomClient + 0x20778)).d
    return 

void* i_2
int64_t x0_3
uint64_t x1_1

switch (arg1.d)
    case 0
        if (*(x21_1 + 4) == 5 && *(x21_1 + 0x58) == LocalWho().d)
            int32_t x8_4 = *(x21_1 + 0x10)
            int32_t x9_4
            
            if (x8_4 == 6)
                x9_4 = 2
            else
                x9_4 = (x8_4 == 0x79 ? 1 : 0) & (*(x21_1 + 0x2c) != 0 ? 1 : 0)
            
            int32_t x9_5
            
            x9_5 = x8_4 == 0x9f ? 3 : x9_4
            
            if (x8_4 == 0x95 || x8_4 == 4)
                x9_5 = 4
            
            int32_t x19_2
            
            x19_2 = x8_4 == 5 ? x8_4 : x9_5
            
            GameDlgManagerShow(0x3e9, 2)
            *(gDomClient + 0x20574) = x19_2
            int32_t x8_5 = *(gDomClient + 0x207b0)
            *(gDomClient + 0x2057c) = x8_5
            int32_t x9_6 = *(gDomClient + 0x20758)
            
            if (x9_6 != 0x9f)
                *(gDomClient + 0x20584) = 0
                *(gDomClient + 0x20580) = *(gDomClient + 0x207ac)
                *(gDomClient + 0x20578) = x8_5
                
                if (x9_6 == 0x79)
                    *(gDomClient + 0x20578) = (*(gDomClient + 0x20778)).d
                else if (x9_6 == 6)
                    *(gDomClient + 0x20578) = *(gDomClient + 0x20774)
            else
                int32_t x8_6 = *(gDomClient + 0x20774)
                *(gDomClient + 0x2057c) = x8_6
                *(gDomClient + 0x20584) = 0
                *(gDomClient + 0x20580) = *(gDomClient + 0x207ac)
                *(gDomClient + 0x20578) = x8_6
    case 1
        uint64_t x9_8 = zx.q(*(gDomClient + 0x205e8))
        
        if (x9_8.d != 0)
            void* i_4 = *(gDomClient + 0x205e0)
            int64_t x9_9 = i_4 + x9_8 * 0x21d8
            i_2 = i_4
            
            do
                if (zx.d(*(i_2 + 0x21d2)) != 0)
                    if (i_2 != 0xffffffff)
                        while (true)
                            if (*(i_2 + 0x2c) == 3 && *(i_2 + 0x58) == x19 && *(i_2 + 0x5c) == 0x3eb
                                    && *(i_2 + 0x60) == 0)
                                if (i_2 != 0)
                                    goto label_b1abb8_1
                                
                                break
                            
                            if (i_2 == 0)
                                i_2 = i_4
                            else
                                i_2 += 0x21d8
                            
                            if (i_2 u>= x9_9)
                                goto label_b1a360
                            
                            while (zx.d(*(i_2 + 0x21d2)) == 0)
                                i_2 += 0x21d8
                                
                                if (i_2 u>= x9_9)
                                    goto label_b1a360
                            
                            if (i_2 == 0xffffffff)
                                goto label_b1a360
                    
                    break
                
                i_2 += 0x21d8
            while (i_2 u< x9_9)
        
    label_b1a360:
        x0_3 = 0x3eb
        goto label_b1ab98
    case 2
        uint64_t x9_10 = zx.q(*(gDomClient + 0x205e8))
        void* i_5 = *(gDomClient + 0x205e0)
        
        if (x9_10.d != 0)
            int64_t x10_2 = i_5 + x9_10 * 0x21d8
            void* i = i_5
            
            while (zx.d(*(i + 0x21d2)) == 0)
                i += 0x21d8
                
                if (i u>= x10_2)
                    goto label_b1a3e8
            
            if (i != 0xffffffff)
                int32_t x12_14 = 0
                
                do
                    if (*(i + 0x2c) == 0 && *(i + 0xa0) == x19 && *(i + 0xa4) == 0x3ec
                            && *(i + 0xc8) == 0)
                        x12_14 += 1
                    
                    if (i == 0)
                        i = i_5
                    else
                        i += 0x21d8
                    
                    if (i u>= x10_2)
                        break
                    
                    while (zx.d(*(i + 0x21d2)) == 0)
                        i += 0x21d8
                        
                        if (i u>= x10_2)
                            goto label_b1a3e4
                while (i != 0xffffffff)
                
            label_b1a3e4:
                
                if (x12_14 != 0)
                    goto label_b1a400
        
    label_b1a3e8:
        
        if (x20_1 == 0x63 || x20_1 == 0xe4 || x20_1 == 0xd6)
        label_b1a400:
            
            if (x9_10.d != 0)
                int64_t x9_37 = i_5 + x9_10 * 0x21d8
                i_2 = i_5
                
                do
                    if (zx.d(*(i_2 + 0x21d2)) != 0)
                        if (i_2 != 0xffffffff)
                            while (true)
                                if (*(i_2 + 0x2c) == 3 && *(i_2 + 0x58) == x19
                                        && *(i_2 + 0x5c) == 0x3ec && *(i_2 + 0x60) == 0)
                                    if (i_2 != 0)
                                        goto label_b1abb8_1
                                    
                                    break
                                
                                if (i_2 == 0)
                                    i_2 = i_5
                                else
                                    i_2 += 0x21d8
                                
                                if (i_2 u>= x9_37)
                                    goto label_b1ab94
                                
                                while (zx.d(*(i_2 + 0x21d2)) == 0)
                                    i_2 += 0x21d8
                                    
                                    if (i_2 u>= x9_37)
                                        goto label_b1ab94
                                
                                if (i_2 == 0xffffffff)
                                    goto label_b1ab94
                        
                        break
                    
                    i_2 += 0x21d8
                while (i_2 u< x9_37)
            
        label_b1ab94:
            x0_3 = 0x3ec
        label_b1ab98:
            x1_1 = zx.q(x19)
        label_b1aba4:
            i_2 = DomCreatePile_Other(x0_3, x1_1, 0, 0)
        label_b1abb8:
            return DomExpandPile(i_2, false) __tailcall
    case 3
        uint64_t x9_11 = zx.q(*(gDomClient + 0x205e8))
        
        if (x9_11.d != 0)
            void* i_6 = *(gDomClient + 0x205e0)
            int64_t x9_12 = i_6 + x9_11 * 0x21d8
            i_2 = i_6
            
            do
                if (zx.d(*(i_2 + 0x21d2)) != 0)
                    if (i_2 != 0xffffffff)
                        while (true)
                            if (*(i_2 + 0x2c) == 3 && *(i_2 + 0x58) == 0xffffffff
                                    && *(i_2 + 0x5c) == 2 && *(i_2 + 0x60) == 0)
                                if (i_2 != 0)
                                    goto label_b1abb8_1
                                
                                break
                            
                            if (i_2 == 0)
                                i_2 = i_6
                            else
                                i_2 += 0x21d8
                            
                            if (i_2 u>= x9_12)
                                goto label_b1a4a4
                            
                            while (zx.d(*(i_2 + 0x21d2)) == 0)
                                i_2 += 0x21d8
                                
                                if (i_2 u>= x9_12)
                                    goto label_b1a4a4
                            
                            if (i_2 == 0xffffffff)
                                goto label_b1a4a4
                    
                    break
                
                i_2 += 0x21d8
            while (i_2 u< x9_12)
        
    label_b1a4a4:
        x0_3 = 2
        x1_1 = 0xffffffff
        goto label_b1aba4
    case 4
        uint64_t x9_13 = zx.q(*(gDomClient + 0x205e8))
        
        if (x9_13.d != 0)
            void* i_7 = *(gDomClient + 0x205e0)
            int64_t x9_14 = i_7 + x9_13 * 0x21d8
            i_2 = i_7
            
            do
                if (zx.d(*(i_2 + 0x21d2)) != 0)
                    if (i_2 != 0xffffffff)
                        while (true)
                            if (*(i_2 + 0x2c) == 3 && *(i_2 + 0x58) == x19 && *(i_2 + 0x5c) == 0x44e
                                    && *(i_2 + 0x60) == 0)
                                if (i_2 != 0)
                                    goto label_b1abb8_1
                                
                                break
                            
                            if (i_2 == 0)
                                i_2 = i_7
                            else
                                i_2 += 0x21d8
                            
                            if (i_2 u>= x9_14)
                                goto label_b1a528
                            
                            while (zx.d(*(i_2 + 0x21d2)) == 0)
                                i_2 += 0x21d8
                                
                                if (i_2 u>= x9_14)
                                    goto label_b1a528
                            
                            if (i_2 == 0xffffffff)
                                goto label_b1a528
                    
                    break
                
                i_2 += 0x21d8
            while (i_2 u< x9_14)
        
    label_b1a528:
        x0_3 = 0x44e
        goto label_b1ab98
    case 5
        uint64_t x9_15 = zx.q(*(gDomClient + 0x205e8))
        
        if (x9_15.d != 0)
            void* i_8 = *(gDomClient + 0x205e0)
            int64_t x9_16 = i_8 + x9_15 * 0x21d8
            i_2 = i_8
            
            do
                if (zx.d(*(i_2 + 0x21d2)) != 0)
                    if (i_2 != 0xffffffff)
                        while (true)
                            if (*(i_2 + 0x2c) == 3 && *(i_2 + 0x58) == x19 && *(i_2 + 0x5c) == 0x44d
                                    && *(i_2 + 0x60) == 0)
                                if (i_2 != 0)
                                    goto label_b1abb8_1
                                
                                break
                            
                            if (i_2 == 0)
                                i_2 = i_8
                            else
                                i_2 += 0x21d8
                            
                            if (i_2 u>= x9_16)
                                goto label_b1a5a8
                            
                            while (zx.d(*(i_2 + 0x21d2)) == 0)
                                i_2 += 0x21d8
                                
                                if (i_2 u>= x9_16)
                                    goto label_b1a5a8
                            
                            if (i_2 == 0xffffffff)
                                goto label_b1a5a8
                    
                    break
                
                i_2 += 0x21d8
            while (i_2 u< x9_16)
        
    label_b1a5a8:
        x0_3 = 0x44d
        goto label_b1ab98
    case 6
        arg1 = BoardPileWhere(gDomClient + 0x20728, 0x70d)
        uint64_t x9_17 = zx.q(*(gDomClient + 0x205e8))
        
        if (x9_17.d != 0)
            void* i_9 = *(gDomClient + 0x205e0)
            int64_t x9_18 = i_9 + x9_17 * 0x21d8
            void* i_1 = i_9
            
            while (zx.d(*(i_1 + 0x21d2)) == 0)
                i_1 += 0x21d8
                
                if (i_1 u>= x9_18)
                    return 
            
            if (i_1 != 0xffffffff)
                int32_t x11_2 = 0
                
                do
                    if (*(i_1 + 0x2c) == 0 && *(i_1 + 0xa0) == 0xffffffff && *(i_1 + 0xa4) == arg1.d
                            && *(i_1 + 0xc8) == 0)
                        x11_2 += 1
                    
                    if (i_1 == 0)
                        i_1 = i_9
                    else
                        i_1 += 0x21d8
                    
                    if (i_1 u>= x9_18)
                        break
                    
                    while (zx.d(*(i_1 + 0x21d2)) == 0)
                        i_1 += 0x21d8
                        
                        if (i_1 u>= x9_18)
                            goto label_b1a62c
                while (i_1 != 0xffffffff)
                
            label_b1a62c:
                
                if (x11_2 != 0)
                    i_2 = i_9
                    
                    do
                        if (zx.d(*(i_2 + 0x21d2)) != 0)
                            while (i_2 != 0xffffffff)
                                if (*(i_2 + 0x2c) == 3 && *(i_2 + 0x58) == 0xffffffff
                                        && *(i_2 + 0x60) == 0 && *(i_2 + 0x30) == 0x70d)
                                    goto label_b1abb8_1
                                
                                if (i_2 == 0)
                                    i_2 = i_9
                                else
                                    i_2 += 0x21d8
                                
                                if (i_2 u>= x9_18)
                                    break
                                
                                while (zx.d(*(i_2 + 0x21d2)) == 0)
                                    i_2 += 0x21d8
                                    
                                    if (i_2 u>= x9_18)
                                        goto label_b1ad14
                            
                            break
                        
                        i_2 += 0x21d8
                    while (i_2 u< x9_18)
                    
                    goto label_b1ad14
    case 7
        uint64_t x9_19 = zx.q(*(gDomClient + 0x205e8))
        
        if (x9_19.d != 0)
            void* i_10 = *(gDomClient + 0x205e0)
            int64_t x9_20 = i_10 + x9_19 * 0x21d8
            i_2 = i_10
            
            do
                if (zx.d(*(i_2 + 0x21d2)) != 0)
                    if (i_2 != 0xffffffff)
                        while (true)
                            if (*(i_2 + 0x2c) == 3 && *(i_2 + 0x58) == 0xffffffff
                                    && *(i_2 + 0x5c) == 3 && *(i_2 + 0x60) == 0)
                                if (i_2 != 0)
                                    goto label_b1abb8_1
                                
                                break
                            
                            if (i_2 == 0)
                                i_2 = i_10
                            else
                                i_2 += 0x21d8
                            
                            if (i_2 u>= x9_20)
                                goto label_b1a6cc
                            
                            while (zx.d(*(i_2 + 0x21d2)) == 0)
                                i_2 += 0x21d8
                                
                                if (i_2 u>= x9_20)
                                    goto label_b1a6cc
                            
                            if (i_2 == 0xffffffff)
                                goto label_b1a6cc
                    
                    break
                
                i_2 += 0x21d8
            while (i_2 u< x9_20)
        
    label_b1a6cc:
        x0_3 = 3
        x1_1 = 0xffffffff
        goto label_b1aba4
    case 8
        uint64_t x9_21 = zx.q(*(gDomClient + 0x205e8))
        
        if (x9_21.d != 0)
            void* i_11 = *(gDomClient + 0x205e0)
            int64_t x9_22 = i_11 + x9_21 * 0x21d8
            i_2 = i_11
            
            do
                if (zx.d(*(i_2 + 0x21d2)) != 0)
                    if (i_2 != 0xffffffff)
                        while (true)
                            if (*(i_2 + 0x2c) == 3 && *(i_2 + 0x58) == x19 && *(i_2 + 0x5c) == 0x462
                                    && *(i_2 + 0x60) == 0)
                                if (i_2 != 0)
                                    goto label_b1abb8_1
                                
                                break
                            
                            if (i_2 == 0)
                                i_2 = i_11
                            else
                                i_2 += 0x21d8
                            
                            if (i_2 u>= x9_22)
                                goto label_b1a750
                            
                            while (zx.d(*(i_2 + 0x21d2)) == 0)
                                i_2 += 0x21d8
                                
                                if (i_2 u>= x9_22)
                                    goto label_b1a750
                            
                            if (i_2 == 0xffffffff)
                                goto label_b1a750
                    
                    break
                
                i_2 += 0x21d8
            while (i_2 u< x9_22)
        
    label_b1a750:
        x0_3 = 0x462
        goto label_b1ab98
    case 9
        uint64_t x9_23 = zx.q(*(gDomClient + 0x205e8))
        
        if (x9_23.d != 0)
            void* i_12 = *(gDomClient + 0x205e0)
            int64_t x9_24 = i_12 + x9_23 * 0x21d8
            i_2 = i_12
            
            do
                if (zx.d(*(i_2 + 0x21d2)) != 0)
                    if (i_2 != 0xffffffff)
                        while (true)
                            if (*(i_2 + 0x2c) == 3 && *(i_2 + 0x58) == x19 && *(i_2 + 0x5c) == 0x469
                                    && *(i_2 + 0x60) == 0)
                                if (i_2 != 0)
                                    goto label_b1abb8_1
                                
                                break
                            
                            if (i_2 == 0)
                                i_2 = i_12
                            else
                                i_2 += 0x21d8
                            
                            if (i_2 u>= x9_24)
                                goto label_b1a7d0
                            
                            while (zx.d(*(i_2 + 0x21d2)) == 0)
                                i_2 += 0x21d8
                                
                                if (i_2 u>= x9_24)
                                    goto label_b1a7d0
                            
                            if (i_2 == 0xffffffff)
                                goto label_b1a7d0
                    
                    break
                
                i_2 += 0x21d8
            while (i_2 u< x9_24)
        
    label_b1a7d0:
        x0_3 = 0x469
        goto label_b1ab98
    case 0xa
        uint64_t x9_25 = zx.q(*(gDomClient + 0x205e8))
        
        if (x9_25.d != 0)
            void* i_13 = *(gDomClient + 0x205e0)
            int64_t x9_26 = i_13 + x9_25 * 0x21d8
            i_2 = i_13
            
            do
                if (zx.d(*(i_2 + 0x21d2)) != 0)
                    if (i_2 != 0xffffffff)
                        while (true)
                            if (*(i_2 + 0x2c) == 3 && *(i_2 + 0x58) == x19 && *(i_2 + 0x5c) == 0x46b
                                    && *(i_2 + 0x60) == 0)
                                if (i_2 != 0)
                                    goto label_b1abb8_1
                                
                                break
                            
                            if (i_2 == 0)
                                i_2 = i_13
                            else
                                i_2 += 0x21d8
                            
                            if (i_2 u>= x9_26)
                                goto label_b1a850
                            
                            while (zx.d(*(i_2 + 0x21d2)) == 0)
                                i_2 += 0x21d8
                                
                                if (i_2 u>= x9_26)
                                    goto label_b1a850
                            
                            if (i_2 == 0xffffffff)
                                goto label_b1a850
                    
                    break
                
                i_2 += 0x21d8
            while (i_2 u< x9_26)
        
    label_b1a850:
        x0_3 = 0x46b
        goto label_b1ab98
    case 0xb
        uint64_t x9_27 = zx.q(*(gDomClient + 0x205e8))
        int64_t x2_1 = *(x21_1 + 0x38)
        void* i_20
        int64_t x9_28
        void* i_18
        
        if (x9_27.d != 0)
            i_20 = *(gDomClient + 0x205e0)
            x9_28 = i_20 + x9_27 * 0x21d8
            i_18 = i_20
            
            while (zx.d(*(i_18 + 0x21d2)) == 0)
                i_18 += 0x21d8
                
                if (i_18 u>= x9_28)
                    goto label_b1a8e0
        
        if (x9_27.d == 0 || i_18 == 0xffffffff)
        label_b1a8e0:
            void* i_19 = DomCreatePile_Other(0x3ee, zx.q(x19), x2_1, 0)
            i_18 = i_19
            DomExpandPile(i_19, false)
        else
            while (true)
                if (*(i_18 + 0x2c) == 3 && *(i_18 + 0x58) == x19 && *(i_18 + 0x5c) == 0x3ee
                        && *(i_18 + 0x60) == x2_1)
                    if (i_18 != 0)
                        break
                    
                    goto label_b1a8e0
                
                if (i_18 == 0)
                    i_18 = i_20
                else
                    i_18 += 0x21d8
                
                if (i_18 u>= x9_28)
                    goto label_b1a8e0
                
                while (zx.d(*(i_18 + 0x21d2)) == 0)
                    i_18 += 0x21d8
                    
                    if (i_18 u>= x9_28)
                        goto label_b1a8e0
                
                if (i_18 == 0xffffffff)
                    goto label_b1a8e0
        
        i_2 = i_18
    label_b1abb8_1:
        return DomExpandPile(i_2, false) __tailcall
    case 0xc
        arg1 = BoardPileWhere(gDomClient + 0x20728, 0x718)
        uint64_t x9_29 = zx.q(*(gDomClient + 0x205e8))
        
        if (x9_29.d != 0)
            void* i_14 = *(gDomClient + 0x205e0)
            int64_t x9_30 = i_14 + x9_29 * 0x21d8
            void* i_3 = i_14
            
            while (zx.d(*(i_3 + 0x21d2)) == 0)
                i_3 += 0x21d8
                
                if (i_3 u>= x9_30)
                    return 
            
            if (i_3 != 0xffffffff)
                int32_t x11_3 = 0
                
                do
                    if (*(i_3 + 0x2c) == 0 && *(i_3 + 0xa0) == 0xffffffff && *(i_3 + 0xa4) == arg1.d
                            && *(i_3 + 0xc8) == 0)
                        x11_3 += 1
                    
                    if (i_3 == 0)
                        i_3 = i_14
                    else
                        i_3 += 0x21d8
                    
                    if (i_3 u>= x9_30)
                        break
                    
                    while (zx.d(*(i_3 + 0x21d2)) == 0)
                        i_3 += 0x21d8
                        
                        if (i_3 u>= x9_30)
                            goto label_b1a974
                while (i_3 != 0xffffffff)
                
            label_b1a974:
                
                if (x11_3 != 0)
                    i_2 = i_14
                    
                    do
                        if (zx.d(*(i_2 + 0x21d2)) != 0)
                            while (i_2 != 0xffffffff)
                                if (*(i_2 + 0x2c) == 3 && *(i_2 + 0x58) == 0xffffffff
                                        && *(i_2 + 0x60) == 0 && *(i_2 + 0x30) == 0x718)
                                    goto label_b1abb8_1
                                
                                if (i_2 == 0)
                                    i_2 = i_14
                                else
                                    i_2 += 0x21d8
                                
                                if (i_2 u>= x9_30)
                                    break
                                
                                while (zx.d(*(i_2 + 0x21d2)) == 0)
                                    i_2 += 0x21d8
                                    
                                    if (i_2 u>= x9_30)
                                        goto label_b1ad14
                            
                            break
                        
                        i_2 += 0x21d8
                    while (i_2 u< x9_30)
                    
                    goto label_b1ad14
    case 0xd
        uint64_t x9_31 = zx.q(*(gDomClient + 0x205e8))
        
        if (x9_31.d != 0)
            void* i_15 = *(gDomClient + 0x205e0)
            int64_t x9_32 = i_15 + x9_31 * 0x21d8
            i_2 = i_15
            
            do
                if (zx.d(*(i_2 + 0x21d2)) != 0)
                    if (i_2 != 0xffffffff)
                        while (true)
                            if (*(i_2 + 0x2c) == 3 && *(i_2 + 0x58) == x19 && *(i_2 + 0x5c) == 0x46d
                                    && *(i_2 + 0x60) == 0)
                                if (i_2 != 0)
                                    goto label_b1abb8_1
                                
                                break
                            
                            if (i_2 == 0)
                                i_2 = i_15
                            else
                                i_2 += 0x21d8
                            
                            if (i_2 u>= x9_32)
                                goto label_b1aa14
                            
                            while (zx.d(*(i_2 + 0x21d2)) == 0)
                                i_2 += 0x21d8
                                
                                if (i_2 u>= x9_32)
                                    goto label_b1aa14
                            
                            if (i_2 == 0xffffffff)
                                goto label_b1aa14
                    
                    break
                
                i_2 += 0x21d8
            while (i_2 u< x9_32)
        
    label_b1aa14:
        x0_3 = 0x46d
        goto label_b1ab98
    case 0xe
        uint64_t x9_33 = zx.q(*(gDomClient + 0x205e8))
        
        if (x9_33.d != 0)
            void* i_16 = *(gDomClient + 0x205e0)
            int64_t x9_34 = i_16 + x9_33 * 0x21d8
            i_2 = i_16
            
            do
                if (zx.d(*(i_2 + 0x21d2)) != 0)
                    if (i_2 != 0xffffffff)
                        while (true)
                            if (*(i_2 + 0x2c) == 3 && *(i_2 + 0x58) == x19 && *(i_2 + 0x5c) == 0x44f
                                    && *(i_2 + 0x60) == 0)
                                if (i_2 != 0)
                                    goto label_b1abb8_1
                                
                                break
                            
                            if (i_2 == 0)
                                i_2 = i_16
                            else
                                i_2 += 0x21d8
                            
                            if (i_2 u>= x9_34)
                                goto label_b1aa94
                            
                            while (zx.d(*(i_2 + 0x21d2)) == 0)
                                i_2 += 0x21d8
                                
                                if (i_2 u>= x9_34)
                                    goto label_b1aa94
                            
                            if (i_2 == 0xffffffff)
                                goto label_b1aa94
                    
                    break
                
                i_2 += 0x21d8
            while (i_2 u< x9_34)
        
    label_b1aa94:
        x0_3 = 0x44f
        goto label_b1ab98
    case 0xf
        uint64_t x9_35 = zx.q(*(gDomClient + 0x205e8))
        
        if (x9_35.d != 0)
            void* i_17 = *(gDomClient + 0x205e0)
            int64_t x9_36 = i_17 + x9_35 * 0x21d8
            i_2 = i_17
            
            do
                if (zx.d(*(i_2 + 0x21d2)) != 0)
                    if (i_2 != 0xffffffff)
                        while (true)
                            if (*(i_2 + 0x2c) == 3 && *(i_2 + 0x58) == x19 && *(i_2 + 0x5c) == 0x450
                                    && *(i_2 + 0x60) == 0)
                                if (i_2 != 0)
                                    goto label_b1abb8_1
                                
                                break
                            
                            if (i_2 == 0)
                                i_2 = i_17
                            else
                                i_2 += 0x21d8
                            
                            if (i_2 u>= x9_36)
                                goto label_b1ab14
                            
                            while (zx.d(*(i_2 + 0x21d2)) == 0)
                                i_2 += 0x21d8
                                
                                if (i_2 u>= x9_36)
                                    goto label_b1ab14
                            
                            if (i_2 == 0xffffffff)
                                goto label_b1ab14
                    
                    break
                
                i_2 += 0x21d8
            while (i_2 u< x9_36)
        
    label_b1ab14:
        x0_3 = 0x450
        goto label_b1ab98
