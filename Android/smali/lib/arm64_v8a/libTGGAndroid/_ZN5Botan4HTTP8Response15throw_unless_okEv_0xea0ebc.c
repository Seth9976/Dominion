// 函数: _ZN5Botan4HTTP8Response15throw_unless_okEv
// 地址: 0xea0ebc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x0

if (*entry_x0 == 0xc8)
    return 

void** x0 = __cxa_allocate_exception(0x20)
void var_50
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_50)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "HTTP error ", &var_50)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
char var_38
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)
*x0 = _vtable_for_Botan::HTTP::HTTP_Error + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::HTTP::HTTP_Error, Botan::Exception::~Exception)
noreturn
