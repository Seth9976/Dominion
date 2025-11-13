// 函数: _ZN5Botan3OFB6cipherEPKhPhm
// 地址: 0xde1224
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x10)
void* const x9 = *(arg1 + 0x28)
int64_t entry_x3
int64_t x19 = entry_x3
uint64_t x21 = arg3
void* x10_2 = *(arg1 + 0x18) - x8 - x9
uint8_t const* x20 = arg1
uint8_t* x22 = arg2
void* const x11_1
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
        void* x11_6 = x10_2 & 0xffffffffffffffe0
        
        if (x11_6 != 0)
            int64_t x12_8 = 0
            
            if (x11_6 == 0x20 || x21 + 0x10 + x11_6 - 0x20 u< x21 + 0x10
                || x21 + 0x18 + x11_6 - 0x20 u< x21 + 0x18 || x21 + 8 + x11_6 - 0x20 u< x21 + 8
                || x21 + x11_6 - 0x20 u< x21)
            label_de15c8:
                void* i_11 = x12_8 - x11_6
                void* x12_10 = &x22[x12_8 + 0x10]
                void* x14_15 = x21 + x12_8 + 0x10
                void* x15_16 = x8 + x12_8 + x9 + 0x10
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
                void* x16_9 = x21 + x11_6
                void* x13_13 = x8 + x9
                x12_8 = 0
                
                if (((x21 u< x22 + x11_6 ? 1 : 0) & (x22 u< x16_9 ? 1 : 0) & 1) != 0
                        || ((x21 u< x11_6 + x9 + x8 ? 1 : 0) & (x13_13 u< x16_9 ? 1 : 0) & 1) != 0)
                    goto label_de15c8
                
                int64_t i_17 = (((x11_6 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                x12_8 = i_17 << 5
                int64_t i_15 = i_17
                uint8_t* x17_8 = x22
                uint64_t x0_5 = x21
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
                    *x0_5 = v16_2.q
                    *(x0_5 + 8) = v17_2.q
                    *(x0_5 + 0x10) = v18_2.q
                    *(x0_5 + 0x18) = v19_2.q
                    *(x0_5 + 0x20) = v16_2:8.q
                    *(x0_5 + 0x28) = v17_2:8.q
                    *(x0_5 + 0x30) = v18_2:8.q
                    *(x0_5 + 0x38) = v19_2:8.q
                    x0_5 += 0x40
                while (i_1 != 2)
                
                if (((x11_6 - 0x20) u>> 5) + 1 != i_17)
                    goto label_de15c8
        
        if (x10_2 != x11_6)
            if ((x10_2 & 0x18) == 0)
            label_de16a8:
                int64_t i_9 = x10_2 - x11_6
                void* x12_15 = x21 + x11_6
                void* x8_9 = x8 + x11_6 + x9
                void* x9_7 = x22 + x11_6
                int64_t i_2
                
                do
                    char x11_7 = *x9_7
                    x9_7 += 1
                    char x13_17 = *x8_9
                    x8_9 += 1
                    i_2 = i_9
                    i_9 -= 1
                    *x12_15 = x13_17 ^ x11_7
                    x12_15 += 1
                while (i_2 != 1)
            else
                void* x12_11 = x21 + x11_6
                void* x13_14 = x21 + x10_2
                
                if (((x12_11 u< x22 + x10_2 ? 1 : 0) & (x22 + x11_6 u< x13_14 ? 1 : 0) & 1) != 0
                        || ((x12_11 u< x8 + x9 + x10_2 ? 1 : 0)
                        & (x8 + x9 + x11_6 u< x13_14 ? 1 : 0) & 1) != 0)
                    goto label_de16a8
                
                void* x12_14 = x10_2 & 7
                void* i_14 = (x10_2 & 0x1f) - x12_14
                void* x13_16 = x22 + x11_6
                int64_t* x16_15 = x8 + x9 + x11_6
                void* x14_20 = x11_6 + i_14
                void* x11_5 = x21 + x11_6
                void* i_3
                
                do
                    v0.q = *x13_16
                    x13_16 += 8
                    v1.q = *x16_15
                    x16_15 = &x16_15[1]
                    i_3 = i_14
                    i_14 -= 8
                    *x11_5 = (v1 ^ v0).q
                    x11_5 += 8
                while (i_3 != 8)
                x11_6 = x14_20
                
                if (x12_14 != 0)
                    goto label_de16a8
        
        int64_t* x24_1 = *(x20 + 8)
        int64_t x23_1 = *(x20 + 0x10)
        int64_t x9_4 = *(x20 + 0x28)
        int64_t x25_1 = *(x20 + 0x18) - x23_1
        x19 = x9_4 + x19 - x25_1
        int64_t x9_5 = x25_1 - x9_4
        x22 = &x22[x9_5]
        x21 += x9_5
        arg1, v0, v1, v2, v3, v4, v5, v6, v7 =
            (*(*x24_1 + 0x48))(x24_1, x23_1, x23_1, x25_1 u/ (*(*x24_1 + 0x30))(x24_1))
        x8 = *(x20 + 0x10)
        int64_t x10_11 = *(x20 + 0x18)
        x9 = nullptr
        x11_1 = nullptr
        *(x20 + 0x28) = 0
        x10_2 = x10_11 - x8
    while (x19 u>= x10_2)
else
    x11_1 = x9

void* x9_2 = x19 & 0xffffffffffffffe0

if (x9_2 != 0)
    int64_t x10_3 = 0
    
    if (x9_2 == 0x20 || x21 + 0x10 + x9_2 - 0x20 u< x21 + 0x10
        || x21 + 0x18 + x9_2 - 0x20 u< x21 + 0x18 || x21 + 8 + x9_2 - 0x20 u< x21 + 8
        || x21 + x9_2 - 0x20 u< x21)
    label_de134c:
        void* i_10 = x10_3 - x9_2
        void* x10_5 = &x22[x10_3 + 0x10]
        void* x13_4 = x21 + x10_3 + 0x10
        void* x14_9 = x10_3 + x11_1 + x8 + 0x10
        void* i_4
        
        do
            v0 = *(x10_5 - 0x10)
            v1 = *x10_5
            v2 = *(x14_9 - 0x10)
            v3 = *x14_9
            i_4 = i_10
            i_10 += 0x20
            x10_5 += 0x20
            x14_9 += 0x20
            *(x13_4 - 0x10) = v2 ^ v0
            *x13_4 = v3 ^ v1
            x13_4 += 0x20
        while (i_4 != -0x20)
    else
        void* x15_2 = x21 + x9_2
        int64_t* x12_3 = x8 + x11_1
        x10_3 = 0
        
        if (((x21 u< x22 + x9_2 ? 1 : 0) & (x22 u< x15_2 ? 1 : 0) & 1) != 0
                || ((x21 u< x8 + x11_1 + x9_2 ? 1 : 0) & (x12_3 u< x15_2 ? 1 : 0) & 1) != 0)
            goto label_de134c
        
        int64_t i_16 = (((x9_2 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x10_3 = i_16 << 5
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
        
        if (((x9_2 - 0x20) u>> 5) + 1 != i_16)
            goto label_de134c

if (x19 != x9_2)
    if ((x19 & 0x18) == 0)
    label_de1428:
        void* i_8 = x19 - x9_2
        char* x12_7 = x21 + x9_2
        void* x8_1 = x8 + x9_2 + x11_1
        void* x9_3 = x22 + x9_2
        void* i_6
        
        do
            char x11_3 = *x9_3
            x9_3 += 1
            char x13_10 = *x8_1
            x8_1 += 1
            i_6 = i_8
            i_8 -= 1
            *x12_7 = x13_10 ^ x11_3
            x12_7 = &x12_7[1]
        while (i_6 != 1)
    else
        void* x10_6 = x21 + x9_2
        int64_t x12_4 = x21 + x19
        
        if (((x10_6 u< &x22[x19] ? 1 : 0) & (x22 + x9_2 u< x12_4 ? 1 : 0) & 1) != 0
                || ((x10_6 u< x8 + x11_1 + x19 ? 1 : 0) & (x8 + x11_1 + x9_2 u< x12_4 ? 1 : 0) & 1)
                != 0)
            goto label_de1428
        
        int64_t x10_9 = x19 & 7
        int64_t i_12 = (x19 & 0x1f) - x10_9
        void* x12_6 = x22 + x9_2
        void* x15_7 = x8 + x11_1 + x9_2
        void* x13_9 = x9_2 + i_12
        int64_t* x9_1 = x21 + x9_2
        int64_t i_7
        
        do
            v0.q = *x12_6
            x12_6 += 8
            v1.q = *x15_7
            x15_7 += 8
            i_7 = i_12
            i_12 -= 8
            *x9_1 = (v1 ^ v0).q
            x9_1 = &x9_1[1]
        while (i_7 != 8)
        x9_2 = x13_9
        
        if (x10_9 != 0)
            goto label_de1428

*(x20 + 0x28) += x19
