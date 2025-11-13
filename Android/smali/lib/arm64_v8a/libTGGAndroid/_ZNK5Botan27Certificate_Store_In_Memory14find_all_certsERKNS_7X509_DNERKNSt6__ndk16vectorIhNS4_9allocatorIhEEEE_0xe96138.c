// 函数: _ZNK5Botan27Certificate_Store_In_Memory14find_all_certsERKNS_7X509_DNERKNSt6__ndk16vectorIhNS4_9allocatorIhEEEE
// 地址: 0xe96138
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t* i = *(arg1 + 8)

for (int64_t x26 = *(arg1 + 0x10); i != x26; i = &i[2])
    int64_t* entry_x2
    
    if (entry_x2[1] == *entry_x2)
    label_e96268:
        *i
        
        if ((Botan::operator==(Botan::X509_Certificate::data() + 0x90, arg2).d & 1) != 0)
            int64_t* x8_5 = entry_x8[1]
            
            if (x8_5 == entry_x8[2])
                std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >::__push_back_slow_path<std::__ndk1::shared_ptr<Botan::X509_Certificate const> const&>(
                    entry_x8)
            else
                *x8_5 = *i
                int64_t x9_6 = i[1]
                x8_5[1] = x9_6
                
                if (x9_6 != 0)
                    int32_t j
                    
                    do
                        j = __stxr(__ldxr(x9_6 + 8) + 1, x9_6 + 8)
                    while (j != 0)
                
                entry_x8[1] = &x8_5[2]
    else
        *i
        arg1 = Botan::X509_Certificate::data()
        int64_t var_60_1 = 0
        int64_t var_58_1 = 0
        int64_t x8_1 = *(arg1 + 0x288)
        int64_t x9_2 = *(arg1 + 0x280)
        Botan::X509_DN const& x24_1 = arg1
        uint64_t x25_1 = x8_1 - x9_2
        Botan::X509_DN const& x23_1
        
        if (x8_1 == x9_2)
            x23_1 = nullptr
        label_e9625c:
            
            if (x23_1 != 0)
                operator delete(x23_1)
            
            goto label_e96268
        
        if ((x25_1 & 0xffffffff80000000) != 0)
            int64_t* x0_9 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            void* x22_2 = *entry_x8
            
            if (x22_2 == 0)
                sub_1101e04(x0_9)
                noreturn
            
            void* x23_2 = entry_x8[1]
            void* x0_11 = x22_2
            
            if (x23_2 != x22_2)
                do
                    int64_t* x21 = *(x23_2 - 8)
                    x23_2 -= 0x10
                    
                    if (x21 != 0)
                        int64_t x9_8
                        int32_t j_1
                        
                        do
                            x9_8 = __ldaxr(&x21[1])
                            j_1 = __stlxr(x9_8 - 1, &x21[1])
                        while (j_1 != 0)
                        
                        if (x9_8 == 0)
                            (*(*x21 + 0x10))(x21)
                            std::__ndk1::__shared_weak_count::__release_weak()
                while (x23_2 != x22_2)
                
                x0_11 = *entry_x8
            
            entry_x8[1] = x22_2
            operator delete(x0_11)
            sub_1101e04(x0_9)
            noreturn
        
        arg1 = operator new(x25_1)
        Botan::X509_DN const& var_68_1 = arg1
        void* var_58_2 = arg1 + x25_1
        int64_t x1_1 = *(x24_1 + 0x280)
        x23_1 = arg1
        size_t x24_2 = *(x24_1 + 0x288) - x1_1
        Botan::X509_DN const& x8_4 = arg1
        
        if (x24_2 s>= 1)
            memcpy(x23_1, x1_1, x24_2)
            x8_4 = x23_1 + x24_2
        
        Botan::X509_DN const& var_60_2 = x8_4
        
        if (x8_4 == x23_1)
            goto label_e9625c
        
        char* x9_3 = *entry_x2
        
        if (x8_4 - x23_1 == entry_x2[1] - x9_3)
            if (x23_1 == x8_4)
                goto label_e9625c
            
            Botan::X509_DN const& x10_2 = x23_1
            
            while (zx.d(*x10_2) == zx.d(*x9_3))
                x10_2 += 1
                x9_3 = &x9_3[1]
                
                if (x8_4 == x10_2)
                    goto label_e9625c
            
            goto label_e962c0
        
    label_e962c0:
        
        if (x23_1 != 0)
            operator delete(x23_1)
