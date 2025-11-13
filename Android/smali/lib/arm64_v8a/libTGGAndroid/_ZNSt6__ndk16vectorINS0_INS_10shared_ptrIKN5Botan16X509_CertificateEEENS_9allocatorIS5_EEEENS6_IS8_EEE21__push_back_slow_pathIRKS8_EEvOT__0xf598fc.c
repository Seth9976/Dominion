// 函数: _ZNSt6__ndk16vectorINS0_INS_10shared_ptrIKN5Botan16X509_CertificateEEENS_9allocatorIS5_EEEENS6_IS8_EEE21__push_back_slow_pathIRKS8_EEvOT_
// 地址: 0xf598fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >
     const& x9 = *arg1
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
    label_f59994:
        std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >
            * x21_1 = x22 + x21 * 0x18
        int64_t result = std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >::vector(
            x21_1)
        std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >
             const& __saved_x1 = *arg1
        int64_t* x10_4 = arg1[1]
        int64_t x8_2 = x22 + x23_1 * 0x18
        void* __offset(
            std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >, 
            0x18) x9_4 = x21_1 + 0x18
        
        if (x10_4 == __saved_x1)
            *arg1 = x21_1
            arg1[1] = x9_4
            arg1[2] = x8_2
        else
            do
                x21_1 -= 0x18
                __builtin_memset(x21_1, 0, 0x18)
                x10_4 = &x10_4[-3]
                *x21_1 = *x10_4
                *(x21_1 + 8) = x10_4[1]
                *(x21_1 + 0x10) = x10_4[2]
                __builtin_memset(x10_4, 0, 0x18)
            while (__saved_x1 != x10_4)
            
            __saved_x1 = *arg1
            int64_t* x22_1 = arg1[1]
            *arg1 = x21_1
            arg1[1] = x9_4
            arg1[2] = x8_2
            
            if (x22_1 != __saved_x1)
                int64_t* x21_2 = x22_1
                
                do
                    x21_2 = &x21_2[-3]
                    void* x23_2 = *x21_2
                    
                    if (x23_2 != 0)
                        void* x24_1 = x22_1[-2]
                        void* x0_3
                        
                        if (x24_1 != x23_2)
                            do
                                int64_t* x20_1 = *(x24_1 - 8)
                                x24_1 -= 0x10
                                
                                if (x20_1 != 0)
                                    int64_t x9_5
                                    int32_t i
                                    
                                    do
                                        x9_5 = __ldaxr(&x20_1[1])
                                        i = __stlxr(x9_5 - 1, &x20_1[1])
                                    while (i != 0)
                                    
                                    if (x9_5 == 0)
                                        (*(*x20_1 + 0x10))(x20_1)
                                        std::__ndk1::__shared_weak_count::__release_weak()
                            while (x24_1 != x23_2)
                            
                            x0_3 = *x21_2
                        else
                            x0_3 = x23_2
                        
                        x22_1[-2] = x23_2
                        result = operator delete(x0_3)
                    
                    x22_1 = x21_2
                while (x21_2 != __saved_x1)
        
        if (__saved_x1 == 0)
            return result
        
        return operator delete(__saved_x1) __tailcall
    
    if (x23_1 u<= 0xaaaaaaaaaaaaaaa)
        x22 = operator new(x23_1 * 0x18)
        goto label_f59994

sub_ef2a0c()
noreturn
