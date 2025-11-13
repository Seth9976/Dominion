// 函数: _ZN5Botan7CBC_MAC8add_dataEPKhm
// 地址: 0xcf1134
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x18) == *(arg1 + 0x20))
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::CBC_MAC::output_length() __tailcall

int64_t x0_1
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
x0_1, v0, v1, v2, v3, v4, v5, v6, v7 = (*(**(arg1 + 0x10) + 0x30))()
void* x8_3 = *(arg1 + 0x30)
void* x10 = *(arg1 + 0x18)
void* x9_1 = x0_1 - x8_3
void* entry_x2
void* x24

x24 = x9_1 u> entry_x2 ? entry_x2 : x9_1

void* x9_2 = x24 & 0xffffffffffffffe0

if (x9_2 != 0)
    int64_t x11_1 = 0
    
    if (x9_2 == 0x20)
        goto label_cf1244
    
    void* x14_1 = x8_3 + x10
    void* x12_1 = x10 + x8_3
    
    if (x14_1 + 0x18 + x9_2 - 0x20 u< x14_1 + 0x18 || x14_1 + 0x10 + x9_2 - 0x20 u< x14_1 + 0x10
            || x14_1 + 8 + x9_2 - 0x20 u< x14_1 + 8 || x12_1 + x9_2 - 0x20 u< x12_1)
        goto label_cf1244
    
    if (x12_1 u>= arg2 + x9_2 || x10 + x8_3 + x9_2 u<= arg2)
        int64_t i_26 = (((x9_2 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x11_1 = i_26 << 5
        int64_t i_23 = i_26
        uint64_t x16_3 = arg2
        int64_t i
        
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
            i = i_23
            i_23 -= 2
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
        while (i != 2)
        
        if (((x9_2 - 0x20) u>> 5) + 1 != i_26)
            goto label_cf1244
    else
        x11_1 = nullptr
    label_cf1244:
        void* i_17 = x11_1 - x9_2
        void* x11_7 = x11_1 + x8_3 + x10 + 0x10
        void* x13_4 = x11_1 + arg2 + 0x10
        void* i_1
        
        do
            v2 = *(x13_4 - 0x10)
            v3 = *x13_4
            i_1 = i_17
            i_17 += 0x20
            x13_4 += 0x20
            v1 = v3 ^ *x11_7
            *(x11_7 - 0x10) ^= v2
            *x11_7 = v1
            x11_7 += 0x20
        while (i_1 != -0x20)

if (x24 != x9_2)
    if ((x24 & 0x18) == 0)
    label_cf12e4:
        void* i_14 = x24 - x9_2
        void* x8_5 = x10 + x9_2 + x8_3
        char* x9_3 = arg2 + x9_2
        void* i_2
        
        do
            char x10_1 = *x9_3
            x9_3 = &x9_3[1]
            i_2 = i_14
            i_14 -= 1
            *x8_5 ^= x10_1
            x8_5 += 1
        while (i_2 != 1)
    else
        int64_t* x11_9 = x10 + x8_3 + x9_2
        int64_t* x12_3 = arg2 + x9_2
        
        if (x11_9 u< arg2 + x24 && x12_3 u< x10 + x8_3 + x24)
            goto label_cf12e4
        
        void* x13_7 = x24 & 7
        void* i_22 = (x24 & 0x1f) - x13_7
        x9_2 += i_22
        void* i_3
        
        do
            v0.q = *x12_3
            x12_3 = &x12_3[1]
            v1.q = *x11_9
            i_3 = i_22
            i_22 -= 8
            *x11_9 = (v1 ^ v0).q
            x11_9 = &x11_9[1]
        while (i_3 != 8)
        
        if (x13_7 != 0)
            goto label_cf12e4

int64_t* x0_2 = *(arg1 + 0x10)
void* x22 = *(arg1 + 0x30) + x24
*(arg1 + 0x30) = x22
int64_t result = (*(*x0_2 + 0x30))()

if (x22 u>= result)
    int64_t* x22_1 = *(arg1 + 0x10)
    int64_t x23_1 = *(arg1 + 0x18)
    (*(*x22_1 + 0x48))(x22_1, x23_1, x23_1, (*(arg1 + 0x20) - x23_1) u/ (*(*x22_1 + 0x30))(x22_1))
    void* x23_2 = arg2 + x24
    void* x22_2 = entry_x2 - x24
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    int128_t v4_1
    int128_t v5_1
    int128_t v6_1
    int128_t v7_1
    result, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = (*(**(arg1 + 0x10) + 0x30))()
    
    while (x22_2 u>= result)
        int64_t x0_16
        int128_t v0_2
        int128_t v1_2
        int128_t v2_2
        int128_t v3_2
        int128_t v4_2
        int128_t v5_2
        int128_t v6_2
        int128_t v7_2
        x0_16, v0_2, v1_2, v2_2, v3_2, v4_2, v5_2, v6_2, v7_2 = (*(**(arg1 + 0x10) + 0x30))()
        void* x9_10 = *(arg1 + 0x18)
        int64_t x8_25 = x0_16 & 0xffffffffffffffe0
        
        if (x8_25 != 0)
            int64_t x10_3 = 0
            
            if (x8_25 == 0x20 || x9_10 + 0x18 + x8_25 - 0x20 u< x9_10 + 0x18
                    || x9_10 + 0x10 + x8_25 - 0x20 u< x9_10 + 0x10
                    || x9_10 + 8 + x8_25 - 0x20 u< x9_10 + 8 || x9_10 + x8_25 - 0x20 u< x9_10)
                goto label_cf14d4
            
            if (x9_10 u>= x23_2 + x8_25 || x23_2 u>= x9_10 + x8_25)
                int64_t i_24 = (((x8_25 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                x10_3 = i_24 << 5
                int64_t i_18 = i_24
                void* x14_7 = x23_2
                void* x15_4 = x9_10
                int64_t i_4
                
                do
                    v0_2.q = *x15_4
                    v1_2.q = *(x15_4 + 8)
                    v2_2.q = *(x15_4 + 0x10)
                    v3_2.q = *(x15_4 + 0x18)
                    v0_2:8.q = *(x15_4 + 0x20)
                    v1_2:8.q = *(x15_4 + 0x28)
                    v2_2:8.q = *(x15_4 + 0x30)
                    v3_2:8.q = *(x15_4 + 0x38)
                    v4_2.q = *x14_7
                    v5_2.q = *(x14_7 + 8)
                    v6_2.q = *(x14_7 + 0x10)
                    v7_2.q = *(x14_7 + 0x18)
                    v4_2:8.q = *(x14_7 + 0x20)
                    v5_2:8.q = *(x14_7 + 0x28)
                    v6_2:8.q = *(x14_7 + 0x30)
                    v7_2:8.q = *(x14_7 + 0x38)
                    x14_7 += 0x40
                    i_4 = i_18
                    i_18 -= 2
                    int128_t v16_2 = v4_2 ^ v0_2
                    int128_t v17_2 = v5_2 ^ v1_2
                    int128_t v18_2 = v6_2 ^ v2_2
                    int128_t v19_2 = v7_2 ^ v3_2
                    *x15_4 = v16_2.q
                    *(x15_4 + 8) = v17_2.q
                    *(x15_4 + 0x10) = v18_2.q
                    *(x15_4 + 0x18) = v19_2.q
                    *(x15_4 + 0x20) = v16_2:8.q
                    *(x15_4 + 0x28) = v17_2:8.q
                    *(x15_4 + 0x30) = v18_2:8.q
                    *(x15_4 + 0x38) = v19_2:8.q
                    x15_4 += 0x40
                while (i_4 != 2)
                
                if (((x8_25 - 0x20) u>> 5) + 1 != i_24)
                    goto label_cf14d4
            else
                x10_3 = 0
            label_cf14d4:
                int64_t i_15 = x10_3 - x8_25
                void* x10_7 = x23_2 + x10_3 + 0x10
                void* x12_8 = x9_10 + x10_3 + 0x10
                int64_t i_5
                
                do
                    v2_2 = *(x10_7 - 0x10)
                    v3_2 = *x10_7
                    i_5 = i_15
                    i_15 += 0x20
                    x10_7 += 0x20
                    v1_2 = v3_2 ^ *x12_8
                    *(x12_8 - 0x10) ^= v2_2
                    *x12_8 = v1_2
                    x12_8 += 0x20
                while (i_5 != -0x20)
        
        if (x0_16 != x8_25)
            if ((x0_16 & 0x18) == 0)
            label_cf1560:
                int64_t i_12 = x0_16 - x8_25
                void* x9_11 = x9_10 + x8_25
                void* x8_26 = x23_2 + x8_25
                int64_t i_6
                
                do
                    char x11_14 = *x8_26
                    x8_26 += 1
                    i_6 = i_12
                    i_12 -= 1
                    *x9_11 ^= x11_14
                    x9_11 += 1
                while (i_6 != 1)
            else
                int64_t* x10_8 = x9_10 + x8_25
                void* x11_13 = x23_2 + x8_25
                
                if (x10_8 u< x23_2 + x0_16 && x11_13 u< x9_10 + x0_16)
                    goto label_cf1560
                
                int64_t x12_10 = x0_16 & 7
                int64_t i_19 = (x0_16 & 0x1f) - x12_10
                x8_25 += i_19
                int64_t i_7
                
                do
                    v0_2.q = *x11_13
                    x11_13 += 8
                    v1_2.q = *x10_8
                    i_7 = i_19
                    i_19 -= 8
                    *x10_8 = (v1_2 ^ v0_2).q
                    x10_8 = &x10_8[1]
                while (i_7 != 8)
                
                if (x12_10 != 0)
                    goto label_cf1560
        
        int64_t* x20_1 = *(arg1 + 0x10)
        int64_t x21_1 = *(arg1 + 0x18)
        (*(*x20_1 + 0x48))(x20_1, x21_1, x21_1, 
            (*(arg1 + 0x20) - x21_1) u/ (*(*x20_1 + 0x30))(x20_1))
        int64_t x0_11 = (*(**(arg1 + 0x10) + 0x30))()
        int64_t* x8_21 = *(arg1 + 0x10)
        x23_2 += x0_11
        int64_t x0_13 = (*(*x8_21 + 0x30))(x8_21)
        int64_t* x8_22 = *(arg1 + 0x10)
        x22_2 -= x0_13
        result, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = (*(*x8_22 + 0x30))(x8_22)
    
    void* x9_12 = *(arg1 + 0x18)
    void* x8_27 = x22_2 & 0xffffffffffffffe0
    
    if (x8_27 != 0)
        int64_t x10_9 = 0
        
        if (x8_27 == 0x20 || x9_12 + 0x18 + x8_27 - 0x20 u< x9_12 + 0x18
                || x9_12 + 0x10 + x8_27 - 0x20 u< x9_12 + 0x10
                || x9_12 + 8 + x8_27 - 0x20 u< x9_12 + 8 || x9_12 + x8_27 - 0x20 u< x9_12)
            goto label_cf1648
        
        if (x9_12 u>= x23_2 + x8_27 || x23_2 u>= x9_12 + x8_27)
            int64_t i_25 = (((x8_27 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
            x10_9 = i_25 << 5
            int64_t i_20 = i_25
            void* x14_9 = x23_2
            void* x15_6 = x9_12
            int64_t i_8
            
            do
                v0_1.q = *x15_6
                v1_1.q = *(x15_6 + 8)
                v2_1.q = *(x15_6 + 0x10)
                v3_1.q = *(x15_6 + 0x18)
                v0_1:8.q = *(x15_6 + 0x20)
                v1_1:8.q = *(x15_6 + 0x28)
                v2_1:8.q = *(x15_6 + 0x30)
                v3_1:8.q = *(x15_6 + 0x38)
                v4_1.q = *x14_9
                v5_1.q = *(x14_9 + 8)
                v6_1.q = *(x14_9 + 0x10)
                v7_1.q = *(x14_9 + 0x18)
                v4_1:8.q = *(x14_9 + 0x20)
                v5_1:8.q = *(x14_9 + 0x28)
                v6_1:8.q = *(x14_9 + 0x30)
                v7_1:8.q = *(x14_9 + 0x38)
                x14_9 += 0x40
                i_8 = i_20
                i_20 -= 2
                int128_t v16_3 = v4_1 ^ v0_1
                int128_t v17_3 = v5_1 ^ v1_1
                int128_t v18_3 = v6_1 ^ v2_1
                int128_t v19_3 = v7_1 ^ v3_1
                *x15_6 = v16_3.q
                *(x15_6 + 8) = v17_3.q
                *(x15_6 + 0x10) = v18_3.q
                *(x15_6 + 0x18) = v19_3.q
                *(x15_6 + 0x20) = v16_3:8.q
                *(x15_6 + 0x28) = v17_3:8.q
                *(x15_6 + 0x30) = v18_3:8.q
                *(x15_6 + 0x38) = v19_3:8.q
                x15_6 += 0x40
            while (i_8 != 2)
            
            if (((x8_27 - 0x20) u>> 5) + 1 != i_25)
                goto label_cf1648
        else
            x10_9 = 0
        label_cf1648:
            void* i_16 = x10_9 - x8_27
            void* x10_13 = x23_2 + x10_9 + 0x10
            void* x12_15 = x9_12 + x10_9 + 0x10
            void* i_9
            
            do
                v2_1 = *(x10_13 - 0x10)
                v3_1 = *x10_13
                i_9 = i_16
                i_16 += 0x20
                x10_13 += 0x20
                v1_1 = v3_1 ^ *x12_15
                *(x12_15 - 0x10) ^= v2_1
                *x12_15 = v1_1
                x12_15 += 0x20
            while (i_9 != -0x20)
    
    if (x22_2 != x8_27)
        if ((x22_2 & 0x18) == 0)
        label_cf16d4:
            int64_t i_13 = x22_2 - x8_27
            char* x9_13 = x9_12 + x8_27
            char* x8_28 = x23_2 + x8_27
            int64_t i_10
            
            do
                char x11_20 = *x8_28
                x8_28 = &x8_28[1]
                i_10 = i_13
                i_13 -= 1
                *x9_13 ^= x11_20
                x9_13 = &x9_13[1]
            while (i_10 != 1)
        else
            int64_t* x10_14 = x9_12 + x8_27
            int64_t* x11_19 = x23_2 + x8_27
            
            if (x10_14 u< x23_2 + x22_2 && x11_19 u< x9_12 + x22_2)
                goto label_cf16d4
            
            void* x12_17 = x22_2 & 7
            void* i_21 = (x22_2 & 0x1f) - x12_17
            x8_27 += i_21
            void* i_11
            
            do
                v0_1.q = *x11_19
                x11_19 = &x11_19[1]
                v1_1.q = *x10_14
                i_11 = i_21
                i_21 -= 8
                *x10_14 = (v1_1 ^ v0_1).q
                x10_14 = &x10_14[1]
            while (i_11 != 8)
            
            if (x12_17 != 0)
                goto label_cf16d4
    
    *(arg1 + 0x30) = x22_2

return result
