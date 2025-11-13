// 函数: _ZN5Botan19XMSS_WOTS_PublicKey5chainERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEmmRNS_12XMSS_AddressERKS5_RNS_9XMSS_HashE
// 地址: 0xed5218
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* entry_x6
uint64_t x27 = *(entry_x6 + 0x28)
uint64_t x22 = arg3
void* var_78
__builtin_memset(&var_78, 0, 0x18)
void* var_68_1
void* x26_1
void* var_70_1
void* x27_1

if (x27 == 0)
    x26_1 = nullptr
    x27_1 = arg4 + x22
    
    if (x27_1 u> x22)
    label_ed52c0:
        
        while (true)
            if (x22 u< *(arg1 + 0x48))
                void* x8_2 = *arg5
                
                if (zx.d(*(x8_2 + 0xf)) != 0)
                    Botan::assertion_failure("get_type() == Type::OTS_Hash_Address", 
                        "set_hash_address() requires XMSS_Address::Type::OTS_Hash_Address.", 
                        "set_hash_address", 
                        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1c0a)
                    break
                
                *(x8_2 + 0x18) = (x22 u>> 0x18).b
                *(*arg5 + 0x19) = (x22 u>> 0x10).b
                *(*arg5 + 0x1a) = (x22 u>> 8).b
                *(*arg5 + 0x1b) = (x22.d).b
                *(*arg5 + 0x1f) = 1
                int64_t* x0_2 = *entry_x6
                int64_t x1 = *(entry_x6 + 0x10)
                (*(*x0_2 + 0x18))(x0_2, x1, *(entry_x6 + 0x18) - x1)
                int64_t* x0_3 = *entry_x6
                char var_54 = 3
                (*(*x0_3 + 0x18))(x0_3, &var_54, 1)
                int64_t* x0_4 = *entry_x6
                int64_t x1_2 = *arg6
                (*(*x0_4 + 0x18))(x0_4, x1_2, *(arg6 + 8) - x1_2)
                int64_t* x0_5 = *entry_x6
                int64_t x1_3 = *arg5
                (*(*x0_5 + 0x18))(x0_5, x1_3, *(arg5 + 8) - x1_3)
                int64_t* x25_1 = *entry_x6
                int64_t x0_7 = (**x25_1)(x25_1)
                void* x1_4 = var_78
                void* x8_18 = var_70_1 - x1_4
                
                if (x0_7 u> x8_18)
                    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                        &var_78)
                    x1_4 = var_78
                else if (x0_7 u< x8_18)
                    var_70_1 = x1_4 + x0_7
                
                int128_t v0_1
                int128_t v1_1
                int128_t v2_1
                int128_t v3_1
                int128_t v4_1
                int128_t v5_1
                int128_t v6_1
                int128_t v7_1
                v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = (*(*x25_1 + 0x20))(x25_1, x1_4)
                void* x10_1 = *arg2
                int64_t x8_23 = *(arg2 + 8)
                void* x9_8 = var_78
                void* x12_1 = x8_23 - x10_1
                void* x11_1 = x12_1 & 0xffffffffffffffe0
                
                if (x11_1 != 0)
                    int64_t x13_1 = 0
                    
                    if (x11_1 == 0x20 || x10_1 + 0x18 + x11_1 - 0x20 u< x10_1 + 0x18
                            || x10_1 + 0x10 + x11_1 - 0x20 u< x10_1 + 0x10
                            || x10_1 + 8 + x11_1 - 0x20 u< x10_1 + 8
                            || x10_1 + x11_1 - 0x20 u< x10_1)
                        goto label_ed5484
                    
                    if (x10_1 u>= x9_8 + x11_1 || x9_8 u>= x10_1 + x11_1)
                        int64_t i_11 = (((x11_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                        x13_1 = i_11 << 5
                        int64_t i_8 = i_11
                        void* x17_2 = x9_8
                        void* x0_11 = x10_1
                        int64_t i
                        
                        do
                            v0_1.q = *x0_11
                            v1_1.q = *(x0_11 + 8)
                            v2_1.q = *(x0_11 + 0x10)
                            v3_1.q = *(x0_11 + 0x18)
                            v0_1:8.q = *(x0_11 + 0x20)
                            v1_1:8.q = *(x0_11 + 0x28)
                            v2_1:8.q = *(x0_11 + 0x30)
                            v3_1:8.q = *(x0_11 + 0x38)
                            v4_1.q = *x17_2
                            v5_1.q = *(x17_2 + 8)
                            v6_1.q = *(x17_2 + 0x10)
                            v7_1.q = *(x17_2 + 0x18)
                            v4_1:8.q = *(x17_2 + 0x20)
                            v5_1:8.q = *(x17_2 + 0x28)
                            v6_1:8.q = *(x17_2 + 0x30)
                            v7_1:8.q = *(x17_2 + 0x38)
                            x17_2 += 0x40
                            i = i_8
                            i_8 -= 2
                            int128_t v16_1 = v4_1 ^ v0_1
                            int128_t v17_1 = v5_1 ^ v1_1
                            int128_t v18_1 = v6_1 ^ v2_1
                            int128_t v19_1 = v7_1 ^ v3_1
                            *x0_11 = v16_1.q
                            *(x0_11 + 8) = v17_1.q
                            *(x0_11 + 0x10) = v18_1.q
                            *(x0_11 + 0x18) = v19_1.q
                            *(x0_11 + 0x20) = v16_1:8.q
                            *(x0_11 + 0x28) = v17_1:8.q
                            *(x0_11 + 0x30) = v18_1:8.q
                            *(x0_11 + 0x38) = v19_1:8.q
                            x0_11 += 0x40
                        while (i != 2)
                        
                        if (((x11_1 - 0x20) u>> 5) + 1 != i_11)
                            goto label_ed5484
                    else
                        x13_1 = 0
                    label_ed5484:
                        void* i_7 = x13_1 - x11_1
                        void* x13_5 = x9_8 + x13_1 + 0x10
                        void* x15_4 = x10_1 + x13_1 + 0x10
                        void* i_1
                        
                        do
                            v2_1 = *(x13_5 - 0x10)
                            v3_1 = *x13_5
                            i_1 = i_7
                            i_7 += 0x20
                            x13_5 += 0x20
                            v1_1 = v3_1 ^ *x15_4
                            *(x15_4 - 0x10) ^= v2_1
                            *x15_4 = v1_1
                            x15_4 += 0x20
                        while (i_1 != -0x20)
                
                if (x11_1 != x12_1)
                    void* x13_6 = x12_1 - x11_1
                    
                    if (x13_6 u< 8 || (x10_1 + x11_1 u< x9_8 + x12_1 && x9_8 + x11_1 u< x8_23))
                        goto label_ed5580
                    
                    void* i_10
                    
                    if (x13_6 u>= 0x20)
                        i_10 = x13_6 & 0xffffffffffffffe0
                        void* x14_5 = x9_8 + x11_1 + 0x10
                        void* x15_6 = x10_1 + x11_1 + 0x10
                        void* i_9 = i_10
                        void* i_2
                        
                        do
                            v0_1 = *(x14_5 - 0x10)
                            v1_1 = *x14_5
                            x14_5 += 0x20
                            i_2 = i_9
                            i_9 -= 0x20
                            v1_1 ^= *x15_6
                            *(x15_6 - 0x10) ^= v0_1
                            *x15_6 = v1_1
                            x15_6 += 0x20
                        while (i_2 != 0x20)
                        
                        if (x13_6 != i_10)
                            if ((x13_6 & 0x18) != 0)
                                goto label_ed5540
                            
                            x11_1 += i_10
                        label_ed5580:
                            void* x10_2 = x11_1 + x10_1
                            void* i_5 = x10_2 - x8_23
                            void* x9_9 = x9_8 + x11_1
                            void* i_3
                            
                            do
                                char x11_2 = *x9_9
                                x9_9 += 1
                                i_3 = i_5
                                i_5 += 1
                                *x10_2 ^= x11_2
                                x10_2 += 1
                            while (i_3 u< -1)
                    else
                        i_10 = nullptr
                    label_ed5540:
                        void* x14_6 = x13_6 & 0xfffffffffffffff8
                        void* x16_4 = i_10 + x11_1
                        x11_1 += x14_6
                        void* x15_7 = x9_8 + x16_4
                        void* x16_5 = x10_1 + x16_4
                        void* i_6 = i_10 - x14_6
                        void* i_4
                        
                        do
                            v0_1.q = *x15_7
                            x15_7 += 8
                            v1_1.q = *x16_5
                            i_4 = i_6
                            i_6 += 8
                            *x16_5 = (v1_1 ^ v0_1).q
                            x16_5 += 8
                        while (i_4 != -8)
                        
                        if (x13_6 != x14_6)
                            goto label_ed5580
                
                *(*arg5 + 0x1f) = 0
                int64_t* x0_12 = *entry_x6
                int64_t x1_7 = *(entry_x6 + 0x10)
                (*(*x0_12 + 0x18))(x0_12, x1_7, *(entry_x6 + 0x18) - x1_7)
                int64_t* x0_13 = *entry_x6
                var_54 = 3
                (*(*x0_13 + 0x18))(x0_13, &var_54, 1)
                int64_t* x0_14 = *entry_x6
                int64_t x1_9 = *arg6
                (*(*x0_14 + 0x18))(x0_14, x1_9, *(arg6 + 8) - x1_9)
                int64_t* x0_15 = *entry_x6
                int64_t x1_10 = *arg5
                (*(*x0_15 + 0x18))(x0_15, x1_10, *(arg5 + 8) - x1_10)
                int64_t* x25_2 = *entry_x6
                int64_t x0_17 = (**x25_2)(x25_2)
                void* x1_11 = var_78
                int64_t x8_36 = var_70_1 - x1_11
                
                if (x0_17 u> x8_36)
                    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                        &var_78)
                    x1_11 = var_78
                else if (x0_17 u< x8_36)
                    var_70_1 = x1_11 + x0_17
                
                (*(*x25_2 + 0x20))(x25_2, x1_11)
                Botan::XMSS_Hash::f(entry_x6, arg2, &var_78)
                x22 += 1
                
                if (x22 != x27_1)
                    continue
            
            x26_1 = var_78
            
            if (x26_1 == 0)
                goto label_ed56c0
            
            goto label_ed5690
        
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
else
    if ((x27 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    void* x0_1 = Botan::allocate_memory(x27, 1)
    void* x28_1 = x0_1 + x27
    x26_1 = x0_1
    var_78 = x0_1
    var_68_1 = x28_1
    memset(x0_1, 0, x27)
    var_70_1 = x28_1
    x27_1 = arg4 + x22
    
    if (x27_1 u> x22)
        goto label_ed52c0

if (x26_1 != 0)
label_ed5690:
    void* var_70_2 = x26_1
    Botan::deallocate_memory(x26_1, var_68_1 - x26_1, 1)

label_ed56c0:
