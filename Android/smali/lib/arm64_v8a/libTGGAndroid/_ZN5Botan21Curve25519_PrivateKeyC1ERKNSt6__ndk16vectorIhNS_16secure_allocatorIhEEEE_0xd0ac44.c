// 函数: _ZN5Botan21Curve25519_PrivateKeyC1ERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xd0ac44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*arg1 = _vtable_for_Botan::Curve25519_PrivateKey + 0x98
*(arg1 + 8) = 0
*(arg1 + 0x30) = 0
*(arg1 + 0x38) = _vtable_for_Botan::Curve25519_PrivateKey + 0x1f8
*(arg1 + 0x28) = 0
int128_t var_60
int64_t* entry_x1

if (entry_x1[1] - *entry_x1 != 0x20)
    void** x0_2 = __cxa_allocate_exception(0x20)
    int64_t x0_3
    int128_t v0_1
    x0_3, v0_1 = operator new(0x30)
    v0_1 = data_71c500
    int64_t var_50_1 = x0_3
    __builtin_strncpy(x0_3, "Invalid size for Curve25519 private key", 0x28)
    var_60 = v0_1
    *x0_2 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_2[1])
    *x0_2 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_2, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

uint8_t* x0
int128_t v0
int128_t v1
x0, v0, v1 = operator new(0x20)
v0.q = 0
v0:8.q = 0
__builtin_memset(x0, 0, 0x20)
*(arg1 + 8) = x0
*(arg1 + 0x10) = &x0[0x20]
*(arg1 + 0x18) = &x0[0x20]
uint8_t* x1_1

if (arg1 + 0x20 == entry_x1)
    x1_1 = nullptr
else
    entry_x1[1]
    v0, v1 = std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
        arg1 + 0x20, *entry_x1)
    x0 = *(arg1 + 8)
    x1_1 = *(arg1 + 0x20)

v1 = data_7b0130
var_60 = data_7b0120
int64_t var_50
var_50.o = v1
int64_t result = Botan::curve25519_donna(x0, x1_1, &var_60)

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
