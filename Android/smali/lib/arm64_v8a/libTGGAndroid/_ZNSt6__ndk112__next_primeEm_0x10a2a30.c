// 函数: _ZNSt6__ndk112__next_primeEm
// 地址: 0x10a2a30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 u<= 0xd3)
    void* const x8_1 = &data_87838c
    
    for (uint64_t i = 0x30; i != 0; )
        uint64_t i_2 = i u>> 1
        void* x11_1 = x8_1 + (i_2 << 2)
        uint64_t x12_1 = zx.q(*x11_1)
        
        if (x12_1 u< arg1)
            i += not.q(i_2)
        else
            i = i_2
        
        if (x12_1 u< arg1)
            x8_1 = x11_1 + 4
    
    return zx.q(*x8_1)

if (arg1 u>= -0x3a)
    sub_10a317c()
    noreturn

uint64_t x9_2 = arg1 u/ 0xd2
int64_t x14_1 = x9_2 * 0xd2
int64_t x10_1 = arg1 u% 0xd2
uint64_t i_1 = 0x30
void* const x11_3 = &data_87844c
uint64_t i_3

do
    i_3 = i_1 u>> 1
    void* x15_1 = x11_3 + (i_3 << 2)
    uint64_t x16_1 = zx.q(*x15_1)
    
    if (x10_1 u> x16_1)
        i_1 += not.q(i_3)
    else
        i_1 = i_3
    
    if (x10_1 u> x16_1)
        x11_3 = x15_1 + 4
while (i_1 != 0)

int64_t x11_5 = (x11_3 - &data_87844c) s>> 2

