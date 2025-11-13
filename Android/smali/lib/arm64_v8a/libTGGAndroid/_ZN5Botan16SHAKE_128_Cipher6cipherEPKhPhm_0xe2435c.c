// 函数: _ZN5Botan16SHAKE_128_Cipher6cipherEPKhPhm
// 地址: 0xe2435c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t const* x19 = arg1

if (*(arg1 + 8) == *(arg1 + 0x10))
    uint8_t* x0_5
    uint64_t x1
    x0_5, x1 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::SHAKE_128_Cipher::key_schedule(x0_5, x1) __tailcall

void* x8_1 = *(x19 + 0x38)
int64_t entry_i
int64_t i = entry_i
uint64_t x21 = arg3
void* x10 = 0xa8 - x8_1
uint8_t* x22 = arg2
void* const x9_1
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7

if (x10 u<= entry_i)
    do
        void* x9_4 = *(x19 + 0x20)
        void* x11_9 = x10 & 0xffffffffffffffe0
        
        if (x11_9 != 0)
            int64_t x12_28 = 0
            
            if (x11_9 == 0x20 || x21 + 0x10 + x11_9 - 0x20 u< x21 + 0x10
                || x21 + 0x18 + x11_9 - 0x20 u< x21 + 0x18 || x21 + 8 + x11_9 - 0x20 u< x21 + 8
                || x21 + x11_9 - 0x20 u< x21)
            label_e24790:
                void* j_5 = x12_28 - x11_9
                void* x12_30 = &x22[x12_28 + 0x10]
                void* x14_15 = x21 + x12_28 + 0x10
                void* x15_16 = x9_4 + x12_28 + x8_1 + 0x10
                void* j
                
                do
                    v0 = *(x12_30 - 0x10)
                    v1 = *x12_30
                    v2 = *(x15_16 - 0x10)
                    v3 = *x15_16
                    j = j_5
                    j_5 += 0x20
                    x12_30 += 0x20
                    x15_16 += 0x20
                    *(x14_15 - 0x10) = v2 ^ v0
                    *x14_15 = v3 ^ v1
                    x14_15 += 0x20
                while (j != -0x20)
            else
                void* x16_9 = x21 + x11_9
                int64_t* x13_13 = x9_4 + x8_1
                x12_28 = 0
                
                if (((x21 u< x22 + x11_9 ? 1 : 0) & (x22 u< x16_9 ? 1 : 0) & 1) != 0
                        || ((x21 u< x11_9 + x8_1 + x9_4 ? 1 : 0) & (x13_13 u< x16_9 ? 1 : 0) & 1)
                        != 0)
                    goto label_e24790
                
                int64_t j_8 = (((x11_9 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                x12_28 = j_8 << 5
                int64_t j_7 = j_8
                uint8_t* x17_8 = x22
                uint64_t x0_3 = x21
                int64_t j_1
                
                do
                    v0.q = *x17_8
                    v1.q = *(x17_8 + 8)
                    v2.q = *(x17_8 + 0x10)
                    v3.q = *(x17_8 + 0x18)
                    v0:8.q = *(x17_8 + 0x20)
                    v1:8.q = *(x17_8 + 0x28)
                    v2:8.q = *(x17_8 + 0x30)
                    v3:8.q = *(x17_8 + 0x38)
                    x17_8 = &x17_8[0x40]
                    v4.q = *x13_13
                    v5.q = x13_13[1]
                    v6.q = x13_13[2]
                    v7.q = x13_13[3]
                    v4:8.q = x13_13[4]
                    v5:8.q = x13_13[5]
                    v6:8.q = x13_13[6]
                    v7:8.q = x13_13[7]
                    x13_13 = &x13_13[8]
                    j_1 = j_7
                    j_7 -= 2
                    int128_t v16_2 = v4 ^ v0
                    int128_t v17_2 = v5 ^ v1
                    int128_t v18_2 = v6 ^ v2
                    int128_t v19_2 = v7 ^ v3
                    *x0_3 = v16_2.q
                    *(x0_3 + 8) = v17_2.q
                    *(x0_3 + 0x10) = v18_2.q
                    *(x0_3 + 0x18) = v19_2.q
                    *(x0_3 + 0x20) = v16_2:8.q
                    *(x0_3 + 0x28) = v17_2:8.q
                    *(x0_3 + 0x30) = v18_2:8.q
                    *(x0_3 + 0x38) = v19_2:8.q
                    x0_3 += 0x40
                while (j_1 != 2)
                
                if (((x11_9 - 0x20) u>> 5) + 1 != j_8)
                    goto label_e24790
        
        if (x10 != x11_9)
            if ((x10 & 0x18) == 0)
            label_e24870:
                void* j_4 = x10 - x11_9
                void* x12_35 = x21 + x11_9
                void* x8_8 = x9_4 + x11_9 + x8_1
                void* x9_5 = x22 + x11_9
                void* j_2
                
                do
                    char x11_11 = *x9_5
                    x9_5 += 1
                    char x13_17 = *x8_8
                    x8_8 += 1
                    j_2 = j_4
                    j_4 -= 1
                    *x12_35 = x13_17 ^ x11_11
                    x12_35 += 1
                while (j_2 != 1)
            else
                void* x12_31 = x21 + x11_9
                void* x13_14 = x21 + x10
                
                if (((x12_31 u< x22 + x10 ? 1 : 0) & (x22 + x11_9 u< x13_14 ? 1 : 0) & 1) != 0 || ((
                        x12_31 u< x9_4 + x8_1 + x10 ? 1 : 0) & (x9_4 + x8_1 + x11_9 u< x13_14 ? 1 : 0) & 1)
                        != 0)
                    goto label_e24870
                
                void* x12_34 = x10 & 7
                void* j_6 = (x10 & 0x1f) - x12_34
                void* x13_16 = x22 + x11_9
                int64_t* x16_15 = x9_4 + x8_1 + x11_9
                void* x14_20 = x11_9 + j_6
                void* x11_10 = x21 + x11_9
                void* j_3
                
                do
                    v0.q = *x13_16
                    x13_16 += 8
                    v1.q = *x16_15
                    x16_15 = &x16_15[1]
                    j_3 = j_6
                    j_6 -= 8
                    *x11_10 = (v1 ^ v0).q
                    x11_10 += 8
                while (j_3 != 8)
                x11_9 = x14_20
                
                if (x12_34 != 0)
                    goto label_e24870
        
        int64_t x24_1 = 0xa8 - *(x19 + 0x38)
        x22 = &x22[x24_1]
        arg1, v0, v1, v2, v3, v4, v5, v6, v7 = Botan::SHA_3::permute(*(x19 + 8))
        int64_t* x10_5 = *(x19 + 8)
        int64_t* x11_8 = *(x19 + 0x20)
        i -= x24_1
        x8_1 = nullptr
        x9_1 = nullptr
        x21 += x24_1
        *x11_8 = *x10_5
        x11_8[1] = x10_5[1]
        x11_8[2] = x10_5[2]
        x11_8[3] = x10_5[3]
        x11_8[4] = x10_5[4]
        x11_8[5] = x10_5[5]
        x11_8[6] = x10_5[6]
        x11_8[7] = x10_5[7]
        x11_8[8] = x10_5[8]
        x11_8[9] = x10_5[9]
        x11_8[0xa] = x10_5[0xa]
        x11_8[0xb] = x10_5[0xb]
        x11_8[0xc] = x10_5[0xc]
        x11_8[0xd] = x10_5[0xd]
        x11_8[0xe] = x10_5[0xe]
        x11_8[0xf] = x10_5[0xf]
        x11_8[0x10] = x10_5[0x10]
        x11_8[0x11] = x10_5[0x11]
        x11_8[0x12] = x10_5[0x12]
        x11_8[0x13] = x10_5[0x13]
        x11_8[0x14] = x10_5[0x14]
        x10 = 0xa8
        *(x19 + 0x38) = 0
    while (i u> 0xa7)
else
    x9_1 = x8_1

void* x8_2 = *(x19 + 0x20)
void* x10_1 = i & 0xffffffffffffffe0

if (x10_1 != 0)
    int64_t x11_1 = 0
    
    if (x10_1 == 0x20 || x21 + 0x10 + x10_1 - 0x20 u< x21 + 0x10
        || x21 + 0x18 + x10_1 - 0x20 u< x21 + 0x18 || x21 + 8 + x10_1 - 0x20 u< x21 + 8
        || x21 + x10_1 - 0x20 u< x21)
    label_e24490:
        void* i_6 = x11_1 - x10_1
        void* x11_3 = &x22[x11_1 + 0x10]
        void* x13_4 = x21 + x11_1 + 0x10
        void* x14_9 = x11_1 + x9_1 + x8_2 + 0x10
        void* i_1
        
        do
            v0 = *(x11_3 - 0x10)
            v1 = *x11_3
            v2 = *(x14_9 - 0x10)
            v3 = *x14_9
            i_1 = i_6
            i_6 += 0x20
            x11_3 += 0x20
            x14_9 += 0x20
            *(x13_4 - 0x10) = v2 ^ v0
            *x13_4 = v3 ^ v1
            x13_4 += 0x20
        while (i_1 != -0x20)
    else
        void* x15_2 = x21 + x10_1
        int64_t* x12_3 = x8_2 + x9_1
        x11_1 = 0
        
        if (((x21 u< x22 + x10_1 ? 1 : 0) & (x22 u< x15_2 ? 1 : 0) & 1) != 0
                || ((x21 u< x8_2 + x9_1 + x10_1 ? 1 : 0) & (x12_3 u< x15_2 ? 1 : 0) & 1) != 0)
            goto label_e24490
        
        int64_t i_9 = (((x10_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x11_1 = i_9 << 5
        int64_t i_8 = i_9
        uint8_t* x16_5 = x22
        uint64_t x17_3 = x21
        int64_t i_2
        
        do
            v0.q = *x16_5
            v1.q = *(x16_5 + 8)
            v2.q = *(x16_5 + 0x10)
            v3.q = *(x16_5 + 0x18)
            v0:8.q = *(x16_5 + 0x20)
            v1:8.q = *(x16_5 + 0x28)
            v2:8.q = *(x16_5 + 0x30)
            v3:8.q = *(x16_5 + 0x38)
            x16_5 = &x16_5[0x40]
            v4.q = *x12_3
            v5.q = x12_3[1]
            v6.q = x12_3[2]
            v7.q = x12_3[3]
            v4:8.q = x12_3[4]
            v5:8.q = x12_3[5]
            v6:8.q = x12_3[6]
            v7:8.q = x12_3[7]
            x12_3 = &x12_3[8]
            i_2 = i_8
            i_8 -= 2
            int128_t v16_1 = v4 ^ v0
            int128_t v17_1 = v5 ^ v1
            int128_t v18_1 = v6 ^ v2
            int128_t v19_1 = v7 ^ v3
            *x17_3 = v16_1.q
            *(x17_3 + 8) = v17_1.q
            *(x17_3 + 0x10) = v18_1.q
            *(x17_3 + 0x18) = v19_1.q
            *(x17_3 + 0x20) = v16_1:8.q
            *(x17_3 + 0x28) = v17_1:8.q
            *(x17_3 + 0x30) = v18_1:8.q
            *(x17_3 + 0x38) = v19_1:8.q
            x17_3 += 0x40
        while (i_2 != 2)
        
        if (((x10_1 - 0x20) u>> 5) + 1 != i_9)
            goto label_e24490

if (i != x10_1)
    if ((i & 0x18) == 0)
    label_e2456c:
        void* i_5 = i - x10_1
        char* x12_7 = x21 + x10_1
        void* x8_3 = x8_2 + x10_1 + x9_1
        void* x9_3 = x22 + x10_1
        void* i_3
        
        do
            char x10_3 = *x9_3
            x9_3 += 1
            char x13_10 = *x8_3
            x8_3 += 1
            i_3 = i_5
            i_5 -= 1
            *x12_7 = x13_10 ^ x10_3
            x12_7 = &x12_7[1]
        while (i_3 != 1)
    else
        void* x11_4 = x21 + x10_1
        int64_t x12_4 = x21 + i
        
        if (((x11_4 u< &x22[i] ? 1 : 0) & (x22 + x10_1 u< x12_4 ? 1 : 0) & 1) != 0 || ((
                x11_4 u< x8_2 + x9_1 + i ? 1 : 0) & (x8_2 + x9_1 + x10_1 u< x12_4 ? 1 : 0) & 1) != 0)
            goto label_e2456c
        
        int64_t x11_7 = i & 7
        int64_t i_7 = (i & 0x1f) - x11_7
        void* x12_6 = x22 + x10_1
        void* x15_7 = x8_2 + x9_1 + x10_1
        void* x13_9 = x10_1 + i_7
        int64_t* x10_2 = x21 + x10_1
        int64_t i_4
        
        do
            v0.q = *x12_6
            x12_6 += 8
            v1.q = *x15_7
            x15_7 += 8
            i_4 = i_7
            i_7 -= 8
            *x10_2 = (v1 ^ v0).q
            x10_2 = &x10_2[1]
        while (i_4 != 8)
        x10_1 = x13_9
        
        if (x11_7 != 0)
            goto label_e2456c

*(x19 + 0x38) += i
