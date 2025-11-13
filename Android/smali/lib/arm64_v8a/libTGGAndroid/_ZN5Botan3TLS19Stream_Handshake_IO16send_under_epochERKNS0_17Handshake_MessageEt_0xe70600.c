// 函数: _ZN5Botan3TLS19Stream_Handshake_IO16send_under_epochERKNS0_17Handshake_MessageEt
// 地址: 0xe70600
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v0
x0_1, v0 = operator new(0x50)
v0 = data_71c530
int64_t var_30 = x0_1
__builtin_strncpy(x0_1, "Not possible to send under arbitrary epoch with stream based TLS", 0x41)
int128_t var_40 = v0
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
