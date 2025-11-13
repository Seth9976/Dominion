// 函数: _ZNSt6__ndk16vectorINS_10shared_ptrIKN5Botan16X509_CertificateEEENS_9allocatorIS5_EEEC2ERKS8_
// 地址: 0xcf7d28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t* entry_x1
int64_t x9 = *entry_x1
int64_t x8 = entry_x1[1]
uint64_t x21 = x8 - x9

if (x8 == x9)
    return 

std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >
     const& x19_1 = arg1

if ((x21 & 0xffffffff80000000) != 0)
    int64_t* x0_2 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x22 = *x19_1
    
    if (x22 != 0)
        void* x23_1 = *(x19_1 + 8)
        void* x0_3 = x22
        
        if (x23_1 != x22)
            do
                int64_t* x21_1 = *(x23_1 - 8)
                x23_1 -= 0x10
                
                if (x21_1 != 0)
                    int64_t x9_2
                    int32_t i
                    
                    do
                        x9_2 = __ldaxr(&x21_1[1])
                        i = __stlxr(x9_2 - 1, &x21_1[1])
                    while (i != 0)
                    
                    if (x9_2 == 0)
                        (*(*x21_1 + 0x10))(x21_1)
                        std::__ndk1::__shared_weak_count::__release_weak()
            while (x23_1 != x22)
            
            x0_3 = *x19_1
        
        *(x19_1 + 8) = x22
        operator delete(x0_3)
    
    sub_1101e04(x0_2)
    noreturn

arg1 = operator new(x21)
*x19_1 = arg1
*(x19_1 + 8) = arg1
*(x19_1 + 0x10) = arg1 + (x21 s>> 4 << 4)
int64_t* x8_3 = *entry_x1
int64_t x9_1 = entry_x1[1]

if (x8_3 != x9_1)
    do
        *arg1 = *x8_3
        int64_t x10_2 = x8_3[1]
        *(arg1 + 8) = x10_2
        
        if (x10_2 != 0)
            int32_t i_1
            
            do
                i_1 = __stxr(__ldxr(x10_2 + 8) + 1, x10_2 + 8)
            while (i_1 != 0)
        
        x8_3 = &x8_3[2]
        arg1 += 0x10
    while (x8_3 != x9_1)

*(x19_1 + 8) = arg1
