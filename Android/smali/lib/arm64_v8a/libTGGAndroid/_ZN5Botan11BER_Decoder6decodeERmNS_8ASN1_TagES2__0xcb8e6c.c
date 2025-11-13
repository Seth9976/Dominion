// 函数: _ZN5Botan11BER_Decoder6decodeERmNS_8ASN1_TagES2_
// 地址: 0xcb8e6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = arg2
int32_t* var_60
__builtin_memset(&var_60, 0, 0x18)
int64_t var_48 = -1
int32_t var_40 = 1
Botan::BER_Decoder::decode(arg1, &var_60, arg3)
int128_t var_80
char var_38
void* var_28

if (var_40 == 0)
    void** x0_3 = __cxa_allocate_exception(0x20)
    int64_t x0_4
    int128_t v0
    x0_4, v0 = operator new(0x30)
    int64_t var_70 = x0_4
    var_80 = data_71aa70
    __builtin_strncpy(x0_4, "Decoded small integer value was negative", 0x29)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "BER: ", &var_80)
    *x0_3 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_3[1])
    *x0_3 = _vtable_for_Botan::Decoding_Error + 0x10
    
    if ((zx.d(var_38) & 1) != 0)
        operator delete(var_28)
    
    *x0_3 = _vtable_for_Botan::BER_Decoding_Error + 0x10
    __cxa_throw(x0_3, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
    noreturn

if (Botan::BigInt::bits() u>= 0x21)
    void** x0_9 = __cxa_allocate_exception(0x20)
    int64_t x0_10
    int128_t v0_1
    x0_10, v0_1 = operator new(0x30)
    int64_t var_70_1 = x0_10
    var_80 = data_71c1e0
    __builtin_strncpy(x0_10, "Decoded integer value larger than expected", 0x2b)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "BER: ", &var_80)
    *x0_9 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_9[1])
    *x0_9 = _vtable_for_Botan::Decoding_Error + 0x10
    
    if ((zx.d(var_38) & 1) != 0)
        operator delete(var_28)
    
    *x0_9 = _vtable_for_Botan::BER_Decoding_Error + 0x10
    __cxa_throw(x0_9, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
    noreturn

*x20 = 0
int32_t* x0_1 = var_60
int64_t var_58
int32_t* var_58_1
int64_t var_50

if (var_58 == x0_1)
    *x20 = 0
    
    if (x0_1 != 0)
        var_58_1 = x0_1
        Botan::deallocate_memory(x0_1, (var_50 - x0_1) s>> 2, 4)
else
    uint64_t x8_3 = zx.q(*x0_1) u>> 0x18
    *x20 = x8_3
    int64_t x9_2 = (-0xff01 & zx.q(*(x0_1 + 2))) | (0xff & x8_3) << 8
    *x20 = x9_2
    int64_t x8_5 = (-0xffff01 & zx.q(*(x0_1 + 1))) | (0xffff & x9_2) << 8
    *x20 = x8_5
    *x20 = zx.q(*x0_1) | (0xffffffffffffff & x8_5) << 8
    var_58_1 = x0_1
    Botan::deallocate_memory(x0_1, (var_50 - x0_1) s>> 2, 4)
return arg1
