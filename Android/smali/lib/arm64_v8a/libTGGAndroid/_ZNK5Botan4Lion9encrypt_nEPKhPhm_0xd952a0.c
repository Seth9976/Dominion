// 函数: _ZNK5Botan4Lion9encrypt_nEPKhPhm
// 地址: 0xd952a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x20) == *(arg1 + 0x28))
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
else
    uint64_t x21_1 = arg3
    uint8_t* x22_1 = arg2
    uint64_t x0_1 = (***(arg1 + 0x10))()
    int64_t x19_1 = *(arg1 + 8)
    int64_t* x8_3 = *(arg1 + 0x10)
    int64_t result
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    int128_t v4_1
    int128_t v5_1
    int128_t v6_1
    int128_t v7_1
    result, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = (**x8_3)(x8_3)
    int64_t result_1 = result
    void* var_78_1
    __builtin_memset(&var_78_1, 0, 0x18)
    void* var_68_1
    int64_t entry_x3
    void* x24
    
    if (x0_1 == 0)
        x24 = nullptr
        void* var_70_2
        
        if (entry_x3 == 0)
        label_d95348:
            
            if (x24 == 0)
                return result
            
            var_70_2 = x24
            return Botan::deallocate_memory(x24, var_68_1 - x24, 1)
        
    label_d9535c:
        int64_t x28_1 = x0_1 & 0xffffffffffffffe0
        int64_t x10_1 = x0_1 & 0x1f
        int64_t x12_1 = x0_1 & 7
        int64_t x25_1 = x19_1 - result_1
        void* x8_6 = x24 + x0_1
        int64_t i_25 = x10_1 - x12_1
        int64_t x11_2 = x28_1 + i_25
        int32_t x8_10 = (x24 + 0x10 + x28_1 - 0x20 u< x24 + 0x10 ? 1 : 0)
            | (x24 + 0x18 + x28_1 - 0x20 u< x24 + 0x18 ? 1 : 0)
            | (x24 + 8 + x28_1 - 0x20 u< x24 + 8 ? 1 : 0)
        int64_t i_24 = (((x28_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        int32_t x8_11 = x8_10 | (x24 + x28_1 - 0x20 u< x24 ? 1 : 0)
        int64_t x27_1 = 0
        void* fp_1 = x24 + x28_1
        int64_t x10_4 = i_24 << 5
        int64_t x8_12 = neg.q(x28_1)
        
        do
            void* x8_13 = *(arg1 + 0x20)
            
            if (x28_1 != 0)
                int64_t x11_4 = 0
                
                if ((((x28_1 == 0x20 ? 1 : 0) | x8_11) & 1) == 0
                        && ((x24 u< &x22_1[x28_1] ? 1 : 0) & (x22_1 u< fp_1 ? 1 : 0) & 1) == 0
                        && ((x24 u< x8_13 + x28_1 ? 1 : 0) & (x8_13 u< fp_1 ? 1 : 0) & 1) == 0)
                    int64_t i_16 = i_24
                    void* x10_17 = x8_13
                    uint8_t* x11_10 = x22_1
                    void* x12_12 = x24
                    int64_t i
                    
                    do
                        v0_1.q = *x11_10
                        v1_1.q = *(x11_10 + 8)
                        v2_1.q = *(x11_10 + 0x10)
                        v3_1.q = *(x11_10 + 0x18)
                        v0_1:8.q = *(x11_10 + 0x20)
                        v1_1:8.q = *(x11_10 + 0x28)
                        v2_1:8.q = *(x11_10 + 0x30)
                        v3_1:8.q = *(x11_10 + 0x38)
                        x11_10 = &x11_10[0x40]
                        v4_1.q = *x10_17
                        v5_1.q = *(x10_17 + 8)
                        v6_1.q = *(x10_17 + 0x10)
                        v7_1.q = *(x10_17 + 0x18)
                        v4_1:8.q = *(x10_17 + 0x20)
                        v5_1:8.q = *(x10_17 + 0x28)
                        v6_1:8.q = *(x10_17 + 0x30)
                        v7_1:8.q = *(x10_17 + 0x38)
                        x10_17 += 0x40
                        i = i_16
                        i_16 -= 2
                        int128_t v16_1 = v4_1 ^ v0_1
                        int128_t v17_1 = v5_1 ^ v1_1
                        int128_t v18_1 = v6_1 ^ v2_1
                        int128_t v19_1 = v7_1 ^ v3_1
                        *x12_12 = v16_1.q
                        *(x12_12 + 8) = v17_1.q
                        *(x12_12 + 0x10) = v18_1.q
                        *(x12_12 + 0x18) = v19_1.q
                        *(x12_12 + 0x20) = v16_1:8.q
                        *(x12_12 + 0x28) = v17_1:8.q
                        *(x12_12 + 0x30) = v18_1:8.q
                        *(x12_12 + 0x38) = v19_1:8.q
                        x12_12 += 0x40
                    while (i != 2)
                    x11_4 = x10_4
                
                if ((((x28_1 == 0x20 ? 1 : 0) | x8_11) & 1) != 0
                        || ((x24 u< &x22_1[x28_1] ? 1 : 0) & (x22_1 u< fp_1 ? 1 : 0) & 1) != 0
                        || ((x24 u< x8_13 + x28_1 ? 1 : 0) & (x8_13 u< fp_1 ? 1 : 0) & 1) != 0
                        || ((x28_1 - 0x20) u>> 5) + 1 != i_24)
                    int64_t i_14 = x8_12 + x11_4
                    void* x10_7 = x24 + 0x10 + x11_4
                    void* x11_5 = &x22_1[x11_4 + 0x10]
                    void* x12_3 = x8_13 + x11_4 + 0x10
                    int64_t i_1
                    
                    do
                        v0_1 = *(x11_5 - 0x10)
                        v1_1 = *x11_5
                        v2_1 = *(x12_3 - 0x10)
                        v3_1 = *x12_3
                        i_1 = i_14
                        i_14 += 0x20
                        x11_5 += 0x20
                        x12_3 += 0x20
                        *(x10_7 - 0x10) = v2_1 ^ v0_1
                        *x10_7 = v3_1 ^ v1_1
                        x10_7 += 0x20
                    while (i_1 != -0x20)
            
            if (x0_1 != x28_1)
                int64_t x11_6 = x28_1
                
                if (x10_1 u< 8)
                label_d954f4:
                    int64_t i_15 = x0_1 - x11_6
                    void* x10_12 = x24 + x11_6
                    void* x8_14 = x8_13 + x11_6
                    void* x11_8 = &x22_1[x11_6]
                    int64_t i_2
                    
                    do
                        char x12_7 = *x11_8
                        x11_8 += 1
                        char x13_3 = *x8_14
                        x8_14 += 1
                        i_2 = i_15
                        i_15 -= 1
                        *x10_12 = x13_3 ^ x12_7
                        x10_12 += 1
                    while (i_2 != 1)
                else
                    x11_6 = x28_1
                    
                    if (((fp_1 u< &x22_1[x0_1] ? 1 : 0) & (&x22_1[x28_1] u< x8_6 ? 1 : 0) & 1) != 0)
                        goto label_d954f4
                    
                    x11_6 = x28_1
                    
                    if (((fp_1 u< x8_13 + x0_1 ? 1 : 0) & (x8_13 + x28_1 u< x8_6 ? 1 : 0) & 1) != 0)
                        goto label_d954f4
                    
                    int64_t i_22 = i_25
                    void* x9_14 = &x22_1[x28_1]
                    void* x10_11 = x8_13 + x28_1
                    void* x12_6 = fp_1
                    int64_t i_3
                    
                    do
                        v0_1.q = *x9_14
                        x9_14 += 8
                        v1_1.q = *x10_11
                        x10_11 += 8
                        i_3 = i_22
                        i_22 -= 8
                        *x12_6 = (v1_1 ^ v0_1).q
                        x12_6 += 8
                    while (i_3 != 8)
                    x11_6 = x11_2
                    
                    if (x12_1 != 0)
                        goto label_d954f4
            
            Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x18), x24)
            int64_t* x0_6 = *(arg1 + 0x18)
            uint64_t x26_2 = x21_1 + x0_1
            (*(*x0_6 + 0x30))(x0_6, &x22_1[x0_1], x26_2, x25_1)
            int64_t* x0_7 = *(arg1 + 0x10)
            (*(*x0_7 + 0x18))(x0_7, x26_2, x25_1)
            int64_t* x0_8 = *(arg1 + 0x10)
            int128_t v0_2
            int128_t v1_2
            int128_t v2_2
            int128_t v3_2
            int128_t v4_2
            int128_t v5_2
            int128_t v6_2
            int128_t v7_2
            v0_2, v1_2, v2_2, v3_2, v4_2, v5_2, v6_2, v7_2 = (*(*x0_8 + 0x20))(x0_8, x24)
            
            if (x28_1 != 0)
                int64_t x8_21 = 0
                
                if (x28_1 == 0x20 || x21_1 + 0x10 + x28_1 - 0x20 u< x21_1 + 0x10
                        || x21_1 + 0x18 + x28_1 - 0x20 u< x21_1 + 0x18
                        || x21_1 + 8 + x28_1 - 0x20 u< x21_1 + 8 || x21_1 + x28_1 - 0x20 u< x21_1)
                    goto label_d956b4
                
                if (x21_1 u>= &x22_1[x28_1] || x22_1 u>= x21_1 + x28_1)
                    int64_t i_12 = i_24
                    void* x9_23 = x24
                    uint8_t* x10_19 = x22_1
                    uint64_t x11_11 = x21_1
                    int64_t i_4
                    
                    do
                        v0_2.q = *x10_19
                        v1_2.q = *(x10_19 + 8)
                        v2_2.q = *(x10_19 + 0x10)
                        v3_2.q = *(x10_19 + 0x18)
                        v0_2:8.q = *(x10_19 + 0x20)
                        v1_2:8.q = *(x10_19 + 0x28)
                        v2_2:8.q = *(x10_19 + 0x30)
                        v3_2:8.q = *(x10_19 + 0x38)
                        x10_19 = &x10_19[0x40]
                        v4_2.q = *x9_23
                        v5_2.q = *(x9_23 + 8)
                        v6_2.q = *(x9_23 + 0x10)
                        v7_2.q = *(x9_23 + 0x18)
                        v4_2:8.q = *(x9_23 + 0x20)
                        v5_2:8.q = *(x9_23 + 0x28)
                        v6_2:8.q = *(x9_23 + 0x30)
                        v7_2:8.q = *(x9_23 + 0x38)
                        x9_23 += 0x40
                        i_4 = i_12
                        i_12 -= 2
                        int128_t v16_2 = v4_2 ^ v0_2
                        int128_t v17_2 = v5_2 ^ v1_2
                        int128_t v18_2 = v6_2 ^ v2_2
                        int128_t v19_2 = v7_2 ^ v3_2
                        *x11_11 = v16_2.q
                        *(x11_11 + 8) = v17_2.q
                        *(x11_11 + 0x10) = v18_2.q
                        *(x11_11 + 0x18) = v19_2.q
                        *(x11_11 + 0x20) = v16_2:8.q
                        *(x11_11 + 0x28) = v17_2:8.q
                        *(x11_11 + 0x30) = v18_2:8.q
                        *(x11_11 + 0x38) = v19_2:8.q
                        x11_11 += 0x40
                    while (i_4 != 2)
                    x8_21 = x10_4
                    
                    if (((x28_1 - 0x20) u>> 5) + 1 != i_24)
                        goto label_d956b4
                else
                    x8_21 = 0
                label_d956b4:
                    void* x10_21 = &x22_1[x8_21 + 0x10]
                    int64_t i_17 = x8_12 + x8_21
                    void* x11_13 = x21_1 + x8_21 + 0x10
                    void* x8_25 = x24 + 0x10 + x8_21
                    int64_t i_5
                    
                    do
                        v0_2 = *(x10_21 - 0x10)
                        v1_2 = *x10_21
                        v2_2 = *(x8_25 - 0x10)
                        v3_2 = *x8_25
                        i_5 = i_17
                        i_17 += 0x20
                        x10_21 += 0x20
                        x8_25 += 0x20
                        *(x11_13 - 0x10) = v2_2 ^ v0_2
                        *x11_13 = v3_2 ^ v1_2
                        x11_13 += 0x20
                    while (i_5 != -0x20)
            
            if (x0_1 != x28_1)
                int64_t x11_14 = x28_1
                
                if (x10_1 u< 8)
                label_d95754:
                    int64_t i_13 = x0_1 - x11_14
                    char* x9_28 = x21_1 + x11_14
                    void* x10_23 = x24 + x11_14
                    void* x11_16 = &x22_1[x11_14]
                    int64_t i_6
                    
                    do
                        char x12_14 = *x11_16
                        x11_16 += 1
                        char x13_5 = *x10_23
                        x10_23 += 1
                        i_6 = i_13
                        i_13 -= 1
                        *x9_28 = x13_5 ^ x12_14
                        x9_28 = &x9_28[1]
                    while (i_6 != 1)
                else
                    int64_t* x8_27 = x21_1 + x28_1
                    void* x9_27 = &x22_1[x28_1]
                    
                    if (x8_27 u< &x22_1[x0_1])
                        x11_14 = x28_1
                    
                    if (x8_27 u< &x22_1[x0_1] && x9_27 u< x21_1 + x0_1)
                        goto label_d95754
                    
                    int64_t i_21 = i_25
                    void* x11_15 = fp_1
                    int64_t i_7
                    
                    do
                        v0_2.q = *x9_27
                        x9_27 += 8
                        v1_2.q = *x11_15
                        x11_15 += 8
                        i_7 = i_21
                        i_21 -= 8
                        *x8_27 = (v1_2 ^ v0_2).q
                        x8_27 = &x8_27[1]
                    while (i_7 != 8)
                    x11_14 = x11_2
                    
                    if (x12_1 != 0)
                        goto label_d95754
            
            void* x8_29 = *(arg1 + 0x38)
            
            if (x28_1 != 0)
                int64_t x11_17 = 0
                
                if ((((x28_1 == 0x20 ? 1 : 0) | x8_11) & 1) == 0
                        && ((x24 u< x21_1 + x28_1 ? 1 : 0) & (x21_1 u< fp_1 ? 1 : 0) & 1) == 0
                        && ((x24 u< x8_29 + x28_1 ? 1 : 0) & (x8_29 u< fp_1 ? 1 : 0) & 1) == 0)
                    int64_t i_20 = i_24
                    void* x10_34 = x8_29
                    uint64_t x11_22 = x21_1
                    void* x12_25 = x24
                    int64_t i_8
                    
                    do
                        v0_2.q = *x11_22
                        v1_2.q = *(x11_22 + 8)
                        v2_2.q = *(x11_22 + 0x10)
                        v3_2.q = *(x11_22 + 0x18)
                        v0_2:8.q = *(x11_22 + 0x20)
                        v1_2:8.q = *(x11_22 + 0x28)
                        v2_2:8.q = *(x11_22 + 0x30)
                        v3_2:8.q = *(x11_22 + 0x38)
                        x11_22 += 0x40
                        v4_2.q = *x10_34
                        v5_2.q = *(x10_34 + 8)
                        v6_2.q = *(x10_34 + 0x10)
                        v7_2.q = *(x10_34 + 0x18)
                        v4_2:8.q = *(x10_34 + 0x20)
                        v5_2:8.q = *(x10_34 + 0x28)
                        v6_2:8.q = *(x10_34 + 0x30)
                        v7_2:8.q = *(x10_34 + 0x38)
                        x10_34 += 0x40
                        i_8 = i_20
                        i_20 -= 2
                        int128_t v16_3 = v4_2 ^ v0_2
                        int128_t v17_3 = v5_2 ^ v1_2
                        int128_t v18_3 = v6_2 ^ v2_2
                        int128_t v19_3 = v7_2 ^ v3_2
                        *x12_25 = v16_3.q
                        *(x12_25 + 8) = v17_3.q
                        *(x12_25 + 0x10) = v18_3.q
                        *(x12_25 + 0x18) = v19_3.q
                        *(x12_25 + 0x20) = v16_3:8.q
                        *(x12_25 + 0x28) = v17_3:8.q
                        *(x12_25 + 0x30) = v18_3:8.q
                        *(x12_25 + 0x38) = v19_3:8.q
                        x12_25 += 0x40
                    while (i_8 != 2)
                    x11_17 = x10_4
                
                if ((((x28_1 == 0x20 ? 1 : 0) | x8_11) & 1) != 0
                        || ((x24 u< x21_1 + x28_1 ? 1 : 0) & (x21_1 u< fp_1 ? 1 : 0) & 1) != 0
                        || ((x24 u< x8_29 + x28_1 ? 1 : 0) & (x8_29 u< fp_1 ? 1 : 0) & 1) != 0
                        || ((x28_1 - 0x20) u>> 5) + 1 != i_24)
                    int64_t i_18 = x8_12 + x11_17
                    void* x10_26 = x24 + 0x10 + x11_17
                    void* x11_18 = x21_1 + x11_17 + 0x10
                    void* x12_17 = x8_29 + x11_17 + 0x10
                    int64_t i_9
                    
                    do
                        v0_2 = *(x11_18 - 0x10)
                        v1_2 = *x11_18
                        v2_2 = *(x12_17 - 0x10)
                        v3_2 = *x12_17
                        i_9 = i_18
                        i_18 += 0x20
                        x11_18 += 0x20
                        x12_17 += 0x20
                        *(x10_26 - 0x10) = v2_2 ^ v0_2
                        *x10_26 = v3_2 ^ v1_2
                        x10_26 += 0x20
                    while (i_9 != -0x20)
            
            if (x0_1 != x28_1)
                int64_t x11_19 = x28_1
                
                if (x10_1 u< 8)
                label_d95878:
                    int64_t i_19 = x0_1 - x11_19
                    void* x10_31 = x24 + x11_19
                    void* x8_30 = x8_29 + x11_19
                    char* x11_21 = x21_1 + x11_19
                    int64_t i_10
                    
                    do
                        char x12_21 = *x11_21
                        x11_21 = &x11_21[1]
                        char x13_8 = *x8_30
                        x8_30 += 1
                        i_10 = i_19
                        i_19 -= 1
                        *x10_31 = x13_8 ^ x12_21
                        x10_31 += 1
                    while (i_10 != 1)
                else
                    x11_19 = x28_1
                    
                    if (((fp_1 u< x21_1 + x0_1 ? 1 : 0) & (x21_1 + x28_1 u< x8_6 ? 1 : 0) & 1) != 0)
                        goto label_d95878
                    
                    x11_19 = x28_1
                    
                    if (((fp_1 u< x8_29 + x0_1 ? 1 : 0) & (x8_29 + x28_1 u< x8_6 ? 1 : 0) & 1) != 0)
                        goto label_d95878
                    
                    int64_t i_23 = i_25
                    int64_t* x9_37 = x21_1 + x28_1
                    void* x10_30 = x8_29 + x28_1
                    void* x12_20 = fp_1
                    int64_t i_11
                    
                    do
                        v0_2.q = *x9_37
                        x9_37 = &x9_37[1]
                        v1_2.q = *x10_30
                        x10_30 += 8
                        i_11 = i_23
                        i_23 -= 8
                        *x12_20 = (v1_2 ^ v0_2).q
                        x12_20 += 8
                    while (i_11 != 8)
                    x11_19 = x11_2
                    
                    if (x12_1 != 0)
                        goto label_d95878
            
            Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x18), x24)
            int64_t* x0_10 = *(arg1 + 0x18)
            result, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                (*(*x0_10 + 0x30))(x0_10, x26_2, x26_2, x25_1)
            int64_t x8_33 = *(arg1 + 8)
            x27_1 += 1
            x22_1 = &x22_1[x8_33]
            x21_1 += x8_33
        while (x27_1 != entry_x3)
        
        x24 = var_78_1
        
        if (x24 == 0)
            return result
        
        var_70_2 = x24
        return Botan::deallocate_memory(x24, var_68_1 - x24, 1)
    
    if ((x0_1 & 0xffffffff80000000) == 0)
        void* x0_4 = Botan::allocate_memory(x0_1, 1)
        void* x26_1 = x0_4 + x0_1
        x24 = x0_4
        var_78_1 = x0_4
        var_68_1 = x26_1
        result, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = memset(x0_4, 0, x0_1)
        void* var_70_1 = x26_1
        
        if (entry_x3 != 0)
            goto label_d9535c
        
        goto label_d95348

sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
noreturn
