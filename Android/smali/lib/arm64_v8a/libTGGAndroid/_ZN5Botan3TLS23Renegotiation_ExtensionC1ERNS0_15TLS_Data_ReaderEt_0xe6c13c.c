// 函数: _ZN5Botan3TLS23Renegotiation_ExtensionC1ERNS0_15TLS_Data_ReaderEt
// 地址: 0xe6c13c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::TLS::Renegotiation_Extension + 0x10
int64_t result = Botan::TLS::TLS_Data_Reader::get_range<uint8_t>(arg2, 1, 0)
int16_t entry_x2

if (*(arg1 + 0x10) - *(arg1 + 8) + 1 == zx.q(entry_x2))
    return result

void** x0_1 = __cxa_allocate_exception(0x20)
int64_t x0_2
int128_t v0
x0_2, v0 = operator new(0x30)
(*"negotiation extn")[0].o
int64_t var_40 = x0_2
v0 = data_71c1e0
__builtin_strncpy(x0_2, "Bad encoding for secure renegotiation extn", 0x2b)
int128_t var_50 = v0
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
*x0_1 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
