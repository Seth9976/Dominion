// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6assignEPKwm
// 地址: 0x10e2fcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t x1
wchar_t* entry_n
uint64_t x3_1
wchar_t* s1

if ((x8.d & 1) != 0)
    x1 = (*arg1 & 0xfffffffffffffffe) - 1
    
    if (x1 u>= entry_n)
        s1 = *(arg1 + 0x10)
        
        if (entry_n == 0)
            goto label_10e3060
        
    label_10e305c:
        wmemmove(s1, arg2, entry_n)
    label_10e3060:
        s1[entry_n] = 0
        
        if ((zx.d(*arg1) & 1) != 0)
            *(arg1 + 8) = entry_n
        else
            *arg1 = (entry_n.d << 1).b
    else
        x3_1 = *(arg1 + 8)
        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by_and_replace(
            arg1, x1, entry_n - x1, x3_1, 0, x3_1, entry_n)
else
    if (entry_n u<= 4)
        s1 = &arg1[1]
        
        if (entry_n != 0)
            goto label_10e305c
        
        goto label_10e3060
    
    x3_1 = x8 u>> 1
    x1 = 4
    std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by_and_replace(
        arg1, x1, entry_n - x1, x3_1, 0, x3_1, entry_n)
return arg1
