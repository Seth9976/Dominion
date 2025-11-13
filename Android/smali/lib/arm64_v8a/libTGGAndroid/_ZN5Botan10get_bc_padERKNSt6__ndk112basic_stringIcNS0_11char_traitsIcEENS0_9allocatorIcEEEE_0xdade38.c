// 函数: _ZN5Botan10get_bc_padERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// 地址: 0xdade38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*arg1)
uint64_t x8 = *(arg1 + 8)
int32_t x9 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9 == 0 ? x10_1 : x8

if (x11 == 9)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "NoPadding") == 0)
        void** x0_11 = operator new(8)
        *x0_11 = _vtable_for_Botan::Null_Padding + 0x10
        return x0_11
    
    uint64_t x10_2 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1

uint64_t x11_1

if ((x9 & 0xff) == 0)
    x11_1 = x10_1
else
    x11_1 = x8

if (x11_1 == 5)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "PKCS7") == 0)
        void** x0_12 = operator new(8)
        *x0_12 = _vtable_for_Botan::PKCS7_Padding + 0x10
        return x0_12
    
    uint64_t x10_3 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_3.d & 1
    x10_1 = x10_3 u>> 1

uint64_t x11_2

if ((x9 & 0xff) == 0)
    x11_2 = x10_1
else
    x11_2 = x8

if (x11_2 == 0xb)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "OneAndZeros") == 0)
        void** x0_13 = operator new(8)
        *x0_13 = _vtable_for_Botan::OneAndZeros_Padding + 0x10
        return x0_13
    
    uint64_t x10_4 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_4.d & 1
    x10_1 = x10_4 u>> 1

uint64_t x11_3

if ((x9 & 0xff) == 0)
    x11_3 = x10_1
else
    x11_3 = x8

if (x11_3 == 5)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "X9.23") == 0)
        void** x0_14 = operator new(8)
        *x0_14 = _vtable_for_Botan::ANSI_X923_Padding + 0x10
        return x0_14
    
    uint64_t x10_5 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_5.d & 1
    x10_1 = x10_5 u>> 1

uint64_t x8_1

if ((x9 & 0xff) == 0)
    x8_1 = x10_1
else
    x8_1 = x8

if (x8_1 == 3 && std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1, 0, -ffffffffffffffff, 0x7a2c8f) == 0)
    void** x0_15 = operator new(8)
    *x0_15 = _vtable_for_Botan::ESP_Padding + 0x10
    return x0_15

return 0
