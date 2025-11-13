// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initEPKwmm
// 地址: 0x10e25c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

wchar_t const* x20 = arg1
int64_t entry_x3

if (entry_x3 u>= 0x3ffffffffffffff0)
    sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_length_error())
    noreturn

void* s1

if (entry_x3 u> 4)
    int64_t x22_1 = (entry_x3 + 4) & 0xfffffffffffffffc
    arg1 = operator new(x22_1 << 2)
    *(x20 + 8) = arg3
    *(x20 + 0x10) = arg1
    *x20 = x22_1 | 1
    s1 = arg1
    
    if (arg3 != 0)
        wmemcpy(s1, arg2, arg3)
else
    *x20 = (arg3.d << 1).b
    s1 = &x20[1]
    
    if (arg3 != 0)
        wmemcpy(s1, arg2, arg3)

*(s1 + (arg3 << 2)) = 0
