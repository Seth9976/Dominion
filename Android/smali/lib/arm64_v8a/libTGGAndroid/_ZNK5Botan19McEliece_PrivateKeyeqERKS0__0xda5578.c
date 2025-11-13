// 函数: _ZNK5Botan19McEliece_PrivateKeyeqERKS0_
// 地址: 0xda5578
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *(arg1 + 0x80)
int64_t x8_8 = *(arg1 + 0x88)
void* entry_x1
char* x10 = *(entry_x1 + 0x80)

if (x8_8 - x9 == *(entry_x1 + 0x88) - x10)
    if (x9 != x8_8)
        do
            if (zx.d(*x9) != zx.d(*x10))
                return 0
            
            x9 = &x9[1]
            x10 = &x10[1]
        while (x8_8 != x9)
    
    if (*(arg1 + 0x98) == *(entry_x1 + 0x98) && *(arg1 + 0xa0) == *(entry_x1 + 0xa0))
        int32_t* x9_3 = *(arg1 + 8)
        int64_t x8_2 = *(arg1 + 0x10)
        int32_t* x10_1 = *(entry_x1 + 8)
        
        if (x8_2 - x9_3 == *(entry_x1 + 0x10) - x10_1)
            if (x9_3 != x8_2)
                do
                    if (*x9_3 != *x10_1)
                        return 0
                    
                    int16_t* x12_9 = *(x9_3 + 8)
                    int64_t x11_14 = *(x9_3 + 0x10)
                    int16_t* x13_1 = *(x10_1 + 8)
                    
                    if (x11_14 - x12_9 != *(x10_1 + 0x10) - x13_1)
                        return 0
                    
                    if (x12_9 != x11_14)
                        do
                            if (zx.d(*x12_9) != zx.d(*x13_1))
                                return 0
                            
                            x12_9 = &x12_9[1]
                            x13_1 = &x13_1[1]
                        while (x11_14 != x12_9)
                    
                    x9_3 = &x9_3[0xc]
                    x10_1 = &x10_1[0xc]
                while (x9_3 != x8_2)
            
            int32_t* x9_8 = *(arg1 + 0x20)
            int64_t x8_3 = *(arg1 + 0x28)
            int32_t* x10_2 = *(entry_x1 + 0x20)
            
            if (x8_3 - x9_8 == *(entry_x1 + 0x28) - x10_2)
                if (x9_8 != x8_3)
                    do
                        if (*x9_8 != *x10_2)
                            return 0
                        
                        int16_t* x12_11 = *(x9_8 + 8)
                        int64_t x11_16 = *(x9_8 + 0x10)
                        int16_t* x13_2 = *(x10_2 + 8)
                        
                        if (x11_16 - x12_11 != *(x10_2 + 0x10) - x13_2)
                            return 0
                        
                        if (x12_11 != x11_16)
                            do
                                if (zx.d(*x12_11) != zx.d(*x13_2))
                                    return 0
                                
                                x12_11 = &x12_11[1]
                                x13_2 = &x13_2[1]
                            while (x11_16 != x12_11)
                        
                        x9_8 = &x9_8[0xc]
                        x10_2 = &x10_2[0xc]
                    while (x9_8 != x8_3)
                
                int16_t* x9_4 = *(arg1 + 0x38)
                int64_t x8_4 = *(arg1 + 0x40)
                int16_t* x10_3 = *(entry_x1 + 0x38)
                
                if (x8_4 - x9_4 == *(entry_x1 + 0x40) - x10_3)
                    if (x9_4 != x8_4)
                        do
                            if (zx.d(*x9_4) != zx.d(*x10_3))
                                return 0
                            
                            x9_4 = &x9_4[1]
                            x10_3 = &x10_3[1]
                        while (x8_4 != x9_4)
                    
                    int32_t* x9_5 = *(arg1 + 0x50)
                    int64_t x8_5 = *(arg1 + 0x58)
                    int32_t* x10_4 = *(entry_x1 + 0x50)
                    
                    if (x8_5 - x9_5 == *(entry_x1 + 0x58) - x10_4)
                        if (x9_5 != x8_5)
                            do
                                if (*x9_5 != *x10_4)
                                    return 0
                                
                                x9_5 = &x9_5[1]
                                x10_4 = &x10_4[1]
                            while (x8_5 != x9_5)
                        
                        if (*(arg1 + 0x68) == *(entry_x1 + 0x68))
                            return zx.q(*(arg1 + 0x70) == *(entry_x1 + 0x70) ? 1 : 0)

return 0
