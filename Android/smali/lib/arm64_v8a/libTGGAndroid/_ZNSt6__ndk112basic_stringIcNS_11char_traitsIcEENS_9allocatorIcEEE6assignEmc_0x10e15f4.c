// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEmc
// 地址: 0x10e15f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t* result = arg1
int64_t x20 = arg2
uint64_t x0_7
uint64_t x1_1
void* x22_1
uint64_t x23_1
int64_t x24_1
int64_t x24_2

if ((x8.d & 1) != 0)
    x8 = *result
    int64_t x9_1 = x8 & 0xfffffffffffffffe
    x24_1 = x9_1 - 1
    
    if (x24_1 u< x20)
        if (-0x10 - x9_1 u< x20 - x24_1)
            x0_7, x1_1 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
            return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::erase(
                x0_7, x1_1) __tailcall
        
        x22_1 = result[2]
        
        if (x24_1 u< 0x7fffffffffffffe7)
            goto label_10e1678
        
        x23_1 = -0x11
        x24_2 = operator new(-0x11)
    label_10e16c4:
        operator delete(x22_1)
    label_10e16c8:
        x8 = x23_1 | 1
        result[2] = x24_2
        *result = x8
else if (x20 u> 0x16)
    if (x20 != -0x11 && x20 - 0x16 u>= -0x27)
        x0_7, x1_1 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::erase(
            x0_7, x1_1) __tailcall
    
    x22_1 = result + 1
    x24_1 = 0x16
label_10e1678:
    int64_t x8_2 = x24_1 << 1
    int64_t x8_3
    
    x8_3 = x8_2 u> x20 ? x8_2 : x20
    
    if (x8_3 u< 0x17)
        x23_1 = 0x17
    else
        x23_1 = (x8_3 + 0x10) & 0xfffffffffffffff0
    
    x24_2 = operator new(x23_1)
    
    if (x24_1 != 0x16)
        goto label_10e16c4
    
    goto label_10e16c8
char* x22_2
int32_t entry_x2

if ((x8.d & 1) != 0)
    x22_2 = result[2]
    
    if (x20 != 0)
        memset(x22_2, entry_x2, x20)
else
    x22_2 = result + 1
    
    if (x20 != 0)
        memset(x22_2, entry_x2, x20)
x22_2[x20] = 0

if ((zx.d(*result) & 1) != 0)
    result[1] = x20
else
    *result = (x20.d << 1).b

return result
