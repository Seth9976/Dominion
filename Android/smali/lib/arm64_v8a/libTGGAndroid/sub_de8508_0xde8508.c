// 函数: sub_de8508
// 地址: 0xde8508
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 1)
    sub_1101e04(arg1)
    noreturn

__cxa_begin_catch(arg1)
void** x0_1 = __cxa_allocate_exception(0x20)
int64_t x0_2
int128_t v0
x0_2, v0 = operator new(0x40)
v0 = data_71d0c0
int64_t arg_10 = x0_2
__builtin_strncpy(x0_2, "PBKDF2 cannot accept passphrase of the given size", 0x32)
int128_t arg_0 = v0
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
*x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
