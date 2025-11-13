// 函数: sub_10f2648
// 地址: 0x10f2648
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *arg1
void* x8 = arg1[1]

if (x8 - x9 u>= 2 && zx.d(*x9) == 0x66)
    void* x9_5
    void* x10_9
    void* x20_1
    void* x21_1
    
    if (zx.d(x9[1]) == 0x70)
        x20_1 = &x9[2]
        *arg1 = x20_1
        
        if (x20_1 != x8)
            if (zx.d(*x20_1) == 0x72)
                x20_1 = &x9[3]
                *arg1 = x20_1
            
            if (x20_1 != x8)
                if (zx.d(*x20_1) == 0x56)
                    x20_1 += 1
                    *arg1 = x20_1
                
                if (x20_1 != x8 && zx.d(*x20_1) == 0x4b)
                    x20_1 += 1
                    *arg1 = x20_1
            
            if (x8 != x20_1)
                if (zx.d(*x20_1) - 0x30 u<= 9)
                    x10_9 = x20_1 + 1
                    
                    do
                        x9_5 = x10_9
                        *arg1 = x10_9
                        
                        if (x8 == x10_9)
                            goto label_10f2870
                        
                        x10_9 = x9_5 + 1
                    while (zx.d(*x9_5) - 0x30 u< 0xa)
                    
                label_10f27a0:
                    x21_1 = x10_9 - 1
                else
                label_10f26fc:
                    x21_1 = nullptr
                    x9_5 = x20_1
                    x20_1 = nullptr
                
            label_10f2874:
                
                if (x9_5 != x8 && zx.d(*x9_5) == 0x5f)
                    void** x22_1 = arg1[0x266]
                    *arg1 = x9_5 + 1
                    int64_t x8_3 = x22_1[1]
                    
                    if (x8_3 + 0x20 u>= 0xff0)
                        void** x0 = malloc(0x1000)
                        
                        if (x0 == 0)
                            std::terminate()
                            noreturn
                        
                        x8_3 = 0
                        *x0 = x22_1
                        x0[1] = 0
                        x22_1 = x0
                        arg1[0x266] = x0
                    
                    x22_1[1] = x8_3 + 0x20
                    void* result = x22_1 + x8_3 + 0x10
                    *result = &_vtable_for_(anonymous namespace)::itanium_demangle::FunctionParam{for `(anonymous namespace)::itanium_demangle::Node'}
                    *(result + 8) = 0x101013b
                    *(result + 0x10) = x20_1
                    *(result + 0x18) = x21_1
                    return result
    else if (zx.d(*x9) == 0x66 && zx.d(x9[1]) == 0x4c)
        void* x11_1 = &x9[2]
        *arg1 = x11_1
        
        if (x8 != x11_1 && zx.d(*x11_1) - 0x30 u<= 9)
            void* x9_9
            char* x10_8
            
            while (true)
                x10_8 = x9
                *arg1 = &x9[3]
                
                if (x8 - 3 == x10_8)
                    x9_9 = x8
                    break
                
                x9 = &x10_8[1]
                
                if (zx.d(x10_8[3]) - 0x30 u>= 0xa)
                    x9_9 = &x9[2]
                    break
            
            if (x11_1 == x9_9 || x8 - 3 == x10_8)
                return nullptr
            
            if (zx.d(x10_8[3]) == 0x70)
                x20_1 = &x10_8[4]
                *arg1 = x20_1
                
                if (x8 - 4 != x10_8)
                    if (zx.d(*x20_1) == 0x72)
                        x20_1 = &x10_8[5]
                        *arg1 = x20_1
                    
                    if (x20_1 != x8)
                        if (zx.d(*x20_1) == 0x56)
                            x20_1 += 1
                            *arg1 = x20_1
                        
                        if (x20_1 != x8 && zx.d(*x20_1) == 0x4b)
                            x20_1 += 1
                            *arg1 = x20_1
                    
                    if (x8 != x20_1)
                        if (zx.d(*x20_1) - 0x30 u> 9)
                            goto label_10f26fc
                        
                        x10_9 = x20_1 + 1
                        
                        do
                            x9_5 = x10_9
                            *arg1 = x10_9
                            
                            if (x8 == x10_9)
                            label_10f2870:
                                x21_1 = x8
                                goto label_10f2874
                            
                            x10_9 = x9_5 + 1
                        while (zx.d(*x9_5) - 0x30 u< 0xa)
                        
                        goto label_10f27a0

return nullptr
