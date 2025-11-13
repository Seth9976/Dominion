// 函数: sub_e38cb4
// 地址: 0xe38cb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(*arg2) & 1) != 0)
    operator delete(*(arg2 + 0x10))

__cxa_begin_catch(arg1)
__cxa_end_catch()
void** x0_2 = __cxa_allocate_exception(0x20)
int64_t x0_3
int128_t v0
x0_3, v0 = operator new(0x30)
v0 = data_71c500
int64_t arg_10 = x0_3
__builtin_strncpy(x0_3, "Invalid or unknown SRP group parameters", 0x28)
int128_t arg_0 = v0
*x0_2 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_2[1])
*x0_2 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_2, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
