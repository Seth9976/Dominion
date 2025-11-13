// 函数: sub_f24e8c
// 地址: 0xf24e8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22 = arg4
int64_t* x21 = arg3
int64_t* x19 = arg2
int64_t* x20 = arg1
int32_t result = std::__ndk1::__sort4<std::__ndk1::__less<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >&, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >*>(
    arg1, arg2, arg3, arg4, arg6)
void* x8 = *x22
int64_t x12 = x22[1]

if (x8 != x12)
    void* x10_1 = *arg5
    int64_t x9_1 = 0
    
    while (true)
        if (arg5[1] - x10_1 != x9_1)
            uint32_t x13_1 = zx.d(*(x10_1 + x9_1))
            uint32_t x14_1 = zx.d(*(x8 + x9_1))
            
            if (x13_1 u>= x14_1)
                if (x14_1 u< x13_1)
                    break
                
                x9_1 += 1
                
                if (x12 - x8 == x9_1)
                    break
                
                continue
        
        *x22 = x10_1
        *arg5 = x8
        int64_t x9_2 = x22[1]
        x22[1] = arg5[1]
        arg5[1] = x9_2
        int64_t x9_3 = x22[2]
        x22[2] = arg5[2]
        arg5[2] = x9_3
        void* x8_3 = *x21
        int64_t x13_2 = x21[1]
        int32_t x9_4 = result + 1
        
        if (x8_3 != x13_2)
            void* x11_3 = *x22
            int64_t x10_2 = 0
            
            while (true)
                if (x22[1] - x11_3 != x10_2)
                    uint32_t x14_2 = zx.d(*(x11_3 + x10_2))
                    uint32_t x15_1 = zx.d(*(x8_3 + x10_2))
                    
                    if (x14_2 u>= x15_1)
                        if (x15_1 u< x14_2)
                            break
                        
                        x10_2 += 1
                        
                        if (x13_2 - x8_3 == x10_2)
                            break
                        
                        continue
                
                *x21 = x11_3
                *x22 = x8_3
                int64_t x9_5 = x21[1]
                x21[1] = x22[1]
                x22[1] = x9_5
                int64_t x9_6 = x21[2]
                x21[2] = x22[2]
                x22[2] = x9_6
                void* x8_6 = *x19
                int64_t x13_4 = x19[1]
                x9_4 = result + 2
                
                if (x8_6 != x13_4)
                    void* x11_4 = *x21
                    int64_t x10_3 = 0
                    
                    while (true)
                        if (x21[1] - x11_4 != x10_3)
                            uint32_t x14_3 = zx.d(*(x11_4 + x10_3))
                            uint32_t x15_2 = zx.d(*(x8_6 + x10_3))
                            
                            if (x14_3 u>= x15_2)
                                if (x15_2 u< x14_3)
                                    break
                                
                                x10_3 += 1
                                
                                if (x13_4 - x8_6 == x10_3)
                                    break
                                
                                continue
                        
                        *x19 = x11_4
                        *x21 = x8_6
                        int64_t x9_7 = x19[1]
                        x19[1] = x21[1]
                        x21[1] = x9_7
                        int64_t x9_8 = x19[2]
                        x19[2] = x21[2]
                        x21[2] = x9_8
                        void* x8_9 = *x20
                        int64_t x13_6 = x20[1]
                        x9_4 = result + 3
                        
                        if (x8_9 != x13_6)
                            void* x11_5 = *x19
                            int64_t x10_4 = 0
                            
                            while (true)
                                if (x19[1] - x11_5 != x10_4)
                                    uint32_t x14_4 = zx.d(*(x11_5 + x10_4))
                                    uint32_t x15_3 = zx.d(*(x8_9 + x10_4))
                                    
                                    if (x14_4 u>= x15_3)
                                        if (x15_3 u< x14_4)
                                            break
                                        
                                        x10_4 += 1
                                        
                                        if (x13_6 - x8_9 == x10_4)
                                            break
                                        
                                        continue
                                
                                *x20 = x11_5
                                *x19 = x8_9
                                int64_t x9_9 = x20[1]
                                x20[1] = x19[1]
                                x19[1] = x9_9
                                int64_t x9_10 = x20[2]
                                x20[2] = x19[2]
                                x19[2] = x9_10
                                return zx.q(result + 4)
                        
                        break
                
                break
        
        return zx.q(x9_4)

return result
