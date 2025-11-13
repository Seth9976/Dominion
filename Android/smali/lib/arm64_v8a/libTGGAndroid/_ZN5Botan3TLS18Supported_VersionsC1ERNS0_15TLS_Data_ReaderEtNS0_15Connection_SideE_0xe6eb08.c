// 函数: _ZN5Botan3TLS18Supported_VersionsC1ERNS0_15TLS_Data_ReaderEtNS0_15Connection_SideE
// 地址: 0xe6eb08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t x20 = arg3
uint64_t x22 = arg2
*arg1 = _vtable_for_Botan::TLS::Supported_Versions + 0x10
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
int64_t result
int32_t entry_x3
int16_t* var_80

if (entry_x3 != 2)
    Botan::TLS::TLS_Data_Reader::get_num_elems(x22, 1, 2, 1)
    result = Botan::TLS::TLS_Data_Reader::get_elem<uint16_t, std::__ndk1::vector<uint16_t, std::__ndk1::allocator<uint16_t> > >(
        x22)
    int16_t* x22_1 = var_80
    int64_t var_78
    
    if (x22_1 != var_78)
        do
            int16_t* x9_6 = *(arg1 + 0x10)
            int64_t x8_5 = *(arg1 + 0x18)
            int16_t fp_1 = *x22_1
            
            if (x9_6 u< x8_5)
                *x9_6 = fp_1
                *(arg1 + 0x10) = &x9_6[1]
            else
                void* x23_1 = *(arg1 + 8)
                size_t x24_2 = x9_6 - x23_1
                
                if (x24_2 s<= -3)
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    sub_ef2a0c()
                    noreturn
                
                int64_t x20_1 = x24_2 s>> 1
                void* x8_6 = x8_5 - x23_1
                void* x9_8
                
                if (x8_6 u< x20_1 + 1)
                    x9_8 = x20_1 + 1
                else
                    x9_8 = x8_6
                
                void* x21_1
                
                if (0x3fffffffffffffff u> x8_6 s>> 1)
                    x21_1 = x9_8
                else
                    x21_1 = 0x7fffffffffffffff
                
                void* x20_3
                int64_t result_2
                
                if (x21_1 == 0)
                    result_2 = 0
                    *(x20_1 << 1) = fp_1
                    x20_3 = (x20_1 << 1) + 2
                    
                    if (x24_2 s>= 1)
                        result = memcpy(result_2, x23_1, x24_2)
                else
                    if ((x21_1 & 0xffffffff80000000) != 0)
                        sub_ef2a0c()
                        noreturn
                    
                    result = operator new(x21_1 << 1)
                    result_2 = result
                    int16_t* x20_2 = result_2 + (x20_1 << 1)
                    *x20_2 = fp_1
                    x20_3 = &x20_2[1]
                    
                    if (x24_2 s>= 1)
                        result = memcpy(result_2, x23_1, x24_2)
                
                *(arg1 + 8) = result_2
                *(arg1 + 0x10) = x20_3
                *(arg1 + 0x18) = result_2 + (x21_1 << 1)
                
                if (x23_1 != 0)
                    result = operator delete(x23_1)
            
            x22_1 = &x22_1[1]
        while (var_78 != x22_1)
        
        x22_1 = var_80
        
        if (((var_78 - x22_1) | 1) != zx.q(x20))
            goto label_e6ed38
    else if (1 != zx.q(x20))
    label_e6ed38:
        void** x0_9 = __cxa_allocate_exception(0x20)
        int64_t x0_10
        int128_t v0
        x0_10, v0 = operator new(0x40)
        (*"rsions extension")[0].o
        int64_t var_90 = x0_10
        v0 = data_71b3f0
        __builtin_strncpy(x0_10, "Client sent invalid supported_versions extension", 0x31)
        int128_t var_a0 = v0
        *x0_9 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_9[1])
        *x0_9 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_9, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    if (x22_1 != 0)
        int16_t* var_78_1 = x22_1
        return operator delete(x22_1)
else
    if (zx.d(x20) != 2)
        void** x0_19 = __cxa_allocate_exception(0x20)
        int64_t x0_20
        int128_t v0_2
        x0_20, v0_2 = operator new(0x40)
        (*"rsions extension")[0].o
        int64_t var_70 = x0_20
        v0_2 = data_71b3f0
        __builtin_strncpy(x0_20, "Server sent invalid supported_versions extension", 0x31)
        var_80.o = v0_2
        *x0_19 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_19[1])
        *x0_19 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_19, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    result = Botan::TLS::TLS_Data_Reader::assert_at_least(x22)
    int64_t x9_2 = *(x22 + 0x10)
    uint32_t x11_1 = zx.d(*(**(x22 + 8) + x9_2))
    *(x22 + 0x10) = x9_2 + 2
    uint16_t* x9_3 = *(arg1 + 0x10)
    int64_t x8_4 = *(arg1 + 0x18)
    uint16_t x24_1 = (_byteswap(x11_1) u>> 0x10).w
    
    if (x9_3 u>= x8_4)
        void* x21_2 = *(arg1 + 8)
        void* x22_2 = x9_3 - x21_2
        
        if (x22_2 s<= -3)
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
            sub_ef2a0c()
            noreturn
        
        int64_t x25_1 = x22_2 s>> 1
        void* x8_11 = x8_4 - x21_2
        void* x10_6
        
        if (x8_11 u< x25_1 + 1)
            x10_6 = x25_1 + 1
        else
            x10_6 = x8_11
        
        void* x20_6
        
        if (0x3fffffffffffffff u> x8_11 s>> 1)
            x20_6 = x10_6
        else
            x20_6 = 0x7fffffffffffffff
        
        int64_t result_1
        
        if (x20_6 == 0)
            result_1 = 0
        else
            if ((x20_6 & 0xffffffff80000000) != 0)
                sub_ef2a0c()
                noreturn
            
            result = operator new(x20_6 << 1)
            result_1 = result
        
        uint16_t* x25_2 = result_1 + (x25_1 << 1)
        *x25_2 = x24_1
        
        if (x22_2 s>= 1)
            result = memcpy(result_1, x21_2, x22_2)
        
        *(arg1 + 8) = result_1
        *(arg1 + 0x10) = &x25_2[1]
        *(arg1 + 0x18) = result_1 + (x20_6 << 1)
        
        if (x21_2 != 0)
            return operator delete(x21_2) __tailcall
    else
        *x9_3 = x24_1
        *(arg1 + 0x10) = &x9_3[1]
return result
