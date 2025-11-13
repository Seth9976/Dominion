// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC1ERKS5_mmRKS4_
// 地址: 0x10e33cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg2)
uint64_t x8_1
int64_t x22_1

if ((x8.d & 1) != 0)
    x8_1 = *(arg2 + 8)
    
    if (x8_1 u< arg3)
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
    else
        x22_1 = *(arg2 + 0x10)
    label_10e3418:
        uint64_t n_1 = x8_1 - arg3
        size_t n
        
        n = n_1 u< arg4 ? n_1 : arg4
        
        if (n u< 0x3ffffffffffffff0)
            void* __offset(
                std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >, 
                0x4) s1
            
            if (n u>= 5)
                int64_t x23_1 = (n + 4) & 0xfffffffffffffffc
                void* s1_1 = operator new(x23_1 << 2)
                *(arg1 + 8) = n
                *(arg1 + 0x10) = s1_1
                *arg1 = x23_1 | 1
                s1 = s1_1
                wmemcpy(s1, x22_1 + (arg3 << 2), n)
            else
                *arg1 = (n.d << 1).b
                s1 = arg1 + 4
                
                if (n != 0)
                    wmemcpy(s1, x22_1 + (arg3 << 2), n)
            
            *(s1 + (n << 2)) = 0
            return 
else
    x8_1 = x8 u>> 1
    
    if (x8_1 u>= arg3)
        x22_1 = arg2 + 4
        goto label_10e3418
    
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_length_error())
noreturn
