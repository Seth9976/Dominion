// 函数: _Z19NumCardsWhereAnyone8DomWhereb
// 地址: 0xaf6764
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gDomClient + 0x205e8))

if (x8.d != 0)
    void* i_2 = *(gDomClient + 0x205e0)
    void* i = i_2
    
    while (true)
        if (zx.d(*(i + 0x21d2)) != 0)
            if (i == 0xffffffff)
                return 0
            
            int64_t x10_1 = i_2 + x8 * 0x21d8
            x8 = 0
            
            if ((arg2.d & 1) == 0)
                do
                    if (*(i + 0x2c) == 0)
                        if (*(i + 0xa4) == arg1)
                            x8 = zx.q(x8.d + 1)
                        else
                            x8 = zx.q(x8.d)
                    
                    if (i == 0)
                        i = i_2
                    else
                        i += 0x21d8
                    
                    if (i u>= x10_1)
                        break
                    
                    while (zx.d(*(i + 0x21d2)) == 0)
                        i += 0x21d8
                        
                        if (i u>= x10_1)
                            return zx.q(x8.d)
                while (i != 0xffffffff)
            else
                void* i_1
                
                do
                    if (*(i + 0x2c) != 0)
                        i_1 = i_2
                        
                        if (i != 0)
                            i_1 = i + 0x21d8
                    else if (*(i + 0xa4) != arg1)
                        uint64_t x16_3 = zx.q(*(i + 0x1f78))
                        
                        if (x16_3.d s>= 1)
                            int64_t j_4
                            
                            if (x16_3.d != 1)
                                j_4 = x16_3 & 0xfffffffe
                                int32_t x1 = 0
                                void* x2_1 = i + 0x55c
                                int64_t j_2 = j_4
                                int64_t j
                                
                                do
                                    int32_t x4_3 = *(x2_1 - 0xe4)
                                    int32_t entry_x5
                                    
                                    if (x4_3 == 1)
                                        entry_x5 = *(x2_1 - 0xdc)
                                    
                                    int32_t x7_3 = *(x2_1 - 0xc)
                                    int32_t entry_x6
                                    
                                    if (x7_3 == 1)
                                        entry_x6 = *(x2_1 - 4)
                                    
                                    int32_t x7_1 = x7_3 == 1 ? 1 : 0
                                    int32_t x4_5 = (entry_x5 == 6 ? 1 : 0) & (x4_3 == 1 ? 1 : 0)
                                    int32_t x5 = entry_x6 == 6 ? 1 : 0
                                    
                                    if (x4_5 == 1)
                                        entry_x6 = *(x2_1 - 0xd8)
                                    
                                    entry_x5 = x5 & x7_1
                                    
                                    if (entry_x5 != 0)
                                        x7_1 = *x2_1
                                    
                                    entry_x6 = entry_x6 == arg1 ? 1 : 0
                                    x8 = zx.q(x8.d + (x4_5 & entry_x6))
                                    j = j_2
                                    j_2 -= 2
                                    x1 += entry_x5 & (x7_1 == arg1 ? 1 : 0)
                                    x2_1 += 0x1b0
                                while (j != 2)
                                x8 = zx.q(x1 + x8.d)
                                
                                if (j_4 != x16_3)
                                    goto label_af690c
                            else
                                j_4 = 0
                            label_af690c:
                                int32_t* x1_2 = i + j_4 * 0xd8 + 0x484
                                int64_t j_3 = x16_3 - j_4
                                int64_t j_1
                                
                                do
                                    if (x1_2[-3] == 1 && x1_2[-1] == 6)
                                        if (*x1_2 == arg1)
                                            x8 = zx.q(x8.d + 1)
                                        else
                                            x8 = zx.q(x8.d)
                                    
                                    j_1 = j_3
                                    j_3 -= 1
                                    x1_2 = &x1_2[0x36]
                                while (j_1 != 1)
                        
                        i_1 = i + 0x21d8
                    else
                        x8 = zx.q(x8.d + 1)
                        i_1 = i_2
                        
                        if (i != 0)
                            i_1 = i + 0x21d8
                    
                    while (true)
                        if (i_1 u>= x10_1)
                            return zx.q(x8.d)
                        
                        if (zx.d(*(i_1 + 0x21d2)) != 0)
                            break
                        
                        i_1 += 0x21d8
                    
                    i = i_1
                while (i_1 != 0xffffffff)
            
            break
        
        i += 0x21d8
        
        if (i u>= i_2 + x8 * 0x21d8)
            x8 = 0
            break

return zx.q(x8.d)
