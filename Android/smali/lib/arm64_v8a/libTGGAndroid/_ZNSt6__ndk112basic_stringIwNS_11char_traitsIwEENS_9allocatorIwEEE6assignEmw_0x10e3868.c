// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6assignEmw
// 地址: 0x10e3868
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
size_t n = arg2
uint64_t x1
uint64_t x3_1

if ((x8.d & 1) != 0)
    x8 = *arg1
    x1 = (x8 & 0xfffffffffffffffe) - 1
    
    if (x1 u< n)
        x3_1 = *(arg1 + 8)
        std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
            arg1, x1, n - x1, x3_1, 0, x3_1)
        x8 = zx.q(*arg1)
else if (n u> 4)
    x3_1 = x8 u>> 1
    x1 = 4
    std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(
        arg1, x1, n - x1, x3_1, 0, x3_1)
    x8 = zx.q(*arg1)
wchar_t* s
wchar_t entry_c

if ((x8.d & 1) != 0)
    s = *(arg1 + 0x10)
    
    if (n != 0)
        wmemset(s, entry_c, n)
else
    s = arg1 + 4
    
    if (n != 0)
        wmemset(s, entry_c, n)
s[n] = 0

if ((zx.d(*arg1) & 1) != 0)
    *(arg1 + 8) = n
else
    *arg1 = (n.d << 1).b

return arg1
