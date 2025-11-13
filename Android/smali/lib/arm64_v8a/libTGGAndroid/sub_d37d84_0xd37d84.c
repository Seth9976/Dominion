// 函数: sub_d37d84
// 地址: 0xd37d84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 1)
    sub_1101e04(arg1)
    noreturn

__cxa_begin_catch(arg1)
__cxa_end_catch()
void** x0_1 = __cxa_allocate_exception(0x20)
int64_t x0_2
int128_t v0
x0_2, v0 = operator new(0x30)
int64_t arg_10 = x0_2
int128_t arg_0 = data_71abd0
__builtin_strncpy(x0_2, "Could not determine ECDSA recovery parameter", 0x2d)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &arg_0)
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])

if ((zx.d(arg3) & 1) != 0)
    operator delete(arg4)

*x0_1 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
