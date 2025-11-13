// 函数: _ZNSt6__ndk17__sort4IRNS_6__lessINS_6vectorIhN5Botan16secure_allocatorIhEEEES6_EEPS6_EEjT0_SA_SA_SA_T_
// 地址: 0xf24cd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = std::__ndk1::__sort3<std::__ndk1::__less<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >&, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >*>(
    arg1, arg2, arg3, arg5)
void* x8 = *arg3
int64_t x12 = *(arg3 + 8)

if (x8 != x12)
    void* x10_1 = *arg4
    int64_t x9_1 = 0
    
    while (true)
        if (*(arg4 + 8) - x10_1 != x9_1)
            uint32_t x13_1 = zx.d(*(x10_1 + x9_1))
            uint32_t x14_1 = zx.d(*(x8 + x9_1))
            
            if (x13_1 u>= x14_1)
                if (x14_1 u< x13_1)
                    break
                
                x9_1 += 1
                
                if (x12 - x8 == x9_1)
                    break
                
                continue
        
        *arg3 = x10_1
        *arg4 = x8
        int64_t x9_2 = *(arg3 + 8)
        *(arg3 + 8) = *(arg4 + 8)
        *(arg4 + 8) = x9_2
        int64_t x9_3 = *(arg3 + 0x10)
        *(arg3 + 0x10) = *(arg4 + 0x10)
        *(arg4 + 0x10) = x9_3
        void* x8_3 = *arg2
        int64_t x13_2 = *(arg2 + 8)
        int32_t x9_4 = x0 + 1
        
        if (x8_3 != x13_2)
            void* x11_3 = *arg3
            int64_t x10_2 = 0
            
            while (true)
                if (*(arg3 + 8) - x11_3 != x10_2)
                    uint32_t x14_2 = zx.d(*(x11_3 + x10_2))
                    uint32_t x15_1 = zx.d(*(x8_3 + x10_2))
                    
                    if (x14_2 u>= x15_1)
                        if (x15_1 u< x14_2)
                            break
                        
                        x10_2 += 1
                        
                        if (x13_2 - x8_3 == x10_2)
                            break
                        
                        continue
                
                *arg2 = x11_3
                *arg3 = x8_3
                int64_t x9_5 = *(arg2 + 8)
                *(arg2 + 8) = *(arg3 + 8)
                *(arg3 + 8) = x9_5
                int64_t x9_6 = *(arg2 + 0x10)
                *(arg2 + 0x10) = *(arg3 + 0x10)
                *(arg3 + 0x10) = x9_6
                void* x8_6 = *arg1
                int64_t x13_4 = *(arg1 + 8)
                x9_4 = x0 + 2
                
                if (x8_6 != x13_4)
                    void* x11_4 = *arg2
                    int64_t x10_3 = 0
                    
                    while (true)
                        if (*(arg2 + 8) - x11_4 != x10_3)
                            uint32_t x14_3 = zx.d(*(x11_4 + x10_3))
                            uint32_t x15_2 = zx.d(*(x8_6 + x10_3))
                            
                            if (x14_3 u>= x15_2)
                                if (x15_2 u< x14_3)
                                    break
                                
                                x10_3 += 1
                                
                                if (x13_4 - x8_6 == x10_3)
                                    break
                                
                                continue
                        
                        *arg1 = x11_4
                        *arg2 = x8_6
                        int64_t x9_7 = *(arg1 + 8)
                        *(arg1 + 8) = *(arg2 + 8)
                        *(arg2 + 8) = x9_7
                        int64_t x9_8 = *(arg1 + 0x10)
                        *(arg1 + 0x10) = *(arg2 + 0x10)
                        *(arg2 + 0x10) = x9_8
                        return x0 + 3
                
                break
        
        return x9_4

return x0
