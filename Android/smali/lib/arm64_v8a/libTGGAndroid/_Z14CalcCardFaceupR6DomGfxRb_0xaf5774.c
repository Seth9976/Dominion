// 函数: _Z14CalcCardFaceupR6DomGfxRb
// 地址: 0xaf5774
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg2 = true
int32_t x8 = *(arg1 + 0x2c)

if (x8 == 1)
    int32_t x11_1 = *(arg1 + 0x178)
    
    if (x11_1 != 0)
        uint64_t x10_1 = zx.q(x11_1.w)
        uint64_t x12_1 = zx.q(*(gDomClient + 0x205e8))
        
        if (x10_1.d u< x12_1.d)
            void* i_3 = *(gDomClient + 0x205e0)
            
            if (*(i_3 + x10_1 * 0x21d8 + 0x21d0) == x11_1
                    && *(i_3 + x10_1 * 0x21d8 + 0xa4) == 0x474)
                int32_t x11_5 = *(i_3 + x10_1 * 0x21d8 + 0x9c)
                int64_t x12_2 = i_3 + x12_1 * 0x21d8
                void* x13_4 = i_3 + zx.q(x11_5.w) * 0x21d8
                void* const x11_6
                
                if (*(x13_4 + 0x21d0) == x11_5)
                    x11_6 = x13_4
                else
                    x11_6 = nullptr
                
                void* i = i_3
                void* i_4
                
                while (true)
                    if (zx.d(*(i + 0x21d2)) == 0)
                        i += 0x21d8
                        
                        if (i u< x12_2)
                            continue
                    else if (i != 0xffffffff)
                        do
                            if (*(i + 0x2c) == 0 && *(i + 0x98) == *(x11_6 + 0x68)
                                    && zx.d(*(i + 0x168)) == 0)
                                i_4 = i
                                break
                            
                            if (i == 0)
                                i = i_3
                            else
                                i += 0x21d8
                            
                            if (i u>= x12_2)
                                goto label_af58b8
                            
                            while (zx.d(*(i + 0x21d2)) == 0)
                                i += 0x21d8
                                
                                if (i u>= x12_2)
                                    goto label_af58b8
                            
                            i_4 = nullptr
                        while (i != 0xffffffff)
                        
                        break
                    
                label_af58b8:
                    i_4 = nullptr
                    break
                
                int32_t x12_3 = *(gDomClient + 0x38)
                int32_t x21_1 = *(i_3 + x10_1 * 0x21d8 + 0xa0)
                int32_t x22_1
                
                x22_1 = x12_3 == 0xffffffff ? 0 : x12_3
                
                int32_t x10_3 = *(i_4 + 0x2c)
                int32_t x0_1
                
                if (x10_3 != 3)
                label_af5914:
                    
                    if (x10_3 == 5)
                        x0_1 = *(i_4 + 0x204)
                    else if (x10_3 == 1)
                        x0_1 = *(i_4 + 0x170)
                    else
                        if (x10_3 != 0)
                            pthread_kill(pthread_self(), 6)
                            return DomZoomExtra(XNoReturn()) __tailcall
                        
                        x0_1 = CardWhat(gDomClient + 0x20728, zx.q(*(i_4 + 0x98)))
                else
                    while (true)
                        x0_1 = *(i_4 + 0x30)
                        
                        if (x0_1 == 0x70d)
                            goto label_af59b0
                        
                        if (x0_1 == 0x718)
                            goto label_af59b0
                        
                        int32_t x10_4 = *(i_4 + 0x70)
                        
                        if (x10_4 == 0)
                            break
                        
                        i_4 = i_3 + zx.q(x10_4.w) * 0x21d8
                        x10_3 = *(i_4 + 0x2c)
                        
                        if (x10_3 != 3)
                            goto label_af5914
                
                if (x0_1 s> 0xe0c)
                    if (x0_1 - 0x1100 u< 2 || x0_1 == 0x1302)
                        if (x21_1 != x22_1)
                            return 0
                    else if (x0_1 == 0xe0d && x21_1 != x22_1)
                        return 0
                else if (x0_1 s> 0xc14)
                    if ((x0_1 == 0xc15 || x0_1 == 0xd16) && x21_1 != x22_1)
                        return 0
                else if ((x0_1 == 0x401 || x0_1 == 0xb08) && x21_1 != x22_1)
                    return 0
    
label_af59b0:
    x8 = *(arg1 + 0x2c)

if (x8 != 0)
    return 1

int32_t x1_1 = *(arg1 + 0xa4)
int32_t x8_3

if (x1_1 - 7 u<= 0x41)
    x8_3 = *DomBoardPile(gDomClient + 0x20728, x1_1)

if (x1_1 - 7 u<= 0x41 && x8_3 == 0x1301)
    return 1

if (zx.d(*(arg1 + 0x114)) != 0)
    return 0

if (*(arg1 + 0x128) != 0)
    return 1

int32_t x23_1 = *(arg1 + 0xa4)

if (x23_1 == 0x3ed)
    return 0

int32_t x24_1 = *(arg1 + 0x1f78)

