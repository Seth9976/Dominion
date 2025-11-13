// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
// 地址: 0x10e1b58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1
size_t x0_1 = strlen(entry_x1)
uint64_t x8 = zx.q(*arg1)
uint64_t x1
uint64_t x3_1
void* x22_1

if ((x8.d & 1) != 0)
    x1 = (*arg1 & 0xfffffffffffffffe) - 1
    
    if (x1 u>= x0_1)
        x22_1 = *(arg1 + 0x10)
        
        if (x0_1 == 0)
            goto label_10e1bf8
        
    label_10e1bf4:
        memmove(x22_1, entry_x1, x0_1)
    label_10e1bf8:
        *(x22_1 + x0_1) = 0
        
        if ((zx.d(*arg1) & 1) != 0)
            *(arg1 + 8) = x0_1
        else
            *arg1 = (x0_1.d << 1).b
    else
        x3_1 = *(arg1 + 8)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(
            arg1, x1, x0_1 - x1, x3_1, 0, x3_1, x0_1)
else
    if (x0_1 u<= 0x16)
        x22_1 = &arg1[1]
        
        if (x0_1 != 0)
            goto label_10e1bf4
        
        goto label_10e1bf8
    
    x3_1 = x8 u>> 1
    x1 = 0x16
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(
        arg1, x1, x0_1 - x1, x3_1, 0, x3_1, x0_1)
return arg1
