// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6appendEPKwm
// 地址: 0x10e3220
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t x1
uint64_t x21

if ((x8.d & 1) != 0)
    x21 = *(arg1 + 8)
    x1 = (*arg1 & 0xfffffffffffffffe) - 1
else
    x21 = x8 u>> 1
    x1 = 4

wchar_t* entry_n

if (x1 - x21 u< entry_n)
    std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by_and_replace(
        arg1, x1, x21 + entry_n - x1, x21, x21, 0, entry_n)
else if (entry_n != 0)
    void* x22_1
    
    if ((x8.d & 1) != 0)
        x22_1 = *(arg1 + 0x10)
    else
        x22_1 = &arg1[1]
    
    wmemcpy(x22_1 + (x21 << 2), arg2, entry_n)
    void* x8_2 = x21 + entry_n
    
    if ((zx.d(*arg1) & 1) != 0)
        *(arg1 + 8) = x8_2
    else
        *arg1 = (x8_2.d << 1).b
    
    *(x22_1 + (x8_2 << 2)) = 0

return arg1
