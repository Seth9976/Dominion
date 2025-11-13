// 函数: _ZN5Botan8Null_RNG9randomizeEPhm
// 地址: 0xefcc70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0 = __cxa_allocate_exception(0x20)
char var_50 = 0x1e
int64_t var_4f
__builtin_strncpy(&var_4f, "Null_RNG called", 0x10)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "PRNG not seeded: ", &var_50)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_State + 0x10
char var_38
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)
*x0 = _vtable_for_Botan::PRNG_Unseeded + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::PRNG_Unseeded, Botan::Exception::~Exception)
noreturn
