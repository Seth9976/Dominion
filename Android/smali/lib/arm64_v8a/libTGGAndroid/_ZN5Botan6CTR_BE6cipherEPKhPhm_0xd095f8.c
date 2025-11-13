// 函数: _ZN5Botan6CTR_BE6cipherEPKhPhm
// 地址: 0xd095f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t const* x19 = arg1
uint8_t* var_68 = arg2

if (*(arg1 + 0x58) == *(arg1 + 0x60))
    return Botan::CTR_BE::add_counter(Botan::SymmetricAlgorithm::throw_key_not_set_error())
        __tailcall

int64_t* x22 = *(x19 + 0x40)
int64_t x8_1 = *(x19 + 0x48)
void* x10 = *(x19 + 0x70)
uint64_t x27 = arg3
void* x24 = x8_1 - x22
void* x25
void* x26
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
void* entry_x3

if (x10 == 0)
    x25 = entry_x3
    
    if (x25 u< x24)
        x26 = var_68
    else
    label_d09ab8:
        void* x28_1 = x24 & 0xffffffffffffffe0
        uint64_t var_70_1 = x27
        
        if (x28_1 == 0)
            x26 = var_68
            int64_t x21_2 = 0
            void* x23_2 = x24 & 0xffffffffffffffe0
            void* fp_2 = x24 & 0xfffffffffffffff8
            
            do
                if (x28_1 != x24)
                    void* x8_30
                    
                    if (x24 u>= 8)
                        int64_t x9_18 = x24 * x21_2
                        void* x11_27 = x24 + x9_18
                        x8_30 = nullptr
                        int64_t x10_19 = var_70_1 + x9_18
                        void* x12_28 = var_70_1 + x11_27
                        
                        if (((x10_19 u< var_68 + x11_27 ? 1 : 0)
                                & (&var_68[x9_18] u< x12_28 ? 1 : 0) & 1) != 0
                                || ((x10_19 u< x8_1 ? 1 : 0) & (x22 u< x12_28 ? 1 : 0) & 1) != 0)
                            goto label_d09ee4
                        
                        void* x9_23
                        
                        if (x24 u>= 0x20)
                            int64_t x8_31 = 0
                            
                            do
                                void* x9_24 = x26 + x8_31
                                void* x10_21 = &x22[2] + x8_31
                                int128_t* x11_31 = x27 + x8_31
                                x8_31 += 0x20
                                v1 = *x10_21 ^ *(x9_24 + 0x10)
                                *x11_31 = *(x10_21 - 0x10) ^ *x9_24
                                x11_31[1] = v1
                            while (x23_2 != x8_31)
                            
                            if (x24 != x23_2)
                                x9_23 = x23_2
                                x8_30 = x23_2
                                
                                if ((x24 & 0x18) == 0)
                                    goto label_d09ee4
                                
                                goto label_d09ebc
                        else
                            x9_23 = nullptr
                        label_d09ebc:
                            
                            do
                                v0.q = *(x26 + x9_23)
                                v1.q = *(x22 + x9_23)
                                *(x27 + x9_23) = (v1 ^ v0).q
                                x9_23 += 8
                            while (fp_2 != x9_23)
                            
                            x8_30 = fp_2
                            
                            if (x24 != fp_2)
                                goto label_d09ee4
                    else
                        x8_30 = nullptr
                    label_d09ee4:
                        
                        do
                            *(x27 + x8_30) = *(x22 + x8_30) ^ *(x26 + x8_30)
                            x8_30 += 1
                        while (x24 != x8_30)
                
                *(x19 + 0x20)
                x25 -= x24
                x26 += x24
                x27 += x24
                Botan::CTR_BE::add_counter(x19)
                int64_t* x0_6 = *(x19 + 8)
                arg1, v0, v1, v2, v3, v4, v5, v6, v7 =
                    (*(*x0_6 + 0x48))(x0_6, *(x19 + 0x28), *(x19 + 0x40), *(x19 + 0x20))
                x21_2 += 1
            while (x25 u>= x24)
        else
            void* x8_10 = x22 + x28_1
            int64_t x20_1 = x24 - x28_1
            x26 = var_68
            int64_t i_23 = x20_1 & 0xffffffffffffffe0
            int64_t x10_10 = x20_1 & 0xfffffffffffffff8
            int64_t i_22 = (((x28_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
            int64_t fp_1 = 0
            
            do
                int64_t x10_11 = x24 * fp_1
                void* x9_12 = x28_1 + x10_11
                void* x8_17 = var_70_1 + x9_12
                void* x9_13 = var_68 + x9_12
                int64_t x11_21 = 0
                
                if (x28_1 == 0x20)
                label_d09c70:
                    
                    do
                        void* x12_24 = x26 + x11_21
                        void* x13_23 = &x22[2] + x11_21
                        int64_t x14_22 = x27 + x11_21
                        x11_21 += 0x20
                        v1 = *x13_23 ^ *(x12_24 + 0x10)
                        *x14_22 = *(x13_23 - 0x10) ^ *x12_24
                        *(x14_22 + 0x10) = v1
                    while (x28_1 != x11_21)
                else
                    int64_t x12_20 = var_70_1 + x10_11
                    
                    if (x12_20 + 0x10 + x28_1 - 0x20 u< x12_20 + 0x10
                            || x12_20 + 0x18 + x28_1 - 0x20 u< x12_20 + 0x18
                            || x12_20 + 8 + x28_1 - 0x20 u< x12_20 + 8
                            || x12_20 + x28_1 - 0x20 u< x12_20)
                        goto label_d09c70
                    
                    x11_21 = 0
                    
                    if (((x12_20 u< x9_13 ? 1 : 0) & (&var_68[x10_11] u< x8_17 ? 1 : 0) & 1) != 0
                            || ((x12_20 u< x8_10 ? 1 : 0) & (x22 u< x8_17 ? 1 : 0) & 1) != 0)
                        goto label_d09c70
                    
                    int64_t i_17 = i_22
                    int64_t x11_22 = 0
                    int64_t i
                    
                    do
                        void* x13_21 = x26 + x11_22
                        void* x14_21 = x22 + x11_22
                        v0.q = *x13_21
                        v1.q = *(x13_21 + 8)
                        v2.q = *(x13_21 + 0x10)
                        v3.q = *(x13_21 + 0x18)
                        v0:8.q = *(x13_21 + 0x20)
                        v1:8.q = *(x13_21 + 0x28)
                        v2:8.q = *(x13_21 + 0x30)
                        v3:8.q = *(x13_21 + 0x38)
                        v4.q = *x14_21
                        v5.q = *(x14_21 + 8)
                        v6.q = *(x14_21 + 0x10)
                        v7.q = *(x14_21 + 0x18)
                        v4:8.q = *(x14_21 + 0x20)
                        v5:8.q = *(x14_21 + 0x28)
                        v6:8.q = *(x14_21 + 0x30)
                        v7:8.q = *(x14_21 + 0x38)
                        int64_t* x13_22 = x27 + x11_22
                        i = i_17
                        i_17 -= 2
                        x11_22 += 0x40
                        int128_t v16_3 = v4 ^ v0
                        int128_t v17_3 = v5 ^ v1
                        int128_t v18_3 = v6 ^ v2
                        int128_t v19_3 = v7 ^ v3
                        *x13_22 = v16_3.q
                        x13_22[1] = v17_3.q
                        x13_22[2] = v18_3.q
                        x13_22[3] = v19_3.q
                        x13_22[4] = v16_3:8.q
                        x13_22[5] = v17_3:8.q
                        x13_22[6] = v18_3:8.q
                        x13_22[7] = v19_3:8.q
                    while (i != 2)
                    x11_21 = i_22 << 5
                    
                    if (((x28_1 - 0x20) u>> 5) + 1 != i_22)
                        goto label_d09c70
                
                if (x28_1 != x24)
                    void* x11_24 = x28_1
                    
                    if (x20_1 u< 8)
                    label_d09d7c:
                        
                        do
                            *(x27 + x11_24) = *(x22 + x11_24) ^ *(x26 + x11_24)
                            x11_24 += 1
                        while (x24 != x11_24)
                    else
                        void* x10_12 = x24 + x10_11
                        void* x11_25 = var_70_1 + x10_12
                        x11_24 = x28_1
                        
                        if (((x8_17 u< var_68 + x10_12 ? 1 : 0) & (x9_13 u< x11_25 ? 1 : 0) & 1)
                                != 0)
                            goto label_d09d7c
                        
                        x11_24 = x28_1
                        
                        if (((x8_17 u< x8_1 ? 1 : 0) & (x8_10 u< x11_25 ? 1 : 0) & 1) != 0)
                            goto label_d09d7c
                        
                        int64_t i_26
                        
                        if (x20_1 u>= 0x20)
                            int64_t i_12 = i_23
                            void* x8_20 = x28_1
                            int64_t i_1
                            
                            do
                                void* x10_16 = x26 + x8_20
                                void* x11_26 = &x22[2] + x8_20
                                void* x10_17 = x27 + x8_20
                                i_1 = i_12
                                i_12 -= 0x20
                                x8_20 += 0x20
                                v1 = *x11_26 ^ *(x10_16 + 0x10)
                                *x10_17 = *(x11_26 - 0x10) ^ *x10_16
                                *(x10_17 + 0x10) = v1
                            while (i_1 != 0x20)
                            
                            if (x20_1 != i_23)
                                i_26 = i_23
                                x11_24 = x28_1 + i_23
                                
                                if ((x20_1 & 0x18) == 0)
                                    goto label_d09d7c
                                
                                goto label_d09d34
                        else
                            i_26 = 0
                        label_d09d34:
                            void* x8_23 = x28_1 + i_26
                            int64_t i_13 = neg.q(x10_10) + i_26
                            int64_t i_2
                            
                            do
                                v0.q = *(x26 + x8_23)
                                v1.q = *(x22 + x8_23)
                                i_2 = i_13
                                i_13 += 8
                                *(x27 + x8_23) = (v1 ^ v0).q
                                x8_23 += 8
                            while (i_2 != -8)
                            x11_24 = x28_1 + x10_10
                            
                            if (x20_1 != x10_10)
                                goto label_d09d7c
                
                *(x19 + 0x20)
                x25 -= x24
                x26 += x24
                x27 += x24
                Botan::CTR_BE::add_counter(x19)
                int64_t* x0_4 = *(x19 + 8)
                arg1, v0, v1, v2, v3, v4, v5, v6, v7 =
                    (*(*x0_4 + 0x48))(x0_4, *(x19 + 0x28), *(x19 + 0x40), *(x19 + 0x20))
                fp_1 += 1
            while (x25 u>= x24)
else
    void* x8_2 = x24 - x10
    void* x9_1
    
    x9_1 = x8_2 u< entry_x3 ? x8_2 : entry_x3
    
    void* x11_1 = x9_1 & 0xffffffffffffffe0
    
    if (x11_1 != 0)
        int64_t x12_1 = 0
        
        if (x11_1 == 0x20 || x27 + 0x10 + x11_1 - 0x20 u< x27 + 0x10
            || x27 + 0x18 + x11_1 - 0x20 u< x27 + 0x18 || x27 + 8 + x11_1 - 0x20 u< x27 + 8
            || x27 + x11_1 - 0x20 u< x27)
        label_d09730:
            void* i_18 = x12_1 - x11_1
            void* x15_9 = x12_1 + x10 + x22 + 0x10
            void* x12_4 = &var_68[x12_1 + 0x10]
            void* x14_4 = x27 + x12_1 + 0x10
            void* i_3
            
            do
                v0 = *(x12_4 - 0x10)
                v1 = *x12_4
                v2 = *(x15_9 - 0x10)
                v3 = *x15_9
                i_3 = i_18
                i_18 += 0x20
                x12_4 += 0x20
                x15_9 += 0x20
                *(x14_4 - 0x10) = v2 ^ v0
                *x14_4 = v3 ^ v1
                x14_4 += 0x20
            while (i_3 != -0x20)
        else
            void* x16_2 = x27 + x11_1
            int64_t* x13_3 = x22 + x10
            x12_1 = 0
            
            if (((var_68 + x11_1 u> x27 ? 1 : 0) & (x16_2 u> var_68 ? 1 : 0) & 1) != 0
                    || ((x22 + x10 + x11_1 u> x27 ? 1 : 0) & (x13_3 u< x16_2 ? 1 : 0) & 1) != 0)
                goto label_d09730
            
            uint8_t* x17_5 = var_68
            int64_t i_25 = (((x11_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
            x12_1 = i_25 << 5
            int64_t i_21 = i_25
            arg1 = x27
            int64_t i_4
            
            do
                v0.q = *x17_5
                v1.q = *(x17_5 + 8)
                v2.q = *(x17_5 + 0x10)
                v3.q = *(x17_5 + 0x18)
                v0:8.q = *(x17_5 + 0x20)
                v1:8.q = *(x17_5 + 0x28)
                v2:8.q = *(x17_5 + 0x30)
                v3:8.q = *(x17_5 + 0x38)
                x17_5 = &x17_5[0x40]
                v4.q = *x13_3
                v5.q = x13_3[1]
                v6.q = x13_3[2]
                v7.q = x13_3[3]
                v4:8.q = x13_3[4]
                v5:8.q = x13_3[5]
                v6:8.q = x13_3[6]
                v7:8.q = x13_3[7]
                x13_3 = &x13_3[8]
                i_4 = i_21
                i_21 -= 2
                int128_t v16_1 = v4 ^ v0
                int128_t v17_1 = v5 ^ v1
                int128_t v18_1 = v6 ^ v2
                int128_t v19_1 = v7 ^ v3
                *arg1 = v16_1.q
                *(arg1 + 8) = v17_1.q
                *(arg1 + 0x10) = v18_1.q
                *(arg1 + 0x18) = v19_1.q
                *(arg1 + 0x20) = v16_1:8.q
                *(arg1 + 0x28) = v17_1:8.q
                *(arg1 + 0x30) = v18_1:8.q
                *(arg1 + 0x38) = v19_1:8.q
                arg1 = &arg1[0x40]
            while (i_4 != 2)
            
            if (((x11_1 - 0x20) u>> 5) + 1 != i_25)
                goto label_d09730
    
    if (x9_1 != x11_1)
        if ((x9_1 & 0x18) == 0)
        label_d09828:
            int64_t i_15 = x9_1 - x11_1
            char* x13_8 = x27 + x11_1
            void* x10_2 = x22 + x11_1 + x10
            void* x11_3 = var_68 + x11_1
            int64_t i_5
            
            do
                char x14_11 = *x11_3
                x11_3 += 1
                char x15_13 = *x10_2
                x10_2 += 1
                i_5 = i_15
                i_15 -= 1
                *x13_8 = x15_13 ^ x14_11
                x13_8 = &x13_8[1]
            while (i_5 != 1)
        else
            void* x12_5 = x27 + x11_1
            void* x13_4 = x27 + x9_1
            
            if (((x12_5 u< var_68 + x9_1 ? 1 : 0) & (var_68 + x11_1 u< x13_4 ? 1 : 0) & 1) != 0 || (
                    (x12_5 u< x22 + x10 + x9_1 ? 1 : 0) & (x22 + x10 + x11_1 u< x13_4 ? 1 : 0) & 1) != 0)
                goto label_d09828
            
            void* x12_8 = x9_1 & 7
            void* i_20 = (x9_1 & 0x1f) - x12_8
            void* x13_7 = var_68 + x11_1
            void* x16_7 = x22 + x10 + x11_1
            void* x14_9 = x11_1 + i_20
            int64_t* x11_2 = x27 + x11_1
            void* i_6
            
            do
                v0.q = *x13_7
                x13_7 += 8
                v1.q = *x16_7
                x16_7 += 8
                i_6 = i_20
                i_20 -= 8
                *x11_2 = (v1 ^ v0).q
                x11_2 = &x11_2[1]
            while (i_6 != 8)
            x11_1 = x14_9
            
            if (x12_8 != 0)
                goto label_d09828
    
    x25 = entry_x3 - x9_1
    x27 += x9_1
    var_68 += x9_1
    *(x19 + 0x70) += x9_1
    
    if (x8_2 u<= entry_x3)
        *(x19 + 0x20)
        Botan::CTR_BE::add_counter(x19)
        int64_t* x0_2 = *(x19 + 8)
        arg1, v0, v1, v2, v3, v4, v5, v6, v7 =
            (*(*x0_2 + 0x48))(x0_2, *(x19 + 0x28), *(x19 + 0x40), *(x19 + 0x20))
        *(x19 + 0x70) = 0
    
    if (x25 u>= x24)
        goto label_d09ab8
    
    x26 = var_68
void* x8_6 = x25 & 0xffffffffffffffe0

if (x8_6 != 0)
    int64_t x9_3 = 0
    
    if (x8_6 == 0x20 || x27 + 0x10 + x8_6 - 0x20 u< x27 + 0x10
        || x27 + 0x18 + x8_6 - 0x20 u< x27 + 0x18 || x27 + 8 + x8_6 - 0x20 u< x27 + 8
        || x27 + x8_6 - 0x20 u< x27)
    label_d0998c:
        void* i_14 = x9_3 - x8_6
        void* x9_5 = x26 + x9_3 + 0x10
        void* x11_12 = x27 + x9_3 + 0x10
        void* x12_14 = x22 + x9_3 + 0x10
        void* i_7
        
        do
            v0 = *(x9_5 - 0x10)
            v1 = *x9_5
            v2 = *(x12_14 - 0x10)
            v3 = *x12_14
            i_7 = i_14
            i_14 += 0x20
            x9_5 += 0x20
            x12_14 += 0x20
            *(x11_12 - 0x10) = v2 ^ v0
            *x11_12 = v3 ^ v1
            x11_12 += 0x20
        while (i_7 != -0x20)
    else
        void* x12_11 = x27 + x8_6
        x9_3 = 0
        
        if (((x27 u< x26 + x8_6 ? 1 : 0) & (x26 u< x12_11 ? 1 : 0) & 1) != 0
                || ((x27 u< x22 + x8_6 ? 1 : 0) & (x22 u< x12_11 ? 1 : 0) & 1) != 0)
            goto label_d0998c
        
        int64_t i_24 = (((x8_6 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x9_3 = i_24 << 5
        int64_t i_16 = i_24
        int64_t* x13_12 = x22
        void* x14_15 = x26
        uint64_t x15_15 = x27
        int64_t i_8
        
        do
            v0.q = *x14_15
            v1.q = *(x14_15 + 8)
            v2.q = *(x14_15 + 0x10)
            v3.q = *(x14_15 + 0x18)
            v0:8.q = *(x14_15 + 0x20)
            v1:8.q = *(x14_15 + 0x28)
            v2:8.q = *(x14_15 + 0x30)
            v3:8.q = *(x14_15 + 0x38)
            x14_15 += 0x40
            v4.q = *x13_12
            v5.q = x13_12[1]
            v6.q = x13_12[2]
            v7.q = x13_12[3]
            v4:8.q = x13_12[4]
            v5:8.q = x13_12[5]
            v6:8.q = x13_12[6]
            v7:8.q = x13_12[7]
            x13_12 = &x13_12[8]
            i_8 = i_16
            i_16 -= 2
            int128_t v16_2 = v4 ^ v0
            int128_t v17_2 = v5 ^ v1
            int128_t v18_2 = v6 ^ v2
            int128_t v19_2 = v7 ^ v3
            *x15_15 = v16_2.q
            *(x15_15 + 8) = v17_2.q
            *(x15_15 + 0x10) = v18_2.q
            *(x15_15 + 0x18) = v19_2.q
            *(x15_15 + 0x20) = v16_2:8.q
            *(x15_15 + 0x28) = v17_2:8.q
            *(x15_15 + 0x30) = v18_2:8.q
            *(x15_15 + 0x38) = v19_2:8.q
            x15_15 += 0x40
        while (i_8 != 2)
        
        if (((x8_6 - 0x20) u>> 5) + 1 != i_24)
            goto label_d0998c

if (x25 != x8_6)
    if ((x25 & 0x18) == 0)
    label_d09a58:
        int64_t i_11 = x25 - x8_6
        void* x10_9 = x27 + x8_6
        void* x11_18 = x22 + x8_6
        void* x8_7 = x26 + x8_6
        int64_t i_9
        
        do
            char x12_18 = *x8_7
            x8_7 += 1
            char x13_14 = *x11_18
            x11_18 += 1
            i_9 = i_11
            i_11 -= 1
            *x10_9 = x13_14 ^ x12_18
            x10_9 += 1
        while (i_9 != 1)
    else
        void* x9_6 = x27 + x8_6
        void* x10_6 = x27 + x25
        
        if (((x9_6 u< x26 + x25 ? 1 : 0) & (x26 + x8_6 u< x10_6 ? 1 : 0) & 1) != 0
                || ((x9_6 u< x22 + x25 ? 1 : 0) & (x22 + x8_6 u< x10_6 ? 1 : 0) & 1) != 0)
            goto label_d09a58
        
        void* x9_9 = x25 & 7
        void* i_19 = (x25 & 0x1f) - x9_9
        void* x10_8 = x26 + x8_6
        void* x12_17 = x22 + x8_6
        void* x11_17 = x8_6 + i_19
        void* x8_5 = x27 + x8_6
        void* i_10
        
        do
            v0.q = *x10_8
            x10_8 += 8
            v1.q = *x12_17
            x12_17 += 8
            i_10 = i_19
            i_19 -= 8
            *x8_5 = (v1 ^ v0).q
            x8_5 += 8
        while (i_10 != 8)
        x8_6 = x11_17
        
        if (x9_9 != 0)
            goto label_d09a58

*(x19 + 0x70) += x25
