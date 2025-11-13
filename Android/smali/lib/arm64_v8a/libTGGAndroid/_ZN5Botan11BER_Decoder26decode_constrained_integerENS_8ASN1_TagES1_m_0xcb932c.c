// 函数: _ZN5Botan11BER_Decoder26decode_constrained_integerENS_8ASN1_TagES1_m
// 地址: 0xcb932c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_98
int128_t var_70
int64_t entry_x3

if (entry_x3 u>= 9)
    void** x0_3 = __cxa_allocate_exception(0x20)
    int64_t x0_4
    int128_t v0
    x0_4, v0 = operator new(0x30)
    int64_t var_60_1 = x0_4
    var_70 = data_71c500
    __builtin_strncpy(x0_4, "Can\'t decode small integer over 8 bytes", 0x28)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "BER: ", &var_70)
    *x0_3 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_3[1])
    *x0_3 = _vtable_for_Botan::Decoding_Error + 0x10
    void* var_88
    
    if ((zx.d(var_98) & 1) != 0)
        operator delete(var_88)
    *x0_3 = _vtable_for_Botan::BER_Decoding_Error + 0x10
    __cxa_throw(x0_3, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
    noreturn

__builtin_memset(&var_98, 0, 0x18)
int64_t var_80 = -1
int32_t var_78 = 1
Botan::BER_Decoder::decode(arg1, &var_98, zx.q(arg2))

if (Botan::BigInt::bits() u> entry_x3 << 3)
    void** x0_9 = __cxa_allocate_exception(0x20)
    int64_t x0_10
    int128_t v0_1
    x0_10, v0_1 = operator new(0x30)
    int64_t var_a0 = x0_10
    int128_t var_b0 = data_71c1e0
    __builtin_strncpy(x0_10, "Decoded integer value larger than expected", 0x2b)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "BER: ", &var_b0)
    *x0_9 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_9[1])
    *x0_9 = _vtable_for_Botan::Decoding_Error + 0x10
    void* var_60
    
    if ((zx.d(var_70.b) & 1) != 0)
        operator delete(var_60)
    *x0_9 = _vtable_for_Botan::BER_Decoding_Error + 0x10
    __cxa_throw(x0_9, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
    noreturn

void* x0_1 = var_98.q
int64_t var_90
void* x8_1 = var_90 - x0_1
int16_t x19_1
int16_t x20
int32_t x21
int16_t x22

if (x8_1 s>> 2 u> 1)
    uint64_t x9_1 = zx.q(*(x0_1 + 4))
    x20 = (x9_1 u>> 0x10).w & 0xff
    x19_1 = x9_1.w & 0xff00
    x22 = (x9_1 u>> 0x10).w & 0xff00
    x21 = x9_1.d & 0xff
    
    if (x8_1 == 0)
        goto label_cb93e4
    
    goto label_cb93b4

x19_1 = 0
x22 = 0
x20 = 0
x21 = 0
int64_t x23
uint64_t x24
int16_t x25
int16_t x26
void* var_90_1
int64_t var_88_1

if (x8_1 != 0)
label_cb93b4:
    uint64_t x8_2 = zx.q(*x0_1)
    x24 = x8_2 u>> 0x10 & 0xff
    x25 = x8_2.w & 0xff00
    x26 = (x8_2 u>> 0x10).w & 0xff00
    x23 = x8_2 & 0xff
    var_90_1 = x0_1
    Botan::deallocate_memory(x0_1, (var_88_1 - x0_1) s>> 2, 4)
else
label_cb93e4:
    x23 = 0
    x24 = 0
    x26 = 0
    x25 = 0
    
    if (x0_1 != 0)
        var_90_1 = x0_1
        Botan::deallocate_memory(x0_1, (var_88_1 - x0_1) s>> 2, 4)
return zx.q(x25) | (0xffffffffffff & (zx.q(x26)
    | (0xffffffffffff & (zx.q(x19_1) | zx.q((zx.d(x22) | zx.d(x20)) << 0x10) | zx.q(x21))) << 0x10
    | x24)) << 0x10 | x23
