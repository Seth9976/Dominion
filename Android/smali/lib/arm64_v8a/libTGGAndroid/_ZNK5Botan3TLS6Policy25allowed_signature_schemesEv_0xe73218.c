// 函数: _ZNK5Botan3TLS6Policy25allowed_signature_schemesEv
// 地址: 0xe73218
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)

if ((zx.d(data_23eca10) & 1) == 0 && __cxa_guard_acquire(&data_23eca10).d != 0)
    __builtin_memset(&data_23ecc30, 0, 0x18)
    int64_t x0_12 = operator new(0x1e)
    data_23ecc30 = x0_12
    __builtin_memcpy(x0_12, 
        "\x05\x08\x04\x08\x06\x08\x01\x05\x01\x06\x01\x04\x03\x05\x03\x06\x03\x04\x02\x05\x02\x06\x02\x"
    "04\x01\x02\x03\x02\x02\x02", 
        0x1e)
    data_23ecc40 = x0_12 + 0x1e
    data_23ecc38 = x0_12 + 0x1e
    __cxa_atexit(func_e409b8, &data_23ecc30, &data_1122730)
    __cxa_guard_release(&data_23eca10)

int16_t* x25 = data_23ecc30
int64_t x26 = data_23ecc38

if (x25 == x26)
    return 

do
    uint32_t x21_1 = zx.d(*x25)
    
    if (x21_1 s<= 0x500)
        if (x21_1 - 0x201 u< 3 || x21_1 - 0x401 u< 3)
        label_e732d8:
            Botan::TLS::signature_algorithm_of_scheme(zx.q(x21_1))
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                * entry_x0
            int32_t x0_2 = Botan::TLS::Policy::allowed_signature_method(entry_x0)
            char var_78
            void* var_68
            
            if ((zx.d(var_78) & 1) != 0)
                operator delete(var_68)
            
            Botan::TLS::hash_function_of_scheme(zx.q(x21_1))
            int32_t x23_1 = Botan::TLS::Policy::allowed_signature_hash(entry_x0).d
            
            if ((zx.d(var_78) & 1) != 0)
                operator delete(var_68)
            
            if ((x0_2 & x23_1 & 1) != 0)
                uint16_t* x8_10 = entry_x8[1]
                
                if (x8_10 != entry_x8[2])
                    *x8_10 = x21_1.w
                    entry_x8[1] = &x8_10[1]
                else
                    void* x22_2 = *entry_x8
                    void* x23_2 = x8_10 - x22_2
                    
                    if (x23_2 s<= -3)
                        std::__ndk1::__vector_base_common<true>::__throw_length_error()
                        sub_ef2a0c()
                        noreturn
                    
                    int64_t x27_1 = x23_2 s>> 1
                    void* x8_12
                    
                    if (x23_2 u< x27_1 + 1)
                        x8_12 = x27_1 + 1
                    else
                        x8_12 = x23_2
                    
                    void* fp_1
                    
                    fp_1 = x27_1 u< 0x3fffffffffffffff ? x8_12 : 0x7fffffffffffffff
                    
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        * x24_1
                    void* x27_3
                    
                    if (fp_1 == 0)
                        x24_1 = nullptr
                        *(x27_1 << 1) = x21_1.w
                        x27_3 = (x27_1 << 1) + 2
                        
                        if (x23_2 s>= 1)
                            memcpy(x24_1, x22_2, x23_2)
                    else
                        if ((fp_1 & 0xffffffff80000000) != 0)
                            sub_ef2a0c()
                            noreturn
                        
                        x24_1 = operator new(fp_1 << 1)
                        uint16_t* x27_2 = x24_1 + (x27_1 << 1)
                        *x27_2 = x21_1.w
                        x27_3 = &x27_2[1]
                        
                        if (x23_2 s>= 1)
                            memcpy(x24_1, x22_2, x23_2)
                    
                    *entry_x8 = x24_1
                    entry_x8[1] = x27_3
                    entry_x8[2] = x24_1 + (fp_1 << 1)
                    
                    if (x22_2 != 0)
                        operator delete(x22_2)
    else if (x21_1 - 0x501 u< 3 || x21_1 - 0x804 u< 3 || x21_1 - 0x601 u<= 2)
        goto label_e732d8
    
    x25 = &x25[1]
while (x26 != x25)
