// 函数: _ZNK5Botan3TLS10Extensions9serializeENS0_15Connection_SideE
// 地址: 0xe48550
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = arg1
int16_t* result_3 = operator new(2)
void* x8 = &result_3[1]
*result_3 = 0
void* var_70 = x8
void* var_68 = x8
int16_t* result_1 = result_3
int64_t* i = *x21

if (i != &x21[1])
    do
        if (((*(*i[5] + 0x10))() & 1) == 0)
            int32_t x0_3 = (**i[5])()
            int64_t* x0_4 = i[5]
            int32_t entry_x1
            (*(*x0_4 + 8))(x0_4, zx.q(entry_x1))
            uint8_t* x22_1 = var_70
            void* x22_2
            
            if (x22_1 u>= var_68)
                int16_t* result_7 = result_1
                size_t x25_1 = x22_1 - result_7
                
                if (x25_1 + 1 s< 0)
                    goto label_e489f8
                
                void* x8_8 = var_68 - result_7
                int64_t x10_1 = x8_8 << 1
                int64_t x9_3
                
                if (x10_1 u< x25_1 + 1)
                    x9_3 = x25_1 + 1
                else
                    x9_3 = x10_1
                
                int64_t x26_1
                
                x26_1 = x8_8 u< 0x3fffffffffffffff ? x9_3 : 0x7fffffffffffffff
                
                int16_t* result_12
                
                if (x26_1 == 0)
                    result_12 = nullptr
                else
                    result_12 = operator new(x26_1)
                
                char* x22_3 = result_12 + x25_1
                *x22_3 = (x0_3 u>> 8).b
                x22_2 = &x22_3[1]
                
                if (x25_1 s>= 1)
                    memcpy(result_12, result_7, x25_1)
                
                result_1 = result_12
                var_68 = result_12 + x26_1
                
                if (result_7 != 0)
                    operator delete(result_7)
            else
                *x22_1 = (x0_3 u>> 8).b
                x22_2 = &x22_1[1]
                void* var_70_1 = x22_2
            
            void* x22_4
            
            if (x22_2 u>= var_68)
                int16_t* result_8 = result_1
                size_t x25_2 = x22_2 - result_8
                
                if (x25_2 + 1 s< 0)
                    goto label_e48a00
                
                void* x8_12 = var_68 - result_8
                int64_t x10_2 = x8_12 << 1
                int64_t x9_5
                
                if (x10_2 u< x25_2 + 1)
                    x9_5 = x25_2 + 1
                else
                    x9_5 = x10_2
                
                int64_t x26_2
                
                x26_2 = x8_12 u< 0x3fffffffffffffff ? x9_5 : 0x7fffffffffffffff
                
                int16_t* result_13
                
                if (x26_2 == 0)
                    result_13 = nullptr
                    *x25_2 = x0_3.b
                    x22_4 = x25_2 + 1
                    
                    if (x25_2 s>= 1)
                        memcpy(result_13, result_8, x25_2)
                else
                    result_13 = operator new(x26_2)
                    char* x22_5 = result_13 + x25_2
                    *x22_5 = x0_3.b
                    x22_4 = &x22_5[1]
                    
                    if (x25_2 s>= 1)
                        memcpy(result_13, result_8, x25_2)
                
                result_1 = result_13
                var_68 = result_13 + x26_2
                
                if (result_8 != 0)
                    operator delete(result_8)
            else
                *x22_2 = x0_3.b
                x22_4 = x22_2 + 1
                void* var_70_3 = x22_4
            
            void* var_90
            void* var_88
            void* x19_1 = var_88 - var_90
            void* x22_6
            
            if (x22_4 u>= var_68)
                int16_t* result_6 = result_1
                size_t x24_1 = x22_4 - result_6
                
                if (x24_1 + 1 s< 0)
                    goto label_e48a08
                
                void* x8_16 = var_68 - result_6
                int64_t x10_4 = x8_16 << 1
                int64_t x9_8
                
                if (x10_4 u< x24_1 + 1)
                    x9_8 = x24_1 + 1
                else
                    x9_8 = x10_4
                
                int64_t x25_3
                
                x25_3 = x8_16 u< 0x3fffffffffffffff ? x9_8 : 0x7fffffffffffffff
                
                int16_t* result_10
                
                if (x25_3 == 0)
                    result_10 = nullptr
                else
                    result_10 = operator new(x25_3)
                
                char* x22_8 = result_10 + x24_1
                *x22_8 = (x19_1 u>> 8).b
                x22_6 = &x22_8[1]
                
                if (x24_1 s>= 1)
                    memcpy(result_10, result_6, x24_1)
                
                result_1 = result_10
                var_68 = result_10 + x25_3
                
                if (result_6 != 0)
                    operator delete(result_6)
                
                goto label_e487ec
            
            *x22_4 = (x19_1 u>> 8).b
            x22_6 = x22_4 + 1
            void* var_70_5 = x22_6
        label_e487ec:
            void* x24_2 = var_90
            void* x19_2 = var_88 - x24_2
            void* x8_21
            void* x22_9
            int16_t* result_9
            
            if (x22_6 u>= var_68)
                int16_t* result_11 = result_1
                void* x27_1 = x22_6 - result_11
                
                if (x27_1 + 1 s< 0)
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                label_e489f8:
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                label_e48a00:
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                label_e48a08:
                    int64_t* x0_26 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    int16_t* result_5
                    
                    if (var_90 != 0)
                        void* var_88_1 = var_90
                        operator delete(var_90)
                        result_5 = result_1
                        
                        if (result_5 != 0)
                        label_e48a88:
                            int16_t* result_14 = result_5
                            operator delete(result_5)
                            sub_1101e04(x0_26)
                            noreturn
                    else
                        result_5 = result_1
                        
                        if (result_5 != 0)
                            goto label_e48a88
                    sub_1101e04(x0_26)
                    noreturn
                
                void* x8_20 = var_68 - result_11
                int64_t x10_5 = x8_20 << 1
                int64_t x9_10
                
                if (x10_5 u< x27_1 + 1)
                    x9_10 = x27_1 + 1
                else
                    x9_10 = x10_5
                
                int64_t x28_1
                
                x28_1 = x8_20 u< 0x3fffffffffffffff ? x9_10 : 0x7fffffffffffffff
                
                if (x28_1 == 0)
                    result_9 = nullptr
                    *x27_1 = (x19_2.d).b
                    x22_9 = x27_1 + 1
                    
                    if (x27_1 s>= 1)
                        memcpy(result_9, result_11, x27_1)
                else
                    result_9 = operator new(x28_1)
                    char* x22_10 = result_9 + x27_1
                    *x22_10 = (x19_2.d).b
                    x22_9 = &x22_10[1]
                    
                    if (x27_1 s>= 1)
                        memcpy(result_9, result_11, x27_1)
                
                x8_21 = result_9 + x28_1
                result_1 = result_9
                var_70 = x22_9
                var_68 = x8_21
                
                if (result_11 != 0)
                    operator delete(result_11)
                    x22_9 = var_70
                    goto label_e48884
            else
                *x22_6 = (x19_2.d).b
                x22_9 = x22_6 + 1
                var_70 = x22_9
            label_e48884:
                x24_2 = var_90
                result_9 = result_1
                x8_21 = var_68
                x19_2 = var_88 - x24_2
            
            size_t x26_3 = x22_9 - result_9
            uint64_t x27_2 = x19_2 + x26_3
            
            if (x8_21 - result_9 u< x27_2)
                int16_t* result_4 = operator new(x27_2)
                
                if (x26_3 s>= 1)
                    memcpy(result_4, result_9, x26_3)
                
                x22_9 = result_4 + x26_3
                result_1 = result_4
                var_70 = x22_9
                var_68 = result_4 + x27_2
                
                if (result_9 != 0)
                    operator delete(result_9)
                    x22_9 = var_70
                    x24_2 = var_90
            
            std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
                &result_1, x22_9, x24_2)
            
            if (var_90 != 0)
                var_88 = var_90
                operator delete(var_90)
        
        int64_t* j_1 = i[1]
        
        if (j_1 == 0)
            void* x8_25 = &i[2]
            int64_t* i_1 = *x8_25
            
            if (*i_1 == i)
                i = i_1
            else
                void* j
                
                do
                    j = *x8_25
                    x8_25 = j + 0x10
                    i = *x8_25
                while (*i != j)
        else
            do
                i = j_1
                j_1 = *j_1
            while (j_1 != 0)
    while (i != &x21[1])
    
    result_3 = result_1
    x8 = var_70

*result_3 = ((x8.d - result_3.d - 2) u>> 8).b
*(result_1 + 1) = (x8.d - result_3.d - 2).b
int16_t* result = result_1
int16_t** entry_x8

if (var_70 - result != 2)
    *entry_x8 = result
    entry_x8[1] = var_70
    entry_x8[2] = var_68
else
    __builtin_memset(entry_x8, 0, 0x18)
    
    if (result != 0)
        int16_t* result_2 = result
        return operator delete(result)
return result
