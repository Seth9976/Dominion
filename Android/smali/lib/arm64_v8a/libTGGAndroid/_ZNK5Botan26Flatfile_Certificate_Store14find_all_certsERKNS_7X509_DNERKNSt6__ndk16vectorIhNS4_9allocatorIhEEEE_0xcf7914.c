// 函数: _ZNK5Botan26Flatfile_Certificate_Store14find_all_certsERKNS_7X509_DNERKNSt6__ndk16vectorIhNS4_9allocatorIhEEEE
// 地址: 0xcf7914
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::shared_ptr<Botan::X509_Certificate const>* var_60
__builtin_memset(&var_60, 0, 0x18)
void* x23 = *(arg1 + 0x28)

if (x23 != 0)
    void* __offset(Botan::X509_DN, 0x28) x24_1 = arg1 + 0x28
    
    while (true)
        void* x8
        
        if ((Botan::operator<(arg2, x23 + 0x20) & 1) != 0)
            x8 = *x23
            
            if (x8 == 0)
                break
        else
            if ((Botan::operator<(x23 + 0x20, arg2) & 1) == 0)
                if (*x24_1 == 0)
                    break
                
                void* var_78
                void* result
                int128_t v0
                result, v0 = std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >::vector(
                    &var_78)
                void* x22_2 = var_78
                void* var_70
                int64_t var_50
                
                if (x22_2 != var_70)
                    do
                        result = *x22_2
                        int64_t* x8_2 = *(x22_2 + 8)
                        void* result_1 = result
                        
                        if (x8_2 != 0)
                            int32_t i
                            
                            do
                                i = __stxr(__ldxr(&x8_2[1]) + 1, &x8_2[1])
                            while (i != 0)
                        
                        int64_t* entry_x2
                        
                        if (*entry_x2 == entry_x2[1])
                        label_cf7a3c:
                            void* var_58_1
                            void** x8_6 = var_58_1
                            
                            if (x8_6 == var_50)
                                result, v0 = std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >::__push_back_slow_path<std::__ndk1::shared_ptr<Botan::X509_Certificate const> const&>(
                                    &var_60)
                            else
                                *x8_6 = result_1
                                x8_6[1] = x8_2
                                
                                if (x8_2 != 0)
                                    int32_t i_1
                                    
                                    do
                                        i_1 = __stxr(__ldxr(&x8_2[1]) + 1, &x8_2[1])
                                    while (i_1 != 0)
                                
                                var_58_1 = &x8_6[2]
                        else
                            result, v0 = Botan::X509_Certificate::data()
                            char* x9_4 = *entry_x2
                            int64_t x8_5 = entry_x2[1]
                            char* x10_2 = *(result + 0x280)
                            
                            if (x8_5 - x9_4 == *(result + 0x288) - x10_2)
                                if (x9_4 == x8_5)
                                    goto label_cf7a3c
                                
                                while (zx.d(*x9_4) == zx.d(*x10_2))
                                    x9_4 = &x9_4[1]
                                    x10_2 = &x10_2[1]
                                    
                                    if (x8_5 == x9_4)
                                        goto label_cf7a3c
                        
                        if (x8_2 != 0)
                            int64_t x9_9
                            int32_t i_2
                            
                            do
                                x9_9 = __ldaxr(&x8_2[1])
                                i_2 = __stlxr(x9_9 - 1, &x8_2[1])
                            while (i_2 != 0)
                            
                            if (x9_9 == 0)
                                (*(*x8_2 + 0x10))(x8_2)
                                result, v0 = std::__ndk1::__shared_weak_count::__release_weak()
                        
                        x22_2 += 0x10
                    while (x22_2 != var_70)
                    
                    x22_2 = var_78
                    
                    if (x22_2 != 0)
                        goto label_cf7acc
                else if (x22_2 != 0)
                label_cf7acc:
                    void* x21_3 = var_70
                    void* x0_9
                    
                    if (x21_3 != x22_2)
                        do
                            int64_t* x20_2 = *(x21_3 - 8)
                            x21_3 -= 0x10
                            
                            if (x20_2 != 0)
                                int64_t x9_10
                                int32_t i_3
                                
                                do
                                    x9_10 = __ldaxr(&x20_2[1])
                                    i_3 = __stlxr(x9_10 - 1, &x20_2[1])
                                while (i_3 != 0)
                                
                                if (x9_10 == 0)
                                    (*(*x20_2 + 0x10))(x20_2)
                                    std::__ndk1::__shared_weak_count::__release_weak()
                        while (x21_3 != x22_2)
                        
                        x0_9 = var_78
                    else
                        x0_9 = x22_2
                    
                    void* var_70_1 = x22_2
                    result, v0 = operator delete(x0_9)
                
                int128_t* entry_x8
                *entry_x8 = var_60.o
                entry_x8[1].q = var_50
                return result
            
            x23 += 8
            x8 = *x23
            
            if (x8 == 0)
                break
        
        x24_1 = x23
        x23 = x8

sub_f28374()
noreturn
