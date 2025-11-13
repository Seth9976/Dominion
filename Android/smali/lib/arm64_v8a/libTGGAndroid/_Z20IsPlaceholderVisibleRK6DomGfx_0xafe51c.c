// 函数: _Z20IsPlaceholderVisibleRK6DomGfx
// 地址: 0xafe51c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1

if (*(arg1 + 0x1f78) s<= 0)
    uint64_t x8_2 = zx.q(*(gDomClient + 0x1d00c))
    
    if (x8_2.d u> 4)
        pthread_kill(pthread_self(), 6)
        return IsAtBottom(XNoReturn()) __tailcall
    
    x8_1 = 0
    
    switch (x8_2)
        case 1
            int32_t x10_1 = *(arg1 + 0x21d0)
            
            if (x10_1 == *(gDomClient + 0x1d01c))
                return 1
            
            int32_t x8_13 = *(arg1 + 0x2c)
            
            if (x8_13 == 2 && *(arg1 + 0x3c4) s< 0xe)
                return 1
            
            if (x8_13 != 1)
                return 0
            
            x8_1 = sx.q(*(gDomClient + 0x1f0a0))
            
            if (x8_1.d != 0)
                int64_t (* i)() = gDomClient + 0x1d020
                int32_t x11_4 = 0
                void* x9_4 = i + x8_1
                
                do
                    uint64_t j_5 = zx.q(*i)
                    
                    if (j_5.d s>= 1)
                        int64_t (* x8_21)() = i + 0xc
                        uint64_t j_2 = j_5
                        uint64_t j
                        
                        do
                            if (*x8_21 == x10_1)
                                return zx.q(x11_4 u< 3 ? 1 : 0)
                            
                            j = j_2
                            j_2 -= 1
                            x8_21 += 0xc
                        while (j != 1)
                    
                    void* i_6 = i + sx.q(8 + j_5.d * 0xc)
                    x8_1 = 0
                    
                    i = i_6 == x9_4 ? nullptr : i_6
                    
                    x11_4 += 1
                while (i != 0)
        case 2
            if (*(arg1 + 0x2c) != 2)
                return 0
            
            int32_t x9_1 = *(arg1 + 0x3c4)
            int32_t x8_6 = *(gDomClient + 0x1f0b0) * 0x3f
            return zx.q(x9_1 s>= x8_6 ? 1 : 0) & zx.q(x9_1 s< x8_6 + 0x3f ? 1 : 0)
        case 3
            if (*(arg1 + 0x2c) != 1)
                return 0
            
            x8_1 = sx.q(*(gDomClient + 0x1f0a0))
            
            if (x8_1.d != 0)
                int64_t (* i_1)() = gDomClient + 0x1d020
                int32_t x10_4 = 0
                void* x9_2 = i_1 + x8_1
                
                do
                    uint64_t j_4 = zx.q(*i_1)
                    
                    if (j_4.d s>= 1)
                        int64_t (* x16_1)() = i_1 + 0xc
                        uint64_t j_3 = j_4
                        uint64_t j_1
                        
                        do
                            if (*x16_1 == *(arg1 + 0x21d0))
                                int32_t x8_15 = *(gDomClient + 0x1f0b4) * 0xc
                                return zx.q(x10_4 s>= x8_15 ? 1 : 0)
                                    & zx.q(x10_4 s< x8_15 + 0xc ? 1 : 0)
                            
                            j_1 = j_3
                            j_3 -= 1
                            x16_1 += 0xc
                        while (j_1 != 1)
                    
                    void* i_3 = i_1 + sx.q(8 + j_4.d * 0xc)
                    x8_1 = 0
                    
                    i_1 = i_3 == x9_2 ? nullptr : i_3
                    
                    x10_4 += 1
                while (i_1 != 0)
        case 4
            int64_t x10_5
            
            if (*(arg1 + 0x2c) == 1)
                x10_5 = sx.q(*(gDomClient + 0x1f0a0))
            
            int64_t (* i_5)()
            
            if (*(arg1 + 0x2c) != 1 || x10_5.d == 0)
                i_5 = nullptr
            else
                int64_t (* i_2)() = gDomClient + 0x1d020
                void* x10_6 = i_2 + x10_5
                
                do
                    uint64_t x13_2 = zx.q(*i_2)
                    
                    if (x13_2.d s>= 1)
                        int64_t x14_1 = 0
                        
                        while (*(i_2 + x14_1 + 0xc) != *(arg1 + 0x21d0))
                            x14_1 += 0xc
                            
                            if (x13_2 * 0xc == x14_1)
                                goto label_afe6c0
                        
                        i_5 = i_2
                        break
                    
                label_afe6c0:
                    void* i_4 = i_2 + sx.q(8 + x13_2.d * 0xc)
                    
                    i_2 = i_4 == x10_6 ? nullptr : i_4
                    
                    i_5 = nullptr
                while (i_2 != 0)
            
            return zx.q(i_5 == *(gDomClient + 0x1f0a8) ? 1 : 0)
else
    x8_1 = 1

return zx.q(x8_1.d)
