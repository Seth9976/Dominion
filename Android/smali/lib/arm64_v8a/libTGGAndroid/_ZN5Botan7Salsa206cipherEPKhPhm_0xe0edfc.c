// 函数: _ZN5Botan7Salsa206cipherEPKhPhm
// 地址: 0xe0edfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t const* x19 = arg1

if (*(arg1 + 0x20) == *(arg1 + 0x28))
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::Salsa20::initialize_state() __tailcall

void* x8_1 = *(x19 + 0x38)
void* const x9_1 = *(x19 + 0x50)
void* entry_x3
void* x20 = entry_x3
uint64_t x21 = arg3
void* x23 = *(x19 + 0x40) - x8_1 - x9_1
uint8_t* x22 = arg2
void* const x10_2
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7

if (x23 u<= entry_x3)
    do
        void* x10_7 = x23 & 0xffffffffffffffe0
        
        if (x10_7 != 0)
            int64_t x11_13 = 0
            
            if (x10_7 == 0x20 || x21 + 0x10 + x10_7 - 0x20 u< x21 + 0x10
                || x21 + 0x18 + x10_7 - 0x20 u< x21 + 0x18 || x21 + 8 + x10_7 - 0x20 u< x21 + 8
                || x21 + x10_7 - 0x20 u< x21)
            label_e0f194:
                void* i_11 = x11_13 - x10_7
                void* x11_15 = &x22[x11_13 + 0x10]
                void* x13_14 = x21 + x11_13 + 0x10
                void* x14_20 = x8_1 + x11_13 + x9_1 + 0x10
                void* i
                
                do
                    v0 = *(x11_15 - 0x10)
                    v1 = *x11_15
                    v2 = *(x14_20 - 0x10)
                    v3 = *x14_20
                    i = i_11
                    i_11 += 0x20
                    x11_15 += 0x20
                    x14_20 += 0x20
                    *(x13_14 - 0x10) = v2 ^ v0
                    *x13_14 = v3 ^ v1
                    x13_14 += 0x20
                while (i != -0x20)
            else
                void* x15_9 = x21 + x10_7
                void* x12_11 = x8_1 + x9_1
                x11_13 = 0
                
                if (((x21 u< x22 + x10_7 ? 1 : 0) & (x22 u< x15_9 ? 1 : 0) & 1) != 0
                        || ((x21 u< x10_7 + x9_1 + x8_1 ? 1 : 0) & (x12_11 u< x15_9 ? 1 : 0) & 1)
                        != 0)
                    goto label_e0f194
                
                int64_t i_17 = (((x10_7 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                x11_13 = i_17 << 5
                int64_t i_15 = i_17
                uint8_t* x16_12 = x22
                uint64_t x17_6 = x21
                int64_t i_1
                
                do
                    v0.q = *x16_12
                    v1.q = *(x16_12 + 8)
                    v2.q = *(x16_12 + 0x10)
                    v3.q = *(x16_12 + 0x18)
                    v0:8.q = *(x16_12 + 0x20)
                    v1:8.q = *(x16_12 + 0x28)
                    v2:8.q = *(x16_12 + 0x30)
                    v3:8.q = *(x16_12 + 0x38)
                    x16_12 = &x16_12[0x40]
                    v4.q = *x12_11
                    v5.q = *(x12_11 + 8)
                    v6.q = *(x12_11 + 0x10)
                    v7.q = *(x12_11 + 0x18)
                    v4:8.q = *(x12_11 + 0x20)
                    v5:8.q = *(x12_11 + 0x28)
                    v6:8.q = *(x12_11 + 0x30)
                    v7:8.q = *(x12_11 + 0x38)
                    x12_11 += 0x40
                    i_1 = i_15
                    i_15 -= 2
                    int128_t v16_2 = v4 ^ v0
                    int128_t v17_2 = v5 ^ v1
                    int128_t v18_2 = v6 ^ v2
                    int128_t v19_2 = v7 ^ v3
                    *x17_6 = v16_2.q
                    *(x17_6 + 8) = v17_2.q
                    *(x17_6 + 0x10) = v18_2.q
                    *(x17_6 + 0x18) = v19_2.q
                    *(x17_6 + 0x20) = v16_2:8.q
                    *(x17_6 + 0x28) = v17_2:8.q
                    *(x17_6 + 0x30) = v18_2:8.q
                    *(x17_6 + 0x38) = v19_2:8.q
                    x17_6 += 0x40
                while (i_1 != 2)
                
                if (((x10_7 - 0x20) u>> 5) + 1 != i_17)
                    goto label_e0f194
        
        if (x23 != x10_7)
            if ((x23 & 0x18) == 0)
            label_e0f274:
                int64_t i_9 = x23 - x10_7
                void* x12_15 = x21 + x10_7
                void* x8_7 = x8_1 + x10_7 + x9_1
                void* x9_6 = x22 + x10_7
                int64_t i_2
                
                do
                    char x10_8 = *x9_6
                    x9_6 += 1
                    char x13_20 = *x8_7
                    x8_7 += 1
                    i_2 = i_9
                    i_9 -= 1
                    *x12_15 = x13_20 ^ x10_8
                    x12_15 += 1
                while (i_2 != 1)
            else
                void* x11_16 = x21 + x10_7
                void* x12_12 = x21 + x23
                
                if (((x11_16 u< x22 + x23 ? 1 : 0) & (x22 + x10_7 u< x12_12 ? 1 : 0) & 1) != 0 || ((
                        x11_16 u< x8_1 + x23 + x9_1 ? 1 : 0) & (x8_1 + x9_1 + x10_7 u< x12_12 ? 1 : 0) & 1)
                        != 0)
                    goto label_e0f274
                
                void* x11_19 = x23 & 7
                void* i_13 = (x23 & 0x1f) - x11_19
                void* x12_14 = x22 + x10_7
                int64_t* x15_15 = x8_1 + x9_1 + x10_7
                void* x13_19 = x10_7 + i_13
                void* x10_6 = x21 + x10_7
                void* i_3
                
                do
                    v0.q = *x12_14
                    x12_14 += 8
                    v1.q = *x15_15
                    x15_15 = &x15_15[1]
                    i_3 = i_13
                    i_13 -= 8
                    *x10_6 = (v1 ^ v0).q
                    x10_6 += 8
                while (i_3 != 8)
                x10_7 = x13_19
                
                if (x11_19 != 0)
                    goto label_e0f274
        
        arg1, v0, v1, v2, v3, v4, v5, v6, v7 =
            Botan::Salsa20::salsa_core(*(x19 + 0x38), *(x19 + 0x20), 0x14)
        void* x8_5 = *(x19 + 0x20)
        x20 -= x23
        x22 += x23
        x21 += x23
        x9_1 = nullptr
        x10_2 = nullptr
        *(x8_5 + 0x20) += 1
        void* x8_6 = *(x19 + 0x20)
        int32_t x12_8 = *(x8_6 + 0x24)
        int32_t x11_11
        
        if (*(x8_6 + 0x20) == 0)
            x11_11 = x12_8 + 1
        else
            x11_11 = x12_8
        
        *(x8_6 + 0x24) = x11_11
        x8_1 = *(x19 + 0x38)
        int64_t x11_12 = *(x19 + 0x40)
        *(x19 + 0x50) = 0
        x23 = x11_12 - x8_1
    while (x20 u>= x23)
else
    x10_2 = x9_1

void* x9_3 = x20 & 0xffffffffffffffe0

if (x9_3 != 0)
    int64_t x11_1 = 0
    
    if (x9_3 == 0x20 || x21 + 0x10 + x9_3 - 0x20 u< x21 + 0x10
        || x21 + 0x18 + x9_3 - 0x20 u< x21 + 0x18 || x21 + 8 + x9_3 - 0x20 u< x21 + 8
        || x21 + x9_3 - 0x20 u< x21)
    label_e0ef2c:
        void* i_10 = x11_1 - x9_3
        void* x11_3 = &x22[x11_1 + 0x10]
        void* x13_4 = x21 + x11_1 + 0x10
        void* x14_9 = x11_1 + x10_2 + x8_1 + 0x10
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
        void* x15_2 = x21 + x9_3
        int64_t* x12_3 = x8_1 + x10_2
        x11_1 = 0
        
        if (((x21 u< x22 + x9_3 ? 1 : 0) & (x22 u< x15_2 ? 1 : 0) & 1) != 0
                || ((x21 u< x8_1 + x10_2 + x9_3 ? 1 : 0) & (x12_3 u< x15_2 ? 1 : 0) & 1) != 0)
            goto label_e0ef2c
        
        int64_t i_16 = (((x9_3 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x11_1 = i_16 << 5
        int64_t i_14 = i_16
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
            i_5 = i_14
            i_14 -= 2
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
        
        if (((x9_3 - 0x20) u>> 5) + 1 != i_16)
            goto label_e0ef2c

if (x20 != x9_3)
    if ((x20 & 0x18) == 0)
    label_e0f008:
        int64_t i_8 = x20 - x9_3
        char* x12_7 = x21 + x9_3
        void* x8_2 = x8_1 + x9_3 + x10_2
        void* x9_4 = x22 + x9_3
        int64_t i_6
        
        do
            char x10_4 = *x9_4
            x9_4 += 1
            char x13_10 = *x8_2
            x8_2 += 1
            i_6 = i_8
            i_8 -= 1
            *x12_7 = x13_10 ^ x10_4
            x12_7 = &x12_7[1]
        while (i_6 != 1)
    else
        void* x11_4 = x21 + x9_3
        void* x12_4 = x21 + x20
        
        if (((x11_4 u< x22 + x20 ? 1 : 0) & (x22 + x9_3 u< x12_4 ? 1 : 0) & 1) != 0 || ((
                x11_4 u< x8_1 + x10_2 + x20 ? 1 : 0) & (x8_1 + x10_2 + x9_3 u< x12_4 ? 1 : 0) & 1) != 0)
            goto label_e0f008
        
        void* x11_7 = x20 & 7
        void* i_12 = (x20 & 0x1f) - x11_7
        void* x12_6 = x22 + x9_3
        void* x15_7 = x8_1 + x10_2 + x9_3
        void* x13_9 = x9_3 + i_12
        int64_t* x9_2 = x21 + x9_3
        void* i_7
        
        do
            v0.q = *x12_6
            x12_6 += 8
            v1.q = *x15_7
            x15_7 += 8
            i_7 = i_12
            i_12 -= 8
            *x9_2 = (v1 ^ v0).q
            x9_2 = &x9_2[1]
        while (i_7 != 8)
        x9_3 = x13_9
        
        if (x11_7 != 0)
            goto label_e0f008

*(x19 + 0x50) += x20
