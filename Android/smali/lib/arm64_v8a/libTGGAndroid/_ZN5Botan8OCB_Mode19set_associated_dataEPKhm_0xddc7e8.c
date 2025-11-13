// 函数: _ZN5Botan8OCB_Mode19set_associated_dataEPKhm
// 地址: 0xddc7e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = *(arg1 + 0x10)

if (x24 == 0)
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
else
    int64_t* x20_1 = *(arg1 + 8)
    uint64_t x0_1
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    int128_t v4_1
    int128_t v5_1
    int128_t v6_1
    int128_t v7_1
    x0_1, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = (*(*x20_1 + 0x30))(x20_1)
    void* var_b0
    __builtin_memset(&var_b0, 0, 0x18)
    int64_t var_f0
    void* var_a8_1
    void* var_a0_1
    void* var_90
    void* var_88_1
    void* var_80_1
    uint8_t* var_78
    void* var_70_1
    void* var_68_1
    int64_t entry_x2
    uint64_t x26
    
    if (x0_1 == 0)
        __builtin_memset(&var_90, 0, 0x30)
        x26 = entry_x2 u/ x0_1
        var_f0 = entry_x2
        
        if (x0_1 u<= entry_x2)
        label_ddc9ac:
            int64_t x27_1 = x0_1 & 0xffffffffffffffe0
            int64_t x8_4 = x0_1 & 0x1f
            int64_t x9_2 = x0_1 & 7
            int64_t i_37 = x8_4 - x9_2
            int64_t i_36 = (((x27_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
            int64_t fp_1 = 0
            uint64_t x21_5 = arg2
            bool cond:15_1
            
            do
                _CountLeadingZeros(__rbit((fp_1 + 1).d))
                int64_t* x0_11
                int128_t v0_2
                int128_t v1_2
                int128_t v2_2
                int128_t v3_2
                int128_t v4_2
                int128_t v5_2
                int128_t v6_2
                int128_t v7_2
                x0_11, v0_2, v1_2, v2_2, v3_2, v4_2, v5_2, v6_2, v7_2 = Botan::L_computer::get(x24)
                void* x9_3 = var_78
                void* x8_10 = *x0_11
                void* x10_5 = x0_11[1] - x8_10
                
                if (x10_5 u> var_70_1 - x9_3)
                    v0_2, v1_2, v2_2, v3_2, v4_2, v5_2, v6_2, v7_2 =
                        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                        &var_78)
                    x8_10 = *x0_11
                    x9_3 = var_78
                    x10_5 = x0_11[1] - x8_10
                
                void* x11_3 = x10_5 & 0xffffffffffffffe0
                
                if (x11_3 != 0)
                    int64_t x12_6 = 0
                    
                    if (x11_3 == 0x20 || x9_3 + 0x18 + x11_3 - 0x20 u< x9_3 + 0x18
                            || x9_3 + 0x10 + x11_3 - 0x20 u< x9_3 + 0x10
                            || x9_3 + 8 + x11_3 - 0x20 u< x9_3 + 8 || x9_3 + x11_3 - 0x20 u< x9_3)
                        goto label_ddcb0c
                    
                    if (x9_3 u>= x8_10 + x11_3 || x8_10 u>= x9_3 + x11_3)
                        int64_t i_38 = (((x11_3 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                        x12_6 = i_38 << 5
                        int64_t i_28 = i_38
                        void* x16_3 = x8_10
                        void* x17_3 = x9_3
                        int64_t i
                        
                        do
                            v0_2.q = *x17_3
                            v1_2.q = *(x17_3 + 8)
                            v2_2.q = *(x17_3 + 0x10)
                            v3_2.q = *(x17_3 + 0x18)
                            v0_2:8.q = *(x17_3 + 0x20)
                            v1_2:8.q = *(x17_3 + 0x28)
                            v2_2:8.q = *(x17_3 + 0x30)
                            v3_2:8.q = *(x17_3 + 0x38)
                            v4_2.q = *x16_3
                            v5_2.q = *(x16_3 + 8)
                            v6_2.q = *(x16_3 + 0x10)
                            v7_2.q = *(x16_3 + 0x18)
                            v4_2:8.q = *(x16_3 + 0x20)
                            v5_2:8.q = *(x16_3 + 0x28)
                            v6_2:8.q = *(x16_3 + 0x30)
                            v7_2:8.q = *(x16_3 + 0x38)
                            x16_3 += 0x40
                            i = i_28
                            i_28 -= 2
                            int128_t v16_1 = v4_2 ^ v0_2
                            int128_t v17_1 = v5_2 ^ v1_2
                            int128_t v18_1 = v6_2 ^ v2_2
                            int128_t v19_1 = v7_2 ^ v3_2
                            *x17_3 = v16_1.q
                            *(x17_3 + 8) = v17_1.q
                            *(x17_3 + 0x10) = v18_1.q
                            *(x17_3 + 0x18) = v19_1.q
                            *(x17_3 + 0x20) = v16_1:8.q
                            *(x17_3 + 0x28) = v17_1:8.q
                            *(x17_3 + 0x30) = v18_1:8.q
                            *(x17_3 + 0x38) = v19_1:8.q
                            x17_3 += 0x40
                        while (i != 2)
                        
                        if (((x11_3 - 0x20) u>> 5) + 1 != i_38)
                            goto label_ddcb0c
                    else
                        x12_6 = 0
                    label_ddcb0c:
                        void* i_24 = x12_6 - x11_3
                        void* x12_10 = x8_10 + x12_6 + 0x10
                        void* x14_6 = x9_3 + x12_6 + 0x10
                        void* i_1
                        
                        do
                            v2_2 = *(x12_10 - 0x10)
                            v3_2 = *x12_10
                            i_1 = i_24
                            i_24 += 0x20
                            x12_10 += 0x20
                            v1_2 = v3_2 ^ *x14_6
                            *(x14_6 - 0x10) ^= v2_2
                            *x14_6 = v1_2
                            x14_6 += 0x20
                        while (i_1 != -0x20)
                
                if (x10_5 != x11_3)
                    if ((x10_5 & 0x18) == 0)
                    label_ddcb98:
                        int64_t i_19 = x10_5 - x11_3
                        void* x9_4 = x9_3 + x11_3
                        void* x8_11 = x8_10 + x11_3
                        int64_t i_2
                        
                        do
                            char x11_4 = *x8_11
                            x8_11 += 1
                            i_2 = i_19
                            i_19 -= 1
                            *x9_4 ^= x11_4
                            x9_4 += 1
                        while (i_2 != 1)
                    else
                        int64_t* x12_11 = x9_3 + x11_3
                        void* x13_5 = x8_10 + x11_3
                        
                        if (x12_11 u< x8_10 + x10_5 && x13_5 u< x9_3 + x10_5)
                            goto label_ddcb98
                        
                        void* x14_8 = x10_5 & 7
                        void* i_29 = (x10_5 & 0x1f) - x14_8
                        x11_3 += i_29
                        void* i_3
                        
                        do
                            v0_2.q = *x13_5
                            x13_5 += 8
                            v1_2.q = *x12_11
                            i_3 = i_29
                            i_29 -= 8
                            *x12_11 = (v1_2 ^ v0_2).q
                            x12_11 = &x12_11[1]
                        while (i_3 != 8)
                        
                        if (x14_8 != 0)
                            goto label_ddcb98
                
                int128_t v0_3
                int128_t v1_3
                int128_t v2_3
                int128_t v3_3
                int128_t v4_3
                int128_t v5_3
                int128_t v6_3
                int128_t v7_3
                v0_3, v1_3, v2_3, v3_3, v4_3, v5_3, v6_3, v7_3 = std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
                    &var_90, var_78)
                void* x8_12 = var_90
                int64_t x10_7 = x0_1 * fp_1
                int64_t x9_6 = arg2 + x27_1 + x10_7
                
                if (x27_1 != 0)
                    int64_t x11_6 = 0
                    
                    if (x27_1 == 0x20 || x8_12 + 0x18 + x27_1 - 0x20 u< x8_12 + 0x18
                            || x8_12 + 0x10 + x27_1 - 0x20 u< x8_12 + 0x10
                            || x8_12 + 8 + x27_1 - 0x20 u< x8_12 + 8
                            || x8_12 + x27_1 - 0x20 u< x8_12)
                        goto label_ddcca8
                    
                    if (x8_12 u>= x9_6 || arg2 + x10_7 u>= x8_12 + x27_1)
                        int64_t i_23 = i_36
                        uint64_t x12_16 = x21_5
                        void* x13_8 = x8_12
                        int64_t i_4
                        
                        do
                            v0_3.q = *x13_8
                            v1_3.q = *(x13_8 + 8)
                            v2_3.q = *(x13_8 + 0x10)
                            v3_3.q = *(x13_8 + 0x18)
                            v0_3:8.q = *(x13_8 + 0x20)
                            v1_3:8.q = *(x13_8 + 0x28)
                            v2_3:8.q = *(x13_8 + 0x30)
                            v3_3:8.q = *(x13_8 + 0x38)
                            v4_3.q = *x12_16
                            v5_3.q = *(x12_16 + 8)
                            v6_3.q = *(x12_16 + 0x10)
                            v7_3.q = *(x12_16 + 0x18)
                            v4_3:8.q = *(x12_16 + 0x20)
                            v5_3:8.q = *(x12_16 + 0x28)
                            v6_3:8.q = *(x12_16 + 0x30)
                            v7_3:8.q = *(x12_16 + 0x38)
                            x12_16 += 0x40
                            i_4 = i_23
                            i_23 -= 2
                            int128_t v16_2 = v4_3 ^ v0_3
                            int128_t v17_2 = v5_3 ^ v1_3
                            int128_t v18_2 = v6_3 ^ v2_3
                            int128_t v19_2 = v7_3 ^ v3_3
                            *x13_8 = v16_2.q
                            *(x13_8 + 8) = v17_2.q
                            *(x13_8 + 0x10) = v18_2.q
                            *(x13_8 + 0x18) = v19_2.q
                            *(x13_8 + 0x20) = v16_2:8.q
                            *(x13_8 + 0x28) = v17_2:8.q
                            *(x13_8 + 0x30) = v18_2:8.q
                            *(x13_8 + 0x38) = v19_2:8.q
                            x13_8 += 0x40
                        while (i_4 != 2)
                        x11_6 = i_36 << 5
                        
                        if (((x27_1 - 0x20) u>> 5) + 1 != i_36)
                            goto label_ddcca8
                    else
                        x11_6 = 0
                    label_ddcca8:
                        
                        do
                            int128_t* x12_18 = x8_12 + x11_6
                            int64_t x13_9 = x21_5 + x11_6
                            x11_6 += 0x20
                            v1_3 = *(x13_9 + 0x10) ^ x12_18[1]
                            *x12_18 ^= *x13_9
                            x12_18[1] = v1_3
                        while (x27_1 != x11_6)
                
                if (x0_1 != x27_1)
                    int64_t x11_10 = x27_1
                    
                    if (x8_4 u< 8)
                    label_ddcd30:
                        
                        do
                            *(x8_12 + x11_10) ^= *(x21_5 + x11_10)
                            x11_10 += 1
                        while (x0_1 != x11_10)
                    else
                        if (x8_12 + x27_1 u< arg2 + x0_1 + x10_7)
                            x11_10 = x27_1
                        
                        if (x8_12 + x27_1 u< arg2 + x0_1 + x10_7 && x9_6 u< x8_12 + x0_1)
                            goto label_ddcd30
                        
                        int64_t i_18 = i_37
                        int64_t x10_11 = x27_1
                        int64_t i_5
                        
                        do
                            v0_3.q = *(x21_5 + x10_11)
                            v1_3.q = *(x8_12 + x10_11)
                            i_5 = i_18
                            i_18 -= 8
                            *(x8_12 + x10_11) = (v1_3 ^ v0_3).q
                            x10_11 += 8
                        while (i_5 != 8)
                        x11_10 = x27_1 + i_37
                        
                        if (x9_2 != 0)
                            goto label_ddcd30
                
                void* x25_3 = var_90
                v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = (*(*x20_1 + 0x48))(x20_1, x25_3, 
                    x25_3, (var_88_1 - x25_3) u/ (*(*x20_1 + 0x30))(x20_1))
                void* x9_11 = var_b0
                void* x8_17 = var_90
                void* x10_14 = var_88_1 - x8_17
                
                if (x10_14 u> var_a8_1 - x9_11)
                    v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                        &var_b0)
                    x8_17 = var_90
                    x9_11 = var_b0
                    x10_14 = var_88_1 - x8_17
                
                void* x11_13 = x10_14 & 0xffffffffffffffe0
                
                if (x11_13 != 0)
                    int64_t x12_20 = 0
                    
                    if (x11_13 == 0x20 || x9_11 + 0x18 + x11_13 - 0x20 u< x9_11 + 0x18
                            || x9_11 + 0x10 + x11_13 - 0x20 u< x9_11 + 0x10
                            || x9_11 + 8 + x11_13 - 0x20 u< x9_11 + 8
                            || x9_11 + x11_13 - 0x20 u< x9_11)
                        goto label_ddce54
                    
                    if (x9_11 u>= x8_17 + x11_13 || x8_17 u>= x9_11 + x11_13)
                        int64_t i_39 = (((x11_13 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                        x12_20 = i_39 << 5
                        int64_t i_30 = i_39
                        void* x16_6 = x8_17
                        void* x17_5 = x9_11
                        int64_t i_6
                        
                        do
                            v0_1.q = *x17_5
                            v1_1.q = *(x17_5 + 8)
                            v2_1.q = *(x17_5 + 0x10)
                            v3_1.q = *(x17_5 + 0x18)
                            v0_1:8.q = *(x17_5 + 0x20)
                            v1_1:8.q = *(x17_5 + 0x28)
                            v2_1:8.q = *(x17_5 + 0x30)
                            v3_1:8.q = *(x17_5 + 0x38)
                            v4_1.q = *x16_6
                            v5_1.q = *(x16_6 + 8)
                            v6_1.q = *(x16_6 + 0x10)
                            v7_1.q = *(x16_6 + 0x18)
                            v4_1:8.q = *(x16_6 + 0x20)
                            v5_1:8.q = *(x16_6 + 0x28)
                            v6_1:8.q = *(x16_6 + 0x30)
                            v7_1:8.q = *(x16_6 + 0x38)
                            x16_6 += 0x40
                            i_6 = i_30
                            i_30 -= 2
                            int128_t v16_3 = v4_1 ^ v0_1
                            int128_t v17_3 = v5_1 ^ v1_1
                            int128_t v18_3 = v6_1 ^ v2_1
                            int128_t v19_3 = v7_1 ^ v3_1
                            *x17_5 = v16_3.q
                            *(x17_5 + 8) = v17_3.q
                            *(x17_5 + 0x10) = v18_3.q
                            *(x17_5 + 0x18) = v19_3.q
                            *(x17_5 + 0x20) = v16_3:8.q
                            *(x17_5 + 0x28) = v17_3:8.q
                            *(x17_5 + 0x30) = v18_3:8.q
                            *(x17_5 + 0x38) = v19_3:8.q
                            x17_5 += 0x40
                        while (i_6 != 2)
                        
                        if (((x11_13 - 0x20) u>> 5) + 1 != i_39)
                            goto label_ddce54
                    else
                        x12_20 = 0
                    label_ddce54:
                        void* i_25 = x12_20 - x11_13
                        void* x12_24 = x8_17 + x12_20 + 0x10
                        void* x14_13 = x9_11 + x12_20 + 0x10
                        void* i_7
                        
                        do
                            v2_1 = *(x12_24 - 0x10)
                            v3_1 = *x12_24
                            i_7 = i_25
                            i_25 += 0x20
                            x12_24 += 0x20
                            v1_1 = v3_1 ^ *x14_13
                            *(x14_13 - 0x10) ^= v2_1
                            *x14_13 = v1_1
                            x14_13 += 0x20
                        while (i_7 != -0x20)
                
                if (x10_14 != x11_13)
                    if ((x10_14 & 0x18) == 0)
                    label_ddcee0:
                        int64_t i_20 = x10_14 - x11_13
                        char* x9_12 = x9_11 + x11_13
                        char* x8_18 = x8_17 + x11_13
                        int64_t i_8
                        
                        do
                            char x11_14 = *x8_18
                            x8_18 = &x8_18[1]
                            i_8 = i_20
                            i_20 -= 1
                            *x9_12 ^= x11_14
                            x9_12 = &x9_12[1]
                        while (i_8 != 1)
                    else
                        int64_t* x12_25 = x9_11 + x11_13
                        int64_t* x13_13 = x8_17 + x11_13
                        
                        if (x12_25 u< x8_17 + x10_14 && x13_13 u< x9_11 + x10_14)
                            goto label_ddcee0
                        
                        void* x14_15 = x10_14 & 7
                        void* i_31 = (x10_14 & 0x1f) - x14_15
                        x11_13 += i_31
                        void* i_9
                        
                        do
                            v0_1.q = *x13_13
                            x13_13 = &x13_13[1]
                            v1_1.q = *x12_25
                            i_9 = i_31
                            i_31 -= 8
                            *x12_25 = (v1_1 ^ v0_1).q
                            x12_25 = &x12_25[1]
                        while (i_9 != 8)
                        
                        if (x14_15 != 0)
                            goto label_ddcee0
                
                cond:15_1 = fp_1 + 1 == x26
                x21_5 += x0_1
                fp_1 += 1
            while (not(cond:15_1))
            goto label_ddc908
        
    label_ddc908:
        int64_t x21_4 = var_f0 - x26 * x0_1
        
        if (x21_4 != 0)
            uint8_t* x9_1 = var_78
            void* x8_3 = *(x24 + 0x28)
            void* x10_2 = *(x24 + 0x30) - x8_3
            
            if (x10_2 u> var_70_1 - x9_1)
                v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                    &var_78)
                x8_3 = *(x24 + 0x28)
                x9_1 = var_78
                x10_2 = *(x24 + 0x30) - x8_3
            
            void* x11_16 = x10_2 & 0xffffffffffffffe0
            
            if (x11_16 != 0)
                int64_t x12_2 = 0
                
                if (x11_16 == 0x20 || &x9_1[0x18] + x11_16 - 0x20 u< &x9_1[0x18]
                        || &x9_1[0x10] + x11_16 - 0x20 u< &x9_1[0x10]
                        || &x9_1[8] + x11_16 - 0x20 u< &x9_1[8] || x9_1 + x11_16 - 0x20 u< x9_1)
                    goto label_ddcf54
                
                if (x9_1 u>= x8_3 + x11_16 || x8_3 u>= x9_1 + x11_16)
                    int64_t i_40 = (((x11_16 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                    x12_2 = i_40 << 5
                    int64_t i_32 = i_40
                    void* x16_7 = x8_3
                    uint8_t* x17_6 = x9_1
                    int64_t i_10
                    
                    do
                        v0_1.q = *x17_6
                        v1_1.q = *(x17_6 + 8)
                        v2_1.q = *(x17_6 + 0x10)
                        v3_1.q = *(x17_6 + 0x18)
                        v0_1:8.q = *(x17_6 + 0x20)
                        v1_1:8.q = *(x17_6 + 0x28)
                        v2_1:8.q = *(x17_6 + 0x30)
                        v3_1:8.q = *(x17_6 + 0x38)
                        v4_1.q = *x16_7
                        v5_1.q = *(x16_7 + 8)
                        v6_1.q = *(x16_7 + 0x10)
                        v7_1.q = *(x16_7 + 0x18)
                        v4_1:8.q = *(x16_7 + 0x20)
                        v5_1:8.q = *(x16_7 + 0x28)
                        v6_1:8.q = *(x16_7 + 0x30)
                        v7_1:8.q = *(x16_7 + 0x38)
                        x16_7 += 0x40
                        i_10 = i_32
                        i_32 -= 2
                        int128_t v16_4 = v4_1 ^ v0_1
                        int128_t v17_4 = v5_1 ^ v1_1
                        int128_t v18_4 = v6_1 ^ v2_1
                        int128_t v19_4 = v7_1 ^ v3_1
                        *x17_6 = v16_4.q
                        *(x17_6 + 8) = v17_4.q
                        *(x17_6 + 0x10) = v18_4.q
                        *(x17_6 + 0x18) = v19_4.q
                        *(x17_6 + 0x20) = v16_4:8.q
                        *(x17_6 + 0x28) = v17_4:8.q
                        *(x17_6 + 0x30) = v18_4:8.q
                        *(x17_6 + 0x38) = v19_4:8.q
                        x17_6 = &x17_6[0x40]
                    while (i_10 != 2)
                    
                    if (((x11_16 - 0x20) u>> 5) + 1 != i_40)
                        goto label_ddcf54
                else
                    x12_2 = 0
                label_ddcf54:
                    void* i_26 = x12_2 - x11_16
                    void* x12_28 = x8_3 + x12_2 + 0x10
                    void* x14_17 = &x9_1[x12_2 + 0x10]
                    void* i_11
                    
                    do
                        v2_1 = *(x12_28 - 0x10)
                        v3_1 = *x12_28
                        i_11 = i_26
                        i_26 += 0x20
                        x12_28 += 0x20
                        v1_1 = v3_1 ^ *x14_17
                        *(x14_17 - 0x10) ^= v2_1
                        *x14_17 = v1_1
                        x14_17 += 0x20
                    while (i_11 != -0x20)
            
            if (x10_2 != x11_16)
                if ((x10_2 & 0x18) == 0)
                label_ddcfe0:
                    int64_t i_21 = x10_2 - x11_16
                    char* x9_13 = x9_1 + x11_16
                    void* x8_19 = x8_3 + x11_16
                    int64_t i_12
                    
                    do
                        char x11_17 = *x8_19
                        x8_19 += 1
                        i_12 = i_21
                        i_21 -= 1
                        *x9_13 ^= x11_17
                        x9_13 = &x9_13[1]
                    while (i_12 != 1)
                else
                    void* x12_29 = x9_1 + x11_16
                    void* x13_16 = x8_3 + x11_16
                    
                    if (x12_29 u< x8_3 + x10_2 && x13_16 u< x9_1 + x10_2)
                        goto label_ddcfe0
                    
                    void* x14_19 = x10_2 & 7
                    void* i_33 = (x10_2 & 0x1f) - x14_19
                    x11_16 += i_33
                    void* i_13
                    
                    do
                        v0_1.q = *x13_16
                        x13_16 += 8
                        v1_1.q = *x12_29
                        i_13 = i_33
                        i_33 -= 8
                        *x12_29 = (v1_1 ^ v0_1).q
                        x12_29 += 8
                    while (i_13 != 8)
                    
                    if (x14_19 != 0)
                        goto label_ddcfe0
            
            int128_t v0_4
            int128_t v1_4
            int128_t v2_4
            int128_t v3_4
            int128_t v4_4
            int128_t v5_4
            int128_t v6_4
            int128_t v7_4
            v0_4, v1_4, v2_4, v3_4, v4_4, v5_4, v6_4, v7_4 =
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
                &var_90, var_78)
            void* x8_20 = var_90
            int64_t x11_19 = x26 * x0_1
            int64_t x10_16 = x21_4 & 0xffffffffffffffe0
            int64_t* x9_14 = arg2 + x11_19
            
            if (x10_16 != 0)
                int64_t x12_31 = 0
                
                if (x10_16 == 0x20 || x8_20 + 0x18 + x10_16 - 0x20 u< x8_20 + 0x18
                        || x8_20 + 0x10 + x10_16 - 0x20 u< x8_20 + 0x10
                        || x8_20 + 8 + x10_16 - 0x20 u< x8_20 + 8
                        || x8_20 + x10_16 - 0x20 u< x8_20)
                    goto label_ddd100
                
                if (x8_20 u>= arg2 + x11_19 + x10_16 || x9_14 u>= x8_20 + x10_16)
                    int64_t x15_15 = (((x10_16 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                    int64_t x13_19 = 0
                    x12_31 = x15_15 << 5
                    void* x16_9 = x8_20
                    
                    do
                        void* x17_8 = &x9_14[x13_19 * 4]
                        v0_4.q = *x16_9
                        v1_4.q = *(x16_9 + 8)
                        v2_4.q = *(x16_9 + 0x10)
                        v3_4.q = *(x16_9 + 0x18)
                        v0_4:8.q = *(x16_9 + 0x20)
                        v1_4:8.q = *(x16_9 + 0x28)
                        v2_4:8.q = *(x16_9 + 0x30)
                        v3_4:8.q = *(x16_9 + 0x38)
                        v4_4.q = *x17_8
                        v5_4.q = *(x17_8 + 8)
                        v6_4.q = *(x17_8 + 0x10)
                        v7_4.q = *(x17_8 + 0x18)
                        v4_4:8.q = *(x17_8 + 0x20)
                        v5_4:8.q = *(x17_8 + 0x28)
                        v6_4:8.q = *(x17_8 + 0x30)
                        v7_4:8.q = *(x17_8 + 0x38)
                        x13_19 += 2
                        int128_t v16_5 = v4_4 ^ v0_4
                        int128_t v17_5 = v5_4 ^ v1_4
                        int128_t v18_5 = v6_4 ^ v2_4
                        int128_t v19_5 = v7_4 ^ v3_4
                        *x16_9 = v16_5.q
                        *(x16_9 + 8) = v17_5.q
                        *(x16_9 + 0x10) = v18_5.q
                        *(x16_9 + 0x18) = v19_5.q
                        *(x16_9 + 0x20) = v16_5:8.q
                        *(x16_9 + 0x28) = v17_5:8.q
                        *(x16_9 + 0x30) = v18_5:8.q
                        *(x16_9 + 0x38) = v19_5:8.q
                        x16_9 += 0x40
                    while (x13_19 != x15_15)
                    
                    if (((x10_16 - 0x20) u>> 5) + 1 != x15_15)
                        goto label_ddd100
                else
                    x12_31 = 0
                label_ddd100:
                    
                    do
                        void* x13_20 = x8_20 + x12_31
                        int128_t* x14_22 = x9_14 + x12_31
                        x12_31 += 0x20
                        v1_4 = x14_22[1] ^ *(x13_20 + 0x10)
                        *x13_20 ^= *x14_22
                        *(x13_20 + 0x10) = v1_4
                    while (x12_31 != x10_16)
            
            if (x10_16 != x21_4)
                int64_t x12_37 = var_f0 - x11_19 - x10_16
                
                if (x12_37 u< 8 || (x8_20 + x10_16 u< arg2 + var_f0
                        && arg2 + x11_19 + x10_16 u< x8_20 + x21_4))
                    goto label_ddd1e8
                
                int64_t x11_22
                
                if (x12_37 u>= 0x20)
                    int64_t x13_23 = 0
                    x11_22 = x12_37 & 0xffffffffffffffe0
                    
                    do
                        int64_t x14_24 = x10_16 + x13_23
                        void* x15_16 = x9_14 + x14_24
                        void* x14_25 = x8_20 + x14_24
                        x13_23 += 0x20
                        v1_4 = *(x14_25 + 0x10) ^ *(x15_16 + 0x10)
                        *x14_25 ^= *x15_16
                        *(x14_25 + 0x10) = v1_4
                    while (x13_23 != x11_22)
                    
                    if (x12_37 != x11_22)
                        if ((x12_37 & 0x18) != 0)
                            goto label_ddd194
                        
                        x10_16 += x11_22
                    label_ddd1e8:
                        
                        do
                            *(x8_20 + x10_16) ^= *(x9_14 + x10_16)
                            x10_16 += 1
                        while (x10_16 != x21_4)
                else
                    x11_22 = 0
                label_ddd194:
                    int64_t x14_26 = x12_37 & 0xfffffffffffffff8
                    
                    do
                        int64_t x15_17 = x10_16 + x11_22
                        v0_4.q = *(x9_14 + x15_17)
                        v1_4.q = *(x8_20 + x15_17)
                        x11_22 += 8
                        *(x8_20 + x15_17) = (v1_4 ^ v0_4).q
                    while (x11_22 != x14_26)
                    
                    x10_16 += x14_26
                    
                    if (x12_37 != x14_26)
                        goto label_ddd1e8
            
            void* x8_21 = var_90
            *(x8_21 + x21_4) ^= 0x80
            void* x21_6 = var_90
            int128_t v1_5
            int128_t v2_5
            int128_t v3_5
            int128_t v4_5
            int128_t v5_5
            int128_t v6_5
            int128_t v7_5
            v0_1, v1_5, v2_5, v3_5, v4_5, v5_5, v6_5, v7_5 = (*(*x20_1 + 0x48))(x20_1, x21_6, 
                x21_6, (var_88_1 - x21_6) u/ (*(*x20_1 + 0x30))(x20_1))
            void* x9_18 = var_b0
            void* x8_26 = var_90
            void* x10_18 = var_88_1 - x8_26
            
            if (x10_18 u> var_a8_1 - x9_18)
                v0_1, v1_5, v2_5, v3_5, v4_5, v5_5, v6_5, v7_5 =
                    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                    &var_b0)
                x8_26 = var_90
                x9_18 = var_b0
                x10_18 = var_88_1 - x8_26
            
            void* x11_26 = x10_18 & 0xffffffffffffffe0
            
            if (x11_26 != 0)
                int64_t x12_40 = 0
                
                if (x11_26 == 0x20 || x9_18 + 0x18 + x11_26 - 0x20 u< x9_18 + 0x18
                        || x9_18 + 0x10 + x11_26 - 0x20 u< x9_18 + 0x10
                        || x9_18 + 8 + x11_26 - 0x20 u< x9_18 + 8
                        || x9_18 + x11_26 - 0x20 u< x9_18)
                    goto label_ddd318
                
                if (x9_18 u>= x8_26 + x11_26 || x8_26 u>= x9_18 + x11_26)
                    int64_t i_41 = (((x11_26 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                    x12_40 = i_41 << 5
                    int64_t i_34 = i_41
                    void* x16_11 = x8_26
                    void* x17_10 = x9_18
                    int64_t i_14
                    
                    do
                        v0_1.q = *x17_10
                        v1_5.q = *(x17_10 + 8)
                        v2_5.q = *(x17_10 + 0x10)
                        v3_5.q = *(x17_10 + 0x18)
                        v0_1:8.q = *(x17_10 + 0x20)
                        v1_5:8.q = *(x17_10 + 0x28)
                        v2_5:8.q = *(x17_10 + 0x30)
                        v3_5:8.q = *(x17_10 + 0x38)
                        v4_5.q = *x16_11
                        v5_5.q = *(x16_11 + 8)
                        v6_5.q = *(x16_11 + 0x10)
                        v7_5.q = *(x16_11 + 0x18)
                        v4_5:8.q = *(x16_11 + 0x20)
                        v5_5:8.q = *(x16_11 + 0x28)
                        v6_5:8.q = *(x16_11 + 0x30)
                        v7_5:8.q = *(x16_11 + 0x38)
                        x16_11 += 0x40
                        i_14 = i_34
                        i_34 -= 2
                        int128_t v16_6 = v4_5 ^ v0_1
                        int128_t v17_6 = v5_5 ^ v1_5
                        int128_t v18_6 = v6_5 ^ v2_5
                        int128_t v19_6 = v7_5 ^ v3_5
                        *x17_10 = v16_6.q
                        *(x17_10 + 8) = v17_6.q
                        *(x17_10 + 0x10) = v18_6.q
                        *(x17_10 + 0x18) = v19_6.q
                        *(x17_10 + 0x20) = v16_6:8.q
                        *(x17_10 + 0x28) = v17_6:8.q
                        *(x17_10 + 0x30) = v18_6:8.q
                        *(x17_10 + 0x38) = v19_6:8.q
                        x17_10 += 0x40
                    while (i_14 != 2)
                    
                    if (((x11_26 - 0x20) u>> 5) + 1 != i_41)
                        goto label_ddd318
                else
                    x12_40 = 0
                label_ddd318:
                    void* i_27 = x12_40 - x11_26
                    void* x12_44 = x8_26 + x12_40 + 0x10
                    void* x14_30 = x9_18 + x12_40 + 0x10
                    void* i_15
                    
                    do
                        v2_5 = *(x12_44 - 0x10)
                        v3_5 = *x12_44
                        i_15 = i_27
                        i_27 += 0x20
                        x12_44 += 0x20
                        v1_5 = v3_5 ^ *x14_30
                        *(x14_30 - 0x10) ^= v2_5
                        *x14_30 = v1_5
                        x14_30 += 0x20
                    while (i_15 != -0x20)
            
            if (x10_18 != x11_26)
                if ((x10_18 & 0x18) == 0)
                label_ddd3a4:
                    int64_t i_22 = x10_18 - x11_26
                    void* x9_19 = x9_18 + x11_26
                    char* x8_27 = x8_26 + x11_26
                    int64_t i_16
                    
                    do
                        char x11_27 = *x8_27
                        x8_27 = &x8_27[1]
                        i_16 = i_22
                        i_22 -= 1
                        *x9_19 ^= x11_27
                        x9_19 += 1
                    while (i_16 != 1)
                else
                    void* x12_45 = x9_18 + x11_26
                    void* x13_28 = x8_26 + x11_26
                    
                    if (x12_45 u< x8_26 + x10_18 && x13_28 u< x9_18 + x10_18)
                        goto label_ddd3a4
                    
                    void* x14_32 = x10_18 & 7
                    void* i_35 = (x10_18 & 0x1f) - x14_32
                    x11_26 += i_35
                    void* i_17
                    
                    do
                        v0_1.q = *x13_28
                        x13_28 += 8
                        v1_5.q = *x12_45
                        i_17 = i_35
                        i_35 -= 8
                        *x12_45 = (v1_5 ^ v0_1).q
                        x12_45 += 8
                    while (i_17 != 8)
                    
                    if (x14_32 != 0)
                        goto label_ddd3a4
        
        void* x0_27 = var_90
        
        if (x0_27 != 0)
            void* var_88_2 = x0_27
            Botan::deallocate_memory(x0_27, var_80_1 - x0_27, 1)
        
        uint8_t* x0_28 = var_78
        
        if (x0_28 != 0)
            uint8_t* var_70_2 = x0_28
            Botan::deallocate_memory(x0_28, var_68_1 - x0_28, 1)
        
        void* result = *(arg1 + 0x38)
        
        if (result != 0)
            int64_t x8_30 = *(arg1 + 0x48)
            *(arg1 + 0x40) = result
            result, v0_1 = Botan::deallocate_memory(result, x8_30 - result, 1)
            __builtin_memset(&arg1[0x38], 0, 0x18)
        
        *(arg1 + 0x38) = var_b0.o
        *(arg1 + 0x48) = var_a0_1
        return result
    
    if ((x0_1 & 0xffffffff80000000) == 0)
        void* x0_3 = Botan::allocate_memory(x0_1, 1)
        void* x21_1 = x0_3 + x0_1
        var_b0 = x0_3
        var_a0_1 = x21_1
        memset(x0_3, 0, x0_1)
        var_a8_1 = x21_1
        __builtin_memset(&var_78, 0, 0x18)
        uint8_t* x0_5 = Botan::allocate_memory(x0_1, 1)
        void* x21_2 = &x0_5[x0_1]
        var_78 = x0_5
        var_68_1 = x21_2
        memset(x0_5, 0, x0_1)
        var_70_1 = x21_2
        __builtin_memset(&var_90, 0, 0x18)
        void* x0_7 = Botan::allocate_memory(x0_1, 1)
        void* x21_3 = x0_7 + x0_1
        var_90 = x0_7
        var_80_1 = x21_3
        v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = memset(x0_7, 0, x0_1)
        var_88_1 = x21_3
        x26 = entry_x2 u/ x0_1
        var_f0 = entry_x2
        
        if (x0_1 u> entry_x2)
            goto label_ddc908
        
        goto label_ddc9ac

sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
noreturn
