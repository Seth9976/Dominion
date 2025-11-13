// 函数: _ZN5Botan15XMSS_Parameters19xmss_id_from_stringERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xecbd00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*arg1)
uint64_t x8 = *(arg1 + 8)
int32_t x9 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9 == 0 ? x10_1 : x8

if (x11 == 0x10)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "XMSS-SHA2_10_256") == 0)
        return 1
    
    uint64_t x10_2 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1

uint64_t x11_1

if ((x9 & 0xff) == 0)
    x11_1 = x10_1
else
    x11_1 = x8

if (x11_1 == 0x10)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "XMSS-SHA2_16_256") == 0)
        return 2
    
    uint64_t x10_3 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_3.d & 1
    x10_1 = x10_3 u>> 1

uint64_t x11_2

if ((x9 & 0xff) == 0)
    x11_2 = x10_1
else
    x11_2 = x8

if (x11_2 == 0x10)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "XMSS-SHA2_20_256") == 0)
        return 3
    
    uint64_t x10_4 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_4.d & 1
    x10_1 = x10_4 u>> 1

uint64_t x11_3

if ((x9 & 0xff) == 0)
    x11_3 = x10_1
else
    x11_3 = x8

if (x11_3 == 0x10)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "XMSS-SHA2_10_512") == 0)
        return 4
    
    uint64_t x10_5 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_5.d & 1
    x10_1 = x10_5 u>> 1

uint64_t x11_4

if ((x9 & 0xff) == 0)
    x11_4 = x10_1
else
    x11_4 = x8

if (x11_4 == 0x10)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "XMSS-SHA2_16_512") == 0)
        return 5
    
    uint64_t x10_6 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_6.d & 1
    x10_1 = x10_6 u>> 1

uint64_t x11_5

if ((x9 & 0xff) == 0)
    x11_5 = x10_1
else
    x11_5 = x8

if (x11_5 == 0x10)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "XMSS-SHA2_20_512") == 0)
        return 6
    
    uint64_t x10_7 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_7.d & 1
    x10_1 = x10_7 u>> 1

uint64_t x11_6

if ((x9 & 0xff) == 0)
    x11_6 = x10_1
else
    x11_6 = x8

if (x11_6 == 0x11)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "XMSS-SHAKE_10_256") == 0)
        return 7
    
    uint64_t x10_8 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_8.d & 1
    x10_1 = x10_8 u>> 1

uint64_t x11_7

if ((x9 & 0xff) == 0)
    x11_7 = x10_1
else
    x11_7 = x8

if (x11_7 == 0x11)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "XMSS-SHAKE_16_256") == 0)
        return 8
    
    uint64_t x10_9 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_9.d & 1
    x10_1 = x10_9 u>> 1

uint64_t x11_8

if ((x9 & 0xff) == 0)
    x11_8 = x10_1
else
    x11_8 = x8

if (x11_8 == 0x11)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "XMSS-SHAKE_20_256") == 0)
        return 9
    
    uint64_t x10_10 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_10.d & 1
    x10_1 = x10_10 u>> 1

uint64_t x11_9

if ((x9 & 0xff) == 0)
    x11_9 = x10_1
else
    x11_9 = x8

if (x11_9 == 0x11)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "XMSS-SHAKE_10_512") == 0)
        return 0xa
    
    uint64_t x10_11 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_11.d & 1
    x10_1 = x10_11 u>> 1

uint64_t x11_10

if ((x9 & 0xff) == 0)
    x11_10 = x10_1
else
    x11_10 = x8

if (x11_10 == 0x11)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "XMSS-SHAKE_16_512") == 0)
        return 0xb
    
    uint64_t x10_12 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_12.d & 1
    x10_1 = x10_12 u>> 1

uint64_t x8_1

if ((x9 & 0xff) == 0)
    x8_1 = x10_1
else
    x8_1 = x8

if (x8_1 == 0x11 && std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1, 0, -ffffffffffffffff, "XMSS-SHAKE_20_512") == 0)
    return 0xc

void** x0_36 = __cxa_allocate_exception(0x20)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Unknown XMSS algorithm param '", arg1)
char var_58[0x18]
int128_t* x0_38
int128_t v0
x0_38, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_58)
int64_t var_30 = x0_38[1].q
int128_t var_40 = *x0_38
__builtin_memset(x0_38, 0, 0x18)
*x0_36 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_36[1])
*x0_36 = _vtable_for_Botan::Lookup_Error + 0x10
__cxa_throw(x0_36, _typeinfo_for_Botan::Lookup_Error, Botan::Exception::~Exception)
noreturn
