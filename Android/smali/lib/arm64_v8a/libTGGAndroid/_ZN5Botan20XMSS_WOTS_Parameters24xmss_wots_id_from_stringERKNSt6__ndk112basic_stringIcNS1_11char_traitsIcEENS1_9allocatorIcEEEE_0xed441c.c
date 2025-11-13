// 函数: _ZN5Botan20XMSS_WOTS_Parameters24xmss_wots_id_from_stringERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xed441c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*arg1)
uint64_t x8 = *(arg1 + 8)
int32_t x9 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9 == 0 ? x10_1 : x8

if (x11 == 0xe)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "WOTSP-SHA2_256") == 0)
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

if (x11_1 == 0xe)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "WOTSP-SHA2_512") == 0)
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

if (x11_2 == 0xf)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "WOTSP-SHAKE_256") == 0)
        return 3
    
    uint64_t x10_4 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_4.d & 1
    x10_1 = x10_4 u>> 1

uint64_t x8_1

if ((x9 & 0xff) == 0)
    x8_1 = x10_1
else
    x8_1 = x8

if (x8_1 == 0xf && std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1, 0, -ffffffffffffffff, "WOTSP-SHAKE_512") == 0)
    return 4

void** x0_12 = __cxa_allocate_exception(0x20)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Unknown XMSS-WOTS algorithm param '", arg1)
char var_58[0x18]
int128_t* x0_14
int128_t v0
x0_14, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_58)
int64_t var_30 = x0_14[1].q
int128_t var_40 = *x0_14
__builtin_memset(x0_14, 0, 0x18)
*x0_12 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_12[1])
*x0_12 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_12, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
