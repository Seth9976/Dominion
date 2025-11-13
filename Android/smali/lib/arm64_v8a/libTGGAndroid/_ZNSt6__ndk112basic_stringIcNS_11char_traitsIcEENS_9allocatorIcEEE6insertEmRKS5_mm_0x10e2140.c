// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmRKS5_mm
// 地址: 0x10e2140
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg3)
int64_t x9
uint64_t x0_1
uint64_t x1_1
wchar_t* x2_2
uint64_t x3_2

if ((x8.d & 1) != 0)
    if (*(arg3 + 8) u< arg4)
        x0_1, x1_1, x2_2, x3_2 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::replace(
            x0_1, x1_1, x2_2, x3_2) __tailcall
    
    x9 = *(arg3 + 0x10)
else
    if (x8 u>> 1 u< arg4)
        x0_1, x1_1, x2_2, x3_2 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::replace(
            x0_1, x1_1, x2_2, x3_2) __tailcall
    
    x9 = arg3 + 1
return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    arg1, arg2, x9 + arg4) __tailcall
