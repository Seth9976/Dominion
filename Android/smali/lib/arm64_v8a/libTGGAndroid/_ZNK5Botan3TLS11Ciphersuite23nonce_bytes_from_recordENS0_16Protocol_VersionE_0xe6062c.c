// 函数: _ZNK5Botan3TLS11Ciphersuite23nonce_bytes_from_recordENS0_16Protocol_VersionE
// 地址: 0xe6062c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x1c)

if (x8 != 2)
    if (x8 == 1)
        return 8
    
    int128_t var_50
    
    if (x8 != 0)
        void** x0_9 = __cxa_allocate_exception(0x20)
        int64_t x0_10
        int128_t v2
        x0_10, v2 = operator new(0x40)
        (*"valid enum value")[0].o
        int64_t var_40_1 = x0_10
        v2 = data_71a790
        __builtin_strncpy(x0_10, "In Ciphersuite::nonce_bytes_from_handshake invalid enum value", 
            0x3e)
        var_50 = v2
        *x0_9 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_9[1])
        *x0_9 = _vtable_for_Botan::Invalid_State + 0x10
        __cxa_throw(x0_9, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
        noreturn
    
    int16_t entry_x1
    
    if (zx.d(entry_x1) != 0x301)
        char* x20_1 = *(arg1 + 0x20)
        size_t x0_1 = strlen(x20_1)
        
        if (x0_1 u>= -0x10)
            sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_length_error())
            noreturn
        
        void* var_40
        void* x21_1
        
        if (x0_1 u>= 0x17)
            uint64_t x22_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
            void* x0_3 = operator new(x22_1)
            x21_1 = x0_3
            var_50:8.q = x0_1
            var_40 = x0_3
            var_50.q = x22_1 | 1
            memcpy(x21_1, x20_1, x0_1)
        else
            x21_1 = &var_50 | 1
            var_50.b = (x0_1.d << 1).b
            
            if (x0_1 != 0)
                memcpy(x21_1, x20_1, x0_1)
        
        *(x21_1 + x0_1) = 0
        uint64_t x9_1 = zx.q(var_50.b)
        int32_t x8_5 = x9_1.d & 1
        uint64_t x9_3
        
        if (x8_5 == 0)
            x9_3 = x9_1 u>> 1
        else
            x9_3 = var_50:8.q
        
        int64_t result
        
        if (x9_3 != 4)
            result = 0x10
            
            if ((x8_5 & 0xff) != 0)
                operator delete(var_40)
        else
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_50, 0, -ffffffffffffffff, "3DES") == 0)
                result = 8
            else
                result = 0x10
            
            if ((zx.d(var_50.b) & 1) != 0)
                operator delete(var_40)
        
        return result

return 0
