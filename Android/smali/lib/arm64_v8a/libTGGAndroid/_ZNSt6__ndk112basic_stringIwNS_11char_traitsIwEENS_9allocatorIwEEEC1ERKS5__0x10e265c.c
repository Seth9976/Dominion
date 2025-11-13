// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC1ERKS5_
// 地址: 0x10e265c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1

if ((zx.d(*entry_x1) & 1) == 0)
    int128_t v0 = *entry_x1
    *(arg1 + 0x10) = *(entry_x1 + 0x10)
    *arg1 = v0
    return 

int64_t x21_1 = *(entry_x1 + 8)
wchar_t* s2 = *(entry_x1 + 0x10)
void* __offset(
    std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >, 
    0x4) s1

if (x21_1 u> 4)
    if (x21_1 u>= 0x3ffffffffffffff0)
        sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_length_error())
        noreturn
    
    int64_t x22_1 = (x21_1 + 4) & 0xfffffffffffffffc
    void* s1_1 = operator new(x22_1 << 2)
    *(arg1 + 8) = x21_1
    *(arg1 + 0x10) = s1_1
    *arg1 = x22_1 | 1
    s1 = s1_1
else
    *arg1 = (x21_1.d << 1).b
    s1 = arg1 + 4

wmemcpy(s1, s2, x21_1 + 1)