while (true)
    uint64_t i_4 = x14_1 + zx.q(*(&data_87844c + (x11_5 << 2)))
    int64_t x15_4 = 0x14
    uint64_t i_5 = i_3
    
    while (true)
        uint64_t x16_2 = zx.q(*(&data_87838c + x15_4))
        uint64_t x17_2 = i_4 u/ x16_2
        int64_t x1_1 = x17_2 * x16_2
        
        i_3 = x17_2 u< x16_2 ? i_4 : i_5
        
        if (x17_2 u< x16_2 || i_4 == x1_1)
            if (x17_2 u>= x16_2 && i_4 == x1_1)
                break
            
            if (x17_2 u< x16_2)
                return i_4
            
            return i_5
        
        x15_4 += 4
        i_5 = i_3
        
        if (x15_4 != 0xbc)
            continue
        
        int64_t x14_2 = 0x1a3
        
        while (true)
            uint64_t x16_3 = i_4 u/ (x14_2 - 0xd0)
            
            if (x16_3 u>= x14_2 - 0xd0)
                if (i_4 == x16_3 * (x14_2 - 0xd0))
                    break
                
                uint64_t x17_3 = i_4 u/ (x14_2 - 0xc6)
                
                if (x17_3 u>= x14_2 - 0xc6)
                    if (i_4 == x17_3 * (x14_2 - 0xc6))
                        break
                    
                    uint64_t x17_4 = i_4 u/ (x14_2 - 0xc4)
                    
                    if (x17_4 u>= x14_2 - 0xc4)
                        if (i_4 == x17_4 * (x14_2 - 0xc4))
                            break
                        
                        uint64_t x17_5 = i_4 u/ (x14_2 - 0xc0)
                        
                        if (x17_5 u>= x14_2 - 0xc0)
                            if (i_4 == x17_5 * (x14_2 - 0xc0))
                                break
                            
                            uint64_t x17_6 = i_4 u/ (x14_2 - 0xbe)
                            
                            if (x17_6 u>= x14_2 - 0xbe)
                                if (i_4 == x17_6 * (x14_2 - 0xbe))
                                    break
                                
                                uint64_t x17_7 = i_4 u/ (x14_2 - 0xba)
                                
                                if (x17_7 u>= x14_2 - 0xba)
                                    if (i_4 == x17_7 * (x14_2 - 0xba))
                                        break
                                    
                                    uint64_t x17_8 = i_4 u/ (x14_2 - 0xb4)
                                    
                                    if (x17_8 u>= x14_2 - 0xb4)
                                        if (i_4 == x17_8 * (x14_2 - 0xb4))
                                            break
                                        
                                        uint64_t x17_9 = i_4 u/ (x14_2 - 0xb2)
                                        
                                        if (x17_9 u>= x14_2 - 0xb2)
                                            if (i_4 == x17_9 * (x14_2 - 0xb2))
                                                break
                                            
                                            uint64_t x17_10 = i_4 u/ (x14_2 - 0xac)
                                            
                                            if (x17_10 u>= x14_2 - 0xac)
                                                if (i_4 == x17_10 * (x14_2 - 0xac))
                                                    break
                                                
                                                uint64_t x17_11 = i_4 u/ (x14_2 - 0xa8)
                                                
                                                if (x17_11 u>= x14_2 - 0xa8)
                                                    if (i_4 == x17_11 * (x14_2 - 0xa8))
                                                        break
                                                    
                                                    uint64_t x17_12 = i_4 u/ (x14_2 - 0xa6)
                                                    
                                                    if (x17_12 u>= x14_2 - 0xa6)
                                                        if (i_4 == x17_12 * (x14_2 - 0xa6))
                                                            break
                                                        
                                                        uint64_t x17_13 = i_4 u/ (x14_2 - 0xa2)
                                                        
                                                        if (x17_13 u>= x14_2 - 0xa2)
                                                            if (i_4 == x17_13 * (x14_2 - 0xa2))
                                                                break
                                                            
                                                            uint64_t x17_14 = i_4 u/ (x14_2 - 0x9c)
                                                            
                                                            if (x17_14 u>= x14_2 - 0x9c)
                                                                if (i_4 == x17_14 * (x14_2 - 0x9c))
                                                                    break
                                                                
                                                                uint64_t x17_15 = i_4 u/ (x14_2 - 0x96)
                                                                
                                                                if (x17_15 u>= x14_2 - 0x96)
                                                                    if (i_4 == x17_15 * (x14_2 - 0x96))
                                                                        break
                                                                    
                                                                    uint64_t x17_16 = i_4 u/ (x14_2 - 0x94)
                                                                    
                                                                    if (x17_16 u>= x14_2 - 0x94)
                                                                        if (i_4 == x17_16 * (x14_2 - 0x94))
                                                                            break
                                                                        
                                                                        uint64_t x17_17 = i_4 u/ (x14_2 - 0x8e)
                                                                        
                                                                        if (x17_17 u>= x14_2 - 0x8e)
                                                                            if (i_4 == x17_17 * (x14_2 - 0x8e))
                                                                                break
                                                                            
                                                                            uint64_t x17_18 = i_4 u/ (x14_2 - 0x8a)
                                                                            
                                                                            if (x17_18 u>= x14_2 - 0x8a)
                                                                                if (i_4 == x17_18 * (x14_2 - 0x8a))
                                                                                    break
                                                                                
                                                                                uint64_t x17_19 = i_4 u/ (x14_2 - 0x88)
                                                                                
                                                                                if (x17_19 u>= x14_2 - 0x88)
                                                                                    if (i_4 == x17_19 * (x14_2 - 0x88))
                                                                                        break
                                                                                    
                                                                                    uint64_t x17_20 = i_4 u/ (x14_2 - 0x82)
                                                                                    
                                                                                    if (x17_20 u>= x14_2 - 0x82)
                                                                                        if (i_4 == x17_20 * (x14_2 - 0x82))
                                                                                            break
                                                                                        
                                                                                        uint64_t x17_21 = i_4 u/ (x14_2 - 0x7e)
                                                                                        
                                                                                        if (x17_21 u>= x14_2 - 0x7e)
                                                                                            if (i_4 == x17_21 * (x14_2 - 0x7e))
                                                                                                break
                                                                                            
                                                                                            uint64_t x17_22 = i_4 u/ (x14_2 - 0x78)
                                                                                            
                                                                                            if (x17_22 u>= x14_2 - 0x78)
                                                                                                if (i_4 == x17_22 * (x14_2 - 0x78))
                                                                                                    break
                                                                                                
                                                                                                uint64_t x17_23 = i_4 u/ (x14_2 - 0x70)
                                                                                                
                                                                                                if (x17_23 u>= x14_2 - 0x70)
                                                                                                    if (i_4 == x17_23 * (x14_2 - 0x70))
                                                                                                        break
                                                                                                    
                                                                                                    uint64_t x17_24 = i_4 u/ (x14_2 - 0x6c)
                                                                                                    
                                                                                                    if (x17_24 u>= x14_2 - 0x6c)
                                                                                                        if (i_4 == x17_24 * (x14_2 - 0x6c))
                                                                                                            break
                                                                                                        
                                                                                                        uint64_t x17_25 = i_4 u/ (x14_2 - 0x6a)
                                                                                                        
                                                                                                        if (x17_25 u>= x14_2 - 0x6a)
                                                                                                            if (i_4 == x17_25 * (x14_2 - 0x6a))
                                                                                                                break
                                                                                                            
                                                                                                            uint64_t x17_26 = i_4 u/ (x14_2 - 0x66)
                                                                                                            
                                                                                                            if (x17_26 u>= x14_2 - 0x66)
                                                                                                                if (i_4 == x17_26 * (x14_2 - 0x66))
                                                                                                                    break
                                                                                                                
                                                                                                                uint64_t x17_27 = i_4 u/ (x14_2 - 0x64)
                                                                                                                
                                                                                                                if (x17_27 u>= x14_2 - 0x64)
                                                                                                                    if (i_4 == x17_27 * (x14_2 - 0x64))
                                                                                                                        break
                                                                                                                    
                                                                                                                    uint64_t x17_28 = i_4 u/ (x14_2 - 0x60)
                                                                                                                    
                                                                                                                    if (x17_28 u>= x14_2 - 0x60)
                                                                                                                        if (i_4 == x17_28 * (x14_2 - 0x60))
                                                                                                                            break
                                                                                                                        
                                                                                                                        uint64_t x17_29 = i_4 u/ (x14_2 - 0x58)
                                                                                                                        
                                                                                                                        if (x17_29 u>= x14_2 - 0x58)
                                                                                                                            if (i_4 == x17_29 * (x14_2 - 0x58))
                                                                                                                                break
                                                                                                                            
                                                                                                                            uint64_t x17_30 = i_4 u/ (x14_2 - 0x52)
                                                                                                                            
                                                                                                                            if (x17_30 u>= x14_2 - 0x52)
                                                                                                                                if (i_4 == x17_30 * (x14_2 - 0x52))
                                                                                                                                    break
                                                                                                                                
                                                                                                                                uint64_t x17_31 = i_4 u/ (x14_2 - 0x4e)
                                                                                                                                
                                                                                                                                if (x17_31 u>= x14_2 - 0x4e)
                                                                                                                                    if (i_4 == x17_31 * (x14_2 - 0x4e))
                                                                                                                                        break
                                                                                                                                    
                                                                                                                                    uint64_t x17_32 = i_4 u/ (x14_2 - 0x48)
                                                                                                                                    
                                                                                                                                    if (x17_32 u>= x14_2 - 0x48)
                                                                                                                                        if (i_4 == x17_32 * (x14_2 - 0x48))
                                                                                                                                            break
                                                                                                                                        
                                                                                                                                        uint64_t x17_33 = i_4 u/ (x14_2 - 0x46)
                                                                                                                                        
                                                                                                                                        if (x17_33 u>= x14_2 - 0x46)
                                                                                                                                            if (i_4 == x17_33 * (x14_2 - 0x46))
                                                                                                                                                break
                                                                                                                                            
                                                                                                                                            uint64_t x17_34 = i_4 u/ (x14_2 - 0x42)
                                                                                                                                            
                                                                                                                                            if (x17_34 u>= x14_2 - 0x42)
                                                                                                                                                if (i_4 == x17_34 * (x14_2 - 0x42))
                                                                                                                                                    break
                                                                                                                                                
                                                                                                                                                uint64_t x17_35 = i_4 u/ (x14_2 - 0x3c)
                                                                                                                                                
                                                                                                                                                if (x17_35 u>= x14_2 - 0x3c)
                                                                                                                                                    if (i_4 == x17_35 * (x14_2 - 0x3c))
                                                                                                                                                        break
                                                                                                                                                    
                                                                                                                                                    uint64_t x17_36 = i_4 u/ (x14_2 - 0x3a)
                                                                                                                                                    
                                                                                                                                                    if (x17_36 u>= x14_2 - 0x3a)
                                                                                                                                                        if (i_4 == x17_36 * (x14_2 - 0x3a))
                                                                                                                                                            break
                                                                                                                                                        
                                                                                                                                                        uint64_t x17_37 = i_4 u/ (x14_2 - 0x34)
                                                                                                                                                        
                                                                                                                                                        if (x17_37 u>= x14_2 - 0x34)
                                                                                                                                                            if (i_4 == x17_37 * (x14_2 - 0x34))
                                                                                                                                                                break
                                                                                                                                                            
                                                                                                                                                            uint64_t x17_38 = i_4 u/ (x14_2 - 0x2e)
                                                                                                                                                            
                                                                                                                                                            if (x17_38 u>= x14_2 - 0x2e)
                                                                                                                                                                if (i_4 == x17_38 * (x14_2 - 0x2e))
                                                                                                                                                                    break
                                                                                                                                                                
                                                                                                                                                                uint64_t x17_39 = i_4 u/ (x14_2 - 0x2a)
                                                                                                                                                                
                                                                                                                                                                if (x17_39 u>= x14_2 - 0x2a)
                                                                                                                                                                    if (i_4 == x17_39 * (x14_2 - 0x2a))
                                                                                                                                                                        break
                                                                                                                                                                    
                                                                                                                                                                    uint64_t x17_40 = i_4 u/ (x14_2 - 0x28)
                                                                                                                                                                    
                                                                                                                                                                    if (x17_40 u>= x14_2 - 0x28)
                                                                                                                                                                        if (i_4 == x17_40 * (x14_2 - 0x28))
                                                                                                                                                                            break
                                                                                                                                                                        
                                                                                                                                                                        uint64_t x17_41 = i_4 u/ (x14_2 - 0x24)
                                                                                                                                                                        
                                                                                                                                                                        if (x17_41 u>= x14_2 - 0x24)
                                                                                                                                                                            if (i_4 == x17_41 * (x14_2 - 0x24))
                                                                                                                                                                                break
                                                                                                                                                                            
                                                                                                                                                                            uint64_t x17_42 = i_4 u/ (x14_2 - 0x1e)
                                                                                                                                                                            
                                                                                                                                                                            if (x17_42 u>= x14_2 - 0x1e)
                                                                                                                                                                                if (i_4 == x17_42 * (x14_2 - 0x1e))
                                                                                                                                                                                    break
                                                                                                                                                                                
                                                                                                                                                                                uint64_t x17_43 = i_4 u/ (x14_2 - 0x1c)
                                                                                                                                                                                
                                                                                                                                                                                if (x17_43 u>= x14_2 - 0x1c)
                                                                                                                                                                                    if (i_4 == x17_43 * (x14_2 - 0x1c))
                                                                                                                                                                                        break
                                                                                                                                                                                    
                                                                                                                                                                                    uint64_t x17_44 = i_4 u/ (x14_2 - 0x16)
                                                                                                                                                                                    
                                                                                                                                                                                    if (x17_44 u>= x14_2 - 0x16)
                                                                                                                                                                                        if (i_4 == x17_44 * (x14_2 - 0x16))
                                                                                                                                                                                            break
                                                                                                                                                                                        
                                                                                                                                                                                        uint64_t x17_45 = i_4 u/ (x14_2 - 0x12)
                                                                                                                                                                                        
                                                                                                                                                                                        if (x17_45 u>= x14_2 - 0x12)
                                                                                                                                                                                            if (i_4 == x17_45 * (x14_2 - 0x12))
                                                                                                                                                                                                break
                                                                                                                                                                                            
                                                                                                                                                                                            uint64_t x17_46 = i_4 u/ (x14_2 - 0x10)
                                                                                                                                                                                            
                                                                                                                                                                                            if (x17_46 u>= x14_2 - 0x10)
                                                                                                                                                                                                if (i_4 == x17_46 * (x14_2 - 0x10))
                                                                                                                                                                                                    break
                                                                                                                                                                                                
                                                                                                                                                                                                uint64_t x17_47 = i_4 u/ (x14_2 - 0xc)
                                                                                                                                                                                                
                                                                                                                                                                                                if (x17_47 u>= x14_2 - 0xc)
                                                                                                                                                                                                    if (i_4 == x17_47 * (x14_2 - 0xc))
                                                                                                                                                                                                        break
                                                                                                                                                                                                    
                                                                                                                                                                                                    uint64_t x17_48 = i_4 u/ (x14_2 - 0xa)
                                                                                                                                                                                                    
                                                                                                                                                                                                    if (x17_48 u>= x14_2 - 0xa)
                                                                                                                                                                                                        if (i_4 == x17_48 * (x14_2 - 0xa))
                                                                                                                                                                                                            break
                                                                                                                                                                                                        
                                                                                                                                                                                                        uint64_t x16_97 = i_4 u/ x14_2
                                                                                                                                                                                                        
                                                                                                                                                                                                        if (x16_97 u>= x14_2)
                                                                                                                                                                                                            bool cond:6_1 = i_4 != x16_97 * x14_2
                                                                                                                                                                                                            x14_2 += 0xd2
                                                                                                                                                                                                            
                                                                                                                                                                                                            if (not(cond:6_1))
                                                                                                                                                                                                                break
                                                                                                                                                                                                            
                                                                                                                                                                                                            continue
            
            return i_4
        
        break
    
    if (x11_5 == 0x2f)
        x9_2 += 1
    
    if (x11_5 == 0x2f)
        x11_5 = 0
    else
        x11_5 += 1
    
    x14_1 = x9_2 * 0xd2
