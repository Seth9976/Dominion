// 函数: _ZN5Botan12bigint_modopEjjj
// 地址: 0xcdbfe0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 != 0)
    return zx.q(arg2 - ((zx.q(arg2) | zx.q(arg1) << 0x20) u/ zx.q(arg3)).d * arg3)

void** x0_1 = __cxa_allocate_exception(0x20)
int64_t x0_2
int128_t v0
x0_2, v0 = operator new(0x20)
int64_t var_30 = x0_2
int128_t var_40 = data_71abe0
__builtin_strncpy(x0_2, "bigint_modop divide by zero", 0x1c)
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
*x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
