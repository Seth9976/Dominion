// 函数: _ZN5Botan9AEAD_Mode21set_associated_data_nEmPKhm
// 地址: 0xc9eca0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 == 0)
    jump(*(*arg1 + 0x90))

void** x0_1 = __cxa_allocate_exception(0x20)
(*(*arg1 + 0x20))(arg1)
void var_78
int128_t* x0_4
int128_t v0
x0_4, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_78, nullptr)
int64_t var_50 = x0_4[1].q
int128_t var_60 = *x0_4
__builtin_memset(x0_4, 0, 0x18)
int128_t* x0_6
int128_t v0_1
x0_6, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60)
int64_t var_30 = x0_6[1].q
int128_t var_40 = *x0_6
__builtin_memset(x0_6, 0, 0x18)
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
*x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
