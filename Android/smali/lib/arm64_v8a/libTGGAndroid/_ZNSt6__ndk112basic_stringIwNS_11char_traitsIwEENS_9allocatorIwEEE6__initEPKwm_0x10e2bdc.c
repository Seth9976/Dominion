// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initEPKwm
// 地址: 0x10e2bdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t entry_n

if (entry_n u>= 0x3ffffffffffffff0)
    sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_length_error())
    noreturn

void* s1

if (entry_n u>= 5)
    int64_t x22_1 = (entry_n + 4) & 0xfffffffffffffffc
    void* s1_1 = operator new(x22_1 << 2)
    *(arg1 + 8) = entry_n
    *(arg1 + 0x10) = s1_1
    *arg1 = x22_1 | 1
    s1 = s1_1
    wmemcpy(s1, arg2, entry_n)
else
    *arg1 = (entry_n.d << 1).b
    s1 = &arg1[1]
    
    if (entry_n != 0)
        wmemcpy(s1, arg2, entry_n)

*(s1 + (entry_n << 2)) = 0
