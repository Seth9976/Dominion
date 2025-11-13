// 函数: _ZN5Botan13base32_decodeEPhPKcmb
// 地址: 0xcd046c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_28 = 0
int64_t result = sub_f26838(arg1, arg2, arg3, &var_28, arg4.d & 1)

if (var_28 == arg3)
    return result

void** x0 = __cxa_allocate_exception(0x20)
char var_58 = 0xc
int32_t var_57
__builtin_strncpy(&var_57, "base32", 7)
int128_t* x0_2
int128_t v0
x0_2, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_58)
int64_t var_30 = x0_2[1].q
int128_t var_40 = *x0_2
__builtin_memset(x0_2, 0, 0x18)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
