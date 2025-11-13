// 函数: _ZN5Botan13ANSI_X919_MAC8add_dataEPKhm
// 地址: 0xeca1d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x20)
uint8_t const* x19 = arg1

if (x8 == *(arg1 + 0x28))
    return Botan::ANSI_X919_MAC::final_result(Botan::SymmetricAlgorithm::throw_key_not_set_error())
        __tailcall

void* x9_1 = *(x19 + 0x38)
void* entry_x2
void* x24

if (8 - x9_1 u> entry_x2)
    x24 = entry_x2
else
    x24 = 8 - x9_1

void* x10_1 = x24 & 0xffffffffffffffe0
int128_t entry_v0
int128_t entry_v1

if (x10_1 != 0)
    int64_t x11_1 = 0
    
    if (x10_1 == 0x20)
        goto label_eca2d8
    
    void* x14_1 = x9_1 + x8
    void* x12_1 = x8 + x9_1
    
    if (x14_1 + 0x18 + x10_1 - 0x20 u< x14_1 + 0x18 || x14_1 + 0x10 + x10_1 - 0x20 u< x14_1 + 0x10
            || x14_1 + 8 + x10_1 - 0x20 u< x14_1 + 8 || x12_1 + x10_1 - 0x20 u< x12_1)
        goto label_eca2d8
    
    int128_t v2
    int128_t v3
    
    if (x12_1 u>= arg2 + x10_1 || x8 + x9_1 + x10_1 u<= arg2)
        int64_t i_18 = (((x10_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x11_1 = i_18 << 5
        int64_t i_16 = i_18
        uint64_t x16_3 = arg2
        int64_t i
        
        do
            entry_v0.q = *x12_1
            entry_v1.q = *(x12_1 + 8)
            v2.q = *(x12_1 + 0x10)
            v3.q = *(x12_1 + 0x18)
            entry_v0:8.q = *(x12_1 + 0x20)
            entry_v1:8.q = *(x12_1 + 0x28)
            v2:8.q = *(x12_1 + 0x30)
            v3:8.q = *(x12_1 + 0x38)
            int128_t v4
            v4.q = *x16_3
            int128_t v5
            v5.q = *(x16_3 + 8)
            int128_t v6
            v6.q = *(x16_3 + 0x10)
            int128_t v7
            v7.q = *(x16_3 + 0x18)
            v4:8.q = *(x16_3 + 0x20)
            v5:8.q = *(x16_3 + 0x28)
            v6:8.q = *(x16_3 + 0x30)
            v7:8.q = *(x16_3 + 0x38)
            x16_3 += 0x40
            i = i_16
            i_16 -= 2
            int128_t v16_1 = v4 ^ entry_v0
            int128_t v17_1 = v5 ^ entry_v1
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
        
        if (((x10_1 - 0x20) u>> 5) + 1 != i_18)
            goto label_eca2d8
    else
        x11_1 = nullptr
    label_eca2d8:
        void* i_12 = x11_1 - x10_1
        void* x11_7 = x11_1 + x9_1 + x8 + 0x10
        void* x13_4 = x11_1 + arg2 + 0x10
        void* i_1
        
        do
            v2 = *(x13_4 - 0x10)
            v3 = *x13_4
            i_1 = i_12
            i_12 += 0x20
            x13_4 += 0x20
            entry_v0 = v2 ^ *(x11_7 - 0x10)
            entry_v1 = v3 ^ *x11_7
            *(x11_7 - 0x10) = entry_v0
            *x11_7 = entry_v1
            x11_7 += 0x20
        while (i_1 != -0x20)

if (x24 != x10_1)
    if ((x24 & 0x18) == 0)
    label_eca378:
        void* i_10 = x24 - x10_1
        void* x8_1 = x8 + x10_1 + x9_1
        char* x9_3 = arg2 + x10_1
        void* i_2
        
        do
            char x10_2 = *x9_3
            x9_3 = &x9_3[1]
            i_2 = i_10
            i_10 -= 1
            *x8_1 ^= x10_2
            x8_1 += 1
        while (i_2 != 1)
    else
        int64_t* x11_9 = x8 + x9_1 + x10_1
        int64_t* x12_3 = arg2 + x10_1
        
        if (x11_9 u< arg2 + x24 && x12_3 u< x8 + x9_1 + x24)
            goto label_eca378
        
        void* x13_7 = x24 & 7
        void* i_15 = (x24 & 0x1f) - x13_7
        x10_1 += i_15
        void* i_3
        
        do
            entry_v0.q = *x12_3
            x12_3 = &x12_3[1]
            entry_v1.q = *x11_9
            i_3 = i_15
            i_15 -= 8
            entry_v0 ^= entry_v1
            *x11_9 = entry_v0.q
            x11_9 = &x11_9[1]
        while (i_3 != 8)
        
        if (x13_7 != 0)
            goto label_eca378

void* x8_3 = *(x19 + 0x38) + x24
*(x19 + 0x38) = x8_3

if (x8_3 u< 8)
    return 

int64_t* x22_1 = *(x19 + 0x10)
int64_t x23_1 = *(x19 + 0x20)
int128_t v0
int128_t v1
int128_t v2_1
int128_t v3_1
int128_t v4_1
int128_t v5_1
int128_t v6_1
int128_t v7_1
arg1, v0, v1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = (*(*x22_1 + 0x48))(x22_1, x23_1, x23_1, 
    (*(x19 + 0x28) - x23_1) u/ (*(*x22_1 + 0x30))(x22_1, entry_v0, entry_v1))
void* i_4 = entry_x2 - x24
char* x23_2 = arg2 + x24

if (i_4 u>= 8)
    do
        char* x8_8 = *(x19 + 0x20)
        char x11_10 = x8_8[1]
        *x8_8 ^= *x23_2
        char x10_5 = x8_8[2]
        x8_8[1] = x11_10 ^ x23_2[1]
        char x11_11 = x8_8[3]
        x8_8[2] = x10_5 ^ x23_2[2]
        char x10_6 = x8_8[4]
        x8_8[3] = x11_11 ^ x23_2[3]
        char x11_12 = x8_8[5]
        x8_8[4] = x10_6 ^ x23_2[4]
        char x10_7 = x8_8[6]
        x8_8[5] = x11_12 ^ x23_2[5]
        x8_8[6] = x10_7 ^ x23_2[6]
        x8_8[7] ^= x23_2[7]
        int64_t* x20_1 = *(x19 + 0x10)
        int64_t x21_1 = *(x19 + 0x20)
        arg1, v0, v1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = (*(*x20_1 + 0x48))(x20_1, x21_1, x21_1, 
            (*(x19 + 0x28) - x21_1) u/ (*(*x20_1 + 0x30))(x20_1))
        i_4 -= 8
        x23_2 = &x23_2[8]
    while (i_4 u> 7)

void* x9_22 = *(x19 + 0x20)
void* x8_13 = i_4 & 0xffffffffffffffe0

if (x8_13 != 0)
    int64_t x10_9 = 0
    
    if (x8_13 == 0x20 || x9_22 + 0x18 + x8_13 - 0x20 u< x9_22 + 0x18
            || x9_22 + 0x10 + x8_13 - 0x20 u< x9_22 + 0x10 || x9_22 + 8 + x8_13 - 0x20 u< x9_22 + 8
            || x9_22 + x8_13 - 0x20 u< x9_22)
        goto label_eca584
    
    if (x9_22 u>= x23_2 + x8_13 || x23_2 u>= x9_22 + x8_13)
        int64_t i_17 = (((x8_13 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x10_9 = i_17 << 5
        int64_t i_13 = i_17
        char* x14_7 = x23_2
        void* x15_4 = x9_22
        int64_t i_5
        
        do
            v0.q = *x15_4
            v1.q = *(x15_4 + 8)
            v2_1.q = *(x15_4 + 0x10)
            v3_1.q = *(x15_4 + 0x18)
            v0:8.q = *(x15_4 + 0x20)
            v1:8.q = *(x15_4 + 0x28)
            v2_1:8.q = *(x15_4 + 0x30)
            v3_1:8.q = *(x15_4 + 0x38)
            v4_1.q = *x14_7
            v5_1.q = *(x14_7 + 8)
            v6_1.q = *(x14_7 + 0x10)
            v7_1.q = *(x14_7 + 0x18)
            v4_1:8.q = *(x14_7 + 0x20)
            v5_1:8.q = *(x14_7 + 0x28)
            v6_1:8.q = *(x14_7 + 0x30)
            v7_1:8.q = *(x14_7 + 0x38)
            x14_7 = &x14_7[0x40]
            i_5 = i_13
            i_13 -= 2
            int128_t v16_2 = v4_1 ^ v0
            int128_t v17_2 = v5_1 ^ v1
            int128_t v18_2 = v6_1 ^ v2_1
            int128_t v19_2 = v7_1 ^ v3_1
            *x15_4 = v16_2.q
            *(x15_4 + 8) = v17_2.q
            *(x15_4 + 0x10) = v18_2.q
            *(x15_4 + 0x18) = v19_2.q
            *(x15_4 + 0x20) = v16_2:8.q
            *(x15_4 + 0x28) = v17_2:8.q
            *(x15_4 + 0x30) = v18_2:8.q
            *(x15_4 + 0x38) = v19_2:8.q
            x15_4 += 0x40
        while (i_5 != 2)
        
        if (((x8_13 - 0x20) u>> 5) + 1 != i_17)
            goto label_eca584
    else
        x10_9 = 0
    label_eca584:
        void* i_11 = x10_9 - x8_13
        void* x10_13 = &x23_2[x10_9 + 0x10]
        void* x12_8 = x9_22 + x10_9 + 0x10
        void* i_6
        
        do
            v2_1 = *(x10_13 - 0x10)
            v3_1 = *x10_13
            i_6 = i_11
            i_11 += 0x20
            x10_13 += 0x20
            v1 = v3_1 ^ *x12_8
            *(x12_8 - 0x10) ^= v2_1
            *x12_8 = v1
            x12_8 += 0x20
        while (i_6 != -0x20)

if (i_4 != x8_13)
    if ((i_4 & 0x18) == 0)
    label_eca610:
        int64_t i_9 = i_4 - x8_13
        void* x9_23 = x9_22 + x8_13
        void* x8_14 = x23_2 + x8_13
        int64_t i_7
        
        do
            char x11_17 = *x8_14
            x8_14 += 1
            i_7 = i_9
            i_9 -= 1
            *x9_23 ^= x11_17
            x9_23 += 1
        while (i_7 != 1)
    else
        void* x10_14 = x9_22 + x8_13
        void* x11_16 = x23_2 + x8_13
        
        if (x10_14 u< x23_2 + i_4 && x11_16 u< x9_22 + i_4)
            goto label_eca610
        
        void* x12_10 = i_4 & 7
        void* i_14 = (i_4 & 0x1f) - x12_10
        x8_13 += i_14
        void* i_8
        
        do
            v0.q = *x11_16
            x11_16 += 8
            v1.q = *x10_14
            i_8 = i_14
            i_14 -= 8
            *x10_14 = (v1 ^ v0).q
            x10_14 += 8
        while (i_8 != 8)
        
        if (x12_10 != 0)
            goto label_eca610

*(x19 + 0x38) = i_4
