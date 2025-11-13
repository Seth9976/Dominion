// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendERKS5_mm
// 地址: 0x10e1818
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg2)
uint64_t x9
int64_t x10

if ((x8.d & 1) != 0)
    x9 = *(arg2 + 8)
    
    if (x9 u< arg3)
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range()) __tailcall
    
    x10 = *(arg2 + 0x10)
else
    x9 = x8 u>> 1
    
    if (x9 u< arg3)
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range()) __tailcall
    
    x10 = arg2 + 1

uint64_t x8_1 = zx.q(*arg1)
uint64_t x9_1 = x9 - arg3
uint64_t entry_x3
uint64_t x20

x20 = x9_1 u< entry_x3 ? x9_1 : entry_x3

uint64_t x1
uint64_t x21

if ((x8_1.d & 1) != 0)
    x21 = *(arg1 + 8)
    x1 = (*arg1 & 0xfffffffffffffffe) - 1
else
    x21 = x8_1 u>> 1
    x1 = 0x16

if (x1 - x21 u< x20)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(
        arg1, x1, x21 + x20 - x1, x21, x21, 0, x20)
else if (x20 != 0)
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x1) x22_1
    
    if ((x8_1.d & 1) != 0)
        x22_1 = *(arg1 + 0x10)
    else
        x22_1 = arg1 + 1
    
    memcpy(x22_1 + x21, x10 + arg3, x20)
    uint64_t x8_3 = x21 + x20
    
    if ((zx.d(*arg1) & 1) != 0)
        *(arg1 + 8) = x8_3
    else
        *arg1 = (x8_3.d << 1).b
    
    *(x22_1 + x8_3) = 0

return arg1
