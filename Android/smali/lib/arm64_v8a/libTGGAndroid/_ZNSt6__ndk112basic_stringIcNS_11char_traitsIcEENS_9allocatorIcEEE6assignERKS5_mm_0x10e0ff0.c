// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignERKS5_mm
// 地址: 0x10e0ff0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg2)
uint64_t x8_1
int64_t x9
char* x0_4
uint64_t x1_2
uint64_t x2_2

if ((x8.d & 1) != 0)
    x8_1 = *(arg2 + 8)
    
    if (x8_1 u< arg3)
        x0_4, x1_2, x2_2 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::copy(
            x0_4, x1_2, x2_2) __tailcall
    
    x9 = *(arg2 + 0x10)
else
    x8_1 = x8 u>> 1
    
    if (x8_1 u< arg3)
        x0_4, x1_2, x2_2 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::copy(
            x0_4, x1_2, x2_2) __tailcall
    
    x9 = arg2 + 1
uint64_t x10 = zx.q(*arg1)
uint64_t x8_2 = x8_1 - arg3
uint64_t entry_x3
uint64_t x20

x20 = x8_2 u< entry_x3 ? x8_2 : entry_x3

uint64_t x1
uint64_t x3
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x21_1

if ((x10.d & 1) != 0)
    x1 = (*arg1 & 0xfffffffffffffffe) - 1
    
    if (x1 u>= x20)
        x21_1 = *(arg1 + 0x10)
        
        if (x20 == 0)
            goto label_10e10b8
        
    label_10e10b4:
        memmove(x21_1, x9 + arg3, x20)
    label_10e10b8:
        *(x21_1 + x20) = 0
        
        if ((zx.d(*arg1) & 1) != 0)
            *(arg1 + 8) = x20
        else
            *arg1 = (x20.d << 1).b
    else
        x3 = *(arg1 + 8)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(
            arg1, x1, x20 - x1, x3, 0, x3, x20)
else
    if (x20 u<= 0x16)
        x21_1 = arg1 + 1
        
        if (x20 != 0)
            goto label_10e10b4
        
        goto label_10e10b8
    
    x3 = x10 u>> 1
    x1 = 0x16
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(
        arg1, x1, x20 - x1, x3, 0, x3, x20)
return arg1
