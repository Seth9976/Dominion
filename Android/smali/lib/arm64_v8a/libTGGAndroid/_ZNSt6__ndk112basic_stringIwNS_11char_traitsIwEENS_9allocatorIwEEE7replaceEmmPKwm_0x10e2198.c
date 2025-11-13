// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7replaceEmmPKwm
// 地址: 0x10e2198
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
wchar_t* entry_n
wchar_t* n = entry_n
uint64_t s2 = arg4
uint64_t x24 = arg2
uint64_t x1
uint64_t n_3
uint64_t x21
wchar_t const* n_1
int64_t x27_1

if ((x8.d & 1) != 0)
    x21 = *(arg1 + 8)
    n_3 = x21 - x24
    
    if (x21 u>= x24)
        n_1 = n_3 u< arg3 ? n_3 : arg3
        
        x1 = (*arg1 & 0xfffffffffffffffe) - 1
        
        if (n_1 - x21 + x1 u< n)
            std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by_and_replace(
                arg1, x1, x21 + n - (x1 + n_1), x21, x24, n_1, n)
            return arg1
        
        x27_1 = *(arg1 + 0x10)
        
        if (n_1 != n)
        label_10e2264:
            size_t n_2 = n_3 - n_1
            
            if (n_3 == n_1)
                goto label_10e2318
            
            wchar_t* s1 = x27_1 + (x24 << 2)
            
            if (n_1 u<= n)
                if (s1 u< s2 && x27_1 + (x21 << 2) u> s2)
                    if (&s1[n_1] u<= s2)
                        s2 += (n - n_1) << 2
                    else
                        if (n_1 != 0)
                            wmemmove(s1, s2, n_1)
                        
                        x24 += n_1
                        s2 += n << 2
                        n -= n_1
                        n_1 = nullptr
                
                int64_t x8_5 = x27_1 + (x24 << 2)
                wmemmove(x8_5 + (n << 2), x8_5 + (n_1 << 2), n_2)
                goto label_10e2318
            
            if (n != 0)
                wmemmove(s1, s2, n)
            
            wmemmove(&s1[n], &s1[n_1], n_2)
        else
        label_10e22ac:
            n_1 = n
        label_10e2318:
            
            if (n != 0)
                wmemmove(x27_1 + (x24 << 2), s2, n)
        
        int64_t x8_7 = n - n_1 + x21
        
        if ((zx.d(*arg1) & 1) != 0)
            *(arg1 + 8) = x8_7
        else
            *arg1 = (x8_7.d << 1).b
        
        *(x27_1 + (x8_7 << 2)) = 0
        return arg1
else
    x21 = x8 u>> 1
    n_3 = x21 - x24
    
    if (x21 u>= x24)
        n_1 = n_3 u< arg3 ? n_3 : arg3
        
        if (n_1 - x21 + 4 u< n)
            x1 = 4
            std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by_and_replace(
                arg1, x1, x21 + n - (x1 + n_1), x21, x24, n_1, n)
            return arg1
        
        x27_1 = arg1 + 4
        
        if (n_1 == n)
            goto label_10e22ac
        
        goto label_10e2264
sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_out_of_range())
noreturn
