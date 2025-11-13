// 函数: _Z12SubmitAction9PlayerWhoR8DomYield
// 地址: 0xb03414
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 0x10)
int32_t x20 = arg1

if (x8 == 1 || x8 == 8)
label_b03478:
    *(gDomClient + 0x1f8e8) = 0
    *(gDomClient + 0x1f8ea) = 0
    x8 = *(arg2 + 0x10)
else if (x8 == 2)
    if (*(arg2 + 0x74) != 1)
        goto label_b03478
    
    if ((CardIs(gDomClient + 0x20728, zx.q(*(arg2 + 0x78)), 0xe11) & 1) == 0)
        goto label_b03478
    
    *(gDomClient + 0x1f8ea) = 0
    x8 = *(arg2 + 0x10)

if (x8 s<= 0xb3)
    uint64_t x9_1 = zx.q(x8 - 0x48)
    
    if ((x9_1.d u<= 0x30 && (1 << x9_1 & 0x1080108000001) != 0) || x8 == 0x1e)
        goto label_b034c0
else if (x8 == 0x114 || x8 == 0xb4)
label_b034c0:
    int32_t x8_2 = *(gDomClient + 0x38)
    uint64_t x10_1 = zx.q(*(gDomClient + 0x205e8))
    int32_t x8_3
    
    x8_3 = x8_2 == 0xffffffff ? 0 : x8_2
    
    void* i_3
    int64_t x10_2
    void* i
    
    if (x10_1.d != 0)
        i_3 = *(gDomClient + 0x205e0)
        x10_2 = i_3 + x10_1 * 0x21d8
        i = i_3
        
        while (zx.d(*(i + 0x21d2)) == 0)
            i += 0x21d8
            
            if (i u>= x10_2)
                goto label_b03588
    
    void* i_2
    
    if (x10_1.d == 0 || i == 0xffffffff)
    label_b03588:
        i_2 = nullptr
    else
        do
            if (*(i + 0x2c) == 3 && *(i + 0x58) == x8_3 && *(i + 0x5c) == 0x3ec && *(i + 0x60) == 0)
                i_2 = i
                break
            
            if (i == 0)
                i = i_3
            else
                i += 0x21d8
            
            if (i u>= x10_2)
                goto label_b03588
            
            while (zx.d(*(i + 0x21d2)) == 0)
                i += 0x21d8
                
                if (i u>= x10_2)
                    goto label_b03588
            
            i_2 = nullptr
        while (i != 0xffffffff)
    
    DomMinimizePile(i_2)
    x8 = *(arg2 + 0x10)

if (x8 - 0x33 u<= 1)
    int32_t x8_4 = *(gDomClient + 0x38)
    uint64_t x10_3 = zx.q(*(gDomClient + 0x205e8))
    int32_t x8_5
    
    x8_5 = x8_4 == 0xffffffff ? 0 : x8_4
    
    void* x9_6
    int64_t x10_4
    void* x11_1
    
    if (x10_3.d != 0)
        x9_6 = *(gDomClient + 0x205e0)
        x10_4 = x9_6 + x10_3 * 0x21d8
        x11_1 = x9_6
        
        while (zx.d(*(x11_1 + 0x21d2)) == 0)
            x11_1 += 0x21d8
            
            if (x11_1 u>= x10_4)
                goto label_b036d8
    
    if (x10_3.d == 0 || x11_1 == 0xffffffff)
    label_b036d8:
        DomMinimizePile(nullptr)
        x8 = *(arg2 + 0x10)
        
        if (x8 == 0x101)
            goto label_b03600
        
        goto label_b036e8
    
    while (true)
        if (*(x11_1 + 0x2c) == 3 && *(x11_1 + 0x58) == x8_5 && *(x11_1 + 0x5c) == 0x3eb
                && *(x11_1 + 0x60) == 0)
            DomMinimizePile(x11_1)
            x8 = *(arg2 + 0x10)
            
            if (x8 != 0x101)
                break
            
            goto label_b03600
        
        if (x11_1 == 0)
            x11_1 = x9_6
        else
            x11_1 += 0x21d8
        
        if (x11_1 u>= x10_4)
            goto label_b036d8
        
        while (zx.d(*(x11_1 + 0x21d2)) == 0)
            x11_1 += 0x21d8
            
            if (x11_1 u>= x10_4)
                goto label_b036d8
        
        if (x11_1 == 0xffffffff)
            goto label_b036d8
    
    goto label_b036e8

