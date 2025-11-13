// 函数: _ZN5Botan3TLS25Datagram_Sequence_Numbers18next_read_sequenceEv
// 地址: 0xf1b9e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v2
x0_1, v2 = operator new(0x30)
v2 = data_71b820
int64_t var_30 = x0_1
__builtin_strncpy(x0_1, "DTLS uses explicit sequence numbers", 0x24)
int128_t var_40 = v2
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
