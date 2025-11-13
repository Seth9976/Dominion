// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmmc
// 地址: 0x10e0bb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
size_t x20 = arg4
uint64_t x21
uint64_t x24
int64_t x25
char* x0_5
uint64_t x1
uint64_t x1_3
int32_t entry_x4
uint64_t x8_1

if ((x8.d & 1) != 0)
    x21 = *(arg1 + 8)
    x8_1 = x21 - arg2
    
    if (x21 u< arg2)
        x0_5, x1_3 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            x0_5, x1_3) __tailcall
    
    x24 = x8_1 u< arg3 ? x8_1 : arg3
    
    x1 = (*arg1 & 0xfffffffffffffffe) - 1
    
    if (x24 - x21 + x1 u< x20)
        goto label_10e0c60
    
    x25 = *(arg1 + 0x10)
    
    if (x24 == x20 || x8_1 == x24)
        goto label_10e0ca0
    
label_10e0c90:
    int64_t x8_3 = x25 + arg2
    memmove(x8_3 + x20, x8_3 + x24, x8_1 - x24)
label_10e0ca0:
    
    if (x20 != 0)
        memset(x25 + arg2, entry_x4, x20)
else
    x21 = x8 u>> 1
    x8_1 = x21 - arg2
    
    if (x21 u< arg2)
        x0_5, x1_3 = std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
        return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            x0_5, x1_3) __tailcall
    
    x24 = x8_1 u< arg3 ? x8_1 : arg3
    
    if (x24 - x21 + 0x16 u>= x20)
        x25 = arg1 + 1
        
        if (x24 != x20 && x8_1 != x24)
            goto label_10e0c90
        
        goto label_10e0ca0
    
    x1 = 0x16
label_10e0c60:
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by(
        arg1, x1, x21 + x20 - (x1 + x24), x21, arg2, x24)
    x25 = *(arg1 + 0x10)
    memset(x25 + arg2, entry_x4, x20)
uint64_t x8_5 = x20 - x24 + x21

if ((zx.d(*arg1) & 1) != 0)
    *(arg1 + 8) = x8_5
else
    *arg1 = (x8_5.d << 1).b

*(x25 + x8_5) = 0
return arg1
