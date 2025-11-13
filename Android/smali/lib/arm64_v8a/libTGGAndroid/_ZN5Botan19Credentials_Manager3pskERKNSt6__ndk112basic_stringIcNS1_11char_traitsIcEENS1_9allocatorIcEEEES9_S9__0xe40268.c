// 函数: _ZN5Botan19Credentials_Manager3pskERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_
// 地址: 0xe40268
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0 = __cxa_allocate_exception(0x20)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x3
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "No PSK set for identity ", entry_x3)
void var_50
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &var_50)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
char var_38
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)
*x0 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
