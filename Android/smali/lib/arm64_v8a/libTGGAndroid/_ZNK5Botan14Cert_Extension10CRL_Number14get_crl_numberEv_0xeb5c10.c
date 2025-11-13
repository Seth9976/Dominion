// 函数: _ZNK5Botan14Cert_Extension10CRL_Number14get_crl_numberEv
// 地址: 0xeb5c10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if (zx.d(*(entry_x0 + 8)) != 0)
    return *(entry_x0 + 0x10)

void** x0_1 = __cxa_allocate_exception(0x20)
int64_t x0_2
int128_t v2
x0_2, v2 = operator new(0x30)
v2 = data_71b820
int64_t var_30 = x0_2
__builtin_strncpy(x0_2, "CRL_Number::get_crl_number: Not set", 0x24)
int128_t var_40 = v2
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
*x0_1 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
