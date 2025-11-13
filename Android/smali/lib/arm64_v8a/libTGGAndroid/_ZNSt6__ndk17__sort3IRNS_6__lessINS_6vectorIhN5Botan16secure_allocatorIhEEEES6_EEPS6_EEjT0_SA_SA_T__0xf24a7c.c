// 函数: _ZNSt6__ndk17__sort3IRNS_6__lessINS_6vectorIhN5Botan16secure_allocatorIhEEEES6_EEPS6_EEjT0_SA_SA_T_
// 地址: 0xf24a7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9_12 = *arg1
int64_t x13_6 = *(arg1 + 8)
void* x8 = *arg2
int64_t x11 = *(arg2 + 8)

if (x9_12 == x13_6)
label_f24ac4:
    
    if (x8 == x11)
        return 0
    
    void* x10_2 = *arg3
    int64_t i = 0
    
    while (*(arg3 + 8) - x10_2 != i)
        uint32_t x13_1 = zx.d(*(x10_2 + i))
        uint32_t x14_2 = zx.d(*(x8 + i))
        
        if (x13_1 u< x14_2)
            break
        
        if (x14_2 u< x13_1)
            return 0
        
        i += 1
        
        if (x11 - x8 == i)
            return 0
    
    *arg2 = x10_2
    *arg3 = x8
    int64_t x9_3 = *(arg2 + 8)
    *(arg2 + 8) = *(arg3 + 8)
    *(arg3 + 8) = x9_3
    int64_t x9_4 = *(arg2 + 0x10)
    *(arg2 + 0x10) = *(arg3 + 0x10)
    *(arg3 + 0x10) = x9_4
    void* x8_6 = *arg1
    int64_t x12_7 = *(arg1 + 8)
    
    if (x8_6 != x12_7)
        void* x10_4 = *arg2
        int64_t x9_5 = 0
        
        while (true)
            if (*(arg2 + 8) - x10_4 != x9_5)
                uint32_t x13_5 = zx.d(*(x10_4 + x9_5))
                uint32_t x14_5 = zx.d(*(x8_6 + x9_5))
                
                if (x13_5 u>= x14_5)
                    if (x14_5 u< x13_5)
                        break
                    
                    x9_5 += 1
                    
                    if (x12_7 - x8_6 == x9_5)
                        return 1
                    
                    continue
            
            *arg1 = x10_4
            *arg2 = x8_6
            int64_t x9_10 = *(arg1 + 8)
            *(arg1 + 8) = *(arg2 + 8)
            *(arg2 + 8) = x9_10
            int64_t x9_11 = *(arg1 + 0x10)
            *(arg1 + 0x10) = *(arg2 + 0x10)
            *(arg2 + 0x10) = x9_11
            return 2
else
    int64_t x12_1 = 0
    void* x10_1 = x11 - x8
    
    while (true)
        if (x10_1 != x12_1)
            uint32_t x14_1 = zx.d(*(x8 + x12_1))
            uint32_t x15_1 = zx.d(*(x9_12 + x12_1))
            
            if (x14_1 u>= x15_1)
                if (x15_1 u< x14_1)
                    goto label_f24ac4
                
                x12_1 += 1
                
                if (x13_6 - x9_12 == x12_1)
                    goto label_f24ac4
                
                continue
        
        if (x8 != x11)
            void* x12_4 = *arg3
            int64_t x11_2 = 0
            
            while (true)
                if (*(arg3 + 8) - x12_4 != x11_2)
                    uint32_t x14_3 = zx.d(*(x12_4 + x11_2))
                    uint32_t x15_2 = zx.d(*(x8 + x11_2))
                    
                    if (x14_3 u>= x15_2)
                        if (x15_2 u< x14_3)
                            break
                        
                        x11_2 += 1
                        
                        if (x10_1 == x11_2)
                            break
                        
                        continue
                
                *arg1 = x12_4
                *arg3 = x9_12
                int64_t x9_6 = *(arg1 + 8)
                *(arg1 + 8) = *(arg3 + 8)
                *(arg3 + 8) = x9_6
                int64_t x9_7 = *(arg1 + 0x10)
                *(arg1 + 0x10) = *(arg3 + 0x10)
                *(arg3 + 0x10) = x9_7
                return 1
        
        *arg1 = x8
        int64_t x8_1 = *(arg2 + 8)
        *arg2 = x9_12
        int64_t x9 = *(arg1 + 8)
        *(arg1 + 8) = x8_1
        int64_t x8_2 = *(arg2 + 0x10)
        *(arg2 + 8) = x9
        int64_t x9_1 = *(arg1 + 0x10)
        *(arg1 + 0x10) = x8_2
        void* x8_3 = *arg2
        int64_t x12_5 = *(arg2 + 8)
        *(arg2 + 0x10) = x9_1
        
        if (x8_3 != x12_5)
            void* x10_3 = *arg3
            int64_t x9_2 = 0
            
            while (true)
                if (*(arg3 + 8) - x10_3 != x9_2)
                    uint32_t x13_4 = zx.d(*(x10_3 + x9_2))
                    uint32_t x14_4 = zx.d(*(x8_3 + x9_2))
                    
                    if (x13_4 u>= x14_4)
                        if (x14_4 u< x13_4)
                            break
                        
                        x9_2 += 1
                        
                        if (x12_5 - x8_3 == x9_2)
                            break
                        
                        continue
                
                *arg2 = x10_3
                *arg3 = x8_3
                int64_t x9_8 = *(arg2 + 8)
                *(arg2 + 8) = *(arg3 + 8)
                *(arg3 + 8) = x9_8
                int64_t x9_9 = *(arg2 + 0x10)
                *(arg2 + 0x10) = *(arg3 + 0x10)
                *(arg3 + 0x10) = x9_9
                return 2
        
        break

return 1
