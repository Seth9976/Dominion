// 函数: _ZN5Botan14CFB_Decryption7processEPhm
// 地址: 0xcff36c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9 = *(arg1 + 0x20)

if (x9 == *(arg1 + 0x28))
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
else if (*(arg1 + 8) != *(arg1 + 0x10))
    void* x10_2 = *(arg1 + 0x38)
    int64_t x26_1 = *(arg1 + 0x50)
    uint64_t x28_1 = arg2
    void* result
    void* entry_result
    void* entry_result_2
    int128_t v0
    int128_t v1
    int128_t v2
    int128_t v3
    
    if (x10_2 == 0)
        entry_result_2 = entry_result
        result = entry_result
        
        if (entry_result_2 u< x26_1)
        label_cff4e8:
            
            if (entry_result_2 != 0)
                void* x8_7 = *(arg1 + 0x20)
                void* i_12
                
                if (entry_result_2 u< 8
                        || (x8_7 u< x28_1 + entry_result_2 && x28_1 u< x8_7 + entry_result_2))
                    i_12 = nullptr
                label_cff514:
                    int64_t i_6 = entry_result_2 - i_12
                    void* x11_5 = x28_1 + i_12
                    char* x8_8 = x8_7 + i_12
                    int64_t i
                    
                    do
                        char x12_2 = *x8_8
                        i = i_6
                        i_6 -= 1
                        *x8_8 = *x11_5
                        x8_8 = &x8_8[1]
                        *x11_5 ^= x12_2
                        x11_5 += 1
                    while (i != 1)
                else if (entry_result_2 u>= 0x20)
                    i_12 = entry_result_2 & 0xffffffffffffffe0
                    void* x10_15 = x8_7 + 0x10
                    int128_t* x11_10 = x28_1 + 0x10
                    void* i_8 = i_12
                    void* i_1
                    
                    do
                        v1 = *x11_10
                        v2 = *(x10_15 - 0x10)
                        v3 = *x10_15
                        i_1 = i_8
                        i_8 -= 0x20
                        *(x10_15 - 0x10) = x11_10[-1]
                        *x10_15 = v1
                        x10_15 += 0x20
                        v1 = *x11_10 ^ v3
                        x11_10[-1] ^= v2
                        *x11_10 = v1
                        x11_10 = &x11_10[2]
                    while (i_1 != 0x20)
                    
                    if (entry_result_2 != i_12)
                        if ((entry_result_2 & 0x18) == 0)
                            goto label_cff514
                        
                        goto label_cff810
                else
                    i_12 = nullptr
                label_cff810:
                    void* i_14 = i_12
                    i_12 = entry_result_2 & 0xfffffffffffffff8
                    void* x10_16 = x8_7 + i_14
                    void* x11_11 = x28_1 + i_14
                    void* i_9 = i_14 - i_12
                    void* i_2
                    
                    do
                        v0.q = *x11_11
                        v1.q = *x10_16
                        i_2 = i_9
                        i_9 += 8
                        *x10_16 = v0.q
                        x10_16 += 8
                        v0.q = *x11_11
                        *x11_11 = (v0 ^ v1).q
                        x11_11 += 8
                    while (i_2 != -8)
                    
                    if (entry_result_2 != i_12)
                        goto label_cff514
                *(arg1 + 0x38) += entry_result_2
            
            return result
        
    label_cff56c:
        
        if (x26_1 != 0)
            int64_t fp_1 = 0
            int64_t x20_2 = x26_1 & 0xffffffffffffffe0
            int64_t x21_2 = x26_1 & 0xfffffffffffffff8
            uint64_t var_68_1 = x28_1
            
            do
                char* x8_16 = *(arg1 + 0x20)
                int64_t x9_10
                
                if (x26_1 u>= 8)
                    int64_t x9_11 = x26_1 * fp_1
                    
                    if (x8_16 u< var_68_1 + x26_1 + x9_11 && var_68_1 + x9_11 u< &x8_16[x26_1])
                        x9_10 = 0
                        goto label_cff6cc
                    
                    int64_t x10_10
                    
                    if (x26_1 u>= 0x20)
                        int64_t x9_13 = 0
                        
                        do
                            int128_t* x11_7 = x28_1 + x9_13
                            v1 = x11_7[1]
                            void* x10_11 = &x8_16[x9_13]
                            v2 = *x10_11
                            v3 = *(x10_11 + 0x10)
                            x9_13 += 0x20
                            *x10_11 = *x11_7
                            *(x10_11 + 0x10) = v1
                            v1 = x11_7[1] ^ v3
                            *x11_7 ^= v2
                            x11_7[1] = v1
                        while (x20_2 != x9_13)
                        
                        if (x26_1 != x20_2)
                            x10_10 = x20_2
                            x9_10 = x20_2
                            
                            if ((x26_1 & 0x18) == 0)
                                goto label_cff6cc
                            
                            goto label_cff69c
                    else
                        x10_10 = 0
                    label_cff69c:
                        
                        do
                            v0.q = *(x28_1 + x10_10)
                            v1.q = *(x8_16 + x10_10)
                            *(x8_16 + x10_10) = v0.q
                            v0.q = *(x28_1 + x10_10)
                            *(x28_1 + x10_10) = (v0 ^ v1).q
                            x10_10 += 8
                        while (x21_2 != x10_10)
                        
                        x9_10 = x21_2
                        
                        if (x26_1 != x21_2)
                            goto label_cff6cc
                else
                    x9_10 = 0
                label_cff6cc:
                    
                    do
                        char x11_9 = x8_16[x9_10]
                        x8_16[x9_10] = *(x28_1 + x9_10)
                        *(x28_1 + x9_10) ^= x11_9
                        x9_10 += 1
                    while (x26_1 != x9_10)
                int64_t x8_17 = *(arg1 + 0x48)
                size_t x24_4 = *(arg1 + 0x50)
                size_t x25_3 = x8_17 - x24_4
                
                if (x8_17 != x24_4)
                    int64_t x0_9 = *(arg1 + 8)
                    
                    if (x0_9 == 0)
                        goto label_cff908_2
                    
                    memmove(x0_9, x0_9 + x24_4, x25_3)
                
                int64_t x23_2 = *(arg1 + 8)
                int64_t x22_2 = *(arg1 + 0x20)
                
                if (x24_4 != 0)
                    if (x22_2 == 0)
                        goto label_cff908_2
                    
                    memmove(x23_2 + x25_3, x22_2, x24_4)
                    x23_2 = *(arg1 + 8)
                    x22_2 = *(arg1 + 0x20)
                
                int64_t* x24_3 = *(arg1 + 0x40)
                entry_result_2 -= x26_1
                x28_1 += x26_1
                v0, v1, v2, v3 = (*(*x24_3 + 0x48))(x24_3, x23_2, x22_2, 
                    (*(arg1 + 0x10) - x23_2) u/ (*(*x24_3 + 0x30))(x24_3))
                fp_1 += 1
                *(arg1 + 0x38) = 0
            while (entry_result_2 u>= x26_1)
            
            goto label_cff4e8
        
        while (true)
            int64_t x8_22 = *(arg1 + 0x48)
            size_t x22_4 = *(arg1 + 0x50)
            size_t x23_4 = x8_22 - x22_4
            
            if (x8_22 != x22_4)
                int64_t x0_14 = *(arg1 + 8)
                
                if (x0_14 == 0)
                    break
                
                memmove(x0_14, x0_14 + x22_4, x23_4)
            
            int64_t x21_3 = *(arg1 + 8)
            int64_t x20_3 = *(arg1 + 0x20)
            
            if (x22_4 != 0)
                if (x20_3 == 0)
                    break
                
                memmove(x21_3 + x23_4, x20_3, x22_4)
                x21_3 = *(arg1 + 8)
                x20_3 = *(arg1 + 0x20)
            
            int64_t* x22_3 = *(arg1 + 0x40)
            (*(*x22_3 + 0x48))(x22_3, x21_3, x20_3, 
                (*(arg1 + 0x10) - x21_3) u/ (*(*x22_3 + 0x30))(x22_3))
            *(arg1 + 0x38) = 0
        
    label_cff908:
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    else
        void* entry_result_3 = x26_1 - x10_2
        void* entry_result_1
        
        entry_result_1 = entry_result_3 u< entry_result ? entry_result_3 : entry_result
        
        if (entry_result_1 != 0)
            void* i_13
            
            if (entry_result_1 u< 8 ||
                    (x9 + x10_2 u< x28_1 + entry_result_1 && x9 + x10_2 + entry_result_1 u> x28_1))
                i_13 = nullptr
            label_cff3f8:
                void* i_7 = entry_result_1 - i_13
                char* x13_1 = x28_1 + i_13
                char* x9_1 = x9 + i_13 + x10_2
                void* i_3
                
                do
                    char x11_4 = *x9_1
                    i_3 = i_7
                    i_7 -= 1
                    *x9_1 = *x13_1
                    x9_1 = &x9_1[1]
                    *x13_1 ^= x11_4
                    x13_1 = &x13_1[1]
                while (i_3 != 1)
            else if (entry_result_1 u>= 0x20)
                i_13 = entry_result_1 & 0xffffffffffffffe0
                void* x12_4 = x10_2 + x9 + 0x10
                int128_t* x13_2 = x28_1 + 0x10
                void* i_10 = i_13
                void* i_4
                
                do
                    v1 = *x13_2
                    v2 = *(x12_4 - 0x10)
                    v3 = *x12_4
                    i_4 = i_10
                    i_10 -= 0x20
                    *(x12_4 - 0x10) = x13_2[-1]
                    *x12_4 = v1
                    x12_4 += 0x20
                    v1 = *x13_2 ^ v3
                    x13_2[-1] ^= v2
                    *x13_2 = v1
                    x13_2 = &x13_2[2]
                while (i_4 != 0x20)
                
                if (entry_result_1 != i_13)
                    if ((entry_result_1 & 0x18) == 0)
                        goto label_cff3f8
                    
                    goto label_cff8a0
            else
                i_13 = nullptr
            label_cff8a0:
                void* i_15 = i_13
                i_13 = entry_result_1 & 0xfffffffffffffff8
                void* x12_5 = x28_1 + i_15
                void* x13_4 = x9 + i_15 + x10_2
                void* i_11 = i_15 - i_13
                void* i_5
                
                do
                    v0.q = *x12_5
                    v1.q = *x13_4
                    i_5 = i_11
                    i_11 += 8
                    *x13_4 = v0.q
                    x13_4 += 8
                    v0.q = *x12_5
                    *x12_5 = (v0 ^ v1).q
                    x12_5 += 8
                while (i_5 != -8)
                
                if (entry_result_1 != i_13)
                    goto label_cff3f8
            x10_2 = *(arg1 + 0x38)
        
        void* x9_2 = x10_2 + entry_result_1
        entry_result_2 = entry_result - entry_result_1
        x28_1 += entry_result_1
        *(arg1 + 0x38) = x9_2
        
        if (x9_2 != x26_1)
            goto label_cff4c8
        
        int64_t x8_2 = *(arg1 + 0x48)
        size_t x24_1 = *(arg1 + 0x50)
        size_t x25_1 = x8_2 - x24_1
        
        if (x8_2 == x24_1)
            goto label_cff460
        
        int64_t x0 = *(arg1 + 8)
        
        if (x0 == 0)
        label_cff908_1:
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        else
            memmove(x0, x0 + x24_1, x25_1)
        label_cff460:
            int64_t x23_1 = *(arg1 + 8)
            int64_t x22_1 = *(arg1 + 0x20)
            
            if (x24_1 == 0)
                goto label_cff488
            
            if (x22_1 != 0)
                memmove(x23_1 + x25_1, x22_1, x24_1)
                x23_1 = *(arg1 + 8)
                x22_1 = *(arg1 + 0x20)
            label_cff488:
                int64_t* x24_2 = *(arg1 + 0x40)
                v0, v1, v2, v3 = (*(*x24_2 + 0x48))(x24_2, x23_1, x22_1, 
                    (*(arg1 + 0x10) - x23_1) u/ (*(*x24_2 + 0x30))(x24_2))
                *(arg1 + 0x38) = 0
            label_cff4c8:
                result = entry_result
                
                if (entry_result_2 u>= x26_1)
                    goto label_cff56c
                
                goto label_cff4e8
            
        label_cff908_2:
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    Botan::SymmetricAlgorithm::throw_key_not_set_error()

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0_17
uint64_t x1_9
x0_17, x1_9 = Botan::throw_invalid_state("m_state.empty() == false", "process", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
return Botan::CFB_Decryption::finish(x0_17, x1_9) __tailcall
