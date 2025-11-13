// 函数: _ZN5Botan14OCB_Decryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xddfb70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_78
void* var_68

if (*(arg1 + 0x10) == 0)
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
    Botan::assertion_failure("buffer.size() >= offset", "Offset is sane", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xf268)
    Botan::assertion_failure("sz >= tag_size()", "We have the tag", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xf26c)
else
    int64_t fp_1 = *arg2
    int64_t x28_1 = *(arg2 + 8)
    int64_t x8_1 = x28_1 - fp_1
    int64_t entry_x2
    int64_t x8_2 = x8_1 - entry_x2
    
    if (x8_1 u< entry_x2)
        Botan::assertion_failure("buffer.size() >= offset", "Offset is sane", "finish", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xf268)
        Botan::assertion_failure("sz >= tag_size()", "We have the tag", "finish", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xf26c)
    else
        int64_t x22_1 = *(arg1 + 0x50)
        int64_t x26_1 = x8_2 - x22_1
        
        if (x8_2 u< x22_1)
            Botan::assertion_failure("sz >= tag_size()", "We have the tag", "finish", 
                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xf26c)
        else
            uint64_t x23_1 = *(arg1 + 0x58)
            void* result_1
            __builtin_memset(&result_1, 0, 0x18)
            
            if (x23_1 == 0)
                goto label_ddfbf8
            
            void* var_80_1
            
            if ((x23_1 & 0xffffffff80000000) != 0)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
            label_de0ca8:
                Botan::assertion_failure("final_bytes < BS", "Only a partial block left", "finish", 
                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xf27c)
            label_de0cb0:
                int64_t* x0_36 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                void* result_5 = result_1
                
                if (result_5 != 0)
                    void* result_14 = result_5
                    Botan::deallocate_memory(result_5, var_80_1 - result_5, 1)
                
                sub_1101e04(x0_36)
                noreturn
            
            void* result_4 = Botan::allocate_memory(x23_1, 1)
            void* x19_1 = result_4 + x23_1
            result_1 = result_4
            var_80_1 = x19_1
            int128_t v0
            int128_t v1
            int128_t v2
            int128_t v3
            int128_t v4
            int128_t v5
            int128_t v6
            int128_t v7
            v0, v1, v2, v3, v4, v5, v6, v7 = memset(result_4, 0, x23_1)
            void* var_88_1 = x19_1
        label_ddfbf8:
            uint64_t x1 = fp_1 + entry_x2
            
            if (x26_1 == 0)
                void* x8_4 = *(arg1 + 0x10)
                
                if (&result_1 != x8_4 + 0x40)
                    *(x8_4 + 0x48)
                    v0, v1, v2, v3, v4, v5, v6, v7 = std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
                        &result_1, *(x8_4 + 0x40))
                
                goto label_de0424
            
            v0, v1, v2, v3, v4, v5, v6, v7 = Botan::OCB_Decryption::decrypt(arg1, x1)
            void* x20_2 = *(arg1 + 0x10)
            void* result_7 = result_1
            void* x8_3 = *(x20_2 + 0x40)
            void* x10_2 = *(x20_2 + 0x48) - x8_3
            
            if (x10_2 u> var_88_1 - result_7)
                v0, v1, v2, v3, v4, v5, v6, v7 =
                    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                    &result_1)
                x8_3 = *(x20_2 + 0x40)
                result_7 = result_1
                x10_2 = *(x20_2 + 0x48) - x8_3
            
            int64_t x20_3 = x26_1 u/ x23_1 * x23_1
            void* x11_2 = x10_2 & 0xffffffffffffffe0
            int64_t x27_1 = x26_1 u% x23_1
            
            if (x11_2 != 0)
                int64_t x12_2 = 0
                
                if (x11_2 == 0x20 || result_7 + 0x18 + x11_2 - 0x20 u< result_7 + 0x18
                        || result_7 + 0x10 + x11_2 - 0x20 u< result_7 + 0x10
                        || result_7 + 8 + x11_2 - 0x20 u< result_7 + 8
                        || result_7 + x11_2 - 0x20 u< result_7)
                    goto label_ddfd30
                
                if (result_7 u>= x8_3 + x11_2 || x8_3 u>= result_7 + x11_2)
                    int64_t i_35 = (((x11_2 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                    x12_2 = i_35 << 5
                    int64_t i_27 = i_35
                    void* x16_2 = x8_3
                    void* result_15 = result_7
                    int64_t i
                    
                    do
                        v0.q = *result_15
                        v1.q = *(result_15 + 8)
                        v2.q = *(result_15 + 0x10)
                        v3.q = *(result_15 + 0x18)
                        v0:8.q = *(result_15 + 0x20)
                        v1:8.q = *(result_15 + 0x28)
                        v2:8.q = *(result_15 + 0x30)
                        v3:8.q = *(result_15 + 0x38)
                        v4.q = *x16_2
                        v5.q = *(x16_2 + 8)
                        v6.q = *(x16_2 + 0x10)
                        v7.q = *(x16_2 + 0x18)
                        v4:8.q = *(x16_2 + 0x20)
                        v5:8.q = *(x16_2 + 0x28)
                        v6:8.q = *(x16_2 + 0x30)
                        v7:8.q = *(x16_2 + 0x38)
                        x16_2 += 0x40
                        i = i_27
                        i_27 -= 2
                        int128_t v16_1 = v4 ^ v0
                        int128_t v17_1 = v5 ^ v1
                        int128_t v18_1 = v6 ^ v2
                        int128_t v19_1 = v7 ^ v3
                        *result_15 = v16_1.q
                        *(result_15 + 8) = v17_1.q
                        *(result_15 + 0x10) = v18_1.q
                        *(result_15 + 0x18) = v19_1.q
                        *(result_15 + 0x20) = v16_1:8.q
                        *(result_15 + 0x28) = v17_1:8.q
                        *(result_15 + 0x30) = v18_1:8.q
                        *(result_15 + 0x38) = v19_1:8.q
                        result_15 += 0x40
                    while (i != 2)
                    
                    if (((x11_2 - 0x20) u>> 5) + 1 != i_35)
                        goto label_ddfd30
                else
                    x12_2 = 0
                label_ddfd30:
                    void* i_23 = x12_2 - x11_2
                    void* x12_6 = x8_3 + x12_2 + 0x10
                    void* x14_4 = result_7 + x12_2 + 0x10
                    void* i_1
                    
                    do
                        v2 = *(x12_6 - 0x10)
                        v3 = *x12_6
                        i_1 = i_23
                        i_23 += 0x20
                        x12_6 += 0x20
                        v1 = v3 ^ *x14_4
                        *(x14_4 - 0x10) ^= v2
                        *x14_4 = v1
                        x14_4 += 0x20
                    while (i_1 != -0x20)
            
            if (x10_2 != x11_2)
                if ((x10_2 & 0x18) == 0)
                label_ddfdbc:
                    int64_t i_19 = x10_2 - x11_2
                    void* x9_2 = result_7 + x11_2
                    void* x8_5 = x8_3 + x11_2
                    int64_t i_2
                    
                    do
                        char x11_3 = *x8_5
                        x8_5 += 1
                        i_2 = i_19
                        i_19 -= 1
                        *x9_2 ^= x11_3
                        x9_2 += 1
                    while (i_2 != 1)
                else
                    int64_t* x12_7 = result_7 + x11_2
                    void* x13_4 = x8_3 + x11_2
                    
                    if (x12_7 u< x8_3 + x10_2 && x13_4 u< result_7 + x10_2)
                        goto label_ddfdbc
                    
                    void* x14_6 = x10_2 & 7
                    void* i_28 = (x10_2 & 0x1f) - x14_6
                    x11_2 += i_28
                    void* i_3
                    
                    do
                        v0.q = *x13_4
                        x13_4 += 8
                        v1.q = *x12_7
                        i_3 = i_28
                        i_28 -= 8
                        *x12_7 = (v1 ^ v0).q
                        x12_7 = &x12_7[1]
                    while (i_3 != 8)
                    
                    if (x14_6 != 0)
                        goto label_ddfdbc
            
            if (x27_1 != 0)
                if (x27_1 u>= x23_1)
                    goto label_de0ca8
                
                void* x24_2 = *(arg1 + 0x10)
                void* result_8 = result_1
                void* x8_6 = *(x24_2 + 0x28)
                void* x10_5 = *(x24_2 + 0x30) - x8_6
                
                if (x10_5 u> var_88_1 - result_8)
                    v0, v1, v2, v3, v4, v5, v6, v7 =
                        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                        &result_1)
                    x8_6 = *(x24_2 + 0x28)
                    result_8 = result_1
                    x10_5 = *(x24_2 + 0x30) - x8_6
                
                void* x11_6 = x10_5 & 0xffffffffffffffe0
                
                if (x11_6 != 0)
                    int64_t x12_10 = 0
                    
                    if (x11_6 == 0x20 || result_8 + 0x18 + x11_6 - 0x20 u< result_8 + 0x18
                            || result_8 + 0x10 + x11_6 - 0x20 u< result_8 + 0x10
                            || result_8 + 8 + x11_6 - 0x20 u< result_8 + 8
                            || result_8 + x11_6 - 0x20 u< result_8)
                        goto label_ddfed8
                    
                    if (result_8 u>= x8_6 + x11_6 || x8_6 u>= result_8 + x11_6)
                        int64_t i_36 = (((x11_6 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                        x12_10 = i_36 << 5
                        int64_t i_29 = i_36
                        void* x16_4 = x8_6
                        void* result_16 = result_8
                        int64_t i_4
                        
                        do
                            v0.q = *result_16
                            v1.q = *(result_16 + 8)
                            v2.q = *(result_16 + 0x10)
                            v3.q = *(result_16 + 0x18)
                            v0:8.q = *(result_16 + 0x20)
                            v1:8.q = *(result_16 + 0x28)
                            v2:8.q = *(result_16 + 0x30)
                            v3:8.q = *(result_16 + 0x38)
                            v4.q = *x16_4
                            v5.q = *(x16_4 + 8)
                            v6.q = *(x16_4 + 0x10)
                            v7.q = *(x16_4 + 0x18)
                            v4:8.q = *(x16_4 + 0x20)
                            v5:8.q = *(x16_4 + 0x28)
                            v6:8.q = *(x16_4 + 0x30)
                            v7:8.q = *(x16_4 + 0x38)
                            x16_4 += 0x40
                            i_4 = i_29
                            i_29 -= 2
                            int128_t v16_2 = v4 ^ v0
                            int128_t v17_2 = v5 ^ v1
                            int128_t v18_2 = v6 ^ v2
                            int128_t v19_2 = v7 ^ v3
                            *result_16 = v16_2.q
                            *(result_16 + 8) = v17_2.q
                            *(result_16 + 0x10) = v18_2.q
                            *(result_16 + 0x18) = v19_2.q
                            *(result_16 + 0x20) = v16_2:8.q
                            *(result_16 + 0x28) = v17_2:8.q
                            *(result_16 + 0x30) = v18_2:8.q
                            *(result_16 + 0x38) = v19_2:8.q
                            result_16 += 0x40
                        while (i_4 != 2)
                        
                        if (((x11_6 - 0x20) u>> 5) + 1 != i_36)
                            goto label_ddfed8
                    else
                        x12_10 = 0
                    label_ddfed8:
                        void* i_24 = x12_10 - x11_6
                        void* x12_14 = x8_6 + x12_10 + 0x10
                        void* x14_10 = result_8 + x12_10 + 0x10
                        void* i_5
                        
                        do
                            v2 = *(x12_14 - 0x10)
                            v3 = *x12_14
                            i_5 = i_24
                            i_24 += 0x20
                            x12_14 += 0x20
                            v1 = v3 ^ *x14_10
                            *(x14_10 - 0x10) ^= v2
                            *x14_10 = v1
                            x14_10 += 0x20
                        while (i_5 != -0x20)
                
                if (x10_5 != x11_6)
                    if ((x10_5 & 0x18) == 0)
                    label_ddff64:
                        int64_t i_20 = x10_5 - x11_6
                        void* x9_3 = result_8 + x11_6
                        void* x8_7 = x8_6 + x11_6
                        int64_t i_6
                        
                        do
                            char x11_7 = *x8_7
                            x8_7 += 1
                            i_6 = i_20
                            i_20 -= 1
                            *x9_3 ^= x11_7
                            x9_3 += 1
                        while (i_6 != 1)
                    else
                        void* x12_15 = result_8 + x11_6
                        void* x13_8 = x8_6 + x11_6
                        
                        if (x12_15 u< x8_6 + x10_5 && x13_8 u< result_8 + x10_5)
                            goto label_ddff64
                        
                        void* x14_12 = x10_5 & 7
                        void* i_30 = (x10_5 & 0x1f) - x14_12
                        x11_6 += i_30
                        void* i_7
                        
                        do
                            v0.q = *x13_8
                            x13_8 += 8
                            v1.q = *x12_15
                            i_7 = i_30
                            i_30 -= 8
                            *x12_15 = (v1 ^ v0).q
                            x12_15 += 8
                        while (i_7 != 8)
                        
                        if (x14_12 != 0)
                            goto label_ddff64
                
                __builtin_memset(&var_78, 0, 0x18)
                
                if ((x23_1 & 0xffffffff80000000) != 0)
                    goto label_de0cb0
                
                int64_t x0_8 = Botan::allocate_memory(x23_1, 1)
                void* x19_2 = x0_8 + x23_1
                var_78.q = x0_8
                var_68 = x19_2
                memset(x0_8, 0, x23_1)
                void* var_70_1 = x19_2
                int64_t* x25_2 = *(arg1 + 8)
                void* result_13 = result_1
                v0, v1, v2, v3, v4, v5, v6, v7 = (*(*x25_2 + 0x48))(x25_2, result_13, x0_8, 
                    (var_88_1 - result_13) u/ (*(*x25_2 + 0x30))(x25_2))
                void* x10_7 = var_78.q
                int64_t x9_5 = x27_1 & 0xffffffffffffffe0
                int64_t* x8_13 = x1 + x20_3
                
                if (x9_5 != 0)
                    int64_t x11_9 = 0
                    
                    if (x9_5 == 0x20)
                        goto label_de00f4
                    
                    int64_t x12_18 = x20_3 + entry_x2 + fp_1
                    
                    if (x12_18 + 0x18 + x9_5 - 0x20 u< x12_18 + 0x18
                            || x12_18 + 0x10 + x9_5 - 0x20 u< x12_18 + 0x10
                            || x12_18 + 8 + x9_5 - 0x20 u< x12_18 + 8
                            || x8_13 + x9_5 - 0x20 u< x8_13)
                        goto label_de00f4
                    
                    if (x8_13 u>= x10_7 + x9_5 || x10_7 u>= fp_1 + x20_3 + entry_x2 + x9_5)
                        int64_t x14_15 = (((x9_5 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                        int64_t x12_21 = 0
                        x11_9 = x14_15 << 5
                        void* x15_9 = x10_7
                        
                        do
                            void* x16_6 = &x8_13[x12_21 * 4]
                            v0.q = *x16_6
                            v1.q = *(x16_6 + 8)
                            v2.q = *(x16_6 + 0x10)
                            v3.q = *(x16_6 + 0x18)
                            v0:8.q = *(x16_6 + 0x20)
                            v1:8.q = *(x16_6 + 0x28)
                            v2:8.q = *(x16_6 + 0x30)
                            v3:8.q = *(x16_6 + 0x38)
                            v4.q = *x15_9
                            v5.q = *(x15_9 + 8)
                            v6.q = *(x15_9 + 0x10)
                            v7.q = *(x15_9 + 0x18)
                            v4:8.q = *(x15_9 + 0x20)
                            v5:8.q = *(x15_9 + 0x28)
                            v6:8.q = *(x15_9 + 0x30)
                            v7:8.q = *(x15_9 + 0x38)
                            x15_9 += 0x40
                            x12_21 += 2
                            int128_t v16_3 = v4 ^ v0
                            int128_t v17_3 = v5 ^ v1
                            int128_t v18_3 = v6 ^ v2
                            int128_t v19_3 = v7 ^ v3
                            *x16_6 = v16_3.q
                            *(x16_6 + 8) = v17_3.q
                            *(x16_6 + 0x10) = v18_3.q
                            *(x16_6 + 0x18) = v19_3.q
                            *(x16_6 + 0x20) = v16_3:8.q
                            *(x16_6 + 0x28) = v17_3:8.q
                            *(x16_6 + 0x30) = v18_3:8.q
                            *(x16_6 + 0x38) = v19_3:8.q
                        while (x12_21 != x14_15)
                        
                        if (((x9_5 - 0x20) u>> 5) + 1 != x14_15)
                            goto label_de00f4
                    else
                        x11_9 = 0
                    label_de00f4:
                        
                        do
                            int128_t* x12_22 = x8_13 + x11_9
                            int128_t* x13_11 = x10_7 + x11_9
                            x11_9 += 0x20
                            v1 = x13_11[1] ^ x12_22[1]
                            *x12_22 ^= *x13_11
                            x12_22[1] = v1
                        while (x11_9 != x9_5)
                
                if (x9_5 != x27_1)
                    int64_t x11_19 = x28_1 - x20_3 - x22_1 - entry_x2 - fp_1 - x9_5
                    int64_t x13_12 = x9_5
                    
                    if (x11_19 u< 8)
                        goto label_de0200
                    
                    if (fp_1 + x20_3 + entry_x2 + x9_5
                            u< x10_7 + x28_1 - (x22_1 + entry_x2 + fp_1 + x20_3))
                        x13_12 = x9_5
                    
                    if (fp_1 + x20_3 + entry_x2 + x9_5
                            u< x10_7 + x28_1 - (x22_1 + entry_x2 + fp_1 + x20_3)
                            && x10_7 + x9_5 u< x28_1 - x22_1)
                        goto label_de0200
                    
                    int64_t x12_27
                    
                    if (x11_19 u>= 0x20)
                        int64_t x13_19 = 0
                        x12_27 = x11_19 & 0xffffffffffffffe0
                        
                        do
                            int64_t x14_16 = x9_5 + x13_19
                            void* x15_10 = x10_7 + x14_16
                            void* x14_17 = x8_13 + x14_16
                            x13_19 += 0x20
                            v1 = *(x14_17 + 0x10) ^ *(x15_10 + 0x10)
                            *x14_17 ^= *x15_10
                            *(x14_17 + 0x10) = v1
                        while (x13_19 != x12_27)
                        
                        if (x11_19 != x12_27)
                            if ((x11_19 & 0x18) != 0)
                                goto label_de01b0
                            
                            x13_12 = x9_5 + x12_27
                        label_de0200:
                            
                            do
                                *(x8_13 + x13_12) ^= *(x10_7 + x13_12)
                                x13_12 += 1
                            while (x13_12 != x27_1)
                    else
                        x12_27 = 0
                    label_de01b0:
                        int64_t x14_18 = x11_19 & 0xfffffffffffffff8
                        x13_12 = x9_5 + x14_18
                        
                        do
                            int64_t x15_11 = x9_5 + x12_27
                            v0.q = *(x10_7 + x15_11)
                            v1.q = *(x8_13 + x15_11)
                            x12_27 += 8
                            *(x8_13 + x15_11) = (v1 ^ v0).q
                        while (x12_27 != x14_18)
                        
                        if (x11_19 != x14_18)
                            goto label_de0200
                
                void* x10_8 = *(arg1 + 0x20)
                
                if (x9_5 != 0)
                    int64_t x11_22 = 0
                    
                    if (x9_5 == 0x20 || x10_8 + 0x18 + x9_5 - 0x20 u< x10_8 + 0x18
                            || x10_8 + 0x10 + x9_5 - 0x20 u< x10_8 + 0x10
                            || x10_8 + 8 + x9_5 - 0x20 u< x10_8 + 8
                            || x10_8 + x9_5 - 0x20 u< x10_8)
                        goto label_de02ec
                    
                    if (x10_8 u>= fp_1 + x20_3 + entry_x2 + x9_5 || x8_13 u>= x10_8 + x9_5)
                        int64_t x14_21 = (((x9_5 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                        int64_t x12_31 = 0
                        x11_22 = x14_21 << 5
                        void* x15_13 = x10_8
                        
                        do
                            void* x16_8 = &x8_13[x12_31 * 4]
                            v0.q = *x15_13
                            v1.q = *(x15_13 + 8)
                            v2.q = *(x15_13 + 0x10)
                            v3.q = *(x15_13 + 0x18)
                            v0:8.q = *(x15_13 + 0x20)
                            v1:8.q = *(x15_13 + 0x28)
                            v2:8.q = *(x15_13 + 0x30)
                            v3:8.q = *(x15_13 + 0x38)
                            v4.q = *x16_8
                            v5.q = *(x16_8 + 8)
                            v6.q = *(x16_8 + 0x10)
                            v7.q = *(x16_8 + 0x18)
                            v4:8.q = *(x16_8 + 0x20)
                            v5:8.q = *(x16_8 + 0x28)
                            v6:8.q = *(x16_8 + 0x30)
                            v7:8.q = *(x16_8 + 0x38)
                            x12_31 += 2
                            int128_t v16_4 = v4 ^ v0
                            int128_t v17_4 = v5 ^ v1
                            int128_t v18_4 = v6 ^ v2
                            int128_t v19_4 = v7 ^ v3
                            *x15_13 = v16_4.q
                            *(x15_13 + 8) = v17_4.q
                            *(x15_13 + 0x10) = v18_4.q
                            *(x15_13 + 0x18) = v19_4.q
                            *(x15_13 + 0x20) = v16_4:8.q
                            *(x15_13 + 0x28) = v17_4:8.q
                            *(x15_13 + 0x30) = v18_4:8.q
                            *(x15_13 + 0x38) = v19_4:8.q
                            x15_13 += 0x40
                        while (x12_31 != x14_21)
                        
                        if (((x9_5 - 0x20) u>> 5) + 1 != x14_21)
                            goto label_de02ec
                    else
                        x11_22 = 0
                    label_de02ec:
                        
                        do
                            int128_t* x12_32 = x10_8 + x11_22
                            void* x13_22 = x8_13 + x11_22
                            x11_22 += 0x20
                            v1 = *(x13_22 + 0x10) ^ x12_32[1]
                            *x12_32 ^= *x13_22
                            x12_32[1] = v1
                        while (x11_22 != x9_5)
                
                if (x9_5 != x27_1)
                    int64_t x11_32 = x28_1 - x20_3 - x22_1 - entry_x2 - fp_1 - x9_5
                    
                    if (x11_32 u< 8 || (x10_8 + x9_5 u< x28_1 - x22_1
                            && fp_1 + x20_3 + entry_x2 + x9_5
                            u< x10_8 + x28_1 - (x22_1 + entry_x2 + fp_1 + x20_3)))
                        goto label_de03f4
                    
                    int64_t x12_39
                    
                    if (x11_32 u>= 0x20)
                        int64_t x13_27 = 0
                        x12_39 = x11_32 & 0xffffffffffffffe0
                        
                        do
                            int64_t x14_22 = x9_5 + x13_27
                            void* x15_14 = x8_13 + x14_22
                            void* x14_23 = x10_8 + x14_22
                            x13_27 += 0x20
                            v1 = *(x14_23 + 0x10) ^ *(x15_14 + 0x10)
                            *x14_23 ^= *x15_14
                            *(x14_23 + 0x10) = v1
                        while (x13_27 != x12_39)
                        
                        if (x11_32 != x12_39)
                            if ((x11_32 & 0x18) != 0)
                                goto label_de03a0
                            
                            x9_5 += x12_39
                        label_de03f4:
                            
                            do
                                *(x10_8 + x9_5) ^= *(x8_13 + x9_5)
                                x9_5 += 1
                            while (x9_5 != x27_1)
                    else
                        x12_39 = 0
                    label_de03a0:
                        int64_t x14_24 = x11_32 & 0xfffffffffffffff8
                        
                        do
                            int64_t x15_15 = x9_5 + x12_39
                            v0.q = *(x8_13 + x15_15)
                            v1.q = *(x10_8 + x15_15)
                            x12_39 += 8
                            *(x10_8 + x15_15) = (v1 ^ v0).q
                        while (x12_39 != x14_24)
                        
                        x9_5 += x14_24
                        
                        if (x11_32 != x14_24)
                            goto label_de03f4
                
                char* x8_14 = *(arg1 + 0x20)
                x8_14[x27_1] ^= 0x80
                void* x0_13 = var_78.q
                
                if (x0_13 != 0)
                    void* var_70_2 = x0_13
                    v0, v1, v2, v3, v4, v5, v6, v7 =
                        Botan::deallocate_memory(x0_13, var_68 - x0_13, 1)
                
                goto label_de0424
            
        label_de0424:
            void* x9_8 = *(arg1 + 0x20)
            int64_t x17_6 = *(arg1 + 0x28)
            
            if (x17_6 != x9_8)
                int64_t x10_9 = 0
                int64_t i_8 = 0
                int64_t x8_16 = x23_1 & 0xffffffffffffffe0
                
                if (x8_16 == 0)
                    int64_t j_19 = x23_1 & 0xfffffffffffffff8
                    int64_t j_15 = x23_1 & 0xffffffffffffffe0
                    int64_t x16_11 = 0x10
                    
                    do
                        if (x23_1 != x8_16)
                            void* result_11 = result_1
                            int64_t j_17
                            
                            if (x23_1 u< 8 || (result_11 u< x9_8 + x23_1 + x23_1 * x10_9
                                    && x9_8 + i_8 u< result_11 + x23_1))
                                j_17 = 0
                            label_de0684:
                                int64_t j_7 = x23_1 - j_17
                                void* x17_7 = result_11 + j_17
                                void* x9_10 = x9_8 + j_17
                                int64_t j
                                
                                do
                                    char x1_7 = *(x9_10 + i_8)
                                    j = j_7
                                    j_7 -= 1
                                    x9_10 += 1
                                    *x17_7 ^= x1_7
                                    x17_7 += 1
                                while (j != 1)
                            else
                                int64_t j_18
                                
                                if (x23_1 u>= 0x20)
                                    void* x0_19 = x9_8 + x16_11
                                    void* x1_9 = result_11 + 0x10
                                    int64_t j_8 = j_15
                                    int64_t j_1
                                    
                                    do
                                        v0 = *(x0_19 - 0x10)
                                        v1 = *x0_19
                                        x0_19 += 0x20
                                        j_1 = j_8
                                        j_8 -= 0x20
                                        v1 ^= *x1_9
                                        *(x1_9 - 0x10) ^= v0
                                        *x1_9 = v1
                                        x1_9 += 0x20
                                    while (j_1 != 0x20)
                                    
                                    if (x23_1 != j_15)
                                        j_18 = j_15
                                        j_17 = j_15
                                        
                                        if ((x23_1 & 0x18) == 0)
                                            goto label_de0684
                                        
                                        goto label_de0704
                                else
                                    j_18 = 0
                                label_de0704:
                                    void* x0_20 = x9_8 + j_18
                                    void* x1_10 = result_11 + j_18
                                    int64_t j_9 = neg.q(j_19) + j_18
                                    int64_t j_2
                                    
                                    do
                                        v0.q = *(x0_20 + i_8)
                                        v1.q = *x1_10
                                        j_2 = j_9
                                        j_9 += 8
                                        x0_20 += 8
                                        *x1_10 = (v1 ^ v0).q
                                        x1_10 += 8
                                    while (j_2 != -8)
                                    j_17 = j_19
                                    
                                    if (x23_1 != j_19)
                                        goto label_de0684
                            x9_8 = *(arg1 + 0x20)
                            x17_6 = *(arg1 + 0x28)
                        
                        i_8 += x23_1
                        x10_9 += 1
                        x16_11 += x23_1
                    while (i_8 != x17_6 - x9_8)
                else
                    int64_t x12_41 = x23_1 & 0x1f
                    int64_t x14_25 = x23_1 & 7
                    int64_t j_16 = x12_41 - x14_25
                    int64_t j_14 = (((x8_16 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                    int64_t x3_2 = 0x10
                    int64_t x4_1 = x8_16
                    
                    do
                        void* result_6 = result_1
                        int64_t x7_1 = x23_1 * x10_9
                        int64_t x6_1 = x8_16 + x7_1
                        int64_t x20_4 = 0
                        
                        if (x8_16 == 0x20 || result_6 + 0x18 + x8_16 - 0x20 u< result_6 + 0x18
                                || result_6 + 0x10 + x8_16 - 0x20 u< result_6 + 0x10
                                || result_6 + 8 + x8_16 - 0x20 u< result_6 + 8
                                || result_6 + x8_16 - 0x20 u< result_6)
                            goto label_de0558
                        
                        if (result_6 u>= x9_8 + x6_1 || x9_8 + i_8 u>= result_6 + x8_16)
                            int64_t j_11 = j_14
                            void* x22_4 = x9_8
                            void* result_19 = result_6
                            int64_t j_3
                            
                            do
                                void* x19_8 = x22_4 + i_8
                                v0.q = *result_19
                                v1.q = *(result_19 + 8)
                                v2.q = *(result_19 + 0x10)
                                v3.q = *(result_19 + 0x18)
                                v0:8.q = *(result_19 + 0x20)
                                v1:8.q = *(result_19 + 0x28)
                                v2:8.q = *(result_19 + 0x30)
                                v3:8.q = *(result_19 + 0x38)
                                v4.q = *x19_8
                                v5.q = *(x19_8 + 8)
                                v6.q = *(x19_8 + 0x10)
                                v7.q = *(x19_8 + 0x18)
                                v4:8.q = *(x19_8 + 0x20)
                                v5:8.q = *(x19_8 + 0x28)
                                v6:8.q = *(x19_8 + 0x30)
                                v7:8.q = *(x19_8 + 0x38)
                                j_3 = j_11
                                j_11 -= 2
                                x22_4 += 0x40
                                int128_t v16_5 = v4 ^ v0
                                int128_t v17_5 = v5 ^ v1
                                int128_t v18_5 = v6 ^ v2
                                int128_t v19_5 = v7 ^ v3
                                *result_19 = v16_5.q
                                *(result_19 + 8) = v17_5.q
                                *(result_19 + 0x10) = v18_5.q
                                *(result_19 + 0x18) = v19_5.q
                                *(result_19 + 0x20) = v16_5:8.q
                                *(result_19 + 0x28) = v17_5:8.q
                                *(result_19 + 0x30) = v18_5:8.q
                                *(result_19 + 0x38) = v19_5:8.q
                                result_19 += 0x40
                            while (j_3 != 2)
                            x20_4 = j_14 << 5
                            
                            if (((x8_16 - 0x20) u>> 5) + 1 != j_14)
                                goto label_de0558
                        else
                            x20_4 = 0
                        label_de0558:
                            int64_t j_13 = neg.q(x23_1 & 0xffffffffffffffe0) + x20_4
                            void* x20_6 = result_6 + x20_4 + 0x10
                            int128_t* x24_6 = x9_8 + x20_4 + x3_2
                            int64_t j_4
                            
                            do
                                v2 = x24_6[-1]
                                v3 = *x24_6
                                j_4 = j_13
                                j_13 += 0x20
                                x24_6 = &x24_6[2]
                                v1 = v3 ^ *x20_6
                                *(x20_6 - 0x10) ^= v2
                                *x20_6 = v1
                                x20_6 += 0x20
                            while (j_4 != -0x20)
                        
                        if (x23_1 != x8_16)
                            int64_t x19_10 = x8_16
                            
                            if (x12_41 u< 8)
                            label_de05ec:
                                int64_t j_10 = x23_1 - x19_10
                                void* x5_3 = result_6 + x19_10
                                void* x9_9 = x9_8 + x19_10
                                int64_t j_5
                                
                                do
                                    char x7_3 = *(x9_9 + i_8)
                                    j_5 = j_10
                                    j_10 -= 1
                                    x9_9 += 1
                                    *x5_3 ^= x7_3
                                    x5_3 += 1
                                while (j_5 != 1)
                            else
                                void* x7_2 = result_6 + x8_16
                                
                                if (x7_2 u< x9_8 + x23_1 + x7_1)
                                    x19_10 = x8_16
                                
                                if (x7_2 u< x9_8 + x23_1 + x7_1 && x9_8 + x6_1 u< result_6 + x23_1)
                                    goto label_de05ec
                                
                                void* x6_3 = x9_8 + x4_1
                                int64_t j_12 = j_16
                                int64_t j_6
                                
                                do
                                    v0.q = *x6_3
                                    x6_3 += 8
                                    v1.q = *x7_2
                                    j_6 = j_12
                                    j_12 -= 8
                                    *x7_2 = (v1 ^ v0).q
                                    x7_2 += 8
                                while (j_6 != 8)
                                x19_10 = x8_16 + j_16
                                
                                if (x14_25 != 0)
                                    goto label_de05ec
                        
                        x9_8 = *(arg1 + 0x20)
                        i_8 += x23_1
                        x10_9 += 1
                        x3_2 += x23_1
                        x4_1 += x23_1
                    while (i_8 != *(arg1 + 0x28) - x9_8)
            
            void* x20_7 = *(arg1 + 0x10)
            void* result_9 = result_1
            void* x8_17 = *(x20_7 + 0x10)
            void* x10_11 = *(x20_7 + 0x18) - x8_17
            
            if (x10_11 u> var_88_1 - result_9)
                v0, v1, v2, v3, v4, v5, v6, v7 =
                    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                    &result_1)
                x8_17 = *(x20_7 + 0x10)
                result_9 = result_1
                x10_11 = *(x20_7 + 0x18) - x8_17
            
            void* x11_36 = x10_11 & 0xffffffffffffffe0
            
            if (x11_36 != 0)
                int64_t x12_43 = 0
                
                if (x11_36 == 0x20 || result_9 + 0x18 + x11_36 - 0x20 u< result_9 + 0x18
                        || result_9 + 0x10 + x11_36 - 0x20 u< result_9 + 0x10
                        || result_9 + 8 + x11_36 - 0x20 u< result_9 + 8
                        || result_9 + x11_36 - 0x20 u< result_9)
                    goto label_de0828
                
                if (result_9 u>= x8_17 + x11_36 || x8_17 u>= result_9 + x11_36)
                    int64_t i_37 = (((x11_36 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                    x12_43 = i_37 << 5
                    int64_t i_31 = i_37
                    void* x16_13 = x8_17
                    void* result_17 = result_9
                    int64_t i_9
                    
                    do
                        v0.q = *result_17
                        v1.q = *(result_17 + 8)
                        v2.q = *(result_17 + 0x10)
                        v3.q = *(result_17 + 0x18)
                        v0:8.q = *(result_17 + 0x20)
                        v1:8.q = *(result_17 + 0x28)
                        v2:8.q = *(result_17 + 0x30)
                        v3:8.q = *(result_17 + 0x38)
                        v4.q = *x16_13
                        v5.q = *(x16_13 + 8)
                        v6.q = *(x16_13 + 0x10)
                        v7.q = *(x16_13 + 0x18)
                        v4:8.q = *(x16_13 + 0x20)
                        v5:8.q = *(x16_13 + 0x28)
                        v6:8.q = *(x16_13 + 0x30)
                        v7:8.q = *(x16_13 + 0x38)
                        x16_13 += 0x40
                        i_9 = i_31
                        i_31 -= 2
                        int128_t v16_6 = v4 ^ v0
                        int128_t v17_6 = v5 ^ v1
                        int128_t v18_6 = v6 ^ v2
                        int128_t v19_6 = v7 ^ v3
                        *result_17 = v16_6.q
                        *(result_17 + 8) = v17_6.q
                        *(result_17 + 0x10) = v18_6.q
                        *(result_17 + 0x18) = v19_6.q
                        *(result_17 + 0x20) = v16_6:8.q
                        *(result_17 + 0x28) = v17_6:8.q
                        *(result_17 + 0x30) = v18_6:8.q
                        *(result_17 + 0x38) = v19_6:8.q
                        result_17 += 0x40
                    while (i_9 != 2)
                    
                    if (((x11_36 - 0x20) u>> 5) + 1 != i_37)
                        goto label_de0828
                else
                    x12_43 = 0
                label_de0828:
                    void* i_25 = x12_43 - x11_36
                    void* x12_47 = x8_17 + x12_43 + 0x10
                    void* x14_29 = result_9 + x12_43 + 0x10
                    void* i_10
                    
                    do
                        v2 = *(x12_47 - 0x10)
                        v3 = *x12_47
                        i_10 = i_25
                        i_25 += 0x20
                        x12_47 += 0x20
                        v1 = v3 ^ *x14_29
                        *(x14_29 - 0x10) ^= v2
                        *x14_29 = v1
                        x14_29 += 0x20
                    while (i_10 != -0x20)
            
            if (x10_11 != x11_36)
                if ((x10_11 & 0x18) == 0)
                label_de08b4:
                    int64_t i_21 = x10_11 - x11_36
                    void* x9_11 = result_9 + x11_36
                    void* x8_18 = x8_17 + x11_36
                    int64_t i_11
                    
                    do
                        char x11_37 = *x8_18
                        x8_18 += 1
                        i_11 = i_21
                        i_21 -= 1
                        *x9_11 ^= x11_37
                        x9_11 += 1
                    while (i_11 != 1)
                else
                    void* x12_48 = result_9 + x11_36
                    void* x13_34 = x8_17 + x11_36
                    
                    if (x12_48 u< x8_17 + x10_11 && x13_34 u< result_9 + x10_11)
                        goto label_de08b4
                    
                    void* x14_31 = x10_11 & 7
                    void* i_32 = (x10_11 & 0x1f) - x14_31
                    x11_36 += i_32
                    void* i_12
                    
                    do
                        v0.q = *x13_34
                        x13_34 += 8
                        v1.q = *x12_48
                        i_12 = i_32
                        i_32 -= 8
                        *x12_48 = (v1 ^ v0).q
                        x12_48 += 8
                    while (i_12 != 8)
                    
                    if (x14_31 != 0)
                        goto label_de08b4
            
            int64_t* x23_2 = *(arg1 + 8)
            void* result_12 = result_1
            int128_t v0_1
            int128_t v1_1
            int128_t v2_1
            int128_t v3_1
            int128_t v4_1
            int128_t v5_1
            int128_t v6_1
            int128_t v7_1
            v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = (*(*x23_2 + 0x48))(x23_2, result_12, 
                result_12, (var_88_1 - result_12) u/ (*(*x23_2 + 0x30))(x23_2))
            void* result_10 = result_1
            void* x8_23 = *(arg1 + 0x38)
            void* x10_14 = *(arg1 + 0x40) - x8_23
            
            if (x10_14 u> var_88_1 - result_10)
                v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                    &result_1)
                x8_23 = *(arg1 + 0x38)
                result_10 = result_1
                x10_14 = *(arg1 + 0x40) - x8_23
            
            void* x11_40 = x10_14 & 0xffffffffffffffe0
            
            if (x11_40 != 0)
                int64_t x12_51 = 0
                
                if (x11_40 == 0x20 || result_10 + 0x18 + x11_40 - 0x20 u< result_10 + 0x18
                        || result_10 + 0x10 + x11_40 - 0x20 u< result_10 + 0x10
                        || result_10 + 8 + x11_40 - 0x20 u< result_10 + 8
                        || result_10 + x11_40 - 0x20 u< result_10)
                    goto label_de09fc
                
                if (result_10 u>= x8_23 + x11_40 || x8_23 u>= result_10 + x11_40)
                    int64_t i_38 = (((x11_40 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                    x12_51 = i_38 << 5
                    int64_t i_33 = i_38
                    void* x16_15 = x8_23
                    void* result_18 = result_10
                    int64_t i_13
                    
                    do
                        v0_1.q = *result_18
                        v1_1.q = *(result_18 + 8)
                        v2_1.q = *(result_18 + 0x10)
                        v3_1.q = *(result_18 + 0x18)
                        v0_1:8.q = *(result_18 + 0x20)
                        v1_1:8.q = *(result_18 + 0x28)
                        v2_1:8.q = *(result_18 + 0x30)
                        v3_1:8.q = *(result_18 + 0x38)
                        v4_1.q = *x16_15
                        v5_1.q = *(x16_15 + 8)
                        v6_1.q = *(x16_15 + 0x10)
                        v7_1.q = *(x16_15 + 0x18)
                        v4_1:8.q = *(x16_15 + 0x20)
                        v5_1:8.q = *(x16_15 + 0x28)
                        v6_1:8.q = *(x16_15 + 0x30)
                        v7_1:8.q = *(x16_15 + 0x38)
                        x16_15 += 0x40
                        i_13 = i_33
                        i_33 -= 2
                        int128_t v16_7 = v4_1 ^ v0_1
                        int128_t v17_7 = v5_1 ^ v1_1
                        int128_t v18_7 = v6_1 ^ v2_1
                        int128_t v19_7 = v7_1 ^ v3_1
                        *result_18 = v16_7.q
                        *(result_18 + 8) = v17_7.q
                        *(result_18 + 0x10) = v18_7.q
                        *(result_18 + 0x18) = v19_7.q
                        *(result_18 + 0x20) = v16_7:8.q
                        *(result_18 + 0x28) = v17_7:8.q
                        *(result_18 + 0x30) = v18_7:8.q
                        *(result_18 + 0x38) = v19_7:8.q
                        result_18 += 0x40
                    while (i_13 != 2)
                    
                    if (((x11_40 - 0x20) u>> 5) + 1 != i_38)
                        goto label_de09fc
                else
                    x12_51 = 0
                label_de09fc:
                    void* i_26 = x12_51 - x11_40
                    void* x12_55 = x8_23 + x12_51 + 0x10
                    void* x14_35 = result_10 + x12_51 + 0x10
                    void* i_14
                    
                    do
                        v2_1 = *(x12_55 - 0x10)
                        v3_1 = *x12_55
                        i_14 = i_26
                        i_26 += 0x20
                        x12_55 += 0x20
                        v1_1 = v3_1 ^ *x14_35
                        *(x14_35 - 0x10) ^= v2_1
                        *x14_35 = v1_1
                        x14_35 += 0x20
                    while (i_14 != -0x20)
            
            if (x10_14 != x11_40)
                if ((x10_14 & 0x18) == 0)
                label_de0a90:
                    int64_t i_22 = x10_14 - x11_40
                    void* x9_13 = result_10 + x11_40
                    void* x8_24 = x8_23 + x11_40
                    int64_t i_15
                    
                    do
                        char x11_41 = *x8_24
                        x8_24 += 1
                        i_15 = i_22
                        i_22 -= 1
                        *x9_13 ^= x11_41
                        x9_13 += 1
                    while (i_15 != 1)
                else
                    void* x12_56 = result_10 + x11_40
                    void* x13_38 = x8_23 + x11_40
                    
                    if (x12_56 u< x8_23 + x10_14 && x13_38 u< result_10 + x10_14)
                        goto label_de0a90
                    
                    void* x14_37 = x10_14 & 7
                    void* i_34 = (x10_14 & 0x1f) - x14_37
                    x11_40 += i_34
                    void* i_16
                    
                    do
                        v0_1.q = *x13_38
                        x13_38 += 8
                        v1_1.q = *x12_56
                        i_16 = i_34
                        i_34 -= 8
                        *x12_56 = (v1_1 ^ v0_1).q
                        x12_56 += 8
                    while (i_16 != 8)
                    
                    if (x14_37 != 0)
                        goto label_de0a90
            
            int64_t x0_28 = *(arg1 + 0x20)
            int64_t x8_25 = *(arg1 + 0x28)
            
            if (x8_25 != x0_28)
                memset(x0_28, 0, x8_25 - x0_28)
            
            *(arg1 + 0x18) = 0
            int64_t i_18 = *(arg1 + 0x50)
            void* result = result_1
            var_78 = 0
            
            if (i_18 != 0)
                void* result_3 = result
                char* x9_15 = x1 + x26_1
                int64_t i_17
                
                do
                    char x11_43 = *result_3
                    result_3 += 1
                    char x12_58 = *x9_15
                    x9_15 = &x9_15[1]
                    i_17 = i_18
                    i_18 -= 1
                    var_78 |= x12_58 ^ x11_43
                while (i_17 != 1)
            
            uint32_t x8_26 = zx.d(var_78)
            
            if (((x8_26 - 1) & not.d(x8_26) & 0x80) != 0)
                int64_t x8_28 = *arg2
                int64_t x9_17 = x26_1 + entry_x2
                int64_t x10_17 = *(arg2 + 8) - x8_28
                
                if (x9_17 u> x10_17)
                    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
                    result = result_1
                else if (x9_17 u< x10_17)
                    *(arg2 + 8) = x8_28 + x9_17
                
                if (result == 0)
                    return result
                
                void* result_2 = result
                return Botan::deallocate_memory(result, var_80_1 - result, 1)

void** x0_31 = __cxa_allocate_exception(0x20)
char var_a8
__builtin_strncpy(&var_a8, "(OCB tag check failed", 0x16)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Invalid authentication tag: ", &var_a8)
*x0_31 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_31[1])

if ((zx.d(var_78) & 1) != 0)
    operator delete(var_68)

*x0_31 = _vtable_for_Botan::Invalid_Authentication_Tag + 0x10
__cxa_throw(x0_31, _typeinfo_for_Botan::Invalid_Authentication_Tag, Botan::Exception::~Exception)
noreturn
