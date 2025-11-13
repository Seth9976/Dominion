// 函数: _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7compareEPKw
// 地址: 0x10e3a70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

wchar_t* entry_x1
size_t n_1 = wcslen(entry_x1)
uint64_t x8 = zx.q(*arg1)
void* s1
uint64_t n_2

if ((x8.d & 1) != 0)
    if (n_1 == -1)
        sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_out_of_range())
        noreturn
    
    n_2 = *(arg1 + 8)
    s1 = *(arg1 + 0x10)
else
    if (n_1 == -1)
        sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_out_of_range())
        noreturn
    
    n_2 = x8 u>> 1
    s1 = &arg1[1]

size_t n

n = n_2 u> n_1 ? n_1 : n_2

if (n != 0)
    uint64_t result = wmemcmp(s1, entry_x1, n)
    
    if (result.d != 0)
        return result

if (n_2 u>= n_1)
    return zx.q(n_2 u> n_1 ? 1 : 0)

return 0xffffffff
