// 函数: _ZNK5Botan14PKCS10_Request4dataEv
// 地址: 0xea60dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t result = *(entry_x0 + 0x78)

if (result != 0)
    return result

void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v0
x0_1, v0 = operator new(0x20)
int64_t var_30 = x0_1
int128_t var_40 = data_71c370
__builtin_strncpy(x0_1, "PKCS10_Request decoding failed", 0x1f)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
