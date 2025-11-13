// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmRKS5_mm
// 地址: 0x10e1f98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg4)
int64_t x9
int64_t x0_1
char x1_1

if ((x8.d & 1) != 0)
    if (*(arg4 + 8) u< arg5)
        x0_1, x1_1 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            x0_1, x1_1) __tailcall
    
    x9 = *(arg4 + 0x10)
else
    if (x8 u>> 1 u< arg5)
        x0_1, x1_1 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            x0_1, x1_1) __tailcall
    
    x9 = arg4 + 1
return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::replace(
    arg1, arg2, arg3, x9 + arg5) __tailcall
