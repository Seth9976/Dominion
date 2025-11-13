// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6assignERKS5_mm
// 地址: 0x10e32f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg2)
int64_t x9
wchar_t* x0_1
uint64_t x1_2
uint64_t x2_2

if ((x8.d & 1) != 0)
    if (*(arg2 + 8) u< arg3)
        x0_1, x1_2, x2_2 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::copy(
            x0_1, x1_2, x2_2) __tailcall
    
    x9 = *(arg2 + 0x10)
else
    if (x8 u>> 1 u< arg3)
        x0_1, x1_2, x2_2 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::copy(
            x0_1, x1_2, x2_2) __tailcall
    
    x9 = arg2 + 4
return std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::assign(
    arg1, x9 + (arg3 << 2)) __tailcall
