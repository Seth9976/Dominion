// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6appendEmw
// 地址: 0x10e3738
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 0)
    uint64_t x8_1 = zx.q(*arg1)
    size_t n = arg2
    uint64_t x1
    uint64_t x22_1
    
    if ((x8_1.d & 1) != 0)
        x8_1 = *arg1
        x22_1 = *(arg1 + 8)
        x1 = (x8_1 & 0xfffffffffffffffe) - 1
    else
        x22_1 = x8_1 u>> 1
        x1 = 4
    
    if (x1 - x22_1 u< n)
        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
            arg1, x1, x22_1 + n - x1, x22_1, x22_1, 0)
        x8_1 = zx.q(*arg1)
    
    int64_t x23_1
    
    if ((x8_1.d & 1) != 0)
        x23_1 = *(arg1 + 0x10)
    else
        x23_1 = arg1 + 4
    
    wchar_t entry_c
    wmemset(x23_1 + (x22_1 << 2), entry_c, n)
    int64_t x8_3 = x22_1 + n
    
    if ((zx.d(*arg1) & 1) != 0)
        *(arg1 + 8) = x8_3
    else
        *arg1 = (x8_3.d << 1).b
    
    *(x23_1 + (x8_3 << 2)) = 0

return arg1
