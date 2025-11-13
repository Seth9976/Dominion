// 函数: _ZN5Botan14CBC_Decryption7processEPhm
// 地址: 0xcf0048
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x18) == *(arg1 + 0x20))
    Botan::throw_invalid_state("state().empty() == false", "process", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
else
    size_t x22_1 = *(arg1 + 0x30)
    int64_t entry_result
    uint64_t x25_1 = entry_result u/ x22_1
    
    if (entry_result u% x22_1 == 0)
        if (x22_1 u> entry_result)
            return entry_result
        
        int64_t x26_1 = x22_1 & 0xffffffffffffffe0
        int64_t x8_4 = x22_1 & 0x1f
        int64_t x9_2 = x22_1 & 7
        int64_t i_19 = x8_4 - x9_2
        int64_t i_18 = (((x26_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        uint64_t x21_1 = arg2
        
        while (true)
            int64_t* x0_1 = *(arg1 + 8)
            int64_t x2 = *(arg1 + 0x38)
            size_t x10_2 = x25_1 * x22_1
            size_t x19_1 = *(arg1 + 0x40) - x2
            size_t x23_1
            
            x23_1 = x19_1 u< x10_2 ? x19_1 : x10_2
            
            uint64_t x24_1 = x23_1 u/ x22_1
            int128_t v0_1
            int128_t v1_1
            int128_t v2_1
            int128_t v3_1
            int128_t v4_1
            int128_t v5_1
            int128_t v6_1
            int128_t v7_1
            v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                (*(*x0_1 + 0x50))(x0_1, x21_1, x2, x24_1)
            void* x9_5 = *(arg1 + 0x38)
            void* x8_10 = *(arg1 + 0x18)
            
            if (x26_1 != 0)
                int64_t x10_3 = 0
                
                if (x26_1 == 0x20 || x9_5 + 0x18 + x26_1 - 0x20 u< x9_5 + 0x18
                        || x9_5 + 0x10 + x26_1 - 0x20 u< x9_5 + 0x10
                        || x9_5 + 8 + x26_1 - 0x20 u< x9_5 + 8 || x9_5 + x26_1 - 0x20 u< x9_5)
                    goto label_cf0214
                
                if (x9_5 u>= x8_10 + x26_1 || x8_10 u>= x9_5 + x26_1)
                    int64_t i_10 = i_18
                    void* x11_3 = x8_10
                    void* x12_3 = x9_5
                    int64_t i
                    
                    do
                        v0_1.q = *x12_3
                        v1_1.q = *(x12_3 + 8)
                        v2_1.q = *(x12_3 + 0x10)
                        v3_1.q = *(x12_3 + 0x18)
                        v0_1:8.q = *(x12_3 + 0x20)
                        v1_1:8.q = *(x12_3 + 0x28)
                        v2_1:8.q = *(x12_3 + 0x30)
                        v3_1:8.q = *(x12_3 + 0x38)
                        v4_1.q = *x11_3
                        v5_1.q = *(x11_3 + 8)
                        v6_1.q = *(x11_3 + 0x10)
                        v7_1.q = *(x11_3 + 0x18)
                        v4_1:8.q = *(x11_3 + 0x20)
                        v5_1:8.q = *(x11_3 + 0x28)
                        v6_1:8.q = *(x11_3 + 0x30)
                        v7_1:8.q = *(x11_3 + 0x38)
                        x11_3 += 0x40
                        i = i_10
                        i_10 -= 2
                        int128_t v16_1 = v4_1 ^ v0_1
                        int128_t v17_1 = v5_1 ^ v1_1
                        int128_t v18_1 = v6_1 ^ v2_1
                        int128_t v19_1 = v7_1 ^ v3_1
                        *x12_3 = v16_1.q
                        *(x12_3 + 8) = v17_1.q
                        *(x12_3 + 0x10) = v18_1.q
                        *(x12_3 + 0x18) = v19_1.q
                        *(x12_3 + 0x20) = v16_1:8.q
                        *(x12_3 + 0x28) = v17_1:8.q
                        *(x12_3 + 0x30) = v18_1:8.q
                        *(x12_3 + 0x38) = v19_1:8.q
                        x12_3 += 0x40
                    while (i != 2)
                    x10_3 = i_18 << 5
                    
                    if (((x26_1 - 0x20) u>> 5) + 1 != i_18)
                        goto label_cf0214
                else
                    x10_3 = 0
                label_cf0214:
                    int64_t i_12 = neg.q(x26_1) + x10_3
                    void* x10_7 = x8_10 + x10_3 + 0x10
                    void* x12_5 = x9_5 + x10_3 + 0x10
                    int64_t i_1
                    
                    do
                        v2_1 = *(x10_7 - 0x10)
                        v3_1 = *x10_7
                        i_1 = i_12
                        i_12 += 0x20
                        x10_7 += 0x20
                        v1_1 = v3_1 ^ *x12_5
                        *(x12_5 - 0x10) ^= v2_1
                        *x12_5 = v1_1
                        x12_5 += 0x20
                    while (i_1 != -0x20)
            
            if (x22_1 != x26_1)
                int64_t x12_6 = x26_1
                
                if (x8_4 u< 8)
                label_cf02a8:
                    int64_t i_11 = x22_1 - x12_6
                    void* x9_6 = x9_5 + x12_6
                    void* x8_11 = x8_10 + x12_6
                    int64_t i_2
                    
                    do
                        char x11_7 = *x8_11
                        x8_11 += 1
                        i_2 = i_11
                        i_11 -= 1
                        *x9_6 ^= x11_7
                        x9_6 += 1
                    while (i_2 != 1)
                else
                    int64_t* x10_9 = x9_5 + x26_1
                    void* x11_6 = x8_10 + x26_1
                    
                    if (x10_9 u< x8_10 + x22_1)
                        x12_6 = x26_1
                    
                    if (x10_9 u< x8_10 + x22_1 && x11_6 u< x9_5 + x22_1)
                        goto label_cf02a8
                    
                    int64_t i_14 = i_19
                    int64_t i_3
                    
                    do
                        v0_1.q = *x11_6
                        x11_6 += 8
                        v1_1.q = *x10_9
                        i_3 = i_14
                        i_14 -= 8
                        *x10_9 = (v1_1 ^ v0_1).q
                        x10_9 = &x10_9[1]
                    while (i_3 != 8)
                    x12_6 = x26_1 + i_19
                    
                    if (x9_2 != 0)
                        goto label_cf02a8
            
            void* x9_7 = *(arg1 + 0x38)
            int64_t x8_12 = x23_1 - x22_1
            void* x10_11 = x8_12 & 0xffffffffffffffe0
            
            if (x10_11 != 0)
                int64_t x11_9 = 0
                
                if (x10_11 == 0x20)
                    goto label_cf03a4
                
                void* x15_2 = x9_7 + x22_1 + 0x10
                void* x12_9 = x9_7 + x22_1
                void* x14_3 = x9_7 + x22_1 + 0x18
                void* x17_1 = x9_7 + x22_1 + 8
                
                if (x14_3 + x10_11 - 0x20 u< x14_3 || x15_2 + x10_11 - 0x20 u< x15_2
                        || x17_1 + x10_11 - 0x20 u< x17_1 || x12_9 + x10_11 - 0x20 u< x12_9)
                    goto label_cf03a4
                
                if (x12_9 u>= x21_1 + x10_11 || x21_1 u>= x10_11 + x9_7 + x22_1 + 0x20 - 0x20)
                    int64_t i_21 = (((x10_11 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                    x11_9 = i_21 << 5
                    int64_t i_16 = i_21
                    uint64_t x16_3 = x21_1
                    int64_t i_4
                    
                    do
                        v0_1.q = *x12_9
                        v1_1.q = *(x12_9 + 8)
                        v2_1.q = *(x12_9 + 0x10)
                        v3_1.q = *(x12_9 + 0x18)
                        v0_1:8.q = *(x12_9 + 0x20)
                        v1_1:8.q = *(x12_9 + 0x28)
                        v2_1:8.q = *(x12_9 + 0x30)
                        v3_1:8.q = *(x12_9 + 0x38)
                        v4_1.q = *x16_3
                        v5_1.q = *(x16_3 + 8)
                        v6_1.q = *(x16_3 + 0x10)
                        v7_1.q = *(x16_3 + 0x18)
                        v4_1:8.q = *(x16_3 + 0x20)
                        v5_1:8.q = *(x16_3 + 0x28)
                        v6_1:8.q = *(x16_3 + 0x30)
                        v7_1:8.q = *(x16_3 + 0x38)
                        x16_3 += 0x40
                        i_4 = i_16
                        i_16 -= 2
                        int128_t v16_2 = v4_1 ^ v0_1
                        int128_t v17_2 = v5_1 ^ v1_1
                        int128_t v18_2 = v6_1 ^ v2_1
                        int128_t v19_2 = v7_1 ^ v3_1
                        *x12_9 = v16_2.q
                        *(x12_9 + 8) = v17_2.q
                        *(x12_9 + 0x10) = v18_2.q
                        *(x12_9 + 0x18) = v19_2.q
                        *(x12_9 + 0x20) = v16_2:8.q
                        *(x12_9 + 0x28) = v17_2:8.q
                        *(x12_9 + 0x30) = v18_2:8.q
                        *(x12_9 + 0x38) = v19_2:8.q
                        x12_9 += 0x40
                    while (i_4 != 2)
                    
                    if (((x10_11 - 0x20) u>> 5) + 1 != i_21)
                        goto label_cf03a4
                else
                    x11_9 = 0
                label_cf03a4:
                    void* i_15 = x11_9 - x10_11
                    void* x11_16 = x9_7 + x22_1 + 0x10 + x11_9
                    void* x13_6 = x21_1 + x11_9 + 0x10
                    void* i_5
                    
                    do
                        v2_1 = *(x13_6 - 0x10)
                        v3_1 = *x13_6
                        i_5 = i_15
                        i_15 += 0x20
                        x13_6 += 0x20
                        v1_1 = v3_1 ^ *x11_16
                        *(x11_16 - 0x10) ^= v2_1
                        *x11_16 = v1_1
                        x11_16 += 0x20
                    while (i_5 != -0x20)
            
            if (x10_11 != x8_12)
                void* x12_10 = x8_12 - x10_11
                
                if (x12_10 u< 8 || (x9_7 + x22_1 + x10_11 u< x21_1 + neg.q(x22_1) + x23_1
                        && x21_1 + x10_11 u< x9_7 + x23_1))
                    goto label_cf04cc
                
                void* i_20
                
                if (x12_10 u>= 0x20)
                    i_20 = x12_10 & 0xffffffffffffffe0
                    void* x13_12 = x21_1 + x10_11 + 0x10
                    void* x14_7 = x9_7 + x22_1 + 0x10 + x10_11
                    void* i_17 = i_20
                    void* i_6
                    
                    do
                        v0_1 = *(x13_12 - 0x10)
                        v1_1 = *x13_12
                        i_6 = i_17
                        i_17 -= 0x20
                        x13_12 += 0x20
                        v1_1 ^= *x14_7
                        *(x14_7 - 0x10) ^= v0_1
                        *x14_7 = v1_1
                        x14_7 += 0x20
                    while (i_6 != 0x20)
                    
                    if (x12_10 != i_20)
                        if ((x12_10 & 0x18) != 0)
                            goto label_cf0470
                        
                        x10_11 += i_20
                    label_cf04cc:
                        void* i_9 = x22_1 + x10_11 - x23_1
                        void* x11_22 = x9_7 + x22_1 + x10_11
                        void* x10_12 = x21_1 + x10_11
                        void* i_7
                        
                        do
                            char x12_13 = *x10_12
                            x10_12 += 1
                            i_7 = i_9
                            i_9 += 1
                            *x11_22 ^= x12_13
                            x11_22 += 1
                        while (i_7 u< -1)
                else
                    i_20 = nullptr
                label_cf0470:
                    size_t x13_13 = x22_1 * x25_1
                    size_t x13_14
                    
                    x13_14 = x13_13 u< x19_1 ? x13_13 : x19_1
                    
                    void* x14_8 = i_20 + x10_11
                    void* x13_15 = x13_14 - x22_1
                    void* x12_11 = x21_1 + x14_8
                    void* x14_9 = x9_7 + x22_1 + x14_8
                    void* x15_5 = x13_15 & 0x1f
                    void* x13_16 = x13_15 & 7
                    x10_11 += x15_5 - x13_16
                    void* i_13 = i_20 + x13_16 - x15_5
                    void* i_8
                    
                    do
                        v0_1.q = *x12_11
                        x12_11 += 8
                        v1_1.q = *x14_9
                        i_8 = i_13
                        i_13 += 8
                        *x14_9 = (v1_1 ^ v0_1).q
                        x14_9 += 8
                    while (i_8 != -8)
                    
                    if (x13_16 != 0)
                        goto label_cf04cc
            
            if (x22_1 != 0)
                if (x21_1 == 0)
                    break
                
                int64_t x0_3 = *(arg1 + 0x18)
                
                if (x0_3 == 0)
                    break
                
                memmove(x0_3, x21_1 + x8_12, x22_1)
            
            if (x23_1 != 0)
                if (x21_1 == 0)
                    break
                
                int64_t x1_2 = *(arg1 + 0x38)
                
                if (x1_2 == 0)
                    break
                
                memmove(x21_1, x1_2, x23_1)
            
            uint64_t temp4_1 = x25_1
            x25_1 -= x24_1
            x21_1 += x23_1
            
            if (temp4_1 == x24_1)
                return entry_result
        
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        Botan::throw_invalid_state("state().empty() == false", "process", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0_5
uint64_t x1_3
x0_5, x1_3 = Botan::assertion_failure("sz % BS == 0", "Input is full blocks", "process", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4e22)
return Botan::CBC_Decryption::finish(x0_5, x1_3) __tailcall
