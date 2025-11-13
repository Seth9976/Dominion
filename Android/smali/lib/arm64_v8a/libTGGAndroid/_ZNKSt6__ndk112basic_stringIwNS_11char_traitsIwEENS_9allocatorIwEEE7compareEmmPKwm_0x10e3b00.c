// 函数: _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7compareEmmPKwm
// 地址: 0x10e3b00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t entry_n
int64_t x8_2
uint64_t n_1
uint64_t x0_1
uint64_t x1_1
wchar_t* x2

if ((x8.d & 1) != 0)
    if (entry_n == -1)
        x0_1, x1_1, x2 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::compare(
            x0_1, x1_1, x2) __tailcall
    
    int64_t x8_3 = *(arg1 + 8)
    uint64_t n_3 = x8_3 - arg2
    
    if (x8_3 u< arg2)
        x0_1, x1_1, x2 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::compare(
            x0_1, x1_1, x2) __tailcall
    
    x8_2 = *(arg1 + 0x10)
    
    n_1 = n_3 u< arg3 ? n_3 : arg3
else
    if (entry_n == -1)
        x0_1, x1_1, x2 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::compare(
            x0_1, x1_1, x2) __tailcall
    
    uint64_t x8_1 = x8 u>> 1
    uint64_t n_2 = x8_1 - arg2
    
    if (x8_1 u< arg2)
        x0_1, x1_1, x2 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::compare(
            x0_1, x1_1, x2) __tailcall
    
    n_1 = n_2 u< arg3 ? n_2 : arg3
    
    x8_2 = arg1 + 4
uint64_t n

n = n_1 u> entry_n ? entry_n : n_1

if (n != 0)
    uint64_t result = wmemcmp(x8_2 + (arg2 << 2), arg4, n)
    
    if (result.d != 0)
        return result

if (n_1 u>= entry_n)
    return zx.q(n_1 u> entry_n ? 1 : 0)

return 0xffffffff