if (x24_1 != 0)
    int32_t x8_6 = *(arg1 + 0x308)
    
    if (x8_6 == 1 && *(arg1 + 0x310) == 0xe)
        return 1
    
    int32_t x9_2 = *(arg1 + 0x478)
    
    if ((x9_2 == 1 && *(arg1 + 0x480) == 0xe) || (x8_6 == 1 && *(arg1 + 0x310) == 0xc)
            || (x9_2 == 1 && *(arg1 + 0x480) == 0xc))
        return 1

int64_t x21_2 = sx.q(*(gDomClient + 0x38))

if (x21_2.d == 0xffffffff)
    return 1

int32_t x0_6 = GetZoomPileStyle(zx.q(*(gDomClient + 0x20758)))

if (x0_6 == 4)
    if (x23_1 == 0x44e && *(arg1 + 0xa0) == x21_2.d)
        return 0
else if (x0_6 == 1 && x23_1 == 0x3eb && *(arg1 + 0xa0) == x21_2.d)
    return 0

int32_t x8_10
int32_t x9_3

if (x24_1 == 0)
    if (*(arg1 + 0x3b0) == 1 && *(arg1 + 0x3b8) == 0x1d)
        *arg2 = false
        return 0
    
    x8_10 = 0
    x9_3 = x23_1
else
    x9_3 = 0
    x8_10 = x23_1

if (x23_1 != 0x3eb)
    if (*(arg1 + (x21_2 << 2) + 0xe4) == 0 || (*(arg1 + 0x21d0) != *(gDomClient + 0x1f8c0)
            && (x9_3 == 0 || (x9_3 == 0x45f && *(arg1 + 0xa0) != x21_2.d))
            && (x8_10 == 0 || (x8_10 == 0x45f && *(arg1 + 0xa0) != x21_2.d))))
        return 0
    
    return 1

if ((CardIsShadow(arg1) & 1) != 0)
    return 1

int32_t x8_13 = *(gDomClient + 0x38)
uint64_t x10_7 = zx.q(*(gDomClient + 0x205e8))
void* i_5 = *(gDomClient + 0x205e0)
int32_t x8_14

x8_14 = x8_13 == 0xffffffff ? 0 : x8_13

if (x10_7.d != 0)
    void* i_2 = i_5
    int64_t x10_8 = i_5 + x10_7 * 0x21d8
    void* i_1 = i_5
    
    while (zx.d(*(i_1 + 0x21d2)) == 0)
        i_1 += 0x21d8
        
        if (i_1 u>= x10_8)
            goto label_af5c68
    
    if (i_1 != 0xffffffff)
        int32_t x12_4 = 0
        
        do
            if (*(i_1 + 0x2c) == 0 && *(i_1 + 0xa0) == x8_14 && *(i_1 + 0xa4) == 0x44e
                    && *(i_1 + 0xc8) == 0)
                x12_4 += 1
            
            if (i_1 == 0)
                i_1 = i_5
            else
                i_1 += 0x21d8
            
            if (i_1 u>= x10_8)
                break
            
            while (zx.d(*(i_1 + 0x21d2)) == 0)
                i_1 += 0x21d8
                
                if (i_1 u>= x10_8)
                    goto label_af5c54
        while (i_1 != 0xffffffff)
        
    label_af5c54:
        
        if (x12_4 s> 0)
            return 1
    
label_af5c68:
    
    while (zx.d(*(i_2 + 0x21d2)) == 0)
        i_2 += 0x21d8
        
        if (i_2 u>= x10_8)
            goto label_af5cfc
    
    if (i_2 != 0xffffffff)
        int32_t x11_9 = 0
        
        do
            if (*(i_2 + 0x2c) == 0 && *(i_2 + 0xa0) == x8_14 && *(i_2 + 0xa4) == 0x44d
                    && *(i_2 + 0xc8) == 0)
                x11_9 += 1
            
            if (i_2 == 0)
                i_2 = i_5
            else
                i_2 += 0x21d8
            
            if (i_2 u>= x10_8)
                break
            
            while (zx.d(*(i_2 + 0x21d2)) == 0)
                i_2 += 0x21d8
                
                if (i_2 u>= x10_8)
                    goto label_af5cf8
        while (i_2 != 0xffffffff)
        
    label_af5cf8:
        
        if (x11_9 != 0)
            return 1

label_af5cfc:
uint64_t x23_2 = zx.q(*(arg1 + 0x9c))
GetClient()
uint64_t x8_16 = zx.q(*(gDomClient + 0x82b48))

if (x8_16.d u> 4)
    pthread_kill(pthread_self(), 6)
    return DomZoomExtra(XNoReturn()) __tailcall

switch (x8_16)
    case 0, 3
        return 0
    case 1
        return 1
    case 2
    label_af5d54:
        int32_t x8_19 = *(i_5 + x23_2 * 0x21d8 + 0x8c)
        
        if (x8_19 == 4 || (x8_19 == 0 && *(i_5 + x23_2 * 0x21d8 + 0x5c) == 0x44e))
            if (*(arg1 + (x21_2 << 2) + 0xe4) == 4)
                return 1
            
            return 0
        
        if (*(arg1 + (x21_2 << 2) + 0xe4) != 0)
            return 1
        
        return 0
    case 4
        int32_t x8_17 = *(gDomClient + 0x82b4c)
        
        if (x8_17 == 0)
            return 0
        
        if (x8_17 == 2)
            return 1
        
        goto label_af5d54
