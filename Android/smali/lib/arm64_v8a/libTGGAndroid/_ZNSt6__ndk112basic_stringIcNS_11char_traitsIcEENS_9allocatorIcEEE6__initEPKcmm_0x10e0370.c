// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcmm
// 地址: 0x10e0370
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x20 = arg1
int64_t entry_x3

if (entry_x3 u>= -0x10)
    return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        std::__ndk1::__basic_string_common<true>::__throw_length_error()) __tailcall

void* x20_1

if (entry_x3 u> 0x16)
    uint64_t x22_1 = (entry_x3 + 0x10) & 0xfffffffffffffff0
    arg1 = operator new(x22_1)
    *(x20 + 8) = arg3
    *(x20 + 0x10) = arg1
    *x20 = x22_1 | 1
    x20_1 = arg1
    
    if (arg3 != 0)
        memcpy(x20_1, arg2, arg3)
else
    *x20 = (arg3.d << 1).b
    x20_1 = &x20[1]
    
    if (arg3 != 0)
        memcpy(x20_1, arg2, arg3)

*(x20_1 + arg3) = 0
