// 函数: _ZNSt6__ndk16vectorINS_4pairINS_10shared_ptrIKN5Botan16X509_CertificateEEEbEENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_
// 地址: 0xf59ae8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *arg1
int64_t x21 = ((*(arg1 + 8) - x9) s>> 3) * -0x5555555555555555

if (x21 + 1 u> 0xaaaaaaaaaaaaaaa)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_3 = ((*(arg1 + 0x10) - x9) s>> 3) * -0x5555555555555555
    int64_t x10_2 = x9_3 << 1
    int64_t x10_3
    
    if (x10_2 u< x21 + 1)
        x10_3 = x21 + 1
    else
        x10_3 = x10_2
    
    int64_t x22_1
    
    x22_1 = x9_3 u< 0x555555555555555 ? x10_3 : 0xaaaaaaaaaaaaaaa
    
    int64_t result
    
    if (x22_1 == 0)
        result = 0
    label_f59b74:
        int64_t* entry_x1
        int64_t x9_4 = entry_x1[1]
        int64_t* x8_2 = result + x21 * 0x18
        *x8_2 = *entry_x1
        x8_2[1] = x9_4
        char x9_5 = entry_x1[2].b
        *entry_x1 = 0
        entry_x1[1] = 0
        x8_2[2].b = x9_5
        void* x20_2 = *arg1
        void* x11_3 = *(arg1 + 8)
        int64_t x9_6 = result + x22_1 * 0x18
        
        if (x11_3 == x20_2)
            *arg1 = x8_2
            *(arg1 + 8) = &x8_2[3]
            *(arg1 + 0x10) = x9_6
            
            if (x20_2 == 0)
                return result
        else
            int64_t i = 0
            
            do
                void* x14_1 = x11_3 + i
                void* x16_1 = x8_2 + i
                i -= 0x18
                *(x16_1 - 0x18) = *(x14_1 - 0x18)
                *(x16_1 - 0x10) = *(x14_1 - 0x10)
                char x15_3 = *(x14_1 - 8)
                *(x14_1 - 0x18) = 0
                *(x14_1 - 0x10) = 0
                *(x16_1 - 8) = x15_3
            while (x20_2 - x11_3 != i)
            
            x20_2 = *arg1
            void* x21_1 = *(arg1 + 8)
            *arg1 = x8_2 + i
            *(arg1 + 8) = &x8_2[3]
            *(arg1 + 0x10) = x9_6
            
            if (x21_1 != x20_2)
                do
                    int64_t* x19_1 = *(x21_1 - 0x10)
                    x21_1 -= 0x18
                    
                    if (x19_1 != 0)
                        int64_t x9_8
                        int32_t i_1
                        
                        do
                            x9_8 = __ldaxr(&x19_1[1])
                            i_1 = __stlxr(x9_8 - 1, &x19_1[1])
                        while (i_1 != 0)
                        
                        if (x9_8 == 0)
                            (*(*x19_1 + 0x10))(x19_1)
                            result = std::__ndk1::__shared_weak_count::__release_weak()
                while (x21_1 != x20_2)
            
            if (x20_2 == 0)
                return result
        
        return operator delete(x20_2) __tailcall
    
    if (x22_1 u<= 0xaaaaaaaaaaaaaaa)
        result = operator new(x22_1 * 0x18)
        goto label_f59b74

sub_ef2a0c()
noreturn
