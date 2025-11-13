// 函数: _ZN5Botan3TLS22kex_method_from_stringERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe54474
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*arg1)
uint64_t x8 = *(arg1 + 8)
int32_t x9 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9 == 0 ? x10_1 : x8

if (x11 == 3)
    int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1, 0, -ffffffffffffffff, &data_76da56)
    
    if (result.d == 0)
        return result
    
    uint64_t x10_2 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1

uint64_t x11_1

if ((x9 & 0xff) == 0)
    x11_1 = x10_1
else
    x11_1 = x8

if (x11_1 == 2)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, &data_72d952) == 0)
        return 1
    
    uint64_t x10_3 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_3.d & 1
    x10_1 = x10_3 u>> 1

uint64_t x11_2

if ((x9 & 0xff) == 0)
    x11_2 = x10_1
else
    x11_2 = x8

if (x11_2 == 4)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "ECDH") == 0)
        return 2
    
    uint64_t x10_4 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_4.d & 1
    x10_1 = x10_4 u>> 1

uint64_t x11_3

if ((x9 & 0xff) == 0)
    x11_3 = x10_1
else
    x11_3 = x8

if (x11_3 == 6)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "CECPQ1") == 0)
        return 3
    
    uint64_t x10_5 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_5.d & 1
    x10_1 = x10_5 u>> 1

uint64_t x11_4

if ((x9 & 0xff) == 0)
    x11_4 = x10_1
else
    x11_4 = x8

if (x11_4 == 7)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "SRP_SHA") == 0)
        return 4
    
    uint64_t x10_6 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_6.d & 1
    x10_1 = x10_6 u>> 1

uint64_t x11_5

if ((x9 & 0xff) == 0)
    x11_5 = x10_1
else
    x11_5 = x8

if (x11_5 == 3)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, 0x729ae7) == 0)
        return 5
    
    uint64_t x10_7 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_7.d & 1
    x10_1 = x10_7 u>> 1

uint64_t x11_6

if ((x9 & 0xff) == 0)
    x11_6 = x10_1
else
    x11_6 = x8

if (x11_6 == 7)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "DHE_PSK") == 0)
        return 6
    
    uint64_t x10_8 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_8.d & 1
    x10_1 = x10_8 u>> 1

uint64_t x8_1

if ((x9 & 0xff) == 0)
    x8_1 = x10_1
else
    x8_1 = x8

if (x8_1 == 9 && std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1, 0, -ffffffffffffffff, "ECDHE_PSK") == 0)
    return 7

void** x0_21 = __cxa_allocate_exception(0x20)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Unknown kex method ", arg1)
*x0_21 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_21[1])
*x0_21 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_21, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
