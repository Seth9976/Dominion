// 函数: _ZNK5Botan16X509_Certificate33subject_public_key_bitstring_sha1Ev
// 地址: 0xcf7314
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = Botan::X509_Certificate::data()

if (*(x0 + 0x190) != *(x0 + 0x198))
    return Botan::X509_Certificate::data() + 0x190

void** x0_3 = __cxa_allocate_exception(0x20)
int64_t x0_4
int128_t v0
x0_4, v0 = operator new(0x60)
int128_t var_50 = data_71d0d0
int64_t var_40 = x0_4
__builtin_strncpy(x0_4, 
    "X509_Certificate::subject_public_key_bitstring_sha1 called but SHA-1 disabled in build", 0x57)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Encoding error: ", &var_50)
*x0_3 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_3[1])
*x0_3 = _vtable_for_Botan::Invalid_Argument + 0x10
char var_38
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)
*x0_3 = _vtable_for_Botan::Encoding_Error + 0x10
__cxa_throw(x0_3, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
noreturn
