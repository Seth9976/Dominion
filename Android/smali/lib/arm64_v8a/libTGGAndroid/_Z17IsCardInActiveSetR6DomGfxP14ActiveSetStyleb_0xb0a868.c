// 函数: _Z17IsCardInActiveSetR6DomGfxP14ActiveSetStyleb
// 地址: 0xb0a868
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = 0

if (*(GetClient() + 0x10) == *(GetClient() + 0xc) && zx.d(*(gDomClient + 0x22134)) == 0
        && *(gDomClient + 0x207b4) == 0)
    if (*(gDomClient + 0x207a0) != LocalWho())
        return 0
    
    if ((TutorialCardIsClickable(arg1) & 1) == 0)
        return 0
    
    uint64_t x8_3 = zx.q(*(gDomClient + 0x20758))
    
    if ((x8_3.d u> 0x3b || (1 << x8_3 & 0x808008000000000) == 0) && x8_3.d != 0x7b)
        uint64_t i_15 = zx.q(*(arg1 + 0x1f78))
        
        if (i_15.d s>= 1)
            void* __offset(DomGfx, 0x520) x10_1 = arg1 + 0x520
            uint64_t i
            
            do
                int32_t x11_1 = *x10_1
                
                if (x11_1 != 0xa && x11_1 != 3)
                    return 0
                
                i = i_15
                i_15 -= 1
                x10_1 += 0xd8
            while (i != 1)
    
    int32_t x9_2 = *(arg1 + 0x2c)
    
    if ((arg3.d & 1) != 0)
        goto label_b0a970
    
    void* __offset(DomGfx, 0x2c) x21_1
    
    if (x9_2 == 0)
        if (*(arg1 + 0xa4) != 0x3eb)
            x9_2 = 0
        label_b0a970:
            int32_t x10_3
            
            if (x8_3.d != 0x33 && x9_2 == 0)
                int32_t x10_2 = *(arg1 + 0xa4)
                
                if (x10_2 - 0x3ef u< 2)
                    x10_3 = 0x3ee
                else
                    x10_3 = x10_2
            
            if (x8_3.d != 0x33 && x9_2 == 0
                    && *(gDomClient + zx.q(*(arg1 + 0x98)) * 0x68 + 0x2219c) != x10_3)
                return 0
            
            x21_1 = arg1 + 0x2c
            
            if (x9_2 != 0 || x8_3.d - 1 u> 1 || *(gDomClient + 0x22114) == *(gDomClient + 0x205c0))
                goto label_b0aa2c
            
            uint64_t x11_5 = zx.q(*(gDomClient + 0x205e8))
            
            if (x11_5.d == 0)
                goto label_b0abb4
            
            void* i_16 = *(gDomClient + 0x205e0)
            int64_t x11_6 = i_16 + x11_5 * 0x21d8
            void* i_1 = i_16
            
            while (zx.d(*(i_1 + 0x21d2)) == 0)
                i_1 += 0x21d8
                
                if (i_1 u>= x11_6)
                    goto label_b0aa2c
            
            if (i_1 == 0xffffffff)
                goto label_b0aa2c
            
            int32_t x13_8 = 0
            
            do
                if (*(i_1 + 0x2c) == 0 && *(i_1 + 0xa0) == *(arg1 + 0xa0) && *(i_1 + 0xa4) == 0x451
                        && *(i_1 + 0xc8) == 0)
                    x13_8 += 1
                
                if (i_1 == 0)
                    i_1 = i_16
                else
                    i_1 += 0x21d8
                
                if (i_1 u>= x11_6)
                    break
                
                while (zx.d(*(i_1 + 0x21d2)) == 0)
                    i_1 += 0x21d8
                    
                    if (i_1 u>= x11_6)
                        goto label_b0adbc
            while (i_1 != 0xffffffff)
            
        label_b0adbc:
            
            if (x13_8 s<= 0)
                goto label_b0aa2c
            
            return 0
        
        int32_t i_17 = *(gDomClient + 0x38)
        uint64_t x11_10 = zx.q(*(gDomClient + 0x205e8))
        int32_t i_2
        
        i_2 = i_17 == 0xffffffff ? 0 : i_17
        
        if (x11_10.d == 0)
            return 0
        
        void* x10_10 = *(gDomClient + 0x205e0)
        int64_t x11_11 = x10_10 + x11_10 * 0x21d8
        void* x12_2 = x10_10
        
        while (zx.d(*(x12_2 + 0x21d2)) == 0)
            x12_2 += 0x21d8
            
            if (x12_2 u>= x11_11)
                return 0
        
        if (x12_2 == 0xffffffff)
            return 0
        
        while (*(x12_2 + 0x2c) != 3 || *(x12_2 + 0x58) != i_2 || *(x12_2 + 0x5c) != 0x3eb
                || *(x12_2 + 0x60) != 0)
            if (x12_2 == 0)
                x12_2 = x10_10
            else
                x12_2 += 0x21d8
            
            if (x12_2 u>= x11_11)
                return 0
            
            while (zx.d(*(x12_2 + 0x21d2)) == 0)
                x12_2 += 0x21d8
                
                if (x12_2 u>= x11_11)
                    return 0
            
            if (x12_2 == 0xffffffff)
                return 0
        
        if (x12_2 == 0)
            return 0
        
        x9_2 = 0
        result = 0
        
        if (*(x12_2 + 0x21d0) == *(gDomClient + 0x1f8e4))
            goto label_b0a970
    else
        x21_1 = arg1 + 0x2c
    label_b0aa2c:
        int32_t x25_1
        
        if (x8_3.d - 0x4d u> 1)
        label_b0ab14:
            x25_1 = *(gDomClient + 0x2074c)
            
            if (x8_3.d == 0x7b && x25_1 == 3)
                if (arg2 != 0)
                    *arg2 = 0x17
                
                return zx.q(*(arg1 + 0x98) == *(gDomClient + 0x207c0) ? 1 : 0)
        else
            uint64_t x10_6 = zx.q(*(gDomClient + 0x207bc))
            
            if (x10_6.d s> 0)
                int32_t i_3 = *(arg1 + 0x98)
                int64_t x13_2
                
                if (*(gDomClient + 0x207c0) != i_3)
                    int64_t x14_1 = 0
                    
                    do
                        x13_2 = x14_1
                        
                        if (x10_6 - 1 == x14_1)
                            break
                        
                        x14_1 = x13_2 + 1
                    while (*(gDomClient + (x13_2 << 2) + 0x207c4) != i_3)
                
                if (*(gDomClient + 0x207c0) != i_3 && x13_2 + 1 u>= x10_6)
                    goto label_b0ab14
                
                uint64_t x8_4 = zx.q(*(gDomClient + 0x2056c))
                int64_t x12_1
                
                if (x8_4.d s>= 1 && *(gDomClient + 0x1f8ec) != i_3)
                    int64_t x13_3 = 0
                    
                    do
                        x12_1 = x13_3
                        
                        if (x8_4 - 1 == x13_3)
                            break
                        
                        x13_3 = x12_1 + 1
                    while (*(gDomClient + (x12_1 << 2) + 0x1f8f0) != i_3)
                
                if (x8_4.d s>= 1 && (*(gDomClient + 0x1f8ec) == i_3 || x12_1 + 1 u< x8_4))
                    if (arg2 == 0)
                        return 1
                    
                    *arg2 = 0x18
                    return 1
                
                if (arg2 != 0)
                    *arg2 = 0x17
                    x8_4 = zx.q(*(gDomClient + 0x2056c))
                
                if (x8_4.d == 2)
                    return 0
                
                return zx.q(x8_4.d != 1 ? 1 : 0) | zx.q(*(gDomClient + 0x20758) != 0x4e ? 1 : 0)
            
        label_b0abb4:
            x25_1 = *(gDomClient + 0x2074c)
        
        if (*(gDomClient + 0x207a0) != LocalWho())
            return 0
        
        int32_t x8_7 = *(gDomClient + 0x20788)
        int32_t x9_13
        int32_t x10_13
        
        if (x8_7 == 0)
        label_b0ae0c:
            result = 0
            
            if (x25_1 != 3 && x25_1 != 8)
                int32_t i_4 = *(arg1 + 0x98)
                uint64_t x8_11 = zx.q(*(gDomClient + 0x2056c))
                int32_t x24_1
                
                if (x8_11.d s< 1)
                    x24_1 = 0
                else if (*(gDomClient + 0x1f8ec) != i_4)
                    int64_t x13_9 = 0
                    int64_t x12_3
                    
                    do
                        x12_3 = x13_9
                        
                        if (x8_11 - 1 == x13_9)
                            break
                        
                        x13_9 = x12_3 + 1
                    while (*(gDomClient + (x12_3 << 2) + 0x1f8f0) != i_4)
                    
                    x24_1 = x12_3 + 1 u< x8_11 ? 1 : 0
                else
                    x24_1 = 1
                
                int32_t x0_9 = IsPlayEffect(gDomClient + 0x20748, false)
                uint32_t x8_14
                
                if ((x0_9 & 1) != 0 && (*x21_1 != 3 || *(arg1 + 0x30) != 0))
                    x8_14 = zx.d(*(CardDef(gDomClient + 0x20728, arg1) + 0xcb))
                
                int32_t x9_15
                
                if ((x0_9 & 1) == 0 || (*x21_1 == 3 && *(arg1 + 0x30) == 0) || (x8_14 & 0x10) == 0
                    || *(gDomClient + 0x2074c) != 1)
                label_b0afd8:
                    x9_15 = *(gDomClient + 0x20758)
                    
                    if ((x9_15 & 0xfffffffd) != 1)
                        goto label_b0aff0
                    
                label_b0b000:
                    int32_t x25_2
                    
                    if (arg2 == 0)
                        x25_2 = 1
                    else
                        int32_t x8_23 = *(gDomClient + 0x20758)
                        int32_t x8_24
                        
                        if (x8_23 == 0x133 || x8_23 == 0x36)
                            x25_2 = 0
                            
                            x8_24 = x24_1 != 0 ? 0x18 : 0x17
                            
                            *arg2 = x8_24
                        else if (x25_1 != 1)
                            x25_2 = 0
                            *arg2 = 0x1f
                        else
                            uint64_t x9_17 = zx.q(x8_23 - 1)
                            
                            if (x9_17.d u> 0x3a)
                                if (x8_23 != 0x7b)
                                    if (x8_23 != 0xfd)
                                        goto label_b0b480
                                    
                                    goto label_b0b33c
                                
                            label_b0b360:
                                x25_2 = 0
                                *arg2 = 0xe
                            else
                                switch (x9_17)
                                    case 0
                                        uint64_t x8_30 = zx.q(*(gDomClient + 0x20770))
                                        
                                        if (x8_30.d s< 1)
                                            goto label_b0b354
                                        
                                        int32_t* x9_18 = *(gDomClient + 0x20760)
                                        int32_t i_5 = *(arg1 + 0x98)
                                        int64_t x11_18
                                        
                                        if (*x9_18 != i_5)
                                            int64_t x12_5 = 1
                                            
                                            do
                                                x11_18 = x12_5
                                                
                                                if (x8_30 == x12_5)
                                                    break
                                                
                                                x12_5 = x11_18 + 1
                                            while (x9_18[x11_18] != i_5)
                                        
                                        if (*x9_18 != i_5 && x11_18 u>= x8_30)
                                            goto label_b0b354
                                        
                                        x25_2 = 0
                                        *arg2 = 3
                                    case 1
                                    label_b0b33c:
                                        int32_t x8_37 = *(arg1 + 0xa4)
                                        
                                        if (x8_37 == 0x3ee || x8_37 - 7 u<= 0x41)
                                            goto label_b0b37c
                                        
                                        goto label_b0b354
                                    case 2
                                    label_b0b37c:
                                        x25_2 = 0
                                        
                                        if ((IsCardInNeedsCoffers(gDomClient + 0x20748, 
                                                zx.q(*(arg1 + 0x98))) & 1) == 0)
                                            x8_24 = 5
                                        else
                                            x8_24 = 6
                                        
                                        *arg2 = x8_24
                                    case 3, 4, 5, 6, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 
                                        0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 
                                        0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 
                                        0x25, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 
                                        0x30, 0x31, 0x32, 0x33, 0x34, 0x36, 0x37, 0x38, 0x39
                                    label_b0b480:
                                        *arg2 = *(gDomClient + 0x20750)
                                        
                                        if (*(gDomClient + 0x20758) == 0x7e && (
                                                IsCardInNeedsCoffers(gDomClient + 0x20748, 
                                                zx.q(*(arg1 + 0x98))) & 1) != 0)
                                            *arg2 = 6
                                        
                                        if (x24_1 == 0)
                                            x25_2 = 0
                                        else
                                            uint64_t x8_42 = zx.q(*arg2 - 7)
                                            
                                            if (x8_42.d u> 0x16)
                                                pthread_kill(pthread_self(), 6)
                                                return CalcCardSize(XNoReturn()) __tailcall
                                            
                                            switch (x8_42)
                                                case 0
                                                    x25_2 = 0
                                                    *arg2 = 8
                                                case 1, 3, 6, 8, 0xa, 0xc, 0xe, 0xf, 0x11, 0x13, 
                                                        0x15
                                                    pthread_kill(pthread_self(), 6)
                                                    return CalcCardSize(XNoReturn()) __tailcall
                                                case 2
                                                    x25_2 = 0
                                                    *arg2 = 0xa
                                                case 4, 0x10
                                                    x25_2 = 0
                                                    *arg2 = 0x18
                                                case 5
                                                    x25_2 = 0
                                                    *arg2 = 0xd
                                                case 7
                                                    x25_2 = 0
                                                    *arg2 = 0xf
                                                case 9
                                                    x25_2 = 0
                                                    *arg2 = 0x11
                                                case 0xb
                                                    x25_2 = 0
                                                    *arg2 = 0x13
                                                case 0xd
                                                    x25_2 = 0
                                                    *arg2 = 0x15
                                                case 0x12
                                                    x25_2 = 0
                                                    *arg2 = 0x1a
                                                case 0x14
                                                    x25_2 = 0
                                                    *arg2 = 0x1c
                                                case 0x16
                                                    x25_2 = 0
                                                    *arg2 = 0x1e
                                    case 7
                                    label_b0b354:
                                        x25_2 = 0
                                        *arg2 = 1
                                    case 0x26, 0x3a
                                        goto label_b0b360
                    
                    int32_t x8_25 = *(gDomClient + 0x38)
                    int32_t i_9 = *(gDomClient + 0x2079c)
                    int32_t x8_26
                    
                    x8_26 = x8_25 == 0xffffffff ? 0 : x8_25
                    
                    result = 0
                    
                    if (i_9 == x8_26)
                        int32_t x8_27 = *(gDomClient + 0x1f8e0)
                        
                        if (x8_27 != 0)
                            return zx.q(*(*(gDomClient + 0x205e0) + zx.q(x8_27.w) * 0x21d8 + 0x98)
                                == *(arg1 + 0x98) ? 1 : 0)
                        
                        int32_t x8_31 = *(gDomClient + 0x2074c)
                        
                        if (x8_31 == 5)
                            return 0
                        
                        if (x8_31 == 7)
                            DomGfx& x8_32 = arg1
                            int32_t i_6
                            int32_t x21_3
                            
                            for (i_6 = *(x8_32 + 0x2c); i_6 == 3; i_6 = *(x8_32 + 0x2c))
                                x21_3 = *(x8_32 + 0x30)
                                
                                if (x21_3 == 0x70d)
                                    goto label_b0b5f0
                                
                                if (x21_3 == 0x718)
                                    goto label_b0b5f0
                                
                                int32_t x8_33 = *(x8_32 + 0x70)
                                
                                if (x8_33 == 0)
                                    goto label_b0b5f0
                                
                                x8_32 = *(gDomClient + 0x205e0) + zx.q(x8_33.w) * 0x21d8
                            
                            if (i_6 == 5)
                                x21_3 = *(x8_32 + 0x204)
                            else if (i_6 == 1)
                                x21_3 = *(x8_32 + 0x170)
                            else
                                if (i_6 != 0)
                                    pthread_kill(pthread_self(), 6)
                                    return CalcCardSize(XNoReturn()) __tailcall
                                
                                x21_3 = CardWhat(gDomClient + 0x20728, zx.q(*(x8_32 + 0x98)))
                            
                        label_b0b5f0:
                            uint64_t x1_10
                            
                            if (*(GetClient() + 0x5068) == 0)
                                x1_10 = 0x18
                            else
                                x1_10 = zx.q(*(ActiveGame() + 0x30))
                            
                            if ((IsLandscape(zx.q(x21_3), x1_10) & 1) != 0)
                                return 0
                            
                            uint64_t x1_11
                            
                            if (*(GetClient() + 0x5068) == 0)
                                x1_11 = 0x18
                            else
                                x1_11 = zx.q(*(ActiveGame() + 0x30))
                            
                            if ((zx.d(*(DomDefGet(zx.q(x21_3), x1_11) + 0xcb)) & 3) != 0)
                                return 0
                            
                            uint64_t x1_12
                            
                            if (*(GetClient() + 0x5068) == 0)
                                x1_12 = 0x18
                            else
                                x1_12 = zx.q(*(ActiveGame() + 0x30))
                            
                            if ((zx.d(*(DomDefGet(zx.q(x21_3), x1_12) + 0xce)) & 0x10) != 0)
                                return 0
                            
                            if ((x25_2 & 1) == 0)
                                *arg2 = 0x20
                            
                            if (*(gDomClient + 0x20758) != 0x47 || *(arg1 + 0xa4) != 0x3ea)
                                return 1
                            
                            return 0
                        
                        int32_t x10_17 = *(gDomClient + 0x20758)
                        
                        if (x10_17 == 0x24)
                            return 0
                        
                        uint64_t x8_35
                        int64_t x12_14
                        
                        if (x10_17 == 0x133)
                            if (*(arg1 + 0xa4) == 0x3ea && *(arg1 + 0xa0) == i_9)
                                x8_35 = zx.q(*(gDomClient + 0x2056c))
                                
                                if (x8_35.d s< 3)
                                    return 1
                                
                                int32_t i_7 = *(arg1 + 0x98)
                                
                                if (*(gDomClient + 0x1f8ec) == i_7)
                                    return 1
                                
                                int64_t x13_15 = 0
                                
                                do
                                    x12_14 = x13_15
                                    
                                    if (x8_35 - 1 == x13_15)
                                        break
                                    
                                    x13_15 = x12_14 + 1
                                while (*(gDomClient + (x12_14 << 2) + 0x1f8f0) != i_7)
                                
                                return zx.q(x12_14 + 1 u< x8_35 ? 1 : 0)
                        else if (x10_17 == 0x36 && *(arg1 + 0xa4) == 0x3ea && *(arg1 + 0xa0) == i_9)
                            x8_35 = zx.q(*(gDomClient + 0x2056c))
                            
                            if (x8_35.d s< 2)
                                return 1
                            
                            int32_t i_8 = *(arg1 + 0x98)
                            
                            if (*(gDomClient + 0x1f8ec) == i_8)
                                return 1
                            
                            int64_t x13_12 = 0
                            
                            do
                                x12_14 = x13_12
                                
                                if (x8_35 - 1 == x13_12)
                                    break
                                
                                x13_12 = x12_14 + 1
                            while (*(gDomClient + (x12_14 << 2) + 0x1f8f0) != i_8)
                            
                            return zx.q(x12_14 + 1 u< x8_35 ? 1 : 0)
                        
                        if (x8_31 == 4)
                            return 0
                        
                        if (*(arg1 + 0xa4) == 0x3ec)
                            uint64_t x12_8 = zx.q(*(gDomClient + 0x205e8))
                            
                            if (x12_8.d == 0)
                                return 0
                            
                            void* x11_26 = *(gDomClient + 0x205e0)
                            int64_t x12_9 = x11_26 + x12_8 * 0x21d8
                            void* x13_18 = x11_26
                            
                            while (zx.d(*(x13_18 + 0x21d2)) == 0)
                                x13_18 += 0x21d8
                                
                                if (x13_18 u>= x12_9)
                                    return 0
                            
                            if (x13_18 == 0xffffffff)
                                return 0
                            
                            while (*(x13_18 + 0x2c) != 3 || *(x13_18 + 0x58) != i_9
                                    || *(x13_18 + 0x5c) != 0x3ec || *(x13_18 + 0x60) != 0)
                                if (x13_18 == 0)
                                    x13_18 = x11_26
                                else
                                    x13_18 += 0x21d8
                                
                                if (x13_18 u>= x12_9)
                                    return 0
                                
                                while (zx.d(*(x13_18 + 0x21d2)) == 0)
                                    x13_18 += 0x21d8
                                    
                                    if (x13_18 u>= x12_9)
                                        return 0
                                
                                if (x13_18 == 0xffffffff)
                                    return 0
                            
                            if (x13_18 == 0 || *(x13_18 + 0x21d0) != *(gDomClient + 0x1f8e4))
                                return 0
                        
                        uint64_t x9_37 = zx.q(*(gDomClient + 0x2056c))
                        
                        if (x10_17 == 0xd0 && x9_37.d s>= 1)
                            int32_t x0_53 =
                                CardWhat(gDomClient + 0x20728, zx.q(*(gDomClient + 0x1f8ec)))
                            uint64_t x8_61 = zx.q(*(gDomClient + 0x207bc))
                            
                            if (x8_61.d s< 1)
                                return 0
                            
                            uint64_t x1_18 = zx.q(*(arg1 + 0x98))
                            int64_t x11_34
                            
                            if (*(gDomClient + 0x207c0) != x1_18.d)
                                int64_t x12_10 = 0
                                
                                do
                                    x11_34 = x12_10
                                    
                                    if (x8_61 - 1 == x12_10)
                                        break
                                    
                                    x12_10 = x11_34 + 1
                                while (*(gDomClient + (x11_34 << 2) + 0x207c4) != x1_18.d)
                            
                            if (*(gDomClient + 0x207c0) != x1_18.d && x11_34 + 1 u>= x8_61)
                                return 0
                            
                            if (x0_53 != CardWhat(gDomClient + 0x20728, x1_18))
                                return 0
                            
                            return 1
                        
                        if (x8_31 == 1 && *(gDomClient + 0x207ac) == x9_37.d)
                            if (x9_37.d s< 1)
                                return 0
                            
                            int32_t i_10 = *(arg1 + 0x98)
                            
                            if (*(gDomClient + 0x1f8ec) != i_10)
                                int64_t x13_19 = 0
                                int64_t x12_13
                                
                                do
                                    x12_13 = x13_19
                                    
                                    if (x9_37 - 1 == x13_19)
                                        break
                                    
                                    x13_19 = x12_13 + 1
                                while (*(gDomClient + (x12_13 << 2) + 0x1f8f0) != i_10)
                                
                                return zx.q(x12_13 + 1 u< x9_37 ? 1 : 0)
                            
                            return 1
                        
                        if (x8_31 == 6)
                            return 0
                        
                        x8_35 = zx.q(*(gDomClient + 0x207bc))
                        
                        if (x8_35.d s< 1)
                            return 0
                        
                        int32_t i_11 = *(arg1 + 0x98)
                        
                        if (*(gDomClient + 0x207c0) == i_11)
                            return 1
                        
                        int64_t x13_22 = 0
                        
                        do
                            x12_14 = x13_22
                            
                            if (x8_35 - 1 == x13_22)
                                break
                            
                            x13_22 = x12_14 + 1
                        while (*(gDomClient + (x12_14 << 2) + 0x207c4) != i_11)
                        
                        return zx.q(x12_14 + 1 u< x8_35 ? 1 : 0)
                else
                    if (*(gDomClient + 0x20758) != 2)
                    label_b0af9c:
                        
                        if (arg2 == 0)
                            return 1
                        
                        *arg2 = 0x22
                        x9_13 = *(gDomClient + 0x20570)
                        x10_13 = *(arg1 + 0x98)
                        goto label_b0afbc
                    
                    if (*(gDomClient + 0x207bc) s>= 1)
                        int64_t x26_1 = 0
                        
                        while ((CardWhere(gDomClient + 0x20728, 
                                zx.q(*(gDomClient + 0x20728 + (x26_1 << 2) + 0x98))) & 0xfffffffe) != 0x3ea
                                || (CardIs(gDomClient + 0x20728, 
                                zx.q(*(gDomClient + 0x20728 + (x26_1 << 2) + 0x98)), 4) & 1) == 0)
                            x26_1 += 1
                            
                            if (x26_1 s>= sx.q(*(gDomClient + 0x207bc)))
                                goto label_b0afd8
                        
                        goto label_b0af9c
                    
                    x9_15 = 2
                label_b0aff0:
                    uint64_t x8_43 = zx.q(*(gDomClient + 0x20770))
                    
                    if (x9_15 == 2 && x8_43.d == 0)
                        goto label_b0b000
                    
                    uint64_t x10_15 = zx.q(x9_15 - 0xfd)
                    
                    if (x9_15 == 0x7e || ((x9_15 == 0xfd ? 1 : 0) & (x8_43.d == 0 ? 1 : 0) & 1) != 0
                            || x8_43.d == 0 || *(gDomClient + 0x20788) != 0)
                        goto label_b0b000
                    
                    if (x9_15 s<= 0xd1)
                        if (x9_15 s> 0x8c)
                            if (x9_15 == 0x8d || x9_15 == 0x96)
                                goto label_b0b588
                            
                            goto label_b0b66c
                        
                        if (x9_15 == 2)
                            goto label_b0b2e8
                        
                        if (x9_15 == 0x34)
                            goto label_b0b4f0
                        
                        goto label_b0b66c
                    
                    int32_t x8_5
                    
                    if (x10_15.d u> 0x17)
                        if (x9_15 != 0x12f)
                            if (x9_15 != 0xd2)
                                goto label_b0b66c
                            
                            if (x8_43.d s< 1)
                                return 0
                            
                            int32_t* x9_22 = *(gDomClient + 0x20760)
                            
                            while (*x9_22 != *(arg1 + 0x98))
                                uint64_t temp7_1 = x8_43
                                x8_43 -= 1
                                x9_22 = &x9_22[1]
                                
                                if (temp7_1 == 1)
                                    return 0
                            
                            if (arg2 == 0)
                                return 1
                            
                            *arg2 = 0x1b
                            return 1
                        
                    label_b0b588:
                        result = 0
                        
                        if (((*(gDomClient + 0x2056c) s>= *(gDomClient + 0x207ac) ? 1 : 0)
                                & not.d(x24_1) & 1) == 0 && x8_43.d s>= 1)
                            int32_t* x9_26 = *(gDomClient + 0x20760)
                            uint64_t x1_9 = zx.q(*(arg1 + 0x98))
                            
                            while (*x9_26 != x1_9.d)
                                uint64_t temp6_1 = x8_43
                                x8_43 -= 1
                                x9_26 = &x9_26[1]
                                
                                if (temp6_1 == 1)
                                    return 0
                            
                            int32_t x0_37 = CardWhat(gDomClient + 0x20728, x1_9)
                            int32_t x8_48 = *(gDomClient + 0x2056c)
                            
                            if (x8_48 s>= 1)
                                int64_t i_12 = 0
                                
                                do
                                    uint64_t x1_13 = zx.q(*(gDomClient + (i_12 << 2) + 0x1f8ec))
                                    
                                    if (x1_13.d != *(arg1 + 0x98))
                                        if (CardWhat(gDomClient + 0x20728, x1_13) == x0_37)
                                            return 0
                                        
                                        x8_48 = *(gDomClient + 0x2056c)
                                    
                                    i_12 += 1
                                while (i_12 s< sx.q(x8_48))
                            
                            if (arg2 == 0)
                                return 1
                            
                            if (*(gDomClient + 0x20758) != 0x8d)
                                if (x24_1 != 0)
                                    x8_5 = 0xa
                                else
                                    x8_5 = 9
                            else if (x24_1 != 0)
                                x8_5 = 8
                            else
                                x8_5 = 7
                            
                            *arg2 = x8_5
                            return 1
                    else
                        switch (x10_15)
                            case 0
                            label_b0b2e8:
                                int32_t x0_18 = LocalWho()
                                void* x0_21 = GameGetPlayer(ActiveGame() + 8, zx.q(x0_18))
                                uint64_t x8_36 = zx.q(*(x0_21 + 0x228))
                                
                                if (x8_36.d s< 1)
                                label_b0b7f8:
                                    int32_t x0_42 = LocalWho()
                                    void* x0_45 = GameGetPlayer(ActiveGame() + 8, zx.q(x0_42))
                                    uint64_t x8_53 = zx.q(*(x0_45 + 0x228))
                                    
                                    if (x8_53.d s< 1)
                                        goto label_b0b000
                                    
                                    void* x9_32 = x0_45 + 0x2c
                                    
                                    while (*(x9_32 - 4) != 0x16)
                                        uint64_t temp8_1 = x8_53
                                        x8_53 -= 1
                                        x9_32 += 8
                                        
                                        if (temp8_1 == 1)
                                            goto label_b0b000
                                    
                                    if (*x9_32 != 7)
                                        goto label_b0b000
                                else
                                    void* x9_20 = x0_21 + 0x2c
                                    
                                    while (*(x9_20 - 4) != 0x16)
                                        uint64_t temp1_1 = x8_36
                                        x8_36 -= 1
                                        x9_20 += 8
                                        
                                        if (temp1_1 == 1)
                                            goto label_b0b7f8
                                    
                                    if (*x9_20 != 4)
                                        goto label_b0b7f8
                                
                                uint64_t x8_57 = zx.q(*(gDomClient + 0x20770))
                                
                                if (x8_57.d s< 1)
                                    return 0
                                
                                uint64_t x1_16 = zx.q(*(arg1 + 0x98))
                                int16_t* x9_35 = *(gDomClient + 0x20760)
                                
                                while (x1_16.d != zx.d(*x9_35))
                                    uint64_t temp9_1 = x8_57
                                    x8_57 -= 1
                                    x9_35 = &x9_35[2]
                                    
                                    if (temp9_1 == 1)
                                        return 0
                                
                                if (arg2 == 0)
                                    return 1
                                
                                int32_t x8_59 = *(arg1 + 0xa4)
                                
                                if (x8_59 == 0x3ee || x8_59 - 7 u<= 0x41)
                                    if ((IsCardInNeedsCoffers(gDomClient + 0x20748, x1_16) & 1)
                                            == 0)
                                        x8_5 = 5
                                    else
                                        x8_5 = 6
                                    
                                    *arg2 = x8_5
                                    return 1
                                
                                result = 1
                                *arg2 = 1
                            case 1, 2, 3, 5, 6, 7, 8, 9, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 
                                0x13, 0x14, 0x15, 0x16
                            label_b0b66c:
                                
                                if (x8_43.d s< 1)
                                    return 0
                                
                                int32_t* x9_27 = *(gDomClient + 0x20760)
                                
                                while (*x9_27 != *(arg1 + 0x98))
                                    uint64_t temp3_1 = x8_43
                                    x8_43 -= 1
                                    x9_27 = &x9_27[1]
                                    
                                    if (temp3_1 == 1)
                                        return 0
                                
                                if (arg2 == 0)
                                    return 1
                                
                                if (*(arg1 + 0xa4) == 2)
                                    goto label_b0ba0c
                                
                                *arg2 = 9
                                return 1
                            case 4
                            label_b0b4f0:
                                
                                if (x8_43.d s< 1)
                                    return 0
                                
                                int32_t* x9_21 = *(gDomClient + 0x20760)
                                uint64_t x1_8 = zx.q(*(arg1 + 0x98))
                                
                                while (*x9_21 != x1_8.d)
                                    uint64_t temp2_1 = x8_43
                                    x8_43 -= 1
                                    x9_21 = &x9_21[1]
                                    
                                    if (temp2_1 == 1)
                                        return 0
                                
                                int32_t x0_47 = CardWhat(gDomClient + 0x20728, x1_8)
                                int32_t x8_54 = *(gDomClient + 0x2056c)
                                
                                if (x8_54 s>= 1)
                                    int64_t i_13 = 0
                                    
                                    do
                                        uint64_t x1_15 = zx.q(*(gDomClient + (i_13 << 2) + 0x1f8ec))
                                        
                                        if (x1_15.d != *(arg1 + 0x98))
                                            if (CardWhat(gDomClient + 0x20728, x1_15) == x0_47)
                                                return 0
                                            
                                            x8_54 = *(gDomClient + 0x2056c)
                                        
                                        i_13 += 1
                                    while (i_13 s< sx.q(x8_54))
                                
                                if (arg2 == 0)
                                    return 1
                                
                                *arg2 = 0x1f
                                return 1
                            case 0xa
                                if (x8_43.d s< 1)
                                    return 0
                                
                                int32_t* x9_28 = *(gDomClient + 0x20760)
                                
                                while (*x9_28 != *(arg1 + 0x98))
                                    uint64_t temp4_1 = x8_43
                                    x8_43 -= 1
                                    x9_28 = &x9_28[1]
                                    
                                    if (temp4_1 == 1)
                                        return 0
                                
                                if (arg2 == 0)
                                    return 1
                                
                            label_b0ba0c:
                                *arg2 = 7
                                return 1
                            case 0x17
                                if (x8_43.d s< 1)
                                    return 0
                                
                                int32_t* x9_29 = *(gDomClient + 0x20760)
                                
                                while (*x9_29 != *(arg1 + 0x98))
                                    uint64_t temp5_1 = x8_43
                                    x8_43 -= 1
                                    x9_29 = &x9_29[1]
                                    
                                    if (temp5_1 == 1)
                                        return 0
                                
                                goto label_b0b714
        else
            int32_t x9_10 = *x21_1
            
            if (x9_10 != 0)
            label_b0abe8:
                
                if (x8_7 != 1 || (x9_10 == 3 && *(arg1 + 0x30) == 0))
                    goto label_b0ae0c
                
                goto label_b0ae00
            
            uint64_t x10_11 = zx.q(*(gDomClient + 0x20770))
            
            if (x10_11.d s< 1)
                if (x8_7 != 1)
                    goto label_b0ae0c
                
            label_b0ae00:
                
                if ((zx.d(*(CardDef(gDomClient + 0x20728, arg1) + 0xcb)) & 0x10) == 0)
                    goto label_b0ae0c
                
                if (arg2 == 0)
                    return 1
                
                *arg2 = 0x22
                x9_13 = *(gDomClient + 0x20570)
                x10_13 = *(arg1 + 0x98)
            label_b0afbc:
                
                if (x9_13 == x10_13)
                    *arg2 = 2
                    return 1
                
                *arg2 = 0x22
                return 1
            
            int32_t* x11_12 = *(gDomClient + 0x20760)
            int32_t i_14 = *(arg1 + 0x98)
            int64_t x13_7
            
            if (*x11_12 != i_14)
                int64_t x14_4 = 1
                
                do
                    x13_7 = x14_4
                    
                    if (x10_11 == x14_4)
                        break
                    
                    x14_4 = x13_7 + 1
                while (x11_12[x13_7] != i_14)
            
            if (*x11_12 != i_14 && x13_7 u>= x10_11)
                goto label_b0abe8
            
            if (x8_7 == 2)
                if (arg2 == 0)
                    return 1
                
                *arg2 = 3
                return 1
            
        label_b0b714:
            result = 1
            
            if (arg2 != 0)
                *arg2 = 1

return result
