// 函数: _ZN5Botan3RC46cipherEPKhPhm
// 地址: 0xe00740
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t const* x19 = arg1

if (*(arg1 + 0x18) == *(arg1 + 0x20))
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::RC4::generate() __tailcall

void* x8_1 = *(x19 + 0x30)
void* x9_1 = *(x19 + 0x48)
int64_t entry_x3
int64_t x20 = entry_x3
uint64_t x21 = arg3
void* x10_2 = *(x19 + 0x38) - x8_1 - x9_1
uint8_t* x22 = arg2
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7

if (x10_2 u<= entry_x3)
    do
        void* x11_9 = x10_2 & 0xffffffffffffffe0
        
        if (x11_9 != 0)
            int64_t x12_8 = nullptr
            
            if (x11_9 == 0x20 || x21 + 0x10 + x11_9 - 0x20 u< x21 + 0x10
                || x21 + 0x18 + x11_9 - 0x20 u< x21 + 0x18 || x21 + 8 + x11_9 - 0x20 u< x21 + 8
                || x21 + x11_9 - 0x20 u< x21)
            label_e00ab8:
                void* i_11 = x12_8 - x11_9
                void* x12_10 = &x22[x12_8 + 0x10]
                void* x14_15 = x21 + x12_8 + 0x10
                void* x15_16 = x8_1 + x12_8 + x9_1 + 0x10
                void* i
                
                do
                    v0 = *(x12_10 - 0x10)
                    v1 = *x12_10
                    v2 = *(x15_16 - 0x10)
                    v3 = *x15_16
                    i = i_11
                    i_11 += 0x20
                    x12_10 += 0x20
                    x15_16 += 0x20
                    *(x14_15 - 0x10) = v2 ^ v0
                    *x14_15 = v3 ^ v1
                    x14_15 += 0x20
                while (i != -0x20)
            else
                void* x16_9 = x21 + x11_9
                void* x13_13 = x8_1 + x9_1
                x12_8 = 0
                
                if (((x21 u< x22 + x11_9 ? 1 : 0) & (x22 u< x16_9 ? 1 : 0) & 1) != 0
                        || ((x21 u< x11_9 + x9_1 + x8_1 ? 1 : 0) & (x13_13 u< x16_9 ? 1 : 0) & 1)
                        != 0)
                    goto label_e00ab8
                
                int64_t i_17 = (((x11_9 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                x12_8 = i_17 << 5
                int64_t i_15 = i_17
                uint8_t* x17_8 = x22
                uint64_t x0_3 = x21
                int64_t i_1
                
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
                    v5.q = *(x13_13 + 8)
                    v6.q = *(x13_13 + 0x10)
                    v7.q = *(x13_13 + 0x18)
                    v4:8.q = *(x13_13 + 0x20)
                    v5:8.q = *(x13_13 + 0x28)
                    v6:8.q = *(x13_13 + 0x30)
                    v7:8.q = *(x13_13 + 0x38)
                    x13_13 += 0x40
                    i_1 = i_15
                    i_15 -= 2
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
                while (i_1 != 2)
                
                if (((x11_9 - 0x20) u>> 5) + 1 != i_17)
                    goto label_e00ab8
        
        if (x10_2 != x11_9)
            if ((x10_2 & 0x18) == 0)
            label_e00b98:
                int64_t i_8 = x10_2 - x11_9
                void* x12_15 = x21 + x11_9
                void* x8_8 = x8_1 + x11_9 + x9_1
                void* x9_7 = x22 + x11_9
                int64_t i_2
                
                do
                    char x11_10 = *x9_7
                    x9_7 += 1
                    char x13_17 = *x8_8
                    x8_8 += 1
                    i_2 = i_8
                    i_8 -= 1
                    *x12_15 = x13_17 ^ x11_10
                    x12_15 += 1
                while (i_2 != 1)
            else
                void* x12_11 = x21 + x11_9
                void* x13_14 = x21 + x10_2
                
                if (((x12_11 u< x22 + x10_2 ? 1 : 0) & (x22 + x11_9 u< x13_14 ? 1 : 0) & 1) != 0
                        || ((x12_11 u< x8_1 + x9_1 + x10_2 ? 1 : 0)
                        & (x8_1 + x9_1 + x11_9 u< x13_14 ? 1 : 0) & 1) != 0)
                    goto label_e00b98
                
                void* x12_14 = x10_2 & 7
                void* i_14 = (x10_2 & 0x1f) - x12_14
                void* x13_16 = x22 + x11_9
                int64_t* x16_15 = x8_1 + x9_1 + x11_9
                void* x14_20 = x11_9 + i_14
                void* x11_8 = x21 + x11_9
                void* i_3
                
                do
                    v0.q = *x13_16
                    x13_16 += 8
                    v1.q = *x16_15
                    x16_15 = &x16_15[1]
                    i_3 = i_14
                    i_14 -= 8
                    *x11_8 = (v1 ^ v0).q
                    x11_8 += 8
                while (i_3 != 8)
                x11_9 = x14_20
                
                if (x12_14 != 0)
                    goto label_e00b98
        
        int64_t x10_7 = *(x19 + 0x48)
        int64_t x8_6 = *(x19 + 0x38) - *(x19 + 0x30)
        x20 = x10_7 + x20 - x8_6
        int64_t x8_7 = x8_6 - x10_7
        x22 = &x22[x8_7]
        x21 += x8_7
        arg1, v0, v1, v2, v3, v4, v5, v6, v7 = Botan::RC4::generate()
        x8_1 = *(x19 + 0x30)
        x9_1 = *(x19 + 0x48)
        x10_2 = *(x19 + 0x38) - x8_1 - x9_1
    while (x20 u>= x10_2)

void* x10_4 = x20 & 0xffffffffffffffe0

if (x10_4 != 0)
    int64_t x11_1 = 0
    
    if (x10_4 == 0x20 || x21 + 0x10 + x10_4 - 0x20 u< x21 + 0x10
        || x21 + 0x18 + x10_4 - 0x20 u< x21 + 0x18 || x21 + 8 + x10_4 - 0x20 u< x21 + 8
        || x21 + x10_4 - 0x20 u< x21)
    label_e0086c:
        void* i_10 = x11_1 - x10_4
        void* x11_3 = &x22[x11_1 + 0x10]
        void* x13_4 = x21 + x11_1 + 0x10
        void* x14_9 = x11_1 + x9_1 + x8_1 + 0x10
        void* i_4
        
        do
            v0 = *(x11_3 - 0x10)
            v1 = *x11_3
            v2 = *(x14_9 - 0x10)
            v3 = *x14_9
            i_4 = i_10
            i_10 += 0x20
            x11_3 += 0x20
            x14_9 += 0x20
            *(x13_4 - 0x10) = v2 ^ v0
            *x13_4 = v3 ^ v1
            x13_4 += 0x20
        while (i_4 != -0x20)
    else
        void* x15_2 = x21 + x10_4
        int64_t* x12_3 = x8_1 + x9_1
        x11_1 = 0
        
        if (((x21 u< x22 + x10_4 ? 1 : 0) & (x22 u< x15_2 ? 1 : 0) & 1) != 0
                || ((x21 u< x8_1 + x9_1 + x10_4 ? 1 : 0) & (x12_3 u< x15_2 ? 1 : 0) & 1) != 0)
            goto label_e0086c
        
        int64_t i_16 = (((x10_4 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x11_1 = i_16 << 5
        int64_t i_13 = i_16
        uint8_t* x16_5 = x22
        uint64_t x17_3 = x21
        int64_t i_5
        
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
            i_5 = i_13
            i_13 -= 2
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
        while (i_5 != 2)
        
        if (((x10_4 - 0x20) u>> 5) + 1 != i_16)
            goto label_e0086c

if (x20 != x10_4)
    if ((x20 & 0x18) == 0)
    label_e00948:
        void* i_9 = x20 - x10_4
        void* x12_7 = x21 + x10_4
        char* x8_2 = x8_1 + x10_4 + x9_1
        void* x9_3 = x22 + x10_4
        void* i_6
        
        do
            char x10_5 = *x9_3
            x9_3 += 1
            char x13_10 = *x8_2
            x8_2 = &x8_2[1]
            i_6 = i_9
            i_9 -= 1
            *x12_7 = x13_10 ^ x10_5
            x12_7 += 1
        while (i_6 != 1)
    else
        void* x11_4 = x21 + x10_4
        int64_t x12_4 = x21 + x20
        
        if (((x11_4 u< &x22[x20] ? 1 : 0) & (x22 + x10_4 u< x12_4 ? 1 : 0) & 1) != 0 || ((
                x11_4 u< x8_1 + x9_1 + x20 ? 1 : 0) & (x8_1 + x9_1 + x10_4 u< x12_4 ? 1 : 0) & 1) != 0)
            goto label_e00948
        
        int64_t x11_7 = x20 & 7
        int64_t i_12 = (x20 & 0x1f) - x11_7
        void* x12_6 = x22 + x10_4
        int64_t* x15_7 = x8_1 + x9_1 + x10_4
        void* x13_9 = x10_4 + i_12
        void* x10_3 = x21 + x10_4
        int64_t i_7
        
        do
            v0.q = *x12_6
            x12_6 += 8
            v1.q = *x15_7
            x15_7 = &x15_7[1]
            i_7 = i_12
            i_12 -= 8
            *x10_3 = (v1 ^ v0).q
            x10_3 += 8
        while (i_7 != 8)
        x10_4 = x13_9
        
        if (x11_7 != 0)
            goto label_e00948

*(x19 + 0x48) += x20
