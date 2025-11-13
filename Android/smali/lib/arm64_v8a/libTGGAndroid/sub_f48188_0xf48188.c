// 函数: sub_f48188
// 地址: 0xf48188
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v0
x0_1, v0 = operator new(0x40)
int64_t var_40 = x0_1
int128_t var_50 = data_71b0e0
__builtin_strncpy(x0_1, "Internal error: Attempt to read password for unencrypted key", 0x3d)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "PKCS #8: ", &var_50)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Decoding_Error + 0x10
char var_38
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)
*x0 = _vtable_for_Botan::PKCS8_Exception + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::PKCS8_Exception, Botan::Exception::~Exception)
noreturn
