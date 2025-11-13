// 函数: _ZNSt6__ndk16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRKS6_EEEvDpOT_
// 地址: 0xf4afb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const
    & x9 = *arg1
int64_t x21 = ((arg1[1] - x9) s>> 3) * -0x5555555555555555

if (x21 + 1 u> 0xaaaaaaaaaaaaaaa)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_3 = ((arg1[2] - x9) s>> 3) * -0x5555555555555555
    int64_t x10_2 = x9_3 << 1
    int64_t x10_3
    
    if (x10_2 u< x21 + 1)
        x10_3 = x21 + 1
    else
        x10_3 = x10_2
    
    int64_t x23_1
    
    x23_1 = x9_3 u< 0x555555555555555 ? x10_3 : 0xaaaaaaaaaaaaaaa
    
    int64_t x22
    
    if (x23_1 == 0)
        x22 = 0
    label_f4b048:
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x21_1 = x22 + x21 * 0x18
        int64_t result
        int128_t v0
        result, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            x21_1)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
             const& __saved_x1 = *arg1
        void* x10_4 = arg1[1]
        int64_t x8_2 = x22 + x23_1 * 0x18
        void* __offset(
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
            0x18) x9_4 = x21_1 + 0x18
        
        if (x10_4 == __saved_x1)
            *arg1 = x21_1
            arg1[1] = x9_4
            arg1[2] = x8_2
        else
            do
                v0 = *(x10_4 - 0x18)
                *(x21_1 - 8) = *(x10_4 - 8)
                *(x21_1 - 0x18) = v0
                __builtin_memset(x10_4 - 0x18, 0, 0x18)
                x10_4 -= 0x18
                x21_1 -= 0x18
            while (__saved_x1 != x10_4)
            
            __saved_x1 = *arg1
            char* x10_5 = arg1[1]
            *arg1 = x21_1
            arg1[1] = x9_4
            arg1[2] = x8_2
            
            if (x10_5 != __saved_x1)
                char* x19_1 = x10_5
                
                do
                    x19_1 = &x19_1[-0x18]
                    
                    if ((zx.d(*x19_1) & 1) != 0)
                        result = operator delete(*(x10_5 - 8))
                    
                    x10_5 = x19_1
                while (__saved_x1 != x19_1)
        
        if (__saved_x1 == 0)
            return result
        
        return operator delete(__saved_x1) __tailcall
    
    if (x23_1 u<= 0xaaaaaaaaaaaaaaa)
        x22 = operator new(x23_1 * 0x18)
        goto label_f4b048

sub_ef2a0c()
noreturn
