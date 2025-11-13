// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9__grow_byEmmmmmm
// 地址: 0x10e2a70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x27 = 0x3fffffffffffffef

if (0x3fffffffffffffef - arg2 u< arg3)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    wchar_t* s2
    
    if ((zx.d(*arg1) & 1) != 0)
        s2 = *(arg1 + 0x10)
    else
        s2 = arg1 + 4
    
    if (arg2 u<= 0x1fffffffffffffe6)
        uint64_t x8_2 = arg3 + arg2
        uint64_t x9_1 = arg2 << 1
        uint64_t x8_3
        
        x8_3 = x8_2 u< x9_1 ? x9_1 : x8_2
        
        if (x8_3 u< 5)
            x27 = 5
        else
            x27 = (x8_3 + 4) & 0xfffffffffffffffc
    
    if (arg2 u> 0x1fffffffffffffe6 || x27 u>> 0x3e == 0)
        wchar_t* result = operator new(x27 << 2)
        wchar_t* s1 = result
        
        if (arg5 != 0)
            result = wmemcpy(s1, s2, arg5)
        
        uint64_t x8_6 = arg4 - arg6
        int64_t entry_x6
        
        if (x8_6 != arg5)
            result = wmemcpy(&s1[arg5 + entry_x6], &s2[arg5 + arg6], x8_6 - arg5)
        
        if (arg2 != 4)
            result = operator delete(s2)
        
        *(arg1 + 0x10) = s1
        *arg1 = x27 | 1
        return result

sub_ef2a0c()
noreturn
