// 函数: _ZNK5Botan14Cert_Extension10CRL_Number4copyEv
// 地址: 0xeb5d10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if (zx.d(*(entry_x0 + 8)) != 0)
    void** result = operator new(0x18)
    result[2] = *(entry_x0 + 0x10)
    *result = _vtable_for_Botan::Cert_Extension::CRL_Number + 0x10
    result[1].b = 1
    return result

void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v0
x0_1, v0 = operator new(0x20)
int64_t var_30 = x0_1
int128_t var_40 = data_71aa40
__builtin_strncpy(x0_1, "CRL_Number::copy: Not set", 0x1a)
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
