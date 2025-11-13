// 函数: _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmPKc
// 地址: 0x10e1a4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x3
size_t x0_1 = strlen(entry_x3)
uint64_t x8 = zx.q(*arg1)
int64_t x8_3
char const* x23_1

if ((x8.d & 1) != 0)
    if (x0_1 == -1)
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::at(
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range()) __tailcall
    
    int64_t x8_4 = *(arg1 + 8)
    char* x9_1 = x8_4 - arg2
    
    if (x8_4 u< arg2)
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::at(
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range()) __tailcall
    
    x8_3 = *(arg1 + 0x10)
    
    x23_1 = x9_1 u< arg3 ? x9_1 : arg3
else
    if (x0_1 == -1)
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::at(
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range()) __tailcall
    
    uint64_t x8_1 = x8 u>> 1
    uint64_t x8_2 = x8_1 - arg2
    
    if (x8_1 u< arg2)
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::at(
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range()) __tailcall
    
    x23_1 = x8_2 u< arg3 ? x8_2 : arg3
    
    x8_3 = arg1 + 1

size_t x2

x2 = x23_1 u> x0_1 ? x0_1 : x23_1

if (x2 != 0)
    uint64_t result = memcmp(x8_3 + arg2, entry_x3, x2)
    
    if (result.d != 0)
        return result

if (x23_1 u>= x0_1)
    return zx.q(x23_1 u> x0_1 ? 1 : 0)

return 0xffffffff
