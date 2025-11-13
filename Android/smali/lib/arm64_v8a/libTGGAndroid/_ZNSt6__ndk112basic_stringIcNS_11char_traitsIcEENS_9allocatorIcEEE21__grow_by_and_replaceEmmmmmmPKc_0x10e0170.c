// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
// 地址: 0x10e0170
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (-0x12 - arg2 u< arg3)
    char* x0_6
    uint64_t x1_3
    uint64_t x2_3
    x0_6, x1_3, x2_3 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::rfind(
        x0_6, x1_3, x2_3) __tailcall

void* x24

if ((zx.d(*arg1) & 1) != 0)
    x24 = *(arg1 + 0x10)
else
    x24 = arg1 + 1

uint64_t x27

if (arg2 u> 0x7fffffffffffffe6)
    x27 = -0x11
else
    uint64_t x8_2 = arg3 + arg2
    uint64_t x9_1 = arg2 << 1
    uint64_t x8_3
    
    x8_3 = x8_2 u< x9_1 ? x9_1 : x8_2
    
    if (x8_3 u< 0x17)
        x27 = 0x17
    else
        x27 = (x8_3 + 0x10) & 0xfffffffffffffff0

char* result = operator new(x27)
char* result_1 = result

if (arg5 != 0)
    result = memcpy(result_1, x24, arg5)

int64_t entry_x7

if (arg7 != 0)
    result = memcpy(&result_1[arg5], entry_x7, arg7)
uint64_t x25_1 = arg4 - arg6

if (x25_1 != arg5)
    result = memcpy(&result_1[arg5] + arg7, x24 + arg5 + arg6, x25_1 - arg5)

if (arg2 != 0x16)
    result = operator delete(x24)

void* x9_4 = &arg7[x25_1]
*arg1 = x27 | 1
*(arg1 + 8) = x9_4
*(arg1 + 0x10) = result_1
*(result_1 + x9_4) = 0
return result
