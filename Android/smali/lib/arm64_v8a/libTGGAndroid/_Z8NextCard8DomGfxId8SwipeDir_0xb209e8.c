// 函数: _Z8NextCard8DomGfxId8SwipeDir
// 地址: 0xb209e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = zx.q(arg1)
void* i_13 = *(gDomClient + 0x205e0)
int32_t x19 = arg2
void* x21 = i_13 + mulu.dp.d(x23.d, 0x21d8)
int32_t x8 = *(x21 + 0x2c)
uint64_t result

if (x8 == 0)
    int32_t x22_1 = *(i_13 + x23 * 0x21d8 + 0xa4)
    int32_t x0_1
    
    if (x22_1 == 0x3ec)
        x0_1 = GetZoomPileStyle(zx.q(*(gDomClient + 0x20758)))
    
    if (x22_1 == 0x3ec && x0_1 != 2)
        return 0
    
    uint64_t x12_3 = zx.q(*(gDomClient + 0x205e8))
    
    if (x12_3.d == 0)
        return 0
    
    void* i = i_13
    
    while (zx.d(*(i + 0x21d2)) == 0)
        i += 0x21d8
        
        if (i u>= i_13 + x12_3 * 0x21d8)
            return 0
    
    if (i == 0xffffffff)
        return 0
    
    void* x11_11 = i_13 + x23 * 0x21d8
    int64_t x12_4 = i_13 + x12_3 * 0x21d8
    result = 0
    int32_t x16_1 = -1
    
    if (x19 == 0)
        do
            if (i != x21 && *(i + 0x2c) == 0 && *(i + 0xa0) == *(x11_11 + 0xa0)
                    && *(i + 0xa4) == x22_1 && (x22_1 != 0x474 || *(i + 0xc8) == *(x11_11 + 0xc8))
                    && *(i + 0xbc) != 0)
                int32_t x17_16 = *(i + 0xb0) - *(x11_11 + 0xb0)
                
                if ((x17_16 & 0x80000000) != 0 || ((x19 == 1 ? 1 : 0) & (x17_16 s> 0 ? 1 : 0)) != 0)
                    int32_t x17_17
                    
                    if (x17_16 s< 0)
                        x17_17 = neg.d(x17_16)
                    else
                        x17_17 = x17_16
                    
                    if (result.d == 0 || x17_17 s< x16_1)
                        result = zx.q(*(i + 0x21d0))
                        x16_1 = x17_17
            
            if (i == 0)
                i = i_13
            else
                i += 0x21d8
            
            if (i u>= x12_4)
                break
            
            while (zx.d(*(i + 0x21d2)) == 0)
                i += 0x21d8
                
                if (i u>= x12_4)
                    return result
        while (i != 0xffffffff)
    else
        do
            if (i != x21 && *(i + 0x2c) == 0 && *(i + 0xa0) == *(x11_11 + 0xa0)
                    && *(i + 0xa4) == x22_1 && (x22_1 != 0x474 || *(i + 0xc8) == *(x11_11 + 0xc8))
                    && *(i + 0xbc) != 0 && x19 == 1)
                int32_t x17_7 = *(i + 0xb0) - *(x11_11 + 0xb0)
                
                if (x17_7 s>= 1 && (result.d == 0 || x17_7 s< x16_1))
                    result = zx.q(*(i + 0x21d0))
                    x16_1 = x17_7
            
            if (i == 0)
                i = i_13
            else
                i += 0x21d8
            
            if (i u>= x12_4)
                break
            
            while (zx.d(*(i + 0x21d2)) == 0)
                i += 0x21d8
                
                if (i u>= x12_4)
                    return result
        while (i != 0xffffffff)
    
    return result

int32_t i_2

if (x8 == 3)
    i_2 = *(i_13 + x23 * 0x21d8 + 0x5c)
    
    if (i_2 - 7 u> 0x40)
        return 0
    
    if (i_2 - 7 u> 0xb)
        goto label_b20b78
    
    goto label_b20a64

i_2 = *(i_13 + x23 * 0x21d8 + 0x5c)
void* x8_3

if (i_2 - 7 u<= 0xb)
label_b20a64:
    int32_t x10_1
    
    x10_1 = x19 != 0 ? 1 : -1
    
    do
        int32_t i_14 = i_2 + x10_1
        int32_t i_11
        
        i_11 = i_14 s< 7 ? 0x12 : i_14
        
        i_2 = i_11 s> 0x12 ? 7 : i_11
    while (*(gDomClient + (zx.q(i_2) << 4) + 0x21c54) == 0)
    
    int32_t i_1
    
    do
        i_1 = *(i_13 + 0x21d0)
        i_13 += 0x21d8
    while (i_1 u< 0x10000)
    x8_3 = i_13 - 0x21d8
    
    while (*(x8_3 + 0x2c) != 3 || *(x8_3 + 0x58) != 0xffffffff || *(x8_3 + 0x5c) != i_2
            || *(x8_3 + 0x60) != 0)
        void* x11_5 = x8_3 + 0x43a8
        int32_t j
        
        do
            j = *x11_5
            x8_3 += 0x21d8
            x11_5 += 0x21d8
        while (j u< 0x10000)