if (x8 != 0x101)
label_b036e8:
    
    if (x8 s<= 0x6e)
    label_b036f0:
        
        if (x8 == 0x2c || x8 == 0x2e)
            goto label_b037b4
        
        goto label_b037e8
else
label_b03600:
    uint64_t x9_7 = zx.q(*(gDomClient + 0x205e8))
    void* x8_7
    int64_t x9_8
    void* x10_5
    
    if (x9_7.d != 0)
        x8_7 = *(gDomClient + 0x205e0)
        x9_8 = x8_7 + x9_7 * 0x21d8
        x10_5 = x8_7
        
        while (zx.d(*(x10_5 + 0x21d2)) == 0)
            x10_5 += 0x21d8
            
            if (x10_5 u>= x9_8)
                goto label_b03788
    
    if (x9_7.d != 0 && x10_5 != 0xffffffff)
        while (true)
            if (*(x10_5 + 0x2c) == 3 && *(x10_5 + 0x58) == x20 && *(x10_5 + 0x5c) == 0x44e
                    && *(x10_5 + 0x60) == 0)
                DomMinimizePile(x10_5)
                x8 = *(arg2 + 0x10)
                
                if (x8 s<= 0x6e)
                    break
                
                goto label_b03798
            
            if (x10_5 == 0)
                x10_5 = x8_7
            else
                x10_5 += 0x21d8
            
            if (x10_5 u>= x9_8)
                goto label_b03788
            
            while (zx.d(*(x10_5 + 0x21d2)) == 0)
                x10_5 += 0x21d8
                
                if (x10_5 u>= x9_8)
                    goto label_b03788
            
            if (x10_5 == 0xffffffff)
                goto label_b03788
        
        goto label_b036f0
    
label_b03788:
    DomMinimizePile(nullptr)
    x8 = *(arg2 + 0x10)
    
    if (x8 s<= 0x6e)
        goto label_b036f0

label_b03798:

if (x8 == 0x10a || x8 == 0x6f)
label_b037b4:
    uint64_t x9_9 = zx.q(*(gDomClient + 0x205e8))
    void* x8_9
    int64_t x9_10
    void* x10_6
    
    if (x9_9.d != 0)
        x8_9 = *(gDomClient + 0x205e0)
        x9_10 = x8_9 + x9_9 * 0x21d8
        x10_6 = x8_9
        
        while (zx.d(*(x10_6 + 0x21d2)) == 0)
            x10_6 += 0x21d8
            
            if (x10_6 u>= x9_10)
                goto label_b03878
    
    if (x9_9.d == 0 || x10_6 == 0xffffffff)
    label_b03878:
        DomMinimizePile(nullptr)
        x8 = *(arg2 + 0x10)
        
        if (x8 == 0xd4 || x8 == 0xd2)
            goto label_b0389c
        
        goto label_b03948
    
    while (true)
        if (*(x10_6 + 0x2c) == 3 && *(x10_6 + 0x58) == 0xffffffff && *(x10_6 + 0x5c) == 2
                && *(x10_6 + 0x60) == 0)
            DomMinimizePile(x10_6)
            x8 = *(arg2 + 0x10)
            
            if (x8 != 0xd4)
                break
            
            goto label_b0389c
        
        if (x10_6 == 0)
            x10_6 = x8_9
        else
            x10_6 += 0x21d8
        
        if (x10_6 u>= x9_10)
            goto label_b03878
        
        while (zx.d(*(x10_6 + 0x21d2)) == 0)
            x10_6 += 0x21d8
            
            if (x10_6 u>= x9_10)
                goto label_b03878
        
        if (x10_6 == 0xffffffff)
            goto label_b03878
    
    if (x8 != 0xd2)
        goto label_b03948
    
    goto label_b0389c

label_b037e8:

