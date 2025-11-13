// 函数: _ZN5Botan3TLS18Certificate_StatusC1ERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEE
// 地址: 0xe41eb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::TLS::Certificate_Status + 0x10
*(arg1 + 8) = 0
int64_t* entry_x1
char* x8_1 = *entry_x1
void* x9 = entry_x1[1] - x8_1

if (x9 u<= 4)
    void** x0_2 = __cxa_allocate_exception(0x20)
    int64_t x0_3
    int128_t v0
    x0_3, v0 = operator new(0x30)
    (*"ssage: too small")[0].o
    int64_t var_40 = x0_3
    v0 = data_71ce10
    __builtin_strncpy(x0_3, "Invalid Certificate_Status message: too small", 0x2e)
    int128_t var_50 = v0
    *x0_2 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_2[1])
    *x0_2 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_2, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

if (zx.d(*x8_1) != 1)
    void** x0_7 = __cxa_allocate_exception(0x20)
    int64_t x0_8
    int128_t v2
    x0_8, v2 = operator new(0x40)
    (*"ed response type")[0].o
    int64_t var_40_1 = x0_8
    v2 = data_71a920
    __builtin_strncpy(x0_8, "Unexpected Certificate_Status message: unexpected response type", 0x40)
    int128_t var_50_1 = v2
    *x0_7 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_7[1])
    *x0_7 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_7, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

if (x9 == ((-0xff01 & zx.q(x8_1[1]) << 0x10) | zx.q(x8_1[2]) << 8 | zx.q(x8_1[3])) + 4)
    return std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<std::__ndk1::__wrap_iter<uint8_t const*> >(
        arg1 + 8, &x8_1[4])

void** x0_12 = __cxa_allocate_exception(0x20)
int64_t x0_13
int128_t v0_1
x0_13, v0_1 = operator new(0x40)
(*"lid length field")[0].o
int64_t var_40_2 = x0_13
v0_1 = data_71b3f0
__builtin_strncpy(x0_13, "Invalid Certificate_Status: invalid length field", 0x31)
int128_t var_50_2 = v0_1
*x0_12 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_12[1])
*x0_12 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_12, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
