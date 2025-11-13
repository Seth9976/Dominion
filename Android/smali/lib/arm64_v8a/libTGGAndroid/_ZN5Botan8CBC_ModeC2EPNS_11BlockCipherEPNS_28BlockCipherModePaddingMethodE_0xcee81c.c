// 函数: _ZN5Botan8CBC_ModeC2EPNS_11BlockCipherEPNS_28BlockCipherModePaddingMethodE
// 地址: 0xcee81c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 8) = arg2
int64_t entry_x2
*(arg1 + 0x10) = entry_x2
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
*arg1 = _vtable_for_Botan::CBC_Mode + 0x10
*(arg1 + 0x18) = 0
int64_t x0_1 = (*(*arg2 + 0x30))(arg2)
int64_t* result = *(arg1 + 0x10)
*(arg1 + 0x30) = x0_1

if (result != 0)
    result = (*(*result + 0x10))()
    
    if ((result.d & 1) == 0)
        void** x0_2 = __cxa_allocate_exception(0x20)
        int64_t* x9 = *(arg1 + 0x10)
        (*(*x9 + 0x18))(x9)
        void var_c8
        int128_t* x0_5
        int128_t v0
        x0_5, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_c8, nullptr)
        int64_t var_a0 = x0_5[1].q
        int128_t var_b0 = *x0_5
        __builtin_memset(x0_5, 0, 0x18)
        int128_t* x0_7
        int128_t v0_1
        x0_7, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_b0)
        int64_t var_80 = x0_7[1].q
        int128_t var_90 = *x0_7
        __builtin_memset(x0_7, 0, 0x18)
        (*(*arg2 + 0x20))(arg2)
        char var_e0
        uint64_t x1_2
        uint64_t var_d0
        
        if ((zx.d(var_e0) & 1) == 0)
            x1_2 = &var_e0 | 1
        else
            x1_2 = var_d0
        int128_t* x0_10
        int128_t v0_2
        x0_10, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_90, x1_2)
        int64_t var_60 = x0_10[1].q
        int128_t var_70 = *x0_10
        __builtin_memset(x0_10, 0, 0x18)
        int128_t* x0_12
        int128_t v0_3
        x0_12, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_70)
        int64_t var_40 = x0_12[1].q
        int128_t var_50 = *x0_12
        __builtin_memset(x0_12, 0, 0x18)
        *x0_2 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_2[1])
        *x0_2 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_2, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn

return result
