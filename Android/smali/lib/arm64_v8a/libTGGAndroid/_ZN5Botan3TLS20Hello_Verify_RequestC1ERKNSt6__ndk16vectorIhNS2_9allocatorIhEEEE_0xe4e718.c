// 函数: _ZN5Botan3TLS20Hello_Verify_RequestC1ERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEE
// 地址: 0xe4e718
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::TLS::Hello_Verify_Request + 0x10
*(arg1 + 8) = 0
int64_t* entry_x1
int16_t* x8_1 = *entry_x1
void* x9 = entry_x1[1] - x8_1

if (x9 u<= 2)
    void** x0_2 = __cxa_allocate_exception(0x20)
    int64_t x0_3
    int128_t v0
    x0_3, v0 = operator new(0x20)
    int64_t var_40 = x0_3
    int128_t var_50 = data_71c370
    __builtin_strncpy(x0_3, "Hello verify request too small", 0x1f)
    *x0_2 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_2[1])
    *x0_2 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_2, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

if ((_byteswap(zx.d(*x8_1) << 0x10) | 2) != 0xfeff)
    void** x0_11 = __cxa_allocate_exception(0x20)
    int64_t x0_12
    int128_t v1
    x0_12, v1 = operator new(0x40)
    int64_t var_40_2 = x0_12
    v1 = data_71bb80
    __builtin_strncpy(x0_12, "Unknown version from server in hello verify request", 0x34)
    int128_t var_50_2 = v1
    *x0_11 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_11[1])
    *x0_11 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_11, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

if (zx.q(x8_1[1].b) + 3 == x9)
    return std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<std::__ndk1::__wrap_iter<uint8_t const*> >(
        arg1 + 8, x8_1 + 3)

void** x0_6 = __cxa_allocate_exception(0x20)
int64_t x0_7
int128_t v0_1
x0_7, v0_1 = operator new(0x30)
v0_1 = data_71d3f0
int64_t var_40_1 = x0_7
__builtin_strncpy(x0_7, "Bad length in hello verify request", 0x23)
int128_t var_50_1 = v0_1
*x0_6 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_6[1])
*x0_6 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_6, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
