// 函数: sub_cb76f0
// 地址: 0xcb76f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_4c
int64_t result

if ((**arg1)(arg1, &var_4c, 1) == 0)
    result = 0
    *arg2 = 0xff00
    *arg3 = 0xff00
else
    uint32_t x8_2 = zx.d(var_4c)
    int32_t x9_1 = x8_2 & 0x1f
    
    if (x9_1 != 0x1f)
        *arg2 = x9_1
        *arg3 = x8_2 & 0xe0
        return 1
    
    int64_t x23_1 = 0
    result = 1
    *arg3 = x8_2 & 0xe0
    uint64_t x8_6
    
    do
        int128_t var_70
        char var_48
        void* var_38
        
        if ((**arg1)(arg1, &var_4c, 1) == 0)
            void** x0_4 = __cxa_allocate_exception(0x20)
            int64_t x0_5
            int128_t v0
            x0_5, v0 = operator new(0x20)
            int64_t var_60 = x0_5
            var_70 = data_71c520
            __builtin_strncpy(x0_5, "Long-form tag truncated", 0x18)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "BER: ", &var_70)
            *x0_4 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_4[1])
            *x0_4 = _vtable_for_Botan::Decoding_Error + 0x10
            
            if ((zx.d(var_48) & 1) != 0)
                operator delete(var_38)
            
            *x0_4 = _vtable_for_Botan::BER_Decoding_Error + 0x10
            __cxa_throw(x0_4, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        if ((x23_1 & 0xff000000) != 0)
            void** x0_10 = __cxa_allocate_exception(0x20)
            int64_t x0_11
            int128_t v0_1
            x0_11, v0_1 = operator new(0x30)
            int64_t var_60_1 = x0_11
            var_70 = data_71bb40
            __builtin_strncpy(x0_11, "Long-form tag overflowed 32 bits", 0x21)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "BER: ", &var_70)
            *x0_10 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_10[1])
            *x0_10 = _vtable_for_Botan::Decoding_Error + 0x10
            
            if ((zx.d(var_48) & 1) != 0)
                operator delete(var_38)
            
            *x0_10 = _vtable_for_Botan::BER_Decoding_Error + 0x10
            __cxa_throw(x0_10, _typeinfo_for_Botan::BER_Decoding_Error, 
                Botan::Exception::~Exception)
            noreturn
        
        x8_6 = zx.q(var_4c)
        result += 1
        x23_1 = (0x7f & x8_6) | (0x1ffffffffffffff & x23_1) << 7
    while ((x8_6.d & 0x80) != 0)
    *arg2 = x23_1.d

return result
