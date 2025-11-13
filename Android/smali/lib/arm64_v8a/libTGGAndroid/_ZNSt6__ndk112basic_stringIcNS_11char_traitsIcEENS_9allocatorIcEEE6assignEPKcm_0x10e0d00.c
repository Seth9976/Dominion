// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm
// 地址: 0x10e0d00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t x1
char* entry_x2
uint64_t x3_1
char* x21_1

if ((x8.d & 1) != 0)
    x1 = (*arg1 & 0xfffffffffffffffe) - 1
    
    if (x1 u>= entry_x2)
        x21_1 = *(arg1 + 0x10)
        
        if (entry_x2 == 0)
            goto label_10e0d94
        
    label_10e0d90:
        memmove(x21_1, arg2, entry_x2)
    label_10e0d94:
        *(x21_1 + entry_x2) = 0
        
        if ((zx.d(*arg1) & 1) != 0)
            *(arg1 + 8) = entry_x2
        else
            *arg1 = (entry_x2.d << 1).b
    else
        x3_1 = *(arg1 + 8)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(
            arg1, x1, entry_x2 - x1, x3_1, 0, x3_1, entry_x2)
else
    if (entry_x2 u<= 0x16)
        x21_1 = &arg1[1]
        
        if (entry_x2 != 0)
            goto label_10e0d90
        
        goto label_10e0d94
    
    x3_1 = x8 u>> 1
    x1 = 0x16
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(
        arg1, x1, entry_x2 - x1, x3_1, 0, x3_1, entry_x2)
return arg1
