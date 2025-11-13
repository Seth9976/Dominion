// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE21__grow_by_and_replaceEmmmmmmPKw
// 地址: 0x10e2390
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (0x3fffffffffffffee - arg2 u< arg3)
    sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_length_error())
    noreturn

wchar_t* s2

if ((zx.d(*arg1) & 1) != 0)
    s2 = *(arg1 + 0x10)
else
    s2 = arg1 + 4

int64_t x28

if (arg2 u> 0x1fffffffffffffe6)
    x28 = 0x3fffffffffffffef
else
    uint64_t x8_1 = arg3 + arg2
    uint64_t x9_2 = arg2 << 1
    uint64_t x8_2
    
    x8_2 = x8_1 u< x9_2 ? x9_2 : x8_1
    
    if (x8_2 u< 5)
        x28 = 5
    else
        x28 = (x8_2 + 4) & 0xfffffffffffffffc
    
    if (x28 u>> 0x3e != 0)
        sub_ef2a0c()
        noreturn

wchar_t* result = operator new(x28 << 2)
wchar_t* s1 = result

if (arg5 != 0)
    result = wmemcpy(s1, s2, arg5)

wchar_t* entry_s2

if (arg7 != 0)
    result = wmemcpy(&s1[arg5], entry_s2, arg7)
uint64_t x25_1 = arg4 - arg6

if (x25_1 != arg5)
    result = wmemcpy(&s1[arg5 + arg7], &s2[arg5 + arg6], x25_1 - arg5)

if (arg2 != 4)
    result = operator delete(s2)

void* x9_5 = x25_1 + arg7
*arg1 = x28 | 1
*(arg1 + 8) = x9_5
*(arg1 + 0x10) = s1
s1[x9_5] = 0
return result
