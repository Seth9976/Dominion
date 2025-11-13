// 函数: _ZN5Botan14XMSS_PublicKey20deserialize_xmss_oidERKNSt6__ndk16vectorIhNS1_9allocatorIhEEEE
// 地址: 0xed18bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
int32_t* x8 = *entry_x1

if (entry_x1[1] - x8 u>= 4)
    return zx.q(_byteswap(*x8))

void** x0_1 = __cxa_allocate_exception(0x20)
int64_t x0_2
int128_t v0
x0_2, v0 = operator new(0x20)
int64_t var_30 = x0_2
int128_t var_40 = data_71abe0
__builtin_strncpy(x0_2, "XMSS signature OID missing.", 0x1c)
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
*x0_1 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
