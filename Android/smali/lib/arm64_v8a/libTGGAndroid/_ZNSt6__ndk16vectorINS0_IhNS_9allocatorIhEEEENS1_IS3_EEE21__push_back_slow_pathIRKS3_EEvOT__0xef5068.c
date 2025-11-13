// 函数: _ZNSt6__ndk16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE21__push_back_slow_pathIRKS3_EEvOT_
// 地址: 0xef5068
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > const& x25 = *arg1
std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > const& x19 = arg1[1]
int64_t x26 = ((x19 - x25) s>> 3) * -0x5555555555555555

if (x26 + 1 u> 0xaaaaaaaaaaaaaaa)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_1 = ((arg1[2] - x25) s>> 3) * -0x5555555555555555
    int64_t x11_4 = x9_1 << 1
    int64_t x10_2
    
    if (x11_4 u< x26 + 1)
        x10_2 = x26 + 1
    else
        x10_2 = x11_4
    
    int64_t x27_1
    
    x27_1 = x9_1 u< 0x555555555555555 ? x10_2 : 0xaaaaaaaaaaaaaaa
    
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > const&&& x22
    
    if (x27_1 == 0)
        x22 = nullptr
    label_ef5108:
        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x21 = x22 + x26 * 0x18
        __builtin_memset(x21, 0, 0x18)
        int64_t* entry_x1
        int64_t x24 = *entry_x1
        int64_t x8_2 = entry_x1[1]
        uint64_t x23_2 = x8_2 - x24
        
        if (x8_2 != x24)
            if ((x23_2 & 0xffffffff80000000) != 0)
                int64_t* x0_8 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                void* x8_5 = *x21
                
                if (x8_5 != 0)
                    *(x22 + x26 * 0x18 + 8) = x8_5
                    operator delete(x8_5)
                
                operator delete(x22)
                sub_1101e04(x0_8)
                noreturn
            
            int64_t x0_2 = operator new(x23_2)
            int64_t fp_1 = x0_2 + x23_2
            void* x26_1 = x22 + x26 * 0x18
            *(x26_1 + 8) = x0_2
            *(x26_1 + 0x10) = fp_1
            *x21 = x0_2
            memcpy(x0_2, x24, x23_2)
            *(x26_1 + 8) = fp_1
        
        int64_t x8_3 = x22 + x27_1 * 0x18
        void* __offset(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, 0x18) x9_2 =
            x21 + 0x18
        
        if (x19 == x25)
            *arg1 = x21
            arg1[1] = x9_2
            arg1[2] = x8_3
        else
            do
                x21 -= 0x18
                __builtin_memset(x21, 0, 0x18)
                x19 -= 0x18
                *x21 = *x19
                *(x21 + 8) = *(x19 + 8)
                *(x21 + 0x10) = *(x19 + 0x10)
                __builtin_memset(x19, 0, 0x18)
            while (x25 != x19)
            
            x19 = *arg1
            std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >*** x10_6 = arg1[1]
            *arg1 = x21
            arg1[1] = x9_2
            arg1[2] = x8_3
            
            if (x10_6 != x19)
                std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >*** x20_1 = x10_6
                
                do
                    x20_1 = &x20_1[-3]
                    arg1 = *x20_1
                    
                    if (arg1 != 0)
                        x10_6[-2] = arg1
                        operator delete(arg1)
                    
                    x10_6 = x20_1
                while (x19 != x20_1)
        
        if (x19 == 0)
            return 
        
        return operator delete(x19) __tailcall
    
    if (x27_1 u<= 0xaaaaaaaaaaaaaaa)
        x22 = operator new(x27_1 * 0x18)
        goto label_ef5108

sub_ef2a0c()
noreturn
