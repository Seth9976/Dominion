// 函数: _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7compareEmmPKw
// 地址: 0x10e3b9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

wchar_t* entry_x3
size_t n_1 = wcslen(entry_x3)
uint64_t x8 = zx.q(*arg1)
int64_t x8_2
wchar_t const* n_2

if ((x8.d & 1) != 0)
    if (n_1 == -1)
        return std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::at(
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range()) __tailcall
    
    int64_t x8_3 = *(arg1 + 8)
    wchar_t* n_4 = x8_3 - arg2
    
    if (x8_3 u< arg2)
        return std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::at(
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range()) __tailcall
    
    x8_2 = *(arg1 + 0x10)
    
    n_2 = n_4 u< arg3 ? n_4 : arg3
else
    if (n_1 == -1)
        return std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::at(
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range()) __tailcall
    
    uint64_t x8_1 = x8 u>> 1
    uint64_t n_3 = x8_1 - arg2
    
    if (x8_1 u< arg2)
        return std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::at(
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range()) __tailcall
    
    n_2 = n_3 u< arg3 ? n_3 : arg3
    
    x8_2 = arg1 + 4

size_t n

n = n_2 u> n_1 ? n_1 : n_2

if (n != 0)
    uint64_t result = wmemcmp(x8_2 + (arg2 << 2), entry_x3, n)
    
    if (result.d != 0)
        return result

if (n_2 u>= n_1)
    return zx.q(n_2 u> n_1 ? 1 : 0)

return 0xffffffff
