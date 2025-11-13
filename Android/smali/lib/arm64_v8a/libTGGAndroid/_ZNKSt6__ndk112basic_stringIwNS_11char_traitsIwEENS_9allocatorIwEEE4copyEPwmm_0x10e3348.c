// 函数: _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE4copyEPwmm
// 地址: 0x10e3348
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t n
int64_t entry_x3

if ((x8.d & 1) != 0)
    int64_t x8_3 = *(arg1 + 8)
    uint64_t n_2 = x8_3 - entry_x3
    
    if (x8_3 u< entry_x3)
        sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_out_of_range())
        noreturn
    
    n = n_2 u< arg3 ? n_2 : arg3
    
    if (n != 0)
        wmemcpy(arg2, *(arg1 + 0x10) + (entry_x3 << 2), n)
else
    uint64_t x8_1 = x8 u>> 1
    uint64_t n_1 = x8_1 - entry_x3
    
    if (x8_1 u< entry_x3)
        sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_out_of_range())
        noreturn
    
    n = n_1 u< arg3 ? n_1 : arg3
    
    if (n != 0)
        wmemcpy(arg2, &arg1[1 + entry_x3], n)
return n
