// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7replaceEmmmw
// 地址: 0x10e2e74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
size_t n = arg4
uint64_t x21
uint64_t x24
int64_t x25
uint64_t x1
wchar_t entry_c
uint64_t x8_1

if ((x8.d & 1) != 0)
    x21 = *(arg1 + 8)
    x8_1 = x21 - arg2
    
    if (x21 u< arg2)
        sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_out_of_range())
        noreturn
    
    x24 = x8_1 u< arg3 ? x8_1 : arg3
    
    x1 = (*arg1 & 0xfffffffffffffffe) - 1
    
    if (x24 - x21 + x1 u< n)
        goto label_10e2f24
    
    x25 = *(arg1 + 0x10)
    
    if (x24 == n || x8_1 == x24)
        goto label_10e2f64
    
label_10e2f54:
    int64_t x8_3 = x25 + (arg2 << 2)
    wmemmove(x8_3 + (n << 2), x8_3 + (x24 << 2), x8_1 - x24)
label_10e2f64:
    
    if (n != 0)
        wmemset(x25 + (arg2 << 2), entry_c, n)
else
    x21 = x8 u>> 1
    x8_1 = x21 - arg2
    
    if (x21 u< arg2)
        sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_out_of_range())
        noreturn
    
    x24 = x8_1 u< arg3 ? x8_1 : arg3
    
    if (x24 - x21 + 4 u>= n)
        x25 = arg1 + 4
        
        if (x24 != n && x8_1 != x24)
            goto label_10e2f54
        
        goto label_10e2f64
    
    x1 = 4
label_10e2f24:
    std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
        arg1, x1, x21 + n - (x1 + x24), x21, arg2, x24)
    x25 = *(arg1 + 0x10)
    wmemset(x25 + (arg2 << 2), entry_c, n)
uint64_t x8_5 = n - x24 + x21

if ((zx.d(*arg1) & 1) != 0)
    *(arg1 + 8) = x8_5
else
    *arg1 = (x8_5.d << 1).b

*(x25 + (x8_5 << 2)) = 0
return arg1
