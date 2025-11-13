// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessINS_6vectorIhN5Botan16secure_allocatorIhEEEES6_EEPS6_EEbT0_SA_T_
// 地址: 0xf25280
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_2 = ((arg2 - arg1) s>> 3) * -0x5555555555555555
char x9

if (x8_2 u> 5)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x21_1 = arg1 + 0x30
    std::__ndk1::__sort3<std::__ndk1::__less<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >&, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >*>(
        arg1, arg1 + 0x18, x21_1, arg3)
    void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 0x18) x9_3 =
        arg1 + 0x48
    char x8_6
    
    if (x9_3 != arg2)
        int32_t x22_1 = 0
        
        while (true)
            void* x10_3 = *x21_1
            int64_t x12_3 = *(x21_1 + 8)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x8_4 = x21_1
            x21_1 = x9_3
            
            if (x10_3 != x12_3)
                void* x24_1 = *x21_1
                int64_t x23_1 = *(x21_1 + 8)
                int64_t x11_3 = 0
                void* x9_4 = x23_1 - x24_1
                
                while (true)
                    if (x9_4 != x11_3)
                        uint32_t x13_2 = zx.d(*(x24_1 + x11_3))
                        uint32_t x14_2 = zx.d(*(x10_3 + x11_3))
                        
                        if (x13_2 u>= x14_2)
                            if (x14_2 u< x13_2)
                                goto label_f25378
                            
                            x11_3 += 1
                            
                            if (x12_3 - x10_3 == x11_3)
                                goto label_f25378
                            
                            continue
                    
                    int64_t x25_1 = *(x21_1 + 0x10)
                    *(x21_1 + 8) = 0
                    *(x21_1 + 0x10) = 0
                    *x21_1 = x10_3
                    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x28_1 = arg1
                    *(x21_1 + 8) = *(x8_4 + 8)
                    *(x21_1 + 0x10) = *(x8_4 + 0x10)
                    __builtin_memset(x8_4, 0, 0x18)
                    
                    if (x8_4 == arg1)
                        goto label_f25480
                    
                    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x10_6 = x8_4
                label_f2540c:
                    x10_6 -= 0x18
                    void* x11_4 = *x10_6
                    int64_t x13_3 = *(x10_6 + 8)
                    void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 
                        0x10) x26_1
                    void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 
                        0x8) x27_1
                    
                    if (x11_4 == x13_3)
                        x28_1 = x8_4
                    label_f25480:
                        int64_t* x27_2 = x28_1
                        void* x0_1 = *x27_2
                        x27_1 = &x27_2[1]
                        x26_1 = x28_1 + 0x10
                        
                        if (x0_1 != 0)
                            *x27_1 = x0_1
                            Botan::deallocate_memory(x0_1, *x26_1 - x0_1, 1)
                            __builtin_memset(x28_1, 0, 0x18)
                        
                        x8_4 = x28_1
                    else
                        int64_t x12_5 = 0
                        
                        while (true)
                            if (x9_4 != x12_5)
                                uint32_t x14_3 = zx.d(*(x24_1 + x12_5))
                                uint32_t x15_1 = zx.d(*(x11_4 + x12_5))
                                
                                if (x14_3 u>= x15_1)
                                    if (x15_1 u>= x14_3)
                                        x12_5 += 1
                                        
                                        if (x13_3 - x11_4 != x12_5)
                                            continue
                                    
                                    x26_1 = x8_4 + 0x10
                                    x27_1 = x8_4 + 8
                                    break
                            
                            int128_t v0_1 = *(x8_4 - 0x10)
                            *x8_4 = x11_4
                            *(x8_4 + 8) = v0_1
                            x8_4 = x10_6
                            __builtin_memset(x10_6, 0, 0x18)
                            
                            if (x10_6 != arg1)
                                goto label_f2540c
                            
                            x28_1 = arg1
                            goto label_f25480
                    
                    x22_1 += 1
                    *x8_4 = x24_1
                    *x27_1 = x23_1
                    *x26_1 = x25_1
                    
                    if (x22_1 != 8)
                        break
                    
                    x8_6 = 0
                    x9_3 = zx.q(x21_1 + 0x18 == arg2 ? 1 : 0)
                    goto label_f25508
            
        label_f25378:
            x9_3 = x21_1 + 0x18
            
            if (x9_3 == arg2)
                break
    
    x8_6 = 1
label_f25508:
    x9 = x8_6 | x9_3.b
else
    x9 = 1
    
    switch (x8_2)
        case 2
            void* x8_3 = *arg1
            int64_t x9_1 = *(arg1 + 8)
            
            if (x8_3 != x9_1)
                void* x11_2 = *(arg2 - 0x18)
                int64_t x10_2 = 0
                
                while (true)
                    if (*(arg2 - 0x10) - x11_2 != x10_2)
                        uint32_t x9_2 = zx.d(*(x11_2 + x10_2))
                        uint32_t x14_1 = zx.d(*(x8_3 + x10_2))
                        
                        if (x9_2 u>= x14_1)
                            if (x14_1 u< x9_2)
                                break
                            
                            x10_2 += 1
                            
                            if (x9_1 - x8_3 == x10_2)
                                return 1
                            
                            continue
                    
                    *arg1 = x11_2
                    *(arg2 - 0x18) = x8_3
                    int64_t x9_5 = *(arg1 + 8)
                    *(arg1 + 8) = *(arg2 - 0x10)
                    *(arg2 - 0x10) = x9_5
                    int64_t x9_6 = *(arg1 + 0x10)
                    *(arg1 + 0x10) = *(arg2 - 8)
                    *(arg2 - 8) = x9_6
                    break
            
            x9 = 1
        case 3
            std::__ndk1::__sort3<std::__ndk1::__less<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >&, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >*>(
                arg1, arg1 + 0x18, arg2 - 0x18, arg3)
            x9 = 1
        case 4
            std::__ndk1::__sort4<std::__ndk1::__less<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >&, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >*>(
                arg1, arg1 + 0x18, arg1 + 0x30, arg2 - 0x18, arg3)
            x9 = 1
        case 5
            sub_f24e8c(arg1, arg1 + 0x18, arg1 + 0x30, arg1 + 0x48, arg2 - 0x18, arg3)
            x9 = 1

return x9 & 1
