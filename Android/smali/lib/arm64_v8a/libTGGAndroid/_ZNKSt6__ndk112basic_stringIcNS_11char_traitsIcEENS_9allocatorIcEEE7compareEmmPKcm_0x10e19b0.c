// 函数: _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmPKcm
// 地址: 0x10e19b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t entry_x4
int64_t x8_3
uint64_t x20
uint64_t x0_1
uint64_t x1_1
char* x2_1

if ((x8.d & 1) != 0)
    if (entry_x4 == -1)
        x0_1, x1_1, x2_1 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x0_1, x1_1, x2_1) __tailcall
    
    int64_t x8_4 = *(arg1 + 8)
    uint64_t x9_1 = x8_4 - arg2
    
    if (x8_4 u< arg2)
        x0_1, x1_1, x2_1 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x0_1, x1_1, x2_1) __tailcall
    
    x8_3 = *(arg1 + 0x10)
    
    x20 = x9_1 u< arg3 ? x9_1 : arg3
else
    if (entry_x4 == -1)
        x0_1, x1_1, x2_1 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x0_1, x1_1, x2_1) __tailcall
    
    uint64_t x8_1 = x8 u>> 1
    uint64_t x8_2 = x8_1 - arg2
    
    if (x8_1 u< arg2)
        x0_1, x1_1, x2_1 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x0_1, x1_1, x2_1) __tailcall
    
    x20 = x8_2 u< arg3 ? x8_2 : arg3
    
    x8_3 = arg1 + 1
uint64_t x2

x2 = x20 u> entry_x4 ? entry_x4 : x20

if (x2 != 0)
    uint64_t result = memcmp(x8_3 + arg2, arg4, x2)
    
    if (result.d != 0)
        return result

if (x20 u>= entry_x4)
    return zx.q(x20 u> entry_x4 ? 1 : 0)

return 0xffffffff
