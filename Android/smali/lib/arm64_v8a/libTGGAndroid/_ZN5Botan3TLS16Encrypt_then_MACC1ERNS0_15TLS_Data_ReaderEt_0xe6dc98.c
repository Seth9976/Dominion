// 函数: _ZN5Botan3TLS16Encrypt_then_MACC1ERNS0_15TLS_Data_ReaderEt
// 地址: 0xe6dc98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::TLS::Encrypt_then_MAC + 0x10
int16_t entry_x2

if (zx.d(entry_x2) == 0)
    return 

void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v0
x0_1, v0 = operator new(0x30)
v0 = data_71d3f0
int64_t var_30 = x0_1
__builtin_strncpy(x0_1, "Invalid encrypt_then_mac extension", 0x23)
int128_t var_40 = v0
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
