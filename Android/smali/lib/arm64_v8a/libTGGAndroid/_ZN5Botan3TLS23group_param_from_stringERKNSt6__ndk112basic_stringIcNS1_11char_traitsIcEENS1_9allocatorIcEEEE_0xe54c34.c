// 函数: _ZN5Botan3TLS23group_param_from_stringERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe54c34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*arg1)
uint64_t x8 = *(arg1 + 8)
int32_t x9 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9 == 0 ? x10_1 : x8

if (x11 == 9)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "secp256r1") == 0)
        return 0x17
    
    uint64_t x10_2 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1

uint64_t x11_1

if ((x9 & 0xff) == 0)
    x11_1 = x10_1
else
    x11_1 = x8

if (x11_1 == 9)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "secp384r1") == 0)
        return 0x18
    
    uint64_t x10_3 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_3.d & 1
    x10_1 = x10_3 u>> 1

uint64_t x11_2

if ((x9 & 0xff) == 0)
    x11_2 = x10_1
else
    x11_2 = x8

if (x11_2 == 9)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "secp521r1") == 0)
        return 0x19
    
    uint64_t x10_4 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_4.d & 1
    x10_1 = x10_4 u>> 1

uint64_t x11_3

if ((x9 & 0xff) == 0)
    x11_3 = x10_1
else
    x11_3 = x8

if (x11_3 == 0xe)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "brainpool256r1") == 0)
        return 0x1a
    
    uint64_t x10_5 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_5.d & 1
    x10_1 = x10_5 u>> 1

uint64_t x11_4

if ((x9 & 0xff) == 0)
    x11_4 = x10_1
else
    x11_4 = x8

if (x11_4 == 0xe)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "brainpool384r1") == 0)
        return 0x1b
    
    uint64_t x10_6 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_6.d & 1
    x10_1 = x10_6 u>> 1

uint64_t x11_5

if ((x9 & 0xff) == 0)
    x11_5 = x10_1
else
    x11_5 = x8

if (x11_5 == 0xe)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "brainpool512r1") == 0)
        return 0x1c
    
    uint64_t x10_7 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_7.d & 1
    x10_1 = x10_7 u>> 1

uint64_t x11_6

if ((x9 & 0xff) == 0)
    x11_6 = x10_1
else
    x11_6 = x8

if (x11_6 == 6)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "x25519") == 0)
        return 0x1d
    
    uint64_t x10_8 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_8.d & 1
    x10_1 = x10_8 u>> 1

uint64_t x11_7

if ((x9 & 0xff) == 0)
    x11_7 = x10_1
else
    x11_7 = x8

if (x11_7 == 0xf)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "ffdhe/ietf/2048") == 0)
        return 0x100
    
    uint64_t x10_9 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_9.d & 1
    x10_1 = x10_9 u>> 1

uint64_t x11_8

if ((x9 & 0xff) == 0)
    x11_8 = x10_1
else
    x11_8 = x8

if (x11_8 == 0xf)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "ffdhe/ietf/3072") == 0)
        return 0x101
    
    uint64_t x10_10 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_10.d & 1
    x10_1 = x10_10 u>> 1

uint64_t x11_9

if ((x9 & 0xff) == 0)
    x11_9 = x10_1
else
    x11_9 = x8

if (x11_9 == 0xf)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "ffdhe/ietf/4096") == 0)
        return 0x102
    
    uint64_t x10_11 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_11.d & 1
    x10_1 = x10_11 u>> 1

uint64_t x11_10

if ((x9 & 0xff) == 0)
    x11_10 = x10_1
else
    x11_10 = x8

if (x11_10 == 0xf)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "ffdhe/ietf/6144") == 0)
        return 0x103
    
    uint64_t x10_12 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_12.d & 1
    x10_1 = x10_12 u>> 1

uint64_t x8_1

if ((x9 & 0xff) == 0)
    x8_1 = x10_1
else
    x8_1 = x8

if (x8_1 != 0xf)
    return 0

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1, 0, -ffffffffffffffff, "ffdhe/ietf/8192") == 0)
    return 0x104

return 0
