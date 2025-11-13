// 函数: _ZN5Botan3TLS5AlertC1ERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xe53ae4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
char* x8 = *entry_x1

if (entry_x1[1] - x8 != 2)
    void** x0 = __cxa_allocate_exception(0x20)
    std::__ndk1::to_string(entry_x1[1] - *entry_x1)
    void var_78
    int128_t* x0_3
    int128_t v0
    x0_3, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_78, nullptr)
    int64_t var_50 = x0_3[1].q
    int128_t var_60 = *x0_3
    __builtin_memset(x0_3, 0, 0x18)
    int128_t* x0_5
    int128_t v0_1
    x0_5, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_60)
    int64_t var_30 = x0_5[1].q
    int128_t var_40 = *x0_5
    __builtin_memset(x0_5, 0, 0x18)
    *x0 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0[1])
    *x0 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

uint32_t x8_1 = zx.d(*x8)
char x8_2

if (x8_1 == 1)
    x8_2 = 0
else
    if (x8_1 != 2)
        void** x0_8 = __cxa_allocate_exception(0x28)
        int64_t x0_9
        int128_t v0_2
        x0_9, v0_2 = operator new(0x20)
        int64_t var_30_1 = x0_9
        int128_t var_40_1 = data_71d400
        __builtin_strncpy(x0_9, "Bad code for TLS alert level", 0x1d)
        *x0_8 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_8[1])
        x0_8[4].d = 0x2f
        *x0_8 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
        __cxa_throw(x0_8, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
        noreturn
    
    x8_2 = 1

*arg1 = x8_2
*(arg1 + 4) = zx.d(*(*entry_x1 + 1))
