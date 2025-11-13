// 函数: _ZN5Botan3TLS14SRP_IdentifierC1ERNS0_15TLS_Data_ReaderEt
// 地址: 0xe6bc04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::TLS::SRP_Identifier + 0x10
int64_t result = Botan::TLS::TLS_Data_Reader::get_string(arg2, 1, 1)
uint64_t x8_2 = zx.q(*(arg1 + 8))
uint64_t x8_3

if ((x8_2.d & 1) != 0)
    x8_3 = *(arg1 + 0x10)
else
    x8_3 = x8_2 u>> 1

int16_t entry_x2

if (x8_3 + 1 == zx.q(entry_x2))
    return result

void** x0_1 = __cxa_allocate_exception(0x20)
int64_t x0_2
int128_t v0
x0_2, v0 = operator new(0x30)
(*"tifier extension")[0].o
int64_t var_40 = x0_2
v0 = data_71cbb0
__builtin_strncpy(x0_2, "Bad encoding for SRP identifier extension", 0x2a)
int128_t var_50 = v0
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
*x0_1 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
