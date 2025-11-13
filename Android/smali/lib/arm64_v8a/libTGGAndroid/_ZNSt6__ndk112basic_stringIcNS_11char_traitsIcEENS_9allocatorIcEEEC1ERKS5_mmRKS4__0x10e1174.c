// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_mmRKS4_
// 地址: 0x10e1174
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg2)
uint64_t x8_1
int64_t x23_1

if ((x8.d & 1) != 0)
    x8_1 = *(arg2 + 8)
    
    if (x8_1 u< arg3)
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
    else
        x23_1 = *(arg2 + 0x10)
    label_10e11c0:
        uint64_t x8_2 = x8_1 - arg3
        size_t x21_1
        
        x21_1 = x8_2 u< arg4 ? x8_2 : arg4
        
        if (x21_1 u< -0x10)
            void* __offset(
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                0x1) x19_1
            
            if (x21_1 u>= 0x17)
                uint64_t x22_1 = (x21_1 + 0x10) & 0xfffffffffffffff0
                void* x0_1 = operator new(x22_1)
                *(arg1 + 8) = x21_1
                *(arg1 + 0x10) = x0_1
                *arg1 = x22_1 | 1
                x19_1 = x0_1
                memcpy(x19_1, x23_1 + arg3, x21_1)
            else
                *arg1 = (x21_1.d << 1).b
                x19_1 = arg1 + 1
                
                if (x21_1 != 0)
                    memcpy(x19_1, x23_1 + arg3, x21_1)
            
            *(x19_1 + x21_1) = 0
            return 
else
    x8_1 = x8 u>> 1
    
    if (x8_1 u>= arg3)
        x23_1 = arg2 + 1
        goto label_10e11c0
    
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
char x0_5
uint64_t x1_1
x0_5, x1_1 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
    x0_5, x1_1) __tailcall
