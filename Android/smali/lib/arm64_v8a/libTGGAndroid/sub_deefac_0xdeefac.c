// 函数: sub_deefac
// 地址: 0xdeefac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 1)
    sub_1101e04(arg1)
    noreturn

__cxa_begin_catch(arg1)
void** x0_1 = __cxa_allocate_exception(0x20)
std::__ndk1::to_string(arg3)
void arg_8
int128_t* x0_4
int128_t v0
x0_4, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &arg_8, nullptr)
int64_t arg_30 = x0_4[1].q
int128_t arg_20 = *x0_4
__builtin_memset(x0_4, 0, 0x18)
int128_t* x0_6
int128_t v0_1
x0_6, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &arg_20)
int64_t arg_50 = x0_6[1].q
int128_t arg_40 = *x0_6
__builtin_memset(x0_6, 0, 0x18)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &arg_40)
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])

if ((zx.d(arg4) & 1) != 0)
    operator delete(arg5)

*x0_1 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
