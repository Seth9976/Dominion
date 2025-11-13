// 函数: _ZN5Botan18Cipher_Mode_Filter9start_msgEv
// 地址: 0xd78b14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x1 = *(entry_x0 + 0x90)
int64_t x8 = *(entry_x0 + 0x98)

if (x1 == x8)
    int64_t* x0 = *(entry_x0 + 0x88)
    
    if (((*(*x0 + 0x68))(x0, 0) & 1) == 0)
        void** x0_3 = __cxa_allocate_exception(0x20)
        int64_t* x9_2 = *(entry_x0 + 0x88)
        (*(*x9_2 + 0x20))(x9_2)
        void var_78
        int128_t* x0_6
        int128_t v0
        x0_6, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_78, nullptr)
        int64_t var_50 = x0_6[1].q
        int128_t var_60 = *x0_6
        __builtin_memset(x0_6, 0, 0x18)
        int128_t* x0_8
        int128_t v0_1
        x0_8, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_60)
        int64_t var_30 = x0_8[1].q
        int128_t var_40 = *x0_8
        __builtin_memset(x0_8, 0, 0x18)
        *x0_3 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_3[1])
        *x0_3 = _vtable_for_Botan::Invalid_State + 0x10
        __cxa_throw(x0_3, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
        noreturn
    
    x1 = *(entry_x0 + 0x90)
    x8 = *(entry_x0 + 0x98)

int64_t* x0_2 = *(entry_x0 + 0x88)
int64_t result = (*(*x0_2 + 0x30))(x0_2, x1, x8 - x1)
*(entry_x0 + 0x98) = *(entry_x0 + 0x90)
return result
