// 函数: _ZNK5Botan3TLS16Supported_Groups9serializeENS0_15Connection_SideE
// 地址: 0xe6cb1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg1
int16_t** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int16_t* result = operator new(2)
void* x8 = &result[1]
*result = 0
entry_x8[1] = x8
entry_x8[2] = x8
*entry_x8 = result
int16_t* x24 = *(x20 + 8)
int64_t x25 = *(x20 + 0x10)

if (x24 != x25)
    do
        uint32_t x28_1 = zx.d(*x24)
        
        if (x28_1 != 0)
            uint8_t* fp_2 = entry_x8[1]
            int64_t x8_1 = entry_x8[2]
            void* fp_3
            
            if (fp_2 u>= x8_1)
                int16_t* x20_1 = *entry_x8
                size_t x21_1 = fp_2 - x20_1
                
                if (x21_1 + 1 s< 0)
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                label_e6cd14:
                    int64_t* x0_10 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    int16_t* x0_11 = *entry_x8
                    
                    if (x0_11 != 0)
                        entry_x8[1] = x0_11
                        operator delete(x0_11)
                    
                    sub_1101e04(x0_10)
                    noreturn
                
                void* x8_3 = x8_1 - x20_1
                uint64_t x10_1 = x8_3 << 1
                uint64_t x9_2
                
                if (x10_1 u< x21_1 + 1)
                    x9_2 = x21_1 + 1
                else
                    x9_2 = x10_1
                
                uint64_t x22_1
                
                x22_1 = x8_3 u< 0x3fffffffffffffff ? x9_2 : 0x7fffffffffffffff
                
                int16_t* x23_1
                
                if (x22_1 == 0)
                    x23_1 = nullptr
                else
                    x23_1 = operator new(x22_1)
                
                char* fp_4 = x23_1 + x21_1
                *fp_4 = (x28_1 u>> 8).b
                fp_3 = &fp_4[1]
                
                if (x21_1 s>= 1)
                    memcpy(x23_1, x20_1, x21_1)
                
                *entry_x8 = x23_1
                entry_x8[1] = fp_3
                entry_x8[2] = x23_1 + x22_1
                
                if (x20_1 != 0)
                    operator delete(x20_1)
                    fp_3 = entry_x8[1]
                
                goto label_e6cc2c
            
            *fp_2 = (x28_1 u>> 8).b
            fp_3 = &fp_2[1]
            entry_x8[1] = fp_3
        label_e6cc2c:
            int64_t x8_6 = entry_x8[2]
            
            if (fp_3 u< x8_6)
                *fp_3 = x28_1.b
                entry_x8[1] = fp_3 + 1
            else
                int16_t* x20_2 = *entry_x8
                size_t x21_2 = fp_3 - x20_2
                
                if (x21_2 + 1 s< 0)
                    goto label_e6cd14
                
                void* x8_7 = x8_6 - x20_2
                int64_t x10_2 = x8_7 << 1
                int64_t x9_4
                
                if (x10_2 u< x21_2 + 1)
                    x9_4 = x21_2 + 1
                else
                    x9_4 = x10_2
                
                int64_t x22_2
                
                x22_2 = x8_7 u< 0x3fffffffffffffff ? x9_4 : 0x7fffffffffffffff
                
                int16_t* x23_2
                void* fp_6
                
                if (x22_2 == 0)
                    x23_2 = nullptr
                    *x21_2 = x28_1.b
                    fp_6 = x21_2 + 1
                    
                    if (x21_2 s>= 1)
                        memcpy(x23_2, x20_2, x21_2)
                else
                    x23_2 = operator new(x22_2)
                    void* fp_5 = x23_2 + x21_2
                    *fp_5 = x28_1.b
                    fp_6 = fp_5 + 1
                    
                    if (x21_2 s>= 1)
                        memcpy(x23_2, x20_2, x21_2)
                
                *entry_x8 = x23_2
                entry_x8[1] = fp_6
                entry_x8[2] = x23_2 + x22_2
                
                if (x20_2 != 0)
                    operator delete(x20_2)
        
        x24 = &x24[1]
    while (x25 != x24)
    
    result = *entry_x8
    x8 = entry_x8[1]

*result = ((x8.d - result.d - 2) u>> 8).b
int16_t* x9_5 = *entry_x8
*(x9_5 + 1) = (entry_x8[1].d).b - x9_5.b - 2
return result