if (x8 != 0xd4 && x8 != 0xd2)
label_b03948:
    
    if (x8 != 0x51)
    label_b03a14:
        
        if (x8 == 0x55)
            uint64_t x9_14 = zx.q(*(gDomClient + 0x205e8))
            
            if (x9_14.d == 0)
                goto label_b03adc
            
            DomGfx* x8_13 = *(gDomClient + 0x205e0)
            int64_t x9_15 = x8_13 + x9_14 * 0x21d8
            DomGfx* x0_3 = x8_13
            
            while (zx.d(*(x0_3 + 0x21d2)) == 0)
                x0_3 += 0x21d8
                
                if (x0_3 u>= x9_15)
                    goto label_b03adc
            
            if (x0_3 == 0xffffffff)
                goto label_b03adc
            
            while (*(x0_3 + 0x2c) != 3 || *(x0_3 + 0x58) != 0xffffffff || *(x0_3 + 0x60) != 0
                    || *(x0_3 + 0x30) != 0x718)
                if (x0_3 == 0)
                    x0_3 = x8_13
                else
                    x0_3 += 0x21d8
                
                if (x0_3 u>= x9_15)
                    goto label_b03adc
                
                while (zx.d(*(x0_3 + 0x21d2)) == 0)
                    x0_3 += 0x21d8
                    
                    if (x0_3 u>= x9_15)
                        goto label_b03adc
                
                if (x0_3 == 0xffffffff)
                    goto label_b03adc
            
            DomMinimizePile(x0_3)
    else
        uint64_t x9_12 = zx.q(*(gDomClient + 0x205e8))
        
        if (x9_12.d != 0)
            void* x8_11 = *(gDomClient + 0x205e0)
            int64_t x9_13 = x8_11 + x9_12 * 0x21d8
            void* x0_2 = x8_11
            
            while (zx.d(*(x0_2 + 0x21d2)) == 0)
                x0_2 += 0x21d8
                
                if (x0_2 u>= x9_13)
                    goto label_b03adc
            
            if (x0_2 == 0xffffffff)
                goto label_b03adc
            
            while (*(x0_2 + 0x2c) != 3 || *(x0_2 + 0x58) != 0xffffffff || *(x0_2 + 0x60) != 0
                    || *(x0_2 + 0x30) != 0x70d)
                if (x0_2 == 0)
                    x0_2 = x8_11
                else
                    x0_2 += 0x21d8
                
                if (x0_2 u>= x9_13)
                    goto label_b03adc
                
                while (zx.d(*(x0_2 + 0x21d2)) == 0)
                    x0_2 += 0x21d8
                    
                    if (x0_2 u>= x9_13)
                        goto label_b03adc
                
                if (x0_2 == 0xffffffff)
                    goto label_b03adc
            
            DomMinimizePile(x0_2)
            x8 = *(arg2 + 0x10)
            goto label_b03a14
        
    label_b03adc:
        pthread_kill(pthread_self(), 6)
        DomMinimizePile(XNoReturn())
else
label_b0389c:
    uint64_t x10_7 = zx.q(*(gDomClient + 0x205e8))
    
    if (x10_7.d != 0)
        DomGfx* i_4 = *(gDomClient + 0x205e0)
        int64_t x10_8 = i_4 + x10_7 * 0x21d8
        DomGfx* i_1 = i_4
        
        do
            if (zx.d(*(i_1 + 0x21d2)) != 0)
                while (i_1 != 0xffffffff)
                    if (*(i_1 + 0x2c) == 3 && *(i_1 + 0x58) == x20 && *(i_1 + 0x5c) == 0x462
                            && *(i_1 + 0x60) == 0)
                        if (i_1 != 0)
                            DomMinimizePile(i_1)
                            x8 = *(arg2 + 0x10)
                        
                        break
                    
                    if (i_1 == 0)
                        i_1 = i_4
                    else
                        i_1 += 0x21d8
                    
                    if (i_1 u>= x10_8)
                        break
                    
                    while (zx.d(*(i_1 + 0x21d2)) == 0)
                        i_1 += 0x21d8
                        
                        if (i_1 u>= x10_8)
                            goto label_b03948
                
                break
            
            i_1 += 0x21d8
        while (i_1 u< x10_8)
        
        goto label_b03948

if (*(arg2 + 4) == 7)
    CardnamesClose()

TutorialGameAction(arg2)
int64_t result = LogAdd(ActiveGame(), zx.q(x20), arg2)
int64_t (* x8_16)()

if (x20 == 0xffffffff)
    x8_16 = gDomClient + 0x48
else
    x8_16 = gDomClient + 0x48 + muls.dp.d(x20, 0x4d48)

*(x8_16 + 0x4098) = 0
*(arg2 + 0x6c) = 1
return result
