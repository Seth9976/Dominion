// 函数: _Z20FlanimDisposeForGamev
// 地址: 0xf633c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = *gpGameData
int64_t* x21 = *(x20 + 0x18)

while (true)
    void* x8_1 = *x21
    void* x22 = x8_1
    
    while (true)
        int64_t x9_2 = x8_1 + zx.q(x21[1].d) * 0xa8
        
        if (x22 u>= x9_2)
        label_f63484:
            int64_t* x19 = *(x20 + 0x18)
            int64_t result
            
            if (*x19 == 0)
                result = XPooledFree(x19, 0x28)
                *(x20 + 0x18) = 0
            else
                void* x9_4 = nullptr
                void* x0_2
                
                while (true)
                    if (x9_4 == 0)
                        x0_2 = *x19
                        x9_4 = x0_2
                    else
                        x0_2 = *x19
                        x9_4 += 0xa8
                    
                    int64_t x10_7 = x0_2 + zx.q(x19[1].d) * 0xa8
                    
                    if (x9_4 u>= x10_7)
                        break
                    
                    while (true)
                        int32_t x11_2 = *(x9_4 + 0xa0)
                        
                        if (x11_2 u>> 0x10 != 0)
                            x19[2].d = x11_2 & 0xffff
                            *(x9_4 + 0xa0) = x19[2].d
                            *(x19 + 0x14) -= 1
                            break
                        
                        x9_4 += 0xa8
                        
                        if (x9_4 u>= x10_7)
                            goto label_f634fc
                
            label_f634fc:
                x19[1].d = 0
                x19[2].d = 0
                result = XFree(x0_2)
                x19[4] = 0
                __builtin_memset(x19, 0, 0x18)
                x19 = *(x20 + 0x18)
                
                if (x19 != 0)
                    result = XPooledFree(x19, 0x28)
                    *(x20 + 0x18) = 0
            
            return result
        
        uint32_t x8_3
        
        while (true)
            x8_3 = *(x22 + 0xa0)
            
            if (x8_3 u>> 0x10 != 0)
                break
            
            x22 += 0xa8
            
            if (x22 u>= x9_2)
                goto label_f63484
        
        void* x0_1 = *(x22 + 0x70)
        
        if (x0_1 != 0)
            XPooledFree(x0_1, *(x22 + 0x78) * 0x70)
            *(x22 + 0x70) = 0
            x20 = *gpGameData
            x8_3 = zx.d(*(x22 + 0xa0))
        
        void* x9_3 = *(x20 + 0x18)
        int32_t x10_2 = *(x9_3 + 0x10)
        *(x9_3 + 0x10) = x8_3 & 0xffff
        *(x22 + 0xa0) = x10_2
        *(x9_3 + 0x14) -= 1
        
        if (x22 == 0)
            break
        
        x8_1 = *x21
        x22 += 0xa8
