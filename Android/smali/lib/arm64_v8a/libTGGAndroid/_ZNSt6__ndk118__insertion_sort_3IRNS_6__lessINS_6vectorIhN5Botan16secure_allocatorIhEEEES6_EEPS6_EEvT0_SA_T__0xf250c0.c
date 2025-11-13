// 函数: _ZNSt6__ndk118__insertion_sort_3IRNS_6__lessINS_6vectorIhN5Botan16secure_allocatorIhEEEES6_EEPS6_EEvT0_SA_T_
// 地址: 0xf250c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 0x30) x21 =
    arg1 + 0x30
void* result
int128_t v0
result, v0 = std::__ndk1::__sort3<std::__ndk1::__less<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >&, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >*>(
    arg1, arg1 + 0x18, x21, arg3)
void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 0x48) x22 =
    arg1 + 0x48

if (x22 != arg2)
    while (true)
        void* x9_1 = *x21
        int64_t x11_1 = *(x21 + 8)
        
        if (x9_1 != x11_1)
            void* x24_1 = *x22
            int64_t x23_1 = *(x22 + 8)
            int64_t x10_1 = 0
            void* x8_2 = x23_1 - x24_1
            
            while (true)
                if (x8_2 != x10_1)
                    uint32_t x12_1 = zx.d(*(x24_1 + x10_1))
                    uint32_t x13_1 = zx.d(*(x9_1 + x10_1))
                    
                    if (x12_1 u>= x13_1)
                        if (x13_1 u< x12_1)
                            break
                        
                        x10_1 += 1
                        
                        if (x11_1 - x9_1 == x10_1)
                            break
                        
                        continue
                
                int64_t x25_1 = *(x22 + 0x10)
                *(x22 + 8) = 0
                *(x22 + 0x10) = 0
                *x22 = x9_1
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x28_1 = arg1
                *(x22 + 8) = *(x21 + 8)
                *(x22 + 0x10) = *(x21 + 0x10)
                __builtin_memset(x21, 0, 0x18)
                void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 
                    0x10) x26_1
                void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 
                    0x38) x27_1
                
                if (x21 == arg1)
                label_f25234:
                    result = *x28_1
                    x27_1 = x28_1 + 8
                    x26_1 = x28_1 + 0x10
                    
                    if (result == 0)
                        x21 = x28_1
                    else
                    label_f25240:
                        *x27_1 = result
                        result, v0 = Botan::deallocate_memory(result, *x26_1 - result, 1)
                        __builtin_memset(x28_1, 0, 0x18)
                        x21 = x28_1
                else
                    void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 
                        0x30) x9_4 = x21
                label_f251c4:
                    x9_4 -= 0x18
                    void* x10_2 = *x9_4
                    int64_t x12_2 = *(x9_4 + 8)
                    
                    if (x10_2 == x12_2)
                        x28_1 = x21
                        result = *x28_1
                        x27_1 = x28_1 + 8
                        x26_1 = x28_1 + 0x10
                        
                        if (result != 0)
                            goto label_f25240
                        
                        x21 = x28_1
                    else
                        int64_t x11_3 = 0
                        
                        while (true)
                            if (x8_2 != x11_3)
                                uint32_t x13_2 = zx.d(*(x24_1 + x11_3))
                                uint32_t x14_1 = zx.d(*(x10_2 + x11_3))
                                
                                if (x13_2 u>= x14_1)
                                    if (x14_1 u>= x13_2)
                                        x11_3 += 1
                                        
                                        if (x12_2 - x10_2 != x11_3)
                                            continue
                                    
                                    x26_1 = x21 + 0x10
                                    x27_1 = x21 + 8
                                    break
                            
                            v0 = *(x21 - 0x10)
                            *x21 = x10_2
                            *(x21 + 8) = v0
                            x21 = x9_4
                            __builtin_memset(x9_4, 0, 0x18)
                            
                            if (x9_4 != arg1)
                                goto label_f251c4
                            
                            x28_1 = arg1
                            goto label_f25234
                
                *x21 = x24_1
                *x27_1 = x23_1
                *x26_1 = x25_1
                break
        
        bool cond:0_1 = x22 + 0x18 == arg2
        x21 = x22
        x22 += 0x18
        
        if (cond:0_1)
            break

return result
