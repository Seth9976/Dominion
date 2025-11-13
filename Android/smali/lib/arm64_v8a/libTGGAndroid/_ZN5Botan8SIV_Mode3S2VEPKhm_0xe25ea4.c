// 函数: _ZN5Botan8SIV_Mode3S2VEPKhm
// 地址: 0xe25ea4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = *(arg1 + 0x78)
void* result_1
__builtin_memset(&result_1, 0, 0x18)
void* result_4
void* x25

if (x24 == 0)
    x25 = nullptr
    result_4 = nullptr
else
    if ((x24 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    void* result_3 = operator new(x24)
    x25 = result_3 + x24
    result_4 = result_3
    result_1 = result_3
    void* var_58_1 = x25
    memset(result_3, 0, x24)
    void* var_60_1 = x25

int64_t* x24_1 = *(arg1 + 0x28)
(*(*x24_1 + 0x18))(x24_1, result_4, x25 - result_4)
Botan::Buffered_Computation::final()
uint8_t* var_80
int64_t var_78

if (*(arg1 + 0x68) != *(arg1 + 0x60))
    int64_t i = 0
    
    do
        uint8_t* x0_3 = var_80
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        int128_t v3_1
        int128_t v4_1
        int128_t v5_1
        int128_t v6_1
        int128_t v7_1
        v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
            Botan::poly_double_n(x0_3, x0_3, var_78 - x0_3)
        uint8_t* x9_2 = var_80
        int64_t* x27_1 = *(arg1 + 0x60) + i * 0x18
        void* x8_9 = *x27_1
        void* x10_2 = x27_1[1] - x8_9
        
        if (x10_2 u> var_78 - x9_2)
            v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_80)
            x8_9 = *x27_1
            x9_2 = var_80
            x10_2 = x27_1[1] - x8_9
        
        void* x11_2 = x10_2 & 0xffffffffffffffe0
        
        if (x11_2 != 0)
            int64_t x12_2 = 0
            
            if (x11_2 == 0x20 || &x9_2[0x18] + x11_2 - 0x20 u< &x9_2[0x18]
                    || &x9_2[0x10] + x11_2 - 0x20 u< &x9_2[0x10]
                    || &x9_2[8] + x11_2 - 0x20 u< &x9_2[8] || x9_2 + x11_2 - 0x20 u< x9_2)
                goto label_e2608c
            
            if (x9_2 u>= x8_9 + x11_2 || x8_9 u>= x9_2 + x11_2)
                int64_t j_8 = (((x11_2 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                x12_2 = j_8 << 5
                int64_t j_6 = j_8
                void* x16_2 = x8_9
                uint8_t* x17_2 = x9_2
                int64_t j
                
                do
                    v0_1.q = *x17_2
                    v1_1.q = *(x17_2 + 8)
                    v2_1.q = *(x17_2 + 0x10)
                    v3_1.q = *(x17_2 + 0x18)
                    v0_1:8.q = *(x17_2 + 0x20)
                    v1_1:8.q = *(x17_2 + 0x28)
                    v2_1:8.q = *(x17_2 + 0x30)
                    v3_1:8.q = *(x17_2 + 0x38)
                    v4_1.q = *x16_2
                    v5_1.q = *(x16_2 + 8)
                    v6_1.q = *(x16_2 + 0x10)
                    v7_1.q = *(x16_2 + 0x18)
                    v4_1:8.q = *(x16_2 + 0x20)
                    v5_1:8.q = *(x16_2 + 0x28)
                    v6_1:8.q = *(x16_2 + 0x30)
                    v7_1:8.q = *(x16_2 + 0x38)
                    x16_2 += 0x40
                    j = j_6
                    j_6 -= 2
                    int128_t v16_1 = v4_1 ^ v0_1
                    int128_t v17_1 = v5_1 ^ v1_1
                    int128_t v18_1 = v6_1 ^ v2_1
                    int128_t v19_1 = v7_1 ^ v3_1
                    *x17_2 = v16_1.q
                    *(x17_2 + 8) = v17_1.q
                    *(x17_2 + 0x10) = v18_1.q
                    *(x17_2 + 0x18) = v19_1.q
                    *(x17_2 + 0x20) = v16_1:8.q
                    *(x17_2 + 0x28) = v17_1:8.q
                    *(x17_2 + 0x30) = v18_1:8.q
                    *(x17_2 + 0x38) = v19_1:8.q
                    x17_2 = &x17_2[0x40]
                while (j != 2)
                
                if (((x11_2 - 0x20) u>> 5) + 1 != j_8)
                    goto label_e2608c
            else
                x12_2 = 0
            label_e2608c:
                void* j_5 = x12_2 - x11_2
                void* x12_6 = x8_9 + x12_2 + 0x10
                void* x14_4 = &x9_2[x12_2 + 0x10]
                void* j_1
                
                do
                    v2_1 = *(x12_6 - 0x10)
                    v3_1 = *x12_6
                    j_1 = j_5
                    j_5 += 0x20
                    x12_6 += 0x20
                    v1_1 = v3_1 ^ *x14_4
                    *(x14_4 - 0x10) ^= v2_1
                    *x14_4 = v1_1
                    x14_4 += 0x20
                while (j_1 != -0x20)
        
        if (x10_2 != x11_2)
            if ((x10_2 & 0x18) == 0)
            label_e26118:
                void* j_4 = x10_2 - x11_2
                void* x9_3 = x9_2 + x11_2
                void* x8_10 = x8_9 + x11_2
                void* j_2
                
                do
                    char x11_3 = *x8_10
                    x8_10 += 1
                    j_2 = j_4
                    j_4 -= 1
                    *x9_3 ^= x11_3
                    x9_3 += 1
                while (j_2 != 1)
            else
                void* x12_7 = x9_2 + x11_2
                void* x13_4 = x8_9 + x11_2
                
                if (x12_7 u< x8_9 + x10_2 && x13_4 u< x9_2 + x10_2)
                    goto label_e26118
                
                void* x14_6 = x10_2 & 7
                void* j_7 = (x10_2 & 0x1f) - x14_6
                x11_2 += j_7
                void* j_3
                
                do
                    v0_1.q = *x13_4
                    x13_4 += 8
                    v1_1.q = *x12_7
                    j_3 = j_7
                    j_7 -= 8
                    *x12_7 = (v1_1 ^ v0_1).q
                    x12_7 += 8
                while (j_3 != 8)
                
                if (x14_6 != 0)
                    goto label_e26118
        
        i += 1
    while (i != ((*(arg1 + 0x68) - *(arg1 + 0x60)) s>> 3) * -0x5555555555555555)

if (*(arg1 + 0x38) != *(arg1 + 0x30))
    uint8_t* x0_6 = var_80
    int128_t v0_2
    int128_t v1_2
    int128_t v2_2
    int128_t v3_2
    int128_t v4_2
    int128_t v5_2
    int128_t v6_2
    int128_t v7_2
    v0_2, v1_2, v2_2, v3_2, v4_2, v5_2, v6_2, v7_2 = Botan::poly_double_n(x0_6, x0_6, var_78 - x0_6)
    uint8_t* x9_5 = var_80
    void* x8_13 = *(arg1 + 0x30)
    void* x10_5 = *(arg1 + 0x38) - x8_13
    
    if (x10_5 u> var_78 - x9_5)
        v0_2, v1_2, v2_2, v3_2, v4_2, v5_2, v6_2, v7_2 =
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_80)
        x8_13 = *(arg1 + 0x30)
        x9_5 = var_80
        x10_5 = *(arg1 + 0x38) - x8_13
    
    void* x11_6 = x10_5 & 0xffffffffffffffe0
    
    if (x11_6 != 0)
        int64_t x12_10 = 0
        
        if (x11_6 == 0x20 || &x9_5[0x18] + x11_6 - 0x20 u< &x9_5[0x18]
                || &x9_5[0x10] + x11_6 - 0x20 u< &x9_5[0x10] || &x9_5[8] + x11_6 - 0x20 u< &x9_5[8]
                || x9_5 + x11_6 - 0x20 u< x9_5)
            goto label_e26244
        
        if (x9_5 u>= x8_13 + x11_6 || x8_13 u>= x9_5 + x11_6)
            int64_t i_26 = (((x11_6 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
            x12_10 = i_26 << 5
            int64_t i_22 = i_26
            void* x16_4 = x8_13
            uint8_t* x17_4 = x9_5
            int64_t i_1
            
            do
                v0_2.q = *x17_4
                v1_2.q = *(x17_4 + 8)
                v2_2.q = *(x17_4 + 0x10)
                v3_2.q = *(x17_4 + 0x18)
                v0_2:8.q = *(x17_4 + 0x20)
                v1_2:8.q = *(x17_4 + 0x28)
                v2_2:8.q = *(x17_4 + 0x30)
                v3_2:8.q = *(x17_4 + 0x38)
                v4_2.q = *x16_4
                v5_2.q = *(x16_4 + 8)
                v6_2.q = *(x16_4 + 0x10)
                v7_2.q = *(x16_4 + 0x18)
                v4_2:8.q = *(x16_4 + 0x20)
                v5_2:8.q = *(x16_4 + 0x28)
                v6_2:8.q = *(x16_4 + 0x30)
                v7_2:8.q = *(x16_4 + 0x38)
                x16_4 += 0x40
                i_1 = i_22
                i_22 -= 2
                int128_t v16_2 = v4_2 ^ v0_2
                int128_t v17_2 = v5_2 ^ v1_2
                int128_t v18_2 = v6_2 ^ v2_2
                int128_t v19_2 = v7_2 ^ v3_2
                *x17_4 = v16_2.q
                *(x17_4 + 8) = v17_2.q
                *(x17_4 + 0x10) = v18_2.q
                *(x17_4 + 0x18) = v19_2.q
                *(x17_4 + 0x20) = v16_2:8.q
                *(x17_4 + 0x28) = v17_2:8.q
                *(x17_4 + 0x30) = v18_2:8.q
                *(x17_4 + 0x38) = v19_2:8.q
                x17_4 = &x17_4[0x40]
            while (i_1 != 2)
            
            if (((x11_6 - 0x20) u>> 5) + 1 != i_26)
                goto label_e26244
        else
            x12_10 = 0
        label_e26244:
            void* i_18 = x12_10 - x11_6
            void* x12_14 = x8_13 + x12_10 + 0x10
            void* x14_10 = &x9_5[x12_10 + 0x10]
            void* i_2
            
            do
                v2_2 = *(x12_14 - 0x10)
                v3_2 = *x12_14
                i_2 = i_18
                i_18 += 0x20
                x12_14 += 0x20
                v1_2 = v3_2 ^ *x14_10
                *(x14_10 - 0x10) ^= v2_2
                *x14_10 = v1_2
                x14_10 += 0x20
            while (i_2 != -0x20)
    
    if (x10_5 != x11_6)
        if ((x10_5 & 0x18) == 0)
        label_e262d0:
            int64_t i_14 = x10_5 - x11_6
            void* x9_6 = x9_5 + x11_6
            void* x8_14 = x8_13 + x11_6
            int64_t i_3
            
            do
                char x11_7 = *x8_14
                x8_14 += 1
                i_3 = i_14
                i_14 -= 1
                *x9_6 ^= x11_7
                x9_6 += 1
            while (i_3 != 1)
        else
            void* x12_15 = x9_5 + x11_6
            void* x13_8 = x8_13 + x11_6
            
            if (x12_15 u< x8_13 + x10_5 && x13_8 u< x9_5 + x10_5)
                goto label_e262d0
            
            void* x14_12 = x10_5 & 7
            void* i_23 = (x10_5 & 0x1f) - x14_12
            x11_6 += i_23
            void* i_4
            
            do
                v0_2.q = *x13_8
                x13_8 += 8
                v1_2.q = *x12_15
                i_4 = i_23
                i_23 -= 8
                *x12_15 = (v1_2 ^ v0_2).q
                x12_15 += 8
            while (i_4 != 8)
            
            if (x14_12 != 0)
                goto label_e262d0

int64_t x8_15 = *(arg1 + 0x78)
int64_t entry_x2

if (x8_15 u<= entry_x2)
    int64_t* x0_10 = *(arg1 + 0x28)
    int128_t v0_4
    int128_t v1_4
    int128_t v2_4
    int128_t v3_4
    int128_t v4_4
    int128_t v5_4
    int128_t v6_4
    int128_t v7_4
    v0_4, v1_4, v2_4, v3_4, v4_4, v5_4, v6_4, v7_4 =
        (*(*x0_10 + 0x18))(x0_10, arg2, entry_x2 - x8_15)
    int64_t x9_10 = *(arg1 + 0x78)
    uint8_t* x8_18 = var_80
    int64_t x10_10 = x9_10 & 0xffffffffffffffe0
    
    if (x10_10 != 0)
        int64_t x11_10 = 0
        
        if (x10_10 == 0x20 || &x8_18[x10_10 - 8] u< &x8_18[0x18]
                || &x8_18[x10_10 - 0x10] u< &x8_18[0x10] || &x8_18[x10_10 - 0x18] u< &x8_18[8]
                || &x8_18[x10_10 - 0x20] u< x8_18)
            goto label_e265a8
        
        int64_t* x12_24 = arg2 + entry_x2 - x9_10
        
        if (x8_18 u>= arg2 + x10_10 + entry_x2 - x9_10 || x12_24 u>= &x8_18[x10_10])
            int64_t i_27 = (((x10_10 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
            x11_10 = i_27 << 5
            int64_t i_24 = i_27
            uint8_t* x16_7 = x8_18
            int64_t i_5
            
            do
                v0_4.q = *x16_7
                v1_4.q = *(x16_7 + 8)
                v2_4.q = *(x16_7 + 0x10)
                v3_4.q = *(x16_7 + 0x18)
                v0_4:8.q = *(x16_7 + 0x20)
                v1_4:8.q = *(x16_7 + 0x28)
                v2_4:8.q = *(x16_7 + 0x30)
                v3_4:8.q = *(x16_7 + 0x38)
                v4_4.q = *x12_24
                v5_4.q = x12_24[1]
                v6_4.q = x12_24[2]
                v7_4.q = x12_24[3]
                v4_4:8.q = x12_24[4]
                v5_4:8.q = x12_24[5]
                v6_4:8.q = x12_24[6]
                v7_4:8.q = x12_24[7]
                x12_24 = &x12_24[8]
                i_5 = i_24
                i_24 -= 2
                int128_t v16_4 = v4_4 ^ v0_4
                int128_t v17_4 = v5_4 ^ v1_4
                int128_t v18_4 = v6_4 ^ v2_4
                int128_t v19_4 = v7_4 ^ v3_4
                *x16_7 = v16_4.q
                *(x16_7 + 8) = v17_4.q
                *(x16_7 + 0x10) = v18_4.q
                *(x16_7 + 0x18) = v19_4.q
                *(x16_7 + 0x20) = v16_4:8.q
                *(x16_7 + 0x28) = v17_4:8.q
                *(x16_7 + 0x30) = v18_4:8.q
                *(x16_7 + 0x38) = v19_4:8.q
                x16_7 = &x16_7[0x40]
            while (i_5 != 2)
            
            if (((x10_10 - 0x20) u>> 5) + 1 != i_27)
                goto label_e265a8
        else
            x11_10 = nullptr
        label_e265a8:
            void* i_17 = x11_10 - x10_10
            void* x11_19 = &x8_18[x11_10 + 0x10]
            void* x13_17 = x11_10 + entry_x2 - x9_10 + arg2 + 0x10
            void* i_6
            
            do
                v2_4 = *(x13_17 - 0x10)
                v3_4 = *x13_17
                i_6 = i_17
                i_17 += 0x20
                x13_17 += 0x20
                v1_4 = v3_4 ^ *x11_19
                *(x11_19 - 0x10) ^= v2_4
                *x11_19 = v1_4
                x11_19 += 0x20
            while (i_6 != -0x20)
    
    if (x9_10 != x10_10)
        if ((x9_10 & 0x18) == 0)
        label_e26650:
            int64_t i_13 = x10_10 - x9_10
            void* x8_23 = &x8_18[x10_10]
            int64_t i_7
            
            do
                char x11_21 = (arg2 + entry_x2)[i_13]
                i_7 = i_13
                i_13 += 1
                *x8_23 ^= x11_21
                x8_23 += 1
            while (i_7 u< -1)
        else
            void* x11_20 = &x8_18[x10_10]
            
            if (x11_20 u< arg2 + entry_x2 && arg2 + x10_10 + entry_x2 - x9_10 u< &x8_18[x9_10])
                goto label_e26650
            
            int64_t x12_32 = x9_10 & 7
            int64_t i_21 = (x9_10 & 0x1f) - x12_32
            int64_t x14_19 = entry_x2 + x10_10 - x9_10
            x10_10 += i_21
            int64_t* x14_20 = arg2 + x14_19
            int64_t i_8
            
            do
                v0_4.q = *x14_20
                x14_20 = &x14_20[1]
                v1_4.q = *x11_20
                i_8 = i_21
                i_21 -= 8
                *x11_20 = (v1_4 ^ v0_4).q
                x11_20 += 8
            while (i_8 != 8)
            
            if (x12_32 != 0)
                goto label_e26650
    
    int64_t* x0_13 = *(arg1 + 0x28)
    uint8_t* x1_8 = var_80
    (*(*x0_13 + 0x18))(x0_13, x1_8, var_78 - x1_8)
    *(arg1 + 0x28)
    Botan::Buffered_Computation::final()
else
    uint8_t* x0_9 = var_80
    int128_t v0_3
    int128_t v1_3
    int128_t v2_3
    int128_t v3_3
    int128_t v4_3
    int128_t v5_3
    int128_t v6_3
    int128_t v7_3
    v0_3, v1_3, v2_3, v3_3, v4_3, v5_3, v6_3, v7_3 = Botan::poly_double_n(x0_9, x0_9, var_78 - x0_9)
    uint8_t* x9_7 = var_80
    int64_t x8_17 = entry_x2 & 0xffffffffffffffe0
    
    if (x8_17 != 0)
        int64_t x10_7 = 0
        
        if (x8_17 == 0x20 || &x9_7[x8_17 - 8] u< &x9_7[0x18] || &x9_7[x8_17 - 0x10] u< &x9_7[0x10]
                || &x9_7[x8_17 - 0x18] u< &x9_7[8] || &x9_7[x8_17 - 0x20] u< x9_7)
            goto label_e26470
        
        if (x9_7 u>= arg2 + x8_17 || &x9_7[x8_17] u<= arg2)
            int64_t i_25 = (((x8_17 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
            x10_7 = i_25 << 5
            int64_t i_19 = i_25
            uint64_t x14_16 = arg2
            uint8_t* x15_10 = x9_7
            int64_t i_9
            
            do
                v0_3.q = *x15_10
                v1_3.q = *(x15_10 + 8)
                v2_3.q = *(x15_10 + 0x10)
                v3_3.q = *(x15_10 + 0x18)
                v0_3:8.q = *(x15_10 + 0x20)
                v1_3:8.q = *(x15_10 + 0x28)
                v2_3:8.q = *(x15_10 + 0x30)
                v3_3:8.q = *(x15_10 + 0x38)
                v4_3.q = *x14_16
                v5_3.q = *(x14_16 + 8)
                v6_3.q = *(x14_16 + 0x10)
                v7_3.q = *(x14_16 + 0x18)
                v4_3:8.q = *(x14_16 + 0x20)
                v5_3:8.q = *(x14_16 + 0x28)
                v6_3:8.q = *(x14_16 + 0x30)
                v7_3:8.q = *(x14_16 + 0x38)
                x14_16 += 0x40
                i_9 = i_19
                i_19 -= 2
                int128_t v16_3 = v4_3 ^ v0_3
                int128_t v17_3 = v5_3 ^ v1_3
                int128_t v18_3 = v6_3 ^ v2_3
                int128_t v19_3 = v7_3 ^ v3_3
                *x15_10 = v16_3.q
                *(x15_10 + 8) = v17_3.q
                *(x15_10 + 0x10) = v18_3.q
                *(x15_10 + 0x18) = v19_3.q
                *(x15_10 + 0x20) = v16_3:8.q
                *(x15_10 + 0x28) = v17_3:8.q
                *(x15_10 + 0x30) = v18_3:8.q
                *(x15_10 + 0x38) = v19_3:8.q
                x15_10 = &x15_10[0x40]
            while (i_9 != 2)
            
            if (((x8_17 - 0x20) u>> 5) + 1 != i_25)
                goto label_e26470
        else
            x10_7 = 0
        label_e26470:
            int64_t i_16 = x10_7 - x8_17
            void* x10_12 = arg2 + x10_7 + 0x10
            void* x12_26 = &x9_7[x10_7 + 0x10]
            int64_t i_10
            
            do
                v2_3 = *(x10_12 - 0x10)
                v3_3 = *x10_12
                i_10 = i_16
                i_16 += 0x20
                x10_12 += 0x20
                v1_3 = v3_3 ^ *x12_26
                *(x12_26 - 0x10) ^= v2_3
                *x12_26 = v1_3
                x12_26 += 0x20
            while (i_10 != -0x20)
    
    if (x8_17 != entry_x2)
        if ((entry_x2 & 0x18) == 0)
        label_e264fc:
            int64_t i_15 = entry_x2 - x8_17
            void* x9_11 = &x9_7[x8_17]
            char* x8_19 = arg2 + x8_17
            int64_t i_11
            
            do
                char x11_16 = *x8_19
                x8_19 = &x8_19[1]
                i_11 = i_15
                i_15 -= 1
                *x9_11 ^= x11_16
                x9_11 += 1
            while (i_11 != 1)
        else
            void* x10_13 = &x9_7[x8_17]
            int64_t* x11_15 = arg2 + x8_17
            
            if (x10_13 u< arg2 + entry_x2 && x11_15 u< &x9_7[entry_x2])
                goto label_e264fc
            
            int64_t x12_28 = entry_x2 & 7
            int64_t i_20 = (entry_x2 & 0x1f) - x12_28
            x8_17 += i_20
            int64_t i_12
            
            do
                v0_3.q = *x11_15
                x11_15 = &x11_15[1]
                v1_3.q = *x10_13
                i_12 = i_20
                i_20 -= 8
                *x10_13 = (v1_3 ^ v0_3).q
                x10_13 += 8
            while (i_12 != 8)
            
            if (x12_28 != 0)
                goto label_e264fc
    
    uint8_t* x8_20 = var_80
    x8_20[entry_x2] ^= 0x80
    int64_t* x20_1 = *(arg1 + 0x28)
    uint8_t* x1_7 = var_80
    (*(*x20_1 + 0x18))(x20_1, x1_7, var_78 - x1_7)
    Botan::Buffered_Computation::final()

uint8_t* x0_15 = var_80

if (x0_15 != 0)
    uint8_t* var_78_1 = x0_15
    int64_t var_70
    Botan::deallocate_memory(x0_15, var_70 - x0_15, 1)

void* result = result_1

if (result == 0)
    return result

void* result_2 = result
return operator delete(result)
