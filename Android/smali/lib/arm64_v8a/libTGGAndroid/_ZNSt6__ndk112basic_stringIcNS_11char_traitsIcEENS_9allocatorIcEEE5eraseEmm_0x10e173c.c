// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
// 地址: 0x10e173c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t x9

if ((x8.d & 1) != 0)
    x9 = *(arg1 + 8)
else
    x9 = x8 u>> 1

if (x9 u< arg2)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_3
    uint64_t x1_1
    uint64_t x2_1
    x0_3, x1_1, x2_1 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
    return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        x0_3, x1_1, x2_1) __tailcall

uint64_t entry_x2

if (entry_x2 != 0)
    if (entry_x2 != -1)
        int64_t x20_1
        uint64_t x21_1
        
        if ((x8.d & 1) != 0)
            x21_1 = *(arg1 + 8)
            x20_1 = *(arg1 + 0x10)
        else
            x21_1 = x8 u>> 1
            x20_1 = arg1 + 1
        
        uint64_t x9_2 = x21_1 - arg2
        uint64_t x22_1
        
        x22_1 = x9_2 u< entry_x2 ? x9_2 : entry_x2
        
        if (x9_2 != x22_1)
            int64_t x0 = x20_1 + arg2
            memmove(x0, x0 + x22_1, x9_2 - x22_1)
            x8 = zx.q(*arg1)
        
        uint64_t x9_3 = x21_1 - x22_1
        
        if ((x8.d & 1) != 0)
            *(arg1 + 8) = x9_3
        else
            *arg1 = (x9_3.d << 1).b
        
        *(x20_1 + x9_3) = 0
    else if ((x8.d & 1) != 0)
        *(*(arg1 + 0x10) + arg2) = 0
        *(arg1 + 8) = arg2
    else
        *(arg1 + arg2 + 1) = 0
        *arg1 = (arg2.d << 1).b

return arg1
