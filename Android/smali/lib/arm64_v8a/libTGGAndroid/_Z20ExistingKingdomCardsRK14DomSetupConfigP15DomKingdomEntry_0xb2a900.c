// 函数: _Z20ExistingKingdomCardsRK14DomSetupConfigP15DomKingdomEntry
// 地址: 0xb2a900
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_18 = *arg1

if (x8_18 != 0)
    *arg2 = *arg1
    
    if (*(arg1 + 0x10) == 0)
        x8_18 = 1
    else
        *(arg2 + 0x10) = *(arg1 + 0x10)
        
        if (*(arg1 + 0x20) == 0)
            x8_18 = 2
        else
            *(arg2 + 0x20) = *(arg1 + 0x20)
            
            if (*(arg1 + 0x30) == 0)
                x8_18 = 3
            else
                *(arg2 + 0x30) = *(arg1 + 0x30)
                
                if (*(arg1 + 0x40) == 0)
                    x8_18 = 4
                else
                    *(arg2 + 0x40) = *(arg1 + 0x40)
                    
                    if (*(arg1 + 0x50) == 0)
                        x8_18 = 5
                    else
                        *(arg2 + 0x50) = *(arg1 + 0x50)
                        
                        if (*(arg1 + 0x60) == 0)
                            x8_18 = 6
                        else
                            *(arg2 + 0x60) = *(arg1 + 0x60)
                            
                            if (*(arg1 + 0x70) == 0)
                                x8_18 = 7
                            else
                                *(arg2 + 0x70) = *(arg1 + 0x70)
                                
                                if (*(arg1 + 0x80) == 0)
                                    x8_18 = 8
                                else
                                    *(arg2 + 0x80) = *(arg1 + 0x80)
                                    
                                    if (*(arg1 + 0x90) == 0)
                                        x8_18 = 9
                                    else
                                        x8_18 = 0xa
                                        *(arg2 + 0x90) = *(arg1 + 0x90)

