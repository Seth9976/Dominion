// 函数: sub_e8ad28
// 地址: 0xe8ad28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 u>> 0xb == 0x1b)
    void** x0_8 = __cxa_allocate_exception(0x20)
    int64_t x0_9
    int128_t v0_1
    x0_9, v0_1 = operator new(0x20)
    int64_t var_40 = x0_9
    int128_t var_50 = data_71aa40
    __builtin_strncpy(x0_9, "Invalid Unicode character", 0x1a)
    *x0_8 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_8[1])
    *x0_8 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_8, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

if (arg2 u> 0x7f)
    if (arg2 u> 0x7ff)
        uint32_t x8_3 = arg2 u>> 0x10
        
        if (x8_3 != 0)
            if (x8_3 u> 0x10)
                void** x0_12 = __cxa_allocate_exception(0x20)
                int64_t x0_13
                int128_t v0_2
                x0_13, v0_2 = operator new(0x20)
                int64_t var_40_1 = x0_13
                int128_t var_50_1 = data_71aa40
                __builtin_strncpy(x0_13, "Invalid Unicode character", 0x1a)
                *x0_12 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_12[1])
                *x0_12 = _vtable_for_Botan::Decoding_Error + 0x10
                __cxa_throw(x0_12, _typeinfo_for_Botan::Decoding_Error, 
                    Botan::Exception::~Exception)
                noreturn
            
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                arg1)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                arg1)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                arg1)
        else
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                arg1)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                arg1)
    else
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
            arg1)

return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
    arg1) __tailcall
