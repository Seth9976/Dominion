// 函数: sub_f41a0c
// 地址: 0xf41a0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = *(arg1 + 0x80)

if (result != 0)
    int64_t x8_1 = *(arg1 + 0x20)
    int64_t var_58 = arg2
    int64_t var_28 = arg3
    int64_t var_40 = x8_1
    result = (*(*result + 0x30))(result, &var_40, &var_58, &var_28)
    
    if (result.d != 0)
        void** x0 = __cxa_allocate_exception(0x20)
        std::__ndk1::to_string(result.d)
        int128_t* x0_3
        int128_t v0
        x0_3, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_58, nullptr)
        int64_t var_30 = x0_3[1].q
        var_40.o = *x0_3
        __builtin_memset(x0_3, 0, 0x18)
        *x0 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0[1])
        *x0 = _vtable_for_Botan::Invalid_State + 0x10
        __cxa_throw(x0, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
        noreturn

return result