for (int64_t i = 0; i != 0x120; i += 0x48)
    void* x11_1 = arg1 + i
    
    if (*(x11_1 + 0xa0) == 0)
        break
    
    *(arg2 + (sx.q(x8_18) << 4)) = *(x11_1 + 0xa0)
    int32_t x12_2 = *(x11_1 + 0xb0)
    uint64_t x11_2 = zx.q(x8_18 + 1)
    
    if (x12_2 == 0)
        x8_18 = x11_2.d
    else
        int64_t x11_3 = sx.q(x11_2.d)
        void* x13_1 = arg2 + (x11_3 << 4)
        *x13_1 = 1
        *(x13_1 + 4) = x12_2
        *(x13_1 + 8) = 0
        void* x12_3 = arg1 + i
        int32_t x13_2 = *(x12_3 + 0xb4)
        int64_t x14_1 = x11_3 + 1
        
        if (x13_2 == 0)
            x8_18 = x14_1.d
        else
            void* x14_2 = arg2 + (x14_1 << 4)
            *x14_2 = 1
            *(x14_2 + 4) = x13_2
            *(x14_2 + 8) = 0
            int32_t x12_4 = *(x12_3 + 0xb8)
            int64_t x13_3 = x11_3 + 2
            
            if (x12_4 == 0)
                x8_18 = x13_3.d
            else
                void* x13_4 = arg2 + (x13_3 << 4)
                *x13_4 = 1
                *(x13_4 + 4) = x12_4
                *(x13_4 + 8) = 0
                void* x12_5 = arg1 + i
                int32_t x13_5 = *(x12_5 + 0xbc)
                x14_1 = x11_3 + 3
                
                if (x13_5 == 0)
                    x8_18 = x14_1.d
                else
                    void* x14_3 = arg2 + (x14_1 << 4)
                    *x14_3 = 1
                    *(x14_3 + 4) = x13_5
                    *(x14_3 + 8) = 0
                    int32_t x12_6 = *(x12_5 + 0xc0)
                    x13_3 = x11_3 + 4
                    
                    if (x12_6 == 0)
                        x8_18 = x13_3.d
                    else
                        void* x13_6 = arg2 + (x13_3 << 4)
                        *x13_6 = 1
                        *(x13_6 + 4) = x12_6
                        *(x13_6 + 8) = 0
                        void* x12_7 = arg1 + i
                        int32_t x13_7 = *(x12_7 + 0xc4)
                        x14_1 = x11_3 + 5
                        
                        if (x13_7 == 0)
                            x8_18 = x14_1.d
                        else
                            void* x14_4 = arg2 + (x14_1 << 4)
                            *x14_4 = 1
                            *(x14_4 + 4) = x13_7
                            *(x14_4 + 8) = 0
                            int32_t x12_8 = *(x12_7 + 0xc8)
                            x13_3 = x11_3 + 6
                            
                            if (x12_8 == 0)
                                x8_18 = x13_3.d
                            else
                                void* x13_8 = arg2 + (x13_3 << 4)
                                *x13_8 = 1
                                *(x13_8 + 4) = x12_8
                                *(x13_8 + 8) = 0
                                void* x12_9 = arg1 + i
                                int32_t x13_9 = *(x12_9 + 0xcc)
                                x14_1 = x11_3 + 7
                                
                                if (x13_9 == 0)
                                    x8_18 = x14_1.d
                                else
                                    void* x14_5 = arg2 + (x14_1 << 4)
                                    *x14_5 = 1
                                    *(x14_5 + 4) = x13_9
                                    *(x14_5 + 8) = 0
                                    int32_t x12_10 = *(x12_9 + 0xd0)
                                    x13_3 = x11_3 + 8
                                    
                                    if (x12_10 == 0)
                                        x8_18 = x13_3.d
                                    else
                                        void* x13_10 = arg2 + (x13_3 << 4)
                                        *x13_10 = 1
                                        *(x13_10 + 4) = x12_10
                                        *(x13_10 + 8) = 0
                                        void* x12_11 = arg1 + i
                                        int32_t x13_11 = *(x12_11 + 0xd4)
                                        x14_1 = x11_3 + 9
                                        
                                        if (x13_11 == 0)
                                            x8_18 = x14_1.d
                                        else
                                            void* x14_6 = arg2 + (x14_1 << 4)
                                            *x14_6 = 1
                                            *(x14_6 + 4) = x13_11
                                            *(x14_6 + 8) = 0
                                            int32_t x12_12 = *(x12_11 + 0xd8)
                                            x13_3 = x11_3 + 0xa
                                            
                                            if (x12_12 == 0)
                                                x8_18 = x13_3.d
                                            else
                                                void* x13_12 = arg2 + (x13_3 << 4)
                                                *x13_12 = 1
                                                *(x13_12 + 4) = x12_12
                                                *(x13_12 + 8) = 0
                                                void* x12_13 = arg1 + i
                                                int32_t x13_13 = *(x12_13 + 0xdc)
                                                x14_1 = x11_3 + 0xb
                                                
                                                if (x13_13 == 0)
                                                    x8_18 = x14_1.d
                                                else
                                                    void* x14_7 = arg2 + (x14_1 << 4)
                                                    *x14_7 = 1
                                                    *(x14_7 + 4) = x13_13
                                                    *(x14_7 + 8) = 0
                                                    int32_t x12_14 = *(x12_13 + 0xe0)
                                                    x13_3 = x11_3 + 0xc
                                                    
                                                    if (x12_14 == 0)
                                                        x8_18 = x13_3.d
                                                    else
                                                        void* x13_14 = arg2 + (x13_3 << 4)
                                                        *x13_14 = 1
                                                        *(x13_14 + 4) = x12_14
                                                        *(x13_14 + 8) = 0
                                                        int32_t x12_16 = *(arg1 + i + 0xe4)
                                                        x11_2 = x11_3 + 0xd
                                                        
                                                        if (x12_16 == 0)
                                                            x8_18 = x11_2.d
                                                        else
                                                            void* x11_4 = arg2 + (x11_2 << 4)
                                                            x8_18 += 0xf
                                                            *x11_4 = 1
                                                            *(x11_4 + 4) = x12_16
                                                            *(x11_4 + 8) = 0

for (int64_t i_1 = 0; i_1 != 0x6b0; i_1 += 0x10)
    if (*(arg1 + 0x1c0 + i_1) != 0)
        *(arg2 + (sx.q(x8_18) << 4)) = *(arg1 + 0x1c0 + i_1)
        x8_18 += 1

return zx.q(x8_18)
