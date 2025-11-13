// 函数: _ZN5Botan8EMSA_Raw8raw_dataEv
// 地址: 0xd641e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x11 = *(entry_x0 + 8)
int64_t x9
int64_t x10

if (x11 == 0)
    x10 = *(entry_x0 + 0x10)
    x9 = *(entry_x0 + 0x18)
else
    x10 = *(entry_x0 + 0x10)
    x9 = *(entry_x0 + 0x18)
    
    if (x9 - x10 != x11)
        void** x0 = __cxa_allocate_exception(0x20)
        std::__ndk1::to_string(*(entry_x0 + 8))
        void var_b8
        int128_t* x0_3
        int128_t v0
        x0_3, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_b8, nullptr)
        int64_t var_90 = x0_3[1].q
        int128_t var_a0 = *x0_3
        __builtin_memset(x0_3, 0, 0x18)
        int128_t* x0_5
        int128_t v0_1
        x0_5, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_a0)
        int64_t var_70 = x0_5[1].q
        int128_t var_80 = *x0_5
        __builtin_memset(x0_5, 0, 0x18)
        std::__ndk1::to_string(*(entry_x0 + 0x18) - *(entry_x0 + 0x10))
        char var_d0
        uint64_t x1_1
        uint64_t var_c0
        
        if ((zx.d(var_d0) & 1) == 0)
            x1_1 = &var_d0 | 1
        else
            x1_1 = var_c0
        int128_t* x0_8
        int128_t v0_2
        x0_8, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_80, x1_1)
        int64_t var_50 = x0_8[1].q
        int128_t var_60 = *x0_8
        __builtin_memset(x0_8, 0, 0x18)
        int128_t* x0_10
        int128_t v0_3
        x0_10, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_60)
        int64_t var_30 = x0_10[1].q
        int128_t var_40 = *x0_10
        __builtin_memset(x0_10, 0, 0x18)
        *x0 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0[1])
        *x0 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn

int64_t* entry_x8
*entry_x8 = x10
entry_x8[1] = x9
int64_t x9_5 = *(entry_x0 + 0x20)
__builtin_memset(entry_x0 + 0x10, 0, 0x18)
entry_x8[2] = x9_5
