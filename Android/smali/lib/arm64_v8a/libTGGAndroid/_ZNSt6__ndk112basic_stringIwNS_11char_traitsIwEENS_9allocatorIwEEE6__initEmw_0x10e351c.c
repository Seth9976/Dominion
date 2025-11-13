// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initEmw
// 地址: 0x10e351c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 u>= 0x3ffffffffffffff0)
    sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_length_error())
    noreturn

size_t n = arg2
wchar_t* s
wchar_t entry_c

if (arg2 u>= 5)
    int64_t x22_1 = (n + 4) & 0xfffffffffffffffc
    wchar_t* s_1 = operator new(x22_1 << 2)
    *(arg1 + 8) = n
    *(arg1 + 0x10) = s_1
    *arg1 = x22_1 | 1
    s = s_1
    wmemset(s, entry_c, n)
else
    *arg1 = (n.d << 1).b
    s = arg1 + 4
    
    if (n != 0)
        wmemset(s, entry_c, n)
s[n] = 0
