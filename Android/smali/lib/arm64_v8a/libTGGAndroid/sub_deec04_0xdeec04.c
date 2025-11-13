// 函数: sub_deec04
// 地址: 0xdeec04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::SymmetricAlgorithm::set_key(&arg3[1], arg4)
void* result_1
__builtin_memset(&result_1, 0, 0x18)
void* result_9
void* var_90
void* result_7
void* result_6
void* result_8

if (arg7 == 0)
    result_8 = nullptr
    result_6 = nullptr
    __builtin_memset(&var_90, 0, 0x18)
    
    if (arg2 != 0)
    label_deeca8:
        void* x25_1 = nullptr
        void* x0_10
        
        while (true)
            (*(*arg3 + 0x18))(arg3, result_6, result_8 - result_6)
            Botan::Buffered_Computation::final()
            void* result_5 = result_1
            
            if (result_5 != 0)
                result_7 = result_5
                Botan::deallocate_memory(result_5, result_9 - result_5, 1)
            
            void* result_3
            result_1 = result_3
            int128_t var_a8
            result_7.o = var_a8
            (*(*arg3 + 0x18))(arg3, result_3, var_a8.q - result_3)
            (*(*arg3 + 0x18))(arg3, arg6, arg7)
            int64_t x0_7 = (**arg3)(arg3)
            void* x1_6 = var_90
            void* var_88_1
            int64_t x8_12 = var_88_1 - x1_6
            
            if (x0_7 u> x8_12)
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_90)
                x1_6 = var_90
            else if (x0_7 u< x8_12)
                var_88_1 = x1_6 + x0_7
            
            int128_t v0_2
            int128_t v1_1
            int128_t v2_1
            int128_t v3_1
            int128_t v4_1
            int128_t v5_1
            int128_t v6_1
            int128_t v7_1
            v0_2, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = (*(*arg3 + 0x20))(arg3, x1_6)
            x0_10 = var_90
            void* x11_1 = arg2 - x25_1
            void* x10_1 = var_88_1 - x0_10
            void* x8_18
            
            x8_18 = x11_1 u< x10_1 ? x11_1 : x10_1
            
            void* x9_2 = x8_18 & 0xffffffffffffffe0
            
            if (x9_2 != 0)
                int64_t x12_1 = 0
                
                if (x9_2 == 0x20)
                    goto label_deee70
                
                void* x15_1 = arg1 + 0x18 + x25_1
                int64_t x16_1 = arg1 + 0x10 + x25_1
                void* x1_8 = arg1 + 8 + x25_1
                void* x13_1 = arg1 + x25_1
                
                if (x15_1 + x9_2 - 0x20 u< x15_1 || x16_1 + x9_2 - 0x20 u< x16_1
                        || x1_8 + x9_2 - 0x20 u< x1_8 || x13_1 + x9_2 - 0x20 u< x13_1)
                    goto label_deee70
                
                if (x13_1 u>= x0_10 + x9_2 || x0_10 u>= x9_2 + x25_1 + arg1 + 0x20 - 0x20)
                    int64_t i_8 = (((x9_2 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                    x12_1 = i_8 << 5
                    int64_t i_7 = i_8
                    void* x17_2 = x0_10
                    int64_t i
                    
                    do
                        v0_2.q = *x13_1
                        v1_1.q = *(x13_1 + 8)
                        v2_1.q = *(x13_1 + 0x10)
                        v3_1.q = *(x13_1 + 0x18)
                        v0_2:8.q = *(x13_1 + 0x20)
                        v1_1:8.q = *(x13_1 + 0x28)
                        v2_1:8.q = *(x13_1 + 0x30)
                        v3_1:8.q = *(x13_1 + 0x38)
                        v4_1.q = *x17_2
                        v5_1.q = *(x17_2 + 8)
                        v6_1.q = *(x17_2 + 0x10)
                        v7_1.q = *(x17_2 + 0x18)
                        v4_1:8.q = *(x17_2 + 0x20)
                        v5_1:8.q = *(x17_2 + 0x28)
                        v6_1:8.q = *(x17_2 + 0x30)
                        v7_1:8.q = *(x17_2 + 0x38)
                        x17_2 += 0x40
                        i = i_7
                        i_7 -= 2
                        int128_t v16_1 = v4_1 ^ v0_2
                        int128_t v17_1 = v5_1 ^ v1_1
                        int128_t v18_1 = v6_1 ^ v2_1
                        int128_t v19_1 = v7_1 ^ v3_1
                        *x13_1 = v16_1.q
                        *(x13_1 + 8) = v17_1.q
                        *(x13_1 + 0x10) = v18_1.q
                        *(x13_1 + 0x18) = v19_1.q
                        *(x13_1 + 0x20) = v16_1:8.q
                        *(x13_1 + 0x28) = v17_1:8.q
                        *(x13_1 + 0x30) = v18_1:8.q
                        *(x13_1 + 0x38) = v19_1:8.q
                        x13_1 += 0x40
                    while (i != 2)
                    
                    if (((x9_2 - 0x20) u>> 5) + 1 != i_8)
                        goto label_deee70
                else
                    x12_1 = 0
                label_deee70:
                    void* i_6 = x12_1 - x9_2
                    void* x12_7 = arg1 + 0x10 + x12_1 + x25_1
                    void* x14_4 = x0_10 + x12_1 + 0x10
                    void* i_1
                    
                    do
                        v2_1 = *(x14_4 - 0x10)
                        v3_1 = *x14_4
                        i_1 = i_6
                        i_6 += 0x20
                        x14_4 += 0x20
                        v1_1 = v3_1 ^ *x12_7
                        *(x12_7 - 0x10) ^= v2_1
                        *x12_7 = v1_1
                        x12_7 += 0x20
                    while (i_1 != -0x20)
            
            if (x8_18 != x9_2)
                if ((x8_18 & 0x18) == 0)
                label_deef10:
                    int64_t i_4 = x8_18 - x9_2
                    void* x11_4 = arg1 + x9_2 + x25_1
                    void* x9_3 = x0_10 + x9_2
                    int64_t i_2
                    
                    do
                        char x12_10 = *x9_3
                        x9_3 += 1
                        i_2 = i_4
                        i_4 -= 1
                        *x11_4 ^= x12_10
                        x11_4 += 1
                    while (i_2 != 1)
                else
                    int64_t* x12_9 = arg1 + x25_1 + x9_2
                    void* x13_3 = x0_10 + x9_2
                    
                    if (x12_9 u< x0_10 + x8_18 && x13_3 u< arg1 + x25_1 + x8_18)
                        goto label_deef10
                    
                    void* x10_2
                    
                    x10_2 = x11_1 u< x10_1 ? x11_1 : x10_1
                    
                    void* x10_3 = x10_2 & 7
                    void* i_5 = (x10_2 & 0x1f) - x10_3
                    x9_2 += i_5
                    void* i_3
                    
                    do
                        v0_2.q = *x13_3
                        x13_3 += 8
                        v1_1.q = *x12_9
                        i_3 = i_5
                        i_5 -= 8
                        *x12_9 = (v1_1 ^ v0_2).q
                        x12_9 = &x12_9[1]
                    while (i_3 != 8)
                    
                    if (x10_3 != 0)
                        goto label_deef10
            
            x25_1 += x8_18
            
            if (x25_1 == arg2)
                break
            
            result_6 = result_1
            result_8 = result_7
        
        if (x0_10 != 0)
            void* var_88_2 = x0_10
            int64_t var_80
            Botan::deallocate_memory(x0_10, var_80 - x0_10, 1)
else
    if ((arg7 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    void* result_4 = Botan::allocate_memory(arg7, 1)
    result_8 = result_4 + arg7
    result_6 = result_4
    result_1 = result_4
    result_9 = result_8
    memcpy(result_4, arg6, arg7)
    result_7 = result_8
    __builtin_memset(&var_90, 0, 0x18)
    
    if (arg2 != 0)
        goto label_deeca8
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
return Botan::deallocate_memory(result, result_9 - result, 1)
