// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertEmPKwm
// 地址: 0x10e2cbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t s2_1 = arg3
uint64_t x1
uint64_t x22

if ((x8.d & 1) != 0)
    x22 = *(arg1 + 8)
    
    if (x22 u< arg2)
        sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_out_of_range())
        noreturn
    
    x1 = (*arg1 & 0xfffffffffffffffe) - 1
else
    x22 = x8 u>> 1
    
    if (x22 u< arg2)
        sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_out_of_range())
        noreturn
    
    x1 = 4

wchar_t* entry_n

if (x1 - x22 u< entry_n)
    std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by_and_replace(
        arg1, x1, x22 + entry_n - x1, x22, arg2, 0, entry_n)
else if (entry_n != 0)
    int64_t x24_1
    void* n
    
    if ((x8.d & 1) != 0)
        x24_1 = *(arg1 + 0x10)
        n = x22 - arg2
        
        if (x22 != arg2)
        label_10e2d74:
            wchar_t* s2 = x24_1 + (arg2 << 2)
            bool c_1
            bool z_1
            
            if (x24_1 + (x22 << 2) u> s2_1)
                c_1 = s2 u>= s2_1
                z_1 = s2 == s2_1
            else
                z_1 = false
                c_1 = true
            
            if (z_1 || not(c_1))
                s2_1 += entry_n << 2
            
            wmemmove(&s2[entry_n], s2, n)
    else
        x24_1 = arg1 + 4
        n = x22 - arg2
        
        if (x22 != arg2)
            goto label_10e2d74
    wmemmove(x24_1 + (arg2 << 2), s2_1, entry_n)
    void* x8_4 = x22 + entry_n
    
    if ((zx.d(*arg1) & 1) != 0)
        *(arg1 + 8) = x8_4
    else
        *arg1 = (x8_4.d << 1).b
    
    *(x24_1 + (x8_4 << 2)) = 0

return arg1
