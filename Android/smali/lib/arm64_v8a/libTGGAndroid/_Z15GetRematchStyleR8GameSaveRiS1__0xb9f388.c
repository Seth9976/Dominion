// 函数: _Z15GetRematchStyleR8GameSaveRiS1_
// 地址: 0xb9f388
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg2 = 0
*arg3 = 0
void* x0 = GetClient()
uint64_t x12 = zx.q(*(x0 + 0x5088))

if (x12.d != 0)
    void* x9_1 = *(x0 + 0x5080)
    void* x8_1 = x9_1
    
    while (zx.d(*(x8_1 + 0x1332)) == 0)
        x8_1 += 0x1338
        
        if (x8_1 u>= x9_1 + x12 * 0x1338)
            return 0
    
    if (x8_1 != 0xffffffff)
        int64_t x12_1 = x9_1 + x12 * 0x1338
        
        while (true)
            if (*x8_1 == *(arg1 + 0x1300))
                *arg3 = *(x8_1 + 0x11b4)
                
                if (*(x8_1 + 0x11b4) s>= 1)
                    int64_t i = 0
                    void* x10_2 = x8_1 + 0x68
                    
                    do
                        if (*x10_2 != 1)
                            *arg3 -= 1
                        else
                            int32_t x11_6 = *(x10_2 + 0xc)
                            
                            if (x11_6 - 2 u< 3)
                                *arg2 += 1
                            else if (x11_6 != 1)
                                return 3
                        
                        i += 1
                        x10_2 += 0x22c
                    while (i s< sx.q(*(x8_1 + 0x11b4)))
                
                if ((zx.d(*(x8_1 + 0x20)) & 0x10) == 0)
                    return 2
                
                return 1
            
            if (x8_1 == 0)
                x8_1 = x9_1
            else
                x8_1 += 0x1338
            
            if (x8_1 u>= x12_1)
                return 0
            
            while (zx.d(*(x8_1 + 0x1332)) == 0)
                x8_1 += 0x1338
                
                if (x8_1 u>= x12_1)
                    return 0
            
            if (x8_1 == 0xffffffff)
                return 0

return 0
