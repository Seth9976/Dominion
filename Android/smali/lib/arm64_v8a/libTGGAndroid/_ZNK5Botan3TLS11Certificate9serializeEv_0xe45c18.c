// 函数: _ZNK5Botan3TLS11Certificate9serializeEv
// 地址: 0xe45c18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int16_t* result = operator new(3)
void* x9 = result + 3
*result = 0
result[1].b = 0
entry_x8[1] = x9
entry_x8[2] = x9
*entry_x8 = result
void* entry_x0

if (*(entry_x0 + 0x10) != *(entry_x0 + 8))
    int64_t x28_1 = 0
    int64_t fp_1 = 0
    
    while (true)
        Botan::ASN1_Object::BER_encode()
        uint8_t* x21_1 = entry_x8[1]
        int64_t x8_1 = entry_x8[2]
        void* var_78
        void* var_70
        void* x26_1 = var_70 - var_78
        void* x21_2
        
        if (x21_1 u>= x8_1)
            int16_t* x22_1 = *entry_x8
            size_t x23_1 = x21_1 - x22_1
            
            if (x23_1 + 1 s>= 0)
                void* x8_3 = x8_1 - x22_1
                uint64_t x10_2 = x8_3 << 1
                uint64_t x9_7
                
                if (x10_2 u< x23_1 + 1)
                    x9_7 = x23_1 + 1
                else
                    x9_7 = x10_2
                
                uint64_t x24_1
                
                x24_1 = x8_3 u< 0x3fffffffffffffff ? x9_7 : 0x7fffffffffffffff
                
                int16_t* x25_1
                
                if (x24_1 == 0)
                    x25_1 = nullptr
                else
                    x25_1 = operator new(x24_1)
                
                char* x21_3 = x25_1 + x23_1
                *x21_3 = (x26_1 u>> 0x10).b
                x21_2 = &x21_3[1]
                
                if (x23_1 s>= 1)
                    memcpy(x25_1, x22_1, x23_1)
                
                *entry_x8 = x25_1
                entry_x8[1] = x21_2
                entry_x8[2] = x25_1 + x24_1
                
                if (x22_1 != 0)
                    operator delete(x22_1)
                    x21_2 = entry_x8[1]
                
                goto label_e45d58
        else
            *x21_1 = (x26_1 u>> 0x10).b
            x21_2 = &x21_1[1]
            entry_x8[1] = x21_2
        label_e45d58:
            int64_t x8_6 = entry_x8[2]
            void* x21_4
            
            if (x21_2 u>= x8_6)
                int16_t* x22_2 = *entry_x8
                size_t x23_2 = x21_2 - x22_2
                
                if (x23_2 + 1 s>= 0)
                    void* x8_8 = x8_6 - x22_2
                    uint64_t x10_3 = x8_8 << 1
                    uint64_t x9_9
                    
                    if (x10_3 u< x23_2 + 1)
                        x9_9 = x23_2 + 1
                    else
                        x9_9 = x10_3
                    
                    uint64_t x24_2
                    
                    x24_2 = x8_8 u< 0x3fffffffffffffff ? x9_9 : 0x7fffffffffffffff
                    
                    int16_t* x25_2
                    
                    if (x24_2 == 0)
                        x25_2 = nullptr
                    else
                        x25_2 = operator new(x24_2)
                    
                    char* x21_5 = x25_2 + x23_2
                    *x21_5 = (x26_1 u>> 8).b
                    x21_4 = &x21_5[1]
                    
                    if (x23_2 s>= 1)
                        memcpy(x25_2, x22_2, x23_2)
                    
                    *entry_x8 = x25_2
                    entry_x8[1] = x21_4
                    entry_x8[2] = x25_2 + x24_2
                    
                    if (x22_2 != 0)
                        operator delete(x22_2)
                        x21_4 = entry_x8[1]
                    
                    goto label_e45dfc
            else
                *x21_2 = (x26_1 u>> 8).b
                x21_4 = x21_2 + 1
                entry_x8[1] = x21_4
            label_e45dfc:
                int64_t x8_11 = entry_x8[2]
                void* x21_6
                int16_t* x22_3
                
                if (x21_4 u>= x8_11)
                    int16_t* x23_3 = *entry_x8
                    size_t x24_3 = x21_4 - x23_3
                    
                    if (x24_3 + 1 s>= 0)
                        void* x8_12 = x8_11 - x23_3
                        uint64_t x10_4 = x8_12 << 1
                        uint64_t x9_11
                        
                        if (x10_4 u< x24_3 + 1)
                            x9_11 = x24_3 + 1
                        else
                            x9_11 = x10_4
                        
                        uint64_t x25_3
                        
                        x25_3 = x8_12 u< 0x3fffffffffffffff ? x9_11 : 0x7fffffffffffffff
                        
                        if (x25_3 == 0)
                            x22_3 = nullptr
                            *x24_3 = (x26_1.d).b
                            x21_6 = x24_3 + 1
                            
                            if (x24_3 s>= 1)
                                memcpy(x22_3, x23_3, x24_3)
                        else
                            x22_3 = operator new(x25_3)
                            void* x21_7 = x22_3 + x24_3
                            *x21_7 = (x26_1.d).b
                            x21_6 = x21_7 + 1
                            
                            if (x24_3 s>= 1)
                                memcpy(x22_3, x23_3, x24_3)
                        
                        *entry_x8 = x22_3
                        entry_x8[1] = x21_6
                        entry_x8[2] = x22_3 + x25_3
                        
                        if (x23_3 == 0)
                            goto label_e45e94
                        
                        operator delete(x23_3)
                        x21_6 = entry_x8[1]
                        goto label_e45e90
                else
                    *x21_4 = (x26_1.d).b
                    x21_6 = x21_4 + 1
                    entry_x8[1] = x21_6
                label_e45e90:
                    x22_3 = *entry_x8
                label_e45e94:
                    void* x24_4 = var_78
                    size_t x25_4 = x21_6 - x22_3
                    uint64_t x26_2 = var_70 - x24_4 + x25_4
                    
                    if (entry_x8[2] - x22_3 u< x26_2)
                        int16_t* x0_14 = operator new(x26_2)
                        
                        if (x25_4 s>= 1)
                            memcpy(x0_14, x22_3, x25_4)
                        
                        x21_6 = x0_14 + x25_4
                        *entry_x8 = x0_14
                        entry_x8[1] = x21_6
                        entry_x8[2] = x0_14 + x26_2
                        
                        if (x22_3 != 0)
                            operator delete(x22_3)
                            x21_6 = entry_x8[1]
                            x24_4 = var_78
                    
                    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
                        entry_x8, x21_6, x24_4)
                    
                    if (var_78 != 0)
                        var_70 = var_78
                        operator delete(var_78)
                    
                    fp_1 += 1
                    x28_1 += 0x88
                    
                    if (fp_1 != ((*(entry_x0 + 0x10) - *(entry_x0 + 8)) s>> 3) * -0xf0f0f0f0f0f0f0f)
                        continue
                    
                    result = *entry_x8
                    x9 = entry_x8[1]
                    break
        int64_t* x0_20 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        int16_t* x0_22
        
        if (var_78 != 0)
            void* var_70_1 = var_78
            operator delete(var_78)
            x0_22 = *entry_x8
            
            if (x0_22 != 0)
            label_e45fd0:
                entry_x8[1] = x0_22
                operator delete(x0_22)
                sub_1101e04(x0_20)
                noreturn
        else
            x0_22 = *entry_x8
            
            if (x0_22 != 0)
                goto label_e45fd0
        sub_1101e04(x0_20)
        noreturn

*result = ((x9.d - result.d - 3) u>> 0x10).b
*(*entry_x8 + 1) = ((x9.d - result.d - 3) u>> 8).b
(*entry_x8)[1].b = (x9.d - result.d - 3).b
return result
