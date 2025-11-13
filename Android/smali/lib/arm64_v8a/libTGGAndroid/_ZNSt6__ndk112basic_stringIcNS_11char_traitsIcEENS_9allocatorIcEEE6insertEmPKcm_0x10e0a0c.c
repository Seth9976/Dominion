// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
// 地址: 0x10e0a0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t x21 = arg3
uint64_t x1
uint64_t x22
char* x0_5
uint64_t x1_3
uint64_t x2_3

if ((x8.d & 1) != 0)
    x22 = *(arg1 + 8)
    
    if (x22 u< arg2)
        x0_5, x1_3, x2_3 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find_first_of(
            x0_5, x1_3, x2_3) __tailcall
    
    x1 = (*arg1 & 0xfffffffffffffffe) - 1
else
    x22 = x8 u>> 1
    
    if (x22 u< arg2)
        x0_5, x1_3, x2_3 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find_first_of(
            x0_5, x1_3, x2_3) __tailcall
    
    x1 = 0x16
char* entry_x3

if (x1 - x22 u< entry_x3)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(
        arg1, x1, &entry_x3[x22] - x1, x22, arg2, 0, entry_x3)
else if (entry_x3 != 0)
    char* x24_1
    void* x2_1
    
    if ((x8.d & 1) != 0)
        x24_1 = *(arg1 + 0x10)
        x2_1 = x22 - arg2
        
        if (x22 != arg2)
        label_10e0ac4:
            void* x1_1 = x24_1 + arg2
            bool c_1
            bool z_1
            
            if (&x24_1[x22] u> x21)
                c_1 = x1_1 u>= x21
                z_1 = x1_1 == x21
            else
                z_1 = false
                c_1 = true
            
            if (z_1 || not(c_1))
                x21 = &entry_x3[x21]
            
            memmove(x1_1 + entry_x3, x1_1, x2_1)
    else
        x24_1 = arg1 + 1
        x2_1 = x22 - arg2
        
        if (x22 != arg2)
            goto label_10e0ac4
    memmove(x24_1 + arg2, x21, entry_x3)
    void* x8_3 = &entry_x3[x22]
    
    if ((zx.d(*arg1) & 1) != 0)
        *(arg1 + 8) = x8_3
    else
        *arg1 = (x8_3.d << 1).b
    
    *(x24_1 + x8_3) = 0

return arg1
