// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmmc
// 地址: 0x10e06cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
size_t x20 = arg3
uint64_t x22

if ((x8.d & 1) != 0)
    x22 = *(arg1 + 8)
else
    x22 = x8 u>> 1

if (x22 u< arg2)
    uint64_t x0_5
    uint64_t x1_3
    uint64_t x2_3
    uint64_t x3_1
    uint64_t x4_2
    uint64_t x5
    x0_5, x1_3, x2_3, x3_1, x4_2, x5 =
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
    return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by(
        x0_5, x1_3, x2_3, x3_1, x4_2, x5) __tailcall

if (x20 != 0)
    char* x24_1
    uint64_t x1
    void* x1_1
    
    if ((x8.d & 1) != 0)
        x1 = (*arg1 & 0xfffffffffffffffe) - 1
        
        if (x1 - x22 u>= x20)
            x24_1 = *(arg1 + 0x10)
            
            if (x22 != arg2)
                x1_1 = &x24_1[arg2]
                memmove(x1_1 + x20, x1_1, x22 - arg2)
        else
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by(
                arg1, x1, x22 + x20 - x1, x22, arg2, 0)
            x24_1 = *(arg1 + 0x10)
    else
        x1 = 0x16
        
        if (0x16 - x22 u< x20)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by(
                arg1, x1, x22 + x20 - x1, x22, arg2, 0)
            x24_1 = *(arg1 + 0x10)
        else
            x24_1 = arg1 + 1
            
            if (x22 != arg2)
                x1_1 = &x24_1[arg2]
                memmove(x1_1 + x20, x1_1, x22 - arg2)
    int32_t entry_x3
    memset(&x24_1[arg2], entry_x3, x20)
    int64_t x8_6 = x22 + x20
    
    if ((zx.d(*arg1) & 1) != 0)
        *(arg1 + 8) = x8_6
    else
        *arg1 = (x8_6.d << 1).b
    
    x24_1[x8_6] = 0

return arg1
