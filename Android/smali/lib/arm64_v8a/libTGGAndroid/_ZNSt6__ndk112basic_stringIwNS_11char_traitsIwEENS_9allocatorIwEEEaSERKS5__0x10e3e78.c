// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEaSERKS5_
// 地址: 0x10e3e78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1

if (arg1 != entry_x1)
    uint64_t x8_1 = zx.q(*arg1)
    uint64_t x9_1 = zx.q(*entry_x1)
    uint64_t x3_1
    size_t n
    
    if ((x8_1.d & 1) != 0)
        int32_t temp0_1 = x9_1.d & 1
        void* s2
        
        if (temp0_1 == 0)
            s2 = &entry_x1[4]
        else
            s2 = *(entry_x1 + 0x10)
        
        if (temp0_1 == 0)
            n = x9_1 u>> 1
        else
            n = *(entry_x1 + 8)
        
        int64_t x8_4 = *arg1 & 0xfffffffffffffffe
        
        if (x8_4 u<= n)
            x3_1 = *(arg1 + 8)
            std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by_and_replace(
                arg1, x8_4 - 1, n - x8_4 + 1, x3_1, 0, x3_1, n)
        else
            wchar_t* s1 = *(arg1 + 0x10)
            *(arg1 + 8) = n
            
            if (n != 0)
                wmemcpy(s1, s2, n)
            
            s1[n] = 0
    else if ((x9_1.d & 1) != 0)
        n = *(entry_x1 + 8)
        wchar_t* s2_1 = *(entry_x1 + 0x10)
        
        if (n u> 4)
            x3_1 = x8_1 u>> 1
            std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by_and_replace(
                arg1, 4, n - 4, x3_1, 0, x3_1, n)
        else
            *arg1 = (n.d << 1).b
            
            if (n != 0)
                wmemcpy(arg1 + 4, s2_1, n)
            
            *(arg1 + (n << 2) + 4) = 0
    else
        int128_t v0 = *entry_x1
        *(arg1 + 0x10) = *(entry_x1 + 0x10)
        *arg1 = v0

return arg1
