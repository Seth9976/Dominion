// 函数: _ZNSt6__ndk16vectorINS_4pairImNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS5_IS8_EEE21__push_back_slow_pathIRKS8_EEvOT_
// 地址: 0xf26204
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::pair<uint64_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
     const& x8 = *arg1
int64_t x22 = (arg1[1] - x8) s>> 5

if ((x22 + 1) u>> 0x3b != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    void* x8_1 = arg1[2] - x8
    int64_t x10_2 = x8_1 s>> 4
    int64_t x9_3
    
    if (x10_2 u< x22 + 1)
        x9_3 = x22 + 1
    else
        x9_3 = x10_2
    
    int64_t x23_1
    
    if (0x3ffffffffffffff u> x8_1 s>> 5)
        x23_1 = x9_3
    else
        x23_1 = 0x7ffffffffffffff
    
    int64_t x21
    
    if (x23_1 == 0)
        x21 = 0
    label_f26278:
        std::__ndk1::pair<uint64_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
            * x22_1 = x21 + (x22 << 5)
        int64_t* entry_x1
        *x22_1 = *entry_x1
        int64_t result
        int128_t v0
        result, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            x22_1 + 8)
        std::__ndk1::pair<uint64_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
             const& x20_3 = *arg1
        int64_t* x10_3 = arg1[1]
        int64_t x8_4 = x21 + (x23_1 << 5)
        void* __offset(
            std::__ndk1::pair<uint64_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, 
            0x20) x9_4 = x22_1 + 0x20
        
        if (x10_3 == x20_3)
            *arg1 = x22_1
            arg1[1] = x9_4
            arg1[2] = x8_4
            
            if (x20_3 == 0)
                return result
        else
            do
                x10_3 = &x10_3[-4]
                x22_1 -= 0x20
                *x22_1 = *x10_3
                v0 = *(x10_3 + 8)
                *(x22_1 + 0x18) = x10_3[3]
                *(x22_1 + 8) = v0
                __builtin_memset(&x10_3[1], 0, 0x18)
            while (x20_3 != x10_3)
            
            x20_3 = *arg1
            void* x10_4 = arg1[1]
            *arg1 = x22_1
            arg1[1] = x9_4
            arg1[2] = x8_4
            
            if (x10_4 != x20_3)
                bool cond:2_1
                
                do
                    if ((zx.d(*(x10_4 - 0x18)) & 1) != 0)
                        result = operator delete(*(x10_4 - 8))
                    
                    cond:2_1 = x20_3 == x10_4 - 0x20
                    x10_4 -= 0x20
                while (not(cond:2_1))
            
            if (x20_3 == 0)
                return result
        
        return operator delete(x20_3) __tailcall
    
    if (x23_1 u>> 0x3b == 0)
        x21 = operator new(x23_1 << 5)
        goto label_f26278

sub_ef2a0c()
noreturn
