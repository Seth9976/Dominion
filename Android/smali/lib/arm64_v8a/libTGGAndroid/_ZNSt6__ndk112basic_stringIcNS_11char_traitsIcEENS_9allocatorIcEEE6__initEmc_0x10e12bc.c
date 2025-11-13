// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc
// 地址: 0x10e12bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 u>= -0x10)
    uint64_t x0_4
    char* x1_1
    x0_4, x1_1 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        x0_4, x1_1) __tailcall

size_t x19 = arg2
char* x20_1
int32_t entry_x2

if (arg2 u>= 0x17)
    uint64_t x22_1 = (x19 + 0x10) & 0xfffffffffffffff0
    char* x0_1 = operator new(x22_1)
    *(arg1 + 8) = x19
    *(arg1 + 0x10) = x0_1
    *arg1 = x22_1 | 1
    x20_1 = x0_1
    memset(x20_1, entry_x2, x19)
else
    *arg1 = (x19.d << 1).b
    x20_1 = arg1 + 1
    
    if (x19 != 0)
        memset(x20_1, entry_x2, x19)
x20_1[x19] = 0
