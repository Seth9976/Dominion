// 函数: _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4copyEPcmm
// 地址: 0x10e10f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t result
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* x0_2
uint64_t x1_1
uint64_t x2_1
int64_t entry_x3
std::__ndk1::allocator<char>* x3

if ((x8.d & 1) != 0)
    int64_t x8_3 = *(arg1 + 8)
    uint64_t result_2 = x8_3 - entry_x3
    
    if (x8_3 u< entry_x3)
        x0_2, x1_1, x2_1, x3 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            x0_2, x1_1, x2_1, x3) __tailcall
    
    result = result_2 u< arg3 ? result_2 : arg3
    
    if (result != 0)
        memcpy(arg2, *(arg1 + 0x10) + entry_x3, result)
else
    uint64_t x8_1 = x8 u>> 1
    uint64_t result_1 = x8_1 - entry_x3
    
    if (x8_1 u< entry_x3)
        x0_2, x1_1, x2_1, x3 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            x0_2, x1_1, x2_1, x3) __tailcall
    
    result = result_1 u< arg3 ? result_1 : arg3
    
    if (result != 0)
        memcpy(arg2, &arg1[1 + entry_x3], result)
return result
