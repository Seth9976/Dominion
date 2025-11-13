// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertEmmw
// 地址: 0x10e2950
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
size_t n = arg3
uint64_t x22

if ((x8.d & 1) != 0)
    x22 = *(arg1 + 8)
else
    x22 = x8 u>> 1

if (x22 u< arg2)
    sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_out_of_range())
    noreturn

if (n != 0)
    int64_t x24_1
    uint64_t x1
    wchar_t* s2
    
    if ((x8.d & 1) != 0)
        x1 = (*arg1 & 0xfffffffffffffffe) - 1
        
        if (x1 - x22 u>= n)
            x24_1 = *(arg1 + 0x10)
            
            if (x22 != arg2)
                s2 = x24_1 + (arg2 << 2)
                wmemmove(&s2[n], s2, x22 - arg2)
        else
            std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
                arg1, x1, x22 + n - x1, x22, arg2, 0)
            x24_1 = *(arg1 + 0x10)
    else
        x1 = 4
        
        if (4 - x22 u< n)
            std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
                arg1, x1, x22 + n - x1, x22, arg2, 0)
            x24_1 = *(arg1 + 0x10)
        else
            x24_1 = arg1 + 4
            
            if (x22 != arg2)
                s2 = x24_1 + (arg2 << 2)
                wmemmove(&s2[n], s2, x22 - arg2)
    wchar_t entry_c
    wmemset(x24_1 + (arg2 << 2), entry_c, n)
    int64_t x8_6 = x22 + n
    
    if ((zx.d(*arg1) & 1) != 0)
        *(arg1 + 8) = x8_6
    else
        *arg1 = (x8_6.d << 1).b
    
    *(x24_1 + (x8_6 << 2)) = 0

return arg1
