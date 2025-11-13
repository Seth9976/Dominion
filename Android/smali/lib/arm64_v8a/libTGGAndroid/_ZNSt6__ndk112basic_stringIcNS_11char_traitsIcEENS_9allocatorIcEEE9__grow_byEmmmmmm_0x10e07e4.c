// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
// 地址: 0x10e07e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (-0x11 - arg2 u< arg3)
    return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(
        std::__ndk1::__basic_string_common<true>::__throw_length_error()) __tailcall

void* x24

if ((zx.d(*arg1) & 1) != 0)
    x24 = *(arg1 + 0x10)
else
    x24 = arg1 + 1

uint64_t x26

if (arg2 u> 0x7fffffffffffffe6)
    x26 = -0x11
else
    uint64_t x8_2 = arg3 + arg2
    uint64_t x9_1 = arg2 << 1
    uint64_t x8_3
    
    x8_3 = x8_2 u< x9_1 ? x9_1 : x8_2
    
    if (x8_3 u< 0x17)
        x26 = 0x17
    else
        x26 = (x8_3 + 0x10) & 0xfffffffffffffff0

int64_t result = operator new(x26)
int64_t result_1 = result

if (arg5 != 0)
    result = memcpy(result_1, x24, arg5)

uint64_t x8_5 = arg4 - arg6
int64_t entry_x6

if (x8_5 != arg5)
    result = memcpy(result_1 + arg5 + entry_x6, x24 + arg5 + arg6, x8_5 - arg5)

if (arg2 != 0x16)
    result = operator delete(x24)

*(arg1 + 0x10) = result_1
*arg1 = x26 | 1
return result