else
label_b20b78:
    
    if (i_2 - 0x13 u<= 0x13)
        int32_t x20
        
        if (*(gDomClient + 0x21e24) == 0)
            x20 = 0xa
        else if (*(gDomClient + 0x21e34) == 0)
            x20 = 0xb
        else if (*(gDomClient + 0x21e44) == 0)
            x20 = 0xc
        else if (*(gDomClient + 0x21e54) == 0)
            x20 = 0xd
        else if (*(gDomClient + 0x21e64) != 0)
            x20 = 0xf
        else
            x20 = 0xe
        
        int32_t x21_1
        
        if (*(gDomClient + 0x21e74) == 0)
            x21_1 = 0
        else if (*(gDomClient + 0x21e84) == 0)
            x21_1 = 1
        else if (*(gDomClient + 0x21e94) == 0)
            x21_1 = 2
        else if (*(gDomClient + 0x21ea4) == 0)
            x21_1 = 3
        else if (*(gDomClient + 0x21eb4) != 0)
            x21_1 = 5
        else
            x21_1 = 4
        
        int32_t x0_2 = NumExtraPiles()
        int32_t x0_3 = NearestAspectRatio()
        char x4_1
        
        if (zx.d(*(GetLocalSettings() + 0x38)) == 0)
            x4_1 = 0
        else if (*(GetClient() + 0x5068) != 1)
            x4_1 = 1
        else
            int64_t var_48
            int32_t x0_8 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_48)
            x4_1 = (*(gDomClient + 0x205cc) s>= x0_8 ? 1 : 0).b | (var_48 == 0 ? 1 : 0).b
        
        int32_t x0_11 =
            LayoutBaneStyle(CalcLayoutStyle(x20, x21_1, x0_2, (x0_3 != 0 ? 1 : 0).b, x4_1))
        
        if (x0_11 u>= 7)
            pthread_kill(pthread_self(), 6)
            return HasReachedHand(XNoReturn()) __tailcall
        
        int32_t i_9 = *(&data_801b9c + (sx.q(x0_11) << 2))
        
        if (x19 == 1)
            do
                if (i_2 == i_9 - 1)
                    i_2 = 0x22
                else if (i_2 == 0x21)
                    i_2 = 0x13
                else if (i_2 != 0x26)
                    i_2 += 1
                else
                    i_2 = i_9
            while (*(gDomClient + (zx.q(i_2) << 4) + 0x21c54) == 0)
        else if (x19 != 0)
            do
                i_2 += 1
            while (*(gDomClient + (zx.q(i_2) << 4) + 0x21c54) == 0)
        else
            do
                if (i_2 == i_9)
                    i_2 = 0x26
                else if (i_2 == 0x13)
                    i_2 = 0x21
                else if (i_2 != 0x22)
                    i_2 -= 1
                else
                    i_2 = i_9 - 1
            while (*(gDomClient + (zx.q(i_2) << 4) + 0x21c54) == 0)
        
        void* x8_24 = *(gDomClient + 0x205e0)
        int32_t i_3
        
        do
            i_3 = *(x8_24 + 0x21d0)
            x8_24 += 0x21d8
        while (i_3 u< 0x10000)
        x8_3 = x8_24 - 0x21d8
        
        while (*(x8_3 + 0x2c) != 3 || *(x8_3 + 0x58) != 0xffffffff || *(x8_3 + 0x5c) != i_2
                || *(x8_3 + 0x60) != 0)
            void* x11_28 = x8_3 + 0x43a8
            int32_t j_1
            
            do
                j_1 = *x11_28
                x8_3 += 0x21d8
                x11_28 += 0x21d8
            while (j_1 u< 0x10000)
    else if (i_2 - 0x27 u> 0x20)
        uint64_t x8_14 = zx.q(*(gDomClient + 0x205e8))
        void* i_4
        
        if (x8_14.d != 0)
            i_4 = i_13
            
            while (zx.d(*(i_4 + 0x21d2)) == 0)
                i_4 += 0x21d8
                
                if (i_4 u>= i_13 + x8_14 * 0x21d8)
                    goto label_b20ecc
        
        if (x8_14.d == 0 || i_4 == 0xffffffff)
        label_b20ecc:
            result = 0
        else
            int64_t x10_4 = i_13 + x8_14 * 0x21d8
            result = 0
            int32_t x14_1 = -1
            
            if (x19 == 0)
                do
                    if (*(i_4 + 0x2c) == 3)
                        int32_t x15_11 = *(i_4 + 0x5c)
                        
                        if (x15_11 - 7 u<= 0x40)
                            int32_t x15_12 = x15_11 - i_2
                            
                            if ((x15_12 & 0x80000000) != 0
                                    || ((x19 == 1 ? 1 : 0) & (x15_12 s> 0 ? 1 : 0)) != 0)
                                int32_t x15_13
                                
                                if (x15_12 s< 0)
                                    x15_13 = neg.d(x15_12)
                                else
                                    x15_13 = x15_12
                                
                                if (result.d == 0 || x15_13 s< x14_1)
                                    result = zx.q(*(i_4 + 0x21d0))
                                    x14_1 = x15_13
                    
                    if (i_4 == 0)
                        i_4 = i_13
                    else
                        i_4 += 0x21d8
                    
                    if (i_4 u>= x10_4)
                        break
                    
                    while (zx.d(*(i_4 + 0x21d2)) == 0)
                        i_4 += 0x21d8
                        
                        if (i_4 u>= x10_4)
                            goto label_b20ed0
                while (i_4 != 0xffffffff)
            else
                do
                    if (*(i_4 + 0x2c) == 3)
                        int32_t x15_4 = *(i_4 + 0x5c)
                        
                        if (x15_4 - 7 u<= 0x40 && x19 == 1)
                            int32_t x15_5 = x15_4 - i_2
                            
                            if (x15_5 s>= 1 && (result.d == 0 || x15_5 s< x14_1))
                                result = zx.q(*(i_4 + 0x21d0))
                                x14_1 = x15_5
                    
                    if (i_4 == 0)
                        i_4 = i_13
                    else
                        i_4 += 0x21d8
                    
                    if (i_4 u>= x10_4)
                        break
                    
                    while (zx.d(*(i_4 + 0x21d2)) == 0)
                        i_4 += 0x21d8
                        
                        if (i_4 u>= x10_4)
                            goto label_b20ed0
                while (i_4 != 0xffffffff)
        
    label_b20ed0:
        
        if (x19 != 1 || result.d != 0)
            if ((result.d | x19) != 0)
                return result
            
            void* i_5
            
            if (x8_14.d == 0)
                x8_14 = 0
            label_b212c0:
                i_5 = 0xffffffff
            else
                i_5 = i_13
                
                while (zx.d(*(i_5 + 0x21d2)) == 0)
                    i_5 += 0x21d8
                    
                    if (i_5 u>= i_13 + x8_14 * 0x21d8)
                        goto label_b212c0
            
            void* i_10 = nullptr
            int64_t x8_25 = i_13 + x8_14 * 0x21d8
            
            do
                if (*(i_5 + 0x2c) == 3)
                    int32_t x14_3 = *(i_5 + 0x5c)
                    
                    if (x14_3 - 7 u<= 0x40 && (i_10 == 0 || x14_3 s> *(i_10 + 0x5c)))
                        i_10 = i_5
                
                i_5 += 0x21d8
                
                if (x8_25 u<= i_5)
                    break
                
                while (zx.d(*(i_5 + 0x21d2)) == 0)
                    i_5 += 0x21d8
                    
                    if (i_5 u>= x8_25)
                        return zx.q(*(i_10 + 0x21d0))
            while (i_5 != 0xffffffff)
            
            return zx.q(*(i_10 + 0x21d0))
        
        int32_t i_6
        
        do
            i_6 = *(i_13 + 0x21d0)
            i_13 += 0x21d8
        while (i_6 u< 0x10000)
        x8_3 = i_13 - 0x21d8
        
        while (*(x8_3 + 0x2c) != 3 || *(x8_3 + 0x58) != 0xffffffff || *(x8_3 + 0x5c) != 7
                || *(x8_3 + 0x60) != 0)
            void* x11_18 = x8_3 + 0x43a8
            int32_t i_7
            
            do
                i_7 = *x11_18
                x8_3 += 0x21d8
                x11_18 += 0x21d8
            while (i_7 u< 0x10000)
    else
        int32_t x13_2
        
        x13_2 = x19 != 0 ? 1 : -1
        
        while (true)
            int32_t i_15 = i_2 + x13_2
            int32_t i_12
            
            i_12 = i_15 s< 0x27 ? 0x47 : i_15
            
            i_2 = i_12 s> 0x47 ? 0x27 : i_12
            
            int32_t x15_2 = *(gDomClient + (zx.q(i_2) << 4) + 0x21c54)
            
            if (x15_2 s<= 0xd2f)
                if (x15_2 != 0 && x15_2 != 0x70d)
                    if (x15_2 != 0x718)
                        break
            else if (x15_2 s> 0x1127)
                if (x15_2 != 0x1128)
                    if (x15_2 != 0x1301)
                        break
            else if (x15_2 != 0xd30)
                if (x15_2 != 0xd3d)
                    break
        
        int32_t i_8
        
        do
            i_8 = *(i_13 + 0x21d0)
            i_13 += 0x21d8
        while (i_8 u< 0x10000)
        x8_3 = i_13 - 0x21d8
        
        while (*(x8_3 + 0x2c) != 3 || *(x8_3 + 0x58) != 0xffffffff || *(x8_3 + 0x5c) != i_2
                || *(x8_3 + 0x60) != 0)
            void* x11_10 = x8_3 + 0x43a8
            int32_t j_2
            
            do
                j_2 = *x11_10
                x8_3 += 0x21d8
                x11_10 += 0x21d8
            while (j_2 u< 0x10000)

return zx.q(*(x8_3 + 0x21d0))
