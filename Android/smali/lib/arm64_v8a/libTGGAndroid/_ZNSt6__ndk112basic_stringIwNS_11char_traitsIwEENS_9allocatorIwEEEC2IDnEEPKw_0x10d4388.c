// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2IDnEEPKw
// 地址: 0x10d4388
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

wchar_t* entry_x1
size_t result = wcslen(entry_x1)

if (result u>= 0x3ffffffffffffff0)
    sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_length_error())
    noreturn

size_t n = result
void* s1

if (result u>= 5)
    int64_t x22_1 = (n + 4) & 0xfffffffffffffffc
    void* s1_1 = operator new(x22_1 << 2)
    *(arg1 + 8) = n
    *(arg1 + 0x10) = s1_1
    *arg1 = x22_1 | 1
    s1 = s1_1
    result = wmemcpy(s1, entry_x1, n)
else
    *arg1 = (n.d << 1).b
    s1 = &arg1[1]
    
    if (n != 0)
        result = wmemcpy(s1, entry_x1, n)

*(s1 + (n << 2)) = 0
return result
