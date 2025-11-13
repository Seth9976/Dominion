// 函数: _ZN5Botan14CFB_Encryption7processEPhm
// 地址: 0xcfe9cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x20)

if (x8 == *(arg1 + 0x28))
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
else if (*(arg1 + 8) != *(arg1 + 0x10))
    void* x9_2 = *(arg1 + 0x38)
    size_t x22_1 = *(arg1 + 0x50)
    uint64_t x28_1 = arg2
    size_t entry_result
    size_t entry_result_1
    int128_t v0
    int128_t v1
    int128_t v2
    int128_t v3
    int128_t v4
    int128_t v5
    int128_t v6
    int128_t v7
    
    if (x9_2 == 0)
        entry_result_1 = entry_result
    label_cfec80:
        size_t entry_result_3 = entry_result_1
        uint64_t x24_2
        
        if (entry_result_1 u>= x22_1)
            int64_t fp_1 = x22_1 & 0xffffffffffffffe0
            int64_t x19_4 = 0
            uint64_t var_70_1 = x28_1
            
            if (fp_1 == 0)
                int64_t x25_3 = x22_1 & 0xffffffffffffffe0
                int64_t x21_2 = x22_1 & 0xfffffffffffffff8
                x24_2 = x28_1
                int64_t var_78_2 = x21_2
                size_t entry_result_6
                
                do
                    char* x1_9 = *(arg1 + 0x20)
                    
                    if (x22_1 != fp_1)
                        int64_t x8_25
                        
                        if (x22_1 u>= 8)
                            int64_t x8_26 = x22_1 * x19_4
                            
                            if (x1_9 u< x28_1 + x22_1 + x8_26 && x28_1 + x8_26 u< &x1_9[x22_1])
                                x8_25 = 0
                                goto label_cff0d8
                            
                            int64_t x9_19
                            
                            if (x22_1 u>= 0x20)
                                int64_t x8_28 = 0
                                
                                do
                                    int128_t* x9_20 = x24_2 + x8_28
                                    void* x10_15 = &x1_9[x8_28]
                                    x8_28 += 0x20
                                    v1 = *(x10_15 + 0x10) ^ x9_20[1]
                                    *x10_15 ^= *x9_20
                                    *(x10_15 + 0x10) = v1
                                while (x25_3 != x8_28)
                                
                                if (x22_1 != x25_3)
                                    x9_19 = x25_3
                                    x8_25 = x25_3
                                    
                                    if ((x22_1 & 0x18) == 0)
                                        goto label_cff0d8
                                    
                                    goto label_cff0b0
                            else
                                x9_19 = 0
                            label_cff0b0:
                                
                                do
                                    v0.q = *(x24_2 + x9_19)
                                    v1.q = *(x1_9 + x9_19)
                                    *(x1_9 + x9_19) = (v1 ^ v0).q
                                    x9_19 += 8
                                while (x21_2 != x9_19)
                                
                                x8_25 = x21_2
                                
                                if (x22_1 != x21_2)
                                    goto label_cff0d8
                        else
                            x8_25 = 0
                        label_cff0d8:
                            
                            do
                                x1_9[x8_25] ^= *(x24_2 + x8_25)
                                x8_25 += 1
                            while (x22_1 != x8_25)
                        x1_9 = *(arg1 + 0x20)
                    
                    if (x22_1 != 0)
                        if (x24_2 == 0)
                            goto label_cff2b0
                        
                        if (x1_9 == 0)
                            goto label_cff2b0
                        
                        memmove(x24_2, x1_9, x22_1)
                    
                    int64_t x8_29 = *(arg1 + 0x48)
                    size_t x27_5 = *(arg1 + 0x50)
                    size_t x28_5 = x8_29 - x27_5
                    
                    if (x8_29 != x27_5)
                        int64_t x0_16 = *(arg1 + 8)
                        
                        if (x0_16 == 0)
                            goto label_cff2b0
                        
                        memmove(x0_16, x0_16 + x27_5, x28_5)
                    
                    int64_t x26_4 = *(arg1 + 8)
                    int64_t x25_4 = *(arg1 + 0x20)
                    
                    if (x27_5 != 0)
                        if (x25_4 == 0)
                            goto label_cff2b0
                        
                        memmove(x26_4 + x28_5, x25_4, x27_5)
                        x26_4 = *(arg1 + 8)
                        x25_4 = *(arg1 + 0x20)
                    
                    int64_t* x27_4 = *(arg1 + 0x40)
                    x24_2 += x22_1
                    entry_result_6 = entry_result_3 - x22_1
                    v0, v1, v2, v3, v4, v5, v6, v7 = (*(*x27_4 + 0x48))(x27_4, x26_4, x25_4, 
                        (*(arg1 + 0x10) - x26_4) u/ (*(*x27_4 + 0x30))(x27_4))
                    x21_2 = var_78_2
                    x28_1 = var_70_1
                    x19_4 += 1
                    *(arg1 + 0x38) = 0
                    entry_result_3 = entry_result_6
                while (entry_result_6 u>= x22_1)
            else
                int64_t x9_8 = x22_1 & 0x1f
                int64_t x10_8 = x22_1 & 7
                int64_t i_20 = (((fp_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                int64_t i_21 = x9_8 - x10_8
                x24_2 = x28_1
                size_t entry_result_5
                
                do
                    int64_t* x8_18 = *(arg1 + 0x20)
                    int64_t x10_9 = x22_1 * x19_4
                    int64_t x9_11 = x28_1 + fp_1 + x10_9
                    int64_t x11_11 = 0
                    
                    if (fp_1 == 0x20 || &x8_18[3] + fp_1 - 0x20 u< &x8_18[3]
                            || &x8_18[2] + fp_1 - 0x20 u< &x8_18[2]
                            || &x8_18[1] + fp_1 - 0x20 u< &x8_18[1]
                            || x8_18 + fp_1 - 0x20 u< x8_18)
                        goto label_cfee94
                    
                    if (x8_18 u>= x9_11 || x28_1 + x10_9 u>= x8_18 + fp_1)
                        int64_t i_15 = i_20
                        int64_t x11_13 = 0
                        int64_t i
                        
                        do
                            void* x13_12 = x8_18 + x11_13
                            int64_t* x14_8 = x24_2 + x11_13
                            v0.q = *x13_12
                            v1.q = *(x13_12 + 8)
                            v2.q = *(x13_12 + 0x10)
                            v3.q = *(x13_12 + 0x18)
                            v0:8.q = *(x13_12 + 0x20)
                            v1:8.q = *(x13_12 + 0x28)
                            v2:8.q = *(x13_12 + 0x30)
                            v3:8.q = *(x13_12 + 0x38)
                            v4.q = *x14_8
                            v5.q = x14_8[1]
                            v6.q = x14_8[2]
                            v7.q = x14_8[3]
                            v4:8.q = x14_8[4]
                            v5:8.q = x14_8[5]
                            v6:8.q = x14_8[6]
                            v7:8.q = x14_8[7]
                            i = i_15
                            i_15 -= 2
                            x11_13 += 0x40
                            int128_t v16_2 = v4 ^ v0
                            int128_t v17_2 = v5 ^ v1
                            int128_t v18_2 = v6 ^ v2
                            int128_t v19_2 = v7 ^ v3
                            *x13_12 = v16_2.q
                            *(x13_12 + 8) = v17_2.q
                            *(x13_12 + 0x10) = v18_2.q
                            *(x13_12 + 0x18) = v19_2.q
                            *(x13_12 + 0x20) = v16_2:8.q
                            *(x13_12 + 0x28) = v17_2:8.q
                            *(x13_12 + 0x30) = v18_2:8.q
                            *(x13_12 + 0x38) = v19_2:8.q
                        while (i != 2)
                        x11_11 = i_20 << 5
                        
                        if (((fp_1 - 0x20) u>> 5) + 1 != i_20)
                            goto label_cfee94
                    else
                        x11_11 = 0
                    label_cfee94:
                        
                        do
                            int128_t* x12_11 = x8_18 + x11_11
                            int64_t x13_13 = x24_2 + x11_11
                            x11_11 += 0x20
                            v1 = *(x13_13 + 0x10) ^ x12_11[1]
                            *x12_11 ^= *x13_13
                            x12_11[1] = v1
                        while (fp_1 != x11_11)
                    
                    if (x22_1 != fp_1)
                        int64_t x11_16 = fp_1
                        
                        if (x9_8 u< 8)
                        label_cfef1c:
                            
                            do
                                *(x8_18 + x11_16) ^= *(x24_2 + x11_16)
                                x11_16 += 1
                            while (x22_1 != x11_16)
                        else
                            if (x8_18 + fp_1 u< x28_1 + x22_1 + x10_9)
                                x11_16 = fp_1
                            
                            if (x8_18 + fp_1 u< x28_1 + x22_1 + x10_9 && x9_11 u< x8_18 + x22_1)
                                goto label_cfef1c
                            
                            int64_t i_10 = i_21
                            int64_t x10_13 = fp_1
                            int64_t i_1
                            
                            do
                                v0.q = *(x24_2 + x10_13)
                                v1.q = *(x8_18 + x10_13)
                                i_1 = i_10
                                i_10 -= 8
                                *(x8_18 + x10_13) = (v1 ^ v0).q
                                x10_13 += 8
                            while (i_1 != 8)
                            x11_16 = fp_1 + i_21
                            
                            if (x10_8 != 0)
                                goto label_cfef1c
                    
                    if (x22_1 != 0)
                        int64_t x1_5 = *(arg1 + 0x20)
                        
                        if (x1_5 == 0)
                            goto label_cff2b0
                        
                        memmove(x24_2, x1_5, x22_1)
                    
                    int64_t x8_19 = *(arg1 + 0x48)
                    size_t x27_3 = *(arg1 + 0x50)
                    size_t x28_3 = x8_19 - x27_3
                    
                    if (x8_19 != x27_3)
                        int64_t x0_10 = *(arg1 + 8)
                        
                        if (x0_10 == 0)
                            goto label_cff2b0
                        
                        memmove(x0_10, x0_10 + x27_3, x28_3)
                    
                    int64_t x26_3 = *(arg1 + 8)
                    int64_t x25_2 = *(arg1 + 0x20)
                    
                    if (x27_3 != 0)
                        if (x25_2 == 0)
                            goto label_cff2b0
                        
                        memmove(x26_3 + x28_3, x25_2, x27_3)
                        x26_3 = *(arg1 + 8)
                        x25_2 = *(arg1 + 0x20)
                    
                    int64_t* x27_2 = *(arg1 + 0x40)
                    x24_2 += x22_1
                    entry_result_5 = entry_result_3 - x22_1
                    v0, v1, v2, v3, v4, v5, v6, v7 = (*(*x27_2 + 0x48))(x27_2, x26_3, x25_2, 
                        (*(arg1 + 0x10) - x26_3) u/ (*(*x27_2 + 0x30))(x27_2))
                    x28_1 = var_70_1
                    x19_4 += 1
                    *(arg1 + 0x38) = 0
                    entry_result_3 = entry_result_5
                while (entry_result_5 u>= x22_1)
        else
            x24_2 = x28_1
        
        if (entry_result_3 == 0)
            return entry_result
        
        void* x9_7 = *(arg1 + 0x20)
        int64_t x8_9 = entry_result_3 & 0xffffffffffffffe0
        
        if (x8_9 != 0)
            int64_t x10_5 = 0
            
            if (x8_9 == 0x20 || x9_7 + 0x18 + x8_9 - 0x20 u< x9_7 + 0x18
                    || x9_7 + 0x10 + x8_9 - 0x20 u< x9_7 + 0x10
                    || x9_7 + 8 + x8_9 - 0x20 u< x9_7 + 8 || x9_7 + x8_9 - 0x20 u< x9_7)
                goto label_cff194
            
            if (x9_7 u>= x24_2 + x8_9 || x24_2 u>= x9_7 + x8_9)
                int64_t i_22 = (((x8_9 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                x10_5 = i_22 << 5
                int64_t i_16 = i_22
                uint64_t x14_9 = x24_2
                void* x15_5 = x9_7
                int64_t i_2
                
                do
                    v0.q = *x15_5
                    v1.q = *(x15_5 + 8)
                    v2.q = *(x15_5 + 0x10)
                    v3.q = *(x15_5 + 0x18)
                    v0:8.q = *(x15_5 + 0x20)
                    v1:8.q = *(x15_5 + 0x28)
                    v2:8.q = *(x15_5 + 0x30)
                    v3:8.q = *(x15_5 + 0x38)
                    v4.q = *x14_9
                    v5.q = *(x14_9 + 8)
                    v6.q = *(x14_9 + 0x10)
                    v7.q = *(x14_9 + 0x18)
                    v4:8.q = *(x14_9 + 0x20)
                    v5:8.q = *(x14_9 + 0x28)
                    v6:8.q = *(x14_9 + 0x30)
                    v7:8.q = *(x14_9 + 0x38)
                    x14_9 += 0x40
                    i_2 = i_16
                    i_16 -= 2
                    int128_t v16_3 = v4 ^ v0
                    int128_t v17_3 = v5 ^ v1
                    int128_t v18_3 = v6 ^ v2
                    int128_t v19_3 = v7 ^ v3
                    *x15_5 = v16_3.q
                    *(x15_5 + 8) = v17_3.q
                    *(x15_5 + 0x10) = v18_3.q
                    *(x15_5 + 0x18) = v19_3.q
                    *(x15_5 + 0x20) = v16_3:8.q
                    *(x15_5 + 0x28) = v17_3:8.q
                    *(x15_5 + 0x30) = v18_3:8.q
                    *(x15_5 + 0x38) = v19_3:8.q
                    x15_5 += 0x40
                while (i_2 != 2)
                
                if (((x8_9 - 0x20) u>> 5) + 1 != i_22)
                    goto label_cff194
            else
                x10_5 = 0
            label_cff194:
                int64_t i_13 = x10_5 - x8_9
                void* x10_19 = x24_2 + x10_5 + 0x10
                void* x12_13 = x9_7 + x10_5 + 0x10
                int64_t i_3
                
                do
                    v2 = *(x10_19 - 0x10)
                    v3 = *x10_19
                    i_3 = i_13
                    i_13 += 0x20
                    x10_19 += 0x20
                    v1 = v3 ^ *x12_13
                    *(x12_13 - 0x10) ^= v2
                    *x12_13 = v1
                    x12_13 += 0x20
                while (i_3 != -0x20)
        
        if (entry_result_3 != x8_9)
            if ((entry_result_3 & 0x18) == 0)
            label_cff220:
                int64_t i_11 = entry_result_3 - x8_9
                void* x9_23 = x9_7 + x8_9
                char* x8_30 = x24_2 + x8_9
                int64_t i_4
                
                do
                    char x11_21 = *x8_30
                    x8_30 = &x8_30[1]
                    i_4 = i_11
                    i_11 -= 1
                    *x9_23 ^= x11_21
                    x9_23 += 1
                while (i_4 != 1)
            else
                void* x10_20 = x9_7 + x8_9
                int64_t* x11_20 = x24_2 + x8_9
                
                if (x10_20 u< x24_2 + entry_result_3 && x11_20 u< x9_7 + entry_result_3)
                    goto label_cff220
                
                int64_t x12_15 = entry_result_3 & 7
                int64_t i_17 = (entry_result_3 & 0x1f) - x12_15
                x8_9 += i_17
                int64_t i_5
                
                do
                    v0.q = *x11_20
                    x11_20 = &x11_20[1]
                    v1.q = *x10_20
                    i_5 = i_17
                    i_17 -= 8
                    *x10_20 = (v1 ^ v0).q
                    x10_20 += 8
                while (i_5 != 8)
                
                if (x12_15 != 0)
                    goto label_cff220
        
        if (x24_2 != 0)
            int64_t x1_12 = *(arg1 + 0x20)
            
            if (x1_12 != 0)
                memmove(x24_2, x1_12, entry_result_3)
                *(arg1 + 0x38) += entry_result_3
                return entry_result
    else
        void* entry_result_4 = x22_1 - x9_2
        size_t entry_result_2
        
        entry_result_2 = entry_result_4 u< entry_result ? entry_result_4 : entry_result
        
        void* x10_2 = entry_result_2 & 0xffffffffffffffe0
        
        if (x10_2 != 0)
            int64_t x11_1 = 0
            
            if (x10_2 == 0x20)
                goto label_cfeaf4
            
            void* x14_1 = x9_2 + x8
            void* x12_1 = x8 + x9_2
            
            if (x14_1 + 0x18 + x10_2 - 0x20 u< x14_1 + 0x18
                    || x14_1 + 0x10 + x10_2 - 0x20 u< x14_1 + 0x10
                    || x14_1 + 8 + x10_2 - 0x20 u< x14_1 + 8 || x12_1 + x10_2 - 0x20 u< x12_1)
                goto label_cfeaf4
            
            if (x12_1 u>= x28_1 + x10_2 || x8 + x9_2 + x10_2 u<= x28_1)
                int64_t i_23 = (((x10_2 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                x11_1 = i_23 << 5
                int64_t i_19 = i_23
                uint64_t x16_3 = x28_1
                int64_t i_6
                
                do
                    v0.q = *x12_1
                    v1.q = *(x12_1 + 8)
                    v2.q = *(x12_1 + 0x10)
                    v3.q = *(x12_1 + 0x18)
                    v0:8.q = *(x12_1 + 0x20)
                    v1:8.q = *(x12_1 + 0x28)
                    v2:8.q = *(x12_1 + 0x30)
                    v3:8.q = *(x12_1 + 0x38)
                    v4.q = *x16_3
                    v5.q = *(x16_3 + 8)
                    v6.q = *(x16_3 + 0x10)
                    v7.q = *(x16_3 + 0x18)
                    v4:8.q = *(x16_3 + 0x20)
                    v5:8.q = *(x16_3 + 0x28)
                    v6:8.q = *(x16_3 + 0x30)
                    v7:8.q = *(x16_3 + 0x38)
                    x16_3 += 0x40
                    i_6 = i_19
                    i_19 -= 2
                    int128_t v16_1 = v4 ^ v0
                    int128_t v17_1 = v5 ^ v1
                    int128_t v18_1 = v6 ^ v2
                    int128_t v19_1 = v7 ^ v3
                    *x12_1 = v16_1.q
                    *(x12_1 + 8) = v17_1.q
                    *(x12_1 + 0x10) = v18_1.q
                    *(x12_1 + 0x18) = v19_1.q
                    *(x12_1 + 0x20) = v16_1:8.q
                    *(x12_1 + 0x28) = v17_1:8.q
                    *(x12_1 + 0x30) = v18_1:8.q
                    *(x12_1 + 0x38) = v19_1:8.q
                    x12_1 += 0x40
                while (i_6 != 2)
                
                if (((x10_2 - 0x20) u>> 5) + 1 != i_23)
                    goto label_cfeaf4
            else
                x11_1 = nullptr
            label_cfeaf4:
                void* i_14 = x11_1 - x10_2
                void* x11_7 = x11_1 + x9_2 + x8 + 0x10
                void* x13_4 = x11_1 + x28_1 + 0x10
                void* i_7
                
                do
                    v2 = *(x13_4 - 0x10)
                    v3 = *x13_4
                    i_7 = i_14
                    i_14 += 0x20
                    x13_4 += 0x20
                    v1 = v3 ^ *x11_7
                    *(x11_7 - 0x10) ^= v2
                    *x11_7 = v1
                    x11_7 += 0x20
                while (i_7 != -0x20)
        
        if (entry_result_2 != x10_2)
            if ((entry_result_2 & 0x18) == 0)
            label_cfeb94:
                void* i_12 = entry_result_2 - x10_2
                void* x8_1 = x8 + x10_2 + x9_2
                char* x9_4 = x28_1 + x10_2
                void* i_8
                
                do
                    char x10_3 = *x9_4
                    x9_4 = &x9_4[1]
                    i_8 = i_12
                    i_12 -= 1
                    *x8_1 ^= x10_3
                    x8_1 += 1
                while (i_8 != 1)
            else
                int64_t* x11_9 = x8 + x9_2 + x10_2
                int64_t* x12_3 = x28_1 + x10_2
                
                if (x11_9 u< x28_1 + entry_result_2 && x12_3 u< x8 + x9_2 + entry_result_2)
                    goto label_cfeb94
                
                int64_t x13_7 = entry_result_2 & 7
                int64_t i_18 = (entry_result_2 & 0x1f) - x13_7
                x10_2 += i_18
                int64_t i_9
                
                do
                    v0.q = *x12_3
                    x12_3 = &x12_3[1]
                    v1.q = *x11_9
                    i_9 = i_18
                    i_18 -= 8
                    *x11_9 = (v1 ^ v0).q
                    x11_9 = &x11_9[1]
                while (i_9 != 8)
                
                if (x13_7 != 0)
                    goto label_cfeb94
        
        int64_t x8_2 = *(arg1 + 0x38)
        
        if (entry_result_2 == 0)
            goto label_cfebe0
        
        if (x28_1 != 0)
            int64_t x9_5 = *(arg1 + 0x20)
            
            if (x9_5 != 0)
                v0, v1, v2, v3, v4, v5, v6, v7 = memmove(x28_1, x9_5 + x8_2, entry_result_2)
                x8_2 = *(arg1 + 0x38)
            label_cfebe0:
                int64_t x8_3 = x8_2 + entry_result_2
                entry_result_1 = entry_result - entry_result_2
                x28_1 += entry_result_2
                *(arg1 + 0x38) = x8_3
                
                if (x8_3 != x22_1)
                    goto label_cfec80
                
                int64_t x8_4 = *(arg1 + 0x48)
                size_t x26_1 = *(arg1 + 0x50)
                size_t x27_1 = x8_4 - x26_1
                
                if (x8_4 == x26_1)
                    goto label_cfec18
                
                int64_t x0_1 = *(arg1 + 8)
                
                if (x0_1 != 0)
                    memmove(x0_1, x0_1 + x26_1, x27_1)
                label_cfec18:
                    int64_t x25_1 = *(arg1 + 8)
                    int64_t x24_1 = *(arg1 + 0x20)
                    
                    if (x26_1 == 0)
                        goto label_cfec40
                    
                    if (x24_1 != 0)
                        memmove(x25_1 + x27_1, x24_1, x26_1)
                        x25_1 = *(arg1 + 8)
                        x24_1 = *(arg1 + 0x20)
                    label_cfec40:
                        int64_t* x26_2 = *(arg1 + 0x40)
                        v0, v1, v2, v3, v4, v5, v6, v7 = (*(*x26_2 + 0x48))(x26_2, x25_1, x24_1, 
                            (*(arg1 + 0x10) - x25_1) u/ (*(*x26_2 + 0x30))(x26_2))
                        *(arg1 + 0x38) = 0
                        goto label_cfec80
label_cff2b0:
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    Botan::SymmetricAlgorithm::throw_key_not_set_error()

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0_21
uint64_t x1_13
x0_21, x1_13 = Botan::throw_invalid_state("m_state.empty() == false", "process", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
return Botan::CFB_Encryption::finish(x0_21, x1_13) __tailcall
